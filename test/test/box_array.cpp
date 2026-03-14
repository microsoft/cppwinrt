#include "pch.h"

namespace
{
    template<typename T>
    void Verify(T const& otherValue)
    {
        T defaultValue{};
        winrt::com_array<T> ary{ otherValue, defaultValue };
        auto box = winrt::box_value(ary);
        winrt::com_array<T> unbox = box.template try_as<winrt::com_array<T>>().value();
        REQUIRE(unbox.size() == 2);
        REQUIRE(unbox.at(0) == otherValue);
        REQUIRE(unbox.at(1) == defaultValue);
        unbox = box.template as<winrt::com_array<T>>();
        REQUIRE(unbox.size() == 2);
        REQUIRE(unbox.at(0) == otherValue);
        REQUIRE(unbox.at(1) == defaultValue);
        if constexpr (!std::is_same_v<T, GUID>)
        {
            unbox = box.template as<winrt::optional<winrt::com_array<T>>>().Value();
            REQUIRE(unbox.size() == 2);
            REQUIRE(unbox.at(0) == otherValue);
            REQUIRE(unbox.at(1) == defaultValue);
        }
        unbox = winrt::unbox_value<winrt::com_array<T>>(box);
        REQUIRE(unbox.size() == 2);
        REQUIRE(unbox.at(0) == otherValue);
        REQUIRE(unbox.at(1) == defaultValue);
        // Cannot use unbox_value_or with arrays because com_array is not copyable.
        // unbox = winrt::unbox_value_or(box, winrt::com_array<T>{});
    }
}
TEST_CASE("box_array")
{
    Verify<uint8_t>(42);
    Verify<int16_t>(42);
    Verify<uint16_t>(42);
    Verify<int32_t>(42);
    Verify<uint32_t>(42);
    Verify<int64_t>(42);
    Verify<uint64_t>(42);
    Verify<float>(42);
    Verify<double>(42);
    Verify<char16_t>(42);
    Verify<bool>(true);
    Verify<winrt::hstring>(L"42");
    Verify<winrt::Windows::Foundation::IInspectable>(winrt::Windows::Foundation::Uri{ L"https://www.microsoft.com/" });
    Verify<winrt::guid>({ 1,2,3, {4,5,6,7,8,9,10,11} });
    Verify<GUID>(winrt::guid{ 1,2,3, {4,5,6,7,8,9,10,11} });
    Verify<winrt::Windows::Foundation::DateTime>((winrt::Windows::Foundation::DateTime::max)());
    Verify<winrt::Windows::Foundation::TimeSpan>((winrt::Windows::Foundation::TimeSpan::max)());
    Verify<winrt::Windows::Foundation::Point>({ 1,1 });
    Verify<winrt::Windows::Foundation::Size>({ 1,1 });
    Verify<winrt::Windows::Foundation::Rect>({ 1,1,1,1 });
}
