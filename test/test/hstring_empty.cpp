#include "pch.h"

using namespace std::literals;

TEST_CASE("hstring_empty")
{
    winrt::hstring s;
    REQUIRE(s.empty());
    REQUIRE(s.size() == 0);
    REQUIRE(s == L""sv);
    REQUIRE(std::distance(s.begin(), s.end()) == 0);

    // Using wcslen to both validate that the strings are empty *and* that they are not null.
    REQUIRE(wcslen(s.c_str()) == 0);
    REQUIRE(wcslen(s.data()) == 0);

    std::wstring_view v = s;
    REQUIRE(v.empty());
    REQUIRE(v.size() == 0);
    REQUIRE(v == L""sv);
    REQUIRE(std::distance(v.begin(), v.end()) == 0);

    // Using wcslen to both validate that the strings are empty *and* that they are not null.
    // This is not guaranteed for wstring_view, but is assumed by some code that creates a
    // wstring_view from an hstring.
    REQUIRE(wcslen(v.data()) == 0);
}
