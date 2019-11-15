#include "pch.h"

TEST_CASE("box_guid")
{
    winrt::guid const guid_a = winrt::guid_of<winrt::Windows::Foundation::IUnknown>();
    GUID const guid_b = guid_a;

    auto box_a = winrt::box_value(guid_a);
    auto box_b = winrt::box_value(guid_b);
}

