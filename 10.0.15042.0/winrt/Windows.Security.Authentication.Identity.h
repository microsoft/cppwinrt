// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Security.Authentication.Identity.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> : produce_base<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
{
    HRESULT __stdcall get_TenantId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TenantId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TenantName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TenantName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyName());
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
    HRESULT __stdcall abi_GetRegistrationsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRegistrationsAsync());
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
    HRESULT __stdcall get_Current(impl::abi_arg_out<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Current());
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
    check_hresult(WINRT_SHIM(IEnterpriseKeyCredentialRegistrationInfo)->get_TenantId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::TenantName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IEnterpriseKeyCredentialRegistrationInfo)->get_TenantName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::Subject() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IEnterpriseKeyCredentialRegistrationInfo)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::KeyId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IEnterpriseKeyCredentialRegistrationInfo)->get_KeyId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IEnterpriseKeyCredentialRegistrationInfo<D>::KeyName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IEnterpriseKeyCredentialRegistrationInfo)->get_KeyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager impl_IEnterpriseKeyCredentialRegistrationManagerStatics<D>::Current() const
{
    Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager value { nullptr };
    check_hresult(WINRT_SHIM(IEnterpriseKeyCredentialRegistrationManagerStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> impl_IEnterpriseKeyCredentialRegistrationManager<D>::GetRegistrationsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> value;
    check_hresult(WINRT_SHIM(IEnterpriseKeyCredentialRegistrationManager)->abi_GetRegistrationsAsync(put_abi(value)));
    return value;
}

inline Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager EnterpriseKeyCredentialRegistrationManager::Current()
{
    return get_activation_factory<EnterpriseKeyCredentialRegistrationManager, IEnterpriseKeyCredentialRegistrationManagerStatics>().Current();
}

}

}

template<>
struct std::hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
{
    size_t operator()(const winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
{
    size_t operator()(const winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
{
    size_t operator()(const winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>
{
    size_t operator()(const winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>
{
    size_t operator()(const winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
