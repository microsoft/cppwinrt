// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Threading.2.h"
#include "winrt/impl/Windows.System.Threading.Core.2.h"
#include "winrt/Windows.System.Threading.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_System_Threading_Core_IPreallocatedWorkItem<D>::RunAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::IPreallocatedWorkItem)->RunAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::Threading::Core::PreallocatedWorkItem consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>::CreateWorkItem(Windows::System::Threading::WorkItemHandler const& handler) const
{
    Windows::System::Threading::Core::PreallocatedWorkItem workItem{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::IPreallocatedWorkItemFactory)->CreateWorkItem(get_abi(handler), put_abi(workItem)));
    return workItem;
}

template <typename D> Windows::System::Threading::Core::PreallocatedWorkItem consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>::CreateWorkItemWithPriority(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) const
{
    Windows::System::Threading::Core::PreallocatedWorkItem WorkItem{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::IPreallocatedWorkItemFactory)->CreateWorkItemWithPriority(get_abi(handler), get_abi(priority), put_abi(WorkItem)));
    return WorkItem;
}

template <typename D> Windows::System::Threading::Core::PreallocatedWorkItem consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>::CreateWorkItemWithPriorityAndOptions(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) const
{
    Windows::System::Threading::Core::PreallocatedWorkItem WorkItem{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::IPreallocatedWorkItemFactory)->CreateWorkItemWithPriorityAndOptions(get_abi(handler), get_abi(priority), get_abi(options), put_abi(WorkItem)));
    return WorkItem;
}

template <typename D> void consume_Windows_System_Threading_Core_ISignalNotifier<D>::Enable() const
{
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::ISignalNotifier)->Enable());
}

template <typename D> void consume_Windows_System_Threading_Core_ISignalNotifier<D>::Terminate() const
{
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::ISignalNotifier)->Terminate());
}

template <typename D> Windows::System::Threading::Core::SignalNotifier consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>::AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler) const
{
    Windows::System::Threading::Core::SignalNotifier signalNotifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::ISignalNotifierStatics)->AttachToEvent(get_abi(name), get_abi(handler), put_abi(signalNotifier)));
    return signalNotifier;
}

template <typename D> Windows::System::Threading::Core::SignalNotifier consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>::AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout) const
{
    Windows::System::Threading::Core::SignalNotifier signalNotifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::ISignalNotifierStatics)->AttachToEventWithTimeout(get_abi(name), get_abi(handler), get_abi(timeout), put_abi(signalNotifier)));
    return signalNotifier;
}

template <typename D> Windows::System::Threading::Core::SignalNotifier consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>::AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler) const
{
    Windows::System::Threading::Core::SignalNotifier signalNotifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::ISignalNotifierStatics)->AttachToSemaphore(get_abi(name), get_abi(handler), put_abi(signalNotifier)));
    return signalNotifier;
}

template <typename D> Windows::System::Threading::Core::SignalNotifier consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>::AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout) const
{
    Windows::System::Threading::Core::SignalNotifier signalNotifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Threading::Core::ISignalNotifierStatics)->AttachToSemaphoreWithTimeout(get_abi(name), get_abi(handler), get_abi(timeout), put_abi(signalNotifier)));
    return signalNotifier;
}

