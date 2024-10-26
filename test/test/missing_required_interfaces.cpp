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

bool g_failfastCalled = false;

void __stdcall WINRT_IMPL_RoFailFastWithErrorContext(int32_t) noexcept
{
    g_failfastCalled = true;
}

void DoTheUncatcheable(winrt::test_component::LiesAboutInheritance& lies) noexcept
{
    lies.ToString();
}

bool CatchTheUncatcheable(winrt::test_component::LiesAboutInheritance& lies) noexcept
{
    bool caughtCrash = false;
    __try
    {
        // We verify that our replacement version of WINRT_IMPL_RoFailFastWithErrorContext is
        // called.  In a real program that would exit the process.  But this is a test so it
        // continues execution and hits a nullptr dereference instead.  Eat that known/expected
        // error and allow execution to continue onto other test cases.
        DoTheUncatcheable(lies);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        caughtCrash = true;
    }
    return caughtCrash;
}

TEST_CASE("missing_required_interfaces")
{
    auto lies = winrt::make_self<LiesAboutInheritance>().as<winrt::test_component::LiesAboutInheritance>();
    REQUIRE(lies);
    REQUIRE_NOTHROW(lies.StubMethod());

    REQUIRE(!g_failfastCalled);
    const bool caughtCrash = CatchTheUncatcheable(lies);
    REQUIRE(caughtCrash);
    REQUIRE(g_failfastCalled);
}