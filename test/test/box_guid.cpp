#include "pch.h"

TEST_CASE("box_guid")
{
    winrt::guid const winrt_guid = __uuidof(::IUnknown);
    GUID const sdk_guid = winrt_guid;

    auto box_a = winrt::box_value(winrt_guid);
    auto box_b = winrt::box_value(sdk_guid);

    winrt::guid unbox_a = winrt::unbox_value<winrt::guid>(box_a);
    GUID unbox_b = winrt::unbox_value<GUID>(box_a);

    REQUIRE(unbox_a == winrt_guid);
    REQUIRE(unbox_b == sdk_guid);

    unbox_a = winrt::unbox_value_or<winrt::guid>(box_a, winrt::guid{});
    unbox_b = winrt::unbox_value_or<GUID>(box_a, GUID{});

    REQUIRE(unbox_a == winrt_guid);
    REQUIRE(unbox_b == sdk_guid);
}
