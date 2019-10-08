#include "pch.h"
#include "catch.hpp"

using namespace winrt;

TEST_CASE("hstring_builder")
{
    impl::hstring_builder discard(3);

    impl::hstring_builder builder(3);

    wcscpy_s(builder.data(), 4, L"abc");

    hstring string = builder.to_hstring();

    REQUIRE(string == L"abc");
}
