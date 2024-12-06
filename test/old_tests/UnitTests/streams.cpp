#include "pch.h"
#include "catch.hpp"
#include <sstream>

struct stringable : winrt::implements<stringable, winrt::Windows::Foundation::IStringable>
{
    winrt::hstring ToString()
    {
        return L"a stringable object";
    }
};

TEST_CASE("streams")
{
    {
        std::wstringstream ss;
        winrt::hstring str = L"Hello World";
        ss << str;
        REQUIRE(ss.str() == str);
    }

    {
        // Support embedded nulls.
        std::wstringstream ss;
        winrt::hstring str = L"Hello\0World";
        ss << str;
        REQUIRE(ss.str() == str);
    }

    {
        std::wstringstream ss;
        winrt::Windows::Foundation::IStringable obj = winrt::make<stringable>();
        ss << obj;
        REQUIRE(ss.str() == obj.ToString());
    }
}
