
#include <intrin.h>

#if __has_include(<version>)
#include <version>
#endif

#if __has_include(<windowsnumerics.impl.h>)
#define WINRT_IMPL_NUMERICS
#include <directxmath.h>
#endif
