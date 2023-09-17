#include "filesystem"

#include <gtest/gtest.h>
#include <click.hpp>
#include "../include/cppff.hpp"
#include "helpers.hpp"

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

TEST(cppff, create_commandline_args)
{
    click::Click cppClick {"cppff"};
    cppff::create_commandline_args(cppClick);
    
    ASSERT_EQ(cppClick.options.size(), 4);
    ASSERT_EQ(cppClick.arguments.size(), 1);
}

TEST(cppff, get_excludes_files_from_empty_string)
{
    auto res = cppff::get_excludes_files(std::string {});
    
    ASSERT_TRUE(res.empty());
}

TEST(cppff, get_excludes_files_from_string_plain_files)
{
    {
        auto res = cppff::get_excludes_files("foo.hpp,foo.cpp");
        
        ASSERT_EQ(res.size(), 2);
    }
    {
        auto res = cppff::get_excludes_files("foo.hpp, foo.cpp");
        
        ASSERT_EQ(res.size(), 2);
        ASSERT_EQ(res[1], "foo.cpp");
    }
    {
        auto res = cppff::get_excludes_files("foo.hpp,foo.cpp ");
        
        ASSERT_EQ(res.size(), 2);
        ASSERT_EQ(res[1], "foo.cpp");
    }
}

TEST(cppff, get_excludes_files_from_string_complex_file_path)
{
    auto res = cppff::get_excludes_files("/foo/bar/lorem/include/foo.hpp,/foo/bar/lorem/source/foo.cpp");
    
    ASSERT_EQ(res.size(), 2);
    ASSERT_EQ(res[0], "/foo/bar/lorem/include/foo.hpp");
}

TEST(cppff, get_excludes_files_from_string_with_wrong_delimeter)
{
    {
        auto res = cppff::get_excludes_files("/foo/bar/lorem/include/foo.hpp;/foo/bar/lorem/source/foo.cpp");
        
        ASSERT_EQ(res.size(), 1);
    }
    {
        auto res = cppff::get_excludes_files("/foo/bar/lorem/include/foo.hpp /foo/bar/lorem/source/foo.cpp");
        
        ASSERT_EQ(res.size(), 1);
    }
}

TEST(cppff, execute_commandline_args)
{
    {
        auto file_path = create_example_file(".cpp");
        auto origin = read_file(file_path);
        
        char* args[] = {
                const_cast<char *>("./cppff"),
                const_cast<char *>(file_path.c_str()),
                const_cast<char *>("--isort")
        };
        
        ASSERT_NO_THROW(cppff::execute_commandline_args(3, args));
        auto isorted = read_file(file_path);
        
        ASSERT_NE(origin, isorted);
    }
    {
        auto file_path = create_example_file(".hpp");
        auto exclude = "--exclude=" + file_path;
        
        auto origin = read_file(file_path);
        
        char* args[] = {
                const_cast<char *>("./cppff"),
                const_cast<char *>(file_path.c_str()),
                const_cast<char *>("--isort"),
                const_cast<char *>(exclude.c_str())
        };
        ASSERT_NO_THROW(cppff::execute_commandline_args(4, args));
        
        auto isorted = read_file(file_path);
        
        ASSERT_EQ(origin, isorted);
    }
}
