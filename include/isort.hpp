//
// Created by felix on 06.08.23.
//

#ifndef FLAKE_CPP_ISORT_HPP
#define FLAKE_CPP_ISORT_HPP

#include <iostream>
#include <string>
#include <vector>

#include "antlr4-runtime.h"
#include "std_headers.hpp"


using namespace antlr4;

bool is_standard_lib(const std::string &val)
{
    for (const auto &header: STD_HEADERS)
    {
        if (val.find(header) != std::string::npos)
        {
            return true;
        }
    }
    return false;
}

namespace isort
{
    class InvalidFormat : public std::exception
    {
    private:
        std::string message;
    
    public:
        explicit InvalidFormat(std::string msg) : message(std::move(msg)) {}
        std::string what()
        {
            return message;
        }
    };
    
    struct Isort
    {
        uint start = UINT_MAX;
        uint stop = 0;
        
        std::vector<std::string> lines = {};
        
        Isort() = default;
        ~Isort() = default;
        
        void parse_from_tokens(std::vector<std::unique_ptr<Token>> &&tokens)
        {
            size_t previous_element_line = 0;
            // val->geLine() starts from `1` and not from `0`
            for (auto const &val : tokens)
            {
                auto current_line = val->getLine();
                auto current_elements = this->lines.size();
                auto current_text = val->getText();
                volatile auto tmp = val->getType();
                
                if (current_line > 1 && current_line - previous_element_line > 1)
                {
                    for (int idx = 0; idx < ((current_line - 1) - current_elements); ++idx)
                    {
                        this->lines.emplace_back("\n");
                    }
                }
                else if (current_line == current_elements)
                {
                    auto current_idx = current_line - 1;
                    this->lines[current_idx] = this->lines[current_idx] + std::move(current_text);
                    previous_element_line = current_line;
                    continue;
                }
                
                if (val->getType() == CPP14Lexer::IncludeDirective)
                {
                    if (this->start == UINT_MAX)
                    {
                        this->start = current_line - 1;
                    }
                    this->stop = current_line;
                }
                
                previous_element_line = current_line;
                this->lines.emplace_back(std::move(current_text));
            }
        }
        
        void sort(bool check_only = false)
        {
            std::vector<std::string> std_includes {};
            std::vector<std::string> user_includes {};
            std::vector<std::string> user_libraries {};
            
            // we will reserve for both vectors the same amount of possible entries
            // to be sure we never need to recalculate memory
            std_includes.reserve(this->stop - this->start);
            user_includes.reserve(this->stop - this->start);
            user_libraries.reserve(this->stop - this->start);
            
            std::for_each(this->lines.begin() + this->start,
                          this->lines.begin() + this->stop + 1,
                          [&std_includes, &user_libraries, &user_includes](const std::string &val){
                              if (is_standard_lib(val) && val != "\n")
                              {
                                  std_includes.emplace_back(val);
                              }
                              else if (std::find(val.cbegin(), val.cend(), '/') < val.cend())
                              {
                                  user_includes.emplace_back(val);
                              }
                              else if (val != "\n")
                              {
                                  user_libraries.emplace_back(val);
                              }
                          });
            
            // let's sort the different include types/sections separately
            std::sort(std_includes.begin(), std_includes.end(), std::less<std::string>());
            std::sort(user_includes.begin(), user_includes.end(), std::less<std::string>());
            std::sort(user_libraries.begin(), user_libraries.end(), std::less<std::string>());
            
            std_includes.emplace_back("\n");
            user_includes.emplace_back("\n");
            user_libraries.emplace_back("\n");
            
            std::vector<std::string> include_lines {};
            include_lines.reserve(std_includes.size() + user_libraries.size() + user_includes.size());
            
            // bring them all together this will make it easier to include the lines later back
            std::move(std_includes.begin(), std_includes.end(), std::back_inserter(include_lines));
            std::move(user_libraries.begin(), user_libraries.end(), std::back_inserter(include_lines));
            std::move(user_includes.begin(), user_includes.end(), std::back_inserter(include_lines));
            
            std::vector<std::string> origin_lines {};
            
            if (check_only)
            {
                std::copy(this->lines.begin(), this->lines.end(), std::back_inserter(origin_lines));
            }
            
            this->lines.erase(this->lines.begin() + this->start,
                              this->lines.begin() + this->stop + 1);
            this->lines.insert(this->lines.begin() + this->start,
                               include_lines.begin(),
                               include_lines.end());
            
            if (check_only)
            {
                if (!std::equal(this->lines.begin(),
                                this->lines.end(),
                                origin_lines.begin(),
                                origin_lines.end()))
                {
                    throw std::invalid_argument("Include formats are not correctly formatted.");
                }
            }
        }
    };
}

#endif //FLAKE_CPP_ISORT_HPP
