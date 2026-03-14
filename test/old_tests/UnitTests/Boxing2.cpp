#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Component;
using namespace std::chrono;

namespace
{
    template<typename T>
    constexpr T empty()
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

    // Try to unbox the object as a T.
    // Expect it to succeed with v1.
    // Unboxing nullptr or a non-T to T should fail.
    // v2 is an alternate value to use with unbox_value_or.
    template<typename T, typename Source, typename V1, typename V2>
    void TestUnboxImpl(Source const& object, V1 const& v1, V2 const& v2)
    {
        Source nothing;
        Errors wrong_type;

        // Test unbox_value and unbox_value_or if available.
        if constexpr (std::is_same_v<Source, IInspectable>)
        {
            REQUIRE(unbox_value<T>(object) == v1);
            REQUIRE(unbox_value_or<T>(object, v2) == v1);
            REQUIRE(unbox_value_or<T>(nothing, v2) == v2);
            REQUIRE(unbox_value_or<T>(wrong_type, v2) == v2);
        }

        REQUIRE(object.template as<T>() == v1);
        REQUIRE(object.template try_as<T>() == v1);
        REQUIRE(nothing.template try_as<T>() == std::nullopt);
        REQUIRE(wrong_type.try_as<T>() == std::nullopt);

        T result{ v2 };
        object.template as<T>(result);
        REQUIRE(result == v1);

        result = v1;
        REQUIRE(v1 != empty<T>()); // Test must pass a v1 that is not equal to the empty value.

        REQUIRE(!nothing.template try_as<T>(result));
        REQUIRE(result == empty<T>()); // try_as explicitly empties the result on failure

        result = v1;
        REQUIRE(!wrong_type.try_as<T>(result));
        REQUIRE(result == empty<T>()); // try_as explicitly empties the result on failure
    }

    // Box the source, then try to unbox it as a T. Should succeed with v1.
    // Unboxing nullptr or a non-T as T should fail;
    // v2 is an alternate value to use with unbox_value_or.
    template<typename T, typename Source = T, typename V1 = T, typename V2 = T>
    void TestUnbox(Source&& source, V1 const& v1, V2 const& v2)
    {
        // Do it once with an IInspectable.
        IInspectable object = box_value(std::forward<Source>(source));
        TestUnboxImpl<T>(object, v1, v2);

        // Do it again with a com_ptr.
        com_ptr<IInspectable> comptr{ detach_abi(object), take_ownership_from_abi };
        TestUnboxImpl<T>(comptr, v1, v2);
    }

    // Box v1 and try to unbox it as a T. Should succeed with v1 again.
    // Unboxing nullptr as T should fail; v2 is an alternate value to use with unbox_value_or.
    template<typename T, typename V1 = T, typename V2 = T>
    void TestUnbox(V1 const& v1, V2 const& v2)
    {
        TestUnbox<T>(v1, v1, v2);
    }

    // Special version for integers so we don't have to static_cast<> all over the place.
    template<typename T, typename V1 = T, typename V2 = T>
    void TestUnboxIntegerType(V1 v1, V2 v2)
    {
        TestUnbox<T>(static_cast<T>(v1), static_cast<T>(v2));
    }

