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

    // unbox_value_or: default not used (successful unbox)
    {
        auto boxed = winrt::box_value(L"boxed");
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(boxed, L"fallback") == L"boxed");
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(boxed, winrt::hstring{ L"fallback" }) == L"boxed");
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(boxed, std::wstring{ L"fallback" }) == L"boxed");
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(boxed, std::wstring_view{ L"fallback" }) == L"boxed");
    }

    // unbox_value_or: default used (failed unbox) with each string type
    {
        // hstring
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(nullptr, winrt::hstring{ L"hstring" }) == L"hstring");

        // wchar_t const* (string literal)
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(nullptr, L"literal") == L"literal");

        // std::wstring
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(nullptr, std::wstring{ L"wstring" }) == L"wstring");

        // std::wstring_view (null-terminated)
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(nullptr, std::wstring_view{ L"view" }) == L"view");

        // std::wstring_view (not null-terminated)
        std::wstring source = L"ABCDE";
        std::wstring_view fallback(source.data(), 3); // "ABC"
        REQUIRE(winrt::unbox_value_or<winrt::hstring>(nullptr, fallback) == L"ABC");
    }
}
