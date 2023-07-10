#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace test_component;

TEST_CASE("no_make_detection")
{
    REQUIRE(test_component::Class::TestNoMakeDetection());
}
