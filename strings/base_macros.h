
#if defined(__GNUC__) && !defined(_MSC_VER)
#define WINRT_NOT_ON_WINDOWS

#ifdef __i386__
#define _M_IX86 __i386__
#endif
#ifdef __amd64__
#define _M_X64 __amd64__
#endif
#ifdef __arm__
#define _M_ARM __arm__
#endif
#ifdef __aarch64__
#define _M_ARM64 __aarch64__
#endif

#if defined(_M_X64) || defined(_M_ARM64)
#define _WIN64
#endif

#define __declspec(...) __attribute__((__VA_ARGS__))
#define __pragma _Pragma
#define selectany weak

#define memcpy_s(a, b, c, d) memcpy(a, c, d)
#define swprintf_s(a, c, ...) swprintf(a, sizeof a/sizeof *a, c, __VA_ARGS__)

#define _InterlockedIncrement(a) __sync_add_and_fetch(a, 1)
#define _InterlockedDecrement(a) __sync_fetch_and_sub(a, 1)
#define _InterlockedCompareExchange64(a, b, c) __sync_val_compare_and_swap(a, c, b)

#define _InterlockedIncrement64(a) __sync_add_and_fetch(a, 1)
#define _InterlockedDecrement64(a) __sync_fetch_and_sub(a, 1)
#define _InterlockedCompareExchange128(a, b1, b2, c) __sync_val_compare_and_swap((__int128_t*)a, *(__int128_t*)c, (__int128_t)b1 << 64 | b2)

#define _InterlockedCompareExchangePointer(a, b, c) __sync_val_compare_and_swap(a, c, b)

#define _ReadWriteBarrier() asm volatile ("" : : : "memory")

#pragma GCC diagnostic ignored "-Wattributes"

#endif

#ifdef _DEBUG

#define WINRT_ASSERT _ASSERTE
#define WINRT_VERIFY WINRT_ASSERT
#define WINRT_VERIFY_(result, expression) WINRT_ASSERT(result == expression)

#else

#define WINRT_ASSERT(expression) ((void)0)
#define WINRT_VERIFY(expression) (void)(expression)
#define WINRT_VERIFY_(result, expression) (void)(expression)

#endif

#define WINRT_IMPL_SHIM(...) (*(abi_t<__VA_ARGS__>**)&static_cast<__VA_ARGS__ const&>(static_cast<D const&>(*this)))

#ifdef __INTELLISENSE__
#define WINRT_IMPL_AUTO(...) __VA_ARGS__
#else
#define WINRT_IMPL_AUTO(...) auto
#endif

// Note: this is a workaround for a false-positive warning produced by the Visual C++ 15.9 compiler.
#pragma warning(disable : 5046)

// Note: this is a workaround for a false-positive warning produced by the Visual C++ 16.3 compiler.
#pragma warning(disable : 4268)

#if defined(__cpp_lib_coroutine) || defined(__cpp_coroutines) || defined(_RESUMABLE_FUNCTIONS_SUPPORTED)
#define WINRT_IMPL_COROUTINES
#endif

#ifndef WINRT_EXPORT
#define WINRT_EXPORT
#endif

#ifdef WINRT_IMPL_NUMERICS
#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_
#include <WindowsNumerics.impl.h>
#undef _WINDOWS_NUMERICS_NAMESPACE_
#undef _WINDOWS_NUMERICS_BEGIN_NAMESPACE_
#undef _WINDOWS_NUMERICS_END_NAMESPACE_
#endif

#if defined(_MSC_VER)
#define WINRT_IMPL_NOINLINE __declspec(noinline)
#elif defined(__GNUC__)
#define WINRT_IMPL_NOINLINE __attribute__((noinline))
#else
#define WINRT_IMPL_NOINLINE
#endif

#ifdef __IUnknown_INTERFACE_DEFINED__
#define WINRT_IMPL_IUNKNOWN_DEFINED
#endif
