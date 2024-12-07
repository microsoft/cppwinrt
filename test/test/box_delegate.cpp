#include "pch.h"

TEST_CASE("box_delegate")
{
    using Handler = winrt::Windows::Foundation::TypedEventHandler<int, bool>;

    Handler d = [](auto&&...) {
    };
    REQUIRE(d);

    auto box = winrt::box_value(d);

    Handler unbox = winrt::unbox_value<Handler>(box);
    REQUIRE(winrt::get_abi(unbox) == winrt::get_abi(d));

    unbox = winrt::unbox_value_or<Handler>(box, Handler{});
    REQUIRE(winrt::get_abi(unbox) == winrt::get_abi(d));

    unbox = winrt::unbox_value_or<Handler>(winrt::Windows::Foundation::IInspectable{}, Handler{});
    REQUIRE(!unbox);
}
