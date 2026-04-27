
// module.h defines the core macros (WINRT_ASSERT, WINRT_EXPORT, WINRT_IMPL_*, etc.)
// that are shared between module builds and header builds. Including it here
// ensures a single source of truth for these macros. The #ifndef guards in
// module.h prevent double-definition when it was already included in the
// global module fragment of an .ixx file.
#include "winrt/macros.h"

// The source_location support below is specific to base.h and is NOT needed
// in the global module fragment (module.h), so it remains here only.

// The intrinsics (such as __builtin_FILE()) that power std::source_location are also used to power winrt:impl::slim_source_location.
// The source location needs to be for the calling code, not cppwinrt itself, so that it is useful to developers building on top of
// this library.  As a result any public-facing method that can result in an error needs a default-constructed slim_source_location
// argument so that it will collect source information from the application code that is calling into cppwinrt.
//
// We do not directly use std::source_location for two reasons:
//  1) std::source_location::function_name() is unavoidable.  These strings end up in the final binary, bloating their size.  This
//     is particularly impactful for code bases that use templates heavily.  Cases of 50% binary size growth have been observed.
//  2) std::source_location is a cpp20 feature, which is above the cpp17 feature floor for cppwinrt.  By defining our own version
//     we can avoid ODR violations in mixed cpp17/cpp20 builds.  cpp17 callers will have an ABI that matches cpp20 callers (they
//     will just not have useful file/line/function information).
//
// Some projects may decide that the source information binary size impact is not worth the benefit.  Defining WINRT_NO_SOURCE_LOCATION
// will prevent this feature from activating.  The slim_source_location type will be forwarded around but it will not include any
// nonzero data.  That eliminates the biggest source of binary size overhead.
//
// To help with debugging the __builtin_FUNCTION() intrinsic will be used in _DEBUG builds.  This will provide a bit more diagnostic
// value at the cost of binary size.  The assumption is that binary size is considered less important in debug builds so this tradeoff
// is acceptable.
//
// The different behavior of the default parameters to winrt::impl::slim_source_location::current() is technically an ODR violation,
// albeit a minor one.  There should be no serious consequence to this violation.  In practice it means that mixing cpp17/cpp20,
// or mixing WINRT_NO_SOURCE_LOCATION with undefining it, will lead to inconsistent source location information.  It may be missing
// when it is expected to be included, or it may be present when it is not expected.  The behavior will depend on the linker's choice
// when there are multiple translation units with different options.  This violation is tracked by https://github.com/microsoft/cppwinrt/issues/1445.

#if !defined(__cpp_lib_source_location) || defined(WINRT_NO_SOURCE_LOCATION)
// Case1: cpp17 mode.  The source_location intrinsics are not available.
// Case2: The caller has disabled source_location support.  Ensure that there is no binary size overhead for line/file/function.
#define WINRT_IMPL_BUILTIN_LINE 0
#define WINRT_IMPL_BUILTIN_FILE nullptr
#define WINRT_IMPL_BUILTIN_FUNCTION nullptr
#elif _DEBUG
// cpp20 _DEBUG builds include function information, which has a heavy binary size impact, in addition to file/line.
#define WINRT_IMPL_BUILTIN_LINE __builtin_LINE()
#define WINRT_IMPL_BUILTIN_FILE __builtin_FILE()
#define WINRT_IMPL_BUILTIN_FUNCTION __builtin_FUNCTION()
#else
// Release builds in cpp20 mode get file and line information but NOT function information.  Function strings
// quickly add up to a substantial binary size impact, especially when templates are heavily used.
#define WINRT_IMPL_BUILTIN_LINE __builtin_LINE()
#define WINRT_IMPL_BUILTIN_FILE __builtin_FILE()
#define WINRT_IMPL_BUILTIN_FUNCTION nullptr
#endif

WINRT_EXPORT namespace winrt::impl
{
    // This struct is intended to be highly similar to std::source_location.  The key difference is
    // that function_name is NOT included.  Function names do not fold to identical strings and can
    // have heavy binary size overhead when templates cause many permutations to exist.
    struct slim_source_location
    {
        [[nodiscard]] static WINRT_IMPL_CONSTEVAL slim_source_location current(
            const std::uint_least32_t line = WINRT_IMPL_BUILTIN_LINE,
            const char* const file = WINRT_IMPL_BUILTIN_FILE,
            const char* const function = WINRT_IMPL_BUILTIN_FUNCTION) noexcept
        {
            return slim_source_location{ line, file, function };
        }

        [[nodiscard]] constexpr slim_source_location() noexcept = default;

        [[nodiscard]] constexpr slim_source_location(
            const std::uint_least32_t line,
            const char* const file,
            const char* const function) noexcept :
            m_line(line),
            m_file(file),
            m_function(function)
        {}

        [[nodiscard]] constexpr std::uint_least32_t line() const noexcept
        {
            return m_line;
        }

        [[nodiscard]] constexpr const char* file_name() const noexcept
        {
            return m_file;
        }

        [[nodiscard]] constexpr const char* function_name() const noexcept
        {
            return m_function;
        }

    private:
        const std::uint_least32_t m_line{};
        const char* const m_file{};
        const char* const m_function{};
    };
}

#ifdef _MSC_VER
#pragma detect_mismatch("WINRT_SOURCE_LOCATION", "slim")
#endif // _MSC_VER
