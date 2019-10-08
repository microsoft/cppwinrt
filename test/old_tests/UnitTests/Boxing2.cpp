#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Component;
using namespace std::chrono;

TEST_CASE("Boxing")
{
    {
        IInspectable object = box_value(SimpleStructure{ 123, {}, {}, {} });
        REQUIRE(unbox_value<SimpleStructure>(object) == SimpleStructure{ 123, {}, {}, {} });
        REQUIRE(unbox_value_or<SimpleStructure>(object, { 321, {}, {}, {} }) == SimpleStructure{ 123, {}, {}, {} });
        REQUIRE(unbox_value_or<SimpleStructure>(nullptr, { 321, {}, {}, {} }) == SimpleStructure{ 321, {}, {}, {} });

        // Covers all failure paths for non-IInspectable types.
        REQUIRE_THROWS_AS(unbox_value<int>(object), hresult_no_interface);
        REQUIRE(unbox_value_or<int>(object, 321) == 321);
    }
    {
        IInspectable object = box_value(IReference<int>{ 123 });
        REQUIRE(unbox_value<IReference<int>>(object) == IReference<int>{ 123 });
        REQUIRE(unbox_value_or<IReference<int>>(object, { 321 }) == IReference<int>{ 123 });
        REQUIRE(unbox_value_or<IReference<int>>(nullptr, { 321 }) == IReference<int>{ 321 });

        // Covers all failure paths for IInspectable types.
        REQUIRE_THROWS_AS(unbox_value<IReference<double>>(object), hresult_no_interface);
        REQUIRE(unbox_value_or<IReference<int>>(IReference<double>{ 123.0 }, { 321 }) == IReference<int>{ 321 });
    }
    {
        IInspectable object = box_value(L"value");
        REQUIRE(unbox_value<hstring>(object) == L"value");
        REQUIRE(unbox_value_or<hstring>(object, L"DEFAULT") == L"value");
        REQUIRE(unbox_value_or<hstring>(nullptr, L"DEFAULT") == L"DEFAULT");
    }
    {
        IInspectable object = box_value(hstring(L"value"));
        REQUIRE(unbox_value<hstring>(object) == L"value");
        REQUIRE(unbox_value_or<hstring>(object, hstring(L"DEFAULT")) == L"value");
        REQUIRE(unbox_value_or<hstring>(nullptr, hstring(L"DEFAULT")) == L"DEFAULT");
    }
    {
        IInspectable object = box_value(std::wstring(L"value"));
        REQUIRE(unbox_value<hstring>(object) == L"value");
        REQUIRE(unbox_value_or<hstring>(object, std::wstring(L"DEFAULT")) == L"value");
        REQUIRE(unbox_value_or<hstring>(nullptr, std::wstring(L"DEFAULT")) == L"DEFAULT");
    }
    {
        IInspectable object = box_value(std::wstring_view(L"value"));
        REQUIRE(unbox_value<hstring>(object) == L"value");
        REQUIRE(unbox_value_or<hstring>(object, std::wstring_view(L"DEFAULT")) == L"value");
        REQUIRE(unbox_value_or<hstring>(nullptr, std::wstring_view(L"DEFAULT")) == L"DEFAULT");
    }
    {
        IInspectable object = box_value(123.0F);
        REQUIRE(unbox_value<float>(object) == 123.0F);
        REQUIRE(unbox_value_or<float>(object, 321.0F) == 123.0F);
        REQUIRE(unbox_value_or<float>(nullptr, 321.0F) == 321.0F);
    }
    {
        IInspectable object = box_value(123.0);
        REQUIRE(unbox_value<double>(object) == 123.0);
        REQUIRE(unbox_value_or<double>(object, 321.0) == 123.0);
        REQUIRE(unbox_value_or<double>(nullptr, 321.0) == 321.0);
    }
    {
        uint8_t value = 123;
        uint8_t default_value = 32;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<uint8_t>(object) == value);
        REQUIRE(unbox_value_or<uint8_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<uint8_t>(nullptr, default_value) == default_value);
    }
    {
        int8_t value = 123;
        int8_t default_value = 32;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<int8_t>(object) == value);
        REQUIRE(unbox_value_or<int8_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<int8_t>(nullptr, default_value) == default_value);
    }
    {
        uint16_t value = 123;
        uint16_t default_value = 321;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<uint16_t>(object) == value);
        REQUIRE(unbox_value_or<uint16_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<uint16_t>(nullptr, default_value) == default_value);
    }
    {
        int16_t value = 123;
        int16_t default_value = 321;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<int16_t>(object) == value);
        REQUIRE(unbox_value_or<int16_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<int16_t>(nullptr, default_value) == default_value);
    }
    {
        uint32_t value = 123;
        uint32_t default_value = 321;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<uint32_t>(object) == value);
        REQUIRE(unbox_value_or<uint32_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<uint32_t>(nullptr, default_value) == default_value);
    }
    {
        int32_t value = 123;
        int32_t default_value = 321;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<int32_t>(object) == value);
        REQUIRE(unbox_value_or<int32_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<int32_t>(nullptr, default_value) == default_value);
    }
    {
        uint64_t value = 123;
        uint64_t default_value = 321;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<uint64_t>(object) == value);
        REQUIRE(unbox_value_or<uint64_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<uint64_t>(nullptr, default_value) == default_value);
    }
    {
        int64_t value = 123;
        int64_t default_value = 321;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<int64_t>(object) == value);
        REQUIRE(unbox_value_or<int64_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<int64_t>(nullptr, default_value) == default_value);
    }
    {
        bool value = true;
        bool default_value = false;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<bool>(object) == value);
        REQUIRE(unbox_value_or<bool>(object, default_value) == value);
        REQUIRE(unbox_value_or<bool>(nullptr, default_value) == default_value);
    }
    {
        char16_t value = L'Y';
        char16_t default_value = L'N';
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<char16_t>(object) == value);
        REQUIRE(unbox_value_or<char16_t>(object, default_value) == value);
        REQUIRE(unbox_value_or<char16_t>(nullptr, default_value) == default_value);
    }
    {
        guid value = { 0x9b7a5590, 0x9262, 0x4c24, { 0xa6, 0x34, 0x18, 0xc7, 0xf9, 0x1e, 0x46, 0x05 } };
        guid default_value = { 0x8f081f19, 0xfa9d, 0x43ed, { 0x95, 0x52, 0xa3, 0x02, 0x75, 0x53, 0xa1, 0x4f } };
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<guid>(object) == value);
        REQUIRE(unbox_value_or<guid>(object, default_value) == value);
        REQUIRE(unbox_value_or<guid>(nullptr, default_value) == default_value);
    }
    {
        Point value = { 1,2 };
        Point default_value = { 2,1 };
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<Point>(object) == value);
        REQUIRE(unbox_value_or<Point>(object, default_value) == value);
        REQUIRE(unbox_value_or<Point>(nullptr, default_value) == default_value);
    }
    {
        Size value = { 1,2 };
        Size default_value = { 2,1 };
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<Size>(object) == value);
        REQUIRE(unbox_value_or<Size>(object, default_value) == value);
        REQUIRE(unbox_value_or<Size>(nullptr, default_value) == default_value);
    }
    {
        Rect value = { 1,2,3,4 };
        Rect default_value = { 4,3,2,1 };
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<Rect>(object) == value);
        REQUIRE(unbox_value_or<Rect>(object, default_value) == value);
        REQUIRE(unbox_value_or<Rect>(nullptr, default_value) == default_value);
    }
    {
        DateTime value = clock::now() + 10s;
        DateTime default_value = clock::now() - 10s;
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<DateTime>(object) == value);
        REQUIRE(unbox_value_or<DateTime>(object, default_value) == value);
        REQUIRE(unbox_value_or<DateTime>(nullptr, default_value) == default_value);
    }
    {
        TimeSpan value = clock::now() + 10s - clock::now();
        TimeSpan default_value = clock::now() - 10s - clock::now();
        IInspectable object = box_value(value);
        REQUIRE(unbox_value<TimeSpan>(object) == value);
        REQUIRE(unbox_value_or<TimeSpan>(object, default_value) == value);
        REQUIRE(unbox_value_or<TimeSpan>(nullptr, default_value) == default_value);
    }
    {
        REQUIRE(unbox_value<SignedEnum>(box_value(SignedEnum::Negative)) == SignedEnum::Negative);
        REQUIRE(unbox_value<SignedEnum>(box_value(static_cast<int32_t>(SignedEnum::Negative))) == SignedEnum::Negative);
        REQUIRE_THROWS_AS(unbox_value<SignedEnum>(box_value(static_cast<uint32_t>(SignedEnum::Negative))), hresult_no_interface);
        REQUIRE_THROWS_AS(unbox_value<SignedEnum>(box_value(static_cast<int16_t>(SignedEnum::Negative))), hresult_no_interface);

        REQUIRE(unbox_value<UnsignedEnum>(box_value(UnsignedEnum::Second)) == UnsignedEnum::Second);
        REQUIRE(unbox_value<UnsignedEnum>(box_value(static_cast<uint32_t>(UnsignedEnum::Second))) == UnsignedEnum::Second);
        REQUIRE_THROWS_AS(unbox_value<UnsignedEnum>(box_value(static_cast<int32_t>(UnsignedEnum::Second))), hresult_no_interface);
        REQUIRE_THROWS_AS(unbox_value<UnsignedEnum>(box_value(static_cast<int16_t>(UnsignedEnum::Second))), hresult_no_interface);

        REQUIRE(unbox_value_or<SignedEnum>(box_value(SignedEnum::Negative), SignedEnum::Positive) == SignedEnum::Negative);
        REQUIRE(unbox_value_or<SignedEnum>(box_value(static_cast<int32_t>(SignedEnum::Negative)), SignedEnum::Positive) == SignedEnum::Negative);
        REQUIRE(unbox_value_or<SignedEnum>(box_value(static_cast<uint32_t>(SignedEnum::Negative)), SignedEnum::Positive) == SignedEnum::Positive);
        REQUIRE(unbox_value_or<SignedEnum>(box_value(static_cast<int16_t>(SignedEnum::Negative)), SignedEnum::Positive) == SignedEnum::Positive);

        REQUIRE(unbox_value_or<UnsignedEnum>(box_value(UnsignedEnum::Second), UnsignedEnum::First) == UnsignedEnum::Second);
        REQUIRE(unbox_value_or<UnsignedEnum>(box_value(static_cast<uint32_t>(UnsignedEnum::Second)), UnsignedEnum::First) == UnsignedEnum::Second);
        REQUIRE(unbox_value_or<UnsignedEnum>(box_value(static_cast<int32_t>(UnsignedEnum::Second)), UnsignedEnum::First) == UnsignedEnum::First);
        REQUIRE(unbox_value_or<UnsignedEnum>(box_value(static_cast<uint16_t>(UnsignedEnum::Second)), UnsignedEnum::First) == UnsignedEnum::First);
    }
}
