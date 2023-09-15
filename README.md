# cppff
C++ file formatting inspired by some packages for Python

## Installation
### Requirements
- [conan > 2.0](https://docs.conan.io/2/tutorial.html) to install the required libraries to run this project.
- CMake >= 3.24
- a compiler with support for C++ 20

## Example
### Calling help
```shell
./cppff --help

Usage: cppff [Options]

Options:
--isort <b>     [default: 0]
--check <b>     [default: 0]
--help      Show this message and exit.
```
isort and check are boolean values with a default value `0 = false`

### Calling with isort
Imagine your IDE added all dependencies by auto-import in the following order,
or maybe you did it because you added it when the dependency pop-up. 
```c++
#include <ranges>
#include <string>
#include <ranges/hjkl>
#include <string_view>
#include "../include/abc.hpp"
#include "../include/utils.hpp"
#include "utils.hpp"
#include <algorithm>
```
after running `./cppff <file_path> --isort` the includes will be ordered in the following way
- at first all standard library headers
- all libraries from dependencies or from the same level
- all other files
separated by space
```c++
#include <algorithm>
#include <ranges>
#include <ranges/hjkl>
#include <string>
#include <string_view>

#include "utils.hpp"

#include "../include/abc.hpp"
#include "../include/utils.hpp"
```

## Options
- --check

when also adding `--check` you will only get an information if the format does not match without touching the original file,
this will be mostly used for CI-Pipelines or in a pre-commit hook

- --exclude

ignore multiple file paths separated by `,`
example:
```shell
./cppff <file_path> --isort --exclude="path/src/abc.cpp,path/include/abc.cpp"
```

