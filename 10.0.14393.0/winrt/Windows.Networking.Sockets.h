// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Networking.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Networking.Connectivity.3.h"
#include "internal/Windows.Security.Cryptography.Certificates.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Web.3.h"
#include "internal/Windows.ApplicationModel.Background.3.h"
#include "internal/Windows.Networking.Sockets.3.h"
#include "Windows.Networking.h"
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTrigger> : produce_base<D, Windows::Networking::Sockets::IControlChannelTrigger>
{
    HRESULT __stdcall get_ControlChannelTriggerId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlChannelTriggerId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerKeepAliveIntervalInMinutes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerKeepAliveIntervalInMinutes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServerKeepAliveIntervalInMinutes(uint32_t value) noexcept override
    {
        try
        {
            this->shim().ServerKeepAliveIntervalInMinutes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentKeepAliveIntervalInMinutes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentKeepAliveIntervalInMinutes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportObject(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportObject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeepAliveTrigger(abi_arg_out<Windows::ApplicationModel::Background::IBackgroundTrigger> trigger) noexcept override
    {
        try
        {
            *trigger = detach(this->shim().KeepAliveTrigger());
            return S_OK;
        }
        catch (...)
        {
            *trigger = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PushNotificationTrigger(abi_arg_out<Windows::ApplicationModel::Background::IBackgroundTrigger> trigger) noexcept override
    {
        try
        {
            *trigger = detach(this->shim().PushNotificationTrigger());
            return S_OK;
        }
        catch (...)
        {
            *trigger = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UsingTransport(abi_arg_in<Windows::IInspectable> transport) noexcept override
    {
        try
        {
            this->shim().UsingTransport(*reinterpret_cast<const Windows::IInspectable *>(&transport));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WaitForPushEnabled(Windows::Networking::Sockets::ControlChannelTriggerStatus * channelTriggerStatus) noexcept override
    {
        try
        {
            *channelTriggerStatus = detach(this->shim().WaitForPushEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DecreaseNetworkKeepAliveInterval() noexcept override
    {
        try
        {
            this->shim().DecreaseNetworkKeepAliveInterval();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FlushTransport() noexcept override
    {
        try
        {
            this->shim().FlushTransport();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTrigger2> : produce_base<D, Windows::Networking::Sockets::IControlChannelTrigger2>
{
    HRESULT __stdcall get_IsWakeFromLowPowerSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsWakeFromLowPowerSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTriggerEventDetails> : produce_base<D, Windows::Networking::Sockets::IControlChannelTriggerEventDetails>
{
    HRESULT __stdcall get_ControlChannelTrigger(abi_arg_out<Windows::Networking::Sockets::IControlChannelTrigger> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlChannelTrigger());
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
struct produce<D, Windows::Networking::Sockets::IControlChannelTriggerFactory> : produce_base<D, Windows::Networking::Sockets::IControlChannelTriggerFactory>
{
    HRESULT __stdcall abi_CreateControlChannelTrigger(abi_arg_in<hstring> channelId, uint32_t serverKeepAliveIntervalInMinutes, abi_arg_out<Windows::Networking::Sockets::IControlChannelTrigger> notificationChannel) noexcept override
    {
        try
        {
            *notificationChannel = detach(this->shim().CreateControlChannelTrigger(*reinterpret_cast<const hstring *>(&channelId), serverKeepAliveIntervalInMinutes));
            return S_OK;
        }
        catch (...)
        {
            *notificationChannel = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateControlChannelTriggerEx(abi_arg_in<hstring> channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType resourceRequestType, abi_arg_out<Windows::Networking::Sockets::IControlChannelTrigger> notificationChannel) noexcept override
    {
        try
        {
            *notificationChannel = detach(this->shim().CreateControlChannelTriggerEx(*reinterpret_cast<const hstring *>(&channelId), serverKeepAliveIntervalInMinutes, resourceRequestType));
            return S_OK;
        }
        catch (...)
        {
            *notificationChannel = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails> : produce_base<D, Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>
{
    HRESULT __stdcall get_ResetReason(Windows::Networking::Sockets::ControlChannelTriggerResetReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResetReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareSlotReset(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HardwareSlotReset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoftwareSlotReset(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoftwareSlotReset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocket> : produce_base<D, Windows::Networking::Sockets::IDatagramSocket>
{
    HRESULT __stdcall get_Control(abi_arg_out<Windows::Networking::Sockets::IDatagramSocketControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Information(abi_arg_out<Windows::Networking::Sockets::IDatagramSocketInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(abi_arg_out<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectWithEndpointPairAsync(abi_arg_in<Windows::Networking::IEndpointPair> endpointPair, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Networking::EndpointPair *>(&endpointPair)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BindServiceNameAsync(abi_arg_in<hstring> localServiceName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().BindServiceNameAsync(*reinterpret_cast<const hstring *>(&localServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BindEndpointAsync(abi_arg_in<Windows::Networking::IHostName> localHostName, abi_arg_in<hstring> localServiceName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().BindEndpointAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&localHostName), *reinterpret_cast<const hstring *>(&localServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_JoinMulticastGroup(abi_arg_in<Windows::Networking::IHostName> host) noexcept override
    {
        try
        {
            this->shim().JoinMulticastGroup(*reinterpret_cast<const Windows::Networking::HostName *>(&host));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetOutputStreamAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetOutputStreamAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetOutputStreamWithEndpointPairAsync(abi_arg_in<Windows::Networking::IEndpointPair> endpointPair, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetOutputStreamAsync(*reinterpret_cast<const Windows::Networking::EndpointPair *>(&endpointPair)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().MessageReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().MessageReceived(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocket2> : produce_base<D, Windows::Networking::Sockets::IDatagramSocket2>
{
    HRESULT __stdcall abi_BindServiceNameAndAdapterAsync(abi_arg_in<hstring> localServiceName, abi_arg_in<Windows::Networking::Connectivity::INetworkAdapter> adapter, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().BindServiceNameAsync(*reinterpret_cast<const hstring *>(&localServiceName), *reinterpret_cast<const Windows::Networking::Connectivity::NetworkAdapter *>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocket3> : produce_base<D, Windows::Networking::Sockets::IDatagramSocket3>
{
    HRESULT __stdcall abi_CancelIOAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CancelIOAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableTransferOwnership(GUID taskId) noexcept override
    {
        try
        {
            this->shim().EnableTransferOwnership(taskId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableTransferOwnershipWithConnectedStandbyAction(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) noexcept override
    {
        try
        {
            this->shim().EnableTransferOwnership(taskId, connectedStandbyAction);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferOwnership(abi_arg_in<hstring> socketId) noexcept override
    {
        try
        {
            this->shim().TransferOwnership(*reinterpret_cast<const hstring *>(&socketId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferOwnershipWithContext(abi_arg_in<hstring> socketId, abi_arg_in<Windows::Networking::Sockets::ISocketActivityContext> data) noexcept override
    {
        try
        {
            this->shim().TransferOwnership(*reinterpret_cast<const hstring *>(&socketId), *reinterpret_cast<const Windows::Networking::Sockets::SocketActivityContext *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferOwnershipWithContextAndKeepAliveTime(abi_arg_in<hstring> socketId, abi_arg_in<Windows::Networking::Sockets::ISocketActivityContext> data, abi_arg_in<Windows::Foundation::TimeSpan> keepAliveTime) noexcept override
    {
        try
        {
            this->shim().TransferOwnership(*reinterpret_cast<const hstring *>(&socketId), *reinterpret_cast<const Windows::Networking::Sockets::SocketActivityContext *>(&data), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&keepAliveTime));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketControl> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketControl>
{
    HRESULT __stdcall get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QualityOfService());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) noexcept override
    {
        try
        {
            this->shim().QualityOfService(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutboundUnicastHopLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) noexcept override
    {
        try
        {
            this->shim().OutboundUnicastHopLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketControl2> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketControl2>
{
    HRESULT __stdcall get_InboundBufferSizeInBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InboundBufferSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InboundBufferSizeInBytes(uint32_t value) noexcept override
    {
        try
        {
            this->shim().InboundBufferSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DontFragment(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DontFragment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DontFragment(bool value) noexcept override
    {
        try
        {
            this->shim().DontFragment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketControl3> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketControl3>
{
    HRESULT __stdcall get_MulticastOnly(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MulticastOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MulticastOnly(bool value) noexcept override
    {
        try
        {
            this->shim().MulticastOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketInformation> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketInformation>
{
    HRESULT __stdcall get_LocalAddress(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalPort(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalPort());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteAddress(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePort(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemotePort());
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
struct produce<D, Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>
{
    HRESULT __stdcall get_RemoteAddress(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePort(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemotePort());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalAddress(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDataReader(abi_arg_out<Windows::Storage::Streams::IDataReader> dataReader) noexcept override
    {
        try
        {
            *dataReader = detach(this->shim().GetDataReader());
            return S_OK;
        }
        catch (...)
        {
            *dataReader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDataStream(abi_arg_out<Windows::Storage::Streams::IInputStream> inputStream) noexcept override
    {
        try
        {
            *inputStream = detach(this->shim().GetDataStream());
            return S_OK;
        }
        catch (...)
        {
            *inputStream = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketStatics> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketStatics>
{
    HRESULT __stdcall abi_GetEndpointPairsAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetEndpointPairsAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetEndpointPairsWithSortOptionsAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, Windows::Networking::HostNameSortOptions sortOptions, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetEndpointPairsAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName), sortOptions));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocket> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocket>
{
    HRESULT __stdcall get_Control(abi_arg_out<Windows::Networking::Sockets::IMessageWebSocketControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Information(abi_arg_out<Windows::Networking::Sockets::IWebSocketInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().MessageReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().MessageReceived(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocket2> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocket2>
{
    HRESULT __stdcall add_ServerCustomValidationRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().ServerCustomValidationRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerCustomValidationRequested(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().ServerCustomValidationRequested(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocketControl> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocketControl>
{
    HRESULT __stdcall get_MaxMessageSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxMessageSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxMessageSize(uint32_t value) noexcept override
    {
        try
        {
            this->shim().MaxMessageSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageType(Windows::Networking::Sockets::SocketMessageType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MessageType(Windows::Networking::Sockets::SocketMessageType value) noexcept override
    {
        try
        {
            this->shim().MessageType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>
{
    HRESULT __stdcall get_MessageType(Windows::Networking::Sockets::SocketMessageType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDataReader(abi_arg_out<Windows::Storage::Streams::IDataReader> dataReader) noexcept override
    {
        try
        {
            *dataReader = detach(this->shim().GetDataReader());
            return S_OK;
        }
        catch (...)
        {
            *dataReader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDataStream(abi_arg_out<Windows::Storage::Streams::IInputStream> inputStream) noexcept override
    {
        try
        {
            *inputStream = detach(this->shim().GetDataStream());
            return S_OK;
        }
        catch (...)
        {
            *inputStream = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityContext> : produce_base<D, Windows::Networking::Sockets::ISocketActivityContext>
{
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
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityContextFactory> : produce_base<D, Windows::Networking::Sockets::ISocketActivityContextFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Networking::Sockets::ISocketActivityContext> context) noexcept override
    {
        try
        {
            *context = detach(this->shim().Create(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *context = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityInformation> : produce_base<D, Windows::Networking::Sockets::ISocketActivityInformation>
{
    HRESULT __stdcall get_TaskId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TaskId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_SocketKind(Windows::Networking::Sockets::SocketActivityKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SocketKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Context(abi_arg_out<Windows::Networking::Sockets::ISocketActivityContext> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Context());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DatagramSocket(abi_arg_out<Windows::Networking::Sockets::IDatagramSocket> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DatagramSocket());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamSocket(abi_arg_out<Windows::Networking::Sockets::IStreamSocket> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StreamSocket());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamSocketListener(abi_arg_out<Windows::Networking::Sockets::IStreamSocketListener> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StreamSocketListener());
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
struct produce<D, Windows::Networking::Sockets::ISocketActivityInformationStatics> : produce_base<D, Windows::Networking::Sockets::ISocketActivityInformationStatics>
{
    HRESULT __stdcall get_AllSockets(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation>> sockets) noexcept override
    {
        try
        {
            *sockets = detach(this->shim().AllSockets());
            return S_OK;
        }
        catch (...)
        {
            *sockets = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityTriggerDetails> : produce_base<D, Windows::Networking::Sockets::ISocketActivityTriggerDetails>
{
    HRESULT __stdcall get_Reason(Windows::Networking::Sockets::SocketActivityTriggerReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SocketInformation(abi_arg_out<Windows::Networking::Sockets::ISocketActivityInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SocketInformation());
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
struct produce<D, Windows::Networking::Sockets::ISocketErrorStatics> : produce_base<D, Windows::Networking::Sockets::ISocketErrorStatics>
{
    HRESULT __stdcall abi_GetStatus(int32_t hresult, Windows::Networking::Sockets::SocketErrorStatus * status) noexcept override
    {
        try
        {
            *status = detach(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocket> : produce_base<D, Windows::Networking::Sockets::IStreamSocket>
{
    HRESULT __stdcall get_Control(abi_arg_out<Windows::Networking::Sockets::IStreamSocketControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Information(abi_arg_out<Windows::Networking::Sockets::IStreamSocketInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(abi_arg_out<Windows::Storage::Streams::IInputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(abi_arg_out<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectWithEndpointPairAsync(abi_arg_in<Windows::Networking::IEndpointPair> endpointPair, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Networking::EndpointPair *>(&endpointPair)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectWithEndpointPairAndProtectionLevelAsync(abi_arg_in<Windows::Networking::IEndpointPair> endpointPair, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Networking::EndpointPair *>(&endpointPair), protectionLevel));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectWithProtectionLevelAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName), protectionLevel));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpgradeToSslAsync(Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, abi_arg_in<Windows::Networking::IHostName> validationHostName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpgradeToSslAsync(protectionLevel, *reinterpret_cast<const Windows::Networking::HostName *>(&validationHostName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocket2> : produce_base<D, Windows::Networking::Sockets::IStreamSocket2>
{
    HRESULT __stdcall abi_ConnectWithProtectionLevelAndAdapterAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, abi_arg_in<Windows::Networking::Connectivity::INetworkAdapter> adapter, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName), protectionLevel, *reinterpret_cast<const Windows::Networking::Connectivity::NetworkAdapter *>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocket3> : produce_base<D, Windows::Networking::Sockets::IStreamSocket3>
{
    HRESULT __stdcall abi_CancelIOAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CancelIOAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableTransferOwnership(GUID taskId) noexcept override
    {
        try
        {
            this->shim().EnableTransferOwnership(taskId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableTransferOwnershipWithConnectedStandbyAction(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) noexcept override
    {
        try
        {
            this->shim().EnableTransferOwnership(taskId, connectedStandbyAction);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferOwnership(abi_arg_in<hstring> socketId) noexcept override
    {
        try
        {
            this->shim().TransferOwnership(*reinterpret_cast<const hstring *>(&socketId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferOwnershipWithContext(abi_arg_in<hstring> socketId, abi_arg_in<Windows::Networking::Sockets::ISocketActivityContext> data) noexcept override
    {
        try
        {
            this->shim().TransferOwnership(*reinterpret_cast<const hstring *>(&socketId), *reinterpret_cast<const Windows::Networking::Sockets::SocketActivityContext *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferOwnershipWithContextAndKeepAliveTime(abi_arg_in<hstring> socketId, abi_arg_in<Windows::Networking::Sockets::ISocketActivityContext> data, abi_arg_in<Windows::Foundation::TimeSpan> keepAliveTime) noexcept override
    {
        try
        {
            this->shim().TransferOwnership(*reinterpret_cast<const hstring *>(&socketId), *reinterpret_cast<const Windows::Networking::Sockets::SocketActivityContext *>(&data), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&keepAliveTime));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketControl> : produce_base<D, Windows::Networking::Sockets::IStreamSocketControl>
{
    HRESULT __stdcall get_NoDelay(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NoDelay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NoDelay(bool value) noexcept override
    {
        try
        {
            this->shim().NoDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeepAlive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeepAlive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeepAlive(bool value) noexcept override
    {
        try
        {
            this->shim().KeepAlive(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutboundBufferSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) noexcept override
    {
        try
        {
            this->shim().OutboundBufferSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QualityOfService());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) noexcept override
    {
        try
        {
            this->shim().QualityOfService(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutboundUnicastHopLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) noexcept override
    {
        try
        {
            this->shim().OutboundUnicastHopLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketControl2> : produce_base<D, Windows::Networking::Sockets::IStreamSocketControl2>
{
    HRESULT __stdcall get_IgnorableServerCertificateErrors(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IgnorableServerCertificateErrors());
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
struct produce<D, Windows::Networking::Sockets::IStreamSocketControl3> : produce_base<D, Windows::Networking::Sockets::IStreamSocketControl3>
{
    HRESULT __stdcall get_SerializeConnectionAttempts(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SerializeConnectionAttempts());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SerializeConnectionAttempts(bool value) noexcept override
    {
        try
        {
            this->shim().SerializeConnectionAttempts(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClientCertificate(abi_arg_out<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClientCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClientCertificate(abi_arg_in<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            this->shim().ClientCertificate(*reinterpret_cast<const Windows::Security::Cryptography::Certificates::Certificate *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketInformation> : produce_base<D, Windows::Networking::Sockets::IStreamSocketInformation>
{
    HRESULT __stdcall get_LocalAddress(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalPort(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalPort());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteHostName(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteHostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteAddress(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteServiceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePort(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemotePort());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoundTripTimeStatistics(abi_arg_out<Windows::Networking::Sockets::RoundTripTimeStatistics> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoundTripTimeStatistics());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BandwidthStatistics(abi_arg_out<Windows::Networking::Sockets::BandwidthStatistics> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BandwidthStatistics());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionKey(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionKey());
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
struct produce<D, Windows::Networking::Sockets::IStreamSocketInformation2> : produce_base<D, Windows::Networking::Sockets::IStreamSocketInformation2>
{
    HRESULT __stdcall get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrors(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificate(abi_arg_out<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerIntermediateCertificates(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerIntermediateCertificates());
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
struct produce<D, Windows::Networking::Sockets::IStreamSocketListener> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListener>
{
    HRESULT __stdcall get_Control(abi_arg_out<Windows::Networking::Sockets::IStreamSocketListenerControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Information(abi_arg_out<Windows::Networking::Sockets::IStreamSocketListenerInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BindServiceNameAsync(abi_arg_in<hstring> localServiceName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().BindServiceNameAsync(*reinterpret_cast<const hstring *>(&localServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BindEndpointAsync(abi_arg_in<Windows::Networking::IHostName> localHostName, abi_arg_in<hstring> localServiceName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().BindEndpointAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&localHostName), *reinterpret_cast<const hstring *>(&localServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ConnectionReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().ConnectionReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionReceived(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().ConnectionReceived(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListener2> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListener2>
{
    HRESULT __stdcall abi_BindServiceNameWithProtectionLevelAsync(abi_arg_in<hstring> localServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().BindServiceNameAsync(*reinterpret_cast<const hstring *>(&localServiceName), protectionLevel));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BindServiceNameWithProtectionLevelAndAdapterAsync(abi_arg_in<hstring> localServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, abi_arg_in<Windows::Networking::Connectivity::INetworkAdapter> adapter, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().BindServiceNameAsync(*reinterpret_cast<const hstring *>(&localServiceName), protectionLevel, *reinterpret_cast<const Windows::Networking::Connectivity::NetworkAdapter *>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListener3> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListener3>
{
    HRESULT __stdcall abi_CancelIOAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CancelIOAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableTransferOwnership(GUID taskId) noexcept override
    {
        try
        {
            this->shim().EnableTransferOwnership(taskId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableTransferOwnershipWithConnectedStandbyAction(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) noexcept override
    {
        try
        {
            this->shim().EnableTransferOwnership(taskId, connectedStandbyAction);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferOwnership(abi_arg_in<hstring> socketId) noexcept override
    {
        try
        {
            this->shim().TransferOwnership(*reinterpret_cast<const hstring *>(&socketId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferOwnershipWithContext(abi_arg_in<hstring> socketId, abi_arg_in<Windows::Networking::Sockets::ISocketActivityContext> data) noexcept override
    {
        try
        {
            this->shim().TransferOwnership(*reinterpret_cast<const hstring *>(&socketId), *reinterpret_cast<const Windows::Networking::Sockets::SocketActivityContext *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>
{
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

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListenerControl> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListenerControl>
{
    HRESULT __stdcall get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QualityOfService());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) noexcept override
    {
        try
        {
            this->shim().QualityOfService(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListenerControl2> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListenerControl2>
{
    HRESULT __stdcall get_NoDelay(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NoDelay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NoDelay(bool value) noexcept override
    {
        try
        {
            this->shim().NoDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeepAlive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeepAlive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeepAlive(bool value) noexcept override
    {
        try
        {
            this->shim().KeepAlive(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutboundBufferSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) noexcept override
    {
        try
        {
            this->shim().OutboundBufferSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutboundUnicastHopLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) noexcept override
    {
        try
        {
            this->shim().OutboundUnicastHopLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListenerInformation> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListenerInformation>
{
    HRESULT __stdcall get_LocalPort(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalPort());
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
struct produce<D, Windows::Networking::Sockets::IStreamSocketStatics> : produce_base<D, Windows::Networking::Sockets::IStreamSocketStatics>
{
    HRESULT __stdcall abi_GetEndpointPairsAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetEndpointPairsAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetEndpointPairsWithSortOptionsAsync(abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, Windows::Networking::HostNameSortOptions sortOptions, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetEndpointPairsAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName), sortOptions));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamWebSocket> : produce_base<D, Windows::Networking::Sockets::IStreamWebSocket>
{
    HRESULT __stdcall get_Control(abi_arg_out<Windows::Networking::Sockets::IStreamWebSocketControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Information(abi_arg_out<Windows::Networking::Sockets::IWebSocketInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(abi_arg_out<Windows::Storage::Streams::IInputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputStream());
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
struct produce<D, Windows::Networking::Sockets::IStreamWebSocket2> : produce_base<D, Windows::Networking::Sockets::IStreamWebSocket2>
{
    HRESULT __stdcall add_ServerCustomValidationRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().ServerCustomValidationRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerCustomValidationRequested(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().ServerCustomValidationRequested(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamWebSocketControl> : produce_base<D, Windows::Networking::Sockets::IStreamWebSocketControl>
{
    HRESULT __stdcall get_NoDelay(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NoDelay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NoDelay(bool value) noexcept override
    {
        try
        {
            this->shim().NoDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocket> : produce_base<D, Windows::Networking::Sockets::IWebSocket>
{
    HRESULT __stdcall get_OutputStream(abi_arg_out<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetRequestHeader(abi_arg_in<hstring> headerName, abi_arg_in<hstring> headerValue) noexcept override
    {
        try
        {
            this->shim().SetRequestHeader(*reinterpret_cast<const hstring *>(&headerName), *reinterpret_cast<const hstring *>(&headerValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().Closed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().Closed(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CloseWithStatus(uint16_t code, abi_arg_in<hstring> reason) noexcept override
    {
        try
        {
            this->shim().Close(code, *reinterpret_cast<const hstring *>(&reason));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketClosedEventArgs> : produce_base<D, Windows::Networking::Sockets::IWebSocketClosedEventArgs>
{
    HRESULT __stdcall get_Code(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Reason(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Reason());
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
struct produce<D, Windows::Networking::Sockets::IWebSocketControl> : produce_base<D, Windows::Networking::Sockets::IWebSocketControl>
{
    HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutboundBufferSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) noexcept override
    {
        try
        {
            this->shim().OutboundBufferSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServerCredential(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            this->shim().ServerCredential(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProxyCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyCredential(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            this->shim().ProxyCredential(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedProtocols(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedProtocols());
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
struct produce<D, Windows::Networking::Sockets::IWebSocketControl2> : produce_base<D, Windows::Networking::Sockets::IWebSocketControl2>
{
    HRESULT __stdcall get_IgnorableServerCertificateErrors(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IgnorableServerCertificateErrors());
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
struct produce<D, Windows::Networking::Sockets::IWebSocketErrorStatics> : produce_base<D, Windows::Networking::Sockets::IWebSocketErrorStatics>
{
    HRESULT __stdcall abi_GetStatus(int32_t hresult, Windows::Web::WebErrorStatus * status) noexcept override
    {
        try
        {
            *status = detach(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketInformation> : produce_base<D, Windows::Networking::Sockets::IWebSocketInformation>
{
    HRESULT __stdcall get_LocalAddress(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BandwidthStatistics(abi_arg_out<Windows::Networking::Sockets::BandwidthStatistics> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BandwidthStatistics());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Protocol(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Protocol());
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
struct produce<D, Windows::Networking::Sockets::IWebSocketInformation2> : produce_base<D, Windows::Networking::Sockets::IWebSocketInformation2>
{
    HRESULT __stdcall get_ServerCertificate(abi_arg_out<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrors(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerIntermediateCertificates(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerIntermediateCertificates());
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
struct produce<D, Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs> : produce_base<D, Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>
{
    HRESULT __stdcall get_ServerCertificate(abi_arg_out<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrors(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerIntermediateCertificates(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerIntermediateCertificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Reject() noexcept override
    {
        try
        {
            this->shim().Reject();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Networking::Sockets {

template <typename D> GUID impl_ISocketActivityInformation<D>::TaskId() const
{
    GUID value {};
    check_hresult(static_cast<const ISocketActivityInformation &>(static_cast<const D &>(*this))->get_TaskId(&value));
    return value;
}

template <typename D> hstring impl_ISocketActivityInformation<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const ISocketActivityInformation &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityKind impl_ISocketActivityInformation<D>::SocketKind() const
{
    Windows::Networking::Sockets::SocketActivityKind value {};
    check_hresult(static_cast<const ISocketActivityInformation &>(static_cast<const D &>(*this))->get_SocketKind(&value));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityContext impl_ISocketActivityInformation<D>::Context() const
{
    Windows::Networking::Sockets::SocketActivityContext value { nullptr };
    check_hresult(static_cast<const ISocketActivityInformation &>(static_cast<const D &>(*this))->get_Context(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::DatagramSocket impl_ISocketActivityInformation<D>::DatagramSocket() const
{
    Windows::Networking::Sockets::DatagramSocket value { nullptr };
    check_hresult(static_cast<const ISocketActivityInformation &>(static_cast<const D &>(*this))->get_DatagramSocket(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocket impl_ISocketActivityInformation<D>::StreamSocket() const
{
    Windows::Networking::Sockets::StreamSocket value { nullptr };
    check_hresult(static_cast<const ISocketActivityInformation &>(static_cast<const D &>(*this))->get_StreamSocket(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocketListener impl_ISocketActivityInformation<D>::StreamSocketListener() const
{
    Windows::Networking::Sockets::StreamSocketListener value { nullptr };
    check_hresult(static_cast<const ISocketActivityInformation &>(static_cast<const D &>(*this))->get_StreamSocketListener(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityTriggerReason impl_ISocketActivityTriggerDetails<D>::Reason() const
{
    Windows::Networking::Sockets::SocketActivityTriggerReason value {};
    check_hresult(static_cast<const ISocketActivityTriggerDetails &>(static_cast<const D &>(*this))->get_Reason(&value));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityInformation impl_ISocketActivityTriggerDetails<D>::SocketInformation() const
{
    Windows::Networking::Sockets::SocketActivityInformation value { nullptr };
    check_hresult(static_cast<const ISocketActivityTriggerDetails &>(static_cast<const D &>(*this))->get_SocketInformation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation> impl_ISocketActivityInformationStatics<D>::AllSockets() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation> sockets;
    check_hresult(static_cast<const ISocketActivityInformationStatics &>(static_cast<const D &>(*this))->get_AllSockets(put(sockets)));
    return sockets;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ISocketActivityContext<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ISocketActivityContext &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityContext impl_ISocketActivityContextFactory<D>::Create(const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Networking::Sockets::SocketActivityContext context { nullptr };
    check_hresult(static_cast<const ISocketActivityContextFactory &>(static_cast<const D &>(*this))->abi_Create(get(data), put(context)));
    return context;
}

template <typename D> Windows::Networking::HostName impl_IDatagramSocketMessageReceivedEventArgs<D>::RemoteAddress() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IDatagramSocketMessageReceivedEventArgs &>(static_cast<const D &>(*this))->get_RemoteAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IDatagramSocketMessageReceivedEventArgs<D>::RemotePort() const
{
    hstring value;
    check_hresult(static_cast<const IDatagramSocketMessageReceivedEventArgs &>(static_cast<const D &>(*this))->get_RemotePort(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IDatagramSocketMessageReceivedEventArgs<D>::LocalAddress() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IDatagramSocketMessageReceivedEventArgs &>(static_cast<const D &>(*this))->get_LocalAddress(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::DataReader impl_IDatagramSocketMessageReceivedEventArgs<D>::GetDataReader() const
{
    Windows::Storage::Streams::DataReader dataReader { nullptr };
    check_hresult(static_cast<const IDatagramSocketMessageReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDataReader(put(dataReader)));
    return dataReader;
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IDatagramSocketMessageReceivedEventArgs<D>::GetDataStream() const
{
    Windows::Storage::Streams::IInputStream inputStream;
    check_hresult(static_cast<const IDatagramSocketMessageReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDataStream(put(inputStream)));
    return inputStream;
}

template <typename D> Windows::Networking::Sockets::SocketMessageType impl_IMessageWebSocketMessageReceivedEventArgs<D>::MessageType() const
{
    Windows::Networking::Sockets::SocketMessageType value {};
    check_hresult(static_cast<const IMessageWebSocketMessageReceivedEventArgs &>(static_cast<const D &>(*this))->get_MessageType(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::DataReader impl_IMessageWebSocketMessageReceivedEventArgs<D>::GetDataReader() const
{
    Windows::Storage::Streams::DataReader dataReader { nullptr };
    check_hresult(static_cast<const IMessageWebSocketMessageReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDataReader(put(dataReader)));
    return dataReader;
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IMessageWebSocketMessageReceivedEventArgs<D>::GetDataStream() const
{
    Windows::Storage::Streams::IInputStream inputStream;
    check_hresult(static_cast<const IMessageWebSocketMessageReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDataStream(put(inputStream)));
    return inputStream;
}

template <typename D> uint16_t impl_IWebSocketClosedEventArgs<D>::Code() const
{
    uint16_t value {};
    check_hresult(static_cast<const IWebSocketClosedEventArgs &>(static_cast<const D &>(*this))->get_Code(&value));
    return value;
}

template <typename D> hstring impl_IWebSocketClosedEventArgs<D>::Reason() const
{
    hstring value;
    check_hresult(static_cast<const IWebSocketClosedEventArgs &>(static_cast<const D &>(*this))->get_Reason(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IDatagramSocketInformation<D>::LocalAddress() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IDatagramSocketInformation &>(static_cast<const D &>(*this))->get_LocalAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IDatagramSocketInformation<D>::LocalPort() const
{
    hstring value;
    check_hresult(static_cast<const IDatagramSocketInformation &>(static_cast<const D &>(*this))->get_LocalPort(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IDatagramSocketInformation<D>::RemoteAddress() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IDatagramSocketInformation &>(static_cast<const D &>(*this))->get_RemoteAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IDatagramSocketInformation<D>::RemotePort() const
{
    hstring value;
    check_hresult(static_cast<const IDatagramSocketInformation &>(static_cast<const D &>(*this))->get_RemotePort(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketQualityOfService impl_IDatagramSocketControl<D>::QualityOfService() const
{
    Windows::Networking::Sockets::SocketQualityOfService value {};
    check_hresult(static_cast<const IDatagramSocketControl &>(static_cast<const D &>(*this))->get_QualityOfService(&value));
    return value;
}

template <typename D> void impl_IDatagramSocketControl<D>::QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) const
{
    check_hresult(static_cast<const IDatagramSocketControl &>(static_cast<const D &>(*this))->put_QualityOfService(value));
}

template <typename D> uint8_t impl_IDatagramSocketControl<D>::OutboundUnicastHopLimit() const
{
    uint8_t value {};
    check_hresult(static_cast<const IDatagramSocketControl &>(static_cast<const D &>(*this))->get_OutboundUnicastHopLimit(&value));
    return value;
}

template <typename D> void impl_IDatagramSocketControl<D>::OutboundUnicastHopLimit(uint8_t value) const
{
    check_hresult(static_cast<const IDatagramSocketControl &>(static_cast<const D &>(*this))->put_OutboundUnicastHopLimit(value));
}

template <typename D> uint32_t impl_IDatagramSocketControl2<D>::InboundBufferSizeInBytes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IDatagramSocketControl2 &>(static_cast<const D &>(*this))->get_InboundBufferSizeInBytes(&value));
    return value;
}

template <typename D> void impl_IDatagramSocketControl2<D>::InboundBufferSizeInBytes(uint32_t value) const
{
    check_hresult(static_cast<const IDatagramSocketControl2 &>(static_cast<const D &>(*this))->put_InboundBufferSizeInBytes(value));
}

template <typename D> bool impl_IDatagramSocketControl2<D>::DontFragment() const
{
    bool value {};
    check_hresult(static_cast<const IDatagramSocketControl2 &>(static_cast<const D &>(*this))->get_DontFragment(&value));
    return value;
}

template <typename D> void impl_IDatagramSocketControl2<D>::DontFragment(bool value) const
{
    check_hresult(static_cast<const IDatagramSocketControl2 &>(static_cast<const D &>(*this))->put_DontFragment(value));
}

template <typename D> bool impl_IDatagramSocketControl3<D>::MulticastOnly() const
{
    bool value {};
    check_hresult(static_cast<const IDatagramSocketControl3 &>(static_cast<const D &>(*this))->get_MulticastOnly(&value));
    return value;
}

template <typename D> void impl_IDatagramSocketControl3<D>::MulticastOnly(bool value) const
{
    check_hresult(static_cast<const IDatagramSocketControl3 &>(static_cast<const D &>(*this))->put_MulticastOnly(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> impl_IDatagramSocketStatics<D>::GetEndpointPairsAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> operation;
    check_hresult(static_cast<const IDatagramSocketStatics &>(static_cast<const D &>(*this))->abi_GetEndpointPairsAsync(get(remoteHostName), get(remoteServiceName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> impl_IDatagramSocketStatics<D>::GetEndpointPairsAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName, Windows::Networking::HostNameSortOptions sortOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> operation;
    check_hresult(static_cast<const IDatagramSocketStatics &>(static_cast<const D &>(*this))->abi_GetEndpointPairsWithSortOptionsAsync(get(remoteHostName), get(remoteServiceName), sortOptions, put(operation)));
    return operation;
}

template <typename D> Windows::Networking::Sockets::DatagramSocketControl impl_IDatagramSocket<D>::Control() const
{
    Windows::Networking::Sockets::DatagramSocketControl value { nullptr };
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->get_Control(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::DatagramSocketInformation impl_IDatagramSocket<D>::Information() const
{
    Windows::Networking::Sockets::DatagramSocketInformation value { nullptr };
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->get_Information(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IDatagramSocket<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->get_OutputStream(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDatagramSocket<D>::ConnectAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->abi_ConnectAsync(get(remoteHostName), get(remoteServiceName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDatagramSocket<D>::ConnectAsync(const Windows::Networking::EndpointPair & endpointPair) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->abi_ConnectWithEndpointPairAsync(get(endpointPair), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDatagramSocket<D>::BindServiceNameAsync(hstring_ref localServiceName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->abi_BindServiceNameAsync(get(localServiceName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDatagramSocket<D>::BindEndpointAsync(const Windows::Networking::HostName & localHostName, hstring_ref localServiceName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->abi_BindEndpointAsync(get(localHostName), get(localServiceName), put(operation)));
    return operation;
}

template <typename D> void impl_IDatagramSocket<D>::JoinMulticastGroup(const Windows::Networking::HostName & host) const
{
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->abi_JoinMulticastGroup(get(host)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> impl_IDatagramSocket<D>::GetOutputStreamAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> value;
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->abi_GetOutputStreamAsync(get(remoteHostName), get(remoteServiceName), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> impl_IDatagramSocket<D>::GetOutputStreamAsync(const Windows::Networking::EndpointPair & endpointPair) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> value;
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->abi_GetOutputStreamWithEndpointPairAsync(get(endpointPair), put(value)));
    return value;
}

template <typename D> event_token impl_IDatagramSocket<D>::MessageReceived(const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->add_MessageReceived(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IDatagramSocket> impl_IDatagramSocket<D>::MessageReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IDatagramSocket>(this, &ABI::Windows::Networking::Sockets::IDatagramSocket::remove_MessageReceived, MessageReceived(eventHandler));
}

template <typename D> void impl_IDatagramSocket<D>::MessageReceived(event_token eventCookie) const
{
    check_hresult(static_cast<const IDatagramSocket &>(static_cast<const D &>(*this))->remove_MessageReceived(eventCookie));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDatagramSocket2<D>::BindServiceNameAsync(hstring_ref localServiceName, const Windows::Networking::Connectivity::NetworkAdapter & adapter) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IDatagramSocket2 &>(static_cast<const D &>(*this))->abi_BindServiceNameAndAdapterAsync(get(localServiceName), get(adapter), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDatagramSocket3<D>::CancelIOAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IDatagramSocket3 &>(static_cast<const D &>(*this))->abi_CancelIOAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IDatagramSocket3<D>::EnableTransferOwnership(GUID taskId) const
{
    check_hresult(static_cast<const IDatagramSocket3 &>(static_cast<const D &>(*this))->abi_EnableTransferOwnership(taskId));
}

template <typename D> void impl_IDatagramSocket3<D>::EnableTransferOwnership(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) const
{
    check_hresult(static_cast<const IDatagramSocket3 &>(static_cast<const D &>(*this))->abi_EnableTransferOwnershipWithConnectedStandbyAction(taskId, connectedStandbyAction));
}

template <typename D> void impl_IDatagramSocket3<D>::TransferOwnership(hstring_ref socketId) const
{
    check_hresult(static_cast<const IDatagramSocket3 &>(static_cast<const D &>(*this))->abi_TransferOwnership(get(socketId)));
}

template <typename D> void impl_IDatagramSocket3<D>::TransferOwnership(hstring_ref socketId, const Windows::Networking::Sockets::SocketActivityContext & data) const
{
    check_hresult(static_cast<const IDatagramSocket3 &>(static_cast<const D &>(*this))->abi_TransferOwnershipWithContext(get(socketId), get(data)));
}

template <typename D> void impl_IDatagramSocket3<D>::TransferOwnership(hstring_ref socketId, const Windows::Networking::Sockets::SocketActivityContext & data, const Windows::Foundation::TimeSpan & keepAliveTime) const
{
    check_hresult(static_cast<const IDatagramSocket3 &>(static_cast<const D &>(*this))->abi_TransferOwnershipWithContextAndKeepAliveTime(get(socketId), get(data), get(keepAliveTime)));
}

template <typename D> Windows::Networking::HostName impl_IStreamSocketInformation<D>::LocalAddress() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_LocalAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IStreamSocketInformation<D>::LocalPort() const
{
    hstring value;
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_LocalPort(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IStreamSocketInformation<D>::RemoteHostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_RemoteHostName(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IStreamSocketInformation<D>::RemoteAddress() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_RemoteAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IStreamSocketInformation<D>::RemoteServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_RemoteServiceName(put(value)));
    return value;
}

template <typename D> hstring impl_IStreamSocketInformation<D>::RemotePort() const
{
    hstring value;
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_RemotePort(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::RoundTripTimeStatistics impl_IStreamSocketInformation<D>::RoundTripTimeStatistics() const
{
    Windows::Networking::Sockets::RoundTripTimeStatistics value {};
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_RoundTripTimeStatistics(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::BandwidthStatistics impl_IStreamSocketInformation<D>::BandwidthStatistics() const
{
    Windows::Networking::Sockets::BandwidthStatistics value {};
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_BandwidthStatistics(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketProtectionLevel impl_IStreamSocketInformation<D>::ProtectionLevel() const
{
    Windows::Networking::Sockets::SocketProtectionLevel value {};
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_ProtectionLevel(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IStreamSocketInformation<D>::SessionKey() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IStreamSocketInformation &>(static_cast<const D &>(*this))->get_SessionKey(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity impl_IStreamSocketInformation2<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value {};
    check_hresult(static_cast<const IStreamSocketInformation2 &>(static_cast<const D &>(*this))->get_ServerCertificateErrorSeverity(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> impl_IStreamSocketInformation2<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> value;
    check_hresult(static_cast<const IStreamSocketInformation2 &>(static_cast<const D &>(*this))->get_ServerCertificateErrors(put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate impl_IStreamSocketInformation2<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value { nullptr };
    check_hresult(static_cast<const IStreamSocketInformation2 &>(static_cast<const D &>(*this))->get_ServerCertificate(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> impl_IStreamSocketInformation2<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value;
    check_hresult(static_cast<const IStreamSocketInformation2 &>(static_cast<const D &>(*this))->get_ServerIntermediateCertificates(put(value)));
    return value;
}

template <typename D> bool impl_IStreamSocketControl<D>::NoDelay() const
{
    bool value {};
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->get_NoDelay(&value));
    return value;
}

template <typename D> void impl_IStreamSocketControl<D>::NoDelay(bool value) const
{
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->put_NoDelay(value));
}

template <typename D> bool impl_IStreamSocketControl<D>::KeepAlive() const
{
    bool value {};
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->get_KeepAlive(&value));
    return value;
}

template <typename D> void impl_IStreamSocketControl<D>::KeepAlive(bool value) const
{
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->put_KeepAlive(value));
}

template <typename D> uint32_t impl_IStreamSocketControl<D>::OutboundBufferSizeInBytes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->get_OutboundBufferSizeInBytes(&value));
    return value;
}

template <typename D> void impl_IStreamSocketControl<D>::OutboundBufferSizeInBytes(uint32_t value) const
{
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->put_OutboundBufferSizeInBytes(value));
}

template <typename D> Windows::Networking::Sockets::SocketQualityOfService impl_IStreamSocketControl<D>::QualityOfService() const
{
    Windows::Networking::Sockets::SocketQualityOfService value {};
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->get_QualityOfService(&value));
    return value;
}

template <typename D> void impl_IStreamSocketControl<D>::QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) const
{
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->put_QualityOfService(value));
}

template <typename D> uint8_t impl_IStreamSocketControl<D>::OutboundUnicastHopLimit() const
{
    uint8_t value {};
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->get_OutboundUnicastHopLimit(&value));
    return value;
}

template <typename D> void impl_IStreamSocketControl<D>::OutboundUnicastHopLimit(uint8_t value) const
{
    check_hresult(static_cast<const IStreamSocketControl &>(static_cast<const D &>(*this))->put_OutboundUnicastHopLimit(value));
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> impl_IStreamSocketControl2<D>::IgnorableServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> value;
    check_hresult(static_cast<const IStreamSocketControl2 &>(static_cast<const D &>(*this))->get_IgnorableServerCertificateErrors(put(value)));
    return value;
}

template <typename D> bool impl_IStreamSocketControl3<D>::SerializeConnectionAttempts() const
{
    bool value {};
    check_hresult(static_cast<const IStreamSocketControl3 &>(static_cast<const D &>(*this))->get_SerializeConnectionAttempts(&value));
    return value;
}

template <typename D> void impl_IStreamSocketControl3<D>::SerializeConnectionAttempts(bool value) const
{
    check_hresult(static_cast<const IStreamSocketControl3 &>(static_cast<const D &>(*this))->put_SerializeConnectionAttempts(value));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate impl_IStreamSocketControl3<D>::ClientCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value { nullptr };
    check_hresult(static_cast<const IStreamSocketControl3 &>(static_cast<const D &>(*this))->get_ClientCertificate(put(value)));
    return value;
}

template <typename D> void impl_IStreamSocketControl3<D>::ClientCertificate(const Windows::Security::Cryptography::Certificates::Certificate & value) const
{
    check_hresult(static_cast<const IStreamSocketControl3 &>(static_cast<const D &>(*this))->put_ClientCertificate(get(value)));
}

template <typename D> Windows::Networking::Sockets::StreamSocketControl impl_IStreamSocket<D>::Control() const
{
    Windows::Networking::Sockets::StreamSocketControl value { nullptr };
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->get_Control(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocketInformation impl_IStreamSocket<D>::Information() const
{
    Windows::Networking::Sockets::StreamSocketInformation value { nullptr };
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->get_Information(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IStreamSocket<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value;
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->get_InputStream(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IStreamSocket<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->get_OutputStream(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocket<D>::ConnectAsync(const Windows::Networking::EndpointPair & endpointPair) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->abi_ConnectWithEndpointPairAsync(get(endpointPair), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocket<D>::ConnectAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->abi_ConnectAsync(get(remoteHostName), get(remoteServiceName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocket<D>::ConnectAsync(const Windows::Networking::EndpointPair & endpointPair, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->abi_ConnectWithEndpointPairAndProtectionLevelAsync(get(endpointPair), protectionLevel, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocket<D>::ConnectAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->abi_ConnectWithProtectionLevelAsync(get(remoteHostName), get(remoteServiceName), protectionLevel, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocket<D>::UpgradeToSslAsync(Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, const Windows::Networking::HostName & validationHostName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocket &>(static_cast<const D &>(*this))->abi_UpgradeToSslAsync(protectionLevel, get(validationHostName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocket2<D>::ConnectAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, const Windows::Networking::Connectivity::NetworkAdapter & adapter) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocket2 &>(static_cast<const D &>(*this))->abi_ConnectWithProtectionLevelAndAdapterAsync(get(remoteHostName), get(remoteServiceName), protectionLevel, get(adapter), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocket3<D>::CancelIOAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocket3 &>(static_cast<const D &>(*this))->abi_CancelIOAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IStreamSocket3<D>::EnableTransferOwnership(GUID taskId) const
{
    check_hresult(static_cast<const IStreamSocket3 &>(static_cast<const D &>(*this))->abi_EnableTransferOwnership(taskId));
}

template <typename D> void impl_IStreamSocket3<D>::EnableTransferOwnership(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) const
{
    check_hresult(static_cast<const IStreamSocket3 &>(static_cast<const D &>(*this))->abi_EnableTransferOwnershipWithConnectedStandbyAction(taskId, connectedStandbyAction));
}

template <typename D> void impl_IStreamSocket3<D>::TransferOwnership(hstring_ref socketId) const
{
    check_hresult(static_cast<const IStreamSocket3 &>(static_cast<const D &>(*this))->abi_TransferOwnership(get(socketId)));
}

template <typename D> void impl_IStreamSocket3<D>::TransferOwnership(hstring_ref socketId, const Windows::Networking::Sockets::SocketActivityContext & data) const
{
    check_hresult(static_cast<const IStreamSocket3 &>(static_cast<const D &>(*this))->abi_TransferOwnershipWithContext(get(socketId), get(data)));
}

template <typename D> void impl_IStreamSocket3<D>::TransferOwnership(hstring_ref socketId, const Windows::Networking::Sockets::SocketActivityContext & data, const Windows::Foundation::TimeSpan & keepAliveTime) const
{
    check_hresult(static_cast<const IStreamSocket3 &>(static_cast<const D &>(*this))->abi_TransferOwnershipWithContextAndKeepAliveTime(get(socketId), get(data), get(keepAliveTime)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> impl_IStreamSocketStatics<D>::GetEndpointPairsAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> operation;
    check_hresult(static_cast<const IStreamSocketStatics &>(static_cast<const D &>(*this))->abi_GetEndpointPairsAsync(get(remoteHostName), get(remoteServiceName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> impl_IStreamSocketStatics<D>::GetEndpointPairsAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName, Windows::Networking::HostNameSortOptions sortOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> operation;
    check_hresult(static_cast<const IStreamSocketStatics &>(static_cast<const D &>(*this))->abi_GetEndpointPairsWithSortOptionsAsync(get(remoteHostName), get(remoteServiceName), sortOptions, put(operation)));
    return operation;
}

template <typename D> Windows::Networking::Sockets::SocketQualityOfService impl_IStreamSocketListenerControl<D>::QualityOfService() const
{
    Windows::Networking::Sockets::SocketQualityOfService value {};
    check_hresult(static_cast<const IStreamSocketListenerControl &>(static_cast<const D &>(*this))->get_QualityOfService(&value));
    return value;
}

template <typename D> void impl_IStreamSocketListenerControl<D>::QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) const
{
    check_hresult(static_cast<const IStreamSocketListenerControl &>(static_cast<const D &>(*this))->put_QualityOfService(value));
}

template <typename D> bool impl_IStreamSocketListenerControl2<D>::NoDelay() const
{
    bool value {};
    check_hresult(static_cast<const IStreamSocketListenerControl2 &>(static_cast<const D &>(*this))->get_NoDelay(&value));
    return value;
}

template <typename D> void impl_IStreamSocketListenerControl2<D>::NoDelay(bool value) const
{
    check_hresult(static_cast<const IStreamSocketListenerControl2 &>(static_cast<const D &>(*this))->put_NoDelay(value));
}

template <typename D> bool impl_IStreamSocketListenerControl2<D>::KeepAlive() const
{
    bool value {};
    check_hresult(static_cast<const IStreamSocketListenerControl2 &>(static_cast<const D &>(*this))->get_KeepAlive(&value));
    return value;
}

template <typename D> void impl_IStreamSocketListenerControl2<D>::KeepAlive(bool value) const
{
    check_hresult(static_cast<const IStreamSocketListenerControl2 &>(static_cast<const D &>(*this))->put_KeepAlive(value));
}

template <typename D> uint32_t impl_IStreamSocketListenerControl2<D>::OutboundBufferSizeInBytes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStreamSocketListenerControl2 &>(static_cast<const D &>(*this))->get_OutboundBufferSizeInBytes(&value));
    return value;
}

template <typename D> void impl_IStreamSocketListenerControl2<D>::OutboundBufferSizeInBytes(uint32_t value) const
{
    check_hresult(static_cast<const IStreamSocketListenerControl2 &>(static_cast<const D &>(*this))->put_OutboundBufferSizeInBytes(value));
}

template <typename D> uint8_t impl_IStreamSocketListenerControl2<D>::OutboundUnicastHopLimit() const
{
    uint8_t value {};
    check_hresult(static_cast<const IStreamSocketListenerControl2 &>(static_cast<const D &>(*this))->get_OutboundUnicastHopLimit(&value));
    return value;
}

template <typename D> void impl_IStreamSocketListenerControl2<D>::OutboundUnicastHopLimit(uint8_t value) const
{
    check_hresult(static_cast<const IStreamSocketListenerControl2 &>(static_cast<const D &>(*this))->put_OutboundUnicastHopLimit(value));
}

template <typename D> hstring impl_IStreamSocketListenerInformation<D>::LocalPort() const
{
    hstring value;
    check_hresult(static_cast<const IStreamSocketListenerInformation &>(static_cast<const D &>(*this))->get_LocalPort(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocket impl_IStreamSocketListenerConnectionReceivedEventArgs<D>::Socket() const
{
    Windows::Networking::Sockets::StreamSocket value { nullptr };
    check_hresult(static_cast<const IStreamSocketListenerConnectionReceivedEventArgs &>(static_cast<const D &>(*this))->get_Socket(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocketListenerControl impl_IStreamSocketListener<D>::Control() const
{
    Windows::Networking::Sockets::StreamSocketListenerControl value { nullptr };
    check_hresult(static_cast<const IStreamSocketListener &>(static_cast<const D &>(*this))->get_Control(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocketListenerInformation impl_IStreamSocketListener<D>::Information() const
{
    Windows::Networking::Sockets::StreamSocketListenerInformation value { nullptr };
    check_hresult(static_cast<const IStreamSocketListener &>(static_cast<const D &>(*this))->get_Information(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocketListener<D>::BindServiceNameAsync(hstring_ref localServiceName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocketListener &>(static_cast<const D &>(*this))->abi_BindServiceNameAsync(get(localServiceName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocketListener<D>::BindEndpointAsync(const Windows::Networking::HostName & localHostName, hstring_ref localServiceName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocketListener &>(static_cast<const D &>(*this))->abi_BindEndpointAsync(get(localHostName), get(localServiceName), put(operation)));
    return operation;
}

template <typename D> event_token impl_IStreamSocketListener<D>::ConnectionReceived(const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IStreamSocketListener &>(static_cast<const D &>(*this))->add_ConnectionReceived(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IStreamSocketListener> impl_IStreamSocketListener<D>::ConnectionReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IStreamSocketListener>(this, &ABI::Windows::Networking::Sockets::IStreamSocketListener::remove_ConnectionReceived, ConnectionReceived(eventHandler));
}

template <typename D> void impl_IStreamSocketListener<D>::ConnectionReceived(event_token eventCookie) const
{
    check_hresult(static_cast<const IStreamSocketListener &>(static_cast<const D &>(*this))->remove_ConnectionReceived(eventCookie));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocketListener2<D>::BindServiceNameAsync(hstring_ref localServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocketListener2 &>(static_cast<const D &>(*this))->abi_BindServiceNameWithProtectionLevelAsync(get(localServiceName), protectionLevel, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocketListener2<D>::BindServiceNameAsync(hstring_ref localServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, const Windows::Networking::Connectivity::NetworkAdapter & adapter) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocketListener2 &>(static_cast<const D &>(*this))->abi_BindServiceNameWithProtectionLevelAndAdapterAsync(get(localServiceName), protectionLevel, get(adapter), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStreamSocketListener3<D>::CancelIOAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStreamSocketListener3 &>(static_cast<const D &>(*this))->abi_CancelIOAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IStreamSocketListener3<D>::EnableTransferOwnership(GUID taskId) const
{
    check_hresult(static_cast<const IStreamSocketListener3 &>(static_cast<const D &>(*this))->abi_EnableTransferOwnership(taskId));
}

template <typename D> void impl_IStreamSocketListener3<D>::EnableTransferOwnership(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) const
{
    check_hresult(static_cast<const IStreamSocketListener3 &>(static_cast<const D &>(*this))->abi_EnableTransferOwnershipWithConnectedStandbyAction(taskId, connectedStandbyAction));
}

template <typename D> void impl_IStreamSocketListener3<D>::TransferOwnership(hstring_ref socketId) const
{
    check_hresult(static_cast<const IStreamSocketListener3 &>(static_cast<const D &>(*this))->abi_TransferOwnership(get(socketId)));
}

template <typename D> void impl_IStreamSocketListener3<D>::TransferOwnership(hstring_ref socketId, const Windows::Networking::Sockets::SocketActivityContext & data) const
{
    check_hresult(static_cast<const IStreamSocketListener3 &>(static_cast<const D &>(*this))->abi_TransferOwnershipWithContext(get(socketId), get(data)));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate impl_IWebSocketServerCustomValidationRequestedEventArgs<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value { nullptr };
    check_hresult(static_cast<const IWebSocketServerCustomValidationRequestedEventArgs &>(static_cast<const D &>(*this))->get_ServerCertificate(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity impl_IWebSocketServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value {};
    check_hresult(static_cast<const IWebSocketServerCustomValidationRequestedEventArgs &>(static_cast<const D &>(*this))->get_ServerCertificateErrorSeverity(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> impl_IWebSocketServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> value;
    check_hresult(static_cast<const IWebSocketServerCustomValidationRequestedEventArgs &>(static_cast<const D &>(*this))->get_ServerCertificateErrors(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> impl_IWebSocketServerCustomValidationRequestedEventArgs<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value;
    check_hresult(static_cast<const IWebSocketServerCustomValidationRequestedEventArgs &>(static_cast<const D &>(*this))->get_ServerIntermediateCertificates(put(value)));
    return value;
}

template <typename D> void impl_IWebSocketServerCustomValidationRequestedEventArgs<D>::Reject() const
{
    check_hresult(static_cast<const IWebSocketServerCustomValidationRequestedEventArgs &>(static_cast<const D &>(*this))->abi_Reject());
}

template <typename D> Windows::Foundation::Deferral impl_IWebSocketServerCustomValidationRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(static_cast<const IWebSocketServerCustomValidationRequestedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> uint32_t impl_IWebSocketControl<D>::OutboundBufferSizeInBytes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IWebSocketControl &>(static_cast<const D &>(*this))->get_OutboundBufferSizeInBytes(&value));
    return value;
}

template <typename D> void impl_IWebSocketControl<D>::OutboundBufferSizeInBytes(uint32_t value) const
{
    check_hresult(static_cast<const IWebSocketControl &>(static_cast<const D &>(*this))->put_OutboundBufferSizeInBytes(value));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IWebSocketControl<D>::ServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IWebSocketControl &>(static_cast<const D &>(*this))->get_ServerCredential(put(value)));
    return value;
}

template <typename D> void impl_IWebSocketControl<D>::ServerCredential(const Windows::Security::Credentials::PasswordCredential & value) const
{
    check_hresult(static_cast<const IWebSocketControl &>(static_cast<const D &>(*this))->put_ServerCredential(get(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IWebSocketControl<D>::ProxyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IWebSocketControl &>(static_cast<const D &>(*this))->get_ProxyCredential(put(value)));
    return value;
}

template <typename D> void impl_IWebSocketControl<D>::ProxyCredential(const Windows::Security::Credentials::PasswordCredential & value) const
{
    check_hresult(static_cast<const IWebSocketControl &>(static_cast<const D &>(*this))->put_ProxyCredential(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IWebSocketControl<D>::SupportedProtocols() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IWebSocketControl &>(static_cast<const D &>(*this))->get_SupportedProtocols(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> impl_IWebSocketControl2<D>::IgnorableServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> value;
    check_hresult(static_cast<const IWebSocketControl2 &>(static_cast<const D &>(*this))->get_IgnorableServerCertificateErrors(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IWebSocketInformation<D>::LocalAddress() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IWebSocketInformation &>(static_cast<const D &>(*this))->get_LocalAddress(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::BandwidthStatistics impl_IWebSocketInformation<D>::BandwidthStatistics() const
{
    Windows::Networking::Sockets::BandwidthStatistics value {};
    check_hresult(static_cast<const IWebSocketInformation &>(static_cast<const D &>(*this))->get_BandwidthStatistics(put(value)));
    return value;
}

template <typename D> hstring impl_IWebSocketInformation<D>::Protocol() const
{
    hstring value;
    check_hresult(static_cast<const IWebSocketInformation &>(static_cast<const D &>(*this))->get_Protocol(put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate impl_IWebSocketInformation2<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value { nullptr };
    check_hresult(static_cast<const IWebSocketInformation2 &>(static_cast<const D &>(*this))->get_ServerCertificate(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity impl_IWebSocketInformation2<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value {};
    check_hresult(static_cast<const IWebSocketInformation2 &>(static_cast<const D &>(*this))->get_ServerCertificateErrorSeverity(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> impl_IWebSocketInformation2<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> value;
    check_hresult(static_cast<const IWebSocketInformation2 &>(static_cast<const D &>(*this))->get_ServerCertificateErrors(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> impl_IWebSocketInformation2<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value;
    check_hresult(static_cast<const IWebSocketInformation2 &>(static_cast<const D &>(*this))->get_ServerIntermediateCertificates(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IWebSocket<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const IWebSocket &>(static_cast<const D &>(*this))->get_OutputStream(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWebSocket<D>::ConnectAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IWebSocket &>(static_cast<const D &>(*this))->abi_ConnectAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> void impl_IWebSocket<D>::SetRequestHeader(hstring_ref headerName, hstring_ref headerValue) const
{
    check_hresult(static_cast<const IWebSocket &>(static_cast<const D &>(*this))->abi_SetRequestHeader(get(headerName), get(headerValue)));
}

template <typename D> event_token impl_IWebSocket<D>::Closed(const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IWebSocket &>(static_cast<const D &>(*this))->add_Closed(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IWebSocket> impl_IWebSocket<D>::Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IWebSocket>(this, &ABI::Windows::Networking::Sockets::IWebSocket::remove_Closed, Closed(eventHandler));
}

template <typename D> void impl_IWebSocket<D>::Closed(event_token eventCookie) const
{
    check_hresult(static_cast<const IWebSocket &>(static_cast<const D &>(*this))->remove_Closed(eventCookie));
}

template <typename D> void impl_IWebSocket<D>::Close(uint16_t code, hstring_ref reason) const
{
    check_hresult(static_cast<const IWebSocket &>(static_cast<const D &>(*this))->abi_CloseWithStatus(code, get(reason)));
}

template <typename D> uint32_t impl_IMessageWebSocketControl<D>::MaxMessageSize() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMessageWebSocketControl &>(static_cast<const D &>(*this))->get_MaxMessageSize(&value));
    return value;
}

template <typename D> void impl_IMessageWebSocketControl<D>::MaxMessageSize(uint32_t value) const
{
    check_hresult(static_cast<const IMessageWebSocketControl &>(static_cast<const D &>(*this))->put_MaxMessageSize(value));
}

template <typename D> Windows::Networking::Sockets::SocketMessageType impl_IMessageWebSocketControl<D>::MessageType() const
{
    Windows::Networking::Sockets::SocketMessageType value {};
    check_hresult(static_cast<const IMessageWebSocketControl &>(static_cast<const D &>(*this))->get_MessageType(&value));
    return value;
}

template <typename D> void impl_IMessageWebSocketControl<D>::MessageType(Windows::Networking::Sockets::SocketMessageType value) const
{
    check_hresult(static_cast<const IMessageWebSocketControl &>(static_cast<const D &>(*this))->put_MessageType(value));
}

template <typename D> Windows::Networking::Sockets::MessageWebSocketControl impl_IMessageWebSocket<D>::Control() const
{
    Windows::Networking::Sockets::MessageWebSocketControl value { nullptr };
    check_hresult(static_cast<const IMessageWebSocket &>(static_cast<const D &>(*this))->get_Control(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::MessageWebSocketInformation impl_IMessageWebSocket<D>::Information() const
{
    Windows::Networking::Sockets::MessageWebSocketInformation value { nullptr };
    check_hresult(static_cast<const IMessageWebSocket &>(static_cast<const D &>(*this))->get_Information(put(value)));
    return value;
}

template <typename D> event_token impl_IMessageWebSocket<D>::MessageReceived(const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IMessageWebSocket &>(static_cast<const D &>(*this))->add_MessageReceived(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMessageWebSocket> impl_IMessageWebSocket<D>::MessageReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IMessageWebSocket>(this, &ABI::Windows::Networking::Sockets::IMessageWebSocket::remove_MessageReceived, MessageReceived(eventHandler));
}

template <typename D> void impl_IMessageWebSocket<D>::MessageReceived(event_token eventCookie) const
{
    check_hresult(static_cast<const IMessageWebSocket &>(static_cast<const D &>(*this))->remove_MessageReceived(eventCookie));
}

template <typename D> event_token impl_IMessageWebSocket2<D>::ServerCustomValidationRequested(const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IMessageWebSocket2 &>(static_cast<const D &>(*this))->add_ServerCustomValidationRequested(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMessageWebSocket2> impl_IMessageWebSocket2<D>::ServerCustomValidationRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IMessageWebSocket2>(this, &ABI::Windows::Networking::Sockets::IMessageWebSocket2::remove_ServerCustomValidationRequested, ServerCustomValidationRequested(eventHandler));
}

template <typename D> void impl_IMessageWebSocket2<D>::ServerCustomValidationRequested(event_token eventCookie) const
{
    check_hresult(static_cast<const IMessageWebSocket2 &>(static_cast<const D &>(*this))->remove_ServerCustomValidationRequested(eventCookie));
}

template <typename D> bool impl_IStreamWebSocketControl<D>::NoDelay() const
{
    bool value {};
    check_hresult(static_cast<const IStreamWebSocketControl &>(static_cast<const D &>(*this))->get_NoDelay(&value));
    return value;
}

template <typename D> void impl_IStreamWebSocketControl<D>::NoDelay(bool value) const
{
    check_hresult(static_cast<const IStreamWebSocketControl &>(static_cast<const D &>(*this))->put_NoDelay(value));
}

template <typename D> Windows::Networking::Sockets::StreamWebSocketControl impl_IStreamWebSocket<D>::Control() const
{
    Windows::Networking::Sockets::StreamWebSocketControl value { nullptr };
    check_hresult(static_cast<const IStreamWebSocket &>(static_cast<const D &>(*this))->get_Control(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamWebSocketInformation impl_IStreamWebSocket<D>::Information() const
{
    Windows::Networking::Sockets::StreamWebSocketInformation value { nullptr };
    check_hresult(static_cast<const IStreamWebSocket &>(static_cast<const D &>(*this))->get_Information(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IStreamWebSocket<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value;
    check_hresult(static_cast<const IStreamWebSocket &>(static_cast<const D &>(*this))->get_InputStream(put(value)));
    return value;
}

template <typename D> event_token impl_IStreamWebSocket2<D>::ServerCustomValidationRequested(const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IStreamWebSocket2 &>(static_cast<const D &>(*this))->add_ServerCustomValidationRequested(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IStreamWebSocket2> impl_IStreamWebSocket2<D>::ServerCustomValidationRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IStreamWebSocket2>(this, &ABI::Windows::Networking::Sockets::IStreamWebSocket2::remove_ServerCustomValidationRequested, ServerCustomValidationRequested(eventHandler));
}

template <typename D> void impl_IStreamWebSocket2<D>::ServerCustomValidationRequested(event_token eventCookie) const
{
    check_hresult(static_cast<const IStreamWebSocket2 &>(static_cast<const D &>(*this))->remove_ServerCustomValidationRequested(eventCookie));
}

template <typename D> Windows::Networking::Sockets::SocketErrorStatus impl_ISocketErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Networking::Sockets::SocketErrorStatus status {};
    check_hresult(static_cast<const ISocketErrorStatics &>(static_cast<const D &>(*this))->abi_GetStatus(hresult, &status));
    return status;
}

template <typename D> Windows::Web::WebErrorStatus impl_IWebSocketErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::WebErrorStatus status {};
    check_hresult(static_cast<const IWebSocketErrorStatics &>(static_cast<const D &>(*this))->abi_GetStatus(hresult, &status));
    return status;
}

template <typename D> hstring impl_IControlChannelTrigger<D>::ControlChannelTriggerId() const
{
    hstring value;
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->get_ControlChannelTriggerId(put(value)));
    return value;
}

template <typename D> uint32_t impl_IControlChannelTrigger<D>::ServerKeepAliveIntervalInMinutes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->get_ServerKeepAliveIntervalInMinutes(&value));
    return value;
}

template <typename D> void impl_IControlChannelTrigger<D>::ServerKeepAliveIntervalInMinutes(uint32_t value) const
{
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->put_ServerKeepAliveIntervalInMinutes(value));
}

template <typename D> uint32_t impl_IControlChannelTrigger<D>::CurrentKeepAliveIntervalInMinutes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->get_CurrentKeepAliveIntervalInMinutes(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_IControlChannelTrigger<D>::TransportObject() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->get_TransportObject(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTrigger impl_IControlChannelTrigger<D>::KeepAliveTrigger() const
{
    Windows::ApplicationModel::Background::IBackgroundTrigger trigger;
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->get_KeepAliveTrigger(put(trigger)));
    return trigger;
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTrigger impl_IControlChannelTrigger<D>::PushNotificationTrigger() const
{
    Windows::ApplicationModel::Background::IBackgroundTrigger trigger;
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->get_PushNotificationTrigger(put(trigger)));
    return trigger;
}

template <typename D> void impl_IControlChannelTrigger<D>::UsingTransport(const Windows::IInspectable & transport) const
{
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->abi_UsingTransport(get(transport)));
}

template <typename D> Windows::Networking::Sockets::ControlChannelTriggerStatus impl_IControlChannelTrigger<D>::WaitForPushEnabled() const
{
    Windows::Networking::Sockets::ControlChannelTriggerStatus channelTriggerStatus {};
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->abi_WaitForPushEnabled(&channelTriggerStatus));
    return channelTriggerStatus;
}

template <typename D> void impl_IControlChannelTrigger<D>::DecreaseNetworkKeepAliveInterval() const
{
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->abi_DecreaseNetworkKeepAliveInterval());
}

template <typename D> void impl_IControlChannelTrigger<D>::FlushTransport() const
{
    check_hresult(static_cast<const IControlChannelTrigger &>(static_cast<const D &>(*this))->abi_FlushTransport());
}

template <typename D> Windows::Networking::Sockets::ControlChannelTrigger impl_IControlChannelTriggerFactory<D>::CreateControlChannelTrigger(hstring_ref channelId, uint32_t serverKeepAliveIntervalInMinutes) const
{
    Windows::Networking::Sockets::ControlChannelTrigger notificationChannel { nullptr };
    check_hresult(static_cast<const IControlChannelTriggerFactory &>(static_cast<const D &>(*this))->abi_CreateControlChannelTrigger(get(channelId), serverKeepAliveIntervalInMinutes, put(notificationChannel)));
    return notificationChannel;
}

template <typename D> Windows::Networking::Sockets::ControlChannelTrigger impl_IControlChannelTriggerFactory<D>::CreateControlChannelTriggerEx(hstring_ref channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType resourceRequestType) const
{
    Windows::Networking::Sockets::ControlChannelTrigger notificationChannel { nullptr };
    check_hresult(static_cast<const IControlChannelTriggerFactory &>(static_cast<const D &>(*this))->abi_CreateControlChannelTriggerEx(get(channelId), serverKeepAliveIntervalInMinutes, resourceRequestType, put(notificationChannel)));
    return notificationChannel;
}

template <typename D> Windows::Networking::Sockets::ControlChannelTrigger impl_IControlChannelTriggerEventDetails<D>::ControlChannelTrigger() const
{
    Windows::Networking::Sockets::ControlChannelTrigger value { nullptr };
    check_hresult(static_cast<const IControlChannelTriggerEventDetails &>(static_cast<const D &>(*this))->get_ControlChannelTrigger(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::ControlChannelTriggerResetReason impl_IControlChannelTriggerResetEventDetails<D>::ResetReason() const
{
    Windows::Networking::Sockets::ControlChannelTriggerResetReason value {};
    check_hresult(static_cast<const IControlChannelTriggerResetEventDetails &>(static_cast<const D &>(*this))->get_ResetReason(&value));
    return value;
}

template <typename D> bool impl_IControlChannelTriggerResetEventDetails<D>::HardwareSlotReset() const
{
    bool value {};
    check_hresult(static_cast<const IControlChannelTriggerResetEventDetails &>(static_cast<const D &>(*this))->get_HardwareSlotReset(&value));
    return value;
}

template <typename D> bool impl_IControlChannelTriggerResetEventDetails<D>::SoftwareSlotReset() const
{
    bool value {};
    check_hresult(static_cast<const IControlChannelTriggerResetEventDetails &>(static_cast<const D &>(*this))->get_SoftwareSlotReset(&value));
    return value;
}

template <typename D> bool impl_IControlChannelTrigger2<D>::IsWakeFromLowPowerSupported() const
{
    bool value {};
    check_hresult(static_cast<const IControlChannelTrigger2 &>(static_cast<const D &>(*this))->get_IsWakeFromLowPowerSupported(&value));
    return value;
}

inline ControlChannelTrigger::ControlChannelTrigger(hstring_ref channelId, uint32_t serverKeepAliveIntervalInMinutes) :
    ControlChannelTrigger(get_activation_factory<ControlChannelTrigger, IControlChannelTriggerFactory>().CreateControlChannelTrigger(channelId, serverKeepAliveIntervalInMinutes))
{}

inline ControlChannelTrigger::ControlChannelTrigger(hstring_ref channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType resourceRequestType) :
    ControlChannelTrigger(get_activation_factory<ControlChannelTrigger, IControlChannelTriggerFactory>().CreateControlChannelTriggerEx(channelId, serverKeepAliveIntervalInMinutes, resourceRequestType))
{}

inline DatagramSocket::DatagramSocket() :
    DatagramSocket(activate_instance<DatagramSocket>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> DatagramSocket::GetEndpointPairsAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName)
{
    return get_activation_factory<DatagramSocket, IDatagramSocketStatics>().GetEndpointPairsAsync(remoteHostName, remoteServiceName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> DatagramSocket::GetEndpointPairsAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName, Windows::Networking::HostNameSortOptions sortOptions)
{
    return get_activation_factory<DatagramSocket, IDatagramSocketStatics>().GetEndpointPairsAsync(remoteHostName, remoteServiceName, sortOptions);
}

inline MessageWebSocket::MessageWebSocket() :
    MessageWebSocket(activate_instance<MessageWebSocket>())
{}

inline SocketActivityContext::SocketActivityContext(const Windows::Storage::Streams::IBuffer & data) :
    SocketActivityContext(get_activation_factory<SocketActivityContext, ISocketActivityContextFactory>().Create(data))
{}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation> SocketActivityInformation::AllSockets()
{
    return get_activation_factory<SocketActivityInformation, ISocketActivityInformationStatics>().AllSockets();
}

inline Windows::Networking::Sockets::SocketErrorStatus SocketError::GetStatus(int32_t hresult)
{
    return get_activation_factory<SocketError, ISocketErrorStatics>().GetStatus(hresult);
}

inline StreamSocket::StreamSocket() :
    StreamSocket(activate_instance<StreamSocket>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> StreamSocket::GetEndpointPairsAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName)
{
    return get_activation_factory<StreamSocket, IStreamSocketStatics>().GetEndpointPairsAsync(remoteHostName, remoteServiceName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> StreamSocket::GetEndpointPairsAsync(const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName, Windows::Networking::HostNameSortOptions sortOptions)
{
    return get_activation_factory<StreamSocket, IStreamSocketStatics>().GetEndpointPairsAsync(remoteHostName, remoteServiceName, sortOptions);
}

inline StreamSocketListener::StreamSocketListener() :
    StreamSocketListener(activate_instance<StreamSocketListener>())
{}

inline StreamWebSocket::StreamWebSocket() :
    StreamWebSocket(activate_instance<StreamWebSocket>())
{}

inline Windows::Web::WebErrorStatus WebSocketError::GetStatus(int32_t hresult)
{
    return get_activation_factory<WebSocketError, IWebSocketErrorStatics>().GetStatus(hresult);
}

inline WebSocketKeepAlive::WebSocketKeepAlive() :
    WebSocketKeepAlive(activate_instance<WebSocketKeepAlive>())
{}

}

}
