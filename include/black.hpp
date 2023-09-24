//
// Created by felix on 23.09.23.
//

#ifndef CPPFF_BLACK_HPP
#define CPPFF_BLACK_HPP

#include <climits>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

#include "antlr4-runtime.h"


namespace fs = std::filesystem;
using namespace antlr4;

namespace black
{
    struct CurlyBrace
    {
        bool is_closed = false;
        uint64_t line_pos = 0;
    };
    
    struct Black
    {
        uint line_length = 100;
        std::vector<std::string> lines {};
        
        Black() = default;
        ~Black() = default;
        
        /// @brief get the tokens from the parser and
        /// @param tokens created from the Antlr4 lexer
        void parse_from_tokens(std::vector<std::unique_ptr<Token>> &&tokens);
    };
}

#endif //CPPFF_BLACK_HPP
