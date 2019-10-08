#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

// Defining WINRT_CUSTOM_MODULE_LOCK means you need to provide your own winrt::get_module_lock implementation.
// This can be useful if you have some custom hosting environment that does not use DllCanUnloadNow.

#define WINRT_CUSTOM_MODULE_LOCK

namespace winrt
{
    inline auto get_module_lock() noexcept
    {
        struct lock
        {
            uint32_t operator++() noexcept
            {
                return 123;
            }

            uint32_t operator--() noexcept
            {
                return 321;
            }

            operator uint32_t() const noexcept
            {
                return 101;
            }
        };

        return lock{};
    }
}

#include "winrt/Windows.Foundation.h"

namespace
{
    struct CustomStringable : winrt::implements<CustomStringable, winrt::Windows::Foundation::IStringable>
    {
        winrt::hstring ToString()
        {
            return L"CustomStringable";
        }
    };
}

TEST_CASE("module_lock_custom")
{
    REQUIRE(++winrt::get_module_lock() == 123);

    REQUIRE(--winrt::get_module_lock() == 321);

    REQUIRE(winrt::get_module_lock() == 101);

    // Just validates that you can still construct an implementation with a custom module lock.

    winrt::make<CustomStringable>();
}

int main(int const argc, char** argv)
{
    return Catch::Session().run(argc, argv);
}
