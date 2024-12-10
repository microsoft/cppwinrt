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

        cancel.callback([] { REQUIRE(false); });

        co_return;
    }

    IAsyncAction cancel_before_callback(handle const& begin, handle const& end, handle const& callback)
    {
        co_await resume_on_signal(begin.get());
        auto cancel = co_await get_cancellation_token();
        REQUIRE(!signaled(callback));

        cancel.callback([&] { SetEvent(callback.get()); });

        REQUIRE(signaled(callback));
        SetEvent(end.get());
    }

    IAsyncAction cancel_after_callback(handle const& end, handle const& callback)
    {
        auto cancel = co_await get_cancellation_token();
        REQUIRE(!signaled(callback));

        cancel.callback([&] { SetEvent(callback.get()); });

        REQUIRE(!signaled(callback));
        co_await resume_on_signal(end.get());
    }

    // Other projections report cancellation via the Completed handler and Status,
    // rather than via ErrorCode and GetResults. Verify we interop cancellation properly.
    template <typename T, typename Async> struct foreign_canceled_async : implements<T, Async, IAsyncInfo>
    {
        template <typename Handler> void Completed(Handler&& complete)
        {
            complete(*this, AsyncStatus::Canceled);
        }

        auto Completed() const noexcept
        {
            return nullptr;
        }

        uint32_t Id() const noexcept
        {
            return 1;
        }

        AsyncStatus Status() const noexcept
        {
            return AsyncStatus::Canceled;
        }

        hresult ErrorCode() const noexcept
        {
            return impl::error_illegal_method_call;
        }

        decltype(std::declval<Async>().GetResults()) GetResults() const
        {
            throw_hresult(ErrorCode());
        }

        void Cancel() const noexcept
        {}

        void Close() const noexcept
        {}
    };

    struct foreign_canceled_action : foreign_canceled_async<foreign_canceled_action, IAsyncAction>
    {};

    template <typename TResult>
    struct foreign_canceled_operation
        : foreign_canceled_async<foreign_canceled_operation<TResult>, IAsyncOperation<TResult>>
    {};
} // namespace

TEST_CASE("async_cancel_no_async")
{
    auto a = no_async();
    REQUIRE(a.Status() == AsyncStatus::Completed);
    a.Cancel();
    REQUIRE(a.Status() == AsyncStatus::Completed);
}

#if defined(__clang__) && defined(_MSC_VER)
// FIXME: Test is known to segfault when built with Clang.
TEST_CASE("async_cancel_before_callback", "[.clang-crash]")
#else
TEST_CASE("async_cancel_before_callback")
#endif
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

#if defined(__clang__) && defined(_MSC_VER)
// FIXME: Test is known to randomly crash when built with Clang.
TEST_CASE("async_cancel_after_callback", "[.clang-crash]")
#else
TEST_CASE("async_cancel_after_callback")
#endif
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

#if defined(__clang__) && defined(_MSC_VER)
// FIXME: Test is known to segfault when built with Clang.
TEST_CASE("async_cancel_use_status", "[.clang-crash]")
#else
TEST_CASE("async_cancel_use_status")
#endif
{
    // Validate that co_await preserves cancellation.
    handle complete{ CreateEvent(nullptr, true, false, nullptr) };
    [](void* complete) -> fire_and_forget
    {
        REQUIRE_THROWS_AS(co_await make<foreign_canceled_action>(), hresult_canceled);
        REQUIRE_THROWS_AS(co_await make<foreign_canceled_operation<int32_t>>(), hresult_canceled);

        REQUIRE_THROWS_AS(co_await when_any(make<foreign_canceled_action>(), make<foreign_canceled_action>()), hresult_canceled);
        REQUIRE_THROWS_AS(co_await when_any(make<foreign_canceled_operation<int>>(), make<foreign_canceled_operation<int>>()),
                          hresult_canceled);

        REQUIRE_THROWS_AS(co_await when_all(make<foreign_canceled_action>(), make<foreign_canceled_action>()), hresult_canceled);
        REQUIRE_THROWS_AS(co_await when_all(make<foreign_canceled_operation<int>>(), make<foreign_canceled_operation<int>>()),
                          hresult_canceled);

        SetEvent(complete);
    }(complete.get());
    WaitForSingleObject(complete.get(), INFINITE);

    // Validate that get() preserves cancellation.
    REQUIRE_THROWS_AS(make<foreign_canceled_action>().get(), hresult_canceled);
    REQUIRE_THROWS_AS(make<foreign_canceled_operation<int>>().get(), hresult_canceled);

    REQUIRE_THROWS_AS(when_any(make<foreign_canceled_action>(), make<foreign_canceled_action>()).get(), hresult_canceled);
    REQUIRE_THROWS_AS(when_any(make<foreign_canceled_operation<int>>(), make<foreign_canceled_operation<int>>()).get(),
                      hresult_canceled);

    REQUIRE_THROWS_AS(when_all(make<foreign_canceled_action>(), make<foreign_canceled_action>()).get(), hresult_canceled);
    REQUIRE_THROWS_AS(when_all(make<foreign_canceled_operation<int>>(), make<foreign_canceled_operation<int>>()).get(),
                      hresult_canceled);
}
