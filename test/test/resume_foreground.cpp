#include "pch.h"

using namespace winrt;

// Define our own custom dispatcher that we can force it to behave in certain ways.
// winrt::resume_foreground supports any dispatcher that has a dispatcher_traits.

namespace test
{
    enum class TestDispatcherPriority
    {
        Normal = 0,
        Weird = 1,
    };

    using TestDispatcherHandler = winrt::delegate<>;

    enum class TestDispatcherMode
    {
        Dispatch,
        RaceDispatch,
        Orphan,
        Fail,
    };

    struct TestDispatcher
    {
        TestDispatcher() = default;
        TestDispatcher(TestDispatcher const&) = delete;

        TestDispatcherMode mode = TestDispatcherMode::Dispatch;
        TestDispatcherPriority expected_priority = TestDispatcherPriority::Normal;

        void TryEnqueue(TestDispatcherPriority priority, TestDispatcherHandler const& handler) const
        {
            REQUIRE(priority == expected_priority);

            if (mode == TestDispatcherMode::Fail)
            {
                throw winrt::hresult_not_implemented();
            }

            if (mode == TestDispatcherMode::RaceDispatch)
            {
                handler();
                return;
            }

            std::ignore = [](auto mode, auto handler) -> winrt::fire_and_forget {
                co_await winrt::resume_background();
                if (mode == TestDispatcherMode::Dispatch)
                {
                    handler();
                }
            }(mode, handler);
        }
    };
}

namespace winrt
{
    template <>
    struct dispatcher_traits<test::TestDispatcher>
    {
        using Priority = test::TestDispatcherPriority;
        using Handler = test::TestDispatcherHandler;
        using Scheduler = decltype([](auto const& d, auto const& p, auto const& h) { d.TryEnqueue(p, h); });
    };
}

TEST_CASE("resume_foreground")
{
    []() -> winrt::Windows::Foundation::IAsyncAction {
        test::TestDispatcher dispatcher;

        // Normal case: Resumes on new thread.
        dispatcher.mode = test::TestDispatcherMode::Dispatch;
        co_await winrt::resume_foreground(dispatcher);

        // Race case: Resumes before TryEnqueue returns.
        dispatcher.mode = test::TestDispatcherMode::RaceDispatch;
        co_await winrt::resume_foreground(dispatcher);

        // Orphan case: Never resumes, detected when handler is destructed without ever being invoked.
        dispatcher.mode = test::TestDispatcherMode::Orphan;
        bool seen = false;
        try
        {
            co_await winrt::resume_foreground(dispatcher);
        }
        catch (winrt::hresult_error const& e)
        {
            seen = e.code() == HRESULT_FROM_WIN32(ERROR_NO_TASK_QUEUE);
        }
        REQUIRE(seen);

        // Fail case: Can't even schedule the resumption.
        dispatcher.mode = test::TestDispatcherMode::Fail;
        seen = false;
        try
        {
            co_await winrt::resume_foreground(dispatcher);
        }
        catch (winrt::hresult_not_implemented const&)
        {
            seen = true;
        }
        REQUIRE(seen);

        // Custom priority.
        dispatcher.mode = test::TestDispatcherMode::Dispatch;
        dispatcher.expected_priority = test::TestDispatcherPriority::Weird;
        co_await winrt::resume_foreground(dispatcher, test::TestDispatcherPriority::Weird);
    }().get();
}