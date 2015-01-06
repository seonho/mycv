mycv
====

This project defines macros for ease of use of OpenCV.

And include OpenCV library header as well as disable stupid warning.

### How to use

```cpp
#include "mycv.hpp"
#pragma comment(lib, OPENCV_LIB_EXPAND("core"))
```

`OPENCV_LIB_EXPAND` macro replace the module name with corresponding
library file name, e.g. `opencv_core246.lib` or `opencv_246d.lib`, by
expanding library *prefix*, *version string* and *debug* or *release* postfix.
The version string is also configured automatically depending on the 
version of OpenCV library.
