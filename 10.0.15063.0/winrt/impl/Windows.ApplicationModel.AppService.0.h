// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct AppInfo;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems {

struct RemoteSystemConnectionRequest;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService {

enum class AppServiceClosedStatus
{
    Completed = 0,
    Canceled = 1,
    ResourceLimitsExceeded = 2,
    Unknown = 3,
};

enum class AppServiceConnectionStatus
{
    Success = 0,
    AppNotInstalled = 1,
    AppUnavailable = 2,
    AppServiceUnavailable = 3,
    Unknown = 4,
    RemoteSystemUnavailable = 5,
    RemoteSystemNotSupportedByApp = 6,
    NotAuthorized = 7,
};

enum class AppServiceResponseStatus
{
    Success = 0,
    Failure = 1,
    ResourceLimitsExceeded = 2,
    Unknown = 3,
    RemoteSystemUnavailable = 4,
    MessageSizeTooLarge = 5,
};

struct IAppServiceCatalogStatics;
struct IAppServiceClosedEventArgs;
struct IAppServiceConnection;
struct IAppServiceConnection2;
struct IAppServiceDeferral;
struct IAppServiceRequest;
struct IAppServiceRequestReceivedEventArgs;
struct IAppServiceResponse;
struct IAppServiceTriggerDetails;
struct IAppServiceTriggerDetails2;
struct AppServiceCatalog;
struct AppServiceClosedEventArgs;
struct AppServiceConnection;
struct AppServiceDeferral;
struct AppServiceRequest;
struct AppServiceRequestReceivedEventArgs;
struct AppServiceResponse;
struct AppServiceTriggerDetails;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceConnection>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceConnection2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceResponse>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceCatalog>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceConnection>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceResponse>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceClosedStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceConnectionStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::AppService::AppServiceResponseStatus>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceCatalogStatics" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceClosedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceConnection>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceConnection" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceConnection2>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceConnection2" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceDeferral" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceRequest" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceRequestReceivedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceResponse>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceResponse" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails2" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceCatalog>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceCatalog" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceClosedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceConnection>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceConnection" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceDeferral" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceRequest" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceResponse>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceResponse" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceClosedStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceClosedStatus" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceConnectionStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceConnectionStatus" }; };
template <> struct name<Windows::ApplicationModel::AppService::AppServiceResponseStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceResponseStatus" }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>{ static constexpr GUID value{ 0xEF0D2507,0xD132,0x4C85,{ 0x83,0x95,0x3C,0x31,0xD5,0xA1,0xE9,0x41 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>{ static constexpr GUID value{ 0xDE6016F6,0xCB03,0x4D35,{ 0xAC,0x8D,0xCC,0x63,0x03,0x23,0x97,0x31 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceConnection>{ static constexpr GUID value{ 0x9DD474A2,0x871F,0x4D52,{ 0x89,0xA9,0x9E,0x09,0x05,0x31,0xBD,0x27 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceConnection2>{ static constexpr GUID value{ 0x8BDFCD5F,0x2302,0x4FBD,{ 0x80,0x61,0x52,0x51,0x1C,0x2F,0x8B,0xF9 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceDeferral>{ static constexpr GUID value{ 0x7E1B5322,0xEAB0,0x4248,{ 0xAE,0x04,0xFD,0xF9,0x38,0x38,0xE4,0x72 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceRequest>{ static constexpr GUID value{ 0x20E58D9D,0x18DE,0x4B01,{ 0x80,0xBA,0x90,0xA7,0x62,0x04,0xE3,0xC8 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>{ static constexpr GUID value{ 0x6E122360,0xFF65,0x44AE,{ 0x9E,0x45,0x85,0x7F,0xE4,0x18,0x06,0x81 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceResponse>{ static constexpr GUID value{ 0x8D503CEC,0x9AA3,0x4E68,{ 0x95,0x59,0x9D,0xE6,0x3E,0x37,0x2C,0xE4 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>{ static constexpr GUID value{ 0x88A2DCAC,0xAD28,0x41B8,{ 0x80,0xBB,0xBD,0xF1,0xB2,0x16,0x9E,0x19 } }; };
template <> struct guid<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>{ static constexpr GUID value{ 0xE83D54B2,0x28CC,0x43F2,{ 0xB4,0x65,0xC0,0x48,0x2E,0x59,0xE2,0xDC } }; };
template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs>{ using type = Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceConnection>{ using type = Windows::ApplicationModel::AppService::IAppServiceConnection; };
template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceDeferral>{ using type = Windows::ApplicationModel::AppService::IAppServiceDeferral; };
template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceRequest>{ using type = Windows::ApplicationModel::AppService::IAppServiceRequest; };
template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs>{ using type = Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceResponse>{ using type = Windows::ApplicationModel::AppService::IAppServiceResponse; };
template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceTriggerDetails>{ using type = Windows::ApplicationModel::AppService::IAppServiceTriggerDetails; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceCatalogStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindAppServiceProvidersAsync(param::hstring const& appServiceName) const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceCatalogStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceClosedEventArgs
{
    Windows::ApplicationModel::AppService::AppServiceClosedStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceClosedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceConnection
{
    hstring AppServiceName() const;
    void AppServiceName(param::hstring const& value) const;
    hstring PackageFamilyName() const;
    void PackageFamilyName(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceConnectionStatus> OpenAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse> SendMessageAsync(Windows::Foundation::Collections::ValueSet const& message) const;
    event_token RequestReceived(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> const& handler) const;
    using RequestReceived_revoker = event_revoker<Windows::ApplicationModel::AppService::IAppServiceConnection>;
    RequestReceived_revoker RequestReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> const& handler) const;
    void RequestReceived(event_token const& token) const;
    event_token ServiceClosed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> const& handler) const;
    using ServiceClosed_revoker = event_revoker<Windows::ApplicationModel::AppService::IAppServiceConnection>;
    ServiceClosed_revoker ServiceClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> const& handler) const;
    void ServiceClosed(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceConnection> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceConnection2
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceConnectionStatus> OpenRemoteAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest) const;
    Windows::System::User User() const;
    void User(Windows::System::User const& value) const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceConnection2> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceConnection2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceRequest
{
    Windows::Foundation::Collections::ValueSet Message() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponseStatus> SendResponseAsync(Windows::Foundation::Collections::ValueSet const& message) const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceRequest> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceRequestReceivedEventArgs
{
    Windows::ApplicationModel::AppService::AppServiceRequest Request() const;
    Windows::ApplicationModel::AppService::AppServiceDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceRequestReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceResponse
{
    Windows::Foundation::Collections::ValueSet Message() const;
    Windows::ApplicationModel::AppService::AppServiceResponseStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceResponse> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceResponse<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails
{
    hstring Name() const;
    hstring CallerPackageFamilyName() const;
    Windows::ApplicationModel::AppService::AppServiceConnection AppServiceConnection() const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails2
{
    bool IsRemoteSystemConnection() const;
};
template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2> { template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails2<D>; };

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAppServiceProvidersAsync(HSTRING appServiceName, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::AppService::AppServiceClosedStatus>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceConnection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AppServiceName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PackageFamilyName(HSTRING value) = 0;
    virtual HRESULT __stdcall OpenAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendMessageAsync(::IUnknown* message, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_RequestReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RequestReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ServiceClosed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ServiceClosed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceConnection2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OpenRemoteAsync(::IUnknown* remoteSystemConnectionRequest, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_User(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Message(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SendResponseAsync(::IUnknown* message, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceResponse>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Message(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::AppService::AppServiceResponseStatus>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppServiceConnection(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsRemoteSystemConnection(bool* value) = 0;
};};

}
