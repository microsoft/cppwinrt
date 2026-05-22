#include "pch.h"

#ifdef __cpp_lib_format

import std;
import winrt.Windows.Foundation;

//
// These tests confirm that std::format and std::formatter specializations work
// correctly when consumed via modules. Mirrors test/test_cpp20/format.cpp.
//

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("module_format_hstring")
{
    hstring str = L"World";
    REQUIRE(std::format(L"Hello {}", str) == L"Hello World");
}

TEST_CASE("module_format_IStringable")
{
    // Uri implements IStringable — exercises the generated
    // std::formatter<IStringable, wchar_t> specialization through modules.
    Uri uri(L"https://example.com/path");
    IStringable stringable = uri;
    REQUIRE(std::format(L"Visit: {}", stringable) == L"Visit: https://example.com/path");
}

TEST_CASE("module_format_projected_class")
{
    // Exercises the generated std::formatter<Uri, wchar_t> specialization
    // (inherits from formatter<IStringable>) through modules.
    Uri uri(L"https://example.com");
    REQUIRE(std::format(L"URL: {}", uri) == L"URL: https://example.com/");
}

#if __cpp_lib_format >= 202207L
TEST_CASE("module_format_winrt_format")
{
    // winrt::format helper (C++23 formattable concept)
    std::wstring str = L"World";
    REQUIRE(winrt::format(L"Hello {}", str) == L"Hello World");
    REQUIRE(winrt::format(L"C++/WinRT #{:d}", 1) == L"C++/WinRT #1");
}
#endif

#endif // __cpp_lib_format
