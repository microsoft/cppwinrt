#include "catch.hpp"
#include <winerror.h>

import std;
import winrt;

using namespace winrt;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Collections;

// ---- Standard library interop ----

TEST_CASE("module_std_wstring_interop")
{
    // Construct hstring from std::wstring
    std::wstring ws = L"hello from std::wstring";
    hstring h{ ws };
    REQUIRE(h == L"hello from std::wstring");

    // Convert back
    std::wstring_view view = h;
    REQUIRE(view == L"hello from std::wstring");

    // Concatenation
    std::wstring combined = std::wstring(h) + L" world";
    REQUIRE(combined == L"hello from std::wstring world");
}

TEST_CASE("module_box_std_wstring")
{
    // box_value with a wide string literal
    auto boxed = box_value(L"boxed literal");
    REQUIRE(unbox_value<hstring>(boxed) == L"boxed literal");

    // box_value with hstring
    hstring hs = L"boxed hstring";
    auto boxed2 = box_value(hs);
    REQUIRE(unbox_value<hstring>(boxed2) == L"boxed hstring");
}

TEST_CASE("module_box_numeric_types")
{
    auto boxed_int = box_value(42);
    REQUIRE(unbox_value<int32_t>(boxed_int) == 42);

    auto boxed_double = box_value(3.14);
    REQUIRE(unbox_value<double>(boxed_double) == 3.14);

    auto boxed_bool = box_value(true);
    REQUIRE(unbox_value<bool>(boxed_bool) == true);
}

// ---- Collections ----

TEST_CASE("module_vector_view")
{
    auto vec = single_threaded_vector<hstring>({ L"one", L"two", L"three" });
    REQUIRE(vec.Size() == 3);
    REQUIRE(vec.GetAt(0) == L"one");
    REQUIRE(vec.GetAt(2) == L"three");

    // Iterate
    int count = 0;
    for (auto const& item : vec)
    {
        count++;
        REQUIRE(!item.empty());
    }
    REQUIRE(count == 3);
}

TEST_CASE("module_map")
{
    auto map = single_threaded_map<hstring, int32_t>();
    map.Insert(L"a", 1);
    map.Insert(L"b", 2);
    map.Insert(L"c", 3);

    REQUIRE(map.Size() == 3);
    REQUIRE(map.Lookup(L"b") == 2);
    REQUIRE(map.HasKey(L"c"));
    REQUIRE(!map.HasKey(L"d"));
}

TEST_CASE("module_observable_vector")
{
    auto vec = single_threaded_observable_vector<hstring>();
    int callback_count = 0;
    vec.VectorChanged([&](auto&&, auto&&) { callback_count++; });

    vec.Append(L"first");
    vec.Append(L"second");
    REQUIRE(vec.Size() == 2);
    REQUIRE(callback_count == 2);
}

// ---- Errors and HRESULT ----

TEST_CASE("module_hresult_error")
{
    try
    {
        throw hresult_invalid_argument(L"test error message");
    }
    catch (hresult_error const& e)
    {
        REQUIRE(e.code() == E_INVALIDARG);
        REQUIRE(to_string(e.message()).find("test error message") != std::string::npos);
    }
}

// ---- GUIDs ----

TEST_CASE("module_guid")
{
    auto g = guid_of<IStringable>();
    REQUIRE(g != guid{});

    // Round-trip through string
    auto str = to_hstring(g);
    REQUIRE(!str.empty());
}

// ---- Format (C++20) ----

#ifdef __cpp_lib_format
TEST_CASE("module_format")
{
    hstring str = L"World";
    auto result = std::format(L"Hello {}", str);
    REQUIRE(result == L"Hello World");
}
#endif
