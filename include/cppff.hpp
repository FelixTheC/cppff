//
// Created by felix on 06.08.23.
//

#ifndef FLAKE_CPP_CPPFF_HPP
#define FLAKE_CPP_CPPFF_HPP

#include <filesystem>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "antlr4-runtime.h"
#include "CPP14Lexer.h"
#include "click.hpp"

#include "isort.hpp"


namespace fs = std::filesystem;
using namespace antlr4;

namespace cppff
{
    /// @brief Write data back to a specific file.
    /// @param lines the lines which should be written to this file.
    /// @param file_name the existing file which should be written.
    inline void write_to_file(std::vector<std::string> &&lines, const std::string &file_name)
    {
        std::ofstream outFile;
        outFile.open(file_name, std::ios_base::trunc);
        
        if (outFile.is_open())
        {
            std::for_each(lines.cbegin(), lines.cend(), [&outFile](auto &val){
                outFile << val;
                if (val[val.size() - 1] != '\n')
                {
                    outFile << "\n";
                }
            });
        }
        
        outFile.close();
    }
    
    [[ nodiscard ]] static bool get_lexer_tokens(isort::Isort &isort_, const std::string &filename)
    {
        std::ifstream stream;
        stream.open(filename);
        
        if(stream.is_open())
        {
            ANTLRInputStream antlrInputStream = ANTLRInputStream(stream);
            CPP14Lexer cpp14Lexer(&antlrInputStream);
            
            isort_.parse_from_tokens(cpp14Lexer.getAllTokens());
        }
        else
        {
            return false;
        }
        
        stream.close();
        return true;
    }
    
    /// @brief Sort the include paths of a specific file.
    /// @param filename the existing file which should be modified.
    /// @param check a flag which enables a check only approach without modification of the original file.
    inline void isort(const std::string &filename, bool check = false) noexcept
    {
        isort::Isort isort_ { filename };
        auto lexer_tokens = get_lexer_tokens(isort_, filename);
        
        if (lexer_tokens)
        {
            try
            {
                isort_.sort(check);
            }
            catch (std::invalid_argument &err)
            {
                std::cout << err.what() << "\n For file: `" << filename << "`";
            }
            
            write_to_file(std::move(isort_.lines), filename);
        }
    }
    
    /// @brief Helper function which calls itself recursive if the path parameter is a directory.
    /// @param path the filename or directory path which should be modified.
    /// @param check a flag which enables a check only approach without modification of the original file.
    inline void isort_run(const std::string &path, bool check = false) noexcept
    {
        if (fs::is_regular_file(path) && isort::utils::is_cpp_file(path))
        {
            isort(path, check);
        }
        else if (fs::is_directory(path))
        {
            for (const auto &file_path: fs::directory_iterator(path))
            {
                isort_run(file_path.path(), check);
            }
        }
    }
    
    /// @brief Helper function which calls itself recursive if the path parameter is a directory and only for those files which are not inside the exclude_files.
    /// @param path the filename or directory path which should be modified.
    /// @param excluded_files a vector of filenames which should be ignored.
    /// @param check a flag which enables a check only approach without modification of the original file.
    inline void isort_run(const std::string &path, std::vector<std::string> &&excluded_files, bool check = false) noexcept
    {
        if (fs::is_regular_file(path) &&
            isort::utils::is_cpp_file(path) &&
            std::find(excluded_files.begin(), excluded_files.end(), path) == excluded_files.end())
        {
            isort(path, check);
        }
        else if (fs::is_directory(path))
        {
            for (const auto &file_path: fs::directory_iterator(path))
            {
                if (std::find(excluded_files.begin(), excluded_files.end(),path) > excluded_files.end())
                {
                    isort_run(file_path.path(), check);
                }
            }
        }
    }
    
    inline void create_commandline_args(click::Click &cppClick)
    {
        click::Option checkOption {"check"};
        click::Option isortOption {"isort"};
        click::Option excludeOption {"exclude", [](const std::string &val) -> std::string
        {
            return val;
        }};
        click::Argument fileArg {"file_path",
                                 [](const std::string &val) -> std::string
                                 {
                                     bool validFile = (fs::is_regular_file(val) &&
                                                       isort::utils::is_cpp_file(val)) ||
                                                      fs::is_directory(val);
                                     if (validFile)
                                     {
                                         return val;
                                     }
                                     else
                                     {
                                         throw std::invalid_argument("Incorrect file path.: '" + val + "'");
                                     }
                                 }};
        
        excludeOption.set_default_value<std::string>(std::string {});
        excludeOption.set_help_text("A `,` separated list of file paths. Like `/tmp/foo.hpp,/tmp/bar.cpp`");
        
        cppClick.arguments.emplace_back(std::make_unique<click::Argument>(std::move(fileArg)));
        cppClick.options.emplace_back(std::make_unique<click::Option>(std::move(checkOption)));
        cppClick.options.emplace_back(std::make_unique<click::Option>(std::move(isortOption)));
        cppClick.options.emplace_back(std::make_unique<click::Option>(std::move(excludeOption)));
    }
    
    inline std::vector<std::string> get_excludes_files(const std::string &cmd_line_val)
    {
        std::vector<std::string> exclude_files {};
        
        std::stringstream sstream(cmd_line_val);
        std::string partial {};
        
        while(getline(sstream, partial, ','))
        {
            if (partial.starts_with(' '))
            {
                partial = partial.substr(1);
            }
            if (partial.ends_with(' '))
            {
                partial = partial.substr(0, partial.size() - 1);
            }
            exclude_files.emplace_back(partial);
        }
        
        return exclude_files;
    }
    
    inline void execute_commandline_args(int argv, char *argc[])
    {
        click::Click cppClick {"cppff"};
        create_commandline_args(cppClick);
        
        cppClick.parse_commandline_args(argv, argc);
        
        if (cppClick.help_called)
        {
            cppClick.display_help_text();
        }
        else
        {
            auto path = cppClick.get_argument("file_path").value()->get_value<std::string>();
            auto check_only = cppClick.get_option("check").value()->get_value<bool>();
            auto run_isort = cppClick.get_option("isort").value()->get_value<bool>();
            
            auto exclude = cppClick.get_option("exclude").value()->get_value<std::string>();
            auto exclude_files = get_excludes_files(exclude);
            
            if (run_isort)
            {
                std::cout << "Running isort for " << path << "\n";
                if (exclude_files.empty())
                {
                    cppff::isort_run(path, check_only);
                }
                else
                {
                    cppff::isort_run(path, std::move(exclude_files), check_only);
                }
            }
        }
    }
}

#endif //FLAKE_CPP_CPPFF_HPP
