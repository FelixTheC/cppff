#include <filesystem>
#include <iostream>

#include "click.hpp"
#include "clickArgument.hpp"
#include "clickOption.hpp"
#include "../include/cppff.hpp"

namespace fs = std::filesystem;

void create_commandline_args(click::Click &cppClick);

int main(int argv, char *argc[])
{
    click::Click cppClick {"isort"};
    create_commandline_args(cppClick);

    cppClick.parse_commandline_args(argv, argc);

    auto path = cppClick.get_argument("file_path").value()->get_value<std::string>();
    auto check_only = cppClick.get_option("check").value()->get_value<bool>();

    cppff::isort_run(path, check_only);

    return EXIT_SUCCESS;
}

void create_commandline_args(click::Click &cppClick)
{
    click::Option isortOption {"check"};
    click::Argument fileArg {"file_path",
                             [](const std::string &val) -> std::string
                             {
                                 bool validFile = (fs::is_regular_file(val) && cppff::is_cpp_file(val)) || fs::is_directory(val);
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
    cppClick.options.emplace_back(std::make_unique<click::Option>(std::move(isortOption)));
}