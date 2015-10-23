myx
====

This project defines  library linking macros for Visual Studio only.

### How to use

```cpp
#include "mycv.hpp"
#pragma comment(lib, OPENCV_LIB_EXPAND("core"))
```

`OPENCV_LIB_EXPAND` macro replace the module name with corresponding
library file name, e.g. `opencv_core246.lib` or `opencv_core246d.lib`, by
expanding library *prefix*, *version string* and *debug* or *release* postfix.
The version string is also configured automatically depending on the 
version of *OpenCV* library.

```cpp
#include "myboost.hpp"
#pragma comment(lib, BOOST_LIB_EXPAND("filesystem"))
```

`BOOST_LIB_EXPAND` macro replace the module name with corresponding
library file name, e.g. `libboost_filesystem-vc100-mt-1_59.lib` or `libboost_filesystem-vc100-mt-gd-1_59.lib`, by
expanding library *prefix*, *version string* and *debug* or *release* postfix.
The version string is also configured automatically depending on the 
version of *Boost* library.
