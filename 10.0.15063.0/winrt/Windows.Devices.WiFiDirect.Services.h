// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.Services.2.h"
#include "winrt/Windows.Devices.WiFiDirect.h"

namespace winrt::impl {

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::RemoteServiceInfo() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->get_RemoteServiceInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::SupportedConfigurationMethods() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->get_SupportedConfigurationMethods(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::PreferGroupOwnerMode() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->get_PreferGroupOwnerMode(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::PreferGroupOwnerMode(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->put_PreferGroupOwnerMode(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::SessionInfo() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::SessionInfo(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->put_SessionInfo(get_abi(value)));
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::ServiceError() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->get_ServiceError(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::SessionDeferred(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->add_SessionDeferred(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectService> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::SessionDeferred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectService>(this, &abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>::remove_SessionDeferred, SessionDeferred(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::SessionDeferred(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->remove_SessionDeferred(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::GetProvisioningInfoAsync(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod const& selectedConfigurationMethod) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->GetProvisioningInfoAsync(get_abi(selectedConfigurationMethod), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::ConnectAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->ConnectAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>::ConnectAsync(param::hstring const& pin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectService)->ConnectAsyncWithPin(get_abi(pin), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_ServiceName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ServiceNamePrefixes() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_ServiceNamePrefixes(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ServiceInfo() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_ServiceInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ServiceInfo(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->put_ServiceInfo(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSession() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_AutoAcceptSession(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSession(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->put_AutoAcceptSession(value));
}

template <typename D> bool consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::PreferGroupOwnerMode() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_PreferGroupOwnerMode(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::PreferGroupOwnerMode(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->put_PreferGroupOwnerMode(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::PreferredConfigurationMethods() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_PreferredConfigurationMethods(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ServiceStatus() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_ServiceStatus(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ServiceStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->put_ServiceStatus(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::CustomServiceStatusCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_CustomServiceStatusCode(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::CustomServiceStatusCode(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->put_CustomServiceStatusCode(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::DeferredSessionInfo() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_DeferredSessionInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::DeferredSessionInfo(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->put_DeferredSessionInfo(get_abi(value)));
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AdvertisementStatus() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_AdvertisementStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ServiceError() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->get_ServiceError(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::SessionRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->add_SessionRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::SessionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>(this, &abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>::remove_SessionRequested, SessionRequested(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::SessionRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->remove_SessionRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSessionConnected(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->add_AutoAcceptSessionConnected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSessionConnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>(this, &abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>::remove_AutoAcceptSessionConnected, AutoAcceptSessionConnected(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AutoAcceptSessionConnected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->remove_AutoAcceptSessionConnected(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AdvertisementStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->add_AdvertisementStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AdvertisementStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>(this, &abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>::remove_AdvertisementStatusChanged, AdvertisementStatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::AdvertisementStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->remove_AdvertisementStatusChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ConnectAsync(Windows::Devices::Enumeration::DeviceInformation const& deviceInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->ConnectAsync(get_abi(deviceInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::ConnectAsync(Windows::Devices::Enumeration::DeviceInformation const& deviceInfo, param::hstring const& pin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->ConnectAsyncWithPin(get_abi(deviceInfo), get_abi(pin), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->Start());
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser)->Stop());
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiserFactory<D>::CreateWiFiDirectServiceAdvertiser(param::hstring const& serviceName) const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory)->CreateWiFiDirectServiceAdvertiser(get_abi(serviceName), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs<D>::Session() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs<D>::SessionInfo() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceProvisioningInfo<D>::SelectedConfigurationMethod() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo)->get_SelectedConfigurationMethod(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceProvisioningInfo<D>::IsGroupFormationNeeded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo)->get_IsGroupFormationNeeded(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceRemotePortAddedEventArgs<D>::EndpointPairs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs)->get_EndpointPairs(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceRemotePortAddedEventArgs<D>::Protocol() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs)->get_Protocol(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::ServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->get_ServiceName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::Status() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::ErrorStatus() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->get_ErrorStatus(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::SessionId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->get_SessionId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::AdvertisementId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->get_AdvertisementId(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::ServiceAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->get_ServiceAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::SessionAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->get_SessionAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::GetConnectionEndpointPairs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->GetConnectionEndpointPairs(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::SessionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->add_SessionStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::SessionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>(this, &abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>::remove_SessionStatusChanged, SessionStatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::SessionStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->remove_SessionStatusChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::AddStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& value) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->AddStreamSocketListenerAsync(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::AddDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& value) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->AddDatagramSocketAsync(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::RemotePortAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->add_RemotePortAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::RemotePortAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>(this, &abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>::remove_RemotePortAdded, RemotePortAdded(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>::RemotePortAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession)->remove_RemotePortAdded(get_abi(token)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionDeferredEventArgs<D>::DeferredSessionInfo() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs)->get_DeferredSessionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequest<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequest<D>::ProvisioningInfo() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest)->get_ProvisioningInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequest<D>::SessionInfo() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequestedEventArgs<D>::GetSessionRequest() const
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs)->GetSessionRequest(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceStatics<D>::GetSelector(param::hstring const& serviceName) const
{
    hstring serviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics)->GetSelector(get_abi(serviceName), put_abi(serviceSelector)));
    return serviceSelector;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceStatics<D>::GetSelector(param::hstring const& serviceName, Windows::Storage::Streams::IBuffer const& serviceInfoFilter) const
{
    hstring serviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics)->GetSelectorWithFilter(get_abi(serviceName), get_abi(serviceInfoFilter), put_abi(serviceSelector)));
    return serviceSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics)->FromIdAsync(get_abi(deviceId), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectService> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectService>
{
    HRESULT __stdcall get_RemoteServiceInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteServiceInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedConfigurationMethods(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedConfigurationMethods());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferGroupOwnerMode(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferGroupOwnerMode());
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
            typename D::abi_guard guard(this->shim());
            this->shim().PreferGroupOwnerMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SessionInfo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionInfo(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceError(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionDeferred(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SessionDeferred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionDeferred(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionDeferred(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProvisioningInfoAsync(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> selectedConfigurationMethod, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetProvisioningInfoAsync(*reinterpret_cast<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod const*>(&selectedConfigurationMethod)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConnectAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsyncWithPin(HSTRING pin, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConnectAsync(*reinterpret_cast<hstring const*>(&pin)));
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
    HRESULT __stdcall get_ServiceName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceNamePrefixes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceNamePrefixes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceInfo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceInfo(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoAcceptSession(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoAcceptSession());
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
            typename D::abi_guard guard(this->shim());
            this->shim().AutoAcceptSession(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferGroupOwnerMode(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferGroupOwnerMode());
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
            typename D::abi_guard guard(this->shim());
            this->shim().PreferGroupOwnerMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredConfigurationMethods(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredConfigurationMethods());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceStatus(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceStatus(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceStatus(*reinterpret_cast<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomServiceStatusCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomServiceStatusCode());
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
            typename D::abi_guard guard(this->shim());
            this->shim().CustomServiceStatusCode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeferredSessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeferredSessionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeferredSessionInfo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeferredSessionInfo(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisementStatus(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisementStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceError(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SessionRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AutoAcceptSessionConnected(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AutoAcceptSessionConnected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AutoAcceptSessionConnected(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoAcceptSessionConnected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AdvertisementStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AdvertisementStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AdvertisementStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisementStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsync(::IUnknown* deviceInfo, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&deviceInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsyncWithPin(::IUnknown* deviceInfo, HSTRING pin, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&deviceInfo), *reinterpret_cast<hstring const*>(&pin)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
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

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory> : produce_base<D, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>
{
    HRESULT __stdcall CreateWiFiDirectServiceAdvertiser(HSTRING serviceName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWiFiDirectServiceAdvertiser(*reinterpret_cast<hstring const*>(&serviceName)));
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
    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionInfo());
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
    HRESULT __stdcall get_SelectedConfigurationMethod(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedConfigurationMethod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGroupFormationNeeded(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGroupFormationNeeded());
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
    HRESULT __stdcall get_EndpointPairs(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointPairs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Protocol(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Protocol());
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
    HRESULT __stdcall get_ServiceName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorStatus(abi_t<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisementId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisementId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConnectionEndpointPairs(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetConnectionEndpointPairs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SessionStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddStreamSocketListenerAsync(::IUnknown* value, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AddStreamSocketListenerAsync(*reinterpret_cast<Windows::Networking::Sockets::StreamSocketListener const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDatagramSocketAsync(::IUnknown* value, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AddDatagramSocketAsync(*reinterpret_cast<Windows::Networking::Sockets::DatagramSocket const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemotePortAdded(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemotePortAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemotePortAdded(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemotePortAdded(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall get_DeferredSessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeferredSessionInfo());
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
    HRESULT __stdcall get_DeviceInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProvisioningInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProvisioningInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionInfo());
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
    HRESULT __stdcall GetSessionRequest(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSessionRequest());
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
    HRESULT __stdcall GetSelector(HSTRING serviceName, HSTRING* serviceSelector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *serviceSelector = detach_abi(this->shim().GetSelector(*reinterpret_cast<hstring const*>(&serviceName)));
            return S_OK;
        }
        catch (...)
        {
            *serviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSelectorWithFilter(HSTRING serviceName, ::IUnknown* serviceInfoFilter, HSTRING* serviceSelector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *serviceSelector = detach_abi(this->shim().GetSelector(*reinterpret_cast<hstring const*>(&serviceName), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&serviceInfoFilter)));
            return S_OK;
        }
        catch (...)
        {
            *serviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
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

WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect::Services {

inline hstring WiFiDirectService::GetSelector(param::hstring const& serviceName)
{
    return get_activation_factory<WiFiDirectService, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>().GetSelector(serviceName);
}

inline hstring WiFiDirectService::GetSelector(param::hstring const& serviceName, Windows::Storage::Streams::IBuffer const& serviceInfoFilter)
{
    return get_activation_factory<WiFiDirectService, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>().GetSelector(serviceName, serviceInfoFilter);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> WiFiDirectService::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<WiFiDirectService, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>().FromIdAsync(deviceId);
}

inline WiFiDirectServiceAdvertiser::WiFiDirectServiceAdvertiser(param::hstring const& serviceName) :
    WiFiDirectServiceAdvertiser(get_activation_factory<WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>().CreateWiFiDirectServiceAdvertiser(serviceName))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectService> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectService> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest> {};

template<> struct hash<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> {};

}

WINRT_WARNING_POP
