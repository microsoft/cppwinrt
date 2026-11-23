
#include <intrin.h>

#if defined(_MSC_VER)
#pragma detect_mismatch("C++/WinRT version", CPPWINRT_VERSION)
#endif

// Windows SDK's windowsnumerics.impl.h transitively includes <stdexcept> and
// <limits>, while mingw-w64's transitively includes <algorithm> and <cmath>.
// Including them in advance here keeps them out of the module purview.

#include <stdexcept>
#include <limits>
#include <algorithm>
#include <cmath>
