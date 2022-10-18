#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
#ifdef __cpp_lib_coroutine
    using std::suspend_never;
#else
    using std::experimental::suspend_never;
#endif

    //
    // Checks that the cancellation callback is invoked.
    //

    IAsyncAction Action(HANDLE event, bool& canceled)
    {
        // Put the cancellation token into a lambda just to make
        // sure it's possible.
        [cancel = co_await get_cancellation_token(), &canceled]
        {
            cancel.callback([&]
                {
                    REQUIRE(!canceled);
                    canceled = true;
                });
        }();

        co_await resume_on_signal(event);
        co_await suspend_never();
        REQUIRE(false);
    }

    IAsyncActionWithProgress<int> ActionWithProgress(HANDLE event, bool& canceled)
    {
        auto cancel = co_await get_cancellation_token();

        cancel.callback([&]
            {
                REQUIRE(!canceled);
                canceled = true;
            });

        co_await resume_on_signal(event);
        co_await suspend_never();
        REQUIRE(false);
    }

    IAsyncOperation<int> Operation(HANDLE event, bool& canceled)
    {
        auto cancel = co_await get_cancellation_token();

        cancel.callback([&]
            {
                REQUIRE(!canceled);
                canceled = true;
            });

        co_await resume_on_signal(event);
        co_await suspend_never();
        REQUIRE(false);
        co_return 1;
    }

    IAsyncOperationWithProgress<int, int> OperationWithProgress(HANDLE event, bool& canceled)
    {
        auto cancel = co_await get_cancellation_token();

        cancel.callback([&]
            {
                REQUIRE(!canceled);
                canceled = true;
            });

        co_await resume_on_signal(event);
        co_await suspend_never();
        REQUIRE(false);
        co_return 1;
    }

    template <typename F>
    void Check(F make)
    {
        handle event{ CreateEvent(nullptr, true, false, nullptr) };
        bool canceled = false;
        auto async = make(event.get(), canceled);
        async.Cancel();
        REQUIRE(canceled);
        SetEvent(event.get());
        REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    }
}

#if defined(__clang__)
// FIXME: Test is known to segfault when built with Clang.
TEST_CASE("async_cancel_callback", "[.clang-crash]")
#else
TEST_CASE("async_cancel_callback")
#endif
{
    Check(Action);
    Check(ActionWithProgress);
    Check(Operation);
    Check(OperationWithProgress);
}
