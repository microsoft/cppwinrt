#include "pch.h"
#include "catch.hpp"

//
// Tests both the production and consumption of IInspectable's GetRuntimeClassName method. Specifically tests:
//
// 1. Failing to override GetRuntimeClassName results in an hresult_not_implemented exception.
// 2. Overriding GetRuntimeClassName allows the implementation to return a suitable string value.
//

using namespace winrt;
using namespace Windows;
using namespace Windows::Foundation;

struct Test_GetRuntimeClassName_NoOverride : implements<Test_GetRuntimeClassName_NoOverride, Windows::Foundation::IInspectable>
{
};

struct Test_GetRuntimeClassName_Override : implements<Test_GetRuntimeClassName_Override, Windows::Foundation::IInspectable>
{
    hstring GetRuntimeClassName()
    {
        return L"GetRuntimeClassName";
    }
};

TEST_CASE("Test_GetRuntimeClassName_NoOverride")
{
    Windows::Foundation::IInspectable i = make<Test_GetRuntimeClassName_NoOverride>();

    REQUIRE(get_class_name(i) == L"");
}

TEST_CASE("Test_GetRuntimeClassName_Override")
{
    Windows::Foundation::IInspectable i = make<Test_GetRuntimeClassName_Override>();

    REQUIRE(get_class_name(i) == L"GetRuntimeClassName");
}
