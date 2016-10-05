// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Security.Authentication.Identity.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> : produce_base<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
{
    HRESULT __stdcall get_TenantId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TenantId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TenantName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TenantName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyName());
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
struct produce<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> : produce_base<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
{
    HRESULT __stdcall abi_GetRegistrationsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetRegistrationsAsync());
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
struct produce<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics> : produce_base<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Current());
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

namespace Windows::Security::Authentication::Identity {

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::TenantId() const
{
    hstring value;
    check_hresult(static_cast<const IEnterpriseKeyCredentialRegistrationInfo &>(static_cast<const D &>(*this))->get_TenantId(put(value)));
    return value;
}

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::TenantName() const
{
    hstring value;
    check_hresult(static_cast<const IEnterpriseKeyCredentialRegistrationInfo &>(static_cast<const D &>(*this))->get_TenantName(put(value)));
    return value;
}

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::Subject() const
{
    hstring value;
    check_hresult(static_cast<const IEnterpriseKeyCredentialRegistrationInfo &>(static_cast<const D &>(*this))->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::KeyId() const
{
    hstring value;
    check_hresult(static_cast<const IEnterpriseKeyCredentialRegistrationInfo &>(static_cast<const D &>(*this))->get_KeyId(put(value)));
    return value;
}

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::KeyName() const
{
    hstring value;
    check_hresult(static_cast<const IEnterpriseKeyCredentialRegistrationInfo &>(static_cast<const D &>(*this))->get_KeyName(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager impl_IEnterpriseKeyCredentialRegistrationManagerStatics<D>::Current() const
{
    Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager value { nullptr };
    check_hresult(static_cast<const IEnterpriseKeyCredentialRegistrationManagerStatics &>(static_cast<const D &>(*this))->get_Current(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> impl_IEnterpriseKeyCredentialRegistrationManager<D>::GetRegistrationsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> value;
    check_hresult(static_cast<const IEnterpriseKeyCredentialRegistrationManager &>(static_cast<const D &>(*this))->abi_GetRegistrationsAsync(put(value)));
    return value;
}

inline Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager EnterpriseKeyCredentialRegistrationManager::Current()
{
    return get_activation_factory<EnterpriseKeyCredentialRegistrationManager, IEnterpriseKeyCredentialRegistrationManagerStatics>().Current();
}

}

}
