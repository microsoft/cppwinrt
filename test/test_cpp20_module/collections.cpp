#include "pch.h"

import winrt_base;
import winrt.Windows.Foundation;

using namespace winrt;
using namespace Windows::Foundation::Collections;

TEST_CASE("module_vector")
{
    auto vec = single_threaded_vector<int>();
    vec.Append(10);
    vec.Append(20);
    vec.Append(30);
    REQUIRE(vec.Size() == 3);
    REQUIRE(vec.GetAt(0) == 10);
    REQUIRE(vec.GetAt(2) == 30);

    vec.RemoveAtEnd();
    REQUIRE(vec.Size() == 2);
}

TEST_CASE("module_map")
{
    auto map = single_threaded_map<hstring, hstring>();
    map.Insert(L"key1", L"value1");
    map.Insert(L"key2", L"value2");
    REQUIRE(map.Size() == 2);
    REQUIRE(map.Lookup(L"key1") == L"value1");
    REQUIRE(map.HasKey(L"key2"));
    REQUIRE(!map.HasKey(L"key3"));
}

TEST_CASE("module_observable_vector")
{
    auto vec = single_threaded_observable_vector<int>();
    int change_count = 0;
    auto token = vec.VectorChanged([&](auto&&, auto&&) { ++change_count; });
    vec.Append(1);
    vec.Append(2);
    REQUIRE(change_count == 2);
    vec.VectorChanged(token);
}

TEST_CASE("module_iterable")
{
    auto vec = single_threaded_vector<int>();
    vec.Append(1);
    vec.Append(2);
    vec.Append(3);

    int sum = 0;
    for (auto v : vec)
    {
        sum += v;
    }
    REQUIRE(sum == 6);
}
