// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.Threading.3.h"
#include "internal/Windows.System.Threading.Core.3.h"
#include "Windows.System.Threading.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Threading::Core {

template <typename L> SignalHandler::SignalHandler(L lambda) :
    SignalHandler(impl::make_delegate<impl_SignalHandler<L>, SignalHandler>(std::forward<L>(lambda)))
{}

template <typename F> SignalHandler::SignalHandler(F * function) :
    SignalHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> SignalHandler::SignalHandler(O * object, M method) :
    SignalHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void SignalHandler::operator()(const Windows::System::Threading::Core::SignalNotifier & signalNotifier, bool timedOut) const
{
    check_hresult((*this)->abi_Invoke(get(signalNotifier), timedOut));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::System::Threading::Core::IPreallocatedWorkItem> : produce_base<D, Windows::System::Threading::Core::IPreallocatedWorkItem>
{
    HRESULT __stdcall abi_RunAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RunAsync());
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
struct produce<D, Windows::System::Threading::Core::IPreallocatedWorkItemFactory> : produce_base<D, Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
{
    HRESULT __stdcall abi_CreateWorkItem(abi_arg_in<Windows::System::Threading::WorkItemHandler> handler, abi_arg_out<Windows::System::Threading::Core::IPreallocatedWorkItem> workItem) noexcept override
    {
        try
        {
            *workItem = detach(this->shim().CreateWorkItem(*reinterpret_cast<const Windows::System::Threading::WorkItemHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *workItem = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWorkItemWithPriority(abi_arg_in<Windows::System::Threading::WorkItemHandler> handler, Windows::System::Threading::WorkItemPriority priority, abi_arg_out<Windows::System::Threading::Core::IPreallocatedWorkItem> WorkItem) noexcept override
    {
        try
        {
            *WorkItem = detach(this->shim().CreateWorkItemWithPriority(*reinterpret_cast<const Windows::System::Threading::WorkItemHandler *>(&handler), priority));
            return S_OK;
        }
        catch (...)
        {
            *WorkItem = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWorkItemWithPriorityAndOptions(abi_arg_in<Windows::System::Threading::WorkItemHandler> handler, Windows::System::Threading::WorkItemPriority priority, Windows::System::Threading::WorkItemOptions options, abi_arg_out<Windows::System::Threading::Core::IPreallocatedWorkItem> WorkItem) noexcept override
    {
        try
        {
            *WorkItem = detach(this->shim().CreateWorkItemWithPriorityAndOptions(*reinterpret_cast<const Windows::System::Threading::WorkItemHandler *>(&handler), priority, options));
            return S_OK;
        }
        catch (...)
        {
            *WorkItem = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Threading::Core::ISignalNotifier> : produce_base<D, Windows::System::Threading::Core::ISignalNotifier>
{
    HRESULT __stdcall abi_Enable() noexcept override
    {
        try
        {
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Terminate() noexcept override
    {
        try
        {
            this->shim().Terminate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Threading::Core::ISignalNotifierStatics> : produce_base<D, Windows::System::Threading::Core::ISignalNotifierStatics>
{
    HRESULT __stdcall abi_AttachToEvent(abi_arg_in<hstring> name, abi_arg_in<Windows::System::Threading::Core::SignalHandler> handler, abi_arg_out<Windows::System::Threading::Core::ISignalNotifier> signalNotifier) noexcept override
    {
        try
        {
            *signalNotifier = detach(this->shim().AttachToEvent(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::System::Threading::Core::SignalHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *signalNotifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AttachToEventWithTimeout(abi_arg_in<hstring> name, abi_arg_in<Windows::System::Threading::Core::SignalHandler> handler, abi_arg_in<Windows::Foundation::TimeSpan> timeout, abi_arg_out<Windows::System::Threading::Core::ISignalNotifier> signalNotifier) noexcept override
    {
        try
        {
            *signalNotifier = detach(this->shim().AttachToEvent(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::System::Threading::Core::SignalHandler *>(&handler), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&timeout)));
            return S_OK;
        }
        catch (...)
        {
            *signalNotifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AttachToSemaphore(abi_arg_in<hstring> name, abi_arg_in<Windows::System::Threading::Core::SignalHandler> handler, abi_arg_out<Windows::System::Threading::Core::ISignalNotifier> signalNotifier) noexcept override
    {
        try
        {
            *signalNotifier = detach(this->shim().AttachToSemaphore(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::System::Threading::Core::SignalHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *signalNotifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AttachToSemaphoreWithTimeout(abi_arg_in<hstring> name, abi_arg_in<Windows::System::Threading::Core::SignalHandler> handler, abi_arg_in<Windows::Foundation::TimeSpan> timeout, abi_arg_out<Windows::System::Threading::Core::ISignalNotifier> signalNotifier) noexcept override
    {
        try
        {
            *signalNotifier = detach(this->shim().AttachToSemaphore(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::System::Threading::Core::SignalHandler *>(&handler), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&timeout)));
            return S_OK;
        }
        catch (...)
        {
            *signalNotifier = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::Threading::Core {

template <typename D> Windows::System::Threading::Core::SignalNotifier impl_ISignalNotifierStatics<D>::AttachToEvent(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler) const
{
    Windows::System::Threading::Core::SignalNotifier signalNotifier { nullptr };
    check_hresult(static_cast<const ISignalNotifierStatics &>(static_cast<const D &>(*this))->abi_AttachToEvent(get(name), get(handler), put(signalNotifier)));
    return signalNotifier;
}

template <typename D> Windows::System::Threading::Core::SignalNotifier impl_ISignalNotifierStatics<D>::AttachToEvent(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler, const Windows::Foundation::TimeSpan & timeout) const
{
    Windows::System::Threading::Core::SignalNotifier signalNotifier { nullptr };
    check_hresult(static_cast<const ISignalNotifierStatics &>(static_cast<const D &>(*this))->abi_AttachToEventWithTimeout(get(name), get(handler), get(timeout), put(signalNotifier)));
    return signalNotifier;
}

template <typename D> Windows::System::Threading::Core::SignalNotifier impl_ISignalNotifierStatics<D>::AttachToSemaphore(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler) const
{
    Windows::System::Threading::Core::SignalNotifier signalNotifier { nullptr };
    check_hresult(static_cast<const ISignalNotifierStatics &>(static_cast<const D &>(*this))->abi_AttachToSemaphore(get(name), get(handler), put(signalNotifier)));
    return signalNotifier;
}

template <typename D> Windows::System::Threading::Core::SignalNotifier impl_ISignalNotifierStatics<D>::AttachToSemaphore(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler, const Windows::Foundation::TimeSpan & timeout) const
{
    Windows::System::Threading::Core::SignalNotifier signalNotifier { nullptr };
    check_hresult(static_cast<const ISignalNotifierStatics &>(static_cast<const D &>(*this))->abi_AttachToSemaphoreWithTimeout(get(name), get(handler), get(timeout), put(signalNotifier)));
    return signalNotifier;
}

template <typename D> Windows::System::Threading::Core::PreallocatedWorkItem impl_IPreallocatedWorkItemFactory<D>::CreateWorkItem(const Windows::System::Threading::WorkItemHandler & handler) const
{
    Windows::System::Threading::Core::PreallocatedWorkItem workItem { nullptr };
    check_hresult(static_cast<const IPreallocatedWorkItemFactory &>(static_cast<const D &>(*this))->abi_CreateWorkItem(get(handler), put(workItem)));
    return workItem;
}

template <typename D> Windows::System::Threading::Core::PreallocatedWorkItem impl_IPreallocatedWorkItemFactory<D>::CreateWorkItemWithPriority(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority) const
{
    Windows::System::Threading::Core::PreallocatedWorkItem WorkItem { nullptr };
    check_hresult(static_cast<const IPreallocatedWorkItemFactory &>(static_cast<const D &>(*this))->abi_CreateWorkItemWithPriority(get(handler), priority, put(WorkItem)));
    return WorkItem;
}

template <typename D> Windows::System::Threading::Core::PreallocatedWorkItem impl_IPreallocatedWorkItemFactory<D>::CreateWorkItemWithPriorityAndOptions(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority, Windows::System::Threading::WorkItemOptions options) const
{
    Windows::System::Threading::Core::PreallocatedWorkItem WorkItem { nullptr };
    check_hresult(static_cast<const IPreallocatedWorkItemFactory &>(static_cast<const D &>(*this))->abi_CreateWorkItemWithPriorityAndOptions(get(handler), priority, options, put(WorkItem)));
    return WorkItem;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPreallocatedWorkItem<D>::RunAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPreallocatedWorkItem &>(static_cast<const D &>(*this))->abi_RunAsync(put(operation)));
    return operation;
}

template <typename D> void impl_ISignalNotifier<D>::Enable() const
{
    check_hresult(static_cast<const ISignalNotifier &>(static_cast<const D &>(*this))->abi_Enable());
}

template <typename D> void impl_ISignalNotifier<D>::Terminate() const
{
    check_hresult(static_cast<const ISignalNotifier &>(static_cast<const D &>(*this))->abi_Terminate());
}

inline PreallocatedWorkItem::PreallocatedWorkItem(const Windows::System::Threading::WorkItemHandler & handler) :
    PreallocatedWorkItem(get_activation_factory<PreallocatedWorkItem, IPreallocatedWorkItemFactory>().CreateWorkItem(handler))
{}

inline PreallocatedWorkItem::PreallocatedWorkItem(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority) :
    PreallocatedWorkItem(get_activation_factory<PreallocatedWorkItem, IPreallocatedWorkItemFactory>().CreateWorkItemWithPriority(handler, priority))
{}

inline PreallocatedWorkItem::PreallocatedWorkItem(const Windows::System::Threading::WorkItemHandler & handler, Windows::System::Threading::WorkItemPriority priority, Windows::System::Threading::WorkItemOptions options) :
    PreallocatedWorkItem(get_activation_factory<PreallocatedWorkItem, IPreallocatedWorkItemFactory>().CreateWorkItemWithPriorityAndOptions(handler, priority, options))
{}

inline Windows::System::Threading::Core::SignalNotifier SignalNotifier::AttachToEvent(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler)
{
    return get_activation_factory<SignalNotifier, ISignalNotifierStatics>().AttachToEvent(name, handler);
}

inline Windows::System::Threading::Core::SignalNotifier SignalNotifier::AttachToEvent(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler, const Windows::Foundation::TimeSpan & timeout)
{
    return get_activation_factory<SignalNotifier, ISignalNotifierStatics>().AttachToEvent(name, handler, timeout);
}

inline Windows::System::Threading::Core::SignalNotifier SignalNotifier::AttachToSemaphore(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler)
{
    return get_activation_factory<SignalNotifier, ISignalNotifierStatics>().AttachToSemaphore(name, handler);
}

inline Windows::System::Threading::Core::SignalNotifier SignalNotifier::AttachToSemaphore(hstring_ref name, const Windows::System::Threading::Core::SignalHandler & handler, const Windows::Foundation::TimeSpan & timeout)
{
    return get_activation_factory<SignalNotifier, ISignalNotifierStatics>().AttachToSemaphore(name, handler, timeout);
}

}

}