template <> struct delegate<Windows::System::Threading::Core::SignalHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::System::Threading::Core::SignalHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::System::Threading::Core::SignalHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* signalNotifier, bool timedOut) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::System::Threading::Core::SignalNotifier const*>(&signalNotifier), timedOut);
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
struct produce<D, Windows::System::Threading::Core::IPreallocatedWorkItem> : produce_base<D, Windows::System::Threading::Core::IPreallocatedWorkItem>
{
    HRESULT __stdcall RunAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RunAsync());
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
    HRESULT __stdcall CreateWorkItem(::IUnknown* handler, ::IUnknown** workItem) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *workItem = detach_abi(this->shim().CreateWorkItem(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *workItem = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWorkItemWithPriority(::IUnknown* handler, abi_t<Windows::System::Threading::WorkItemPriority> priority, ::IUnknown** WorkItem) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *WorkItem = detach_abi(this->shim().CreateWorkItemWithPriority(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler), *reinterpret_cast<Windows::System::Threading::WorkItemPriority const*>(&priority)));
            return S_OK;
        }
        catch (...)
        {
            *WorkItem = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWorkItemWithPriorityAndOptions(::IUnknown* handler, abi_t<Windows::System::Threading::WorkItemPriority> priority, abi_t<Windows::System::Threading::WorkItemOptions> options, ::IUnknown** WorkItem) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *WorkItem = detach_abi(this->shim().CreateWorkItemWithPriorityAndOptions(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler), *reinterpret_cast<Windows::System::Threading::WorkItemPriority const*>(&priority), *reinterpret_cast<Windows::System::Threading::WorkItemOptions const*>(&options)));
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
    HRESULT __stdcall Enable() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Terminate() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall AttachToEvent(HSTRING name, ::IUnknown* handler, ::IUnknown** signalNotifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *signalNotifier = detach_abi(this->shim().AttachToEvent(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::System::Threading::Core::SignalHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *signalNotifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AttachToEventWithTimeout(HSTRING name, ::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> timeout, ::IUnknown** signalNotifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *signalNotifier = detach_abi(this->shim().AttachToEvent(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::System::Threading::Core::SignalHandler const*>(&handler), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout)));
            return S_OK;
        }
        catch (...)
        {
            *signalNotifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AttachToSemaphore(HSTRING name, ::IUnknown* handler, ::IUnknown** signalNotifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *signalNotifier = detach_abi(this->shim().AttachToSemaphore(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::System::Threading::Core::SignalHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *signalNotifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AttachToSemaphoreWithTimeout(HSTRING name, ::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> timeout, ::IUnknown** signalNotifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *signalNotifier = detach_abi(this->shim().AttachToSemaphore(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::System::Threading::Core::SignalHandler const*>(&handler), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout)));
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

WINRT_EXPORT namespace winrt::Windows::System::Threading::Core {

inline PreallocatedWorkItem::PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler) :
    PreallocatedWorkItem(get_activation_factory<PreallocatedWorkItem, Windows::System::Threading::Core::IPreallocatedWorkItemFactory>().CreateWorkItem(handler))
{}

inline PreallocatedWorkItem::PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) :
    PreallocatedWorkItem(get_activation_factory<PreallocatedWorkItem, Windows::System::Threading::Core::IPreallocatedWorkItemFactory>().CreateWorkItemWithPriority(handler, priority))
{}

inline PreallocatedWorkItem::PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) :
    PreallocatedWorkItem(get_activation_factory<PreallocatedWorkItem, Windows::System::Threading::Core::IPreallocatedWorkItemFactory>().CreateWorkItemWithPriorityAndOptions(handler, priority, options))
{}

inline Windows::System::Threading::Core::SignalNotifier SignalNotifier::AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler)
{
    return get_activation_factory<SignalNotifier, Windows::System::Threading::Core::ISignalNotifierStatics>().AttachToEvent(name, handler);
}

inline Windows::System::Threading::Core::SignalNotifier SignalNotifier::AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout)
{
    return get_activation_factory<SignalNotifier, Windows::System::Threading::Core::ISignalNotifierStatics>().AttachToEvent(name, handler, timeout);
}

inline Windows::System::Threading::Core::SignalNotifier SignalNotifier::AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler)
{
    return get_activation_factory<SignalNotifier, Windows::System::Threading::Core::ISignalNotifierStatics>().AttachToSemaphore(name, handler);
}

inline Windows::System::Threading::Core::SignalNotifier SignalNotifier::AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout)
{
    return get_activation_factory<SignalNotifier, Windows::System::Threading::Core::ISignalNotifierStatics>().AttachToSemaphore(name, handler, timeout);
}

template <typename L> SignalHandler::SignalHandler(L handler) :
    SignalHandler(impl::make_delegate<SignalHandler>(std::forward<L>(handler)))
{}

template <typename F> SignalHandler::SignalHandler(F* handler) :
    SignalHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> SignalHandler::SignalHandler(O* object, M method) :
    SignalHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void SignalHandler::operator()(Windows::System::Threading::Core::SignalNotifier const& signalNotifier, bool timedOut) const
{
    check_hresult((*(abi_t<SignalHandler>**)this)->Invoke(get_abi(signalNotifier), timedOut));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem> {};

template<> struct hash<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory> {};

template<> struct hash<winrt::Windows::System::Threading::Core::ISignalNotifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::Core::ISignalNotifier> {};

template<> struct hash<winrt::Windows::System::Threading::Core::ISignalNotifierStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::Core::ISignalNotifierStatics> {};

template<> struct hash<winrt::Windows::System::Threading::Core::PreallocatedWorkItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::Core::PreallocatedWorkItem> {};

template<> struct hash<winrt::Windows::System::Threading::Core::SignalNotifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Threading::Core::SignalNotifier> {};

}

WINRT_WARNING_POP
