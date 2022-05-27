#include "pch.h"
#include "winrt/test_component.h"
#include "winrt/Windows.Foundation.Numerics.h"

using namespace winrt;
using namespace test_component;

TEST_CASE("rational")
{
    Simple simple;
    Windows::Foundation::Numerics::Rational rational = simple.ReturnRational();
    REQUIRE(rational.Numerator == 123);
    REQUIRE(rational.Denominator == 456);

    Windows::Foundation::Numerics::float2 vector2 = simple.ReturnVector2();
    REQUIRE(vector2.x == 123.0);
    REQUIRE(vector2.y == 456.0);
}
