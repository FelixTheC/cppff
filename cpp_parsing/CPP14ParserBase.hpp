//
// Created by felix on 03.08.23.
//

#ifndef FLAKE_CPP_CPP14PARSERBASE_HPP
#define FLAKE_CPP_CPP14PARSERBASE_HPP

#pragma once

#include "antlr4-runtime.h"

class CPP14ParserBase : public antlr4::Parser
{
public:
    CPP14ParserBase(antlr4::TokenStream *input) : Parser(input)
    {}
    
    bool IsPureSpecifierAllowed();
};

#endif //FLAKE_CPP_CPP14PARSERBASE_HPP
