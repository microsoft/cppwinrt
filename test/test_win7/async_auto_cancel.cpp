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
    // Checks that the coroutine is automatically canceled when reaching a suspension point.
    //

    IAsyncAction Action(HANDLE event)
    {
        co_await resume_on_signal(event);
        co_await suspend_never();
        REQUIRE(false);
    }

    IAsyncActionWithProgress<int> ActionWithProgress(HANDLE event)
    {
        co_await resume_on_signal(event);
        co_await suspend_never();
        REQUIRE(false);
    }

    IAsyncOperation<int> Operation(HANDLE event)
    {
        co_await resume_on_signal(event);
        co_await suspend_never();
        REQUIRE(false);
        co_return 1;
    }

    IAsyncOperationWithProgress<int, int> OperationWithProgress(HANDLE event)
    {
        co_await resume_on_signal(event);
        co_await suspend_never();
        REQUIRE(false);
        co_return 1;
    }

    template <typename F>
    void Check(F make)
    {
        handle start{ CreateEvent(nullptr, true, false, nullptr) };
        handle completed{ CreateEvent(nullptr, true, false, nullptr) };
        auto async = make(start.get());
        REQUIRE(async.Status() == AsyncStatus::Started);

        async.Completed([&](auto&& sender, AsyncStatus status)
            {
                REQUIRE(async == sender);
                REQUIRE(status == AsyncStatus::Canceled);
                SetEvent(completed.get());
            });

        async.Cancel();
        SetEvent(start.get());
        REQUIRE(WaitForSingleObject(completed.get(), 1000) == WAIT_OBJECT_0);

        REQUIRE(async.Status() == AsyncStatus::Canceled);
        REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));
        REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    }
}

#if defined(__clang__) && defined(_MSC_VER)
// FIXME: Test is known to segfault when built with Clang.
TEST_CASE("async_auto_cancel", "[.clang-crash]")
#else
TEST_CASE("async_auto_cancel")
#endif
{
    Check(Action);
    Check(ActionWithProgress);
    Check(Operation);
    Check(OperationWithProgress);
}
