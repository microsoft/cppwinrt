// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Networking.ServiceDiscovery.Dnssd.1.h"
#include "Windows.Foundation.2.h"

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

#ifndef WINRT_GENERIC_e617711e_cdd5_5975_8fb3_8eaaaed24e7b
#define WINRT_GENERIC_e617711e_cdd5_5975_8fb3_8eaaaed24e7b
template <> struct __declspec(uuid("e617711e-cdd5-5975-8fb3-8eaaaed24e7b")) __declspec(novtable) TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> : impl_TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> {};
#endif

#ifndef WINRT_GENERIC_6a6cc5d5_9f43_545a_91d7_3a40055475da
#define WINRT_GENERIC_6a6cc5d5_9f43_545a_91d7_3a40055475da
template <> struct __declspec(uuid("6a6cc5d5-9f43-545a-91d7-3a40055475da")) __declspec(novtable) TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> : impl_TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_0c251e73_52c9_5026_a875_f685a50cbffd
#define WINRT_GENERIC_0c251e73_52c9_5026_a875_f685a50cbffd
template <> struct __declspec(uuid("0c251e73-52c9-5026-a875-f685a50cbffd")) __declspec(novtable) IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> : impl_IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f75ff82a_7e10_5cf6_8064_6ae585e0bd8d
#define WINRT_GENERIC_f75ff82a_7e10_5cf6_8064_6ae585e0bd8d
template <> struct __declspec(uuid("f75ff82a-7e10-5cf6-8064-6ae585e0bd8d")) __declspec(novtable) IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> : impl_IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> {};
#endif

#ifndef WINRT_GENERIC_1de3a3e5_387e_5328_b864_3f0e3475d343
#define WINRT_GENERIC_1de3a3e5_387e_5328_b864_3f0e3475d343
template <> struct __declspec(uuid("1de3a3e5-387e-5328-b864-3f0e3475d343")) __declspec(novtable) IIterable<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> : impl_IIterable<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_f3632f52_894a_5345_9be6_8389751c5189
#define WINRT_GENERIC_f3632f52_894a_5345_9be6_8389751c5189
template <> struct __declspec(uuid("f3632f52-894a-5345-9be6-8389751c5189")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> : impl_AsyncOperationCompletedHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_bc0cca83_44e5_5544_ab5b_e09d66f5fd5f
#define WINRT_GENERIC_bc0cca83_44e5_5544_ab5b_e09d66f5fd5f
template <> struct __declspec(uuid("bc0cca83-44e5-5544-ab5b-e09d66f5fd5f")) __declspec(novtable) IIterator<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> : impl_IIterator<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> {};
#endif

#ifndef WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
#define WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
template <> struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif

#ifndef WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
#define WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
template <> struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif


}

namespace Windows::Networking::ServiceDiscovery::Dnssd {

template <typename D>
struct WINRT_EBO impl_IDnssdRegistrationResult
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus Status() const;
    Windows::Networking::HostName IPAddress() const;
    bool HasInstanceNameChanged() const;
};

template <typename D>
struct WINRT_EBO impl_IDnssdServiceInstance
{
    hstring DnssdServiceInstanceName() const;
    void DnssdServiceInstanceName(hstring_ref value) const;
    Windows::Networking::HostName HostName() const;
    void HostName(const Windows::Networking::HostName & value) const;
    uint16_t Port() const;
    void Port(uint16_t value) const;
    uint16_t Priority() const;
    void Priority(uint16_t value) const;
    uint16_t Weight() const;
    void Weight(uint16_t value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> TextAttributes() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> RegisterStreamSocketListenerAsync(const Windows::Networking::Sockets::StreamSocketListener & socket) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> RegisterStreamSocketListenerAsync(const Windows::Networking::Sockets::StreamSocketListener & socket, const Windows::Networking::Connectivity::NetworkAdapter & adapter) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> RegisterDatagramSocketAsync(const Windows::Networking::Sockets::DatagramSocket & socket) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> RegisterDatagramSocketAsync(const Windows::Networking::Sockets::DatagramSocket & socket, const Windows::Networking::Connectivity::NetworkAdapter & adapter) const;
};

template <typename D>
struct WINRT_EBO impl_IDnssdServiceInstanceFactory
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance Create(hstring_ref dnssdServiceInstanceName, const Windows::Networking::HostName & hostName, uint16_t port) const;
};

template <typename D>
struct WINRT_EBO impl_IDnssdServiceWatcher
{
    event_token Added(const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> & handler) const;
    using Added_revoker = event_revoker<IDnssdServiceWatcher>;
    Added_revoker Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> & handler) const;
    void Added(event_token token) const;
    event_token EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> & handler) const;
    using EnumerationCompleted_revoker = event_revoker<IDnssdServiceWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> & handler) const;
    void EnumerationCompleted(event_token token) const;
    event_token Stopped(const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> & handler) const;
    using Stopped_revoker = event_revoker<IDnssdServiceWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> & handler) const;
    void Stopped(event_token token) const;
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus Status() const;
    void Start() const;
    void Stop() const;
};

struct IDnssdRegistrationResult :
    Windows::IInspectable,
    impl::consume<IDnssdRegistrationResult>
{
    IDnssdRegistrationResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDnssdRegistrationResult>(m_ptr); }
};

struct IDnssdServiceInstance :
    Windows::IInspectable,
    impl::consume<IDnssdServiceInstance>
{
    IDnssdServiceInstance(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDnssdServiceInstance>(m_ptr); }
};

struct IDnssdServiceInstanceFactory :
    Windows::IInspectable,
    impl::consume<IDnssdServiceInstanceFactory>
{
    IDnssdServiceInstanceFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDnssdServiceInstanceFactory>(m_ptr); }
};

struct IDnssdServiceWatcher :
    Windows::IInspectable,
    impl::consume<IDnssdServiceWatcher>
{
    IDnssdServiceWatcher(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDnssdServiceWatcher>(m_ptr); }
};

}

}
