// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.Threading.3.h"
#include "Windows.System.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Threading {

template <typename L> TimerDestroyedHandler::TimerDestroyedHandler(L lambda) :
    TimerDestroyedHandler(impl::make_delegate<impl_TimerDestroyedHandler<L>, TimerDestroyedHandler>(std::forward<L>(lambda)))
{}

template <typename F> TimerDestroyedHandler::TimerDestroyedHandler(F * function) :
    TimerDestroyedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> TimerDestroyedHandler::TimerDestroyedHandler(O * object, M method) :
    TimerDestroyedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void TimerDestroyedHandler::operator()(const Windows::System::Threading::ThreadPoolTimer & timer) const
{
    check_hresult((*this)->abi_Invoke(get(timer)));
}

template <typename L> TimerElapsedHandler::TimerElapsedHandler(L lambda) :
    TimerElapsedHandler(impl::make_delegate<impl_TimerElapsedHandler<L>, TimerElapsedHandler>(std::forward<L>(lambda)))
{}

template <typename F> TimerElapsedHandler::TimerElapsedHandler(F * function) :
    TimerElapsedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> TimerElapsedHandler::TimerElapsedHandler(O * object, M method) :
    TimerElapsedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void TimerElapsedHandler::operator()(const Windows::System::Threading::ThreadPoolTimer & timer) const
{
    check_hresult((*this)->abi_Invoke(get(timer)));
}

template <typename L> WorkItemHandler::WorkItemHandler(L lambda) :
    WorkItemHandler(impl::make_delegate<impl_WorkItemHandler<L>, WorkItemHandler>(std::forward<L>(lambda)))
{}

