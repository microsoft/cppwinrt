// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Networking.Proximity.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Networking.Sockets.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::Proximity {

struct __declspec(uuid("efa9da69-f6e1-49c9-a49e-8e0fc58fb911")) __declspec(novtable) DeviceArrivedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Networking::Proximity::IProximityDevice * sender) = 0;
};

struct __declspec(uuid("efa9da69-f6e2-49c9-a49e-8e0fc58fb911")) __declspec(novtable) DeviceDepartedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Networking::Proximity::IProximityDevice * sender) = 0;
};

struct __declspec(uuid("eb6891ae-4f1e-4c66-bd0d-46924a942e08")) __declspec(novtable) IConnectionRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PeerInformation(Windows::Networking::Proximity::IPeerInformation ** value) = 0;
};

struct __declspec(uuid("914b3b61-f6e1-47c4-a14c-148a1903d0c6")) __declspec(novtable) IPeerFinderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowBluetooth(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowBluetooth(bool value) = 0;
    virtual HRESULT __stdcall get_AllowInfrastructure(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowInfrastructure(bool value) = 0;
    virtual HRESULT __stdcall get_AllowWiFiDirect(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowWiFiDirect(bool value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DisplayName(hstring value) = 0;
    virtual HRESULT __stdcall get_SupportedDiscoveryTypes(winrt::Windows::Networking::Proximity::PeerDiscoveryTypes * value) = 0;
    virtual HRESULT __stdcall get_AlternateIdentities(Windows::Foundation::Collections::IMap<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_StartWithMessage(hstring peerMessage) = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall add_TriggeredConnectionStateChanged(Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_TriggeredConnectionStateChanged(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ConnectionRequested(Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ConnectionRequested(event_token cookie) = 0;
    virtual HRESULT __stdcall abi_FindAllPeersAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_ConnectAsync(Windows::Networking::Proximity::IPeerInformation * peerInformation, Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> ** asyncOp) = 0;
};

struct __declspec(uuid("d6e73c65-fdd0-4b0b-9312-866408935d82")) __declspec(novtable) IPeerFinderStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Role(winrt::Windows::Networking::Proximity::PeerRole * value) = 0;
    virtual HRESULT __stdcall put_Role(winrt::Windows::Networking::Proximity::PeerRole value) = 0;
    virtual HRESULT __stdcall get_DiscoveryData(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall put_DiscoveryData(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall abi_CreateWatcher(Windows::Networking::Proximity::IPeerWatcher ** watcher) = 0;
};

struct __declspec(uuid("20024f08-9fff-45f4-b6e9-408b2ebef373")) __declspec(novtable) IPeerInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
};

struct __declspec(uuid("b20f612a-dbd0-40f8-95bd-2d4209c7836f")) __declspec(novtable) IPeerInformation3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_DiscoveryData(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("ecc7ccad-1b70-4e8b-92db-bbe781419308")) __declspec(novtable) IPeerInformationWithHostAndService : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HostName(Windows::Networking::IHostName ** value) = 0;
    virtual HRESULT __stdcall get_ServiceName(hstring * value) = 0;
};

struct __declspec(uuid("3cee21f8-2fa6-4679-9691-03c94a420f34")) __declspec(novtable) IPeerWatcher : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Added(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
    virtual HRESULT __stdcall add_Updated(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Updated(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::Proximity::PeerWatcherStatus * status) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
};

struct __declspec(uuid("efa8a552-f6e1-4329-a0fc-ab6b0fd28262")) __declspec(novtable) IProximityDevice : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SubscribeForMessage(hstring messageType, Windows::Networking::Proximity::MessageReceivedHandler * messageReceivedHandler, int64_t * subscriptionId) = 0;
    virtual HRESULT __stdcall abi_PublishMessage(hstring messageType, hstring message, int64_t * messageId) = 0;
    virtual HRESULT __stdcall abi_PublishMessageWithCallback(hstring messageType, hstring message, Windows::Networking::Proximity::MessageTransmittedHandler * messageTransmittedHandler, int64_t * messageId) = 0;
    virtual HRESULT __stdcall abi_PublishBinaryMessage(hstring messageType, Windows::Storage::Streams::IBuffer * message, int64_t * messageId) = 0;
    virtual HRESULT __stdcall abi_PublishBinaryMessageWithCallback(hstring messageType, Windows::Storage::Streams::IBuffer * message, Windows::Networking::Proximity::MessageTransmittedHandler * messageTransmittedHandler, int64_t * messageId) = 0;
    virtual HRESULT __stdcall abi_PublishUriMessage(Windows::Foundation::IUriRuntimeClass * message, int64_t * messageId) = 0;
    virtual HRESULT __stdcall abi_PublishUriMessageWithCallback(Windows::Foundation::IUriRuntimeClass * message, Windows::Networking::Proximity::MessageTransmittedHandler * messageTransmittedHandler, int64_t * messageId) = 0;
    virtual HRESULT __stdcall abi_StopSubscribingForMessage(int64_t subscriptionId) = 0;
    virtual HRESULT __stdcall abi_StopPublishingMessage(int64_t messageId) = 0;
    virtual HRESULT __stdcall add_DeviceArrived(Windows::Networking::Proximity::DeviceArrivedEventHandler * arrivedHandler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_DeviceArrived(event_token cookie) = 0;
    virtual HRESULT __stdcall add_DeviceDeparted(Windows::Networking::Proximity::DeviceDepartedEventHandler * departedHandler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_DeviceDeparted(event_token cookie) = 0;
    virtual HRESULT __stdcall get_MaxMessageBytes(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_BitsPerSecond(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
};

struct __declspec(uuid("914ba01d-f6e1-47c4-a14c-148a1903d0c6")) __declspec(novtable) IProximityDeviceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * selector) = 0;
    virtual HRESULT __stdcall abi_GetDefault(Windows::Networking::Proximity::IProximityDevice ** proximityDevice) = 0;
    virtual HRESULT __stdcall abi_FromId(hstring deviceId, Windows::Networking::Proximity::IProximityDevice ** proximityDevice) = 0;
};

struct __declspec(uuid("efab0782-f6e1-4675-a045-d8e320c24808")) __declspec(novtable) IProximityMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MessageType(hstring * value) = 0;
    virtual HRESULT __stdcall get_SubscriptionId(int64_t * value) = 0;
    virtual HRESULT __stdcall get_Data(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_DataAsString(hstring * value) = 0;
};

struct __declspec(uuid("c6a780ad-f6e1-4d54-96e2-33f620bca88a")) __declspec(novtable) ITriggeredConnectionStateChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Networking::Proximity::TriggeredConnectState * value) = 0;
    virtual HRESULT __stdcall get_Id(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Socket(Windows::Networking::Sockets::IStreamSocket ** value) = 0;
};

struct __declspec(uuid("efab0782-f6e2-4675-a045-d8e320c24808")) __declspec(novtable) MessageReceivedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Networking::Proximity::IProximityDevice * sender, Windows::Networking::Proximity::IProximityMessage * message) = 0;
};

struct __declspec(uuid("efaa0b4a-f6e2-4d7d-856c-78fc8efc021e")) __declspec(novtable) MessageTransmittedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Networking::Proximity::IProximityDevice * sender, int64_t messageId) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Networking::Proximity::ConnectionRequestedEventArgs> { using default_interface = Windows::Networking::Proximity::IConnectionRequestedEventArgs; };
template <> struct traits<Windows::Networking::Proximity::PeerInformation> { using default_interface = Windows::Networking::Proximity::IPeerInformation; };
template <> struct traits<Windows::Networking::Proximity::PeerWatcher> { using default_interface = Windows::Networking::Proximity::IPeerWatcher; };
template <> struct traits<Windows::Networking::Proximity::ProximityDevice> { using default_interface = Windows::Networking::Proximity::IProximityDevice; };
template <> struct traits<Windows::Networking::Proximity::ProximityMessage> { using default_interface = Windows::Networking::Proximity::IProximityMessage; };
template <> struct traits<Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> { using default_interface = Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs; };

}

namespace Windows::Networking::Proximity {

template <typename T> struct impl_IConnectionRequestedEventArgs;
template <typename T> struct impl_IPeerFinderStatics;
template <typename T> struct impl_IPeerFinderStatics2;
template <typename T> struct impl_IPeerInformation;
template <typename T> struct impl_IPeerInformation3;
template <typename T> struct impl_IPeerInformationWithHostAndService;
template <typename T> struct impl_IPeerWatcher;
template <typename T> struct impl_IProximityDevice;
template <typename T> struct impl_IProximityDeviceStatics;
template <typename T> struct impl_IProximityMessage;
template <typename T> struct impl_ITriggeredConnectionStateChangedEventArgs;
template <typename T> struct impl_DeviceArrivedEventHandler;
template <typename T> struct impl_DeviceDepartedEventHandler;
template <typename T> struct impl_MessageReceivedHandler;
template <typename T> struct impl_MessageTransmittedHandler;

}

namespace impl {

template <> struct traits<Windows::Networking::Proximity::DeviceArrivedEventHandler>
{
    using abi = ABI::Windows::Networking::Proximity::DeviceArrivedEventHandler;
};

template <> struct traits<Windows::Networking::Proximity::DeviceDepartedEventHandler>
{
    using abi = ABI::Windows::Networking::Proximity::DeviceDepartedEventHandler;
};

template <> struct traits<Windows::Networking::Proximity::IConnectionRequestedEventArgs>
{
    using abi = ABI::Windows::Networking::Proximity::IConnectionRequestedEventArgs;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IConnectionRequestedEventArgs<D>;
};

template <> struct traits<Windows::Networking::Proximity::IPeerFinderStatics>
{
    using abi = ABI::Windows::Networking::Proximity::IPeerFinderStatics;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IPeerFinderStatics<D>;
};

template <> struct traits<Windows::Networking::Proximity::IPeerFinderStatics2>
{
    using abi = ABI::Windows::Networking::Proximity::IPeerFinderStatics2;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IPeerFinderStatics2<D>;
};

template <> struct traits<Windows::Networking::Proximity::IPeerInformation>
{
    using abi = ABI::Windows::Networking::Proximity::IPeerInformation;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IPeerInformation<D>;
};

template <> struct traits<Windows::Networking::Proximity::IPeerInformation3>
{
    using abi = ABI::Windows::Networking::Proximity::IPeerInformation3;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IPeerInformation3<D>;
};

template <> struct traits<Windows::Networking::Proximity::IPeerInformationWithHostAndService>
{
    using abi = ABI::Windows::Networking::Proximity::IPeerInformationWithHostAndService;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IPeerInformationWithHostAndService<D>;
};

template <> struct traits<Windows::Networking::Proximity::IPeerWatcher>
{
    using abi = ABI::Windows::Networking::Proximity::IPeerWatcher;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IPeerWatcher<D>;
};

template <> struct traits<Windows::Networking::Proximity::IProximityDevice>
{
    using abi = ABI::Windows::Networking::Proximity::IProximityDevice;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IProximityDevice<D>;
};

template <> struct traits<Windows::Networking::Proximity::IProximityDeviceStatics>
{
    using abi = ABI::Windows::Networking::Proximity::IProximityDeviceStatics;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IProximityDeviceStatics<D>;
};

template <> struct traits<Windows::Networking::Proximity::IProximityMessage>
{
    using abi = ABI::Windows::Networking::Proximity::IProximityMessage;
    template <typename D> using consume = Windows::Networking::Proximity::impl_IProximityMessage<D>;
};

template <> struct traits<Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs>
{
    using abi = ABI::Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs;
    template <typename D> using consume = Windows::Networking::Proximity::impl_ITriggeredConnectionStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Networking::Proximity::MessageReceivedHandler>
{
    using abi = ABI::Windows::Networking::Proximity::MessageReceivedHandler;
};

template <> struct traits<Windows::Networking::Proximity::MessageTransmittedHandler>
{
    using abi = ABI::Windows::Networking::Proximity::MessageTransmittedHandler;
};

template <> struct traits<Windows::Networking::Proximity::ConnectionRequestedEventArgs>
{
    using abi = ABI::Windows::Networking::Proximity::ConnectionRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.Proximity.ConnectionRequestedEventArgs"; }
};

template <> struct traits<Windows::Networking::Proximity::PeerFinder>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.Proximity.PeerFinder"; }
};

template <> struct traits<Windows::Networking::Proximity::PeerInformation>
{
    using abi = ABI::Windows::Networking::Proximity::PeerInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.Proximity.PeerInformation"; }
};

template <> struct traits<Windows::Networking::Proximity::PeerWatcher>
{
    using abi = ABI::Windows::Networking::Proximity::PeerWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.Proximity.PeerWatcher"; }
};

template <> struct traits<Windows::Networking::Proximity::ProximityDevice>
{
    using abi = ABI::Windows::Networking::Proximity::ProximityDevice;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.Proximity.ProximityDevice"; }
};

template <> struct traits<Windows::Networking::Proximity::ProximityMessage>
{
    using abi = ABI::Windows::Networking::Proximity::ProximityMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.Proximity.ProximityMessage"; }
};

template <> struct traits<Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs>
{
    using abi = ABI::Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs"; }
};

}

}
