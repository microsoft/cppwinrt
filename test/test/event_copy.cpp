#include "pch.h"

using namespace winrt::Windows::Foundation;

//
// Checks that events can be copied, and that copies are independent from each other
//

TEST_CASE("event_copy")
{
    winrt::event<TypedEventHandler<int, int>> event;
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

    // basic copy
    winrt::event<TypedEventHandler<int, int>> event_copy(event);
    counter = 0;
    event_copy(0, 0);
    REQUIRE(counter == 11);

    // basic copy, through assignment operator
    event_copy = event;
    counter = 0;
    event_copy(0, 0);
    REQUIRE(counter == 11);

    // remove from original event and call copy.
    event.remove(a);
    counter = 0;
    event_copy(0, 0);
    REQUIRE(counter == 11);

    // add to original event and call copy.
    auto c = event.add([&](auto && ...)
        {
            counter += 100;
        });
    counter = 0;
    event_copy(0, 0);
    REQUIRE(counter == 11);

    // remove from copy and call original event
    event_copy.remove(b);
    counter = 0;
    event(0, 0);
    REQUIRE(counter == 110);

    // add to copy and call original event
    auto d = event_copy.add([&](auto && ...)
        {
            counter += 1000;
        });

    counter = 0;
    event(0, 0);
    REQUIRE(counter == 110);

    // clear copy and call original event
    event_copy.clear();
    counter = 0;
    event(0, 0);
    REQUIRE(counter == 110);
}
