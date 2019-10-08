#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

namespace
{
    struct stringable : implements<stringable, IStringable>
    {
        explicit stringable(hstring value) : m_value(std::move(value))
        {
        }

        hstring ToString() const
        {
            return m_value;
        }

        hstring const m_value;
    };
}

TEST_CASE("TryLookup")
{
    {
        // Covers the hstring partial specialization.

        // Not found
        auto map = single_threaded_map<hstring, IStringable>();
        REQUIRE_THROWS_AS(map.Lookup(L"key"), hresult_out_of_bounds);
        REQUIRE(!map.TryLookup(L"key"));

        // Found but value is nullptr
        map.Insert(L"key", nullptr);
        REQUIRE(map.Lookup(L"key") == nullptr);
        REQUIRE(!map.TryLookup(L"key"));

        // Found
        map.Insert(L"key", make<stringable>(L"value"));
        REQUIRE(map.Lookup(L"key").ToString() == L"value");
        REQUIRE(map.TryLookup(L"key").ToString() == L"value");
    }

    {
        // Covers the base template.

        // Not found
        auto map = single_threaded_map<int, IStringable>();
        REQUIRE_THROWS_AS(map.Lookup(123), hresult_out_of_bounds);
        REQUIRE(!map.TryLookup(123));

        // Found but value is nullptr
        map.Insert(123, nullptr);
        REQUIRE(map.Lookup(123) == nullptr);
        REQUIRE(!map.TryLookup(123));

        // Found
        map.Insert(123, make<stringable>(L"value"));
        REQUIRE(map.Lookup(123).ToString() == L"value");
        REQUIRE(map.TryLookup(123).ToString() == L"value");
    }

    {
        // Covers the hstring partial specialization returning std:optional.

        // Not found
        auto map = single_threaded_map<hstring, int>();
        REQUIRE_THROWS_AS(map.Lookup(L"key"), hresult_out_of_bounds);
        REQUIRE(!map.TryLookup(L"key"));

        // Found
        map.Insert(L"key", 456);
        REQUIRE(map.Lookup(L"key") == 456);
        REQUIRE(map.TryLookup(L"key").value() == 456);
    }

    {
        // Covers the base template returning std:optional.

        // Not found
        auto map = single_threaded_map<int, int>();
        REQUIRE_THROWS_AS(map.Lookup(123), hresult_out_of_bounds);
        REQUIRE(!map.TryLookup(123));

        // Found
        map.Insert(123, 456);
        REQUIRE(map.Lookup(123) == 456);
        REQUIRE(map.TryLookup(123).value() == 456);
    }
}
