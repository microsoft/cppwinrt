#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("References")
{
    // Confirms equality for IReference<T> works as expected.

    IReference<int> a{ 123 };
    IReference<int> b{ a };
    IReference<int> c{ 123 };
    IReference<int> d{ 321 };
    IReference<int> e{ nullptr };

    // The underlying IReference<T> is the same so the comparison
    // uses get_abi under the hood.
    REQUIRE(a == b);

    // In this case, it's a different IReference<T> but it still compares
    // correctly by value.
    REQUIRE(a == c);

    // Both valid but different values.
    REQUIRE(a != d);

    // Tests short circuit when one is empty.
    REQUIRE(a != e);
}
