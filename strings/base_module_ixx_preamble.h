module;
#define WINRT_IMPL_BUILD_MODULE

#if defined(_MSC_VER) && _MSC_VER < 1950
#pragma message("warning: C++/WinRT modules require MSVC toolset v14.50 (v145) or later. Building with an older toolset is not supported and may produce unexpected errors.")
#endif

#include <version>
#ifdef _DEBUG
#include <crtdbg.h>
#endif // _DEBUG
