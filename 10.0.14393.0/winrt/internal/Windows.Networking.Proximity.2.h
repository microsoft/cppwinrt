// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Networking.Proximity.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f6d1f700_49c2_52ae_8154_826f9908773c
#define WINRT_GENERIC_f6d1f700_49c2_52ae_8154_826f9908773c
template <> struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c")) __declspec(novtable) IMap<hstring, hstring> : impl_IMap<hstring, hstring> {};
#endif

#ifndef WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
#define WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
template <> struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716")) __declspec(novtable) IKeyValuePair<hstring, hstring> : impl_IKeyValuePair<hstring, hstring> {};
#endif

#ifndef WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
#define WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
template <> struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede")) __declspec(novtable) IMapView<hstring, hstring> : impl_IMapView<hstring, hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ad674bbf_6281_5943_9772_e0fd7664d4e1
#define WINRT_GENERIC_ad674bbf_6281_5943_9772_e0fd7664d4e1
template <> struct __declspec(uuid("ad674bbf-6281-5943-9772-e0fd7664d4e1")) __declspec(novtable) TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> : impl_TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> {};
#endif

#ifndef WINRT_GENERIC_f4979ea1_7e06_50a8_88dc_3f29524e4fdb
#define WINRT_GENERIC_f4979ea1_7e06_50a8_88dc_3f29524e4fdb
template <> struct __declspec(uuid("f4979ea1-7e06-50a8-88dc-3f29524e4fdb")) __declspec(novtable) TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> : impl_TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_2e5ad6fa_3ca6_5518_bd4d_fefc4535580e
#define WINRT_GENERIC_2e5ad6fa_3ca6_5518_bd4d_fefc4535580e
template <> struct __declspec(uuid("2e5ad6fa-3ca6-5518-bd4d-fefc4535580e")) __declspec(novtable) TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> : impl_TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_512c383c_8b29_5079_953e_8dee8f8a8224
#define WINRT_GENERIC_512c383c_8b29_5079_953e_8dee8f8a8224
template <> struct __declspec(uuid("512c383c-8b29-5079-953e-8dee8f8a8224")) __declspec(novtable) TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> : impl_TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_948f92bc_2a05_5c80_95f2_96fe345852cc
#define WINRT_GENERIC_948f92bc_2a05_5c80_95f2_96fe345852cc
template <> struct __declspec(uuid("948f92bc-2a05-5c80-95f2-96fe345852cc")) __declspec(novtable) IVectorView<Windows::Networking::Proximity::PeerInformation> : impl_IVectorView<Windows::Networking::Proximity::PeerInformation> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_fb3e3d3c_6fe5_5e27_a132_902247e2a93e
#define WINRT_GENERIC_fb3e3d3c_6fe5_5e27_a132_902247e2a93e
template <> struct __declspec(uuid("fb3e3d3c-6fe5-5e27-a132-902247e2a93e")) __declspec(novtable) IAsyncOperation<Windows::Networking::Sockets::StreamSocket> : impl_IAsyncOperation<Windows::Networking::Sockets::StreamSocket> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_eb6fe2c2_d6cd_5df0_a295_74c56ec58aab
#define WINRT_GENERIC_eb6fe2c2_d6cd_5df0_a295_74c56ec58aab
template <> struct __declspec(uuid("eb6fe2c2-d6cd-5df0-a295-74c56ec58aab")) __declspec(novtable) IIterator<Windows::Networking::Proximity::PeerInformation> : impl_IIterator<Windows::Networking::Proximity::PeerInformation> {};
#endif

