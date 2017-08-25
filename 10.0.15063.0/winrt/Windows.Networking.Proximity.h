// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Networking.Proximity.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> Windows::Networking::Proximity::PeerInformation consume_Windows_Networking_Proximity_IConnectionRequestedEventArgs<D>::PeerInformation() const
{
    Windows::Networking::Proximity::PeerInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IConnectionRequestedEventArgs)->get_PeerInformation(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::AllowBluetooth() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->get_AllowBluetooth(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::AllowBluetooth(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->put_AllowBluetooth(value));
}

template <typename D> bool consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::AllowInfrastructure() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->get_AllowInfrastructure(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::AllowInfrastructure(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->put_AllowInfrastructure(value));
}

template <typename D> bool consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::AllowWiFiDirect() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->get_AllowWiFiDirect(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::AllowWiFiDirect(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->put_AllowWiFiDirect(value));
}

template <typename D> hstring consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->put_DisplayName(get_abi(value)));
}

template <typename D> Windows::Networking::Proximity::PeerDiscoveryTypes consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::SupportedDiscoveryTypes() const
{
    Windows::Networking::Proximity::PeerDiscoveryTypes value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->get_SupportedDiscoveryTypes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::AlternateIdentities() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->get_AlternateIdentities(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->Start());
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::Start(param::hstring const& peerMessage) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->StartWithMessage(get_abi(peerMessage)));
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->Stop());
}

