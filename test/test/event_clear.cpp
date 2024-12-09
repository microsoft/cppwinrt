#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

//
// Checks that clear removes all event handlers
//

TEST_CASE("event_clear")
{
    event<TypedEventHandler<int, int>> event;
    int counter{};

    auto a = event.add([&](auto&&...) { counter += 1; });
    (void)a;

    auto b = event.add([&](auto&&...) { counter += 10; });
    (void)b;

    REQUIRE(counter == 0);
    event(0, 0);
    REQUIRE(counter == 11);

    // Clear event
    event.clear();

    counter = 0;
    event(0, 0);
    REQUIRE(counter == 0);
}
