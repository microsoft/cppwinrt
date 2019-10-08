#include "pch.h"
#include "catch.hpp"

using namespace winrt;

namespace
{
    hstring inner(param::hstring const& value)
    {
        hstring result;
        copy_from_abi(result, get_abi(value));
        return L"[" + result + L"]";
    }

    hstring outer(param::hstring const& value)
    {
        // This is a typical scenario in the projection where an instance method 
        // calls a factory method. The param::hstring doesn't allow copy semantics
        // and we want to make sure this is efficient (and works).

        return inner(value);
    }
}

TEST_CASE("param_hstring")
{
    REQUIRE(outer({}) == L"[]");
    REQUIRE(outer(L"literal") == L"[literal]");

    hstring winrt_hstring = L"winrt::hstring";
    REQUIRE(outer(winrt_hstring) == L"[winrt::hstring]");

    std::wstring std_wstring = L"std::wstring";
    REQUIRE(outer(std_wstring) == L"[std::wstring]");

    std::wstring_view std_wstring_view = L"std::wstring_view";
    REQUIRE(outer(std_wstring_view) == L"[std::wstring_view]");
}
