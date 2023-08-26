//
// Created by felix on 06.08.23.
//

#ifndef FLAKE_CPP_ISORT_HPP
#define FLAKE_CPP_ISORT_HPP

#include <climits>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

#include "antlr4-runtime.h"

#include "std_headers.hpp"


using namespace antlr4;

namespace isort
{
    namespace utils
    {
        const std::vector<std::string> allowed_file_domains = {".h", ".hpp", ".c", ".cpp"};
        
        bool is_standard_lib(const std::string &val);
        bool is_file_from_same_level(const std::string &val, std::vector<std::string> &files);
        std::vector<std::string> files_from_same_level(const std::string &val);
        
        bool is_cpp_file(const std::string &file);
        
        struct IsortIncludeSortLess
        {
            bool operator()(const std::string &a, const std::string &b) const;
        };
    }
    
    struct Isort
    {
        uint start = UINT_MAX;
        uint stop = 0;
        std::vector<std::string> lines {};
        std::vector<std::string> same_level_files {};
        
        explicit Isort(const std::string &file_path)
        {
            auto files = utils::files_from_same_level(file_path);
            same_level_files = std::move(files);
        };
        ~Isort() = default;
        
        void parse_from_tokens(std::vector<std::unique_ptr<Token>> &&tokens);
        void sort(bool check_only = false);
    };
}

#endif //FLAKE_CPP_ISORT_HPP
