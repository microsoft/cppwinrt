#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace test_component;

TEST_CASE("noexcept")
{
    Class c;

    c.NoexceptVoid();
    int32_t a = c.NoexceptInt32();
    hstring b = c.NoexceptString();

    REQUIRE(a == 123);
    REQUIRE(b == L"123");
}
