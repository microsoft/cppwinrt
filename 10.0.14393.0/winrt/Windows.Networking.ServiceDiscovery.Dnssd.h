// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Networking.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Networking.Sockets.3.h"
#include "internal/Windows.Networking.Connectivity.3.h"
#include "internal/Windows.Networking.ServiceDiscovery.Dnssd.3.h"
#include "Windows.Networking.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> : produce_base<D, Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IPAddress(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IPAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasInstanceNameChanged(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasInstanceNameChanged());
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
    HRESULT __stdcall get_DnssdServiceInstanceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DnssdServiceInstanceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DnssdServiceInstanceName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DnssdServiceInstanceName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_HostName(abi_arg_in<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            this->shim().HostName(*reinterpret_cast<const Windows::Networking::HostName *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Port(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Port());
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
            this->shim().Port(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Priority(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Priority());
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
            this->shim().Priority(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Weight());
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
            this->shim().Weight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextAttributes(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TextAttributes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterStreamSocketListenerAsync1(abi_arg_in<Windows::Networking::Sockets::IStreamSocketListener> socket, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RegisterStreamSocketListenerAsync(*reinterpret_cast<const Windows::Networking::Sockets::StreamSocketListener *>(&socket)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterStreamSocketListenerAsync2(abi_arg_in<Windows::Networking::Sockets::IStreamSocketListener> socket, abi_arg_in<Windows::Networking::Connectivity::INetworkAdapter> adapter, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RegisterStreamSocketListenerAsync(*reinterpret_cast<const Windows::Networking::Sockets::StreamSocketListener *>(&socket), *reinterpret_cast<const Windows::Networking::Connectivity::NetworkAdapter *>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterDatagramSocketAsync1(abi_arg_in<Windows::Networking::Sockets::IDatagramSocket> socket, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RegisterDatagramSocketAsync(*reinterpret_cast<const Windows::Networking::Sockets::DatagramSocket *>(&socket)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterDatagramSocketAsync2(abi_arg_in<Windows::Networking::Sockets::IDatagramSocket> socket, abi_arg_in<Windows::Networking::Connectivity::INetworkAdapter> adapter, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RegisterDatagramSocketAsync(*reinterpret_cast<const Windows::Networking::Sockets::DatagramSocket *>(&socket), *reinterpret_cast<const Windows::Networking::Connectivity::NetworkAdapter *>(&adapter)));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> dnssdServiceInstanceName, abi_arg_in<Windows::Networking::IHostName> hostName, uint16_t port, abi_arg_out<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&dnssdServiceInstanceName), *reinterpret_cast<const Windows::Networking::HostName *>(&hostName), port));
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
    HRESULT __stdcall add_Added(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Added(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> *>(&handler)));
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

    HRESULT __stdcall add_EnumerationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> *>(&handler)));
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

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> *>(&handler)));
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

    HRESULT __stdcall get_Status(Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus * status) noexcept override
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

}

namespace Windows::Networking::ServiceDiscovery::Dnssd {

template <typename D> event_token impl_IDnssdServiceWatcher<D>::Added(const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->add_Added(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDnssdServiceWatcher> impl_IDnssdServiceWatcher<D>::Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> & handler) const
{
    return impl::make_event_revoker<D, IDnssdServiceWatcher>(this, &ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher::remove_Added, Added(handler));
}

template <typename D> void impl_IDnssdServiceWatcher<D>::Added(event_token token) const
{
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->remove_Added(token));
}

template <typename D> event_token impl_IDnssdServiceWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->add_EnumerationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDnssdServiceWatcher> impl_IDnssdServiceWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IDnssdServiceWatcher>(this, &ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IDnssdServiceWatcher<D>::EnumerationCompleted(event_token token) const
{
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->remove_EnumerationCompleted(token));
}

template <typename D> event_token impl_IDnssdServiceWatcher<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDnssdServiceWatcher> impl_IDnssdServiceWatcher<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IDnssdServiceWatcher>(this, &ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IDnssdServiceWatcher<D>::Stopped(event_token token) const
{
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->remove_Stopped(token));
}

template <typename D> Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus impl_IDnssdServiceWatcher<D>::Status() const
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus status {};
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->get_Status(&status));
    return status;
}

template <typename D> void impl_IDnssdServiceWatcher<D>::Start() const
{
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IDnssdServiceWatcher<D>::Stop() const
{
    check_hresult(static_cast<const IDnssdServiceWatcher &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus impl_IDnssdRegistrationResult<D>::Status() const
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus value {};
    check_hresult(static_cast<const IDnssdRegistrationResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IDnssdRegistrationResult<D>::IPAddress() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IDnssdRegistrationResult &>(static_cast<const D &>(*this))->get_IPAddress(put(value)));
    return value;
}

template <typename D> bool impl_IDnssdRegistrationResult<D>::HasInstanceNameChanged() const
{
    bool value {};
    check_hresult(static_cast<const IDnssdRegistrationResult &>(static_cast<const D &>(*this))->get_HasInstanceNameChanged(&value));
    return value;
}

template <typename D> Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance impl_IDnssdServiceInstanceFactory<D>::Create(hstring_ref dnssdServiceInstanceName, const Windows::Networking::HostName & hostName, uint16_t port) const
{
    Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance result { nullptr };
    check_hresult(static_cast<const IDnssdServiceInstanceFactory &>(static_cast<const D &>(*this))->abi_Create(get(dnssdServiceInstanceName), get(hostName), port, put(result)));
    return result;
}

template <typename D> hstring impl_IDnssdServiceInstance<D>::DnssdServiceInstanceName() const
{
    hstring value;
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->get_DnssdServiceInstanceName(put(value)));
    return value;
}

template <typename D> void impl_IDnssdServiceInstance<D>::DnssdServiceInstanceName(hstring_ref value) const
{
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->put_DnssdServiceInstanceName(get(value)));
}

template <typename D> Windows::Networking::HostName impl_IDnssdServiceInstance<D>::HostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->get_HostName(put(value)));
    return value;
}

