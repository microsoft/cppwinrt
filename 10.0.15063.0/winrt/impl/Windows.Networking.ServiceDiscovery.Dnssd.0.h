// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

struct NetworkAdapter;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

struct DatagramSocket;
struct StreamSocketListener;

}

WINRT_EXPORT namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd {

enum class DnssdRegistrationStatus
{
    Success = 0,
    InvalidServiceName = 1,
    ServerError = 2,
    SecurityError = 3,
};

enum class DnssdServiceWatcherStatus
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopping = 3,
    Stopped = 4,
    Aborted = 5,
};

struct IDnssdRegistrationResult;
struct IDnssdServiceInstance;
struct IDnssdServiceInstanceFactory;
struct IDnssdServiceWatcher;
struct DnssdRegistrationResult;
struct DnssdServiceInstance;
struct DnssdServiceInstanceCollection;
struct DnssdServiceWatcher;

}

namespace winrt::impl {

template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>{ using type = interface_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>{ using type = interface_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ using type = class_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>{ using type = class_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>{ using type = class_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>{ using type = class_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus>{ using type = enum_category; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationStatus" }; };
template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus>{ static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcherStatus" }; };
template <> struct guid<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>{ static constexpr GUID value{ 0x3D786AD2,0xE606,0x5350,{ 0x73,0xEA,0x7E,0x97,0xF0,0x66,0x16,0x2F } }; };
template <> struct guid<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>{ static constexpr GUID value{ 0xE246DB7E,0x98A5,0x4CA1,{ 0xB9,0xE4,0xC2,0x53,0xD3,0x3C,0x35,0xFF } }; };
template <> struct guid<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>{ static constexpr GUID value{ 0x6CB061A1,0xC478,0x4331,{ 0x96,0x84,0x4A,0xF2,0x18,0x6C,0x0A,0x2B } }; };
template <> struct guid<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>{ static constexpr GUID value{ 0xCC34D9C1,0xDB7D,0x4B69,{ 0x98,0x3D,0xC6,0xF8,0x3F,0x20,0x56,0x82 } }; };
template <> struct default_interface<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ using type = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult; };
template <> struct default_interface<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>{ using type = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance; };
template <> struct default_interface<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>; };
template <> struct default_interface<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>{ using type = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher; };

template <typename D>
struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus Status() const;
    Windows::Networking::HostName IPAddress() const;
    bool HasInstanceNameChanged() const;
};
template <> struct consume<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> { template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>; };

template <typename D>
struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance
{
    hstring DnssdServiceInstanceName() const;
    void DnssdServiceInstanceName(param::hstring const& value) const;
    Windows::Networking::HostName HostName() const;
    void HostName(Windows::Networking::HostName const& value) const;
    uint16_t Port() const;
    void Port(uint16_t value) const;
    uint16_t Priority() const;
    void Priority(uint16_t value) const;
    uint16_t Weight() const;
    void Weight(uint16_t value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> TextAttributes() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> RegisterStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& socket) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> RegisterStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& socket, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> RegisterDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& socket) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> RegisterDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& socket, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
};
template <> struct consume<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> { template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>; };

template <typename D>
struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance Create(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port) const;
};
template <> struct consume<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory> { template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory<D>; };

template <typename D>
struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher
{
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const;
    using Added_revoker = event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const;
    void Added(event_token const& token) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& token) const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void Stopped(event_token const& token) const;
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus Status() const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> { template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>; };

template <> struct abi<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus>* value) = 0;
    virtual HRESULT __stdcall get_IPAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HasInstanceNameChanged(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DnssdServiceInstanceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DnssdServiceInstanceName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_HostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_HostName(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Port(uint16_t* value) = 0;
    virtual HRESULT __stdcall put_Port(uint16_t value) = 0;
    virtual HRESULT __stdcall get_Priority(uint16_t* value) = 0;
    virtual HRESULT __stdcall put_Priority(uint16_t value) = 0;
    virtual HRESULT __stdcall get_Weight(uint16_t* value) = 0;
    virtual HRESULT __stdcall put_Weight(uint16_t value) = 0;
    virtual HRESULT __stdcall get_TextAttributes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RegisterStreamSocketListenerAsync1(::IUnknown* socket, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RegisterStreamSocketListenerAsync2(::IUnknown* socket, ::IUnknown* adapter, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RegisterDatagramSocketAsync1(::IUnknown* socket, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RegisterDatagramSocketAsync2(::IUnknown* socket, ::IUnknown* adapter, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING dnssdServiceInstanceName, ::IUnknown* hostName, uint16_t port, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Added(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus>* status) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

}
