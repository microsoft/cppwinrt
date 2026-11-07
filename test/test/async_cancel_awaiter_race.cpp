#include "pch.h"
#include <atomic>
#include <thread>

using namespace winrt;
using namespace Windows::Foundation;

// The race windows are only a few nanoseconds wide, so the timer test replaces two kernel functions
// with versions that force the unlucky ordering. That relies on how the linker resolves the
// WINRT_IMPL_* imports, which differs per toolchain, so the test is skipped on configurations where
// that mechanism is not supported. Define CANCEL_RACE_NO_HOOK for any such configuration.
#if defined(_M_ARM64EC)
#define CANCEL_RACE_NO_HOOK 1
#endif

namespace
{
    std::atomic<bool> hooks_enabled{ false };
    std::atomic<bool> slow_copy{ false };
    std::atomic<int> use_after_destroy{ 0 };

    handle timer_fired{ CreateEvent(nullptr, false, false, nullptr) };
    handle cancel_started{ CreateEvent(nullptr, false, false, nullptr) };
    handle copy_started{ CreateEvent(nullptr, false, false, nullptr) };

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
            if (slow_copy)
            {
                SetEvent(copy_started.get());
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

#ifndef CANCEL_RACE_NO_HOOK
    using timer_callback_t = void(__stdcall*)(void*, void*, void*);

    struct delayed_timer_context
    {
        timer_callback_t callback;
        void* context;
    };

    // Runs when the timer fires: tells the test, then holds the coroutine back until Cancel() is
    // under way.
    void __stdcall delayed_timer_callback(void* instance, void* context, void* timer)
    {
        auto saved = *static_cast<delayed_timer_context*>(context);
        delete static_cast<delayed_timer_context*>(context);
        SetEvent(timer_fired.get());
        WaitForSingleObject(cancel_started.get(), 5000);
        saved.callback(instance, saved.context, timer);
    }

    template <typename T>
    T GetKernel32Function(char const* name)
    {
        return reinterpret_cast<T>(reinterpret_cast<void*>(GetProcAddress(GetModuleHandleW(L"kernel32.dll"), name)));
    }

    // Cancel() ends up here (via fire_immediately), after it has claimed the awaiter and before it
    // uses the timer. Stalling lets the coroutine finish and destroy the awaiter in between.
    std::int32_t HookedSetThreadpoolTimerEx(void* timer, void* due, std::uint32_t period, std::uint32_t window) noexcept
    {
        static auto const real = GetKernel32Function<std::int32_t(__stdcall*)(void*, void*, std::uint32_t, std::uint32_t)>("SetThreadpoolTimerEx");
        if (hooks_enabled)
        {
            SetEvent(cancel_started.get());
            Sleep(20);
        }
        return real(timer, due, period, window);
    }

    // Swaps the timer's callback for delayed_timer_callback, so the test can cancel at the exact
    // moment the timer has fired but the coroutine has not yet resumed.
    void* HookedCreateThreadpoolTimer(timer_callback_t callback, void* context, void* environment) noexcept
    {
        static auto const real = GetKernel32Function<void*(__stdcall*)(timer_callback_t, void*, void*)>("CreateThreadpoolTimer");
        if (hooks_enabled)
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

//
// Scenario: a background task is waiting on a short delay (a few milliseconds). The delay
// finishes and the task is told to wake up, but just before it actually gets going again,
// someone asks it to stop. The stop request and the waking task now use the same internal
// object at the same time. If the task finishes and cleans that object away while the stop
// request is still using it, the stop request reaches for something that no longer exists and
// the app crashes.
//
// The test makes this happen on purpose: it holds the waking task back, sends the stop request
// at that moment, and slows the stop request down so the task would finish first. The test
// passes if the program survives; before the fix it crashed.
//
TEST_CASE("async_cancel_awaiter_race")
{
    hooks_enabled = true;

    handle completed{ CreateEvent(nullptr, false, false, nullptr) };
    auto async = ShortDelayAction(completed.get());

    REQUIRE(WaitForSingleObject(timer_fired.get(), 10000) == WAIT_OBJECT_0);
    async.Cancel();
    REQUIRE(WaitForSingleObject(completed.get(), 10000) == WAIT_OBJECT_0);

    hooks_enabled = false;
}
#endif

//
// Scenario: a task is waiting for another operation to finish (in a way that lets it resume
// on whichever thread completes that operation) when someone asks it to stop. The stop side
// makes its own copy of the operation so it can cancel it. If the operation finishes at the
// same moment, the waiting task wakes up and throws away its own copy while the stop side
// is still making a copy from it.
//
// The test makes copying slow so the stop request is reliably still copying when the other
// operation finishes, and checks that the copy is never taken from something already thrown
// away. The test passes if that never happens.
//
TEST_CASE("async_cancel_await_adapter_race")
{
    use_after_destroy = 0;
    slow_copy = true;

    handle completed{ CreateEvent(nullptr, false, false, nullptr) };
    handle release{ CreateEvent(nullptr, true, false, nullptr) };
    auto inner = WaitForSignal(release.get());
    auto async = AgileAwaitAction(inner, completed.get());

    // Wait until the task is actually waiting before asking it to stop.
    while (!inner.Completed())
    {
        Sleep(1);
    }
    std::thread canceller{ [&] { async.Cancel(); } };

    // Finish the awaited operation while the stop request is still copying.
    WaitForSingleObject(copy_started.get(), INFINITE);
    SetEvent(release.get());

    WaitForSingleObject(completed.get(), INFINITE);
    canceller.join();

    slow_copy = false;
    REQUIRE(use_after_destroy == 0);
}
