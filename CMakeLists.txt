cmake_minimum_required(VERSION 3.24)
project(cppff VERSION 1.0 LANGUAGES CXX)

set(antlr4-runtime_DIR ${antlr4-cppruntime_LIB_DIRS_RELEASE})
set(cppclick_DIR ${cppruntime_LIB_DIRS_RELEASE})
set(clang_compiler "/usr/bin/clang-cpp-16")

find_package(antlr4-runtime CONFIG REQUIRED)
find_package(cppclick CONFIG REQUIRED)

if ("$ENV{TESTING}")
    enable_testing()

    include(FetchContent)
    FetchContent_Declare(
            googletest
            URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
    )

    FetchContent_MakeAvailable(googletest)
    include_directories(
            ${GTEST_INCLUDE_DIRS}
            cpp_parsing
    )

    add_executable(
            ${PROJECT_NAME}
            cpp_parsing/CPP14Lexer.cpp
            include/std_headers.hpp
            include/cppff.hpp
            include/isort.hpp
            src/isort.cpp
            src/main.cpp
    )

    target_link_libraries(
            ${PROJECT_NAME}
            antlr4_static
            cppclick::cppclick
            gtest_main
            -pthread
    )

    target_link_directories(
            ${PROJECT_NAME}
            PRIVATE ${antlr4-runtime_INCLUDE_DIR}
            PRIVATE ${cppclick_INCLUDE_DIR}
    )

    include(GoogleTest)
    gtest_discover_tests(${PROJECT_NAME})

else ()
    include_directories(${PROJECT_SOURCE_DIR} cpp_parsing)

    add_executable(
            ${PROJECT_NAME}
            src/main.cpp
            cpp_parsing/CPP14Lexer.cpp
            src/isort.cpp
    )

    target_link_libraries(
            ${PROJECT_NAME}
            antlr4_static
            cppclick::cppclick
            -pthread
    )

    target_link_directories(
            ${PROJECT_NAME}
            PRIVATE ${antlr4-runtime_INCLUDE_DIR}
            PRIVATE ${cppclick_INCLUDE_DIR}
    )
endif ()

if (CMAKE_CXX_COMPILER STREQUAL ${clang_compiler})
    target_compile_options(${PROJECT_NAME} PRIVATE
            -Wall
            -Wextra
            -Werror
            -Wpedantic
            -Wshadow
            -Wnon-virtual-dtor
            -Wold-style-cast
            -Wcast-align
            -Wfloat-conversion
            -fno-omit-frame-pointer
            -fsanitize=address
    )
    target_link_options(${PROJECT_NAME} PRIVATE -fsanitize=address -Qunused-arguments)

else ()
    target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

endif ()

set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        )
