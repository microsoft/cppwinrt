#include "pch.h"

using namespace std::literals;
using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    IAsyncAction Action(TimeSpan delay, AsyncStatus result)
    {
        co_await resume_after(delay);

        if (result == AsyncStatus::Error)
        {
            throw hresult_invalid_argument();
        }

        if (result == AsyncStatus::Canceled)
        {
            throw hresult_canceled();
        }
    }

    IAsyncActionWithProgress<int> ActionWithProgress(TimeSpan delay, AsyncStatus result)
    {
        co_await resume_after(delay);

        if (result == AsyncStatus::Error)
        {
            throw hresult_invalid_argument();
        }

        if (result == AsyncStatus::Canceled)
        {
            throw hresult_canceled();
        }
    }

    IAsyncOperation<int> Operation(TimeSpan delay, AsyncStatus result)
    {
        co_await resume_after(delay);

        if (result == AsyncStatus::Error)
        {
            throw hresult_invalid_argument();
        }

        if (result == AsyncStatus::Canceled)
        {
            throw hresult_canceled();
        }

        co_return 1;
    }

    IAsyncOperationWithProgress<int, int> OperationWithProgress(TimeSpan delay, AsyncStatus result)
    {
        co_await resume_after(delay);

        if (result == AsyncStatus::Error)
        {
            throw hresult_invalid_argument();
        }

        if (result == AsyncStatus::Canceled)
        {
            throw hresult_canceled();
        }

        co_return 1;
    }

    template <typename T>
    void check(T const& no_suspend_ok, T const& no_suspend_fail, T const& delay_ok, T const& delay_fail, T const& no_suspend_cancel, T const& delay_cancel, T const& long_delay)
    {
        REQUIRE(no_suspend_ok.wait_for(0s) == AsyncStatus::Completed);
        no_suspend_ok.get();
        REQUIRE_THROWS_AS(no_suspend_ok.wait_for(0s), hresult_illegal_delegate_assignment);

        REQUIRE(no_suspend_fail.wait_for(0s) == AsyncStatus::Error);
        REQUIRE_THROWS_AS(no_suspend_fail.get(), hresult_invalid_argument);

        REQUIRE(delay_ok.wait_for(1s) == AsyncStatus::Completed);
        delay_ok.get();

        REQUIRE(delay_fail.wait_for(1s) == AsyncStatus::Error);
        REQUIRE_THROWS_AS(delay_fail.get(), hresult_invalid_argument);

        REQUIRE(no_suspend_cancel.wait_for(0s) == AsyncStatus::Canceled);
        REQUIRE_THROWS_AS(no_suspend_cancel.get(), hresult_canceled);

        REQUIRE(delay_cancel.wait_for(1s) == AsyncStatus::Canceled);
        REQUIRE_THROWS_AS(delay_cancel.get(), hresult_canceled);

        REQUIRE(long_delay.wait_for(100ms) == AsyncStatus::Started);
    }
}

TEST_CASE("async_wait_for")
{
    check(
        Action(0s, AsyncStatus::Completed),
        Action(0s, AsyncStatus::Error),
        Action(100ms, AsyncStatus::Completed),
        Action(100ms, AsyncStatus::Error),
        Action(0s, AsyncStatus::Canceled),
        Action(100ms, AsyncStatus::Canceled),
        Action(1h, AsyncStatus::Completed));

    check(
        ActionWithProgress(0s, AsyncStatus::Completed),
        ActionWithProgress(0s, AsyncStatus::Error),
        ActionWithProgress(100ms, AsyncStatus::Completed),
        ActionWithProgress(100ms, AsyncStatus::Error),
        ActionWithProgress(0s, AsyncStatus::Canceled),
        ActionWithProgress(100ms, AsyncStatus::Canceled),
        ActionWithProgress(1h, AsyncStatus::Completed));

    check(
        Operation(0s, AsyncStatus::Completed),
        Operation(0s, AsyncStatus::Error),
        Operation(100ms, AsyncStatus::Completed),
        Operation(100ms, AsyncStatus::Error),
        Operation(0s, AsyncStatus::Canceled),
        Operation(100ms, AsyncStatus::Canceled),
        Operation(1h, AsyncStatus::Completed));

    check(
        OperationWithProgress(0s, AsyncStatus::Completed),
        OperationWithProgress(0s, AsyncStatus::Error),
        OperationWithProgress(100ms, AsyncStatus::Completed),
        OperationWithProgress(100ms, AsyncStatus::Error),
        OperationWithProgress(0s, AsyncStatus::Canceled),
        OperationWithProgress(100ms, AsyncStatus::Canceled),
        OperationWithProgress(1h, AsyncStatus::Completed));
}
