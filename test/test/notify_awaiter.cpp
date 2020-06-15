#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
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

    struct no_copy_awaitable
    {
        no_copy_awaitable() = default;
        no_copy_awaitable(no_copy_awaitable const&) = delete;

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

    enum class notification
    {
        suspend,
        resume,
    };

    static std::vector<std::pair<void const*, notification>> watcher;
    static handle start_racing{ CreateEventW(nullptr, true, false, nullptr) };
    constexpr size_t test_suspension_points = 12;

    IAsyncAction Async()
    {
        co_await resume_on_signal(start_racing.get());
        co_await resume_background();
        co_await resume_background();
        co_await free_awaitable{};
        co_await member_awaitable{};
        co_await free_operator_awaitable{};
        co_await member_operator_awaitable{};
        co_await no_copy_awaitable{};
        co_await AsyncAction();
        co_await AsyncActionWithProgress();
        co_await AsyncOperation();
        co_await AsyncOperationWithProgress();
    }
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
        watcher.push_back({ token, notification::suspend });
    };

    winrt_resume_handler = [](void const* token) noexcept
    {
        auto last = watcher.back();
        REQUIRE(last.first == token);
        REQUIRE(last.second == notification::suspend);
        watcher.push_back({ token, notification::resume });
    };

    // Prepare a coroutine.
    REQUIRE(watcher.empty());
    auto async = Async();

    // Give coroutine a moment to get to the starting line.
    Sleep(1000);

    // Coroutine should have suspended once.
    REQUIRE(watcher.size() == 1);
    REQUIRE(watcher.back().second == notification::suspend);

    // And the race is on!
    SetEvent(start_racing.get());
    async.get();

    // Each suspension point should have been recorded plus one for each final_suspend.
    REQUIRE(watcher.size() == 2 * test_suspension_points + 5);

    // Remove watchers.

    winrt_suspend_handler = nullptr;
    winrt_resume_handler = nullptr;
}
