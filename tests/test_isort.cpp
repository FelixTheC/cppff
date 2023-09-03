#include <gtest/gtest.h>
#include "helpers.hpp"
#include "../include/cppff.hpp"


TEST(isort, cppff_parse_from_tokens_success)
{
    auto example_file = create_example_file(".hpp");
    isort::Isort isort_ { example_file };
    
    auto res = cppff::get_lexer_tokens(isort_, example_file);
    
    ASSERT_TRUE(res);
}

TEST(isort, cppff_parse_from_tokens_fail)
{
    auto example_file = "tmp/unknown/secret_file";
    
    isort::Isort isort_ { example_file };
    auto res = cppff::get_lexer_tokens(isort_, example_file);
    
    ASSERT_FALSE(res);
}

TEST(isort, parse_from_tokens)
{
    auto example_file = create_example_file(".hpp");
    isort::Isort isort_ { example_file };
    
    ASSERT_TRUE(isort_.lines.empty());
    
    auto res = cppff::get_lexer_tokens(isort_, example_file);
    
    ASSERT_TRUE(res);
    ASSERT_FALSE(isort_.lines.empty());
}

TEST(isort, sort)
{
    auto example_file = create_example_file(".hpp");
    isort::Isort isort_ { example_file };
    
    ASSERT_TRUE(isort_.lines.empty());
    
    auto res = cppff::get_lexer_tokens(isort_, example_file);
    
    ASSERT_TRUE(res);
    
    isort_.sort(false);
    ASSERT_EQ(isort_.lines[0], "//\n");
    ASSERT_EQ(isort_.lines[1], "// Created by google test\n");
    ASSERT_EQ(isort_.lines[2], "//\n");
    ASSERT_EQ(isort_.lines[3], "#include <fstream>\n");
    ASSERT_EQ(isort_.lines[4], "#include <iostream>\n");
    ASSERT_EQ(isort_.lines[5], "\n");
    ASSERT_EQ(isort_.lines[6], "using namespace std;\n");
    ASSERT_EQ(isort_.lines[7], "\n");
}

TEST(isort, sort_check_only)
{
    auto example_file = create_example_file(".hpp");
    isort::Isort isort_ { example_file };
    
    ASSERT_TRUE(isort_.lines.empty());
    
    auto res = cppff::get_lexer_tokens(isort_, example_file);
    
    ASSERT_TRUE(res);
    ASSERT_THROW(isort_.sort(true), std::invalid_argument);
}
