// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Networking.Sockets.3.h"
#include "internal/Windows.Devices.WiFiDirect.Services.3.h"
#include "Windows.Devices.WiFiDirect.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectService> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectService>
{
    HRESULT __stdcall get_RemoteServiceInfo(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteServiceInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedConfigurationMethods(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedConfigurationMethods());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferGroupOwnerMode(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferGroupOwnerMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferGroupOwnerMode(bool value) noexcept override
    {
        try
        {
            this->shim().PreferGroupOwnerMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInfo(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SessionInfo(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().SessionInfo(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceError(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionDeferred(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SessionDeferred(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionDeferred(event_token token) noexcept override
    {
        try
        {
            this->shim().SessionDeferred(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProvisioningInfoAsync(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod selectedConfigurationMethod, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetProvisioningInfoAsync(selectedConfigurationMethod));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConnectAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsyncWithPin(abi_arg_in<hstring> pin, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConnectAsync(*reinterpret_cast<const hstring *>(&pin)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>
{
    HRESULT __stdcall get_ServiceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceNamePrefixes(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceNamePrefixes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceInfo(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceInfo(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().ServiceInfo(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoAcceptSession(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoAcceptSession());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoAcceptSession(bool value) noexcept override
    {
        try
        {
            this->shim().AutoAcceptSession(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferGroupOwnerMode(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferGroupOwnerMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferGroupOwnerMode(bool value) noexcept override
    {
        try
        {
            this->shim().PreferGroupOwnerMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredConfigurationMethods(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredConfigurationMethods());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus value) noexcept override
    {
        try
        {
            this->shim().ServiceStatus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomServiceStatusCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomServiceStatusCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomServiceStatusCode(uint32_t value) noexcept override
    {
        try
        {
            this->shim().CustomServiceStatusCode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeferredSessionInfo(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeferredSessionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeferredSessionInfo(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().DeferredSessionInfo(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisementStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdvertisementStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceError(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SessionRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().SessionRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AutoAcceptSessionConnected(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AutoAcceptSessionConnected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AutoAcceptSessionConnected(event_token token) noexcept override
    {
        try
        {
            this->shim().AutoAcceptSessionConnected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AdvertisementStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AdvertisementStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AdvertisementStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AdvertisementStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsync(abi_arg_in<Windows::Devices::Enumeration::IDeviceInformation> deviceInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Devices::Enumeration::DeviceInformation *>(&deviceInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsyncWithPin(abi_arg_in<Windows::Devices::Enumeration::IDeviceInformation> deviceInfo, abi_arg_in<hstring> pin, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Devices::Enumeration::DeviceInformation *>(&deviceInfo), *reinterpret_cast<const hstring *>(&pin)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>
{
    HRESULT __stdcall abi_CreateWiFiDirectServiceAdvertiser(abi_arg_in<hstring> serviceName, abi_arg_out<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWiFiDirectServiceAdvertiser(*reinterpret_cast<const hstring *>(&serviceName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
{
    HRESULT __stdcall get_Session(abi_arg_out<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInfo(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionInfo());
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
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>
{
    HRESULT __stdcall get_SelectedConfigurationMethod(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedConfigurationMethod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGroupFormationNeeded(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsGroupFormationNeeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>
{
    HRESULT __stdcall get_EndpointPairs(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointPairs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Protocol(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Protocol());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>
{
    HRESULT __stdcall get_ServiceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisementId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdvertisementId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConnectionEndpointPairs(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetConnectionEndpointPairs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SessionStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().SessionStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddStreamSocketListenerAsync(abi_arg_in<Windows::Networking::Sockets::IStreamSocketListener> value, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AddStreamSocketListenerAsync(*reinterpret_cast<const Windows::Networking::Sockets::StreamSocketListener *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDatagramSocketAsync(abi_arg_in<Windows::Networking::Sockets::IDatagramSocket> value, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AddDatagramSocketAsync(*reinterpret_cast<const Windows::Networking::Sockets::DatagramSocket *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemotePortAdded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RemotePortAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemotePortAdded(event_token token) noexcept override
    {
        try
        {
            this->shim().RemotePortAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>
{
    HRESULT __stdcall get_DeferredSessionInfo(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeferredSessionInfo());
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
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>
{
    HRESULT __stdcall get_DeviceInformation(abi_arg_out<Windows::Devices::Enumeration::IDeviceInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProvisioningInfo(abi_arg_out<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProvisioningInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInfo(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionInfo());
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
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>
{
    HRESULT __stdcall abi_GetSessionRequest(abi_arg_out<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSessionRequest());
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
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>
{
    HRESULT __stdcall abi_GetSelector(abi_arg_in<hstring> serviceName, abi_arg_out<hstring> serviceSelector) noexcept override
    {
        try
        {
            *serviceSelector = detach(this->shim().GetSelector(*reinterpret_cast<const hstring *>(&serviceName)));
            return S_OK;
        }
        catch (...)
        {
            *serviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSelectorWithFilter(abi_arg_in<hstring> serviceName, abi_arg_in<Windows::Storage::Streams::IBuffer> serviceInfoFilter, abi_arg_out<hstring> serviceSelector) noexcept override
    {
        try
        {
            *serviceSelector = detach(this->shim().GetSelector(*reinterpret_cast<const hstring *>(&serviceName), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&serviceInfoFilter)));
            return S_OK;
        }
        catch (...)
        {
            *serviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::WiFiDirect::Services {

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod impl_IWiFiDirectServiceProvisioningInfo<D>::SelectedConfigurationMethod() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod value {};
    check_hresult(static_cast<const IWiFiDirectServiceProvisioningInfo &>(static_cast<const D &>(*this))->get_SelectedConfigurationMethod(&value));
    return value;
}

template <typename D> bool impl_IWiFiDirectServiceProvisioningInfo<D>::IsGroupFormationNeeded() const
{
    bool value {};
    check_hresult(static_cast<const IWiFiDirectServiceProvisioningInfo &>(static_cast<const D &>(*this))->get_IsGroupFormationNeeded(&value));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession impl_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs<D>::Session() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession value { nullptr };
    check_hresult(static_cast<const IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs &>(static_cast<const D &>(*this))->get_Session(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs<D>::SessionInfo() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs &>(static_cast<const D &>(*this))->get_SessionInfo(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> impl_IWiFiDirectServiceRemotePortAddedEventArgs<D>::EndpointPairs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value;
    check_hresult(static_cast<const IWiFiDirectServiceRemotePortAddedEventArgs &>(static_cast<const D &>(*this))->get_EndpointPairs(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol impl_IWiFiDirectServiceRemotePortAddedEventArgs<D>::Protocol() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol value {};
    check_hresult(static_cast<const IWiFiDirectServiceRemotePortAddedEventArgs &>(static_cast<const D &>(*this))->get_Protocol(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectServiceSessionDeferredEventArgs<D>::DeferredSessionInfo() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectServiceSessionDeferredEventArgs &>(static_cast<const D &>(*this))->get_DeferredSessionInfo(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest impl_IWiFiDirectServiceSessionRequestedEventArgs<D>::GetSessionRequest() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest value { nullptr };
    check_hresult(static_cast<const IWiFiDirectServiceSessionRequestedEventArgs &>(static_cast<const D &>(*this))->abi_GetSessionRequest(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser impl_IWiFiDirectServiceAdvertiserFactory<D>::CreateWiFiDirectServiceAdvertiser(hstring_ref serviceName) const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser result { nullptr };
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiserFactory &>(static_cast<const D &>(*this))->abi_CreateWiFiDirectServiceAdvertiser(get(serviceName), put(result)));
    return result;
}

template <typename D> hstring impl_IWiFiDirectServiceAdvertiser<D>::ServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_ServiceName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IWiFiDirectServiceAdvertiser<D>::ServiceNamePrefixes() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_ServiceNamePrefixes(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectServiceAdvertiser<D>::ServiceInfo() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_ServiceInfo(put(value)));
    return value;
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::ServiceInfo(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->put_ServiceInfo(get(value)));
}

template <typename D> bool impl_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSession() const
{
    bool value {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_AutoAcceptSession(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSession(bool value) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->put_AutoAcceptSession(value));
}

template <typename D> bool impl_IWiFiDirectServiceAdvertiser<D>::PreferGroupOwnerMode() const
{
    bool value {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_PreferGroupOwnerMode(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::PreferGroupOwnerMode(bool value) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->put_PreferGroupOwnerMode(value));
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> impl_IWiFiDirectServiceAdvertiser<D>::PreferredConfigurationMethods() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> value;
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_PreferredConfigurationMethods(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus impl_IWiFiDirectServiceAdvertiser<D>::ServiceStatus() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus value {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_ServiceStatus(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::ServiceStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus value) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->put_ServiceStatus(value));
}

template <typename D> uint32_t impl_IWiFiDirectServiceAdvertiser<D>::CustomServiceStatusCode() const
{
    uint32_t value {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_CustomServiceStatusCode(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::CustomServiceStatusCode(uint32_t value) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->put_CustomServiceStatusCode(value));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectServiceAdvertiser<D>::DeferredSessionInfo() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_DeferredSessionInfo(put(value)));
    return value;
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::DeferredSessionInfo(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->put_DeferredSessionInfo(get(value)));
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus impl_IWiFiDirectServiceAdvertiser<D>::AdvertisementStatus() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus value {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_AdvertisementStatus(&value));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError impl_IWiFiDirectServiceAdvertiser<D>::ServiceError() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError value {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->get_ServiceError(&value));
    return value;
}

template <typename D> event_token impl_IWiFiDirectServiceAdvertiser<D>::SessionRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->add_SessionRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectServiceAdvertiser> impl_IWiFiDirectServiceAdvertiser<D>::SessionRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectServiceAdvertiser>(this, &ABI::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser::remove_SessionRequested, SessionRequested(handler));
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::SessionRequested(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->remove_SessionRequested(token));
}

template <typename D> event_token impl_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSessionConnected(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->add_AutoAcceptSessionConnected(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectServiceAdvertiser> impl_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSessionConnected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectServiceAdvertiser>(this, &ABI::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser::remove_AutoAcceptSessionConnected, AutoAcceptSessionConnected(handler));
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSessionConnected(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->remove_AutoAcceptSessionConnected(token));
}

template <typename D> event_token impl_IWiFiDirectServiceAdvertiser<D>::AdvertisementStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->add_AdvertisementStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectServiceAdvertiser> impl_IWiFiDirectServiceAdvertiser<D>::AdvertisementStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectServiceAdvertiser>(this, &ABI::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser::remove_AdvertisementStatusChanged, AdvertisementStatusChanged(handler));
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::AdvertisementStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->remove_AdvertisementStatusChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> impl_IWiFiDirectServiceAdvertiser<D>::ConnectAsync(const Windows::Devices::Enumeration::DeviceInformation & deviceInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> result;
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->abi_ConnectAsync(get(deviceInfo), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> impl_IWiFiDirectServiceAdvertiser<D>::ConnectAsync(const Windows::Devices::Enumeration::DeviceInformation & deviceInfo, hstring_ref pin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> result;
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->abi_ConnectAsyncWithPin(get(deviceInfo), get(pin), put(result)));
    return result;
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::Start() const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IWiFiDirectServiceAdvertiser<D>::Stop() const
{
    check_hresult(static_cast<const IWiFiDirectServiceAdvertiser &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> hstring impl_IWiFiDirectServiceStatics<D>::GetSelector(hstring_ref serviceName) const
{
    hstring serviceSelector;
    check_hresult(static_cast<const IWiFiDirectServiceStatics &>(static_cast<const D &>(*this))->abi_GetSelector(get(serviceName), put(serviceSelector)));
    return serviceSelector;
}

template <typename D> hstring impl_IWiFiDirectServiceStatics<D>::GetSelector(hstring_ref serviceName, const Windows::Storage::Streams::IBuffer & serviceInfoFilter) const
{
    hstring serviceSelector;
    check_hresult(static_cast<const IWiFiDirectServiceStatics &>(static_cast<const D &>(*this))->abi_GetSelectorWithFilter(get(serviceName), get(serviceInfoFilter), put(serviceSelector)));
    return serviceSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> impl_IWiFiDirectServiceStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> asyncOp;
    check_hresult(static_cast<const IWiFiDirectServiceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectService<D>::RemoteServiceInfo() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->get_RemoteServiceInfo(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> impl_IWiFiDirectService<D>::SupportedConfigurationMethods() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> value;
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->get_SupportedConfigurationMethods(put(value)));
    return value;
}

template <typename D> bool impl_IWiFiDirectService<D>::PreferGroupOwnerMode() const
{
    bool value {};
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->get_PreferGroupOwnerMode(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectService<D>::PreferGroupOwnerMode(bool value) const
{
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->put_PreferGroupOwnerMode(value));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectService<D>::SessionInfo() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->get_SessionInfo(put(value)));
    return value;
}

template <typename D> void impl_IWiFiDirectService<D>::SessionInfo(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->put_SessionInfo(get(value)));
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError impl_IWiFiDirectService<D>::ServiceError() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError value {};
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->get_ServiceError(&value));
    return value;
}

template <typename D> event_token impl_IWiFiDirectService<D>::SessionDeferred(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->add_SessionDeferred(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectService> impl_IWiFiDirectService<D>::SessionDeferred(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectService>(this, &ABI::Windows::Devices::WiFiDirect::Services::IWiFiDirectService::remove_SessionDeferred, SessionDeferred(handler));
}

template <typename D> void impl_IWiFiDirectService<D>::SessionDeferred(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->remove_SessionDeferred(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> impl_IWiFiDirectService<D>::GetProvisioningInfoAsync(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod selectedConfigurationMethod) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> result;
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->abi_GetProvisioningInfoAsync(selectedConfigurationMethod, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> impl_IWiFiDirectService<D>::ConnectAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> result;
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->abi_ConnectAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> impl_IWiFiDirectService<D>::ConnectAsync(hstring_ref pin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> result;
    check_hresult(static_cast<const IWiFiDirectService &>(static_cast<const D &>(*this))->abi_ConnectAsyncWithPin(get(pin), put(result)));
    return result;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation impl_IWiFiDirectServiceSessionRequest<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value { nullptr };
    check_hresult(static_cast<const IWiFiDirectServiceSessionRequest &>(static_cast<const D &>(*this))->get_DeviceInformation(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo impl_IWiFiDirectServiceSessionRequest<D>::ProvisioningInfo() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo value { nullptr };
    check_hresult(static_cast<const IWiFiDirectServiceSessionRequest &>(static_cast<const D &>(*this))->get_ProvisioningInfo(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectServiceSessionRequest<D>::SessionInfo() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectServiceSessionRequest &>(static_cast<const D &>(*this))->get_SessionInfo(put(value)));
    return value;
}

template <typename D> hstring impl_IWiFiDirectServiceSession<D>::ServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->get_ServiceName(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus impl_IWiFiDirectServiceSession<D>::Status() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus value {};
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus impl_IWiFiDirectServiceSession<D>::ErrorStatus() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus value {};
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->get_ErrorStatus(&value));
    return value;
}

template <typename D> uint32_t impl_IWiFiDirectServiceSession<D>::SessionId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->get_SessionId(&value));
    return value;
}

template <typename D> uint32_t impl_IWiFiDirectServiceSession<D>::AdvertisementId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->get_AdvertisementId(&value));
    return value;
}

template <typename D> hstring impl_IWiFiDirectServiceSession<D>::ServiceAddress() const
{
    hstring value;
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->get_ServiceAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IWiFiDirectServiceSession<D>::SessionAddress() const
{
    hstring value;
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->get_SessionAddress(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> impl_IWiFiDirectServiceSession<D>::GetConnectionEndpointPairs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value;
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->abi_GetConnectionEndpointPairs(put(value)));
    return value;
}

template <typename D> event_token impl_IWiFiDirectServiceSession<D>::SessionStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->add_SessionStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectServiceSession> impl_IWiFiDirectServiceSession<D>::SessionStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectServiceSession>(this, &ABI::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession::remove_SessionStatusChanged, SessionStatusChanged(handler));
}

template <typename D> void impl_IWiFiDirectServiceSession<D>::SessionStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->remove_SessionStatusChanged(token));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWiFiDirectServiceSession<D>::AddStreamSocketListenerAsync(const Windows::Networking::Sockets::StreamSocketListener & value) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->abi_AddStreamSocketListenerAsync(get(value), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWiFiDirectServiceSession<D>::AddDatagramSocketAsync(const Windows::Networking::Sockets::DatagramSocket & value) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->abi_AddDatagramSocketAsync(get(value), put(result)));
    return result;
}

template <typename D> event_token impl_IWiFiDirectServiceSession<D>::RemotePortAdded(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->add_RemotePortAdded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectServiceSession> impl_IWiFiDirectServiceSession<D>::RemotePortAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectServiceSession>(this, &ABI::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession::remove_RemotePortAdded, RemotePortAdded(handler));
}

template <typename D> void impl_IWiFiDirectServiceSession<D>::RemotePortAdded(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectServiceSession &>(static_cast<const D &>(*this))->remove_RemotePortAdded(token));
}

inline hstring WiFiDirectService::GetSelector(hstring_ref serviceName)
{
    return get_activation_factory<WiFiDirectService, IWiFiDirectServiceStatics>().GetSelector(serviceName);
}

inline hstring WiFiDirectService::GetSelector(hstring_ref serviceName, const Windows::Storage::Streams::IBuffer & serviceInfoFilter)
{
    return get_activation_factory<WiFiDirectService, IWiFiDirectServiceStatics>().GetSelector(serviceName, serviceInfoFilter);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> WiFiDirectService::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<WiFiDirectService, IWiFiDirectServiceStatics>().FromIdAsync(deviceId);
}

inline WiFiDirectServiceAdvertiser::WiFiDirectServiceAdvertiser(hstring_ref serviceName) :
    WiFiDirectServiceAdvertiser(get_activation_factory<WiFiDirectServiceAdvertiser, IWiFiDirectServiceAdvertiserFactory>().CreateWiFiDirectServiceAdvertiser(serviceName))
{}

}

}
