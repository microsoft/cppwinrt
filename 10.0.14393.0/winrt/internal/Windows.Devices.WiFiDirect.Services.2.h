// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.WiFiDirect.Services.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_8780a851_6d48_5006_9288_81f3d7045a96
#define WINRT_GENERIC_8780a851_6d48_5006_9288_81f3d7045a96
template <> struct __declspec(uuid("8780a851-6d48-5006-9288-81f3d7045a96")) __declspec(novtable) IVectorView<Windows::Networking::EndpointPair> : impl_IVectorView<Windows::Networking::EndpointPair> {};
#endif

#ifndef WINRT_GENERIC_f6a6f91c_0579_565d_be07_4538a55690be
#define WINRT_GENERIC_f6a6f91c_0579_565d_be07_4538a55690be
template <> struct __declspec(uuid("f6a6f91c-0579-565d-be07-4538a55690be")) __declspec(novtable) IVector<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> : impl_IVector<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cb98fd74_871d_5730_91fe_81ef947fe78f
#define WINRT_GENERIC_cb98fd74_871d_5730_91fe_81ef947fe78f
template <> struct __declspec(uuid("cb98fd74-871d-5730-91fe-81ef947fe78f")) __declspec(novtable) TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> : impl_TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_3be2d508_a856_5c09_9998_522597b44b07
#define WINRT_GENERIC_3be2d508_a856_5c09_9998_522597b44b07
template <> struct __declspec(uuid("3be2d508-a856-5c09-9998-522597b44b07")) __declspec(novtable) TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> : impl_TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_67fc3121_c1a0_5c23_af58_ecb7f2a7d773
#define WINRT_GENERIC_67fc3121_c1a0_5c23_af58_ecb7f2a7d773
template <> struct __declspec(uuid("67fc3121-c1a0-5c23-af58-ecb7f2a7d773")) __declspec(novtable) TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::IInspectable> : impl_TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_c2da4e97_728b_5401_a9d9_3a0185450af2
#define WINRT_GENERIC_c2da4e97_728b_5401_a9d9_3a0185450af2
template <> struct __declspec(uuid("c2da4e97-728b-5401-a9d9-3a0185450af2")) __declspec(novtable) IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> : impl_IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> {};
#endif

#ifndef WINRT_GENERIC_c4fa2ae8_4ff7_5aa0_af97_ed85ea66f9ae
#define WINRT_GENERIC_c4fa2ae8_4ff7_5aa0_af97_ed85ea66f9ae
template <> struct __declspec(uuid("c4fa2ae8-4ff7-5aa0-af97-ed85ea66f9ae")) __declspec(novtable) IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> : impl_IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_dc710fe1_7f04_515b_8ac1_1c5d3c0d2b28
#define WINRT_GENERIC_dc710fe1_7f04_515b_8ac1_1c5d3c0d2b28
template <> struct __declspec(uuid("dc710fe1-7f04-515b-8ac1-1c5d3c0d2b28")) __declspec(novtable) IVectorView<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> : impl_IVectorView<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_fc3dfc2c_9cfa_5822_ba3f_ff3afb65777e
#define WINRT_GENERIC_fc3dfc2c_9cfa_5822_ba3f_ff3afb65777e
template <> struct __declspec(uuid("fc3dfc2c-9cfa-5822-ba3f-ff3afb65777e")) __declspec(novtable) TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> : impl_TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d7fa4dc4_4730_506e_bff0_801eb4a831a8
#define WINRT_GENERIC_d7fa4dc4_4730_506e_bff0_801eb4a831a8
template <> struct __declspec(uuid("d7fa4dc4-4730-506e-bff0-801eb4a831a8")) __declspec(novtable) IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> : impl_IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> {};
#endif

#ifndef WINRT_GENERIC_10c33301_e31c_5cce_b2a0_c1dc2d8d0e13
#define WINRT_GENERIC_10c33301_e31c_5cce_b2a0_c1dc2d8d0e13
template <> struct __declspec(uuid("10c33301-e31c-5cce-b2a0-c1dc2d8d0e13")) __declspec(novtable) TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::IInspectable> : impl_TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_8326a337_3c19_57a7_80ec_cca2ea62ef12
#define WINRT_GENERIC_8326a337_3c19_57a7_80ec_cca2ea62ef12
template <> struct __declspec(uuid("8326a337-3c19-57a7-80ec-cca2ea62ef12")) __declspec(novtable) TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> : impl_TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_d7ec83c4_a17b_51bf_8997_aa33b9102dc9
#define WINRT_GENERIC_d7ec83c4_a17b_51bf_8997_aa33b9102dc9
template <> struct __declspec(uuid("d7ec83c4-a17b-51bf-8997-aa33b9102dc9")) __declspec(novtable) IIterable<Windows::Networking::EndpointPair> : impl_IIterable<Windows::Networking::EndpointPair> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_c899ff9f_e6f5_5673_810c_04e2ff98704f
#define WINRT_GENERIC_c899ff9f_e6f5_5673_810c_04e2ff98704f
template <> struct __declspec(uuid("c899ff9f-e6f5-5673-810c-04e2ff98704f")) __declspec(novtable) IIterator<Windows::Networking::EndpointPair> : impl_IIterator<Windows::Networking::EndpointPair> {};
#endif

