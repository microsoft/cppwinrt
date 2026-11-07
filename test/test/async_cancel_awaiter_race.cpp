#include "pch.h"
#include <atomic>
#include <chrono>
#include <thread>
#include <vector>

using namespace winrt;
using namespace Windows::Foundation;

// The race windows are only a few nanoseconds wide, so they are practically impossible to hit by
// chance. The delay tests therefore replace two kernel functions with versions that stall for 20 ms,
// which gives the other side of the race time to finish and destroy its awaiter while Cancel() is
// still in flight. Without that, the tests would pass even against the buggy code.
//
// The replacement relies on how the linker resolves the WINRT_IMPL_* imports, which differs per
// toolchain, so it is enabled everywhere except configurations where that mechanism is not
// supported. Define CANCEL_RACE_NO_HOOK for any such configuration.
#if defined(_M_ARM64EC)
#define CANCEL_RACE_NO_HOOK 1
#endif

namespace
{
    // Stalls SetThreadpoolTimerEx, the call made by the canceller (fire_immediately).
    std::atomic<bool> widen_cancel_window{ false };

    // True on a thread while it is inside Cancel(). SetThreadpoolTimerEx is also called from the
    // coroutine's own await_suspend when Cancel() arrives before the timer is registered; that call
    // is not the one under test and must not be stalled.
    thread_local bool in_cancel = false;

    // Holds the timer callback back after the timer has fired, so that the timer has already
    // fired, but the coroutine has not yet resumed, when Cancel() arrives.
    std::atomic<bool> delay_timer_callback{ false };

    // Creates one of the events used to line the two sides of the race up.
    HANDLE MakeEvent()
    {
        return CreateEvent(nullptr, false, false, nullptr);
    }

    // Signalled by the delayed timer callback at the moment the timer fires.
    HANDLE TimerFiredEvent()
    {
        static handle const event{ MakeEvent() };
        return event.get();
    }

    // Signalled when the canceller has entered the stalled SetThreadpoolTimerEx call.
    HANDLE CancelStartedEvent()
    {
        static handle const event{ MakeEvent() };
        return event.get();
    }

    // Makes SlowCopyAction copies slow so the canceller is still copying while the awaiter is destroyed.
    std::atomic<bool> slow_copy{ false };
    std::atomic<int> use_after_destroy{ 0 };

    IAsyncAction ShortDelayAction(HANDLE completed)
    {
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        try
        {
            co_await resume_after(std::chrono::milliseconds(5));
        }
        catch (hresult_canceled const&)
        {
        }
        SetEvent(completed);
    }

    IAsyncAction Done()
    {
        co_return;
    }

    IAsyncAction WaitForSignal(HANDLE signal)
    {
        co_await resume_on_signal(signal);
    }

    // Signalled when a slow copy has started, so the test can finish the awaited operation while
    // the copy is still in progress.
    HANDLE CopyStartedEvent()
    {
        static handle const event{ CreateEvent(nullptr, false, false, nullptr) };
        return event.get();
    }

    // Records when a copy is made from an object that has already been destroyed.
    struct SlowCopyAction : IAsyncAction
    {
        explicit SlowCopyAction(IAsyncAction const& action) : IAsyncAction(action)
        {
        }

        SlowCopyAction(SlowCopyAction&&) noexcept = default;

        SlowCopyAction(SlowCopyAction const& other) : IAsyncAction(CopyFrom(other))
        {
        }

        ~SlowCopyAction()
        {
            m_destroyed = true;
        }

    private:
        static IAsyncAction CopyFrom(SlowCopyAction const& other)
        {
            if (slow_copy.load())
            {
                SetEvent(CopyStartedEvent());
                Sleep(20);
            }

            if (other.m_destroyed)
            {
                ++use_after_destroy;
                return Done();
            }
            return other;
        }

        volatile bool m_destroyed{ false };
    };

    IAsyncAction AgileAwaitAction(IAsyncAction inner, HANDLE completed)
    {
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        try
        {
            co_await resume_agile(SlowCopyAction{ inner });
        }
        catch (hresult_canceled const&)
        {
        }
        SetEvent(completed);
    }

    void SpinFor(std::chrono::microseconds duration)
    {
        auto end = std::chrono::steady_clock::now() + duration;
        while (std::chrono::steady_clock::now() < end)
        {
        }
    }

#ifndef CANCEL_RACE_NO_HOOK
    using timer_callback_t = void(__stdcall*)(void*, void*, void*);

    struct delayed_timer_context
    {
        timer_callback_t callback;
        void* context;
    };

    void __stdcall delayed_timer_callback(void* instance, void* context, void* timer)
    {
        auto saved = *static_cast<delayed_timer_context*>(context);
        delete static_cast<delayed_timer_context*>(context);
        SetEvent(TimerFiredEvent());
        WaitForSingleObject(CancelStartedEvent(), 5000);
        saved.callback(instance, saved.context, timer);
    }