#ifndef WINRT_GENERIC_917e1105_0647_5793_9d50_befe225f0f2f
#define WINRT_GENERIC_917e1105_0647_5793_9d50_befe225f0f2f
template <> struct __declspec(uuid("917e1105-0647-5793-9d50-befe225f0f2f")) __declspec(novtable) IIterable<Windows::Networking::Proximity::PeerInformation> : impl_IIterable<Windows::Networking::Proximity::PeerInformation> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_71b5d99e_3854_5e9a_b4dc_d1b58bf198fc
#define WINRT_GENERIC_71b5d99e_3854_5e9a_b4dc_d1b58bf198fc
template <> struct __declspec(uuid("71b5d99e-3854-5e9a-b4dc-d1b58bf198fc")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Networking::Sockets::StreamSocket> : impl_AsyncOperationCompletedHandler<Windows::Networking::Sockets::StreamSocket> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
#define WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
template <> struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a36ec4bc_607a_5180_a785_4042f8795c8b
#define WINRT_GENERIC_a36ec4bc_607a_5180_a785_4042f8795c8b
template <> struct __declspec(uuid("a36ec4bc-607a-5180-a785-4042f8795c8b")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
#define WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
template <> struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ecf90f2c_e3f4_5b62_a066_8b9c818fd41a
#define WINRT_GENERIC_ecf90f2c_e3f4_5b62_a066_8b9c818fd41a
template <> struct __declspec(uuid("ecf90f2c-e3f4-5b62-a066-8b9c818fd41a")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> {};
#endif


}

namespace Windows::Networking::Proximity {

template <typename D>
struct WINRT_EBO impl_IConnectionRequestedEventArgs
{
    Windows::Networking::Proximity::PeerInformation PeerInformation() const;
};

template <typename D>
struct WINRT_EBO impl_IPeerFinderStatics
{
    bool AllowBluetooth() const;
    void AllowBluetooth(bool value) const;
    bool AllowInfrastructure() const;
    void AllowInfrastructure(bool value) const;
    bool AllowWiFiDirect() const;
    void AllowWiFiDirect(bool value) const;
    hstring DisplayName() const;
    void DisplayName(hstring_ref value) const;
    Windows::Networking::Proximity::PeerDiscoveryTypes SupportedDiscoveryTypes() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> AlternateIdentities() const;
    void Start() const;
    void Start(hstring_ref peerMessage) const;
    void Stop() const;
    event_token TriggeredConnectionStateChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> & handler) const;
    using TriggeredConnectionStateChanged_revoker = event_revoker<IPeerFinderStatics>;
    TriggeredConnectionStateChanged_revoker TriggeredConnectionStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> & handler) const;
    void TriggeredConnectionStateChanged(event_token cookie) const;
    event_token ConnectionRequested(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> & handler) const;
    using ConnectionRequested_revoker = event_revoker<IPeerFinderStatics>;
    ConnectionRequested_revoker ConnectionRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> & handler) const;
    void ConnectionRequested(event_token cookie) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> FindAllPeersAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> ConnectAsync(const Windows::Networking::Proximity::PeerInformation & peerInformation) const;
};

