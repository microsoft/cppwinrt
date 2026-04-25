#include "pch.h"

import std;
import winrt.Windows.Foundation;

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("module_uri")
{
    Uri uri(L"https://example.com/path?query=1");
    REQUIRE(!uri.AbsoluteUri().empty());
    REQUIRE(uri.Host() == L"example.com");
    REQUIRE(uri.Path() == L"/path");
}

TEST_CASE("module_property_value")
{
    auto pv = PropertyValue::CreateInt32(42);
    REQUIRE(pv.as<IPropertyValue>().GetInt32() == 42);

    auto pvs = PropertyValue::CreateString(L"hello");
    REQUIRE(pvs.as<IPropertyValue>().GetString() == L"hello");
}

TEST_CASE("module_hstring")
{
    hstring text = L"C++/WinRT modules";
    REQUIRE(!text.empty());
    REQUIRE(text.size() == 17);

    hstring empty;
    REQUIRE(empty.empty());
    REQUIRE(empty.size() == 0);
}

TEST_CASE("module_events")
{
    winrt::event<winrt::Windows::Foundation::EventHandler<int>> my_event;
    int received = 0;
    auto token = my_event.add([&](auto&&, int value) { received = value; });
    my_event(nullptr, 42);
    REQUIRE(received == 42);
    my_event.remove(token);
}