    template <typename T>
    T GetKernel32Function(char const* name)
    {
        return reinterpret_cast<T>(reinterpret_cast<void*>(GetProcAddress(GetModuleHandleW(L"kernel32.dll"), name)));
    }

    // Hook for SetThreadpoolTimerEx. The canceller calls this (via fire_immediately) after it has
    // claimed the awaiter, to make the timer fire right now. In real life the gap between claiming
    // the awaiter and making this call is a few nanoseconds, far too short to hit reliably. Stalling
    // here for 20 ms keeps Cancel() inside the awaiter long enough for the timer to fire and the
    // coroutine to finish and destroy the awaiter, which is exactly the interleaving that crashes.
    std::int32_t HookedSetThreadpoolTimerEx(void* timer, void* due, std::uint32_t period, std::uint32_t window) noexcept
    {
        static auto const real = GetKernel32Function<std::int32_t(__stdcall*)(void*, void*, std::uint32_t, std::uint32_t)>("SetThreadpoolTimerEx");
        if (widen_cancel_window.load() && in_cancel)
        {
            SetEvent(CancelStartedEvent());
            Sleep(20);
        }
        return real(timer, due, period, window);
    }

    // Hook for CreateThreadpoolTimer, used only by the "timer already fired" test. Replacing the
    // timer callback with delayed_timer_callback does two things: it signals the test the instant
    // the timer fires, so the test can call Cancel() at exactly that moment instead of guessing a
    // time, and it holds the coroutine's resumption back until the canceller is inside the stalled
    // SetThreadpoolTimerEx call, so that Cancel() is guaranteed to land after the timer fired but
    // before the coroutine resumes.
    void* HookedCreateThreadpoolTimer(timer_callback_t callback, void* context, void* environment) noexcept
    {
        static auto const real = GetKernel32Function<void*(__stdcall*)(timer_callback_t, void*, void*)>("CreateThreadpoolTimer");
        if (delay_timer_callback.load())
        {
            auto wrapper = new delayed_timer_context{ callback, context };
            auto timer = real(delayed_timer_callback, wrapper, environment);
            if (!timer)
            {
                delete wrapper;
            }
            return timer;
        }
        return real(callback, context, environment);
    }
#endif

    // Starts delayed tasks on `thread_count` threads and cancels each one.
    //
    // Normally the cancel time is not random: it is a deterministic spread of `steps` offsets
    // starting at `first_us` in `step_us` increments, and the loop is a retry, because the
    // coroutine's start-up time varies and an iteration where Cancel() arrives too early cannot
    // hit the race. The multipliers 7 and 13 are coprime with the step counts used, so each thread
    // visits every offset, and the threads start at different offsets so they don't all cancel at
    // the same moment.
    //
    // With `delay_callback` the cancel is instead issued the moment the timer fires (see
    // HookedCreateThreadpoolTimer), which needs no retry.
    void RunDelayRace([[maybe_unused]] bool delay_callback, int thread_count, int iterations, int first_us = 0, int step_us = 0, int steps = 1)
    {
#ifndef CANCEL_RACE_NO_HOOK
        widen_cancel_window = true;
        delay_timer_callback = delay_callback;
        ResetEvent(TimerFiredEvent());
        ResetEvent(CancelStartedEvent());
#endif

        std::vector<std::thread> threads;
        for (int t = 0; t < thread_count; ++t)
        {
            threads.emplace_back([=]
                {
                    init_apartment(apartment_type::multi_threaded);
                    handle completed{ CreateEvent(nullptr, false, false, nullptr) };

                    for (int i = 0; i < iterations; ++i)
                    {
                        auto async = ShortDelayAction(completed.get());
#ifndef CANCEL_RACE_NO_HOOK
                        if (delay_callback)
                        {
                            WaitForSingleObject(TimerFiredEvent(), INFINITE);
                        }
                        else
#endif
                        {
                            SpinFor(std::chrono::microseconds(first_us + ((i * 7 + t * 13) % steps) * step_us));
                        }
                        in_cancel = true;
                        async.Cancel();
                        in_cancel = false;
                        WaitForSingleObject(completed.get(), INFINITE);
                    }
                });
        }

        for (auto& thread : threads)
        {
            thread.join();
        }

#ifndef CANCEL_RACE_NO_HOOK
        widen_cancel_window = false;
        delay_timer_callback = false;
#endif
    }
}

#ifndef CANCEL_RACE_NO_HOOK
#if defined(_MSC_VER)
// WINRT_IMPL_* imports are weak aliases for the kernel32 exports, so defining the symbol here
// replaces it.
extern "C" std::int32_t __stdcall WINRT_IMPL_SetThreadpoolTimerEx(winrt::impl::ptp_timer timer, void* due, std::uint32_t period, std::uint32_t window) noexcept
{
    return HookedSetThreadpoolTimerEx(timer, due, period, window);
}

