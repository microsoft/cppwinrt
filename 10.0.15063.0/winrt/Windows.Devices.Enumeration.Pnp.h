// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.Pnp.2.h"
#include "winrt/Windows.Devices.Enumeration.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectType consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>::Type() const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObject)->get_Type(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObject)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObject)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>::Update(Windows::Devices::Enumeration::Pnp::PnpObjectUpdate const& updateInfo) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObject)->Update(get_abi(updateInfo)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::hstring const& id, param::async_iterable<hstring> const& requestedProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->CreateFromIdAsync(get_abi(type), get_abi(id), get_abi(requestedProperties), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->FindAllAsync(get_abi(type), get_abi(requestedProperties), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->FindAllAsyncAqsFilter(get_abi(type), get_abi(requestedProperties), get_abi(aqsFilter), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectWatcher consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties) const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->CreateWatcher(get_abi(type), get_abi(requestedProperties), put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectWatcher consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter) const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->CreateWatcherAqsFilter(get_abi(type), get_abi(requestedProperties), get_abi(aqsFilter), put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectType consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate<D>::Type() const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate)->get_Type(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus status{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->get_Status(put_abi(status)));
    return status;
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->Stop());
}

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObject> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObject>
{
    HRESULT __stdcall get_Type(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Update(::IUnknown* updateInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate const*>(&updateInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>
{
    HRESULT __stdcall CreateFromIdAsync(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, HSTRING id, ::IUnknown* requestedProperties, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().CreateFromIdAsync(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, ::IUnknown* requestedProperties, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncAqsFilter(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, ::IUnknown* requestedProperties, HSTRING aqsFilter, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties), *reinterpret_cast<hstring const*>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcher(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, ::IUnknown* requestedProperties, ::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcherAqsFilter(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, ::IUnknown* requestedProperties, HSTRING aqsFilter, ::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties), *reinterpret_cast<hstring const*>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>
{
    HRESULT __stdcall get_Type(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>
{
    HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration::Pnp {

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> PnpObject::CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::hstring const& id, param::async_iterable<hstring> const& requestedProperties)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().CreateFromIdAsync(type, id, requestedProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> PnpObject::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().FindAllAsync(type, requestedProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> PnpObject::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().FindAllAsync(type, requestedProperties, aqsFilter);
}

inline Windows::Devices::Enumeration::Pnp::PnpObjectWatcher PnpObject::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().CreateWatcher(type, requestedProperties);
}

inline Windows::Devices::Enumeration::Pnp::PnpObjectWatcher PnpObject::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().CreateWatcher(type, requestedProperties, aqsFilter);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::IPnpObject> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::Pnp::IPnpObject> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::PnpObject> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::Pnp::PnpObject> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectCollection> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher> {};

}

WINRT_WARNING_POP