template <typename D> event_token consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::TriggeredConnectionStateChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->add_TriggeredConnectionStateChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IPeerFinderStatics> consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::TriggeredConnectionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IPeerFinderStatics>(this, &abi_t<Windows::Networking::Proximity::IPeerFinderStatics>::remove_TriggeredConnectionStateChanged, TriggeredConnectionStateChanged(handler));
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::TriggeredConnectionStateChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->remove_TriggeredConnectionStateChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::ConnectionRequested(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->add_ConnectionRequested(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IPeerFinderStatics> consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::ConnectionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IPeerFinderStatics>(this, &abi_t<Windows::Networking::Proximity::IPeerFinderStatics>::remove_ConnectionRequested, ConnectionRequested(handler));
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::ConnectionRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->remove_ConnectionRequested(get_abi(cookie)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::FindAllPeersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->FindAllPeersAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> consume_Windows_Networking_Proximity_IPeerFinderStatics<D>::ConnectAsync(Windows::Networking::Proximity::PeerInformation const& peerInformation) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics)->ConnectAsync(get_abi(peerInformation), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Networking::Proximity::PeerRole consume_Windows_Networking_Proximity_IPeerFinderStatics2<D>::Role() const
{
    Windows::Networking::Proximity::PeerRole value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics2)->get_Role(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics2<D>::Role(Windows::Networking::Proximity::PeerRole const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics2)->put_Role(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_Proximity_IPeerFinderStatics2<D>::DiscoveryData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics2)->get_DiscoveryData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerFinderStatics2<D>::DiscoveryData(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics2)->put_DiscoveryData(get_abi(value)));
}

template <typename D> Windows::Networking::Proximity::PeerWatcher consume_Windows_Networking_Proximity_IPeerFinderStatics2<D>::CreateWatcher() const
{
    Windows::Networking::Proximity::PeerWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerFinderStatics2)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> hstring consume_Windows_Networking_Proximity_IPeerInformation<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerInformation)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Proximity_IPeerInformation3<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerInformation3)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_Proximity_IPeerInformation3<D>::DiscoveryData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerInformation3)->get_DiscoveryData(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Proximity_IPeerInformationWithHostAndService<D>::HostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerInformationWithHostAndService)->get_HostName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Proximity_IPeerInformationWithHostAndService<D>::ServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerInformationWithHostAndService)->get_ServiceName(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Proximity_IPeerWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IPeerWatcher> consume_Windows_Networking_Proximity_IPeerWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IPeerWatcher>(this, &abi_t<Windows::Networking::Proximity::IPeerWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_Networking_Proximity_IPeerWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IPeerWatcher> consume_Windows_Networking_Proximity_IPeerWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IPeerWatcher>(this, &abi_t<Windows::Networking::Proximity::IPeerWatcher>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerWatcher<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Networking_Proximity_IPeerWatcher<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IPeerWatcher> consume_Windows_Networking_Proximity_IPeerWatcher<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IPeerWatcher>(this, &abi_t<Windows::Networking::Proximity::IPeerWatcher>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerWatcher<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Networking_Proximity_IPeerWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IPeerWatcher> consume_Windows_Networking_Proximity_IPeerWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IPeerWatcher>(this, &abi_t<Windows::Networking::Proximity::IPeerWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Networking_Proximity_IPeerWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IPeerWatcher> consume_Windows_Networking_Proximity_IPeerWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IPeerWatcher>(this, &abi_t<Windows::Networking::Proximity::IPeerWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> Windows::Networking::Proximity::PeerWatcherStatus consume_Windows_Networking_Proximity_IPeerWatcher<D>::Status() const
{
    Windows::Networking::Proximity::PeerWatcherStatus status{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->get_Status(put_abi(status)));
    return status;
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->Start());
}

template <typename D> void consume_Windows_Networking_Proximity_IPeerWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IPeerWatcher)->Stop());
}

template <typename D> int64_t consume_Windows_Networking_Proximity_IProximityDevice<D>::SubscribeForMessage(param::hstring const& messageType, Windows::Networking::Proximity::MessageReceivedHandler const& messageReceivedHandler) const
{
    int64_t subscriptionId{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->SubscribeForMessage(get_abi(messageType), get_abi(messageReceivedHandler), &subscriptionId));
    return subscriptionId;
}

template <typename D> int64_t consume_Windows_Networking_Proximity_IProximityDevice<D>::PublishMessage(param::hstring const& messageType, param::hstring const& message) const
{
    int64_t messageId{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->PublishMessage(get_abi(messageType), get_abi(message), &messageId));
    return messageId;
}

template <typename D> int64_t consume_Windows_Networking_Proximity_IProximityDevice<D>::PublishMessage(param::hstring const& messageType, param::hstring const& message, Windows::Networking::Proximity::MessageTransmittedHandler const& messageTransmittedHandler) const
{
    int64_t messageId{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->PublishMessageWithCallback(get_abi(messageType), get_abi(message), get_abi(messageTransmittedHandler), &messageId));
    return messageId;
}

template <typename D> int64_t consume_Windows_Networking_Proximity_IProximityDevice<D>::PublishBinaryMessage(param::hstring const& messageType, Windows::Storage::Streams::IBuffer const& message) const
{
    int64_t messageId{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->PublishBinaryMessage(get_abi(messageType), get_abi(message), &messageId));
    return messageId;
}

template <typename D> int64_t consume_Windows_Networking_Proximity_IProximityDevice<D>::PublishBinaryMessage(param::hstring const& messageType, Windows::Storage::Streams::IBuffer const& message, Windows::Networking::Proximity::MessageTransmittedHandler const& messageTransmittedHandler) const
{
    int64_t messageId{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->PublishBinaryMessageWithCallback(get_abi(messageType), get_abi(message), get_abi(messageTransmittedHandler), &messageId));
    return messageId;
}

template <typename D> int64_t consume_Windows_Networking_Proximity_IProximityDevice<D>::PublishUriMessage(Windows::Foundation::Uri const& message) const
{
    int64_t messageId{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->PublishUriMessage(get_abi(message), &messageId));
    return messageId;
}

template <typename D> int64_t consume_Windows_Networking_Proximity_IProximityDevice<D>::PublishUriMessage(Windows::Foundation::Uri const& message, Windows::Networking::Proximity::MessageTransmittedHandler const& messageTransmittedHandler) const
{
    int64_t messageId{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->PublishUriMessageWithCallback(get_abi(message), get_abi(messageTransmittedHandler), &messageId));
    return messageId;
}

template <typename D> void consume_Windows_Networking_Proximity_IProximityDevice<D>::StopSubscribingForMessage(int64_t subscriptionId) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->StopSubscribingForMessage(subscriptionId));
}

