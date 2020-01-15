#include "catch.hpp"

// The default behavior (no macro) provides the static winrt::get_module_lock implementation for components/DLLs.

#include "winrt/Windows.Foundation.h"

namespace
{
    struct Stringable : winrt::implements<Stringable, winrt::Windows::Foundation::IStringable>
    {
        winrt::hstring ToString()
        {
            return L"Stringable";
        }
    };
}

TEST_CASE("module_lock_dll")
{
    uint32_t const count = winrt::get_module_lock();

    ++winrt::get_module_lock();

    REQUIRE(winrt::get_module_lock() == count + 1);

    --winrt::get_module_lock();

    REQUIRE(winrt::get_module_lock() == count);

    {
        auto stringable = winrt::make<Stringable>();
        REQUIRE(winrt::get_module_lock() == count + 1);
    }

    REQUIRE(winrt::get_module_lock() == count);

    {
        winrt::Windows::Foundation::EventHandler<int> delegate = [](auto&&...) {};
        REQUIRE(winrt::get_module_lock() == count + 1);
    }

    REQUIRE(winrt::get_module_lock() == count);

    {
        winrt::delegate<void()> delegate = [] {};
        REQUIRE(winrt::get_module_lock() == count + 1);
    }

    REQUIRE(winrt::get_module_lock() == count);
}
