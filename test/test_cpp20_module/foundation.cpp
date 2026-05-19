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

TEST_CASE("module_foundation_point")
{
    Point p{ 5.0f, 10.0f };
    REQUIRE(p.X == 5.0f);
    REQUIRE(p.Y == 10.0f);
}

TEST_CASE("module_foundation_size")
{
    Size s{ 800.0f, 600.0f };
    REQUIRE(s.Width == 800.0f);
    REQUIRE(s.Height == 600.0f);
}

TEST_CASE("module_foundation_rect")
{
    Point origin{ 0.0f, 0.0f };
    Size extent{ 100.0f, 200.0f };
    Rect r(origin, extent);
    REQUIRE(r.X == 0.0f);
    REQUIRE(r.Width == 100.0f);
}
