#pragma once
#ifndef WINRT_MODULE_H
#define WINRT_MODULE_H

#ifdef _DEBUG

#define WINRT_ASSERT _ASSERTE
#define WINRT_VERIFY WINRT_ASSERT
#define WINRT_VERIFY_(result, expression) WINRT_ASSERT(result == expression)

#else

#define WINRT_ASSERT(expression) ((void)0)
#define WINRT_VERIFY(expression) (void)(expression)
#define WINRT_VERIFY_(result, expression) (void)(expression)

#endif // _DEBUG

#if defined(__cpp_lib_coroutine)
#define WINRT_IMPL_COROUTINES
#endif // __cpp_lib_coroutine

#define WINRT_IMPL_SHIM(...) (*(abi_t<__VA_ARGS__>**)&static_cast<__VA_ARGS__ const&>(static_cast<D const&>(*this)))

#ifdef _MSC_VER
// Note: this is a workaround for a false-positive warning produced by the Visual C++ 15.9 compiler.
#pragma warning(disable : 5046)

// Note: this is a workaround for a false-positive warning produced by the Visual C++ 16.3 compiler.
#pragma warning(disable : 4268)

// C++ module warnings by /W4
#pragma warning(disable : 4499)
#pragma warning(disable : 4630)
#endif // _MSC_VER

#ifndef WINRT_EXPORT
#ifdef WINRT_IMPL_BUILD_MODULE
#define WINRT_EXPORT export extern "C++"
#else
#define WINRT_EXPORT
#endif // WINRT_IMPL_BUILD_MODULE
#endif // WINRT_EXPORT

// Template specializations in namespace std (hash, coroutine_traits) need extern "C++"
// linkage in module builds for proper merging with the std module, but must NOT be
// exported — exporting namespace std would make all of std transitively visible.
#ifndef WINRT_IMPL_STD_EXPORT
#ifdef WINRT_IMPL_BUILD_MODULE
#define WINRT_IMPL_STD_EXPORT extern "C++"
#else
#define WINRT_IMPL_STD_EXPORT
#endif // WINRT_IMPL_BUILD_MODULE
#endif // WINRT_IMPL_STD_EXPORT

// <windowsnumerics.impl.h> pulls in large, hard-to-control legacy headers. In header builds we keep the
// existing behavior, but in module builds it's provided by the winrt_numerics module.
#if !(defined(WINRT_IMPL_BUILD_MODULE) || defined(WINRT_IMPORT_MODULE))

#ifdef WINRT_IMPL_NUMERICS
#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_
#include <windowsnumerics.impl.h>
#undef _WINDOWS_NUMERICS_NAMESPACE_
#undef _WINDOWS_NUMERICS_BEGIN_NAMESPACE_
#undef _WINDOWS_NUMERICS_END_NAMESPACE_
#endif // WINRT_IMPL_NUMERICS

#endif // !(WINRT_IMPL_BUILD_MODULE || WINRT_IMPORT_MODULE)

#if defined(_MSC_VER)
#define WINRT_IMPL_NOINLINE __declspec(noinline)
#elif defined(__GNUC__)
#define WINRT_IMPL_NOINLINE __attribute__((noinline))
#else
#define WINRT_IMPL_NOINLINE
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

#if defined(__clang__)
#define WINRT_IMPL_HAS_DECLSPEC_UUID __has_declspec_attribute(uuid)
#elif defined(_MSC_VER)
#define WINRT_IMPL_HAS_DECLSPEC_UUID 1
#else
#define WINRT_IMPL_HAS_DECLSPEC_UUID 0
#endif

#if defined(__IUnknown_INTERFACE_DEFINED__) || defined(WINRT_ENABLE_LEGACY_COM)
#define WINRT_IMPL_IUNKNOWN_DEFINED
#else
// Forward declare so we can talk about it.
struct IUnknown;
typedef struct _GUID GUID;
#endif

#if defined(__cpp_consteval)
#define WINRT_IMPL_CONSTEVAL consteval
#else
#define WINRT_IMPL_CONSTEVAL constexpr
#endif

#endif // WINRT_MODULE_H
