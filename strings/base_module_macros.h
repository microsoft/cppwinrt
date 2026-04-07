
// This header provides the preprocessor macros needed by generated C++/WinRT
// headers when the full base.h is not #included (e.g., when using 'import winrt;').
// Macros are not exported across C++20 module boundaries, so this lightweight
// header must be included textually.

#ifndef WINRT_EXPORT
#define WINRT_EXPORT
#endif

#if defined(_MSC_VER)
#define WINRT_IMPL_EMPTY_BASES __declspec(empty_bases)
#else
#define WINRT_IMPL_EMPTY_BASES
#endif

#if defined(_MSC_VER)
#define WINRT_IMPL_NOVTABLE __declspec(novtable)
#else
#define WINRT_IMPL_NOVTABLE
#endif

#if defined(__clang__) && defined(__has_attribute)
#if __has_attribute(__lto_visibility_public__)
#define WINRT_IMPL_PUBLIC __attribute__((lto_visibility_public))
#else
#define WINRT_IMPL_PUBLIC
#endif
#else
#define WINRT_IMPL_PUBLIC
#endif

#define WINRT_IMPL_ABI_DECL WINRT_IMPL_NOVTABLE WINRT_IMPL_PUBLIC
