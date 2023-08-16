cmake_minimum_required(VERSION 3.24)
project(cppff VERSION 1.0 LANGUAGES CXX)

set(antlr4-runtime_DIR ${antlr4-cppruntime_LIB_DIRS_RELEASE})
set(cppclick_DIR ${cppruntime_LIB_DIRS_RELEASE})

find_package(antlr4-runtime CONFIG REQUIRED)
find_package(cppclick CONFIG REQUIRED)

get_cmake_property(_variableNames VARIABLES)
foreach (_variableName ${_variableNames})
    message("${_variableName}=${${_variableName}}")
endforeach()

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
            ${antlr4-runtime_INCLUDE_DIR}
            ${antlr4-cppruntime_LIB_DIRS_RELEASE}
            ${cppclick_INCLUDE_DIR}
            ${cppruntime_LIB_DIRS_RELEASE}
            cpp_parsing
    )

    add_executable(
            ${PROJECT_NAME}
            cpp_parsing/CPP14Lexer.cpp
            cpp_parsing/CPP14Parser.cpp
            cpp_parsing/CPP14ParserBase.cpp
            cpp_parsing/CPP14ParserBaseListener.cpp
            cpp_parsing/CPP14ParserListener.cpp
            src/main.cpp
            include/std_headers.hpp
            include/isort.hpp
            include/cppff.hpp
    )

    target_link_libraries(${PROJECT_NAME}
            gtest_main
            cppclick::cppclick
            antlr4_static
    )

    include(GoogleTest)
    gtest_discover_tests(annadb_driver)

else ()
    include_directories(
            ${antlr4-runtime_INCLUDE_DIR}
            ${antlr4-cppruntime_LIB_DIRS_RELEASE}
            ${cppclick_INCLUDE_DIR}
            ${cppruntime_LIB_DIRS_RELEASE}
            cpp_parsing
    )

    add_executable(
            ${PROJECT_NAME}
            cpp_parsing/CPP14Lexer.cpp
            cpp_parsing/CPP14Parser.cpp
            cpp_parsing/CPP14ParserBase.cpp
            cpp_parsing/CPP14ParserBaseListener.cpp
            cpp_parsing/CPP14ParserListener.cpp
            src/main.cpp
            include/std_headers.hpp
            include/isort.hpp
            include/cppff.hpp
    )

    target_link_libraries(
            ${PROJECT_NAME}
            ${cppclick_LIB_DIRS_RELEASE}/libcppclick.so
            ${antlr4-cppruntime_LIB_DIRS_RELEASE}/libantlr4-runtime.a
            antlr4_static
    )
endif ()


if ("$ENV{GCC}")
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
    target_link_options(${PROJECT_NAME} PRIVATE -fsanitize=address)
endif ()

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO)
