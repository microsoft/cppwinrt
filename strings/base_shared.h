#pragma once

#if __has_include(<version>)
#include <version>
#endif

#ifdef _DEBUG

#include <crtdbg.h>

#define WINRT_ASSERT _ASSERTE
#define WINRT_VERIFY WINRT_ASSERT
#define WINRT_VERIFY_(result, expression) WINRT_ASSERT(result == expression)

#else

#define WINRT_ASSERT(expression) ((void)0)
#define WINRT_VERIFY(expression) (void)(expression)
#define WINRT_VERIFY_(result, expression) (void)(expression)

#endif

#define WINRT_IMPL_SHIM(...) (*(abi_t<__VA_ARGS__>**)&static_cast<__VA_ARGS__ const&>(static_cast<D const&>(*this)))

#if defined(__cpp_lib_coroutine)
#define WINRT_IMPL_COROUTINES
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
#endif // __has_attribute(__lto_visibility_public__)
#else
#define WINRT_IMPL_PUBLIC
#endif

#define WINRT_IMPL_ABI_DECL WINRT_IMPL_NOVTABLE WINRT_IMPL_PUBLIC

#ifdef WINRT_IMPL_MODULES
#define WINRT_EXPORT export
#else
#define WINRT_EXPORT
#endif