#ifndef WINRT_GENERIC_19889f5e_49ae_5e31_b059_083f9f1532c3
#define WINRT_GENERIC_19889f5e_49ae_5e31_b059_083f9f1532c3
template <> struct __declspec(uuid("19889f5e-49ae-5e31-b059-083f9f1532c3")) __declspec(novtable) IIterator<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> : impl_IIterator<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> {};
#endif

#ifndef WINRT_GENERIC_d9773b1a_a148_58bf_9c4b_afeac9be3ab4
#define WINRT_GENERIC_d9773b1a_a148_58bf_9c4b_afeac9be3ab4
template <> struct __declspec(uuid("d9773b1a-a148-58bf-9c4b-afeac9be3ab4")) __declspec(novtable) IIterable<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> : impl_IIterable<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b29de711_60b8_59da_8f4d_fc79d8ccd422
#define WINRT_GENERIC_b29de711_60b8_59da_8f4d_fc79d8ccd422
template <> struct __declspec(uuid("b29de711-60b8-59da-8f4d-fc79d8ccd422")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> : impl_AsyncOperationCompletedHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> {};
#endif

#ifndef WINRT_GENERIC_f505a3c8_4837_5e0e_8a4d_1e2af5477e5c
#define WINRT_GENERIC_f505a3c8_4837_5e0e_8a4d_1e2af5477e5c
template <> struct __declspec(uuid("f505a3c8-4837-5e0e-8a4d-1e2af5477e5c")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService> : impl_AsyncOperationCompletedHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService> {};
#endif

#ifndef WINRT_GENERIC_94cb9568_040a_5186_a3c9_52680ee17984
#define WINRT_GENERIC_94cb9568_040a_5186_a3c9_52680ee17984
template <> struct __declspec(uuid("94cb9568-040a-5186-a3c9-52680ee17984")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> : impl_AsyncOperationCompletedHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> {};
#endif


}

namespace Windows::Devices::WiFiDirect::Services {

template <typename D>
struct WINRT_EBO impl_IWiFiDirectService
{
    Windows::Storage::Streams::IBuffer RemoteServiceInfo() const;
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> SupportedConfigurationMethods() const;
    bool PreferGroupOwnerMode() const;
    void PreferGroupOwnerMode(bool value) const;
    Windows::Storage::Streams::IBuffer SessionInfo() const;
    void SessionInfo(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError ServiceError() const;
    event_token SessionDeferred(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> & handler) const;
    using SessionDeferred_revoker = event_revoker<IWiFiDirectService>;
    SessionDeferred_revoker SessionDeferred(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> & handler) const;
    void SessionDeferred(event_token token) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo> GetProvisioningInfoAsync(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod selectedConfigurationMethod) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> ConnectAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> ConnectAsync(hstring_ref pin) const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceAdvertiser
{
    hstring ServiceName() const;
    Windows::Foundation::Collections::IVector<hstring> ServiceNamePrefixes() const;
    Windows::Storage::Streams::IBuffer ServiceInfo() const;
    void ServiceInfo(const Windows::Storage::Streams::IBuffer & value) const;
    bool AutoAcceptSession() const;
    void AutoAcceptSession(bool value) const;
    bool PreferGroupOwnerMode() const;
    void PreferGroupOwnerMode(bool value) const;
    Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod> PreferredConfigurationMethods() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus ServiceStatus() const;
    void ServiceStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus value) const;
    uint32_t CustomServiceStatusCode() const;
    void CustomServiceStatusCode(uint32_t value) const;
    Windows::Storage::Streams::IBuffer DeferredSessionInfo() const;
    void DeferredSessionInfo(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus AdvertisementStatus() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError ServiceError() const;
    event_token SessionRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> & handler) const;
    using SessionRequested_revoker = event_revoker<IWiFiDirectServiceAdvertiser>;
    SessionRequested_revoker SessionRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> & handler) const;
    void SessionRequested(event_token token) const;
    event_token AutoAcceptSessionConnected(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> & handler) const;
    using AutoAcceptSessionConnected_revoker = event_revoker<IWiFiDirectServiceAdvertiser>;
    AutoAcceptSessionConnected_revoker AutoAcceptSessionConnected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> & handler) const;
    void AutoAcceptSessionConnected(event_token token) const;
    event_token AdvertisementStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::IInspectable> & handler) const;
    using AdvertisementStatusChanged_revoker = event_revoker<IWiFiDirectServiceAdvertiser>;
    AdvertisementStatusChanged_revoker AdvertisementStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::IInspectable> & handler) const;
    void AdvertisementStatusChanged(event_token token) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> ConnectAsync(const Windows::Devices::Enumeration::DeviceInformation & deviceInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession> ConnectAsync(const Windows::Devices::Enumeration::DeviceInformation & deviceInfo, hstring_ref pin) const;
    void Start() const;
    void Stop() const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceAdvertiserFactory
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser CreateWiFiDirectServiceAdvertiser(hstring_ref serviceName) const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession Session() const;
    Windows::Storage::Streams::IBuffer SessionInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceProvisioningInfo
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod SelectedConfigurationMethod() const;
    bool IsGroupFormationNeeded() const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceRemotePortAddedEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> EndpointPairs() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol Protocol() const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceSession
{
    hstring ServiceName() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus Status() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus ErrorStatus() const;
    uint32_t SessionId() const;
    uint32_t AdvertisementId() const;
    hstring ServiceAddress() const;
    hstring SessionAddress() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> GetConnectionEndpointPairs() const;
    event_token SessionStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::IInspectable> & handler) const;
    using SessionStatusChanged_revoker = event_revoker<IWiFiDirectServiceSession>;
    SessionStatusChanged_revoker SessionStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::IInspectable> & handler) const;
    void SessionStatusChanged(event_token token) const;
    Windows::Foundation::IAsyncAction AddStreamSocketListenerAsync(const Windows::Networking::Sockets::StreamSocketListener & value) const;
    Windows::Foundation::IAsyncAction AddDatagramSocketAsync(const Windows::Networking::Sockets::DatagramSocket & value) const;
    event_token RemotePortAdded(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> & handler) const;
    using RemotePortAdded_revoker = event_revoker<IWiFiDirectServiceSession>;
    RemotePortAdded_revoker RemotePortAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> & handler) const;
    void RemotePortAdded(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceSessionDeferredEventArgs
{
    Windows::Storage::Streams::IBuffer DeferredSessionInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceSessionRequest
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo ProvisioningInfo() const;
    Windows::Storage::Streams::IBuffer SessionInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceSessionRequestedEventArgs
{
    Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest GetSessionRequest() const;
};

template <typename D>
struct WINRT_EBO impl_IWiFiDirectServiceStatics
{
    hstring GetSelector(hstring_ref serviceName) const;
    hstring GetSelector(hstring_ref serviceName, const Windows::Storage::Streams::IBuffer & serviceInfoFilter) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> FromIdAsync(hstring_ref deviceId) const;
};

struct IWiFiDirectService :
    Windows::IInspectable,
    impl::consume<IWiFiDirectService>
{
    IWiFiDirectService(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectService>(m_ptr); }
};

struct IWiFiDirectServiceAdvertiser :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceAdvertiser>
{
    IWiFiDirectServiceAdvertiser(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceAdvertiser>(m_ptr); }
};

struct IWiFiDirectServiceAdvertiserFactory :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceAdvertiserFactory>
{
    IWiFiDirectServiceAdvertiserFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceAdvertiserFactory>(m_ptr); }
};

struct IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
{
    IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>(m_ptr); }
};

