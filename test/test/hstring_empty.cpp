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
}
