#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace std::string_view_literals;

TEST_CASE("IReference, boxing round trip")
{
    {
        const uint8_t value = 42;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<uint8_t>(object) == value);
    }
    {
        const int8_t value = 42;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<int8_t>(object) == value);
    }
    {
        const uint16_t value = 42;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<uint16_t>(object) == value);
    }
    {
        const int16_t value = 42;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<int16_t>(object) == value);
    }
    {
        const uint32_t value = 42;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<uint32_t>(object) == value);
    }
    {
        const int32_t value = 42;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<int32_t>(object) == value);
    }
    {
        const uint64_t value = 42;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<uint64_t>(object) == value);
    }
    {
        const int64_t value = 42;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<int64_t>(object) == value);
    }
    {
        const bool value = true;
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<bool>(object) == value);
    }
    {
        const char16_t value = L'&';
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<char16_t>(object) == value);
    }
    {
        const guid value = guid_of<Windows::Foundation::IStringable>();
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<guid>(object) == value);
    }
    {
        const hstring value = L"I am not a string";
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<hstring>(object) == value);
    }
    {
        const Windows::Foundation::Point value = { 42, 1729 };
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<Windows::Foundation::Point>(object) == value);
    }
    {
        const Windows::Foundation::Size value = { 42, 1729 };
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<Windows::Foundation::Size>(object) == value);
    }
    {
        const Windows::Foundation::Rect value = { 0, 0, 42, 1729 };
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<Windows::Foundation::Rect>(object) == value);
    }
    {
        const Windows::Foundation::DateTime dt = clock::now();
        Windows::Foundation::IInspectable object = box_value(dt);
        REQUIRE(unbox_value<Windows::Foundation::DateTime>(object) == dt);

        const Windows::Foundation::TimeSpan ts = clock::now() - dt;
        object = box_value(ts);
        REQUIRE(unbox_value<Windows::Foundation::TimeSpan>(object) == ts);
    }
    {
        const Windows::Foundation::Uri value{ L"https://github.com/Microsoft/cppwinrt" };
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<Windows::Foundation::Uri>(object) == value);
    }
}

TEST_CASE("IReference, unbox_value_or")
{
    auto check = [](Windows::Foundation::IInspectable const& boxed)
    {
        const std::wstring_view fallback = L"Fallback value"sv;
        auto unboxed = unbox_value_or<hstring>(boxed, hstring{ fallback });
        static_assert(std::is_same_v<decltype(unboxed), hstring>);
        REQUIRE(unboxed == fallback);
    };

    check(nullptr);
    check(Uri{ L"https://github.com/Microsoft/cppwinrt" });
    check(IReference<int>(42));
}
