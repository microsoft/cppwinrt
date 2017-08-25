// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService {

struct AppServiceConnection;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http {

struct HttpRequestMessage;
struct HttpResponseMessage;

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::DevicePortal {

enum class DevicePortalConnectionClosedReason
{
    Unknown = 0,
    ResourceLimitsExceeded = 1,
    ProtocolError = 2,
    NotAuthorized = 3,
    UserNotPresent = 4,
    ServiceTerminated = 5,
};

struct IDevicePortalConnection;
struct IDevicePortalConnectionClosedEventArgs;
struct IDevicePortalConnectionRequestReceivedEventArgs;
struct IDevicePortalConnectionStatics;
struct DevicePortalConnection;
struct DevicePortalConnectionClosedEventArgs;
struct DevicePortalConnectionRequestReceivedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason>{ using type = enum_category; };
template <> struct name<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>{ static constexpr auto & value{ L"Windows.System.Diagnostics.DevicePortal.IDevicePortalConnection" }; };
template <> struct name<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>{ static constexpr auto & value{ L"Windows.System.Diagnostics.DevicePortal.IDevicePortalConnectionClosedEventArgs" }; };
template <> struct name<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>{ static constexpr auto & value{ L"Windows.System.Diagnostics.DevicePortal.IDevicePortalConnectionRequestReceivedEventArgs" }; };
template <> struct name<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>{ static constexpr auto & value{ L"Windows.System.Diagnostics.DevicePortal.IDevicePortalConnectionStatics" }; };
template <> struct name<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>{ static constexpr auto & value{ L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection" }; };
template <> struct name<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>{ static constexpr auto & value{ L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionClosedEventArgs" }; };
template <> struct name<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>{ static constexpr auto & value{ L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionRequestReceivedEventArgs" }; };
template <> struct name<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason>{ static constexpr auto & value{ L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionClosedReason" }; };
template <> struct guid<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>{ static constexpr GUID value{ 0x0F447F51,0x1198,0x4DA1,{ 0x8D,0x54,0xBD,0xEF,0x39,0x3E,0x09,0xB6 } }; };
template <> struct guid<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>{ static constexpr GUID value{ 0xFCF70E38,0x7032,0x428C,{ 0x9F,0x50,0x94,0x5C,0x15,0xA9,0xF0,0xCB } }; };
template <> struct guid<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>{ static constexpr GUID value{ 0x64DAE045,0x6FDA,0x4459,{ 0x9E,0xBD,0xEC,0xCE,0x22,0xE3,0x85,0x59 } }; };
template <> struct guid<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>{ static constexpr GUID value{ 0x4BBE31E7,0xE9B9,0x4645,{ 0x8F,0xED,0xA5,0x3E,0xEA,0x0E,0xDB,0xD6 } }; };
template <> struct default_interface<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>{ using type = Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection; };
template <> struct default_interface<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>{ using type = Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs; };
template <> struct default_interface<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>{ using type = Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs; };

template <typename D>
struct consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection
{
    event_token Closed(Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> const& handler) const;
    using Closed_revoker = event_revoker<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> const& handler) const;
    void Closed(event_token const& token) const;
    event_token RequestReceived(Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> const& handler) const;
    using RequestReceived_revoker = event_revoker<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>;
    RequestReceived_revoker RequestReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> const& handler) const;
    void RequestReceived(event_token const& token) const;
};
template <> struct consume<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> { template <typename D> using type = consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionClosedEventArgs
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason Reason() const;
};
template <> struct consume<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs> { template <typename D> using type = consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionClosedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionRequestReceivedEventArgs
{
    Windows::Web::Http::HttpRequestMessage RequestMessage() const;
    Windows::Web::Http::HttpResponseMessage ResponseMessage() const;
};
template <> struct consume<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs> { template <typename D> using type = consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionRequestReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionStatics
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnection GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection) const;
};
template <> struct consume<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics> { template <typename D> using type = consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionStatics<D>; };

template <> struct abi<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Closed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Closed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RequestReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RequestReceived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reason(abi_t<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason>* value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestMessage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ResponseMessage(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForAppServiceConnection(::IUnknown* appServiceConnection, ::IUnknown** value) = 0;
};};

}