extern "C" winrt::impl::ptp_timer __stdcall WINRT_IMPL_CreateThreadpoolTimer(void(__stdcall* callback)(void*, void* context, void*), void* context, void* environment) noexcept
{
    return static_cast<winrt::impl::ptp_timer>(HookedCreateThreadpoolTimer(callback, context, environment));
}
#else
// With GCC the WINRT_IMPL_* declarations are asm labels bound directly to the kernel32 name, so
// define that name in the executable instead; the linker then prefers it over the import library.
#if defined(__i386__)
#define CANCEL_RACE_LABEL(name, bytes) __asm__("_" #name "@" #bytes)
#else
#define CANCEL_RACE_LABEL(name, bytes) __asm__(#name)
#endif

extern "C" std::int32_t __stdcall cancel_race_SetThreadpoolTimerEx(void* timer, void* due, std::uint32_t period, std::uint32_t window) noexcept CANCEL_RACE_LABEL(SetThreadpoolTimerEx, 16);
extern "C" void* __stdcall cancel_race_CreateThreadpoolTimer(void(__stdcall* callback)(void*, void*, void*), void* context, void* environment) noexcept CANCEL_RACE_LABEL(CreateThreadpoolTimer, 12);

extern "C" std::int32_t __stdcall cancel_race_SetThreadpoolTimerEx(void* timer, void* due, std::uint32_t period, std::uint32_t window) noexcept
{
    return HookedSetThreadpoolTimerEx(timer, due, period, window);
}

extern "C" void* __stdcall cancel_race_CreateThreadpoolTimer(void(__stdcall* callback)(void*, void*, void*), void* context, void* environment) noexcept
{
    return HookedCreateThreadpoolTimer(callback, context, environment);
}
#endif
#endif

//
// Scenario: a background task is waiting on a short delay (a few milliseconds) when
// someone else asks it to stop. If the stop request arrives at almost the same moment
// the delay finishes, the two sides can collide: the delay side finishes up and cleans
// itself away, while the stop side is still in the middle of using it. The stop side
// then reaches for something that has already been thrown away, and the app crashes.
//
// This test makes that collision happen on purpose. It starts many delayed tasks and
// asks each one to stop at slightly different moments around the time the delay ends,
// and it slows the stop side down a little so the collision is easy to hit. The test
// passes if the program survives; before the fix it crashed.
//
TEST_CASE("async_cancel_awaiter_race")
{
    // Retried on 4 threads: cancel at 0.5 ms to 4.4 ms in 0.1 ms steps, before the 5 ms delay ends.
    RunDelayRace(false, 4, 25, 500, 100, 40);
}

//
// Scenario: the same delayed task, but this time the stop request arrives just AFTER the
// delay has already finished and the task has been told to wake up, yet before it has
// actually got going again. The stop request is still accepted at that point, so the same
// collision is possible: the task wakes up and tidies itself away while the stop request is
// still using it.
//
// The test holds the wake-up back until the stop request is under way, and sends the stop
// request the instant the delay finishes, so the stop request always lands in that gap. It
// then slows the stop request down so that the task finishes first. This is deterministic,
// so a single attempt is enough. The test passes if the program survives.
//
TEST_CASE("async_cancel_awaiter_race_after_timer_fired")
{
    RunDelayRace(true, 1, 1);
}

//
// Scenario: a task is waiting for another operation to finish (in a way that lets it resume
// on whichever thread completes that operation) when someone asks it to stop. The stop side
// makes its own copy of the operation so it can cancel it. If the operation finishes at the
// same moment, the waiting task wakes up and throws away its own copy while the stop side
// is still making a copy from it.
//
// The test makes copying slow so the stop request is reliably still copying when the other
// operation finishes, and checks that the copy is never taken from something already thrown
// away. The timing has plenty of margin, so a single attempt is enough. The test passes if
// that never happens.
//
TEST_CASE("async_cancel_await_adapter_race")
{
    use_after_destroy = 0;
    slow_copy = true;

    handle completed{ CreateEvent(nullptr, false, false, nullptr) };
    handle release{ CreateEvent(nullptr, true, false, nullptr) };
    auto inner = WaitForSignal(release.get());
    auto async = AgileAwaitAction(inner, completed.get());

    // Wait until the task is actually waiting (it has registered for the operation's completion)
    // before asking it to stop.
    while (!inner.Completed())
    {
        Sleep(1);
    }
    std::thread canceller{ [&] { async.Cancel(); } };

    // Finish the awaited operation while the stop request is still copying.
    WaitForSingleObject(CopyStartedEvent(), INFINITE);
    SetEvent(release.get());

    WaitForSingleObject(completed.get(), INFINITE);
    canceller.join();

    slow_copy = false;
    REQUIRE(use_after_destroy == 0);
}
