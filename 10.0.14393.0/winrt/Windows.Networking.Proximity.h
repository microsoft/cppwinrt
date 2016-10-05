// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Networking.Sockets.3.h"
#include "internal/Windows.Networking.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Networking.Proximity.3.h"
#include "Windows.Networking.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Networking::Proximity {

template <typename L> DeviceArrivedEventHandler::DeviceArrivedEventHandler(L lambda) :
    DeviceArrivedEventHandler(impl::make_delegate<impl_DeviceArrivedEventHandler<L>, DeviceArrivedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DeviceArrivedEventHandler::DeviceArrivedEventHandler(F * function) :
    DeviceArrivedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DeviceArrivedEventHandler::DeviceArrivedEventHandler(O * object, M method) :
    DeviceArrivedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DeviceArrivedEventHandler::operator()(const Windows::Networking::Proximity::ProximityDevice & sender) const
{
    check_hresult((*this)->abi_Invoke(get(sender)));
}

template <typename L> DeviceDepartedEventHandler::DeviceDepartedEventHandler(L lambda) :
    DeviceDepartedEventHandler(impl::make_delegate<impl_DeviceDepartedEventHandler<L>, DeviceDepartedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DeviceDepartedEventHandler::DeviceDepartedEventHandler(F * function) :
    DeviceDepartedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DeviceDepartedEventHandler::DeviceDepartedEventHandler(O * object, M method) :
    DeviceDepartedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DeviceDepartedEventHandler::operator()(const Windows::Networking::Proximity::ProximityDevice & sender) const
{
    check_hresult((*this)->abi_Invoke(get(sender)));
}

template <typename L> MessageReceivedHandler::MessageReceivedHandler(L lambda) :
    MessageReceivedHandler(impl::make_delegate<impl_MessageReceivedHandler<L>, MessageReceivedHandler>(std::forward<L>(lambda)))
{}

template <typename F> MessageReceivedHandler::MessageReceivedHandler(F * function) :
    MessageReceivedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> MessageReceivedHandler::MessageReceivedHandler(O * object, M method) :
    MessageReceivedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void MessageReceivedHandler::operator()(const Windows::Networking::Proximity::ProximityDevice & sender, const Windows::Networking::Proximity::ProximityMessage & message) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(message)));
}

template <typename L> MessageTransmittedHandler::MessageTransmittedHandler(L lambda) :
    MessageTransmittedHandler(impl::make_delegate<impl_MessageTransmittedHandler<L>, MessageTransmittedHandler>(std::forward<L>(lambda)))
{}

