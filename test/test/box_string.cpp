#include "pch.h"

TEST_CASE("box_string")
{
    // hstring
    {
        winrt::hstring value = L"hstring";
        auto boxed = winrt::box_value(value);
        REQUIRE(winrt::unbox_value<winrt::hstring>(boxed) == L"hstring");
    }

    // wchar_t const* (string literal)
    {
        auto boxed = winrt::box_value(L"literal");
        REQUIRE(winrt::unbox_value<winrt::hstring>(boxed) == L"literal");
    }

    // std::wstring
    {
        std::wstring value = L"wstring";
        auto boxed = winrt::box_value(value);
        REQUIRE(winrt::unbox_value<winrt::hstring>(boxed) == L"wstring");
    }

    // std::wstring_view (null-terminated)
    {
        std::wstring_view value = L"view";
        auto boxed = winrt::box_value(value);
        REQUIRE(winrt::unbox_value<winrt::hstring>(boxed) == L"view");
    }

    // std::wstring_view (not null-terminated)
    // Regression test for https://github.com/microsoft/cppwinrt/issues/1527
    {
        std::wstring source = L"ABCDE";
        std::wstring_view value(source.data(), 3); // "ABC"
        auto boxed = winrt::box_value(value);
        REQUIRE(winrt::unbox_value<winrt::hstring>(boxed) == L"ABC");
    }

    // Empty string
    {
        auto boxed = winrt::box_value(winrt::hstring{});
        REQUIRE(winrt::unbox_value<winrt::hstring>(boxed) == L"");
    }

    // Empty wstring_view
    {
        std::wstring_view value;
        auto boxed = winrt::box_value(value);
        REQUIRE(winrt::unbox_value<winrt::hstring>(boxed) == L"");
    }
}
