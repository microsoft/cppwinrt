// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Networking.Connectivity.3.h"
#include "internal/Windows.Networking.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::IEndpointPair> : produce_base<D, Windows::Networking::IEndpointPair>
{
    HRESULT __stdcall get_LocalHostName(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalHostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LocalHostName(abi_arg_in<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            this->shim().LocalHostName(*reinterpret_cast<const Windows::Networking::HostName *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalServiceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LocalServiceName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().LocalServiceName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_RemoteHostName(abi_arg_in<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            this->shim().RemoteHostName(*reinterpret_cast<const Windows::Networking::HostName *>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_RemoteServiceName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().RemoteServiceName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::IEndpointPairFactory> : produce_base<D, Windows::Networking::IEndpointPairFactory>
{
    HRESULT __stdcall abi_CreateEndpointPair(abi_arg_in<Windows::Networking::IHostName> localHostName, abi_arg_in<hstring> localServiceName, abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remoteServiceName, abi_arg_out<Windows::Networking::IEndpointPair> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateEndpointPair(*reinterpret_cast<const Windows::Networking::HostName *>(&localHostName), *reinterpret_cast<const hstring *>(&localServiceName), *reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remoteServiceName)));
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
struct produce<D, Windows::Networking::IHostName> : produce_base<D, Windows::Networking::IHostName>
{
    HRESULT __stdcall get_IPInformation(abi_arg_out<Windows::Networking::Connectivity::IIPInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IPInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_CanonicalName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanonicalName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Networking::HostNameType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEqual(abi_arg_in<Windows::Networking::IHostName> hostName, bool * isEqual) noexcept override
    {
        try
        {
            *isEqual = detach(this->shim().IsEqual(*reinterpret_cast<const Windows::Networking::HostName *>(&hostName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::IHostNameFactory> : produce_base<D, Windows::Networking::IHostNameFactory>
{
    HRESULT __stdcall abi_CreateHostName(abi_arg_in<hstring> hostName, abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateHostName(*reinterpret_cast<const hstring *>(&hostName)));
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
struct produce<D, Windows::Networking::IHostNameStatics> : produce_base<D, Windows::Networking::IHostNameStatics>
{
    HRESULT __stdcall abi_Compare(abi_arg_in<hstring> value1, abi_arg_in<hstring> value2, int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Compare(*reinterpret_cast<const hstring *>(&value1), *reinterpret_cast<const hstring *>(&value2)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Networking {

template <typename D> int32_t impl_IHostNameStatics<D>::Compare(hstring_ref value1, hstring_ref value2) const
{
    int32_t result {};
    check_hresult(static_cast<const IHostNameStatics &>(static_cast<const D &>(*this))->abi_Compare(get(value1), get(value2), &result));
    return result;
}

template <typename D> Windows::Networking::Connectivity::IPInformation impl_IHostName<D>::IPInformation() const
{
    Windows::Networking::Connectivity::IPInformation value { nullptr };
    check_hresult(static_cast<const IHostName &>(static_cast<const D &>(*this))->get_IPInformation(put(value)));
    return value;
}

template <typename D> hstring impl_IHostName<D>::RawName() const
{
    hstring value;
    check_hresult(static_cast<const IHostName &>(static_cast<const D &>(*this))->get_RawName(put(value)));
    return value;
}

template <typename D> hstring impl_IHostName<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IHostName &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IHostName<D>::CanonicalName() const
{
    hstring value;
    check_hresult(static_cast<const IHostName &>(static_cast<const D &>(*this))->get_CanonicalName(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostNameType impl_IHostName<D>::Type() const
{
    Windows::Networking::HostNameType value {};
    check_hresult(static_cast<const IHostName &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> bool impl_IHostName<D>::IsEqual(const Windows::Networking::HostName & hostName) const
{
    bool isEqual {};
    check_hresult(static_cast<const IHostName &>(static_cast<const D &>(*this))->abi_IsEqual(get(hostName), &isEqual));
    return isEqual;
}

template <typename D> Windows::Networking::HostName impl_IHostNameFactory<D>::CreateHostName(hstring_ref hostName) const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IHostNameFactory &>(static_cast<const D &>(*this))->abi_CreateHostName(get(hostName), put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IEndpointPair<D>::LocalHostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IEndpointPair &>(static_cast<const D &>(*this))->get_LocalHostName(put(value)));
    return value;
}

template <typename D> void impl_IEndpointPair<D>::LocalHostName(const Windows::Networking::HostName & value) const
{
    check_hresult(static_cast<const IEndpointPair &>(static_cast<const D &>(*this))->put_LocalHostName(get(value)));
}

template <typename D> hstring impl_IEndpointPair<D>::LocalServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IEndpointPair &>(static_cast<const D &>(*this))->get_LocalServiceName(put(value)));
    return value;
}

template <typename D> void impl_IEndpointPair<D>::LocalServiceName(hstring_ref value) const
{
    check_hresult(static_cast<const IEndpointPair &>(static_cast<const D &>(*this))->put_LocalServiceName(get(value)));
}

template <typename D> Windows::Networking::HostName impl_IEndpointPair<D>::RemoteHostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IEndpointPair &>(static_cast<const D &>(*this))->get_RemoteHostName(put(value)));
    return value;
}

template <typename D> void impl_IEndpointPair<D>::RemoteHostName(const Windows::Networking::HostName & value) const
{
    check_hresult(static_cast<const IEndpointPair &>(static_cast<const D &>(*this))->put_RemoteHostName(get(value)));
}

template <typename D> hstring impl_IEndpointPair<D>::RemoteServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IEndpointPair &>(static_cast<const D &>(*this))->get_RemoteServiceName(put(value)));
    return value;
}

template <typename D> void impl_IEndpointPair<D>::RemoteServiceName(hstring_ref value) const
{
    check_hresult(static_cast<const IEndpointPair &>(static_cast<const D &>(*this))->put_RemoteServiceName(get(value)));
}

template <typename D> Windows::Networking::EndpointPair impl_IEndpointPairFactory<D>::CreateEndpointPair(const Windows::Networking::HostName & localHostName, hstring_ref localServiceName, const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName) const
{
    Windows::Networking::EndpointPair value { nullptr };
    check_hresult(static_cast<const IEndpointPairFactory &>(static_cast<const D &>(*this))->abi_CreateEndpointPair(get(localHostName), get(localServiceName), get(remoteHostName), get(remoteServiceName), put(value)));
    return value;
}

inline EndpointPair::EndpointPair(const Windows::Networking::HostName & localHostName, hstring_ref localServiceName, const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName) :
    EndpointPair(get_activation_factory<EndpointPair, IEndpointPairFactory>().CreateEndpointPair(localHostName, localServiceName, remoteHostName, remoteServiceName))
{}

inline HostName::HostName(hstring_ref hostName) :
    HostName(get_activation_factory<HostName, IHostNameFactory>().CreateHostName(hostName))
{}

inline int32_t HostName::Compare(hstring_ref value1, hstring_ref value2)
{
    return get_activation_factory<HostName, IHostNameStatics>().Compare(value1, value2);
}

}

}
