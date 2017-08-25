// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.ServiceDiscovery.Dnssd.2.h"

namespace winrt::impl {

template <typename D> Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>::Status() const
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>::IPAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult)->get_IPAddress(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>::HasInstanceNameChanged() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult)->get_HasInstanceNameChanged(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::DnssdServiceInstanceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_DnssdServiceInstanceName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::DnssdServiceInstanceName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_DnssdServiceInstanceName(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::HostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_HostName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::HostName(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_HostName(get_abi(value)));
}

template <typename D> uint16_t consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Port() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_Port(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Port(uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_Port(value));
}

template <typename D> uint16_t consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Priority() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_Priority(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Priority(uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_Priority(value));
}

template <typename D> uint16_t consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Weight() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_Weight(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::Weight(uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->put_Weight(value));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::TextAttributes() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->get_TextAttributes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::RegisterStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& socket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->RegisterStreamSocketListenerAsync1(get_abi(socket), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::RegisterStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& socket, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->RegisterStreamSocketListenerAsync2(get_abi(socket), get_abi(adapter), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::RegisterDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& socket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->RegisterDatagramSocketAsync1(get_abi(socket), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>::RegisterDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& socket, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance)->RegisterDatagramSocketAsync2(get_abi(socket), get_abi(adapter), put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory<D>::Create(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port) const
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory)->Create(get_abi(dnssdServiceInstanceName), get_abi(hostName), port, put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>(this, &abi_t<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>(this, &abi_t<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>(this, &abi_t<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Status() const
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus status{};
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->get_Status(put_abi(status)));
    return status;
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->Start());
}

template <typename D> void consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher)->Stop());
}

template <typename D>
struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IPAddress(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IPAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasInstanceNameChanged(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasInstanceNameChanged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
{
    HRESULT __stdcall get_DnssdServiceInstanceName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DnssdServiceInstanceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DnssdServiceInstanceName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DnssdServiceInstanceName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_HostName(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HostName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Port(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Port());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Port(uint16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Port(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Priority(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Priority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Priority(uint16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Priority(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Weight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Weight(uint16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Weight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextAttributes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextAttributes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterStreamSocketListenerAsync1(::IUnknown* socket, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterStreamSocketListenerAsync(*reinterpret_cast<Windows::Networking::Sockets::StreamSocketListener const*>(&socket)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterStreamSocketListenerAsync2(::IUnknown* socket, ::IUnknown* adapter, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterStreamSocketListenerAsync(*reinterpret_cast<Windows::Networking::Sockets::StreamSocketListener const*>(&socket), *reinterpret_cast<Windows::Networking::Connectivity::NetworkAdapter const*>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterDatagramSocketAsync1(::IUnknown* socket, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterDatagramSocketAsync(*reinterpret_cast<Windows::Networking::Sockets::DatagramSocket const*>(&socket)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterDatagramSocketAsync2(::IUnknown* socket, ::IUnknown* adapter, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterDatagramSocketAsync(*reinterpret_cast<Windows::Networking::Sockets::DatagramSocket const*>(&socket), *reinterpret_cast<Windows::Networking::Connectivity::NetworkAdapter const*>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
{
    HRESULT __stdcall Create(HSTRING dnssdServiceInstanceName, ::IUnknown* hostName, uint16_t port, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&dnssdServiceInstanceName), *reinterpret_cast<Windows::Networking::HostName const*>(&hostName), port));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
{
    HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const*>(&handler)));
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

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
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
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
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

    HRESULT __stdcall get_Status(abi_t<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus>* status) noexcept override
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

}

WINRT_EXPORT namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd {

inline DnssdRegistrationResult::DnssdRegistrationResult() :
    DnssdRegistrationResult(activate_instance<DnssdRegistrationResult>())
{}

inline DnssdServiceInstance::DnssdServiceInstance(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port) :
    DnssdServiceInstance(get_activation_factory<DnssdServiceInstance, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>().Create(dnssdServiceInstanceName, hostName, port))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> {};

template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> {};

template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory> {};

template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> {};

template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> {};

template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> {};

template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection> {};

template<> struct hash<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher> {};

}

WINRT_WARNING_POP
