#include "pch.h"
#include "catch.hpp"

// These tests ensure that projected type hierarchies can cast between
// types correctly, even when a null is supplied

using namespace winrt;
using namespace Windows::UI::Composition;
using namespace Windows::UI::Xaml;

// Test cast of null via bases
TEST_CASE("cast_null_via_bases")
{
    static_assert(std::is_base_of<impl::base_one<ContainerVisual, Visual>, ContainerVisual>::value, "Type relationship violated");
    ContainerVisual derived(nullptr);
    const Visual& base = derived;
    REQUIRE(!base);
}

// Test cast of null via requires
TEST_CASE("cast_null_via_requires")
{
    static_assert(std::is_base_of<impl::require_one<ContainerVisual, IVisual>, ContainerVisual>::value, "Type relationship violated");
    ContainerVisual derived(nullptr);
    const IVisual& base = derived;
    REQUIRE(!base);
}

namespace
{
    struct MyFrameworkElement : FrameworkElementT<MyFrameworkElement>
    {
        void CallIFrameworkElementMethod()
        {
            // This is simply a compile test, to verify that we can convert an "overrides" type to one of its "requires" interfaces.
            [[maybe_unused]] auto result = this->Width();
        }
    };
}
