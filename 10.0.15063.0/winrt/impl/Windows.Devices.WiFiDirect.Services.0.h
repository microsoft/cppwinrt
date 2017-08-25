// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct DeviceInformation;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct EndpointPair;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

struct DatagramSocket;
struct StreamSocketListener;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect::Services {

enum class WiFiDirectServiceAdvertisementStatus
{
    Created = 0,
    Started = 1,
    Stopped = 2,
    Aborted = 3,
};

enum class WiFiDirectServiceConfigurationMethod
{
    Default = 0,
    PinDisplay = 1,
    PinEntry = 2,
};

enum class WiFiDirectServiceError
{
    Success = 0,
    RadioNotAvailable = 1,
    ResourceInUse = 2,
    UnsupportedHardware = 3,
    NoHardware = 4,
};

enum class WiFiDirectServiceIPProtocol
{
    Tcp = 6,
    Udp = 17,
};

enum class WiFiDirectServiceSessionErrorStatus
{
    Ok = 0,
    Disassociated = 1,
    LocalClose = 2,
    RemoteClose = 3,
    SystemFailure = 4,
    NoResponseFromRemote = 5,
};

enum class WiFiDirectServiceSessionStatus
{
    Closed = 0,
    Initiated = 1,
    Requested = 2,
    Open = 3,
};

enum class WiFiDirectServiceStatus
{
    Available = 0,
    Busy = 1,
    Custom = 2,
};

struct IWiFiDirectService;
struct IWiFiDirectServiceAdvertiser;
struct IWiFiDirectServiceAdvertiserFactory;
struct IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
struct IWiFiDirectServiceProvisioningInfo;
struct IWiFiDirectServiceRemotePortAddedEventArgs;
struct IWiFiDirectServiceSession;
struct IWiFiDirectServiceSessionDeferredEventArgs;
struct IWiFiDirectServiceSessionRequest;
struct IWiFiDirectServiceSessionRequestedEventArgs;
struct IWiFiDirectServiceStatics;
struct WiFiDirectService;
struct WiFiDirectServiceAdvertiser;
struct WiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
struct WiFiDirectServiceProvisioningInfo;
struct WiFiDirectServiceRemotePortAddedEventArgs;
struct WiFiDirectServiceSession;
struct WiFiDirectServiceSessionDeferredEventArgs;
struct WiFiDirectServiceSessionRequest;
struct WiFiDirectServiceSessionRequestedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectService>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus>{ using type = enum_category; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectService" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAdvertiser" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAdvertiserFactory" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceProvisioningInfo" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceRemotePortAddedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSession" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionDeferredEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionRequest" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionRequestedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceStatics" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectService>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectService" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAdvertiser" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAutoAcceptSessionConnectedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceProvisioningInfo" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceRemotePortAddedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSession" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionDeferredEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionRequest" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionRequestedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAdvertisementStatus" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceConfigurationMethod" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceError" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceIPProtocol" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionErrorStatus" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionStatus" }; };
template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceStatus" }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>{ static constexpr GUID value{ 0x50AABBB8,0x5F71,0x45EC,{ 0x84,0xF1,0xA1,0xE4,0xFC,0x78,0x79,0xA3 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>{ static constexpr GUID value{ 0xA4AA1EE1,0x9D8F,0x4F4F,{ 0x93,0xEE,0x7D,0xDE,0xA2,0xE3,0x7F,0x46 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>{ static constexpr GUID value{ 0x3106AC0D,0xB446,0x4F13,{ 0x9F,0x9A,0x8A,0xE9,0x25,0xFE,0xBA,0x2B } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>{ static constexpr GUID value{ 0xDCD9E01E,0x83DF,0x43E5,{ 0x8F,0x43,0xCB,0xE8,0x47,0x9E,0x84,0xEB } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>{ static constexpr GUID value{ 0x8BDB7CFE,0x97D9,0x45A2,{ 0x8E,0x99,0xDB,0x50,0x91,0x0F,0xB6,0xA6 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>{ static constexpr GUID value{ 0xD4CEBAC1,0x3FD3,0x4F0E,{ 0xB7,0xBD,0x78,0x29,0x06,0xF4,0x44,0x11 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>{ static constexpr GUID value{ 0x81142163,0xE426,0x47CB,{ 0x86,0x40,0xE1,0xB3,0x58,0x8B,0xF2,0x6F } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>{ static constexpr GUID value{ 0x8DFC197F,0x1201,0x4F1F,{ 0xB6,0xF4,0x5D,0xF1,0xB7,0xB9,0xFB,0x2E } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>{ static constexpr GUID value{ 0xA0E27C8B,0x50CB,0x4A58,{ 0x9B,0xCF,0xE4,0x72,0xB9,0x9F,0xBA,0x04 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>{ static constexpr GUID value{ 0x74BDCC11,0x53D6,0x4999,{ 0xB4,0xF8,0x6C,0x8E,0xCC,0x17,0x71,0xE7 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>{ static constexpr GUID value{ 0x7DB40045,0xFD74,0x4688,{ 0xB7,0x25,0x5D,0xCE,0x86,0xAC,0xF2,0x33 } }; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectService>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectService; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest; };
template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs>{ using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService
{
    Windows::Storage::Streams::IBuffer RemoteServiceInfo() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> SupportedConfigurationMethods() const;
    bool PreferGroupOwnerMode() const;
    void PreferGroupOwnerMode(bool value) const;
    Windows::Storage::Streams::IBuffer SessionInfo() const;
    void SessionInfo(Windows::Storage::Streams::IBuffer const& value) const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError ServiceError() const;
    event_token SessionDeferred(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> const& handler) const;
    using SessionDeferred_revoker = event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>;
    SessionDeferred_revoker SessionDeferred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> const& handler) const;
    void SessionDeferred(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> GetProvisioningInfoAsync(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod const& selectedConfigurationMethod) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> ConnectAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> ConnectAsync(param::hstring const& pin) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectService> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser
{
    hstring ServiceName() const;
    Windows::Foundation::Collections::IVector<hstring> ServiceNamePrefixes() const;
    Windows::Storage::Streams::IBuffer ServiceInfo() const;
    void ServiceInfo(Windows::Storage::Streams::IBuffer const& value) const;
    bool AutoAcceptSession() const;
    void AutoAcceptSession(bool value) const;
    bool PreferGroupOwnerMode() const;
    void PreferGroupOwnerMode(bool value) const;
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> PreferredConfigurationMethods() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus ServiceStatus() const;
    void ServiceStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus const& value) const;
    uint32_t CustomServiceStatusCode() const;
    void CustomServiceStatusCode(uint32_t value) const;
    Windows::Storage::Streams::IBuffer DeferredSessionInfo() const;
    void DeferredSessionInfo(Windows::Storage::Streams::IBuffer const& value) const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus AdvertisementStatus() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError ServiceError() const;
    event_token SessionRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> const& handler) const;
    using SessionRequested_revoker = event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>;
    SessionRequested_revoker SessionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> const& handler) const;
    void SessionRequested(event_token const& token) const;
    event_token AutoAcceptSessionConnected(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> const& handler) const;
    using AutoAcceptSessionConnected_revoker = event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>;
    AutoAcceptSessionConnected_revoker AutoAcceptSessionConnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> const& handler) const;
    void AutoAcceptSessionConnected(event_token const& token) const;
    event_token AdvertisementStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Foundation::IInspectable> const& handler) const;
    using AdvertisementStatusChanged_revoker = event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>;
    AdvertisementStatusChanged_revoker AdvertisementStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Foundation::IInspectable> const& handler) const;
    void AdvertisementStatusChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> ConnectAsync(Windows::Devices::Enumeration::DeviceInformation const& deviceInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> ConnectAsync(Windows::Devices::Enumeration::DeviceInformation const& deviceInfo, param::hstring const& pin) const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiserFactory
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser CreateWiFiDirectServiceAdvertiser(param::hstring const& serviceName) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiserFactory<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession Session() const;
    Windows::Storage::Streams::IBuffer SessionInfo() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceProvisioningInfo
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod SelectedConfigurationMethod() const;
    bool IsGroupFormationNeeded() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceProvisioningInfo<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceRemotePortAddedEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> EndpointPairs() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol Protocol() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceRemotePortAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession
{
    hstring ServiceName() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus Status() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus ErrorStatus() const;
    uint32_t SessionId() const;
    uint32_t AdvertisementId() const;
    hstring ServiceAddress() const;
    hstring SessionAddress() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> GetConnectionEndpointPairs() const;
    event_token SessionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Foundation::IInspectable> const& handler) const;
    using SessionStatusChanged_revoker = event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>;
    SessionStatusChanged_revoker SessionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Foundation::IInspectable> const& handler) const;
    void SessionStatusChanged(event_token const& token) const;
    Windows::Foundation::IAsyncAction AddStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& value) const;
    Windows::Foundation::IAsyncAction AddDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& value) const;
    event_token RemotePortAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> const& handler) const;
    using RemotePortAdded_revoker = event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>;
    RemotePortAdded_revoker RemotePortAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> const& handler) const;
    void RemotePortAdded(event_token const& token) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionDeferredEventArgs
{
    Windows::Storage::Streams::IBuffer DeferredSessionInfo() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionDeferredEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequest
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo ProvisioningInfo() const;
    Windows::Storage::Streams::IBuffer SessionInfo() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequest<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequestedEventArgs
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest GetSessionRequest() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceStatics
{
    hstring GetSelector(param::hstring const& serviceName) const;
    hstring GetSelector(param::hstring const& serviceName, Windows::Storage::Streams::IBuffer const& serviceInfoFilter) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> FromIdAsync(param::hstring const& deviceId) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceStatics<D>; };

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteServiceInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedConfigurationMethods(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PreferGroupOwnerMode(bool* value) = 0;
    virtual HRESULT __stdcall put_PreferGroupOwnerMode(bool value) = 0;
    virtual HRESULT __stdcall get_SessionInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SessionInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ServiceError(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError>* value) = 0;
    virtual HRESULT __stdcall add_SessionDeferred(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SessionDeferred(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetProvisioningInfoAsync(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> selectedConfigurationMethod, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ConnectAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ConnectAsyncWithPin(HSTRING pin, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServiceNamePrefixes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServiceInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ServiceInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AutoAcceptSession(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoAcceptSession(bool value) = 0;
    virtual HRESULT __stdcall get_PreferGroupOwnerMode(bool* value) = 0;
    virtual HRESULT __stdcall put_PreferGroupOwnerMode(bool value) = 0;
    virtual HRESULT __stdcall get_PreferredConfigurationMethods(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServiceStatus(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus>* value) = 0;
    virtual HRESULT __stdcall put_ServiceStatus(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus> value) = 0;
    virtual HRESULT __stdcall get_CustomServiceStatusCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_CustomServiceStatusCode(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DeferredSessionInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DeferredSessionInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AdvertisementStatus(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus>* value) = 0;
    virtual HRESULT __stdcall get_ServiceError(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError>* value) = 0;
    virtual HRESULT __stdcall add_SessionRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SessionRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AutoAcceptSessionConnected(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AutoAcceptSessionConnected(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AdvertisementStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AdvertisementStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall ConnectAsync(::IUnknown* deviceInfo, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ConnectAsyncWithPin(::IUnknown* deviceInfo, HSTRING pin, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWiFiDirectServiceAdvertiser(HSTRING serviceName, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Session(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SessionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SelectedConfigurationMethod(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod>* value) = 0;
    virtual HRESULT __stdcall get_IsGroupFormationNeeded(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EndpointPairs(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Protocol(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol>* value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus>* value) = 0;
    virtual HRESULT __stdcall get_ErrorStatus(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus>* value) = 0;
    virtual HRESULT __stdcall get_SessionId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AdvertisementId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ServiceAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SessionAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetConnectionEndpointPairs(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_SessionStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SessionStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall AddStreamSocketListenerAsync(::IUnknown* value, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall AddDatagramSocketAsync(::IUnknown* value, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_RemotePortAdded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RemotePortAdded(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeferredSessionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceInformation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProvisioningInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SessionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSessionRequest(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSelector(HSTRING serviceName, HSTRING* serviceSelector) = 0;
    virtual HRESULT __stdcall GetSelectorWithFilter(HSTRING serviceName, ::IUnknown* serviceInfoFilter, HSTRING* serviceSelector) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncOp) = 0;
};};

}
