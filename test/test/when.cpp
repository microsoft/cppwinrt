#include "pch.h"
#include <pplawait.h>

using namespace concurrency;
using namespace winrt;
using namespace Windows::Foundation;

struct CommaStruct : std::suspend_never
{
    // If the comma operator is invoked, we will get a build failure.
    CommaStruct operator,(CommaStruct) = delete;

    // Awaiting the object just returns itself.
    auto await_resume() const { return *this; }
};

task<void> ppl(bool& done)
{
    co_await resume_background();
    done = true;
}

IAsyncAction async(bool& done)
{
    co_await resume_background();
    done = true;
}

IAsyncOperation<int> when_signaled(int value, handle const& event)
{
    co_await resume_on_signal(event.get());
    co_return value;
}

IAsyncAction done()
{
    co_return;
}

TEST_CASE("when")
{
    {
        bool ppl_done = false;
        bool async_done = false;

        // Ensures that different async types can be aggregated.
        when_all(ppl(ppl_done), async(async_done)).get();

        REQUIRE(ppl_done);
        REQUIRE(async_done);
    }
    {
        // Works with IAsyncAction (with no return value).
        IAsyncAction result = when_any(done(), done());
        result.get();
    }

    // Verify edge case of empty parameter list.
    when_all().get();

    // Verify edge case of overloaded comma operator (shame on you).
    when_all(CommaStruct{}, CommaStruct{}).get();
    {
        handle first_event{ check_pointer(CreateEventW(nullptr, true, false, nullptr)) };
        handle second_event{ check_pointer(CreateEventW(nullptr, true, false, nullptr)) };

        IAsyncOperation<int> first = when_signaled(1, first_event);
        IAsyncOperation<int> second = when_signaled(2, second_event);

        IAsyncOperation<int> result = when_any(first, second);

        // Make sure we're still waiting.
        Sleep(100);
        REQUIRE(result.Status() == AsyncStatus::Started);
        REQUIRE(first.Status() == AsyncStatus::Started);
        REQUIRE(second.Status() == AsyncStatus::Started);

        // Allow only one of the async objects to complete.
        SetEvent(second_event.get());

        // This should now complete.
        REQUIRE(2 == result.get());

        REQUIRE(first.Status() == AsyncStatus::Started);
        REQUIRE(second.Status() == AsyncStatus::Completed);

        SetEvent(first_event.get());
    }
}
