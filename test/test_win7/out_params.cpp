#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace test_component;

namespace
{
    struct Stringable : implements<Stringable, IStringable>
    {
        hstring ToString()
        {
            return L"Stringable";
        }
    };
}

TEST_CASE("out_params")
{
    Class object;

    {
        int value;
        object.OutInt32(value);
        REQUIRE(value == 123);
    }
    {
        hstring value = L"replace";
        object.OutString(value);
        REQUIRE(value == L"123");
    }
    {
        IInspectable value = make<Stringable>();
        object.OutObject(value);
        REQUIRE(value.as<IStringable>().ToString() == L"123");
    }
    {
        IStringable value = make<Stringable>();
        object.OutStringable(value);
        REQUIRE(value.ToString() == L"123");
    }
    {
        Struct value{ L"First", L"Second" };
        object.OutStruct(value);
        REQUIRE(value.First == L"1");
        REQUIRE(value.Second == L"2");
    }
    {
        Signed value;
        object.OutEnum(value);
        REQUIRE(value == Signed::First);
    }

    {
        com_array<int32_t> value(10);
        object.OutInt32Array(value);
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == 1);
        REQUIRE(value[1] == 2);
        REQUIRE(value[2] == 3);
    }
    {
        com_array<hstring> value(10);
        object.OutStringArray(value);
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == L"1");
        REQUIRE(value[1] == L"2");
        REQUIRE(value[2] == L"3");
    }
    {
        com_array<IInspectable> value(10);
        object.OutObjectArray(value);
        REQUIRE(value.size() == 3);
        REQUIRE(value[0].as<IStringable>().ToString() == L"1");
        REQUIRE(value[1].as<IStringable>().ToString() == L"2");
        REQUIRE(value[2].as<IStringable>().ToString() == L"3");
    }
    {
        com_array<IStringable> value(10);
        object.OutStringableArray(value);
        REQUIRE(value.size() == 3);
        REQUIRE(value[0].ToString() == L"1");
        REQUIRE(value[1].ToString() == L"2");
        REQUIRE(value[2].ToString() == L"3");
    }
    {
        com_array<Struct> value(10);
        object.OutStructArray(value);
        REQUIRE(value.size() == 2);
        REQUIRE(value[0].First == L"1");
        REQUIRE(value[0].Second == L"2");
        REQUIRE(value[1].First == L"10");
        REQUIRE(value[1].Second == L"20");
    }
    {
        com_array<Signed> value(10);
        object.OutEnumArray(value);
        REQUIRE(value.size() == 2);
        REQUIRE(value[0] == Signed::First);
        REQUIRE(value[1] == Signed::Second);
    }

    {
        std::array<int32_t, 4> value{ 0xCC, 0xCC, 0xCC, 0xCC };
        object.RefInt32Array(value);
        REQUIRE(value[0] == 1);
        REQUIRE(value[1] == 2);
        REQUIRE(value[2] == 3);
        REQUIRE(value[3] == 0xCC);
    }
    {
        std::array<hstring, 4> value{ L"r1", L"r2", L"r3", L"r4" };
        object.RefStringArray(value);
        REQUIRE(value[0] == L"1");
        REQUIRE(value[1] == L"2");
        REQUIRE(value[2] == L"3");
        REQUIRE(value[3] == L"");
    }
    {
        std::array<IInspectable, 4> value{ make<Stringable>(), make<Stringable>(), make<Stringable>(), make<Stringable>() };
        object.RefObjectArray(value);
        REQUIRE(value[0].as<IStringable>().ToString() == L"1");
        REQUIRE(value[1].as<IStringable>().ToString() == L"2");
        REQUIRE(value[2].as<IStringable>().ToString() == L"3");
        REQUIRE(value[3] == nullptr);
    }
    {
        std::array<IStringable, 4> value{ make<Stringable>(), make<Stringable>(), make<Stringable>(), make<Stringable>() };
        object.RefStringableArray(value);
        REQUIRE(value[0].ToString() == L"1");
        REQUIRE(value[1].ToString() == L"2");
        REQUIRE(value[2].ToString() == L"3");
        REQUIRE(value[3] == nullptr);
    }
    {
        std::array<Struct, 3> value{ {L"First", L"Second"} };
        object.RefStructArray(value);
        REQUIRE(value[0].First == L"1");
        REQUIRE(value[0].Second == L"2");
        REQUIRE(value[1].First == L"3");
        REQUIRE(value[1].Second == L"4");
        REQUIRE(value[2].First == L"");
        REQUIRE(value[2].Second == L"");
    }
    {
        std::array<Signed, 3> value{};
        object.RefEnumArray(value);
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == Signed::First);
        REQUIRE(value[1] == Signed::Second);
        REQUIRE(value[2] == static_cast<Signed>(0));
    }

    object.Fail(true);

    {
        int value = 0xCC;
        REQUIRE_THROWS_AS(object.OutInt32(value), hresult_invalid_argument);
        REQUIRE(value == 0xCC);
    }
    {
        hstring value = L"replace";
        REQUIRE_THROWS_AS(object.OutString(value), hresult_invalid_argument);
        REQUIRE(value == L"");
    }
    {
        IInspectable value = make<Stringable>();
        REQUIRE_THROWS_AS(object.OutObject(value), hresult_invalid_argument);
        REQUIRE(value == nullptr);
    }
    {
        IStringable value = make<Stringable>();
        REQUIRE_THROWS_AS(object.OutStringable(value), hresult_invalid_argument);
        REQUIRE(value == nullptr);
    }
    {
        Struct value{ L"First", L"Second" };
        REQUIRE_THROWS_AS(object.OutStruct(value), hresult_invalid_argument);
        REQUIRE(value.First == L"");
        REQUIRE(value.Second == L"");
    }
    {
        Signed value = static_cast<Signed>(0xCC);
        REQUIRE_THROWS_AS(object.OutEnum(value), hresult_invalid_argument);
        REQUIRE(static_cast<int32_t>(value) == 0xCC);
    }

    {
        com_array<int32_t> value(10);
        REQUIRE_THROWS_AS(object.OutInt32Array(value), hresult_invalid_argument);
        REQUIRE(value.size() == 0);
    }
    {
        com_array<hstring> value(10);
        REQUIRE_THROWS_AS(object.OutStringArray(value), hresult_invalid_argument);
        REQUIRE(value.size() == 0);
    }
    {
        com_array<IInspectable> value(10);
        REQUIRE_THROWS_AS(object.OutObjectArray(value), hresult_invalid_argument);
        REQUIRE(value.size() == 0);
    }
    {
        com_array<IStringable> value(10);
        REQUIRE_THROWS_AS(object.OutStringableArray(value), hresult_invalid_argument);
        REQUIRE(value.size() == 0);
    }
    {
        com_array<Struct> value(10);
        REQUIRE_THROWS_AS(object.OutStructArray(value), hresult_invalid_argument);
        REQUIRE(value.size() == 0);
    }
    {
        com_array<Signed> value(10);
        REQUIRE_THROWS_AS(object.OutEnumArray(value), hresult_invalid_argument);
        REQUIRE(value.size() == 0);
    }

    {
        std::array<int32_t, 4> value{ 0xCC, 0xCC, 0xCC, 0xCC };
        REQUIRE_THROWS_AS(object.RefInt32Array(value), hresult_invalid_argument);
        REQUIRE(value[0] == 0xCC);
        REQUIRE(value[1] == 0xCC);
        REQUIRE(value[2] == 0xCC);
        REQUIRE(value[3] == 0xCC);
    }
    {
        std::array<hstring, 4> value{ L"r1", L"r2", L"r3", L"r4" };
        REQUIRE_THROWS_AS(object.RefStringArray(value), hresult_invalid_argument);
        REQUIRE(value[0] == L"");
        REQUIRE(value[1] == L"");
        REQUIRE(value[2] == L"");
        REQUIRE(value[3] == L"");
    }
    {
        std::array<IInspectable, 4> value{ make<Stringable>(), make<Stringable>(), make<Stringable>(), make<Stringable>() };
        REQUIRE_THROWS_AS(object.RefObjectArray(value), hresult_invalid_argument);
        REQUIRE(value[0] == nullptr);
        REQUIRE(value[1] == nullptr);
        REQUIRE(value[2] == nullptr);
        REQUIRE(value[3] == nullptr);
    }
    {
        std::array<IStringable, 4> value{ make<Stringable>(), make<Stringable>(), make<Stringable>(), make<Stringable>() };
        REQUIRE_THROWS_AS(object.RefStringableArray(value), hresult_invalid_argument);
        REQUIRE(value[0] == nullptr);
        REQUIRE(value[1] == nullptr);
        REQUIRE(value[2] == nullptr);
        REQUIRE(value[3] == nullptr);
    }
    {
        std::array<Struct, 3> value{ {L"First", L"Second"} };
        REQUIRE_THROWS_AS(object.RefStructArray(value), hresult_invalid_argument);
        REQUIRE(value[0].First == L"");
        REQUIRE(value[0].Second == L"");
        REQUIRE(value[1].First == L"");
        REQUIRE(value[1].Second == L"");
        REQUIRE(value[2].First == L"");
        REQUIRE(value[2].Second == L"");
    }
    {
        std::array<Signed, 2> value{ static_cast<Signed>(0xCC), static_cast<Signed>(0xCC) };
        REQUIRE_THROWS_AS(object.RefEnumArray(value), hresult_invalid_argument);
        REQUIRE(value[0] == static_cast<Signed>(0xCC));
        REQUIRE(value[1] == static_cast<Signed>(0xCC));
    }
}
