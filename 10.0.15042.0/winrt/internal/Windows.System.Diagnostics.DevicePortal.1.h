// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.System.Diagnostics.DevicePortal.0.h"
#include "Windows.ApplicationModel.AppService.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Diagnostics::DevicePortal {

struct __declspec(uuid("0f447f51-1198-4da1-8d54-bdef393e09b6")) __declspec(novtable) IDevicePortalConnection : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_Closed(Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Closed(event_token token) = 0;
    virtual HRESULT __stdcall add_RequestReceived(Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RequestReceived(event_token token) = 0;
};

struct __declspec(uuid("fcf70e38-7032-428c-9f50-945c15a9f0cb")) __declspec(novtable) IDevicePortalConnectionClosedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Reason(winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason * value) = 0;
};

struct __declspec(uuid("64dae045-6fda-4459-9ebd-ecce22e38559")) __declspec(novtable) IDevicePortalConnectionRequestReceivedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RequestMessage(Windows::Web::Http::IHttpRequestMessage ** value) = 0;
    virtual HRESULT __stdcall get_ResponseMessage(Windows::Web::Http::IHttpResponseMessage ** value) = 0;
};

struct __declspec(uuid("4bbe31e7-e9b9-4645-8fed-a53eea0edbd6")) __declspec(novtable) IDevicePortalConnectionStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetForAppServiceConnection(Windows::ApplicationModel::AppService::IAppServiceConnection * appServiceConnection, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection> { using default_interface = Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection; };
template <> struct traits<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> { using default_interface = Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs; };
template <> struct traits<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> { using default_interface = Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs; };

}

namespace Windows::System::Diagnostics::DevicePortal {

template <typename D>
struct WINRT_EBO impl_IDevicePortalConnection
{
    event_token Closed(const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> & handler) const;
    using Closed_revoker = event_revoker<IDevicePortalConnection>;
    Closed_revoker Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> & handler) const;
    void Closed(event_token token) const;
    event_token RequestReceived(const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> & handler) const;
    using RequestReceived_revoker = event_revoker<IDevicePortalConnection>;
    RequestReceived_revoker RequestReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> & handler) const;
    void RequestReceived(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePortalConnectionClosedEventArgs
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason Reason() const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePortalConnectionRequestReceivedEventArgs
{
    Windows::Web::Http::HttpRequestMessage RequestMessage() const;
    Windows::Web::Http::HttpResponseMessage ResponseMessage() const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePortalConnectionStatics
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnection GetForAppServiceConnection(const Windows::ApplicationModel::AppService::AppServiceConnection & appServiceConnection) const;
};

}

namespace impl {

template <> struct traits<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>
{
    using abi = ABI::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection;
    template <typename D> using consume = Windows::System::Diagnostics::DevicePortal::impl_IDevicePortalConnection<D>;
};

template <> struct traits<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>
{
    using abi = ABI::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs;
    template <typename D> using consume = Windows::System::Diagnostics::DevicePortal::impl_IDevicePortalConnectionClosedEventArgs<D>;
};

template <> struct traits<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>
{
    using abi = ABI::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs;
    template <typename D> using consume = Windows::System::Diagnostics::DevicePortal::impl_IDevicePortalConnectionRequestReceivedEventArgs<D>;
};

template <> struct traits<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>
{
    using abi = ABI::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics;
    template <typename D> using consume = Windows::System::Diagnostics::DevicePortal::impl_IDevicePortalConnectionStatics<D>;
};

template <> struct traits<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>
{
    using abi = ABI::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection"; }
};

template <> struct traits<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>
{
    using abi = ABI::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionClosedEventArgs"; }
};

template <> struct traits<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>
{
    using abi = ABI::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionRequestReceivedEventArgs"; }
};

}

}
