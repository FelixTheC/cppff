#include <filesystem>
#include <iostream>

#include "click.hpp"
#include "clickArgument.hpp"
#include "clickOption.hpp"

#include "../include/cppff.hpp"

namespace fs = std::filesystem;

void create_commandline_args(click::Click &cppClick);
void execute_commandline_args(int argv, char *argc[]);
std::vector<std::string> get_excludes_files(const std::string &cmd_line_val);

int main(int argv, char *argc[])
{
    execute_commandline_args(argv, argc);
    return EXIT_SUCCESS;
}

void create_commandline_args(click::Click &cppClick)
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
    cppClick.arguments.emplace_back(std::make_unique<click::Argument>(std::move(fileArg)));
    cppClick.options.emplace_back(std::make_unique<click::Option>(std::move(checkOption)));
    cppClick.options.emplace_back(std::make_unique<click::Option>(std::move(isortOption)));
    cppClick.options.emplace_back(std::make_unique<click::Option>(std::move(excludeOption)));
}

void execute_commandline_args(int argv, char *argc[])
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
            cppff::isort_run(path, std::move(exclude_files), check_only);
        }
    }
}

std::vector<std::string> get_excludes_files(const std::string &cmd_line_val)
{
    std::vector<std::string> exclude_files {};
    
    std::stringstream sstream(cmd_line_val);
    std::string partial {};
    
    while(getline(sstream, partial, ','))
    {
        exclude_files.emplace_back(partial);
    }
    
    return exclude_files;
}
