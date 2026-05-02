#include "pch.h"

import std;
import winrt.Windows.Foundation.Collections;

//
// These tests confirm that C++/WinRT collections support range-based for loop iteration
// and structured bindings when consumed via modules.
//

using namespace winrt;
using namespace Windows::Foundation::Collections;

TEST_CASE("module_range_for_IIterable")
{
    IIterable<int> c = single_threaded_vector<int>({ 1, 2, 3 });
    std::vector<int> result;

    for (int i : c)
    {
        result.push_back(i);
    }

    REQUIRE(result.size() == 3);
    REQUIRE(result[0] == 1);
    REQUIRE(result[1] == 2);
    REQUIRE(result[2] == 3);
}

TEST_CASE("module_range_for_IVector")
{
    IVector<int> c = single_threaded_vector<int>({ 1, 2, 3 });
    std::vector<int> result;

    for (int i : c)
    {
        result.push_back(i);
    }

    REQUIRE(result.size() == 3);
    REQUIRE(result[0] == 1);
    REQUIRE(result[1] == 2);
    REQUIRE(result[2] == 3);
}

TEST_CASE("module_range_for_IVectorView")
{
    IVectorView<int> c = single_threaded_vector<int>({ 1, 2, 3 }).GetView();
    std::vector<int> result;

    for (int i : c)
    {
        result.push_back(i);
    }

    REQUIRE(result.size() == 3);
    REQUIRE(result[0] == 1);
    REQUIRE(result[1] == 2);
    REQUIRE(result[2] == 3);
}

TEST_CASE("module_structured_bindings_IKeyValuePair")
{
    std::map<int, hstring> values
    {
        { 1, L"one"},
        { 2, L"two"},
        { 3, L"three"},
    };

    IIterable<IKeyValuePair<int32_t, hstring>> c = single_threaded_map<int32_t, hstring>(std::map<int, hstring>(values));
    std::map<int, hstring> result;

    for (IKeyValuePair<int32_t, hstring> i : c)
    {
        result[i.Key()] = i.Value();

        // Structured binding on IKeyValuePair
        auto const [key, value] = i;
        REQUIRE(key == i.Key());
        REQUIRE(value == i.Value());
    }

    REQUIRE(result == values);

    // Range-for with structured bindings
    result.clear();

    for (auto&& [key, value] : c)
    {
        result[key] = value;
    }

    REQUIRE(result == values);
}

TEST_CASE("module_range_for_IMap")
{
    std::map<int, hstring> values
    {
        { 1, L"one" },
        { 2, L"two" },
        { 3, L"three" },
    };

    IMap<int32_t, hstring> c = single_threaded_map<int32_t, hstring>(std::map<int, hstring>(values));
    std::map<int, hstring> result;

    for (auto&& [key, value] : c)
    {
        result[key] = value;
    }

    REQUIRE(result == values);
}

TEST_CASE("module_range_for_IMapView")
{
    std::map<int, hstring> values
    {
        { 1, L"one" },
        { 2, L"two" },
        { 3, L"three" },
    };

    IMapView<int32_t, hstring> c = single_threaded_map<int32_t, hstring>(std::map<int, hstring>(values)).GetView();
    std::map<int, hstring> result;

    for (auto&& [key, value] : c)
    {
        result[key] = value;
    }

    REQUIRE(result == values);
}