    // Box the source, then try to unbox it as T. Should fail.
    // v is an alternate value to use with unbox_value_or.
    template<typename T, typename Source = T, typename V = T>
    void TestFailedUnbox(Source&& source, V const& v)
    {
        IInspectable object = box_value(std::forward<Source>(source));

        REQUIRE_THROWS_AS(unbox_value<T>(object), hresult_no_interface);
        REQUIRE(unbox_value_or<T>(object, v) == v);

        REQUIRE_THROWS_AS(object.as<T>(), hresult_no_interface);
        REQUIRE(object.try_as<T>() == std::nullopt);
    }
}
TEST_CASE("Boxing")
{
    {
        // Covers all failure paths for non-IInspectable types.
        IInspectable object = box_value(SimpleStructure{ 123, {}, {}, {} });
        REQUIRE_THROWS_AS(unbox_value<int>(object), hresult_no_interface);
        REQUIRE_THROWS_AS(object.as<int>(), hresult_no_interface);
        REQUIRE(unbox_value_or<int>(object, 321) == 321);
        REQUIRE(object.try_as<int>() == std::nullopt);

    }

    {
        // Covers all failure paths for IInspectable types.
        IInspectable object = box_value(IReference<int>{ 123 });
        REQUIRE_THROWS_AS(unbox_value<IReference<double>>(object), hresult_no_interface);
        REQUIRE_THROWS_AS(object.as<IReference<double>>(), hresult_no_interface);
        object = IReference<double>{ 123.0 };
        REQUIRE(unbox_value_or<IReference<int>>(object, { 321 }) == IReference<int>{ 321 });
        REQUIRE(object.try_as<IReference<int>>() == nullptr);
    }

    TestUnbox<SimpleStructure>({ 123, {}, {}, {} }, { 123, {}, {}, {} });
    TestUnbox<hstring>(L"value", L"value", L"DEFAULT");
    TestUnbox<hstring>(hstring(L"value"), L"value", L"DEFAULT");
    TestUnbox<hstring>(std::wstring(L"value"), L"value", L"DEFAULT");
    TestUnbox<hstring>(std::wstring_view(L"value"), L"value", L"DEFAULT");
    TestUnbox<float>(123.0F, 321.0F);
    TestUnbox<double>(123.0, 321.0);
    TestUnboxIntegerType<uint8_t>(123U, 32U);
    TestUnboxIntegerType<int8_t>(123, 32);
    TestUnboxIntegerType<uint16_t>(123U, 321U);
    TestUnboxIntegerType<int16_t>(123, 321);
    TestUnboxIntegerType<uint32_t>(123U, 321U);
    TestUnboxIntegerType<int32_t>(123, 321);
    TestUnboxIntegerType<uint64_t>(123U, 321U);
    TestUnboxIntegerType<int64_t>(123, 321);
    TestUnbox<bool>(true, false);
    TestUnboxIntegerType<char16_t>(L'Y', L'N');
    TestUnbox<guid>(
        { 0x9b7a5590, 0x9262, 0x4c24, { 0xa6, 0x34, 0x18, 0xc7, 0xf9, 0x1e, 0x46, 0x05 } },
        { 0x8f081f19, 0xfa9d, 0x43ed, { 0x95, 0x52, 0xa3, 0x02, 0x75, 0x53, 0xa1, 0x4f } });
    TestUnbox<Point>({ 1, 2 }, { 2, 1 });
    TestUnbox<Size>({ 1, 2 }, { 2, 1 });
    TestUnbox<Rect>({ 1, 2, 3, 4 }, { 4, 3, 2, 1 });
    TestUnbox<DateTime>(clock::now() + 10s, clock::now() - 10s);
    TestUnbox<TimeSpan>(clock::now() + 10s - clock::now(), clock::now() - 10s - clock::now());
    TestUnbox<SignedEnum>(SignedEnum::Negative, SignedEnum::Positive);
    TestUnbox<UnsignedEnum>(UnsignedEnum::First, UnsignedEnum::Second);

    // Validate unboxing a enum from the underlying type.
    TestUnbox<SignedEnum>(static_cast<int32_t>(SignedEnum::Negative), SignedEnum::Negative, SignedEnum::Positive);
    TestUnbox<UnsignedEnum>(static_cast<uint32_t>(UnsignedEnum::First), UnsignedEnum::First, UnsignedEnum::Second);

    // Validate you can't unbox an enum from something other than the underlying type.
    TestFailedUnbox<SignedEnum>(static_cast<uint32_t>(SignedEnum::Negative), SignedEnum::Positive);
    TestFailedUnbox<SignedEnum>(static_cast<int16_t>(SignedEnum::Negative), SignedEnum::Positive);
    TestFailedUnbox<UnsignedEnum>(static_cast<int32_t>(UnsignedEnum::First), UnsignedEnum::Second);
    TestFailedUnbox<UnsignedEnum>(static_cast<int16_t>(UnsignedEnum::First), UnsignedEnum::Second);
    TestFailedUnbox<UnsignedEnum>(static_cast<uint16_t>(UnsignedEnum::First), UnsignedEnum::Second);

    {
        // Test some cases where the compiler has to choose between multiple overloads.
        REQUIRE(unbox_value_or<IInspectable>(nullptr, {}) == IInspectable{});
        REQUIRE(unbox_value_or(nullptr, hstring{}) == hstring{});
    }
}
