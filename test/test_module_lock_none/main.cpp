#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

// Defining WINRT_NO_MODULE_LOCK means that winrt::get_module_lock is not defined and calls to it are elided from C++/WinRT.
// This is an optimization for apps (executables) that don't implement something like DllCanUnloadNow.

#define WINRT_NO_MODULE_LOCK
#include "winrt/Windows.Foundation.h"

namespace
{
    struct FastStringable : winrt::implements<FastStringable, winrt::Windows::Foundation::IStringable>
    {
        winrt::hstring ToString()
        {
            return L"FastStringable";
        }
    };
}

TEST_CASE("module_lock_none")
{
    REQUIRE(++winrt::get_module_lock() == 1);
    REQUIRE(++winrt::get_module_lock() == 1);

    REQUIRE(--winrt::get_module_lock() == 0);
    REQUIRE(--winrt::get_module_lock() == 0);

    // Just validates that you can still construct an implementation without a module lock.

    winrt::make<FastStringable>();
}

int main(int const argc, char** argv)
{
    return Catch::Session().run(argc, argv);
}
