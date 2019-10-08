#include "pch.h"
#include "catch.hpp"
#include <clocale>

using namespace winrt;

namespace
{
    void test_cases()
    {
        {
            uint8_t value = 42;
            REQUIRE(to_hstring(value) == L"42");
        }
        {
            int8_t value = -42;
            REQUIRE(to_hstring(value) == L"-42");
        }
        {
            uint16_t value = 1729;
            REQUIRE(to_hstring(value) == L"1729");
        }
        {
            int16_t value = -1729;
            REQUIRE(to_hstring(value) == L"-1729");
        }
        {
            uint32_t value = 123456789;
            REQUIRE(to_hstring(value) == L"123456789");
        }
        {
            int32_t value = -123456789;
            REQUIRE(to_hstring(value) == L"-123456789");
        }
        {
            uint64_t value = 1234567890123456;
            REQUIRE(to_hstring(value) == L"1234567890123456");
        }
        {
            int64_t value = -1234567890123456;
            REQUIRE(to_hstring(value) == L"-1234567890123456");
        }
        {
            REQUIRE(to_hstring(true) == L"true");
            REQUIRE(to_hstring(false) == L"false");
        }
        {
            char16_t value = u'☎';
            REQUIRE(to_hstring(value) == L"\u260E");
        }
        {
            REQUIRE(to_hstring(guid_of<Windows::Foundation::IInspectable>()) == L"{af86e2e0-b12d-4c6a-9c5a-d7aa65101e90}");
        }
        {
            hstring value = L"I am not a string.";
            REQUIRE(to_hstring(value) == value);
        }
        {
            float value = 3.14159f;
            REQUIRE(to_hstring(value) == L"3.14159");
        }
        {
            double value = 1234567890.123456789;
            REQUIRE(to_hstring(value) == L"1.2345678901234567e+09");
        }
        {
            REQUIRE(to_hstring("") == L"");
            REQUIRE(to_hstring("value") == L"value");
            REQUIRE(to_hstring(std::string("value")) == L"value");
            REQUIRE(to_hstring(std::string_view("value")) == L"value");
        }
        {
            REQUIRE(to_string(L"") == "");
            REQUIRE(to_string(L"value") == "value");
            REQUIRE(to_string(std::wstring(L"value")) == "value");
            REQUIRE(to_string(std::wstring_view(L"value")) == "value");
            REQUIRE(to_string(hstring(L"value")) == "value");
        }
        {
            hstring const a = L"This \u260E is a telephone!";
            std::string const b = to_string(a);
            REQUIRE(b == u8"This \u260E is a telephone!");
            hstring const c = to_hstring(b);
            REQUIRE(a == c);
        }
    }
}

TEST_CASE("to_hstring")
{
    // Ensure we reset the global locale state on the way out
    struct scope_exit
    {
        ~scope_exit()
        {
            setlocale(LC_ALL, "C");
        }
    } guard;
    
    test_cases();

    // Set a locale with funky decimal and digit separators
    setlocale(LC_ALL, "ps-AF");
    test_cases();
}