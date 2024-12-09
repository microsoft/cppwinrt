#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace std::string_view_literals;
using namespace std::chrono_literals;

namespace
{
    template <typename T> T empty()
    {
        if constexpr (std::is_convertible_v<T, Windows::Foundation::IUnknown>)
        {
            return T{ nullptr };
        }
        else
        {
            return T{};
        }
    }

    template <typename T> void TestRoundTrip(T const& value)
    {
        Windows::Foundation::IInspectable object = box_value(value);
        REQUIRE(unbox_value<T>(object) == value);
        REQUIRE(object.as<T>() == value);
        T result = empty<T>();
        object.as(result);
        REQUIRE(result == value);
    }
} // namespace
TEST_CASE("IReference, boxing round trip")
{
    static_assert(std::is_convertible_v<Uri, Windows::Foundation::IUnknown>);

    TestRoundTrip<uint8_t>(42);
    TestRoundTrip<int8_t>(42);
    TestRoundTrip<uint16_t>(42);
    TestRoundTrip<int16_t>(42);
    TestRoundTrip<uint32_t>(42);
    TestRoundTrip<int32_t>(42);
    TestRoundTrip<uint64_t>(42);
    TestRoundTrip<int64_t>(42);
    TestRoundTrip<bool>(true);
    TestRoundTrip<char16_t>(L'&');
    TestRoundTrip<guid>(guid_of<IStringable>());
    TestRoundTrip<hstring>(L"I am not a string");
    TestRoundTrip<Point>({ 42, 1729 });
    TestRoundTrip<Size>({ 42, 1729 });
    TestRoundTrip<Rect>({ 0, 0, 42, 1729 });
    const DateTime dt = clock::now();
    TestRoundTrip<DateTime>(dt);
    TestRoundTrip<TimeSpan>(clock::now() + 10s - dt);
    TestRoundTrip<Uri>(Uri{ L"https://github.com/Microsoft/cppwinrt" });
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
