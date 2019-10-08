#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace test_component;

namespace
{
    //
    // Checks that deferrable events work.
    //

    // This structure lets us coordinate multiple coroutines
    // so the fragments run in a specific order. We start in state 0.
    struct sequence
    {
        Class c;

        void go_to_state(int n)
        {
            slim_lock_guard guard(m_lock);
            m_state = n;
            m_cv.notify_all();
        }

        void wait_for_state(int n)
        {
            slim_lock_guard guard(m_lock);
            m_cv.wait(m_lock, [&] { return n == m_state; });
        }

        slim_condition_variable m_cv;
        slim_mutex m_lock;
        int m_state = 0;

        // This event handler does the work without a deferral.
        // This exercises the short-circuit logic in deferrable_event_args.
        auto NoDeferralHandler()
        {
            return [=](Class const& sender, DeferrableEventArgs const& args)
            {
                REQUIRE(sender == c);
                args.IncrementCounter();
            };
        }

        // This event handler takes a deferral but completes the work synchronously.
        // The deferral was unnecessary. This exercises the short-circuit logic in
        // deferrable_event_args.
        auto PointlessDeferralHandler()
        {
            return [=](Class const& sender, DeferrableEventArgs const& args)
            {
                REQUIRE(sender == c);
                auto deferral = args.GetDeferral();
                args.IncrementCounter();
                deferral.Complete();
            };
        }

        auto TakeDeferralHandler(int startState, int finishState)
        {
            return [=](Class sender, DeferrableEventArgs args) -> fire_and_forget
            {
                REQUIRE(sender == c);
                auto deferral = args.GetDeferral();
                co_await resume_background();
                wait_for_state(startState);
                args.IncrementCounter();
                deferral.Complete();
                go_to_state(finishState);
            };
        }
    };

    IAsyncAction TestNoDeferral()
    {
        sequence seq;
        seq.c.DeferrableEvent(seq.NoDeferralHandler());
        auto counter = co_await seq.c.RaiseDeferrableEventAsync();
        REQUIRE(counter == 1);
    }

    IAsyncAction TestPointlessDeferral()
    {
        sequence seq;
        seq.c.DeferrableEvent(seq.PointlessDeferralHandler());
        auto counter = co_await seq.c.RaiseDeferrableEventAsync();
        REQUIRE(counter == 1);
    }

    IAsyncAction TestTakenDeferral()
    {
        sequence seq;
        seq.c.DeferrableEvent(seq.TakeDeferralHandler(1, 2));
        auto operation = seq.c.RaiseDeferrableEventAsync();
        seq.go_to_state(1); // tell handler to do work and complete the deferral
        auto counter = co_await operation;
        REQUIRE(counter == 1);
        seq.wait_for_state(2); // make sure handler is finished
    }

    IAsyncAction TestTwoDeferrals()
    {
        sequence seq;
        seq.c.DeferrableEvent(seq.TakeDeferralHandler(1, 2));
        seq.c.DeferrableEvent(seq.TakeDeferralHandler(2, 3));
        auto operation = seq.c.RaiseDeferrableEventAsync();
        seq.go_to_state(1); // tell first handler to do work and complete the deferral
        // when first handler completes, it will go to state 2, which tells second handler to do work and complete its deferral.
        auto counter = co_await operation;
        REQUIRE(counter == 2);
        seq.wait_for_state(3); // make sure second handler is finished
    }
}

TEST_CASE("event_deferral")
{
    TestNoDeferral().get();
    TestPointlessDeferral().get();
    TestTakenDeferral().get();
    TestTwoDeferrals().get();
}