template <typename F> MessageTransmittedHandler::MessageTransmittedHandler(F * function) :
    MessageTransmittedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> MessageTransmittedHandler::MessageTransmittedHandler(O * object, M method) :
    MessageTransmittedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void MessageTransmittedHandler::operator()(const Windows::Networking::Proximity::ProximityDevice & sender, int64_t messageId) const
{
    check_hresult((*this)->abi_Invoke(get(sender), messageId));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::Proximity::IConnectionRequestedEventArgs> : produce_base<D, Windows::Networking::Proximity::IConnectionRequestedEventArgs>
{
    HRESULT __stdcall get_PeerInformation(abi_arg_out<Windows::Networking::Proximity::IPeerInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeerInformation());
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
    HRESULT __stdcall get_AllowBluetooth(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowBluetooth());
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
            this->shim().AllowBluetooth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowInfrastructure(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowInfrastructure());
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
            this->shim().AllowInfrastructure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowWiFiDirect(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowWiFiDirect());
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
            this->shim().AllowWiFiDirect(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDiscoveryTypes(Windows::Networking::Proximity::PeerDiscoveryTypes * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedDiscoveryTypes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateIdentities(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateIdentities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall abi_StartWithMessage(abi_arg_in<hstring> peerMessage) noexcept override
    {
        try
        {
            this->shim().Start(*reinterpret_cast<const hstring *>(&peerMessage));
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

    HRESULT __stdcall add_TriggeredConnectionStateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().TriggeredConnectionStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TriggeredConnectionStateChanged(event_token cookie) noexcept override
    {
        try
        {
            this->shim().TriggeredConnectionStateChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ConnectionRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ConnectionRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionRequested(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ConnectionRequested(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllPeersAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().FindAllPeersAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsync(abi_arg_in<Windows::Networking::Proximity::IPeerInformation> peerInformation, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Networking::Proximity::PeerInformation *>(&peerInformation)));
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
    HRESULT __stdcall get_Role(Windows::Networking::Proximity::PeerRole * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Role());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Role(Windows::Networking::Proximity::PeerRole value) noexcept override
    {
        try
        {
            this->shim().Role(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiscoveryData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DiscoveryData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DiscoveryData(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().DiscoveryData(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWatcher(abi_arg_out<Windows::Networking::Proximity::IPeerWatcher> watcher) noexcept override
    {
        try
        {
            *watcher = detach(this->shim().CreateWatcher());
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
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiscoveryData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DiscoveryData());
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
    HRESULT __stdcall get_HostName(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Networking::Proximity::IPeerWatcher> : produce_base<D, Windows::Networking::Proximity::IPeerWatcher>
{
    HRESULT __stdcall add_Added(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Added(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(event_token token) noexcept override
    {
        try
        {
            this->shim().Added(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Removed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(event_token token) noexcept override
    {
        try
        {
            this->shim().Removed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Updated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(event_token token) noexcept override
    {
        try
        {
            this->shim().Updated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().EnumerationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept override
    {
        try
        {
            this->shim().Stopped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::Proximity::PeerWatcherStatus * status) noexcept override
    {
        try
        {
            *status = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::Networking::Proximity::IProximityDevice> : produce_base<D, Windows::Networking::Proximity::IProximityDevice>
{
    HRESULT __stdcall abi_SubscribeForMessage(abi_arg_in<hstring> messageType, abi_arg_in<Windows::Networking::Proximity::MessageReceivedHandler> messageReceivedHandler, int64_t * subscriptionId) noexcept override
    {
        try
        {
            *subscriptionId = detach(this->shim().SubscribeForMessage(*reinterpret_cast<const hstring *>(&messageType), *reinterpret_cast<const Windows::Networking::Proximity::MessageReceivedHandler *>(&messageReceivedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PublishMessage(abi_arg_in<hstring> messageType, abi_arg_in<hstring> message, int64_t * messageId) noexcept override
    {
        try
        {
            *messageId = detach(this->shim().PublishMessage(*reinterpret_cast<const hstring *>(&messageType), *reinterpret_cast<const hstring *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PublishMessageWithCallback(abi_arg_in<hstring> messageType, abi_arg_in<hstring> message, abi_arg_in<Windows::Networking::Proximity::MessageTransmittedHandler> messageTransmittedHandler, int64_t * messageId) noexcept override
    {
        try
        {
            *messageId = detach(this->shim().PublishMessage(*reinterpret_cast<const hstring *>(&messageType), *reinterpret_cast<const hstring *>(&message), *reinterpret_cast<const Windows::Networking::Proximity::MessageTransmittedHandler *>(&messageTransmittedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PublishBinaryMessage(abi_arg_in<hstring> messageType, abi_arg_in<Windows::Storage::Streams::IBuffer> message, int64_t * messageId) noexcept override
    {
        try
        {
            *messageId = detach(this->shim().PublishBinaryMessage(*reinterpret_cast<const hstring *>(&messageType), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PublishBinaryMessageWithCallback(abi_arg_in<hstring> messageType, abi_arg_in<Windows::Storage::Streams::IBuffer> message, abi_arg_in<Windows::Networking::Proximity::MessageTransmittedHandler> messageTransmittedHandler, int64_t * messageId) noexcept override
    {
        try
        {
            *messageId = detach(this->shim().PublishBinaryMessage(*reinterpret_cast<const hstring *>(&messageType), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&message), *reinterpret_cast<const Windows::Networking::Proximity::MessageTransmittedHandler *>(&messageTransmittedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PublishUriMessage(abi_arg_in<Windows::Foundation::IUriRuntimeClass> message, int64_t * messageId) noexcept override
    {
        try
        {
            *messageId = detach(this->shim().PublishUriMessage(*reinterpret_cast<const Windows::Foundation::Uri *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PublishUriMessageWithCallback(abi_arg_in<Windows::Foundation::IUriRuntimeClass> message, abi_arg_in<Windows::Networking::Proximity::MessageTransmittedHandler> messageTransmittedHandler, int64_t * messageId) noexcept override
    {
        try
        {
            *messageId = detach(this->shim().PublishUriMessage(*reinterpret_cast<const Windows::Foundation::Uri *>(&message), *reinterpret_cast<const Windows::Networking::Proximity::MessageTransmittedHandler *>(&messageTransmittedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopSubscribingForMessage(int64_t subscriptionId) noexcept override
    {
        try
        {
            this->shim().StopSubscribingForMessage(subscriptionId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopPublishingMessage(int64_t messageId) noexcept override
    {
        try
        {
            this->shim().StopPublishingMessage(messageId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeviceArrived(abi_arg_in<Windows::Networking::Proximity::DeviceArrivedEventHandler> arrivedHandler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().DeviceArrived(*reinterpret_cast<const Windows::Networking::Proximity::DeviceArrivedEventHandler *>(&arrivedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeviceArrived(event_token cookie) noexcept override
    {
        try
        {
            this->shim().DeviceArrived(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeviceDeparted(abi_arg_in<Windows::Networking::Proximity::DeviceDepartedEventHandler> departedHandler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().DeviceDeparted(*reinterpret_cast<const Windows::Networking::Proximity::DeviceDepartedEventHandler *>(&departedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeviceDeparted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().DeviceDeparted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMessageBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxMessageBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitsPerSecond(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
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
    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Networking::Proximity::IProximityDevice> proximityDevice) noexcept override
    {
        try
        {
            *proximityDevice = detach(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *proximityDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromId(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Networking::Proximity::IProximityDevice> proximityDevice) noexcept override
    {
        try
        {
            *proximityDevice = detach(this->shim().FromId(*reinterpret_cast<const hstring *>(&deviceId)));
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
    HRESULT __stdcall get_MessageType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscriptionId(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubscriptionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataAsString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataAsString());
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
    HRESULT __stdcall get_State(Windows::Networking::Proximity::TriggeredConnectState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Socket(abi_arg_out<Windows::Networking::Sockets::IStreamSocket> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Socket());
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

namespace Windows::Networking::Proximity {

template <typename D> hstring impl_IProximityMessage<D>::MessageType() const
{
    hstring value;
    check_hresult(static_cast<const IProximityMessage &>(static_cast<const D &>(*this))->get_MessageType(put(value)));
    return value;
}

template <typename D> int64_t impl_IProximityMessage<D>::SubscriptionId() const
{
    int64_t value {};
    check_hresult(static_cast<const IProximityMessage &>(static_cast<const D &>(*this))->get_SubscriptionId(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IProximityMessage<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IProximityMessage &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> hstring impl_IProximityMessage<D>::DataAsString() const
{
    hstring value;
    check_hresult(static_cast<const IProximityMessage &>(static_cast<const D &>(*this))->get_DataAsString(put(value)));
    return value;
}

template <typename D> int64_t impl_IProximityDevice<D>::SubscribeForMessage(hstring_ref messageType, const Windows::Networking::Proximity::MessageReceivedHandler & messageReceivedHandler) const
{
    int64_t subscriptionId {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_SubscribeForMessage(get(messageType), get(messageReceivedHandler), &subscriptionId));
    return subscriptionId;
}

template <typename D> int64_t impl_IProximityDevice<D>::PublishMessage(hstring_ref messageType, hstring_ref message) const
{
    int64_t messageId {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_PublishMessage(get(messageType), get(message), &messageId));
    return messageId;
}

template <typename D> int64_t impl_IProximityDevice<D>::PublishMessage(hstring_ref messageType, hstring_ref message, const Windows::Networking::Proximity::MessageTransmittedHandler & messageTransmittedHandler) const
{
    int64_t messageId {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_PublishMessageWithCallback(get(messageType), get(message), get(messageTransmittedHandler), &messageId));
    return messageId;
}

template <typename D> int64_t impl_IProximityDevice<D>::PublishBinaryMessage(hstring_ref messageType, const Windows::Storage::Streams::IBuffer & message) const
{
    int64_t messageId {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_PublishBinaryMessage(get(messageType), get(message), &messageId));
    return messageId;
}

template <typename D> int64_t impl_IProximityDevice<D>::PublishBinaryMessage(hstring_ref messageType, const Windows::Storage::Streams::IBuffer & message, const Windows::Networking::Proximity::MessageTransmittedHandler & messageTransmittedHandler) const
{
    int64_t messageId {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_PublishBinaryMessageWithCallback(get(messageType), get(message), get(messageTransmittedHandler), &messageId));
    return messageId;
}

template <typename D> int64_t impl_IProximityDevice<D>::PublishUriMessage(const Windows::Foundation::Uri & message) const
{
    int64_t messageId {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_PublishUriMessage(get(message), &messageId));
    return messageId;
}

template <typename D> int64_t impl_IProximityDevice<D>::PublishUriMessage(const Windows::Foundation::Uri & message, const Windows::Networking::Proximity::MessageTransmittedHandler & messageTransmittedHandler) const
{
    int64_t messageId {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_PublishUriMessageWithCallback(get(message), get(messageTransmittedHandler), &messageId));
    return messageId;
}

template <typename D> void impl_IProximityDevice<D>::StopSubscribingForMessage(int64_t subscriptionId) const
{
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_StopSubscribingForMessage(subscriptionId));
}

template <typename D> void impl_IProximityDevice<D>::StopPublishingMessage(int64_t messageId) const
{
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->abi_StopPublishingMessage(messageId));
}

template <typename D> event_token impl_IProximityDevice<D>::DeviceArrived(const Windows::Networking::Proximity::DeviceArrivedEventHandler & arrivedHandler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->add_DeviceArrived(get(arrivedHandler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IProximityDevice> impl_IProximityDevice<D>::DeviceArrived(auto_revoke_t, const Windows::Networking::Proximity::DeviceArrivedEventHandler & arrivedHandler) const
{
    return impl::make_event_revoker<D, IProximityDevice>(this, &ABI::Windows::Networking::Proximity::IProximityDevice::remove_DeviceArrived, DeviceArrived(arrivedHandler));
}

template <typename D> void impl_IProximityDevice<D>::DeviceArrived(event_token cookie) const
{
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->remove_DeviceArrived(cookie));
}

template <typename D> event_token impl_IProximityDevice<D>::DeviceDeparted(const Windows::Networking::Proximity::DeviceDepartedEventHandler & departedHandler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->add_DeviceDeparted(get(departedHandler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IProximityDevice> impl_IProximityDevice<D>::DeviceDeparted(auto_revoke_t, const Windows::Networking::Proximity::DeviceDepartedEventHandler & departedHandler) const
{
    return impl::make_event_revoker<D, IProximityDevice>(this, &ABI::Windows::Networking::Proximity::IProximityDevice::remove_DeviceDeparted, DeviceDeparted(departedHandler));
}

template <typename D> void impl_IProximityDevice<D>::DeviceDeparted(event_token cookie) const
{
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->remove_DeviceDeparted(cookie));
}

template <typename D> uint32_t impl_IProximityDevice<D>::MaxMessageBytes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->get_MaxMessageBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProximityDevice<D>::BitsPerSecond() const
{
    uint64_t value {};
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->get_BitsPerSecond(&value));
    return value;
}

template <typename D> hstring impl_IProximityDevice<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IProximityDevice &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> hstring impl_IProximityDeviceStatics<D>::GetDeviceSelector() const
{
    hstring selector;
    check_hresult(static_cast<const IProximityDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(selector)));
    return selector;
}

template <typename D> Windows::Networking::Proximity::ProximityDevice impl_IProximityDeviceStatics<D>::GetDefault() const
{
    Windows::Networking::Proximity::ProximityDevice proximityDevice { nullptr };
    check_hresult(static_cast<const IProximityDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(proximityDevice)));
    return proximityDevice;
}

template <typename D> Windows::Networking::Proximity::ProximityDevice impl_IProximityDeviceStatics<D>::FromId(hstring_ref deviceId) const
{
    Windows::Networking::Proximity::ProximityDevice proximityDevice { nullptr };
    check_hresult(static_cast<const IProximityDeviceStatics &>(static_cast<const D &>(*this))->abi_FromId(get(deviceId), put(proximityDevice)));
    return proximityDevice;
}

template <typename D> Windows::Networking::Proximity::TriggeredConnectState impl_ITriggeredConnectionStateChangedEventArgs<D>::State() const
{
    Windows::Networking::Proximity::TriggeredConnectState value {};
    check_hresult(static_cast<const ITriggeredConnectionStateChangedEventArgs &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> uint32_t impl_ITriggeredConnectionStateChangedEventArgs<D>::Id() const
{
    uint32_t value {};
    check_hresult(static_cast<const ITriggeredConnectionStateChangedEventArgs &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocket impl_ITriggeredConnectionStateChangedEventArgs<D>::Socket() const
{
    Windows::Networking::Sockets::StreamSocket value { nullptr };
    check_hresult(static_cast<const ITriggeredConnectionStateChangedEventArgs &>(static_cast<const D &>(*this))->get_Socket(put(value)));
    return value;
}

template <typename D> hstring impl_IPeerInformation<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPeerInformation &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IPeerInformationWithHostAndService<D>::HostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IPeerInformationWithHostAndService &>(static_cast<const D &>(*this))->get_HostName(put(value)));
    return value;
}

template <typename D> hstring impl_IPeerInformationWithHostAndService<D>::ServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IPeerInformationWithHostAndService &>(static_cast<const D &>(*this))->get_ServiceName(put(value)));
    return value;
}

template <typename D> hstring impl_IPeerInformation3<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IPeerInformation3 &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IPeerInformation3<D>::DiscoveryData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IPeerInformation3 &>(static_cast<const D &>(*this))->get_DiscoveryData(put(value)));
    return value;
}

template <typename D> Windows::Networking::Proximity::PeerInformation impl_IConnectionRequestedEventArgs<D>::PeerInformation() const
{
    Windows::Networking::Proximity::PeerInformation value { nullptr };
    check_hresult(static_cast<const IConnectionRequestedEventArgs &>(static_cast<const D &>(*this))->get_PeerInformation(put(value)));
    return value;
}

template <typename D> event_token impl_IPeerWatcher<D>::Added(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->add_Added(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPeerWatcher> impl_IPeerWatcher<D>::Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const
{
    return impl::make_event_revoker<D, IPeerWatcher>(this, &ABI::Windows::Networking::Proximity::IPeerWatcher::remove_Added, Added(handler));
}

template <typename D> void impl_IPeerWatcher<D>::Added(event_token token) const
{
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->remove_Added(token));
}

template <typename D> event_token impl_IPeerWatcher<D>::Removed(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->add_Removed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPeerWatcher> impl_IPeerWatcher<D>::Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const
{
    return impl::make_event_revoker<D, IPeerWatcher>(this, &ABI::Windows::Networking::Proximity::IPeerWatcher::remove_Removed, Removed(handler));
}

template <typename D> void impl_IPeerWatcher<D>::Removed(event_token token) const
{
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->remove_Removed(token));
}

template <typename D> event_token impl_IPeerWatcher<D>::Updated(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->add_Updated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPeerWatcher> impl_IPeerWatcher<D>::Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::Networking::Proximity::PeerInformation> & handler) const
{
    return impl::make_event_revoker<D, IPeerWatcher>(this, &ABI::Windows::Networking::Proximity::IPeerWatcher::remove_Updated, Updated(handler));
}

template <typename D> void impl_IPeerWatcher<D>::Updated(event_token token) const
{
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->remove_Updated(token));
}

template <typename D> event_token impl_IPeerWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->add_EnumerationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPeerWatcher> impl_IPeerWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPeerWatcher>(this, &ABI::Windows::Networking::Proximity::IPeerWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IPeerWatcher<D>::EnumerationCompleted(event_token token) const
{
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->remove_EnumerationCompleted(token));
}

template <typename D> event_token impl_IPeerWatcher<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPeerWatcher> impl_IPeerWatcher<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Proximity::PeerWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPeerWatcher>(this, &ABI::Windows::Networking::Proximity::IPeerWatcher::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IPeerWatcher<D>::Stopped(event_token token) const
{
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->remove_Stopped(token));
}

template <typename D> Windows::Networking::Proximity::PeerWatcherStatus impl_IPeerWatcher<D>::Status() const
{
    Windows::Networking::Proximity::PeerWatcherStatus status {};
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->get_Status(&status));
    return status;
}

template <typename D> void impl_IPeerWatcher<D>::Start() const
{
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IPeerWatcher<D>::Stop() const
{
    check_hresult(static_cast<const IPeerWatcher &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> bool impl_IPeerFinderStatics<D>::AllowBluetooth() const
{
    bool value {};
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->get_AllowBluetooth(&value));
    return value;
}

template <typename D> void impl_IPeerFinderStatics<D>::AllowBluetooth(bool value) const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->put_AllowBluetooth(value));
}

template <typename D> bool impl_IPeerFinderStatics<D>::AllowInfrastructure() const
{
    bool value {};
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->get_AllowInfrastructure(&value));
    return value;
}

template <typename D> void impl_IPeerFinderStatics<D>::AllowInfrastructure(bool value) const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->put_AllowInfrastructure(value));
}

template <typename D> bool impl_IPeerFinderStatics<D>::AllowWiFiDirect() const
{
    bool value {};
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->get_AllowWiFiDirect(&value));
    return value;
}

template <typename D> void impl_IPeerFinderStatics<D>::AllowWiFiDirect(bool value) const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->put_AllowWiFiDirect(value));
}

template <typename D> hstring impl_IPeerFinderStatics<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IPeerFinderStatics<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> Windows::Networking::Proximity::PeerDiscoveryTypes impl_IPeerFinderStatics<D>::SupportedDiscoveryTypes() const
{
    Windows::Networking::Proximity::PeerDiscoveryTypes value {};
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->get_SupportedDiscoveryTypes(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IPeerFinderStatics<D>::AlternateIdentities() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->get_AlternateIdentities(put(value)));
    return value;
}

template <typename D> void impl_IPeerFinderStatics<D>::Start() const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IPeerFinderStatics<D>::Start(hstring_ref peerMessage) const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->abi_StartWithMessage(get(peerMessage)));
}

template <typename D> void impl_IPeerFinderStatics<D>::Stop() const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> event_token impl_IPeerFinderStatics<D>::TriggeredConnectionStateChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->add_TriggeredConnectionStateChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IPeerFinderStatics> impl_IPeerFinderStatics<D>::TriggeredConnectionStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPeerFinderStatics>(this, &ABI::Windows::Networking::Proximity::IPeerFinderStatics::remove_TriggeredConnectionStateChanged, TriggeredConnectionStateChanged(handler));
}

template <typename D> void impl_IPeerFinderStatics<D>::TriggeredConnectionStateChanged(event_token cookie) const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->remove_TriggeredConnectionStateChanged(cookie));
}

template <typename D> event_token impl_IPeerFinderStatics<D>::ConnectionRequested(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->add_ConnectionRequested(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IPeerFinderStatics> impl_IPeerFinderStatics<D>::ConnectionRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPeerFinderStatics>(this, &ABI::Windows::Networking::Proximity::IPeerFinderStatics::remove_ConnectionRequested, ConnectionRequested(handler));
}

template <typename D> void impl_IPeerFinderStatics<D>::ConnectionRequested(event_token cookie) const
{
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->remove_ConnectionRequested(cookie));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> impl_IPeerFinderStatics<D>::FindAllPeersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> asyncOp;
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->abi_FindAllPeersAsync(put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> impl_IPeerFinderStatics<D>::ConnectAsync(const Windows::Networking::Proximity::PeerInformation & peerInformation) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> asyncOp;
    check_hresult(static_cast<const IPeerFinderStatics &>(static_cast<const D &>(*this))->abi_ConnectAsync(get(peerInformation), put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Networking::Proximity::PeerRole impl_IPeerFinderStatics2<D>::Role() const
{
    Windows::Networking::Proximity::PeerRole value {};
    check_hresult(static_cast<const IPeerFinderStatics2 &>(static_cast<const D &>(*this))->get_Role(&value));
    return value;
}

template <typename D> void impl_IPeerFinderStatics2<D>::Role(Windows::Networking::Proximity::PeerRole value) const
{
    check_hresult(static_cast<const IPeerFinderStatics2 &>(static_cast<const D &>(*this))->put_Role(value));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IPeerFinderStatics2<D>::DiscoveryData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IPeerFinderStatics2 &>(static_cast<const D &>(*this))->get_DiscoveryData(put(value)));
    return value;
}

template <typename D> void impl_IPeerFinderStatics2<D>::DiscoveryData(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IPeerFinderStatics2 &>(static_cast<const D &>(*this))->put_DiscoveryData(get(value)));
}

template <typename D> Windows::Networking::Proximity::PeerWatcher impl_IPeerFinderStatics2<D>::CreateWatcher() const
{
    Windows::Networking::Proximity::PeerWatcher watcher { nullptr };
    check_hresult(static_cast<const IPeerFinderStatics2 &>(static_cast<const D &>(*this))->abi_CreateWatcher(put(watcher)));
    return watcher;
}

inline bool PeerFinder::AllowBluetooth()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().AllowBluetooth();
}

inline void PeerFinder::AllowBluetooth(bool value)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().AllowBluetooth(value);
}

inline bool PeerFinder::AllowInfrastructure()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().AllowInfrastructure();
}

inline void PeerFinder::AllowInfrastructure(bool value)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().AllowInfrastructure(value);
}

inline bool PeerFinder::AllowWiFiDirect()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().AllowWiFiDirect();
}

inline void PeerFinder::AllowWiFiDirect(bool value)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().AllowWiFiDirect(value);
}

inline hstring PeerFinder::DisplayName()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().DisplayName();
}

inline void PeerFinder::DisplayName(hstring_ref value)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().DisplayName(value);
}

inline Windows::Networking::Proximity::PeerDiscoveryTypes PeerFinder::SupportedDiscoveryTypes()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().SupportedDiscoveryTypes();
}

inline Windows::Foundation::Collections::IMap<hstring, hstring> PeerFinder::AlternateIdentities()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().AlternateIdentities();
}

inline void PeerFinder::Start()
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().Start();
}

inline void PeerFinder::Start(hstring_ref peerMessage)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().Start(peerMessage);
}

inline void PeerFinder::Stop()
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().Stop();
}

inline event_token PeerFinder::TriggeredConnectionStateChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> & handler)
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().TriggeredConnectionStateChanged(handler);
}

inline factory_event_revoker<IPeerFinderStatics> PeerFinder::TriggeredConnectionStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> & handler)
{
    auto factory = get_activation_factory<PeerFinder, IPeerFinderStatics>();
    return { factory, &ABI::Windows::Networking::Proximity::IPeerFinderStatics::remove_TriggeredConnectionStateChanged, factory.TriggeredConnectionStateChanged(handler) };
}

inline void PeerFinder::TriggeredConnectionStateChanged(event_token cookie)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().TriggeredConnectionStateChanged(cookie);
}

inline event_token PeerFinder::ConnectionRequested(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> & handler)
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().ConnectionRequested(handler);
}

inline factory_event_revoker<IPeerFinderStatics> PeerFinder::ConnectionRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> & handler)
{
    auto factory = get_activation_factory<PeerFinder, IPeerFinderStatics>();
    return { factory, &ABI::Windows::Networking::Proximity::IPeerFinderStatics::remove_ConnectionRequested, factory.ConnectionRequested(handler) };
}

inline void PeerFinder::ConnectionRequested(event_token cookie)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics>().ConnectionRequested(cookie);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> PeerFinder::FindAllPeersAsync()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().FindAllPeersAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> PeerFinder::ConnectAsync(const Windows::Networking::Proximity::PeerInformation & peerInformation)
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics>().ConnectAsync(peerInformation);
}

inline Windows::Networking::Proximity::PeerRole PeerFinder::Role()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics2>().Role();
}

inline void PeerFinder::Role(Windows::Networking::Proximity::PeerRole value)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics2>().Role(value);
}

inline Windows::Storage::Streams::IBuffer PeerFinder::DiscoveryData()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics2>().DiscoveryData();
}

inline void PeerFinder::DiscoveryData(const Windows::Storage::Streams::IBuffer & value)
{
    get_activation_factory<PeerFinder, IPeerFinderStatics2>().DiscoveryData(value);
}

inline Windows::Networking::Proximity::PeerWatcher PeerFinder::CreateWatcher()
{
    return get_activation_factory<PeerFinder, IPeerFinderStatics2>().CreateWatcher();
}

inline hstring ProximityDevice::GetDeviceSelector()
{
    return get_activation_factory<ProximityDevice, IProximityDeviceStatics>().GetDeviceSelector();
}

inline Windows::Networking::Proximity::ProximityDevice ProximityDevice::GetDefault()
{
    return get_activation_factory<ProximityDevice, IProximityDeviceStatics>().GetDefault();
}

inline Windows::Networking::Proximity::ProximityDevice ProximityDevice::FromId(hstring_ref deviceId)
{
    return get_activation_factory<ProximityDevice, IProximityDeviceStatics>().FromId(deviceId);
}

}

}
