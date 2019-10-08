#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Numerics;

TEST_CASE("abi_args")
{
    //
    // "%.size(), get_abi(%)"
    //

    // generic, in, array, object
    {
        auto a = single_threaded_vector<IInspectable>();
        a.ReplaceAll({ box_value(1), box_value(2) });
        REQUIRE(a.Size() == 2);
        REQUIRE(unbox_value<int32_t>(a.GetAt(0)) == 1);
        REQUIRE(unbox_value<int32_t>(a.GetAt(1)) == 2);
    }

    // generic, in, array, string
    {
        auto a = single_threaded_vector<hstring>();
        a.ReplaceAll({ L"1", L"2" });
        REQUIRE(a.Size() == 2);
        REQUIRE(a.GetAt(0) == L"1");
        REQUIRE(a.GetAt(1) == L"2");
    }

    // generic, in, array, enum
    {
        auto a = single_threaded_vector<PropertyType>();
        a.ReplaceAll({ PropertyType::Int16, PropertyType::Int32 });
        REQUIRE(a.Size() == 2);
        REQUIRE(a.GetAt(0) == PropertyType::Int16);
        REQUIRE(a.GetAt(1) == PropertyType::Int32);
    }

    // generic, in, array, struct
    {
        auto a = single_threaded_vector<Rational>();
        a.ReplaceAll({ {1,1}, {2,2} });
        REQUIRE(a.Size() == 2);
        REQUIRE(a.GetAt(0) == Rational{1, 1});
        REQUIRE(a.GetAt(1) == Rational{2, 2});
    }

    // generic, in, array, fundamental
    {
        auto a = single_threaded_vector<int32_t>();
        a.ReplaceAll({ 1, 2 });
        REQUIRE(a.Size() == 2);
        REQUIRE(a.GetAt(0) == 1);
        REQUIRE(a.GetAt(1) == 2);
    }

    //
    // "%.size(), put_abi(%)"
    //

    // generic, out, array, object
    {
        auto a = single_threaded_vector<IInspectable>();
        a.ReplaceAll({ box_value(1), box_value(2) });
        std::array<IInspectable, 2> b;
        a.GetMany(0, b);
        REQUIRE(unbox_value<int32_t>(b[0]) == 1);
        REQUIRE(unbox_value<int32_t>(b[1]) == 2);
    }

    // generic, out, array, string
    {
        auto a = single_threaded_vector<hstring>();
        a.ReplaceAll({ L"1", L"2" });
        std::array<hstring, 2> b;
        a.GetMany(0, b);
        REQUIRE(b[0] == L"1");
        REQUIRE(b[1] == L"2");
    }

    // generic, out, array, enum
    {
        auto a = single_threaded_vector<PropertyType>();
        a.ReplaceAll({ PropertyType::Int16, PropertyType::Int32 });
        std::array<PropertyType, 2> b;
        a.GetMany(0, b);
        REQUIRE(b[0] == PropertyType::Int16);
        REQUIRE(b[1] == PropertyType::Int32);
    }

    // generic, out, array, struct
    {
        auto a = single_threaded_vector<Rational>();
        a.ReplaceAll({ {1,1}, {2,2} });
        std::array<Rational, 2> b;
        a.GetMany(0, b);
        REQUIRE(b[0] == Rational{ 1, 1 });
        REQUIRE(b[1] == Rational{ 2, 2 });
    }

    // generic, out, array, fundamental
    {
        auto a = single_threaded_vector<int32_t>();
        a.ReplaceAll({ 1, 2 });
        std::array<int32_t, 2> b;
        a.GetMany(0, b);
        REQUIRE(b[0] == 1);
        REQUIRE(b[1] == 2);
    }
}
