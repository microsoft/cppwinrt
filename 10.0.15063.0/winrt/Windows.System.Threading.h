// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Threading.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_System_Threading_IThreadPoolStatics<D>::RunAsync(Windows::System::Threading::WorkItemHandler const& handler) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolStatics)->RunAsync(get_abi(handler), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_System_Threading_IThreadPoolStatics<D>::RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolStatics)->RunWithPriorityAsync(get_abi(handler), get_abi(priority), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_System_Threading_IThreadPoolStatics<D>::RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolStatics)->RunWithPriorityAndOptionsAsync(get_abi(handler), get_abi(priority), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_System_Threading_IThreadPoolTimer<D>::Period() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolTimer)->get_Period(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_System_Threading_IThreadPoolTimer<D>::Delay() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolTimer)->get_Delay(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_Threading_IThreadPoolTimer<D>::Cancel() const
{
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolTimer)->Cancel());
}

template <typename D> Windows::System::Threading::ThreadPoolTimer consume_Windows_System_Threading_IThreadPoolTimerStatics<D>::CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period) const
{
    Windows::System::Threading::ThreadPoolTimer timer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolTimerStatics)->CreatePeriodicTimer(get_abi(handler), get_abi(period), put_abi(timer)));
    return timer;
}

template <typename D> Windows::System::Threading::ThreadPoolTimer consume_Windows_System_Threading_IThreadPoolTimerStatics<D>::CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay) const
{
    Windows::System::Threading::ThreadPoolTimer timer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolTimerStatics)->CreateTimer(get_abi(handler), get_abi(delay), put_abi(timer)));
    return timer;
}

template <typename D> Windows::System::Threading::ThreadPoolTimer consume_Windows_System_Threading_IThreadPoolTimerStatics<D>::CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period, Windows::System::Threading::TimerDestroyedHandler const& destroyed) const
{
    Windows::System::Threading::ThreadPoolTimer timer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolTimerStatics)->CreatePeriodicTimerWithCompletion(get_abi(handler), get_abi(period), get_abi(destroyed), put_abi(timer)));
    return timer;
}

template <typename D> Windows::System::Threading::ThreadPoolTimer consume_Windows_System_Threading_IThreadPoolTimerStatics<D>::CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay, Windows::System::Threading::TimerDestroyedHandler const& destroyed) const
{
    Windows::System::Threading::ThreadPoolTimer timer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::IThreadPoolTimerStatics)->CreateTimerWithCompletion(get_abi(handler), get_abi(delay), get_abi(destroyed), put_abi(timer)));
    return timer;
}

