
#include <intrin.h>
#include <algorithm>
#include <array>
#include <atomic>
#include <charconv>
#include <chrono>
#include <cstddef>
#include <cstring>
#include <iterator>
#include <map>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string_view>
#include <string>
#include <thread>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <utility>
#include <vector>

#if __has_include(<version>)
#include <version>
#endif

#if __has_include(<windowsnumerics.impl.h>)
#define WINRT_IMPL_NUMERICS
#include <directxmath.h>
#endif

#ifndef WINRT_LEAN_AND_MEAN
#include <ostream>
#endif

#ifdef __cpp_lib_format
#include <format>
#endif

#ifdef __cpp_lib_source_location
#include <source_location>
#endif

#ifdef __cpp_lib_coroutine

#include <coroutine>

namespace winrt::impl
{
    template <typename T = void>
    using coroutine_handle = std::coroutine_handle<T>;

    using suspend_always = std::suspend_always;
    using suspend_never = std::suspend_never;
}

#elif __has_include(<experimental/coroutine>)

#include <experimental/coroutine>

namespace winrt::impl
{
    template <typename T = void>
    using coroutine_handle = std::experimental::coroutine_handle<T>;

    using suspend_always = std::experimental::suspend_always;
    using suspend_never = std::experimental::suspend_never;
}

#else
#error C++/WinRT requires coroutine support, which is currently missing. Try enabling C++20 in your compiler.
#endif
