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

    // Never suspends.
    // Allows copying, but asserts if you try.
    struct suspend_never_but_assert_if_copied : suspend_never
    {
        suspend_never_but_assert_if_copied() = default;
        suspend_never_but_assert_if_copied(suspend_never_but_assert_if_copied const&)
        {
            REQUIRE(false);
        }
    };

    // The bad_awaiter asserts if it ever gets used.
    // Use it for ambiguous alternatives we don't want to pick.
    struct bad_awaiter : suspend_never
    {
        void await_resume() const noexcept
        {
            REQUIRE(false);
        }
    };

    // If the only awaitable is the member awaitable, then use it.
    struct member_awaitable : suspend_never_but_assert_if_copied
    {
    };

    // Should pick the free operator co_await over the member awaitable.
    struct free_operator_awaitable : bad_awaiter
    {
    };
    auto operator co_await(free_operator_awaitable)
    {
        return suspend_never_but_assert_if_copied{};
    }

    // Should pick the member operator co_await over the member awaitable.
    struct member_operator_awaitable : bad_awaiter
    {
        auto operator co_await()
        {
            return suspend_never_but_assert_if_copied{};
        }
    };

    // Verify that we can await non-copyable objects.
    struct no_copy_awaitable : suspend_never
    {
        no_copy_awaitable() = default;
        no_copy_awaitable(no_copy_awaitable const&) = delete;
    };

    // operator co_await takes precedence over member awaitable.
    struct ambiguous_awaitable1 : bad_awaiter
    {
        auto operator co_await()
        {
            return suspend_never_but_assert_if_copied{};
        }
    };

    // This awaitable supports both member co_await
    // and free co_await, and the free co_await is a
    // better match if invoked on an lvalue. We don't try
    // to support this case. We just declare it as ambiguous.
    struct ambiguous_awaitable2 : bad_awaiter
    {
        auto operator co_await() const
        {
            return bad_awaiter{};
        }
    };
    suspend_never_but_assert_if_copied operator co_await(ambiguous_awaitable2&)
    {
        return {};
    }

    // We invoke this on an lvalue, so the member co_await is unavailable.
    // Verify that the unavailable co_await is ignored.
    struct ambiguous_awaitable3 : suspend_never_but_assert_if_copied
    {
        auto operator co_await()&&
        {
            return bad_awaiter{};
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
    constexpr size_t test_suspension_points = 13;

    IAsyncAction Async()
    {
        co_await resume_on_signal(start_racing.get());
        co_await resume_background();
        co_await resume_background();
        co_await member_awaitable{};
        co_await free_operator_awaitable{};
        co_await member_operator_awaitable{};
        co_await no_copy_awaitable{};
        co_await ambiguous_awaitable1{};
        // co_await ambiguous_awaitable2{}; // does not compile
        ambiguous_awaitable3 awaitable3;
        co_await awaitable3;
        co_await AsyncAction();
        co_await AsyncActionWithProgress();
        co_await AsyncOperation();
        co_await AsyncOperationWithProgress();
    }
}

// GNUC does not support MSVC extension lambda call convention conversion
// https://devblogs.microsoft.com/oldnewthing/20150220-00/?p=44623
#if defined(__GNUC__)
#define LAMBDA_STDCALL __attribute__((stdcall))
#else
#define LAMBDA_STDCALL
#endif

TEST_CASE("notify_awaiter")
{
    // Everything works fine when nobody is watching.

    REQUIRE(!winrt_suspend_handler);
    REQUIRE(!winrt_resume_handler);
    SetEvent(start_racing.get());
    Async().get();
    ResetEvent(start_racing.get());

    // Hook up some watchers.

    winrt_suspend_handler = [](void const* token) LAMBDA_STDCALL noexcept
    {
        watcher.push_back({ token, notification::suspend });
    };

    winrt_resume_handler = [](void const* token) LAMBDA_STDCALL noexcept
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