template <> struct delegate<Windows::System::Threading::TimerDestroyedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::System::Threading::TimerDestroyedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::System::Threading::TimerDestroyedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* timer) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::System::Threading::ThreadPoolTimer const*>(&timer));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::System::Threading::TimerElapsedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::System::Threading::TimerElapsedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::System::Threading::TimerElapsedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* timer) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::System::Threading::ThreadPoolTimer const*>(&timer));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::System::Threading::WorkItemHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::System::Threading::WorkItemHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::System::Threading::WorkItemHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* operation) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IAsyncAction const*>(&operation));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::System::Threading::IThreadPoolStatics> : produce_base<D, Windows::System::Threading::IThreadPoolStatics>
{
    HRESULT __stdcall RunAsync(::IUnknown* handler, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RunAsync(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RunWithPriorityAsync(::IUnknown* handler, abi_t<Windows::System::Threading::WorkItemPriority> priority, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RunAsync(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler), *reinterpret_cast<Windows::System::Threading::WorkItemPriority const*>(&priority)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RunWithPriorityAndOptionsAsync(::IUnknown* handler, abi_t<Windows::System::Threading::WorkItemPriority> priority, abi_t<Windows::System::Threading::WorkItemOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RunAsync(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler), *reinterpret_cast<Windows::System::Threading::WorkItemPriority const*>(&priority), *reinterpret_cast<Windows::System::Threading::WorkItemOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Threading::IThreadPoolTimer> : produce_base<D, Windows::System::Threading::IThreadPoolTimer>
{
    HRESULT __stdcall get_Period(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Period());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delay(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Delay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Cancel() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Threading::IThreadPoolTimerStatics> : produce_base<D, Windows::System::Threading::IThreadPoolTimerStatics>
{
    HRESULT __stdcall CreatePeriodicTimer(::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> period, ::IUnknown** timer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *timer = detach_abi(this->shim().CreatePeriodicTimer(*reinterpret_cast<Windows::System::Threading::TimerElapsedHandler const*>(&handler), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&period)));
            return S_OK;
        }
        catch (...)
        {
            *timer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTimer(::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> delay, ::IUnknown** timer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *timer = detach_abi(this->shim().CreateTimer(*reinterpret_cast<Windows::System::Threading::TimerElapsedHandler const*>(&handler), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&delay)));
            return S_OK;
        }
        catch (...)
        {
            *timer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePeriodicTimerWithCompletion(::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> period, ::IUnknown* destroyed, ::IUnknown** timer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *timer = detach_abi(this->shim().CreatePeriodicTimer(*reinterpret_cast<Windows::System::Threading::TimerElapsedHandler const*>(&handler), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&period), *reinterpret_cast<Windows::System::Threading::TimerDestroyedHandler const*>(&destroyed)));
            return S_OK;
        }
        catch (...)
        {
            *timer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTimerWithCompletion(::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> delay, ::IUnknown* destroyed, ::IUnknown** timer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *timer = detach_abi(this->shim().CreateTimer(*reinterpret_cast<Windows::System::Threading::TimerElapsedHandler const*>(&handler), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&delay), *reinterpret_cast<Windows::System::Threading::TimerDestroyedHandler const*>(&destroyed)));
            return S_OK;
        }
        catch (...)
        {
            *timer = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Threading {

inline Windows::Foundation::IAsyncAction ThreadPool::RunAsync(Windows::System::Threading::WorkItemHandler const& handler)
{
    return get_activation_factory<ThreadPool, Windows::System::Threading::IThreadPoolStatics>().RunAsync(handler);
}

inline Windows::Foundation::IAsyncAction ThreadPool::RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority)
{
    return get_activation_factory<ThreadPool, Windows::System::Threading::IThreadPoolStatics>().RunAsync(handler, priority);
}

inline Windows::Foundation::IAsyncAction ThreadPool::RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options)
{
    return get_activation_factory<ThreadPool, Windows::System::Threading::IThreadPoolStatics>().RunAsync(handler, priority, options);
}

inline Windows::System::Threading::ThreadPoolTimer ThreadPoolTimer::CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period)
{
    return get_activation_factory<ThreadPoolTimer, Windows::System::Threading::IThreadPoolTimerStatics>().CreatePeriodicTimer(handler, period);
}

inline Windows::System::Threading::ThreadPoolTimer ThreadPoolTimer::CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay)
{
    return get_activation_factory<ThreadPoolTimer, Windows::System::Threading::IThreadPoolTimerStatics>().CreateTimer(handler, delay);
}

inline Windows::System::Threading::ThreadPoolTimer ThreadPoolTimer::CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period, Windows::System::Threading::TimerDestroyedHandler const& destroyed)
{
    return get_activation_factory<ThreadPoolTimer, Windows::System::Threading::IThreadPoolTimerStatics>().CreatePeriodicTimer(handler, period, destroyed);
}

inline Windows::System::Threading::ThreadPoolTimer ThreadPoolTimer::CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay, Windows::System::Threading::TimerDestroyedHandler const& destroyed)
{
    return get_activation_factory<ThreadPoolTimer, Windows::System::Threading::IThreadPoolTimerStatics>().CreateTimer(handler, delay, destroyed);
}

template <typename L> TimerDestroyedHandler::TimerDestroyedHandler(L handler) :
    TimerDestroyedHandler(impl::make_delegate<TimerDestroyedHandler>(std::forward<L>(handler)))
{}

template <typename F> TimerDestroyedHandler::TimerDestroyedHandler(F* handler) :
    TimerDestroyedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> TimerDestroyedHandler::TimerDestroyedHandler(O* object, M method) :
    TimerDestroyedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void TimerDestroyedHandler::operator()(Windows::System::Threading::ThreadPoolTimer const& timer) const
{
    check_hresult((*(abi_t<TimerDestroyedHandler>**)this)->Invoke(get_abi(timer)));
}

template <typename L> TimerElapsedHandler::TimerElapsedHandler(L handler) :
    TimerElapsedHandler(impl::make_delegate<TimerElapsedHandler>(std::forward<L>(handler)))
{}

template <typename F> TimerElapsedHandler::TimerElapsedHandler(F* handler) :
    TimerElapsedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> TimerElapsedHandler::TimerElapsedHandler(O* object, M method) :
    TimerElapsedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void TimerElapsedHandler::operator()(Windows::System::Threading::ThreadPoolTimer const& timer) const
{
    check_hresult((*(abi_t<TimerElapsedHandler>**)this)->Invoke(get_abi(timer)));
}

template <typename L> WorkItemHandler::WorkItemHandler(L handler) :
    WorkItemHandler(impl::make_delegate<WorkItemHandler>(std::forward<L>(handler)))
{}

template <typename F> WorkItemHandler::WorkItemHandler(F* handler) :
    WorkItemHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> WorkItemHandler::WorkItemHandler(O* object, M method) :
    WorkItemHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void WorkItemHandler::operator()(Windows::Foundation::IAsyncAction const& operation) const
{
    check_hresult((*(abi_t<WorkItemHandler>**)this)->Invoke(get_abi(operation)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Threading::IThreadPoolStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::IThreadPoolStatics> {};

template<> struct hash<winrt::Windows::System::Threading::IThreadPoolTimer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::IThreadPoolTimer> {};

template<> struct hash<winrt::Windows::System::Threading::IThreadPoolTimerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::IThreadPoolTimerStatics> {};

template<> struct hash<winrt::Windows::System::Threading::ThreadPool> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::ThreadPool> {};

template<> struct hash<winrt::Windows::System::Threading::ThreadPoolTimer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::ThreadPoolTimer> {};

}

WINRT_WARNING_POP