template <typename D> void impl_IDnssdServiceInstance<D>::HostName(const Windows::Networking::HostName & value) const
{
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->put_HostName(get(value)));
}

template <typename D> uint16_t impl_IDnssdServiceInstance<D>::Port() const
{
    uint16_t value {};
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->get_Port(&value));
    return value;
}

template <typename D> void impl_IDnssdServiceInstance<D>::Port(uint16_t value) const
{
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->put_Port(value));
}

template <typename D> uint16_t impl_IDnssdServiceInstance<D>::Priority() const
{
    uint16_t value {};
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->get_Priority(&value));
    return value;
}

template <typename D> void impl_IDnssdServiceInstance<D>::Priority(uint16_t value) const
{
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->put_Priority(value));
}

template <typename D> uint16_t impl_IDnssdServiceInstance<D>::Weight() const
{
    uint16_t value {};
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->get_Weight(&value));
    return value;
}

template <typename D> void impl_IDnssdServiceInstance<D>::Weight(uint16_t value) const
{
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->put_Weight(value));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IDnssdServiceInstance<D>::TextAttributes() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->get_TextAttributes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> impl_IDnssdServiceInstance<D>::RegisterStreamSocketListenerAsync(const Windows::Networking::Sockets::StreamSocketListener & socket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> result;
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->abi_RegisterStreamSocketListenerAsync1(get(socket), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> impl_IDnssdServiceInstance<D>::RegisterStreamSocketListenerAsync(const Windows::Networking::Sockets::StreamSocketListener & socket, const Windows::Networking::Connectivity::NetworkAdapter & adapter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> result;
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->abi_RegisterStreamSocketListenerAsync2(get(socket), get(adapter), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> impl_IDnssdServiceInstance<D>::RegisterDatagramSocketAsync(const Windows::Networking::Sockets::DatagramSocket & socket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> result;
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->abi_RegisterDatagramSocketAsync1(get(socket), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> impl_IDnssdServiceInstance<D>::RegisterDatagramSocketAsync(const Windows::Networking::Sockets::DatagramSocket & socket, const Windows::Networking::Connectivity::NetworkAdapter & adapter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> result;
    check_hresult(static_cast<const IDnssdServiceInstance &>(static_cast<const D &>(*this))->abi_RegisterDatagramSocketAsync2(get(socket), get(adapter), put(result)));
    return result;
}

inline DnssdRegistrationResult::DnssdRegistrationResult() :
    DnssdRegistrationResult(activate_instance<DnssdRegistrationResult>())
{}

inline DnssdServiceInstance::DnssdServiceInstance(hstring_ref dnssdServiceInstanceName, const Windows::Networking::HostName & hostName, uint16_t port) :
    DnssdServiceInstance(get_activation_factory<DnssdServiceInstance, IDnssdServiceInstanceFactory>().Create(dnssdServiceInstanceName, hostName, port))
{}

}

}
