#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct notification
    {
        uint32_t suspend{};
        uint32_t resume{};
    };

    std::map<void const*, notification> watcher;
    slim_mutex lock;
    handle start_racing{ CreateEventW(nullptr, true, false, nullptr) };

    struct free_awaitable
    {
    };
    bool await_ready(free_awaitable)
    {
        return true;
    }
    void await_suspend(free_awaitable, std::experimental::coroutine_handle<>)
    {
    }
    void await_resume(free_awaitable)
    {

    }

    struct member_awaitable
    {
        bool await_ready()
        {
            return true;
        }
        void await_suspend(std::experimental::coroutine_handle<>)
        {
        }
        void await_resume()
        {

        }
    };

    struct free_operator_awaitable
    {
    };
    auto operator co_await(free_operator_awaitable)
    {
        struct awaitable
        {
            bool await_ready()
            {
                return true;
            }
            void await_suspend(std::experimental::coroutine_handle<>)
            {
            }
            void await_resume()
            {
            }
        };
        return awaitable{};
    }

    struct member_operator_awaitable
    {
        auto operator co_await()
        {
            struct awaitable
            {
                bool await_ready()
                {
                    return true;
                }
                void await_suspend(std::experimental::coroutine_handle<>)
                {
                }
                void await_resume()
                {
                }
            };
            return awaitable{};
        }
    };

    IAsyncAction AsyncAction()
    {
        co_return;
    }
    IAsyncActionWithProgress<int> AsyncActionWithProgress()
    {
        co_return;
    }
    IAsyncOperation<int> AsyncOperation()
    {
        co_return 0;
    }
    IAsyncOperationWithProgress<int, int> AsyncOperationWithProgress()
    {
        co_return 0;
    }

    IAsyncAction Async()
    {
        co_await resume_on_signal(start_racing.get());
        co_await resume_background();
        co_await resume_background();
        co_await free_awaitable{};
        co_await member_awaitable{};
        co_await free_operator_awaitable{};
        co_await member_operator_awaitable{};
        co_await AsyncAction();
        co_await AsyncActionWithProgress();
        co_await AsyncOperation();
        co_await AsyncOperationWithProgress();
    }

    constexpr size_t test_coroutines = 10;
    constexpr size_t test_suspension_points = 11;
}

TEST_CASE("notify_awaiter")
{
    // Everything works fine when nobody is watching.

    REQUIRE(!winrt_suspend_handler);
    REQUIRE(!winrt_resume_handler);
    SetEvent(start_racing.get());
    Async().get();
    ResetEvent(start_racing.get());

    // Hook up some watchers.

    winrt_suspend_handler = [](void const* token) noexcept
    {
        slim_lock_guard guard(lock);
        watcher[token].suspend += 1;
    };

    winrt_resume_handler = [](void const* token) noexcept
    {
        slim_lock_guard guard(lock);
        watcher[token].resume += 1;
    };

    // Prepare a few coroutines.

    std::vector<IAsyncAction> concurrency;
    REQUIRE(watcher.empty());

    for (size_t i = 0; i != test_coroutines; ++i)
    {
        concurrency.push_back(Async());
    }

    // Give coroutines a moment to get to the racing line.

    Sleep(500);

    // Each coroutine should have suspended once.

    REQUIRE(watcher.size() == test_coroutines);

    for (auto&& [_, tally] : watcher)
    {
        REQUIRE(tally.suspend == 1);
        REQUIRE(tally.resume == 0);
    }

    // And the race is on!

    SetEvent(start_racing.get());

    for (auto&& async : concurrency)
    {
        async.get();
    }

    // Each suspension point should have been recorded.

    REQUIRE(watcher.size() == test_coroutines * test_suspension_points);

    for (auto&& [_, tally] : watcher)
    {
        // And should be be perfectly balanced.
        REQUIRE(tally.suspend == 1);
        REQUIRE(tally.resume == 1);
    }

    // Remove watchers.

    winrt_suspend_handler = nullptr;
    winrt_resume_handler = nullptr;
}
