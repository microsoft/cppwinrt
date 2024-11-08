#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace test_component;

TEST_CASE("activation_withoug_regfree_system_type")
{
    REQUIRE_NOTHROW(Uri(L"https://bing.com"));
}

TEST_CASE("activation_manifested_avoiding_regfree")
{
    bool fusionRegistrationWorked{ false };
    try
    {
        // app.manifest has registration for the Simple runtimeclass so activation should succeed.
        Simple s{};
        fusionRegistrationWorked = true;
    }
    catch (...)
    {
    }
    REQUIRE(fusionRegistrationWorked);
}

TEST_CASE("activation_withoug_regfree_fails")
{
    bool threwException{ false };
    try
    {
        Class c;
        REQUIRE(false);
    }
    catch (winrt::hresult_class_not_registered& e)
    {
        threwException = true;
        REQUIRE(e.code() == winrt::impl::error_class_not_registered);
    }

    REQUIRE(threwException);
}