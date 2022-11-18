#include "pch.h"
#include "catch.hpp"

namespace
{
    struct DECLSPEC_UUID("52bb7805-e46e-46f9-8508-86606d2f6bc1") IClassic : ::IUnknown
    {
    };

    struct Classic : winrt::implements<Classic, IClassic, winrt::Windows::Foundation::IInspectable>
    {
    };
}

#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IClassic, 0x52bb7805, 0xe46e, 0x46f9, 0x85, 0x08, 0x86, 0x60, 0x6d, 0x2f, 0x6b, 0xc1);
#endif

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

