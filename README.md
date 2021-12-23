# cpp-utils
Useful utilities, missing from the std lib.

## Build:
Compile into a dynamic lib on macOS: `c++ -dynamiclib -std=c++11 -o cpp-utils.dylib split.cpp`

## Usage:
Include the header file:
```c++
#include "/path/to/cpp-utils.hpp"
```

Compile your app: `c++ -Wall -std=c++11 -o myapp cpp-utils.dylib myapp.cpp`

Ensure the dynamic lib is in your path e.g. your current working directory, when running your app.
