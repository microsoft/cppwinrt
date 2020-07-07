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
    IReference<unsigned long long> f{ 123 };

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

    // Different integer types, but same value
    REQUIRE(c == f);

    // Tests comparison to value.
    REQUIRE(a == 123);
    REQUIRE(123 == a);

    REQUIRE(a != 124);
    REQUIRE(124 != a);

    // Tests short circuit when reference is empty.
    REQUIRE_FALSE(e == 123);
    REQUIRE_FALSE(123 == e);

    REQUIRE(e != 123);
    REQUIRE(123 != e);
}

TEST_CASE("String References")
{
    // Tests comparison to string literal
    IReference<hstring> str{ L"foo" };
    IReference<hstring> nullstr{ nullptr };

    REQUIRE(str == L"foo");
    REQUIRE(L"foo" == str);

    REQUIRE(str != L"bar");
    REQUIRE(L"bar" != str);

    // Tests short circuit when reference is empty.
    REQUIRE_FALSE(nullstr == L"foo");
    REQUIRE_FALSE(L"foo" == nullstr);

    REQUIRE(nullstr != L"bar");
    REQUIRE(L"bar" != nullstr);
}