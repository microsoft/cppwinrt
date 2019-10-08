#include "pch.h"
#include "catch.hpp"

//
// Tests both the production and consumption of IInspectable's GetTrustLevel method. Specifically tests:
//
// 1. Failing to override GetTrustLevel results in a value BaseTrust being returned.
// 2. Overriding GetTrustLevel allows the implementation to return a suitable value.
//

using namespace winrt;
using namespace Windows;
using namespace Windows::Foundation;

struct Test_GetTrustLevel_NoOverride : implements<Test_GetTrustLevel_NoOverride, Windows::Foundation::IInspectable>
{
};

struct Test_GetTrustLevel_Override : implements<Test_GetTrustLevel_Override, Windows::Foundation::IInspectable>
{
    TrustLevel GetTrustLevel()
    {
        return TrustLevel::FullTrust;
    }
};

TEST_CASE("Test_GetTrustLevel_NoOverride")
{
    Windows::Foundation::IInspectable i = make<Test_GetTrustLevel_NoOverride>();

    REQUIRE(get_trust_level(i) == TrustLevel::BaseTrust);
}

TEST_CASE("Test_GetTrustLevel_Override")
{
    Windows::Foundation::IInspectable i = make<Test_GetTrustLevel_Override>();

    REQUIRE(get_trust_level(i) == TrustLevel::FullTrust);
}
