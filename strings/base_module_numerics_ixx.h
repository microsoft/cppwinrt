
export module winrt_numerics;

#if __has_include(<windowsnumerics.impl.h>)
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 5244)
#endif
#include <directxmath.h>

#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ export extern "C++" namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_
#include <windowsnumerics.impl.h>
#undef _WINDOWS_NUMERICS_NAMESPACE_
#undef _WINDOWS_NUMERICS_BEGIN_NAMESPACE_
#undef _WINDOWS_NUMERICS_END_NAMESPACE_

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#endif
