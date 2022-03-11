#include "pch.h"
#include "winrt/test_component.ChainedProperties.h"

using namespace winrt::test_component::ChainedProperties;

TEST_CASE("chained_properties")
{
    // The sequence of chained properties within a single class does not matter.
    Base b;
    b.Second(456).First(123);
    REQUIRE(b.First() == 123);
    REQUIRE(b.Second() == 456);

    // The sequence of chained properties within a hierarchy must be ordered from most derived to least derived.
    Derived d;
    d.Third(789).Fourth(987).First(123).Second(456);
    REQUIRE(d.First() == 123);
    REQUIRE(d.Second() == 456);
    REQUIRE(d.Third() == 789);
    REQUIRE(d.Fourth() == 987);
}
