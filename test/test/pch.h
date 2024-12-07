#pragma once

#pragma warning(4 : 4458) // ensure we compile clean with this warning enabled

#include "mingw_com_support.h"

#define WINRT_LEAN_AND_MEAN
#include <unknwn.h>
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Foundation.Numerics.h"
#include <winstring.h>
#include "catch.hpp"

using namespace std::literals;

// Extracts return and progress types from IAsyncXxx.

template <typename T> struct async_traits;

template <> struct async_traits<winrt::Windows::Foundation::IAsyncAction>
{
    using progress_type = void;
};

template <typename P> struct async_traits<winrt::Windows::Foundation::IAsyncActionWithProgress<P>>
{
    using progress_type = P;
};

template <typename R> struct async_traits<winrt::Windows::Foundation::IAsyncOperation<R>>
{
    using progress_type = void;
};

template <typename R, typename P> struct async_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<R, P>>
{
    using progress_type = P;
};

template <typename T> using async_return_type = decltype(std::declval<T>().GetResults());
template <typename T> using async_progress_type = typename async_traits<std::decay_t<T>>::progress_type;
template <typename T>
inline constexpr bool has_async_progress = !std::is_same_v<void, typename async_traits<std::decay_t<T>>::progress_type>;
