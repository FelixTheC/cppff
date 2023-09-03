#include "filesystem"

#include <gtest/gtest.h>
#include "../include/cppff.hpp"

namespace fs = std::filesystem;

TEST(cppff, write_to_file_with_empty_vector)
{
    auto test_file = (fs::current_path() += "/empty_file.txt").string();
    ASSERT_FALSE(fs::exists(fs::status(test_file)));
    
    std::vector<std::string> lines {};
    cppff::write_to_file(std::move(lines), test_file);
    
    ASSERT_EQ(fs::file_size(test_file), 0);
    fs::remove(test_file);
}

TEST(cppff, write_lines_to_file)
{
    auto test_file = (fs::current_path() += "/empty_file.txt").string();
    ASSERT_FALSE(fs::exists(fs::status(test_file)));
    
    std::vector<std::string> lines {
            "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.",
            "At vero eos et accusam et justo duo dolores et ea rebum.",
            "Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.",
            "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.",
            "At vero eos et accusam et justo duo dolores et ea rebum.",
            "Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet."
    };
    cppff::write_to_file(std::move(lines), test_file);
    ASSERT_GT(fs::file_size(test_file), 500);
    fs::remove(test_file);
}
