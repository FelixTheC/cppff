# cppff
C++ file formatting inspired by the python isort package

## Example
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
after running `./cppff <file_path>` the includes will be ordered in the following way
- at first all standard library headers
- all libraries from dependencies
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
when adding `--check` you will only get an information if the format does not match without touching the original file,
this will be mostly used for CI-Pipelines or in a pre-commit hook
