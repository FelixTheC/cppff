#include <gtest/gtest.h>
#include "../include/isort.hpp"

#include "helpers.hpp"

TEST(isort_utils, is_standard_lib_success)
{
    ASSERT_TRUE(isort::utils::is_standard_lib("#include <string>"));
    ASSERT_TRUE(isort::utils::is_standard_lib("#include<algorithm>"));
    ASSERT_TRUE(isort::utils::is_standard_lib(" #include <iostream> "));
    ASSERT_TRUE(isort::utils::is_standard_lib(" #include  <ranges> "));
    ASSERT_TRUE(isort::utils::is_standard_lib(" #include  <ranges/abc> "));
}

TEST(isort_utils, is_standard_lib_false)
{
    ASSERT_FALSE(isort::utils::is_standard_lib("#include \"my_string\""));
    ASSERT_FALSE(isort::utils::is_standard_lib("#include <algori>"));
    ASSERT_FALSE(isort::utils::is_standard_lib(" #include <boost/iostream> "));
    ASSERT_FALSE(isort::utils::is_standard_lib(" #include \"Ranges.hpp\" "));
}

TEST(isort_utils, is_cpp_file_success)
{
    {
        auto tmp_file = create_example_file(".hpp");
        ASSERT_TRUE(isort::utils::is_cpp_file(tmp_file));
    }
    {
        auto tmp_file = create_example_file(".h");
        ASSERT_TRUE(isort::utils::is_cpp_file(tmp_file));
    }
    {
        auto tmp_file = create_example_file(".cpp");
        ASSERT_TRUE(isort::utils::is_cpp_file(tmp_file));
    }
    {
        auto tmp_file = create_example_file(".c");
        ASSERT_TRUE(isort::utils::is_cpp_file(tmp_file));
    }
}

TEST(isort_utils, is_cpp_file_false)
{
    {
        auto tmp_file = create_example_file(".hPp");
        ASSERT_FALSE(isort::utils::is_cpp_file(tmp_file));
    }
    {
        auto tmp_file = create_example_file(".H");
        ASSERT_FALSE(isort::utils::is_cpp_file(tmp_file));
    }
    {
        auto tmp_file = create_example_file(".CpP");
        ASSERT_FALSE(isort::utils::is_cpp_file(tmp_file));
    }
    {
        auto tmp_file = create_example_file(".C");
        ASSERT_FALSE(isort::utils::is_cpp_file(tmp_file));
    }
    {
        auto tmp_file = create_example_file(".xml");
        ASSERT_FALSE(isort::utils::is_cpp_file(tmp_file));
    }
    {
        auto tmp_file = create_example_file(".pyc");
        ASSERT_FALSE(isort::utils::is_cpp_file(tmp_file));
    }
}

TEST(isort_utils, find_cpp_files_in_dir)
{
    auto test_dir = create_example_dir();
    auto res = isort::utils::files_from_same_level(test_dir);
    
    ASSERT_EQ(res.size(), 7);
}

TEST(isort_utils, is_file_from_same_level_success)
{
    auto test_dir = create_example_dir();
    auto res = isort::utils::files_from_same_level(test_dir);
    
    ASSERT_TRUE(isort::utils::is_file_from_same_level("example_file_2.cpp", res));
    ASSERT_TRUE(isort::utils::is_file_from_same_level("example_file_3.hpp", res));
}

TEST(isort_utils, is_file_from_same_level_fails)
{
    auto test_dir = create_example_dir();
    auto res = isort::utils::files_from_same_level(test_dir);
    
    ASSERT_FALSE(isort::utils::is_file_from_same_level("example_file_5.txt", res));
    ASSERT_FALSE(isort::utils::is_file_from_same_level("exampleFile3.hpp", res));
}
