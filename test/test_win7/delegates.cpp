#include "pch.h"
#include "winrt/test_component.Delegates.h"

using namespace winrt;
using namespace test_component::Delegates;

TEST_CASE("delegates")
{
    {
        bool run{};
        AgileDelegate d = [&] {run = true; };
        REQUIRE(!run);
        d();
        REQUIRE(run);
    }
    {
        hstring value;
        InDelegate d = [&](hstring const& in)
        {
            value = in;
        };
        REQUIRE(value.empty());
        d(L"Test");
        REQUIRE(value == L"Test");
    }
    {
        ReturnStringDelegate d = [] {return L"Test"; };
        REQUIRE(d() == L"Test");
    }
    {
        ReturnInt32Delegate d = [] {return 123; };
        REQUIRE(d() == 123);
    }
    {
        OutStringDelegate d = [](hstring& value)
        {
            value = L"Test";
        };
        hstring value;
        d(value);
        REQUIRE(value == L"Test");
    }
    {
        OutStringDelegate d = [](hstring&)
        {
        };
        hstring value = L"old";
        d(value);
        REQUIRE(value == L"");
    }
    {
        OutInt32Delegate d = [](int32_t & value)
        {
            value = 123;
        };
        int32_t value{ 0xCC };
        d(value);
        REQUIRE(value == 123);
    }
    {
        OutInt32Delegate d = [](int32_t&)
        {
        };
        int32_t value{ 123 };
        d(value);
        REQUIRE(value == 123);
    }
    {
        ReturnStringArrayDelegate d = [] { return com_array<hstring>{ L"One", L"Two", L"Three" }; };
        com_array<hstring> value = d();
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == L"One");
        REQUIRE(value[1] == L"Two");
        REQUIRE(value[2] == L"Three");
    }
    {
        OutStringArrayDelegate d = [](com_array<hstring>& value) { value = { L"One", L"Two", L"Three" }; };

        com_array<hstring> value;
        d(value);

        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == L"One");
        REQUIRE(value[1] == L"Two");
        REQUIRE(value[2] == L"Three");
    }
    {
        RefStringArrayDelegate d = [](array_view<hstring> value) { value[0] = L"One"; value[1] = L"Two"; value[2] = L"Three"; };

        std::array<hstring, 4> value{ L"r1", L"r2", L"r3", L"r4" };
        d(value);

        REQUIRE(value[0] == L"One");
        REQUIRE(value[1] == L"Two");
        REQUIRE(value[2] == L"Three");
        REQUIRE(value[3] == L"");
    }
}