template <typename D>
struct WINRT_EBO impl_IPeerFinderStatics2
{
    Windows::Networking::Proximity::PeerRole Role() const;
    void Role(Windows::Networking::Proximity::PeerRole value) const;
    Windows::Storage::Streams::IBuffer DiscoveryData() const;
    void DiscoveryData(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Networking::Proximity::PeerWatcher CreateWatcher() const;
};

template <typename D>
struct WINRT_EBO impl_IPeerInformation
{
    hstring DisplayName() const;
};

template <typename D>
struct WINRT_EBO impl_IPeerInformation3
{
    hstring Id() const;
    Windows::Storage::Streams::IBuffer DiscoveryData() const;
};

template <typename D>
struct WINRT_EBO impl_IPeerInformationWithHostAndService
{
    Windows::Networking::HostName HostName() const;
    hstring ServiceName() const;
};

template <typename D>
struct WINRT_EBO impl_IPeerWatcher
{
    event_token Added(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const;
    using Added_revoker = event_revoker<IPeerWatcher>;
    Added_revoker Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const;
    void Added(event_token token) const;
    event_token Removed(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const;
    using Removed_revoker = event_revoker<IPeerWatcher>;
    Removed_revoker Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const;
    void Removed(event_token token) const;
    event_token Updated(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const;
    using Updated_revoker = event_revoker<IPeerWatcher>;
    Updated_revoker Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const;
    void Updated(event_token token) const;
    event_token EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> & handler) const;
    using EnumerationCompleted_revoker = event_revoker<IPeerWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> & handler) const;
    void EnumerationCompleted(event_token token) const;
    event_token Stopped(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> & handler) const;
    using Stopped_revoker = event_revoker<IPeerWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> & handler) const;
    void Stopped(event_token token) const;
    Windows::Networking::Proximity::PeerWatcherStatus Status() const;
    void Start() const;
    void Stop() const;
};

template <typename D>
struct WINRT_EBO impl_IProximityDevice
{
    int64_t SubscribeForMessage(hstring_ref messageType, const Windows::Networking::Proximity::MessageReceivedHandler & messageReceivedHandler) const;
    int64_t PublishMessage(hstring_ref messageType, hstring_ref message) const;
    int64_t PublishMessage(hstring_ref messageType, hstring_ref message, const Windows::Networking::Proximity::MessageTransmittedHandler & messageTransmittedHandler) const;
    int64_t PublishBinaryMessage(hstring_ref messageType, const Windows::Storage::Streams::IBuffer & message) const;
    int64_t PublishBinaryMessage(hstring_ref messageType, const Windows::Storage::Streams::IBuffer & message, const Windows::Networking::Proximity::MessageTransmittedHandler & messageTransmittedHandler) const;
    int64_t PublishUriMessage(const Windows::Foundation::Uri & message) const;
    int64_t PublishUriMessage(const Windows::Foundation::Uri & message, const Windows::Networking::Proximity::MessageTransmittedHandler & messageTransmittedHandler) const;
    void StopSubscribingForMessage(int64_t subscriptionId) const;
    void StopPublishingMessage(int64_t messageId) const;
    event_token DeviceArrived(const Windows::Networking::Proximity::DeviceArrivedEventHandler & arrivedHandler) const;
    using DeviceArrived_revoker = event_revoker<IProximityDevice>;
    DeviceArrived_revoker DeviceArrived(auto_revoke_t, const Windows::Networking::Proximity::DeviceArrivedEventHandler & arrivedHandler) const;
    void DeviceArrived(event_token cookie) const;
    event_token DeviceDeparted(const Windows::Networking::Proximity::DeviceDepartedEventHandler & departedHandler) const;
    using DeviceDeparted_revoker = event_revoker<IProximityDevice>;
    DeviceDeparted_revoker DeviceDeparted(auto_revoke_t, const Windows::Networking::Proximity::DeviceDepartedEventHandler & departedHandler) const;
    void DeviceDeparted(event_token cookie) const;
    uint32_t MaxMessageBytes() const;
    uint64_t BitsPerSecond() const;
    hstring DeviceId() const;
};

template <typename D>
struct WINRT_EBO impl_IProximityDeviceStatics
{
    hstring GetDeviceSelector() const;
    Windows::Networking::Proximity::ProximityDevice GetDefault() const;
    Windows::Networking::Proximity::ProximityDevice FromId(hstring_ref deviceId) const;
};

template <typename D>
struct WINRT_EBO impl_IProximityMessage
{
    hstring MessageType() const;
    int64_t SubscriptionId() const;
    Windows::Storage::Streams::IBuffer Data() const;
    hstring DataAsString() const;
};

template <typename D>
struct WINRT_EBO impl_ITriggeredConnectionStateChangedEventArgs
{
    Windows::Networking::Proximity::TriggeredConnectState State() const;
    uint32_t Id() const;
    Windows::Networking::Sockets::StreamSocket Socket() const;
};

struct DeviceArrivedEventHandler : Windows::IUnknown
{
    DeviceArrivedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<DeviceArrivedEventHandler>(m_ptr); }
    template <typename L> DeviceArrivedEventHandler(L lambda);
    template <typename F> DeviceArrivedEventHandler (F * function);
    template <typename O, typename M> DeviceArrivedEventHandler(O * object, M method);
    void operator()(const Windows::Networking::Proximity::ProximityDevice & sender) const;
};

