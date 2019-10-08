#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

//
// Checks that invalid tokens may be removed harmlessly.
//

TEST_CASE("invalid_events")
{
    event<TypedEventHandler<int, int>> event;
    int counter{};

    auto a = event.add([&](auto && ...)
        {
            counter += 1;
        });

    auto b = event.add([&](auto && ...)
        {
            counter += 10;
        });

    REQUIRE(counter == 0);
    event(0, 0);
    REQUIRE(counter == 11);

    // Remove invalid token (with two valids)
    event.remove(event_token {1});

    counter = 0;
    event(0, 0);
    REQUIRE(counter == 11);

    // Remove valid token
    event.remove(b);

    counter = 0;
    event(0, 0);
    REQUIRE(counter == 1);

    // Remove invalid token (with one valid)
    event.remove(event_token {1});

    counter = 0;
    event(0, 0);
    REQUIRE(counter == 1);

    // Remove remaining valid token
    event.remove(a);

    counter = 0;
    event(0, 0);
    REQUIRE(counter == 0);

    // Remove invalid token (with no valids)
    event.remove(event_token {1});

    counter = 0;
    event(0, 0);
    REQUIRE(counter == 0);
}