template <typename D> void consume_Windows_Networking_Proximity_IProximityDevice<D>::StopPublishingMessage(int64_t messageId) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->StopPublishingMessage(messageId));
}

template <typename D> event_token consume_Windows_Networking_Proximity_IProximityDevice<D>::DeviceArrived(Windows::Networking::Proximity::DeviceArrivedEventHandler const& arrivedHandler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->add_DeviceArrived(get_abi(arrivedHandler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IProximityDevice> consume_Windows_Networking_Proximity_IProximityDevice<D>::DeviceArrived(auto_revoke_t, Windows::Networking::Proximity::DeviceArrivedEventHandler const& arrivedHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IProximityDevice>(this, &abi_t<Windows::Networking::Proximity::IProximityDevice>::remove_DeviceArrived, DeviceArrived(arrivedHandler));
}

template <typename D> void consume_Windows_Networking_Proximity_IProximityDevice<D>::DeviceArrived(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->remove_DeviceArrived(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Networking_Proximity_IProximityDevice<D>::DeviceDeparted(Windows::Networking::Proximity::DeviceDepartedEventHandler const& departedHandler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->add_DeviceDeparted(get_abi(departedHandler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::Proximity::IProximityDevice> consume_Windows_Networking_Proximity_IProximityDevice<D>::DeviceDeparted(auto_revoke_t, Windows::Networking::Proximity::DeviceDepartedEventHandler const& departedHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Proximity::IProximityDevice>(this, &abi_t<Windows::Networking::Proximity::IProximityDevice>::remove_DeviceDeparted, DeviceDeparted(departedHandler));
}

template <typename D> void consume_Windows_Networking_Proximity_IProximityDevice<D>::DeviceDeparted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->remove_DeviceDeparted(get_abi(cookie)));
}

template <typename D> uint32_t consume_Windows_Networking_Proximity_IProximityDevice<D>::MaxMessageBytes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->get_MaxMessageBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Proximity_IProximityDevice<D>::BitsPerSecond() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->get_BitsPerSecond(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Proximity_IProximityDevice<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDevice)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Proximity_IProximityDeviceStatics<D>::GetDeviceSelector() const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDeviceStatics)->GetDeviceSelector(put_abi(selector)));
    return selector;
}

template <typename D> Windows::Networking::Proximity::ProximityDevice consume_Windows_Networking_Proximity_IProximityDeviceStatics<D>::GetDefault() const
{
    Windows::Networking::Proximity::ProximityDevice proximityDevice{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDeviceStatics)->GetDefault(put_abi(proximityDevice)));
    return proximityDevice;
}

template <typename D> Windows::Networking::Proximity::ProximityDevice consume_Windows_Networking_Proximity_IProximityDeviceStatics<D>::FromId(param::hstring const& deviceId) const
{
    Windows::Networking::Proximity::ProximityDevice proximityDevice{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityDeviceStatics)->FromId(get_abi(deviceId), put_abi(proximityDevice)));
    return proximityDevice;
}

template <typename D> hstring consume_Windows_Networking_Proximity_IProximityMessage<D>::MessageType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityMessage)->get_MessageType(put_abi(value)));
    return value;
}

