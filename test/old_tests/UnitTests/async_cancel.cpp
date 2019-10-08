#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace std::chrono;

namespace
{
    bool signaled(handle const& event)
    {
        return WaitForSingleObject(event.get(), 0) == WAIT_OBJECT_0;
    }

    void wait(handle const& event)
    {
        WaitForSingleObject(event.get(), INFINITE);
    }

    IAsyncAction no_async()
    {
        auto cancel = co_await get_cancellation_token();

        cancel.callback([]
        {
            REQUIRE(false);
        });

        co_return;
    }

    IAsyncAction cancel_before_callback(handle const& begin, handle const& end, handle const& callback)
    {
        co_await resume_on_signal(begin.get());
        auto cancel = co_await get_cancellation_token();
        REQUIRE(!signaled(callback));

        cancel.callback([&]
        {
            SetEvent(callback.get());
        });

        REQUIRE(signaled(callback));
        SetEvent(end.get());
    }


    IAsyncAction cancel_after_callback(handle const& end, handle const& callback)
    {
        auto cancel = co_await get_cancellation_token();
        REQUIRE(!signaled(callback));

        cancel.callback([&]
        {
            SetEvent(callback.get());
        });

        REQUIRE(!signaled(callback));
        co_await resume_on_signal(end.get());
    }
}

TEST_CASE("async_cancel_no_async")
{
    auto a = no_async();
    REQUIRE(a.Status() == AsyncStatus::Completed);
    a.Cancel();
    REQUIRE(a.Status() == AsyncStatus::Completed);
}

TEST_CASE("async_cancel_before_callback")
{
    handle begin{ CreateEvent(nullptr, true, false, nullptr) };
    handle end{ CreateEvent(nullptr, true, false, nullptr) };
    handle callback{ CreateEvent(nullptr, true, false, nullptr) };

    auto async = cancel_before_callback(begin, end, callback);

    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE(!signaled(callback));
    async.Cancel();
    SetEvent(begin.get());
    wait(end);
    REQUIRE(signaled(callback));
    REQUIRE(async.Status() == AsyncStatus::Canceled);
}

TEST_CASE("async_cancel_after_callback")
{
    handle end{ CreateEvent(nullptr, true, false, nullptr) };
    handle callback{ CreateEvent(nullptr, true, false, nullptr) };

    auto async = cancel_after_callback(end, callback);

    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE(!signaled(callback));
    async.Cancel();
    SetEvent(end.get());
    wait(callback);
    REQUIRE(async.Status() == AsyncStatus::Canceled);
}