template <typename F> WorkItemHandler::WorkItemHandler(F * function) :
    WorkItemHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> WorkItemHandler::WorkItemHandler(O * object, M method) :
    WorkItemHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void WorkItemHandler::operator()(const Windows::Foundation::IAsyncAction & operation) const
{
    check_hresult((*this)->abi_Invoke(get(operation)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::System::Threading::IThreadPoolStatics> : produce_base<D, Windows::System::Threading::IThreadPoolStatics>
{
    HRESULT __stdcall abi_RunAsync(abi_arg_in<Windows::System::Threading::WorkItemHandler> handler, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RunAsync(*reinterpret_cast<const Windows::System::Threading::WorkItemHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RunWithPriorityAsync(abi_arg_in<Windows::System::Threading::WorkItemHandler> handler, Windows::System::Threading::WorkItemPriority priority, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RunAsync(*reinterpret_cast<const Windows::System::Threading::WorkItemHandler *>(&handler), priority));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RunWithPriorityAndOptionsAsync(abi_arg_in<Windows::System::Threading::WorkItemHandler> handler, Windows::System::Threading::WorkItemPriority priority, Windows::System::Threading::WorkItemOptions options, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RunAsync(*reinterpret_cast<const Windows::System::Threading::WorkItemHandler *>(&handler), priority, options));
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
    HRESULT __stdcall get_Period(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Period());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delay(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Cancel() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_CreatePeriodicTimer(abi_arg_in<Windows::System::Threading::TimerElapsedHandler> handler, abi_arg_in<Windows::Foundation::TimeSpan> period, abi_arg_out<Windows::System::Threading::IThreadPoolTimer> timer) noexcept override
    {
        try
        {
            *timer = detach(this->shim().CreatePeriodicTimer(*reinterpret_cast<const Windows::System::Threading::TimerElapsedHandler *>(&handler), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&period)));
            return S_OK;
        }
        catch (...)
        {
            *timer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTimer(abi_arg_in<Windows::System::Threading::TimerElapsedHandler> handler, abi_arg_in<Windows::Foundation::TimeSpan> delay, abi_arg_out<Windows::System::Threading::IThreadPoolTimer> timer) noexcept override
    {
        try
        {
            *timer = detach(this->shim().CreateTimer(*reinterpret_cast<const Windows::System::Threading::TimerElapsedHandler *>(&handler), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&delay)));
            return S_OK;
        }
        catch (...)
        {
            *timer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePeriodicTimerWithCompletion(abi_arg_in<Windows::System::Threading::TimerElapsedHandler> handler, abi_arg_in<Windows::Foundation::TimeSpan> period, abi_arg_in<Windows::System::Threading::TimerDestroyedHandler> destroyed, abi_arg_out<Windows::System::Threading::IThreadPoolTimer> timer) noexcept override
    {
        try
        {
            *timer = detach(this->shim().CreatePeriodicTimer(*reinterpret_cast<const Windows::System::Threading::TimerElapsedHandler *>(&handler), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&period), *reinterpret_cast<const Windows::System::Threading::TimerDestroyedHandler *>(&destroyed)));
            return S_OK;
        }
        catch (...)
        {
            *timer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTimerWithCompletion(abi_arg_in<Windows::System::Threading::TimerElapsedHandler> handler, abi_arg_in<Windows::Foundation::TimeSpan> delay, abi_arg_in<Windows::System::Threading::TimerDestroyedHandler> destroyed, abi_arg_out<Windows::System::Threading::IThreadPoolTimer> timer) noexcept override
    {
        try
        {
            *timer = detach(this->shim().CreateTimer(*reinterpret_cast<const Windows::System::Threading::TimerElapsedHandler *>(&handler), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&delay), *reinterpret_cast<const Windows::System::Threading::TimerDestroyedHandler *>(&destroyed)));
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

namespace Windows::System::Threading {

template <typename D> Windows::Foundation::IAsyncAction impl_IThreadPoolStatics<D>::RunAsync(const Windows::System::Threading::WorkItemHandler & handler) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IThreadPoolStatics &>(static_cast<const D &>(*this))->abi_RunAsync(get(handler), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IThreadPoolStatics<D>::RunAsync(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IThreadPoolStatics &>(static_cast<const D &>(*this))->abi_RunWithPriorityAsync(get(handler), priority, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IThreadPoolStatics<D>::RunAsync(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority, Windows::System::Threading::WorkItemOptions options) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IThreadPoolStatics &>(static_cast<const D &>(*this))->abi_RunWithPriorityAndOptionsAsync(get(handler), priority, options, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::TimeSpan impl_IThreadPoolTimer<D>::Period() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IThreadPoolTimer &>(static_cast<const D &>(*this))->get_Period(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IThreadPoolTimer<D>::Delay() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IThreadPoolTimer &>(static_cast<const D &>(*this))->get_Delay(put(value)));
    return value;
}

template <typename D> void impl_IThreadPoolTimer<D>::Cancel() const
{
    check_hresult(static_cast<const IThreadPoolTimer &>(static_cast<const D &>(*this))->abi_Cancel());
}

template <typename D> Windows::System::Threading::ThreadPoolTimer impl_IThreadPoolTimerStatics<D>::CreatePeriodicTimer(const Windows::System::Threading::TimerElapsedHandler & handler, const Windows::Foundation::TimeSpan & period) const
{
    Windows::System::Threading::ThreadPoolTimer timer { nullptr };
    check_hresult(static_cast<const IThreadPoolTimerStatics &>(static_cast<const D &>(*this))->abi_CreatePeriodicTimer(get(handler), get(period), put(timer)));
    return timer;
}

template <typename D> Windows::System::Threading::ThreadPoolTimer impl_IThreadPoolTimerStatics<D>::CreateTimer(const Windows::System::Threading::TimerElapsedHandler & handler, const Windows::Foundation::TimeSpan & delay) const
{
    Windows::System::Threading::ThreadPoolTimer timer { nullptr };
    check_hresult(static_cast<const IThreadPoolTimerStatics &>(static_cast<const D &>(*this))->abi_CreateTimer(get(handler), get(delay), put(timer)));
    return timer;
}

template <typename D> Windows::System::Threading::ThreadPoolTimer impl_IThreadPoolTimerStatics<D>::CreatePeriodicTimer(const Windows::System::Threading::TimerElapsedHandler & handler, const Windows::Foundation::TimeSpan & period, const Windows::System::Threading::TimerDestroyedHandler & destroyed) const
{
    Windows::System::Threading::ThreadPoolTimer timer { nullptr };
    check_hresult(static_cast<const IThreadPoolTimerStatics &>(static_cast<const D &>(*this))->abi_CreatePeriodicTimerWithCompletion(get(handler), get(period), get(destroyed), put(timer)));
    return timer;
}

template <typename D> Windows::System::Threading::ThreadPoolTimer impl_IThreadPoolTimerStatics<D>::CreateTimer(const Windows::System::Threading::TimerElapsedHandler & handler, const Windows::Foundation::TimeSpan & delay, const Windows::System::Threading::TimerDestroyedHandler & destroyed) const
{
    Windows::System::Threading::ThreadPoolTimer timer { nullptr };
    check_hresult(static_cast<const IThreadPoolTimerStatics &>(static_cast<const D &>(*this))->abi_CreateTimerWithCompletion(get(handler), get(delay), get(destroyed), put(timer)));
    return timer;
}

inline Windows::Foundation::IAsyncAction ThreadPool::RunAsync(const Windows::System::Threading::WorkItemHandler & handler)
{
    return get_activation_factory<ThreadPool, IThreadPoolStatics>().RunAsync(handler);
}

inline Windows::Foundation::IAsyncAction ThreadPool::RunAsync(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority)
{
    return get_activation_factory<ThreadPool, IThreadPoolStatics>().RunAsync(handler, priority);
}

inline Windows::Foundation::IAsyncAction ThreadPool::RunAsync(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority, Windows::System::Threading::WorkItemOptions options)
{
    return get_activation_factory<ThreadPool, IThreadPoolStatics>().RunAsync(handler, priority, options);
}

inline Windows::System::Threading::ThreadPoolTimer ThreadPoolTimer::CreatePeriodicTimer(const Windows::System::Threading::TimerElapsedHandler & handler, const Windows::Foundation::TimeSpan & period)
{
    return get_activation_factory<ThreadPoolTimer, IThreadPoolTimerStatics>().CreatePeriodicTimer(handler, period);
}

inline Windows::System::Threading::ThreadPoolTimer ThreadPoolTimer::CreateTimer(const Windows::System::Threading::TimerElapsedHandler & handler, const Windows::Foundation::TimeSpan & delay)
{
    return get_activation_factory<ThreadPoolTimer, IThreadPoolTimerStatics>().CreateTimer(handler, delay);
}

inline Windows::System::Threading::ThreadPoolTimer ThreadPoolTimer::CreatePeriodicTimer(const Windows::System::Threading::TimerElapsedHandler & handler, const Windows::Foundation::TimeSpan & period, const Windows::System::Threading::TimerDestroyedHandler & destroyed)
{
    return get_activation_factory<ThreadPoolTimer, IThreadPoolTimerStatics>().CreatePeriodicTimer(handler, period, destroyed);
}

inline Windows::System::Threading::ThreadPoolTimer ThreadPoolTimer::CreateTimer(const Windows::System::Threading::TimerElapsedHandler & handler, const Windows::Foundation::TimeSpan & delay, const Windows::System::Threading::TimerDestroyedHandler & destroyed)
{
    return get_activation_factory<ThreadPoolTimer, IThreadPoolTimerStatics>().CreateTimer(handler, delay, destroyed);
}

}

}
