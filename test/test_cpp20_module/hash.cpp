#include "pch.h"

import std;
import winrt.Windows.Foundation;

//
// These tests confirm that std::hash specializations work correctly
// when consumed via modules, enabling use in unordered containers.
//

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("module_hash_hstring")
{
    std::unordered_set<hstring> set;
    set.insert(L"hello");
    set.insert(L"world");
    set.insert(L"hello"); // duplicate
    REQUIRE(set.size() == 2);
    REQUIRE(set.contains(L"hello"));
    REQUIRE(set.contains(L"world"));
}

TEST_CASE("module_hash_IUnknown")
{
    Uri uri(L"https://example.com");
    auto unknown = uri.as<Windows::Foundation::IUnknown>();

    std::unordered_set<Windows::Foundation::IUnknown> set;
    set.insert(unknown);
    set.insert(unknown); // duplicate — same identity
    REQUIRE(set.size() == 1);

    // A different object should hash differently (almost certainly)
    Uri uri2(L"https://other.com");
    set.insert(uri2.as<Windows::Foundation::IUnknown>());
    REQUIRE(set.size() == 2);
}

TEST_CASE("module_hash_projected_type")
{
    // Projected types like Uri should be hashable via the generated
    // std::hash specialization (inherits from hash_base).
    std::unordered_set<Uri> set;
    Uri u1(L"https://one.com");
    Uri u2(L"https://two.com");
    set.insert(u1);
    set.insert(u2);
    set.insert(u1); // duplicate
    REQUIRE(set.size() == 2);
}

TEST_CASE("module_hash_guid")
{
    std::unordered_set<guid> set;
    guid g1{ 0x01020304, 0x0506, 0x0708, { 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10 } };
    guid g2{ 0x11121314, 0x1516, 0x1718, { 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20 } };
    set.insert(g1);
    set.insert(g2);
    set.insert(g1); // duplicate
    REQUIRE(set.size() == 2);
}

TEST_CASE("module_hash_map_with_hstring_key")
{
    std::unordered_map<hstring, int> map;
    map[L"one"] = 1;
    map[L"two"] = 2;
    map[L"three"] = 3;
    REQUIRE(map.size() == 3);
    REQUIRE(map[L"two"] == 2);
}
