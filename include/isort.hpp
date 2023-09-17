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


namespace fs = std::filesystem;
using namespace antlr4;

namespace isort
{
    namespace utils
    {
        const std::vector<std::string> allowed_file_domains = {".h", ".hpp", ".c", ".cpp"};
        
        /// @brief Check if a string is a potential c++ standard library header.
        /// @param val the string to check.
        /// @return true if the string is a potential c++ standard library header.
        bool is_standard_lib(const std::string &val);
        
        /// @brief Check if the file is on the same level.
        /// @param val the filename string to check.
        /// @param files all files from the same level.
        /// @return true if the filename is a part from a filename on the same level.
        bool is_file_from_same_level(const std::string &val, std::vector<std::string> &files);
        
        /// @brief Get files from the same level.
        /// @param val the directory path.
        /// @return A std::vector of all files from this directory.
        std::vector<std::string> files_from_same_level(const std::string &val);
        
        /// @brief Check if the filename is a possible cpp file name.
        /// @param file the filename to check.
        /// @return `true` if the filename ends with any of these [".h", ".hpp", ".c", ".cpp"] otherwise `false`
        bool is_cpp_file(const std::string &file);
        
        /// @brief Custom sorting algorithm for sorting the include paths.
        struct IsortIncludeSortLess
        {
            bool operator()(const std::string &a, const std::string &b) const;
        };
    }
    
    struct alignas(64) Isort
    {
        uint start = UINT_MAX;
        uint stop = 0;
        std::vector<std::string> lines {};
        std::vector<std::string> same_level_files {};
        
        explicit Isort(const std::string &file_path)
        {
            if (fs::is_regular_file(file_path))
            {
                auto files = utils::files_from_same_level(file_path);
                same_level_files = std::move(files);
            }
        };
        ~Isort() = default;
        
        void parse_from_tokens(std::vector<std::unique_ptr<Token>> &&tokens);
        void sort(bool check_only = false);
    };
}

#endif //FLAKE_CPP_ISORT_HPP
