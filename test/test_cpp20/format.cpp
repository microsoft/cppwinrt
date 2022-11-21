#include "pch.h"
#include <format>

struct stringable : winrt::implements<stringable, winrt::Windows::Foundation::IStringable>
{
    winrt::hstring ToString()
    {
        return L"a stringable object";
    }
};

TEST_CASE("format")
{
    {
        winrt::hstring str = L"World";
        REQUIRE(std::format(L"Hello {}", str) == L"Hello World");
    }

    {
        winrt::Windows::Foundation::IStringable obj = winrt::make<stringable>();
        REQUIRE(std::format(L"This is {}", obj) == L"This is a stringable object");
    }

    {
        winrt::Windows::Data::Json::JsonArray jsonArray;
        REQUIRE(std::format(L"The contents of the array are: {}", jsonArray) == L"The contents of the array are: []");
    }

#if __cpp_lib_format >= 202207L
    {
        std::wstring str = L"World";
        REQUIRE(winrt::format(L"Hello {}", str) == L"Hello World");
    }

    {
        REQUIRE(winrt::format(L"C++/WinRT #{:d}", 1) == L"C++/WinRT #1");
    }
#endif
}
