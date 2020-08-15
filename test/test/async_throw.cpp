#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace std::chrono_literals;

namespace
{
    //
    // Checks that exceptions are correctly captured and propagated.
    //

    IAsyncAction Action()
    {
        co_await 10ms;
        throw hresult_invalid_argument(L"Async");
    }

    IAsyncActionWithProgress<int> ActionWithProgress()
    {
        co_await 10ms;
        throw hresult_invalid_argument(L"Async");
    }

    IAsyncOperation<int> Operation()
    {
        co_await 10ms;
        throw hresult_invalid_argument(L"Async");
        co_return 1;
    }

    IAsyncOperationWithProgress<int, int> OperationWithProgress()
    {
        co_await 10ms;
        throw hresult_invalid_argument(L"Async");
        co_return 1;
    }

    template <typename F>
    void Check(F make)
    {
        try
        {
            make().get();
            REQUIRE(false);
        }
        catch (hresult_invalid_argument const& e)
        {
            REQUIRE(e.message() == L"Async");
        }

        handle completed{ CreateEvent(nullptr, true, false, nullptr) };
        auto async = make();

        async.Completed([&](auto&& sender, AsyncStatus status)
            {
                REQUIRE(async == sender);
                REQUIRE(status == AsyncStatus::Error);
                SetEvent(completed.get());
            });

        REQUIRE(WaitForSingleObject(completed.get(), 1000) == WAIT_OBJECT_0);
        REQUIRE(async.Status() == AsyncStatus::Error);

        hresult_error e(async.ErrorCode(), take_ownership_from_abi);
        REQUIRE(e.message() == L"Async");

        try
        {
            async.GetResults();
            REQUIRE(false);
        }
        catch (hresult_invalid_argument const& e)
        {
            REQUIRE(e.message() == L"Async");
        }
    }

#pragma warning(push)
#pragma warning(4611:disable) // interaction between setjmp and C++ object destruction is non-portable
    IAsyncAction TestNoexceptAction()
    {
        static jmp_buf dont_terminate;

        // Install a to_hresult hook to prevent us from reaching abort().
        // setjmp/longjmp is horrible and bypasses destructors,
        // but it's the only way we can wrest control back from C++/WinRT
        // before it calls abort().
        auto previous_handler = std::exchange(winrt_to_hresult_handler, [](void*) noexcept -> int32_t
        {
            longjmp(dont_terminate, 1);
            // unreachable
        });

        if (!setjmp(dont_terminate))
        {
            auto NoexceptAction = []() -> IAsyncAction
            {
                auto policy = co_await get_coroutine_policy();
                policy.terminate_on_unhandled_exception();

                throw hresult_invalid_argument(L"Fatal");
            };

            co_await NoexceptAction();
            REQUIRE(false);
        }

        winrt_to_hresult_handler = previous_handler;
    }
#pragma warning(pop)

    IAsyncAction TestNoexceptCancel()
    {
        auto NoexceptCancel = []() -> IAsyncAction
        {
            auto policy = co_await get_coroutine_policy();
            policy.terminate_on_unhandled_exception();

            while (true)
            {
                co_await resume_after(10ms);
            }            
        };

        auto action = NoexceptCancel();
        action.Cancel(); // should not terminate
        try
        {
            co_await action;
        }
        catch (hresult_canceled const&)
        {
        }
    }
}

TEST_CASE("async_throw")
{
    Check(Action);
    Check(ActionWithProgress);
    Check(Operation);
    Check(OperationWithProgress);
    TestNoexceptAction().get();
    TestNoexceptCancel().get();
}
