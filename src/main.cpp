#include "clickArgument.hpp"

#include "../include/cppff.hpp"

namespace fs = std::filesystem;


int main(int argv, char *argc[])
{
    cppff::execute_commandline_args(argv, argc);
    return EXIT_SUCCESS;
}
