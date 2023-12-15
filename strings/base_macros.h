
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

#ifdef _MSC_VER
// Note: this is a workaround for a false-positive warning produced by the Visual C++ 15.9 compiler.
#pragma warning(disable : 5046)

// Note: this is a workaround for a false-positive warning produced by the Visual C++ 16.3 compiler.
#pragma warning(disable : 4268)
#endif

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
#include <windowsnumerics.impl.h>
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

#if defined(__clang__)
#define WINRT_IMPL_HAS_DECLSPEC_UUID __has_declspec_attribute(uuid)
#elif defined(_MSC_VER)
#define WINRT_IMPL_HAS_DECLSPEC_UUID 1
#else
#define WINRT_IMPL_HAS_DECLSPEC_UUID 0
#endif

#ifdef __IUnknown_INTERFACE_DEFINED__
#define WINRT_IMPL_IUNKNOWN_DEFINED
#else
// Forward declare so we can talk about it.
struct IUnknown;
typedef struct _GUID GUID;
#endif

// std::source_location is a C++20 feature, which is above the C++17 feature floor for cppwinrt.  The source location needs
// to be the calling code, not cppwinrt itself, so that it is useful to developers building on top of this library.  As a
// result any public-facing method that can result in an error needs a default-constructed source_location argument.  Because
// this type does not exist in C++17 we need to use a macro to optionally add parameters and forwarding wherever appropriate.
//
// Some projects may decide to disable std::source_location support to prevent source code information from ending up in their
// release binaries, or to reduce binary size.  Defining WINRT_NO_SOURCE_LOCATION will prevent this feature from activating.
#if defined(__cpp_lib_source_location) && !defined(WINRT_NO_SOURCE_LOCATION)

namespace winrt::impl
{
    // This struct is intended to be highly similar to std::source_location.  The key difference is
    // that function_name is NOT included.  Function names do not fold to identical strings and can
    // have heavy binary size overhead when templates cause many permutations to exist.
    struct slim_source_location
    {
        [[nodiscard]] static consteval slim_source_location current(
            const std::uint_least32_t line = __builtin_LINE(),
            const char* const file = __builtin_FILE()) noexcept
        {
            return slim_source_location{ line, file };
        }

        [[nodiscard]] constexpr slim_source_location() noexcept = default;

        [[nodiscard]] constexpr slim_source_location(const std::uint_least32_t line,
            const char* const file) noexcept :
            m_line(line),
            m_file(file)
        {}

        [[nodiscard]] constexpr std::uint_least32_t line() const noexcept
        {
            return m_line;
        }

        [[nodiscard]] constexpr const char* file_name() const noexcept
        {
            return m_file;
        }

        constexpr const char* function_name() const noexcept
        {
            // This is intentionally not included.  See comment above.
            return nullptr;
        }

    private:
        const std::uint_least32_t m_line{};
        const char* const m_file{};
    };
}

// std::source_location includes function_name which can be helpful but creates a lot of binary size impact.  Many consumers
// have defined WINRT_NO_SOURCE_LOCATION to prevent this impact, losing the value of source_location.  We have defined a
// slim_source_location struct that is equivalent but excludes function_name.  This should have the vast majority of the
// usefulness of source_location while having a much smaller binary impact.
//
// When building _DEBUG binary size is not usually much of a concern, so we can use the full source_location type.
#ifdef _DEBUG
#define WINRT_IMPL_SOURCE_LOCATION_ARGS_NO_DEFAULT , std::source_location const& sourceInformation
#define WINRT_IMPL_SOURCE_LOCATION_ARGS , std::source_location const& sourceInformation = std::source_location::current()
#define WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM std::source_location const& sourceInformation = std::source_location::current()

#define WINRT_IMPL_SOURCE_LOCATION_FORWARD , sourceInformation
#define WINRT_IMPL_SOURCE_LOCATION_FORWARD_SINGLE_PARAM sourceInformation

#define WINRT_SOURCE_LOCATION_ACTIVE

#ifdef _MSC_VER
#pragma detect_mismatch("WINRT_SOURCE_LOCATION", "true")
#endif // _MSC_VER

#else // !_DEBUG
#define WINRT_IMPL_SOURCE_LOCATION_ARGS_NO_DEFAULT , winrt::impl::slim_source_location const& sourceInformation
#define WINRT_IMPL_SOURCE_LOCATION_ARGS , winrt::impl::slim_source_location const& sourceInformation = winrt::impl::slim_source_location::current()
#define WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM winrt::impl::slim_source_location const& sourceInformation = winrt::impl::slim_source_location::current()

#define WINRT_IMPL_SOURCE_LOCATION_FORWARD , sourceInformation
#define WINRT_IMPL_SOURCE_LOCATION_FORWARD_SINGLE_PARAM sourceInformation

#define WINRT_SOURCE_LOCATION_ACTIVE

#ifdef _MSC_VER
#pragma detect_mismatch("WINRT_SOURCE_LOCATION", "slim")
#endif // _MSC_VER

#endif // _DEBUG

#else
#define WINRT_IMPL_SOURCE_LOCATION_ARGS_NO_DEFAULT
#define WINRT_IMPL_SOURCE_LOCATION_ARGS
#define WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM

#define WINRT_IMPL_SOURCE_LOCATION_FORWARD
#define WINRT_IMPL_SOURCE_LOCATION_FORWARD_SINGLE_PARAM

#ifdef _MSC_VER
#pragma detect_mismatch("WINRT_SOURCE_LOCATION", "false")
#endif //  _MSC_VER
#endif // defined(__cpp_lib_source_location) && !defined(WINRT_NO_SOURCE_LOCATION)
