
#include <intrin.h>

#if __has_include(<version>)
#include <version>
#endif

// When WINRT_IMPORT_STD is defined, use 'import std;' instead of individual
// standard library #include directives. This requires C++20 or later with
// 'import std;' support enabled in the build system (e.g. BuildStlModules=true
// in MSBuild, or equivalent). Not used in the winrt.ixx global module fragment
// where 'import' is not permitted.
#if defined(__cpp_lib_modules) && defined(WINRT_IMPORT_STD) && !defined(WINRT_IMPL_GLOBAL_MODULE_FRAGMENT)
#define WINRT_IMPL_IMPORT_STD
import std;
#endif

#ifndef WINRT_IMPL_IMPORT_STD
#include <algorithm>
#include <array>
#include <atomic>
#include <charconv>
#include <chrono>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <cwchar>
#include <cwctype>
#include <exception>
#include <iterator>
#include <limits>
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

#ifndef WINRT_LEAN_AND_MEAN
#include <ostream>
#endif

#ifdef __cpp_lib_span
#include <span>
#endif

#ifdef __cpp_lib_format
#include <format>
#endif

#ifdef __cpp_lib_source_location
#include <source_location>
#endif

#ifdef __cpp_lib_coroutine
#include <coroutine>
#elif defined(_RESUMABLE_FUNCTIONS_SUPPORTED)
#error "C++/WinRT no longer supports pre-standardization coroutines. If you use co_await, switch to /await:strict or upgrade to C++20. If you do not, remove /await from the compiler flags."
#endif
#endif // !WINRT_IMPL_IMPORT_STD

#if __has_include(<windowsnumerics.impl.h>)
#define WINRT_IMPL_NUMERICS
#include <directxmath.h>
#endif
