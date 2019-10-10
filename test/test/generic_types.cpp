#include "pch.h"
#include "generic_types.h"

TEST_CASE("generic_types")
{
    test_guids();

    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Uri", Uri);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.PropertyType", PropertyType);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Point", Point);

    // Clang 9 doesn't think this is a constant expression.
#ifndef __clang__
    REQUIRE_EQUAL_NAME(L"{96369f54-8eb6-48f0-abce-c1b211e627c3}", IStringable);
#endif
}