struct DeviceDepartedEventHandler : Windows::IUnknown
{
    DeviceDepartedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<DeviceDepartedEventHandler>(m_ptr); }
    template <typename L> DeviceDepartedEventHandler(L lambda);
    template <typename F> DeviceDepartedEventHandler (F * function);
    template <typename O, typename M> DeviceDepartedEventHandler(O * object, M method);
    void operator()(const Windows::Networking::Proximity::ProximityDevice & sender) const;
};

struct MessageReceivedHandler : Windows::IUnknown
{
    MessageReceivedHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<MessageReceivedHandler>(m_ptr); }
    template <typename L> MessageReceivedHandler(L lambda);
    template <typename F> MessageReceivedHandler (F * function);
    template <typename O, typename M> MessageReceivedHandler(O * object, M method);
    void operator()(const Windows::Networking::Proximity::ProximityDevice & sender, const Windows::Networking::Proximity::ProximityMessage & message) const;
};

struct MessageTransmittedHandler : Windows::IUnknown
{
    MessageTransmittedHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<MessageTransmittedHandler>(m_ptr); }
    template <typename L> MessageTransmittedHandler(L lambda);
    template <typename F> MessageTransmittedHandler (F * function);
    template <typename O, typename M> MessageTransmittedHandler(O * object, M method);
    void operator()(const Windows::Networking::Proximity::ProximityDevice & sender, int64_t messageId) const;
};

struct IConnectionRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IConnectionRequestedEventArgs>
{
    IConnectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IConnectionRequestedEventArgs>(m_ptr); }
};

struct IPeerFinderStatics :
    Windows::IInspectable,
    impl::consume<IPeerFinderStatics>
{
    IPeerFinderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPeerFinderStatics>(m_ptr); }
};

struct IPeerFinderStatics2 :
    Windows::IInspectable,
    impl::consume<IPeerFinderStatics2>
{
    IPeerFinderStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPeerFinderStatics2>(m_ptr); }
};

struct IPeerInformation :
    Windows::IInspectable,
    impl::consume<IPeerInformation>
{
    IPeerInformation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPeerInformation>(m_ptr); }
};

struct IPeerInformation3 :
    Windows::IInspectable,
    impl::consume<IPeerInformation3>
{
    IPeerInformation3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPeerInformation3>(m_ptr); }
};

struct IPeerInformationWithHostAndService :
    Windows::IInspectable,
    impl::consume<IPeerInformationWithHostAndService>
{
    IPeerInformationWithHostAndService(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPeerInformationWithHostAndService>(m_ptr); }
};

struct IPeerWatcher :
    Windows::IInspectable,
    impl::consume<IPeerWatcher>
{
    IPeerWatcher(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPeerWatcher>(m_ptr); }
};

struct IProximityDevice :
    Windows::IInspectable,
    impl::consume<IProximityDevice>
{
    IProximityDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProximityDevice>(m_ptr); }
};

struct IProximityDeviceStatics :
    Windows::IInspectable,
    impl::consume<IProximityDeviceStatics>
{
    IProximityDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProximityDeviceStatics>(m_ptr); }
};

struct IProximityMessage :
    Windows::IInspectable,
    impl::consume<IProximityMessage>
{
    IProximityMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProximityMessage>(m_ptr); }
};

struct ITriggeredConnectionStateChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ITriggeredConnectionStateChangedEventArgs>
{
    ITriggeredConnectionStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITriggeredConnectionStateChangedEventArgs>(m_ptr); }
};

}

}
