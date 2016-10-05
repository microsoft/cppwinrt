// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Networking.ServiceDiscovery.Dnssd.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Networking.Connectivity.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::ServiceDiscovery::Dnssd {

struct __declspec(uuid("3d786ad2-e606-5350-73ea-7e97f066162f")) __declspec(novtable) IDnssdRegistrationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus * value) = 0;
    virtual HRESULT __stdcall get_IPAddress(Windows::Networking::IHostName ** value) = 0;
    virtual HRESULT __stdcall get_HasInstanceNameChanged(bool * value) = 0;
};

struct __declspec(uuid("e246db7e-98a5-4ca1-b9e4-c253d33c35ff")) __declspec(novtable) IDnssdServiceInstance : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DnssdServiceInstanceName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DnssdServiceInstanceName(hstring value) = 0;
    virtual HRESULT __stdcall get_HostName(Windows::Networking::IHostName ** value) = 0;
    virtual HRESULT __stdcall put_HostName(Windows::Networking::IHostName * value) = 0;
    virtual HRESULT __stdcall get_Port(uint16_t * value) = 0;
    virtual HRESULT __stdcall put_Port(uint16_t value) = 0;
    virtual HRESULT __stdcall get_Priority(uint16_t * value) = 0;
    virtual HRESULT __stdcall put_Priority(uint16_t value) = 0;
    virtual HRESULT __stdcall get_Weight(uint16_t * value) = 0;
    virtual HRESULT __stdcall put_Weight(uint16_t value) = 0;
    virtual HRESULT __stdcall get_TextAttributes(Windows::Foundation::Collections::IMap<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_RegisterStreamSocketListenerAsync1(Windows::Networking::Sockets::IStreamSocketListener * socket, Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_RegisterStreamSocketListenerAsync2(Windows::Networking::Sockets::IStreamSocketListener * socket, Windows::Networking::Connectivity::INetworkAdapter * adapter, Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_RegisterDatagramSocketAsync1(Windows::Networking::Sockets::IDatagramSocket * socket, Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_RegisterDatagramSocketAsync2(Windows::Networking::Sockets::IDatagramSocket * socket, Windows::Networking::Connectivity::INetworkAdapter * adapter, Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> ** result) = 0;
};

struct __declspec(uuid("6cb061a1-c478-4331-9684-4af2186c0a2b")) __declspec(novtable) IDnssdServiceInstanceFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring dnssdServiceInstanceName, Windows::Networking::IHostName * hostName, uint16_t port, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance ** result) = 0;
};

struct __declspec(uuid("cc34d9c1-db7d-4b69-983d-c6f83f205682")) __declspec(novtable) IDnssdServiceWatcher : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Added(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus * status) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> { using default_interface = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult; };
template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> { using default_interface = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance; };
template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection> { using default_interface = Windows::Foundation::Collections::IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>; };
template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher> { using default_interface = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher; };

}

namespace Windows::Networking::ServiceDiscovery::Dnssd {

template <typename T> struct impl_IDnssdRegistrationResult;
template <typename T> struct impl_IDnssdServiceInstance;
template <typename T> struct impl_IDnssdServiceInstanceFactory;
template <typename T> struct impl_IDnssdServiceWatcher;

}

namespace impl {

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
{
    using abi = ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult;
    template <typename D> using consume = Windows::Networking::ServiceDiscovery::Dnssd::impl_IDnssdRegistrationResult<D>;
};

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
{
    using abi = ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance;
    template <typename D> using consume = Windows::Networking::ServiceDiscovery::Dnssd::impl_IDnssdServiceInstance<D>;
};

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
{
    using abi = ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory;
    template <typename D> using consume = Windows::Networking::ServiceDiscovery::Dnssd::impl_IDnssdServiceInstanceFactory<D>;
};

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
{
    using abi = ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher;
    template <typename D> using consume = Windows::Networking::ServiceDiscovery::Dnssd::impl_IDnssdServiceWatcher<D>;
};

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>
{
    using abi = ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult"; }
};

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>
{
    using abi = ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance"; }
};

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>
{
    using abi = ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection"; }
};

template <> struct traits<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>
{
    using abi = ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher"; }
};

}

}
