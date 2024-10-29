#include "pch.h"

// Unset lean and mean so we can implement a type from the test_component namespace
#undef WINRT_LEAN_AND_MEAN
#include <winrt/test_component.h>

namespace
{
    struct LiesAboutInheritance : public winrt::implements<LiesAboutInheritance, winrt::test_component::ILiesAboutInheritance>
    {
        LiesAboutInheritance() = default;
        void StubMethod() {}
    };
}

TEST_CASE("missing_required_interfaces")
{
    auto lies = winrt::make_self<LiesAboutInheritance>().as<winrt::test_component::LiesAboutInheritance>();
    REQUIRE(lies);
    REQUIRE_NOTHROW(lies.StubMethod());

    // The IStringable::ToString method does not exist on this type.  In previous versions of cppwinrt
    // this line would crash with a nullptr deference.  It now throws an exception.
    REQUIRE_THROWS_AS(lies.ToString(), winrt::hresult_error);
}
