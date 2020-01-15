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

TEST_CASE("return_params")
{
    Class object;

    {
        int value = object.ReturnInt32();
        REQUIRE(value == 123);
    }
    {
        hstring value = object.ReturnString();
        REQUIRE(value == L"123");
    }
    {
        IInspectable value = object.ReturnObject();
        REQUIRE(value.as<IStringable>().ToString() == L"123");
    }
    {
        IStringable value = object.ReturnStringable();
        REQUIRE(value.ToString() == L"123");
    }
    {
        Struct value = object.ReturnStruct();
        REQUIRE(value.First == L"1");
        REQUIRE(value.Second == L"2");
    }
    {
        com_array<int32_t> value = object.ReturnInt32Array();
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == 1);
        REQUIRE(value[1] == 2);
        REQUIRE(value[2] == 3);
    }
    {
        com_array<hstring> value = object.ReturnStringArray();
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == L"1");
        REQUIRE(value[1] == L"2");
        REQUIRE(value[2] == L"3");
    }
    {
        com_array<IInspectable> value = object.ReturnObjectArray();
        REQUIRE(value.size() == 3);
        REQUIRE(value[0].as<IStringable>().ToString() == L"1");
        REQUIRE(value[1].as<IStringable>().ToString() == L"2");
        REQUIRE(value[2].as<IStringable>().ToString() == L"3");
    }
    {
        com_array<IStringable> value = object.ReturnStringableArray();
        REQUIRE(value.size() == 3);
        REQUIRE(value[0].ToString() == L"1");
        REQUIRE(value[1].ToString() == L"2");
        REQUIRE(value[2].ToString() == L"3");
    }
    {
        com_array<Struct> value = object.ReturnStructArray();
        REQUIRE(value.size() == 2);
        REQUIRE(value[0].First == L"1");
        REQUIRE(value[0].Second == L"2");
        REQUIRE(value[1].First == L"10");
        REQUIRE(value[1].Second == L"20");
    }
}
