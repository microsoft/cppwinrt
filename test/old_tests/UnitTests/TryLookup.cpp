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

TEST_CASE("TryRemove")
{
    auto map = single_threaded_map<int, IStringable>(std::map<int, IStringable>{
            { 123, nullptr },
            { 124, make<stringable>(L"remove") },
            { 125, make<stringable>(L"keep") },
        });

    REQUIRE(map.TryRemove(122) == false);
    REQUIRE(map.TryRemove(123) == true);
    REQUIRE(map.TryRemove(124) == true);

    // Should still have one item left.
    REQUIRE(map.Size() == 1);
    REQUIRE(map.Lookup(125).ToString() == L"keep");
}

TEST_CASE("TryLookup TryRemove error")
{
    // Simulate a non-agile map that is being accessed from the wrong thread.
    // "Try" operations should throw rather than erroneously report "not found".
    // Because they didn't even try. The operation never got off the ground.
    struct incorrectly_used_non_agile_map : implements<incorrectly_used_non_agile_map, IMap<int, int>>
    {
        int Lookup(int) { throw hresult_wrong_thread(); }
        int32_t Size() { throw hresult_wrong_thread(); }
        bool HasKey(int) { throw hresult_wrong_thread(); }
        IMapView<int, int> GetView() { throw hresult_wrong_thread(); }
        bool Insert(int, int) { throw hresult_wrong_thread(); }
        void Remove(int) { throw hresult_wrong_thread(); }
        void Clear() { throw hresult_wrong_thread(); }
    };
    
    auto map = make<incorrectly_used_non_agile_map>();
    REQUIRE_THROWS_AS(map.TryLookup(123), hresult_wrong_thread);
    REQUIRE_THROWS_AS(map.TryRemove(123), hresult_wrong_thread);
}