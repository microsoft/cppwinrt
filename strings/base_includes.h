
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

#if __has_include(<WindowsNumerics.impl.h>)
#define WINRT_IMPL_NUMERICS
#include <directxmath.h>
#endif

#ifdef __cpp_lib_coroutine
#include <coroutine>
#else
#include <experimental/coroutine>
#endif
