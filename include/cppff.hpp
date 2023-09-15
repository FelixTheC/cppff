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

#include "CPP14Lexer.h"
#include "antlr4-runtime.h"

#include "isort.hpp"


namespace fs = std::filesystem;
using namespace antlr4;

namespace cppff
{
    static void write_to_file(std::vector<std::string> &&lines, const std::string &file_name)
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
    
    static void isort(const std::string &filename, bool check = false) noexcept
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
    
    static void isort_run(const std::string &path, bool check = false) noexcept
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
    
    static void isort_run(const std::string &path, std::vector<std::string> &&excluded_files, bool check = false) noexcept
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
}

#endif //FLAKE_CPP_CPPFF_HPP