template <typename D> int64_t consume_Windows_Networking_Proximity_IProximityMessage<D>::SubscriptionId() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityMessage)->get_SubscriptionId(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_Proximity_IProximityMessage<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityMessage)->get_Data(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Proximity_IProximityMessage<D>::DataAsString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::IProximityMessage)->get_DataAsString(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Proximity::TriggeredConnectState consume_Windows_Networking_Proximity_ITriggeredConnectionStateChangedEventArgs<D>::State() const
{
    Windows::Networking::Proximity::TriggeredConnectState value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Proximity_ITriggeredConnectionStateChangedEventArgs<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs)->get_Id(&value));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocket consume_Windows_Networking_Proximity_ITriggeredConnectionStateChangedEventArgs<D>::Socket() const
{
    Windows::Networking::Sockets::StreamSocket value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs)->get_Socket(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Networking::Proximity::DeviceArrivedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Networking::Proximity::DeviceArrivedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Networking::Proximity::DeviceArrivedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Networking::Proximity::ProximityDevice const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Networking::Proximity::DeviceDepartedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Networking::Proximity::DeviceDepartedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Networking::Proximity::DeviceDepartedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Networking::Proximity::ProximityDevice const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Networking::Proximity::MessageReceivedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Networking::Proximity::MessageReceivedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Networking::Proximity::MessageReceivedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* message) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Networking::Proximity::ProximityDevice const*>(&sender), *reinterpret_cast<Windows::Networking::Proximity::ProximityMessage const*>(&message));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Networking::Proximity::MessageTransmittedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Networking::Proximity::MessageTransmittedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Networking::Proximity::MessageTransmittedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, int64_t messageId) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Networking::Proximity::ProximityDevice const*>(&sender), messageId);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Networking::Proximity::IConnectionRequestedEventArgs> : produce_base<D, Windows::Networking::Proximity::IConnectionRequestedEventArgs>
{
    HRESULT __stdcall get_PeerInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeerInformation());
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
struct produce<D, Windows::Networking::Proximity::IPeerFinderStatics> : produce_base<D, Windows::Networking::Proximity::IPeerFinderStatics>
{
    HRESULT __stdcall get_AllowBluetooth(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowBluetooth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowBluetooth(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowBluetooth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowInfrastructure(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowInfrastructure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowInfrastructure(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowInfrastructure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowWiFiDirect(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowWiFiDirect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowWiFiDirect(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowWiFiDirect(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDiscoveryTypes(abi_t<Windows::Networking::Proximity::PeerDiscoveryTypes>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedDiscoveryTypes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateIdentities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateIdentities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall StartWithMessage(HSTRING peerMessage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start(*reinterpret_cast<hstring const*>(&peerMessage));
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

    HRESULT __stdcall add_TriggeredConnectionStateChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().TriggeredConnectionStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TriggeredConnectionStateChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriggeredConnectionStateChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ConnectionRequested(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ConnectionRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionRequested(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConnectionRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllPeersAsync(::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FindAllPeersAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsync(::IUnknown* peerInformation, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().ConnectAsync(*reinterpret_cast<Windows::Networking::Proximity::PeerInformation const*>(&peerInformation)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Proximity::IPeerFinderStatics2> : produce_base<D, Windows::Networking::Proximity::IPeerFinderStatics2>
{
    HRESULT __stdcall get_Role(abi_t<Windows::Networking::Proximity::PeerRole>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Role());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Role(abi_t<Windows::Networking::Proximity::PeerRole> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Role(*reinterpret_cast<Windows::Networking::Proximity::PeerRole const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiscoveryData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiscoveryData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DiscoveryData(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiscoveryData(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcher(::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Proximity::IPeerInformation> : produce_base<D, Windows::Networking::Proximity::IPeerInformation>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
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
struct produce<D, Windows::Networking::Proximity::IPeerInformation3> : produce_base<D, Windows::Networking::Proximity::IPeerInformation3>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiscoveryData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiscoveryData());
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
struct produce<D, Windows::Networking::Proximity::IPeerInformationWithHostAndService> : produce_base<D, Windows::Networking::Proximity::IPeerInformationWithHostAndService>
{
    HRESULT __stdcall get_HostName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Networking::Proximity::IPeerWatcher> : produce_base<D, Windows::Networking::Proximity::IPeerWatcher>
{
    HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Networking::Proximity::PeerWatcherStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::Networking::Proximity::IProximityDevice> : produce_base<D, Windows::Networking::Proximity::IProximityDevice>
{
    HRESULT __stdcall SubscribeForMessage(HSTRING messageType, ::IUnknown* messageReceivedHandler, int64_t* subscriptionId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *subscriptionId = detach_abi(this->shim().SubscribeForMessage(*reinterpret_cast<hstring const*>(&messageType), *reinterpret_cast<Windows::Networking::Proximity::MessageReceivedHandler const*>(&messageReceivedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PublishMessage(HSTRING messageType, HSTRING message, int64_t* messageId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *messageId = detach_abi(this->shim().PublishMessage(*reinterpret_cast<hstring const*>(&messageType), *reinterpret_cast<hstring const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PublishMessageWithCallback(HSTRING messageType, HSTRING message, ::IUnknown* messageTransmittedHandler, int64_t* messageId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *messageId = detach_abi(this->shim().PublishMessage(*reinterpret_cast<hstring const*>(&messageType), *reinterpret_cast<hstring const*>(&message), *reinterpret_cast<Windows::Networking::Proximity::MessageTransmittedHandler const*>(&messageTransmittedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PublishBinaryMessage(HSTRING messageType, ::IUnknown* message, int64_t* messageId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *messageId = detach_abi(this->shim().PublishBinaryMessage(*reinterpret_cast<hstring const*>(&messageType), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PublishBinaryMessageWithCallback(HSTRING messageType, ::IUnknown* message, ::IUnknown* messageTransmittedHandler, int64_t* messageId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *messageId = detach_abi(this->shim().PublishBinaryMessage(*reinterpret_cast<hstring const*>(&messageType), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&message), *reinterpret_cast<Windows::Networking::Proximity::MessageTransmittedHandler const*>(&messageTransmittedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PublishUriMessage(::IUnknown* message, int64_t* messageId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *messageId = detach_abi(this->shim().PublishUriMessage(*reinterpret_cast<Windows::Foundation::Uri const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PublishUriMessageWithCallback(::IUnknown* message, ::IUnknown* messageTransmittedHandler, int64_t* messageId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *messageId = detach_abi(this->shim().PublishUriMessage(*reinterpret_cast<Windows::Foundation::Uri const*>(&message), *reinterpret_cast<Windows::Networking::Proximity::MessageTransmittedHandler const*>(&messageTransmittedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopSubscribingForMessage(int64_t subscriptionId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopSubscribingForMessage(subscriptionId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopPublishingMessage(int64_t messageId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopPublishingMessage(messageId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeviceArrived(::IUnknown* arrivedHandler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().DeviceArrived(*reinterpret_cast<Windows::Networking::Proximity::DeviceArrivedEventHandler const*>(&arrivedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeviceArrived(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeviceArrived(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeviceDeparted(::IUnknown* departedHandler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().DeviceDeparted(*reinterpret_cast<Windows::Networking::Proximity::DeviceDepartedEventHandler const*>(&departedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeviceDeparted(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeviceDeparted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMessageBytes(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxMessageBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitsPerSecond(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
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
struct produce<D, Windows::Networking::Proximity::IProximityDeviceStatics> : produce_base<D, Windows::Networking::Proximity::IProximityDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefault(::IUnknown** proximityDevice) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *proximityDevice = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *proximityDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** proximityDevice) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *proximityDevice = detach_abi(this->shim().FromId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *proximityDevice = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Proximity::IProximityMessage> : produce_base<D, Windows::Networking::Proximity::IProximityMessage>
{
    HRESULT __stdcall get_MessageType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscriptionId(int64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubscriptionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataAsString(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataAsString());
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
struct produce<D, Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs> : produce_base<D, Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs>
{
    HRESULT __stdcall get_State(abi_t<Windows::Networking::Proximity::TriggeredConnectState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Socket(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Socket());
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

WINRT_EXPORT namespace winrt::Windows::Networking::Proximity {

inline bool PeerFinder::AllowBluetooth()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().AllowBluetooth();
}

inline void PeerFinder::AllowBluetooth(bool value)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().AllowBluetooth(value);
}

inline bool PeerFinder::AllowInfrastructure()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().AllowInfrastructure();
}

inline void PeerFinder::AllowInfrastructure(bool value)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().AllowInfrastructure(value);
}

inline bool PeerFinder::AllowWiFiDirect()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().AllowWiFiDirect();
}

inline void PeerFinder::AllowWiFiDirect(bool value)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().AllowWiFiDirect(value);
}

inline hstring PeerFinder::DisplayName()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().DisplayName();
}

inline void PeerFinder::DisplayName(param::hstring const& value)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().DisplayName(value);
}

inline Windows::Networking::Proximity::PeerDiscoveryTypes PeerFinder::SupportedDiscoveryTypes()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().SupportedDiscoveryTypes();
}

inline Windows::Foundation::Collections::IMap<hstring, hstring> PeerFinder::AlternateIdentities()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().AlternateIdentities();
}

inline void PeerFinder::Start()
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().Start();
}

inline void PeerFinder::Start(param::hstring const& peerMessage)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().Start(peerMessage);
}

inline void PeerFinder::Stop()
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().Stop();
}

inline event_token PeerFinder::TriggeredConnectionStateChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> const& handler)
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().TriggeredConnectionStateChanged(handler);
}

inline factory_event_revoker<Windows::Networking::Proximity::IPeerFinderStatics> PeerFinder::TriggeredConnectionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> const& handler)
{
    auto factory = get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>();
    return { factory, &abi_t<Windows::Networking::Proximity::IPeerFinderStatics>::remove_TriggeredConnectionStateChanged, factory.TriggeredConnectionStateChanged(handler) };
}

inline void PeerFinder::TriggeredConnectionStateChanged(event_token const& cookie)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().TriggeredConnectionStateChanged(cookie);
}

inline event_token PeerFinder::ConnectionRequested(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> const& handler)
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().ConnectionRequested(handler);
}

inline factory_event_revoker<Windows::Networking::Proximity::IPeerFinderStatics> PeerFinder::ConnectionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> const& handler)
{
    auto factory = get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>();
    return { factory, &abi_t<Windows::Networking::Proximity::IPeerFinderStatics>::remove_ConnectionRequested, factory.ConnectionRequested(handler) };
}

inline void PeerFinder::ConnectionRequested(event_token const& cookie)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().ConnectionRequested(cookie);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> PeerFinder::FindAllPeersAsync()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().FindAllPeersAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> PeerFinder::ConnectAsync(Windows::Networking::Proximity::PeerInformation const& peerInformation)
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics>().ConnectAsync(peerInformation);
}

inline Windows::Networking::Proximity::PeerRole PeerFinder::Role()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics2>().Role();
}

inline void PeerFinder::Role(Windows::Networking::Proximity::PeerRole const& value)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics2>().Role(value);
}

inline Windows::Storage::Streams::IBuffer PeerFinder::DiscoveryData()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics2>().DiscoveryData();
}

inline void PeerFinder::DiscoveryData(Windows::Storage::Streams::IBuffer const& value)
{
    get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics2>().DiscoveryData(value);
}

inline Windows::Networking::Proximity::PeerWatcher PeerFinder::CreateWatcher()
{
    return get_activation_factory<PeerFinder, Windows::Networking::Proximity::IPeerFinderStatics2>().CreateWatcher();
}

inline hstring ProximityDevice::GetDeviceSelector()
{
    return get_activation_factory<ProximityDevice, Windows::Networking::Proximity::IProximityDeviceStatics>().GetDeviceSelector();
}

inline Windows::Networking::Proximity::ProximityDevice ProximityDevice::GetDefault()
{
    return get_activation_factory<ProximityDevice, Windows::Networking::Proximity::IProximityDeviceStatics>().GetDefault();
}

inline Windows::Networking::Proximity::ProximityDevice ProximityDevice::FromId(param::hstring const& deviceId)
{
    return get_activation_factory<ProximityDevice, Windows::Networking::Proximity::IProximityDeviceStatics>().FromId(deviceId);
}

template <typename L> DeviceArrivedEventHandler::DeviceArrivedEventHandler(L handler) :
    DeviceArrivedEventHandler(impl::make_delegate<DeviceArrivedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DeviceArrivedEventHandler::DeviceArrivedEventHandler(F* handler) :
    DeviceArrivedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> DeviceArrivedEventHandler::DeviceArrivedEventHandler(O* object, M method) :
    DeviceArrivedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void DeviceArrivedEventHandler::operator()(Windows::Networking::Proximity::ProximityDevice const& sender) const
{
    check_hresult((*(abi_t<DeviceArrivedEventHandler>**)this)->Invoke(get_abi(sender)));
}

template <typename L> DeviceDepartedEventHandler::DeviceDepartedEventHandler(L handler) :
    DeviceDepartedEventHandler(impl::make_delegate<DeviceDepartedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DeviceDepartedEventHandler::DeviceDepartedEventHandler(F* handler) :
    DeviceDepartedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> DeviceDepartedEventHandler::DeviceDepartedEventHandler(O* object, M method) :
    DeviceDepartedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void DeviceDepartedEventHandler::operator()(Windows::Networking::Proximity::ProximityDevice const& sender) const
{
    check_hresult((*(abi_t<DeviceDepartedEventHandler>**)this)->Invoke(get_abi(sender)));
}

template <typename L> MessageReceivedHandler::MessageReceivedHandler(L handler) :
    MessageReceivedHandler(impl::make_delegate<MessageReceivedHandler>(std::forward<L>(handler)))
{}

template <typename F> MessageReceivedHandler::MessageReceivedHandler(F* handler) :
    MessageReceivedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> MessageReceivedHandler::MessageReceivedHandler(O* object, M method) :
    MessageReceivedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void MessageReceivedHandler::operator()(Windows::Networking::Proximity::ProximityDevice const& sender, Windows::Networking::Proximity::ProximityMessage const& message) const
{
    check_hresult((*(abi_t<MessageReceivedHandler>**)this)->Invoke(get_abi(sender), get_abi(message)));
}

template <typename L> MessageTransmittedHandler::MessageTransmittedHandler(L handler) :
    MessageTransmittedHandler(impl::make_delegate<MessageTransmittedHandler>(std::forward<L>(handler)))
{}

template <typename F> MessageTransmittedHandler::MessageTransmittedHandler(F* handler) :
    MessageTransmittedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> MessageTransmittedHandler::MessageTransmittedHandler(O* object, M method) :
    MessageTransmittedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void MessageTransmittedHandler::operator()(Windows::Networking::Proximity::ProximityDevice const& sender, int64_t messageId) const
{
    check_hresult((*(abi_t<MessageTransmittedHandler>**)this)->Invoke(get_abi(sender), messageId));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::Proximity::IConnectionRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IConnectionRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IPeerFinderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IPeerFinderStatics> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IPeerFinderStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IPeerFinderStatics2> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IPeerInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IPeerInformation> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IPeerInformation3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IPeerInformation3> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IPeerInformationWithHostAndService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IPeerInformationWithHostAndService> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IPeerWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IPeerWatcher> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IProximityDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IProximityDevice> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IProximityDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IProximityDeviceStatics> {};

template<> struct hash<winrt::Windows::Networking::Proximity::IProximityMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::IProximityMessage> {};

template<> struct hash<winrt::Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::Proximity::ConnectionRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::ConnectionRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::Proximity::PeerFinder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::PeerFinder> {};

template<> struct hash<winrt::Windows::Networking::Proximity::PeerInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::PeerInformation> {};

template<> struct hash<winrt::Windows::Networking::Proximity::PeerWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::PeerWatcher> {};

template<> struct hash<winrt::Windows::Networking::Proximity::ProximityDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::ProximityDevice> {};

template<> struct hash<winrt::Windows::Networking::Proximity::ProximityMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::ProximityMessage> {};

template<> struct hash<winrt::Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> {};

}

WINRT_WARNING_POP
