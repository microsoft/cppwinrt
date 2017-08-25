// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Threading.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Threading {

struct TimerDestroyedHandler : Windows::Foundation::IUnknown
{
    TimerDestroyedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> TimerDestroyedHandler(L lambda);
    template <typename F> TimerDestroyedHandler(F* function);
    template <typename O, typename M> TimerDestroyedHandler(O* object, M method);
    void operator()(Windows::System::Threading::ThreadPoolTimer const& timer) const;
};

struct TimerElapsedHandler : Windows::Foundation::IUnknown
{
    TimerElapsedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> TimerElapsedHandler(L lambda);
    template <typename F> TimerElapsedHandler(F* function);
    template <typename O, typename M> TimerElapsedHandler(O* object, M method);
    void operator()(Windows::System::Threading::ThreadPoolTimer const& timer) const;
};

struct WorkItemHandler : Windows::Foundation::IUnknown
{
    WorkItemHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WorkItemHandler(L lambda);
    template <typename F> WorkItemHandler(F* function);
    template <typename O, typename M> WorkItemHandler(O* object, M method);
    void operator()(Windows::Foundation::IAsyncAction const& operation) const;
};

struct ThreadPool
{
    ThreadPool() = delete;
    static Windows::Foundation::IAsyncAction RunAsync(Windows::System::Threading::WorkItemHandler const& handler);
    static Windows::Foundation::IAsyncAction RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority);
    static Windows::Foundation::IAsyncAction RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options);
};

struct WINRT_EBO ThreadPoolTimer :
    Windows::System::Threading::IThreadPoolTimer
{
    ThreadPoolTimer(std::nullptr_t) noexcept {}
    static Windows::System::Threading::ThreadPoolTimer CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period);
    static Windows::System::Threading::ThreadPoolTimer CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay);
    static Windows::System::Threading::ThreadPoolTimer CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period, Windows::System::Threading::TimerDestroyedHandler const& destroyed);
    static Windows::System::Threading::ThreadPoolTimer CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay, Windows::System::Threading::TimerDestroyedHandler const& destroyed);
};

}
