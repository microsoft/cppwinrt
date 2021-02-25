#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct Sender : implements<Sender, IStringable>
    {
        hstring m_value{ L"Sender" };

        hstring ToString()
        {
            return m_value;
        }
    };
}

TEST_CASE("event")
{
    handle start{ CreateEventW(nullptr, true, false, nullptr) };
    handle completed{ CreateEventW(nullptr, true, false, nullptr) };

    auto sender = make<Sender>();
    async_event<TypedEventHandler<IStringable, int>> event;

    // No handlers and the resulting IAsyncAction completes synchronously (without blocking).
    REQUIRE(event(sender, 123).Status() == AsyncStatus::Completed);

    auto token = event.add([&](auto&& sender, auto&& args)
        {
            // Lengthy timeout allowing test thread to signal start.
            REQUIRE(WaitForSingleObject(start.get(), 1000) == WAIT_OBJECT_0);
            REQUIRE(sender.ToString() == L"Sender");
            REQUIRE(args == 123);
            REQUIRE(SetEvent(completed.get()));
        });

    auto result = event(sender, 123);

    // Short sleep allowing buggy code (if any) to race ahead.
    Sleep(100);

    // Result should not Completed yet as the start event is not yet set.
    REQUIRE(result.Status() == AsyncStatus::Started);

    // Race to completion.
    REQUIRE(SetEvent(start.get()));

    // Can now wait for result (and throw on failure).
    result.get();

    // Zero timeout checks that the event is already signaled.
    REQUIRE(WaitForSingleObject(completed.get(), 0) == WAIT_OBJECT_0);

    event.remove(token);

    // A single event is raised with a number of handlers.
    std::atomic<int> counter;

    for (int i = 0; i != 10; ++i)
    {
        event.add([=, &counter](auto&&...)
            {
                counter += i;
            });
    }

    event(sender, 0).get();
    REQUIRE(counter == 45);

    // A series of events are raised with a growing set of handlers.
    async_event<TypedEventHandler<IStringable, int>> stress;
    counter = 0;
    std::vector<IAsyncAction> results;

    for (int j = 0; j != 10; ++j)
    {
        for (int i = 0; i != 10; ++i)
        {
            stress.add([=, &counter](auto&&...)
                {
                    counter += i;
                });
        }

        // Don't wait for results before raising next event.
        results.push_back(stress(sender, 0));
    }

    // Finally wait for results and check.
    for (auto&& async : results)
    {
        async.get();
    }

    REQUIRE(counter == 2475);
}
