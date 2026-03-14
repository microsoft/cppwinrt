#include "pch.h"
#include "winrt/test_component.Delegates.h"

using namespace winrt;
using namespace test_component;

TEST_CASE("struct_delegate")
{
    Delegates::StructDelegate d = []
    {
        return com_array{ Struct{ L"First", L"Second" }, Struct{ L"Third", L"Fourth" } };
    };

    auto values = d();

    REQUIRE(values.size() == 2);
    REQUIRE(values[0].First == L"First");
    REQUIRE(values[0].Second == L"Second");
    REQUIRE(values[1].First == L"Third");
    REQUIRE(values[1].Second == L"Fourth");
}
