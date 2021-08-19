
#include <algorithm>
#include <array>
#include <atomic>
#include <charconv>
#include <chrono>
#include <cstddef>
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

#include <cstring>
#include <cstdio>
#include <cwchar>

#if __has_include(<WindowsNumerics.impl.h>)
#define WINRT_IMPL_NUMERICS
#include <directxmath.h>
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

#ifdef __LINUX_CPPWINRT_CLANG_GCC_COROUTINES__

namespace std::experimental
{
    template <typename T = void>
    using coroutine_handle = ::std::coroutine_handle<T>;

    using suspend_always = ::std::suspend_always;
    using suspend_never = ::std::suspend_never;
}

#endif

#else

#include <experimental/coroutine>

namespace winrt::impl
{
    template <typename T = void>
    using coroutine_handle = std::experimental::coroutine_handle<T>;

    using suspend_always = std::experimental::suspend_always;
    using suspend_never = std::experimental::suspend_never;
}

#endif

using nullptr_t = std::nullptr_t;
