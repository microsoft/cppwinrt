// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Networking.Connectivity.1.h"
#include "winrt/impl/Windows.Networking.Sockets.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Networking.ServiceDiscovery.Dnssd.1.h"

WINRT_EXPORT namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd {

struct WINRT_EBO DnssdRegistrationResult :
    Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult,
    impl::require<DnssdRegistrationResult, Windows::Foundation::IStringable>
{
    DnssdRegistrationResult(std::nullptr_t) noexcept {}
    DnssdRegistrationResult();
};

struct WINRT_EBO DnssdServiceInstance :
    Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance,
    impl::require<DnssdServiceInstance, Windows::Foundation::IStringable>
{
    DnssdServiceInstance(std::nullptr_t) noexcept {}
    DnssdServiceInstance(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port);
};

struct WINRT_EBO DnssdServiceInstanceCollection :
    Windows::Foundation::Collections::IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>
{
    DnssdServiceInstanceCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DnssdServiceWatcher :
    Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher
{
    DnssdServiceWatcher(std::nullptr_t) noexcept {}
};

}
