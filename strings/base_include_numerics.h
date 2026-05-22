
// Includes <windowsnumerics.impl.h> when WINRT_IMPL_NUMERICS is defined.
// Requires <directxmath.h> to already be included (via base_detect_numerics).
// The types are redirected into winrt::Windows::Foundation::Numerics via macro wrapping.
// Uses WINRT_EXPORT for the namespace declaration, which resolves to 'export extern "C++"'
// in module builds and nothing in header builds.
#ifdef WINRT_IMPL_NUMERICS
#ifndef WINRT_EXPORT
#define WINRT_EXPORT
#endif
#include <directxmath.h>
#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_
#include <windowsnumerics.impl.h>
#undef _WINDOWS_NUMERICS_NAMESPACE_
#undef _WINDOWS_NUMERICS_BEGIN_NAMESPACE_
#undef _WINDOWS_NUMERICS_END_NAMESPACE_
#endif // WINRT_IMPL_NUMERICS