struct IWiFiDirectServiceProvisioningInfo :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceProvisioningInfo>
{
    IWiFiDirectServiceProvisioningInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceProvisioningInfo>(m_ptr); }
};

struct IWiFiDirectServiceRemotePortAddedEventArgs :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceRemotePortAddedEventArgs>
{
    IWiFiDirectServiceRemotePortAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceRemotePortAddedEventArgs>(m_ptr); }
};

struct IWiFiDirectServiceSession :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceSession>,
    impl::require<IWiFiDirectServiceSession, Windows::Foundation::IClosable>
{
    IWiFiDirectServiceSession(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceSession>(m_ptr); }
};

struct IWiFiDirectServiceSessionDeferredEventArgs :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceSessionDeferredEventArgs>
{
    IWiFiDirectServiceSessionDeferredEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceSessionDeferredEventArgs>(m_ptr); }
};

struct IWiFiDirectServiceSessionRequest :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceSessionRequest>,
    impl::require<IWiFiDirectServiceSessionRequest, Windows::Foundation::IClosable>
{
    IWiFiDirectServiceSessionRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceSessionRequest>(m_ptr); }
};

struct IWiFiDirectServiceSessionRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceSessionRequestedEventArgs>
{
    IWiFiDirectServiceSessionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceSessionRequestedEventArgs>(m_ptr); }
};

struct IWiFiDirectServiceStatics :
    Windows::IInspectable,
    impl::consume<IWiFiDirectServiceStatics>
{
    IWiFiDirectServiceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiDirectServiceStatics>(m_ptr); }
};

}

}
