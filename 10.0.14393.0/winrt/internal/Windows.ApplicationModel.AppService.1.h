// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.AppService.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.System.0.h"
#include "Windows.System.RemoteSystems.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::AppService {

struct __declspec(uuid("ef0d2507-d132-4c85-8395-3c31d5a1e941")) __declspec(novtable) IAppServiceCatalogStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FindAppServiceProvidersAsync(hstring appServiceName, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> ** operation) = 0;
};

struct __declspec(uuid("de6016f6-cb03-4d35-ac8d-cc6303239731")) __declspec(novtable) IAppServiceClosedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::ApplicationModel::AppService::AppServiceClosedStatus * value) = 0;
};

struct __declspec(uuid("9dd474a2-871f-4d52-89a9-9e090531bd27")) __declspec(novtable) IAppServiceConnection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AppServiceName(hstring * value) = 0;
    virtual HRESULT __stdcall put_AppServiceName(hstring value) = 0;
    virtual HRESULT __stdcall get_PackageFamilyName(hstring * value) = 0;
    virtual HRESULT __stdcall put_PackageFamilyName(hstring value) = 0;
    virtual HRESULT __stdcall abi_OpenAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_SendMessageAsync(Windows::Foundation::Collections::IPropertySet * message, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse> ** operation) = 0;
    virtual HRESULT __stdcall add_RequestReceived(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RequestReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_ServiceClosed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ServiceClosed(event_token token) = 0;
};

struct __declspec(uuid("8bdfcd5f-2302-4fbd-8061-52511c2f8bf9")) __declspec(novtable) IAppServiceConnection2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenRemoteAsync(Windows::System::RemoteSystems::IRemoteSystemConnectionRequest * remoteSystemConnectionRequest, Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> ** operation) = 0;
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
    virtual HRESULT __stdcall put_User(Windows::System::IUser * value) = 0;
};

struct __declspec(uuid("7e1b5322-eab0-4248-ae04-fdf93838e472")) __declspec(novtable) IAppServiceDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("20e58d9d-18de-4b01-80ba-90a76204e3c8")) __declspec(novtable) IAppServiceRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Message(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall abi_SendResponseAsync(Windows::Foundation::Collections::IPropertySet * message, Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceResponseStatus> ** operation) = 0;
};

struct __declspec(uuid("6e122360-ff65-44ae-9e45-857fe4180681")) __declspec(novtable) IAppServiceRequestReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::AppService::IAppServiceRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::ApplicationModel::AppService::IAppServiceDeferral ** value) = 0;
};

struct __declspec(uuid("8d503cec-9aa3-4e68-9559-9de63e372ce4")) __declspec(novtable) IAppServiceResponse : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Message(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::ApplicationModel::AppService::AppServiceResponseStatus * value) = 0;
};

struct __declspec(uuid("88a2dcac-ad28-41b8-80bb-bdf1b2169e19")) __declspec(novtable) IAppServiceTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_CallerPackageFamilyName(hstring * value) = 0;
    virtual HRESULT __stdcall get_AppServiceConnection(Windows::ApplicationModel::AppService::IAppServiceConnection ** value) = 0;
};

struct __declspec(uuid("e83d54b2-28cc-43f2-b465-c0482e59e2dc")) __declspec(novtable) IAppServiceTriggerDetails2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsRemoteSystemConnection(bool * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> { using default_interface = Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs; };
template <> struct traits<Windows::ApplicationModel::AppService::AppServiceConnection> { using default_interface = Windows::ApplicationModel::AppService::IAppServiceConnection; };
template <> struct traits<Windows::ApplicationModel::AppService::AppServiceDeferral> { using default_interface = Windows::ApplicationModel::AppService::IAppServiceDeferral; };
template <> struct traits<Windows::ApplicationModel::AppService::AppServiceRequest> { using default_interface = Windows::ApplicationModel::AppService::IAppServiceRequest; };
template <> struct traits<Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> { using default_interface = Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs; };
template <> struct traits<Windows::ApplicationModel::AppService::AppServiceResponse> { using default_interface = Windows::ApplicationModel::AppService::IAppServiceResponse; };
template <> struct traits<Windows::ApplicationModel::AppService::AppServiceTriggerDetails> { using default_interface = Windows::ApplicationModel::AppService::IAppServiceTriggerDetails; };

}

namespace Windows::ApplicationModel::AppService {

template <typename T> struct impl_IAppServiceCatalogStatics;
template <typename T> struct impl_IAppServiceClosedEventArgs;
template <typename T> struct impl_IAppServiceConnection;
template <typename T> struct impl_IAppServiceConnection2;
template <typename T> struct impl_IAppServiceDeferral;
template <typename T> struct impl_IAppServiceRequest;
template <typename T> struct impl_IAppServiceRequestReceivedEventArgs;
template <typename T> struct impl_IAppServiceResponse;
template <typename T> struct impl_IAppServiceTriggerDetails;
template <typename T> struct impl_IAppServiceTriggerDetails2;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceCatalogStatics;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceCatalogStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceClosedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceConnection>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceConnection;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceConnection<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceConnection2>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceConnection2;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceConnection2<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceDeferral>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceDeferral;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceDeferral<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceRequest>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceRequest;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceRequestReceivedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceResponse>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceResponse;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceResponse<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceTriggerDetails<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>
{
    using abi = ABI::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2;
    template <typename D> using consume = Windows::ApplicationModel::AppService::impl_IAppServiceTriggerDetails2<D>;
};

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceCatalog>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.AppService.AppServiceCatalog"; }
};

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::AppService::AppServiceClosedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.AppService.AppServiceClosedEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceConnection>
{
    using abi = ABI::Windows::ApplicationModel::AppService::AppServiceConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.AppService.AppServiceConnection"; }
};

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceDeferral>
{
    using abi = ABI::Windows::ApplicationModel::AppService::AppServiceDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.AppService.AppServiceDeferral"; }
};

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceRequest>
{
    using abi = ABI::Windows::ApplicationModel::AppService::AppServiceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.AppService.AppServiceRequest"; }
};

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceResponse>
{
    using abi = ABI::Windows::ApplicationModel::AppService::AppServiceResponse;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.AppService.AppServiceResponse"; }
};

template <> struct traits<Windows::ApplicationModel::AppService::AppServiceTriggerDetails>
{
    using abi = ABI::Windows::ApplicationModel::AppService::AppServiceTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.AppService.AppServiceTriggerDetails"; }
};

}

}
