#include "pch.h"
#include "catch.hpp"

namespace
{
    struct __declspec(uuid("52bb7805-e46e-46f9-8508-86606d2f6bc1")) IClassic : ::IUnknown
    {
    };

    struct Classic : winrt::implements<Classic, IClassic, winrt::Windows::Foundation::IInspectable>
    {
    };
}

TEST_CASE("com_ref agile_ref")
{
    {
        winrt::com_ptr<IClassic> classic = winrt::make<Classic>();

        winrt::weak_ref<IClassic> weak{ classic };
        static_assert(std::is_same_v<decltype(classic), decltype(weak.get())>);
        REQUIRE(weak.get() == classic);
    }

    {
        winrt::com_ptr<IClassic> classic = winrt::make<Classic>();

        winrt::agile_ref<IClassic> agile{ classic };
        static_assert(std::is_same_v<decltype(classic), decltype(agile.get())>);
        REQUIRE(agile.get() == classic);
    }
}

