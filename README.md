# cpp-utils
Useful utilities, missing from the std lib.

## Build:
Compile into a dynamic lib on macOS: `c++ -dynamiclib -std=c++11 -o cpp-utils.dylib split.cpp`

Or on Linux:
```bash
g++ -c split.cpp ends_with.cpp
ar rvs cpp-utils.a split.o ends_with.o
```

## Usage:
Include the header file:
```c++
#include "/path/to/cpp-utils.hpp"
```

Compile your app: `c++ -Wall -std=c++11 -o myapp cpp-utils.dylib myapp.cpp`

Compile on Linux: `g++ -Wall -std=c++11 -o myapp myapp.cpp cpp-utils.a`

Ensure the dynamic lib is in your path e.g. your current working directory, when running your app.
