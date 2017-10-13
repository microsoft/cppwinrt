// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.AppService.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.System.Diagnostics.DevicePortal.2.h"
#include "winrt/Windows.System.Diagnostics.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>(this, &abi_t<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>::remove_Closed, Closed(handler));
}

template <typename D> void consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection)->remove_Closed(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::RequestReceived(Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection)->add_RequestReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::RequestReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>(this, &abi_t<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>::remove_RequestReceived, RequestReceived(handler));
}

template <typename D> void consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::RequestReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection)->remove_RequestReceived(get_abi(token)));
}

template <typename D> Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionClosedEventArgs<D>::Reason() const noexcept
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason value{};
    check_terminate(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpRequestMessage consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionRequestReceivedEventArgs<D>::RequestMessage() const noexcept
{
    Windows::Web::Http::HttpRequestMessage value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs)->get_RequestMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionRequestReceivedEventArgs<D>::ResponseMessage() const noexcept
{
    Windows::Web::Http::HttpResponseMessage value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs)->get_ResponseMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::DevicePortal::DevicePortalConnection consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionStatics<D>::GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection) const
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics)->GetForAppServiceConnection(get_abi(appServiceConnection), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>
{
    HRESULT __stdcall add_Closed(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestReceived(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RequestReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reason());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>
{
    HRESULT __stdcall get_RequestMessage(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RequestMessage());
        return S_OK;
    }

    HRESULT __stdcall get_ResponseMessage(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ResponseMessage());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>
{
    HRESULT __stdcall GetForAppServiceConnection(::IUnknown* appServiceConnection, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForAppServiceConnection(*reinterpret_cast<Windows::ApplicationModel::AppService::AppServiceConnection const*>(&appServiceConnection)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::DevicePortal {

inline Windows::System::Diagnostics::DevicePortal::DevicePortalConnection DevicePortalConnection::GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection)
{
    return get_activation_factory<DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>().GetForAppServiceConnection(appServiceConnection);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> {};

template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs> {};

template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs> {};

template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics> {};

template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection> {};

template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> {};

template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> {};

}

WINRT_WARNING_POP
