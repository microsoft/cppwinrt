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
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IStringable", IStringable);
#endif
}
