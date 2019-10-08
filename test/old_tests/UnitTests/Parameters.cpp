#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Component;

TEST_CASE("Parameters")
{
    Parameters params;

    {
        params.SetInt32(123);
        REQUIRE(params.GetInt32() == 123);
        int32_t value{ 0 };
        params.OutInt32(value);
        REQUIRE(value == 123);
    }

    {
        params.SetString(L"value");
        REQUIRE(params.GetString() == L"value");
        hstring value;
        params.OutString(value);
        REQUIRE(value == L"value");
    }

    {
        params.SetObject(IReference<int>(456));
        REQUIRE(params.GetObject().as<IReference<int>>().Value() == 456);
        IInspectable value;
        params.OutObject(value);
        REQUIRE(value.as<IReference<int>>().Value() == 456);
    }

    {
        params.SetInt32Array({ 1,2,3 });
        REQUIRE(params.GetInt32Array() == com_array<int>{ 1, 2, 3 });

        com_array<int> value;
        params.OutInt32Array(value);
        REQUIRE(value == com_array<int>{ 1, 2, 3 });

        std::array<int, 3> view;
        params.CopyInt32Array(view);
        REQUIRE(view == std::array<int, 3>{1, 2, 3});
    }

    {
        params.SetStringArray({ L"one", L"two", L"three" });
        REQUIRE(params.GetStringArray() == com_array<hstring>{ L"one", L"two", L"three" });

        com_array<hstring> value;
        params.OutStringArray(value);
        REQUIRE(value == com_array<hstring>{ L"one", L"two", L"three" });

        std::array<hstring, 3> view;
        params.CopyStringArray(view);
        REQUIRE(view == std::array<hstring, 3>{ L"one", L"two", L"three" });
    }

    {
        IInspectable one = IReference<int>(1);
        IInspectable two = IReference<int>(2);
        IInspectable three = IReference<int>(3);

        params.SetObjectArray({ one, two, three });
        REQUIRE(params.GetObjectArray() == com_array<IInspectable>{ one, two, three });

        com_array<IInspectable> value;
        params.OutObjectArray(value);
        REQUIRE(value == com_array<IInspectable>{ one, two, three });

        std::array<IInspectable, 3> view;
        params.CopyObjectArray(view);
        REQUIRE(view == std::array<IInspectable, 3>{ one, two, three });
    }
}
