#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

TEST_CASE("Generics")
{
    bool a = name_of<EventHandler<guid>>() == L"Windows.Foundation.EventHandler`1<Guid>";
    bool b = name_of<TypedEventHandler<guid, Point>>() == L"Windows.Foundation.TypedEventHandler`2<Guid, Windows.Foundation.Point>";

    REQUIRE(a);
    REQUIRE(b);
}
