#include "pch.h"
#include "winrt/test_component.Velocity.h"

using namespace winrt;
using namespace test_component::Velocity;

TEST_CASE("velocity")
{
    // This interface is always disabled but shows up in the type sytem
    // if it is present in the winmd.
    IInterface1 a;
    REQUIRE(a == nullptr);

    // This interface is always enabled and is naturally available in
    // the projection.
    IInterface2 b;
    REQUIRE(b == nullptr);

    // Class1 is always disabled and thus will not activate.
    REQUIRE_THROWS_AS(Class1(), hresult_class_not_available);

    // Class2 is always enabled so should activate just fine.
    Class2 c;
    c.Class2_Method();

    // Class3 is always disabled and thus will not activate.
    REQUIRE_THROWS_AS(Class3(), hresult_class_not_available);

    // Class4 is not feature-controlled but uses feature interfaces.
    Class4 d;
    d.Class4_Method();

    // The single argument constructor is always disabled.
    REQUIRE_THROWS_AS(Class4(1), hresult_no_interface);

    // The Class4_Static1 static is always disabled.
    REQUIRE_THROWS_AS(Class4::Class4_Static1(), hresult_no_interface);

    // The two argument constructor is always enabled.
    Class4 e(1, 2);

    // The Class4_Static2 static is always enabled.
    Class4::Class4_Static2();
}
