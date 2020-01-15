#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace test_component;

namespace
{
    struct Value : implements<Value, IStringable>
    {
        Value(int32_t value) :
            m_value(value)
        {
        }

        hstring ToString()
        {
            return hstring{ std::to_wstring(m_value) };
        }

    private:

        int32_t m_value{};
    };
}

TEST_CASE("in_params")
{
    Class object;

    REQUIRE(object.InInt32(123) == L"123");
    REQUIRE(object.InString(L"123") == L"123");
    REQUIRE(object.InObject(make<Value>(123)) == L"123");
    REQUIRE(object.InStringable(make<Value>(123)) == L"123");
    REQUIRE(object.InStruct({ L"1", L"2" }) == L"12");
    REQUIRE(object.InStructRef({ L"1", L"2" }) == L"12ref");
    REQUIRE(object.InEnum(Signed::First) == L"First");

    REQUIRE(object.InInt32Array({ 1,2 }) == L"12");
    REQUIRE(object.InStringArray({ L"1", L"2" }) == L"12");
    REQUIRE(object.InObjectArray({ make<Value>(1), make<Value>(2) }) == L"12");
    REQUIRE(object.InStringableArray({ make<Value>(1), make<Value>(2) }) == L"12");
    REQUIRE(object.InStructArray({ {L"1",L"2"}, {L"3",L"4"} }) == L"1234");
    REQUIRE(object.InEnumArray({ Signed::First, Signed::Second }) == L"FirstSecond");

    // params::hstring optimizations
    REQUIRE(object.InString(L"") == L"");
    REQUIRE(object.InString({}) == L"");
    wchar_t non_const_string[1] = { L'\0' };
    REQUIRE(object.InString(non_const_string) == L"");
}
