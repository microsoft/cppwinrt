// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Security.Authentication.Identity.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::TenantId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_TenantId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::TenantName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_TenantName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::KeyId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_KeyId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::KeyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_KeyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager<D>::GetRegistrationsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager)->GetRegistrationsAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics<D>::Current() const
{
    Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> : produce_base<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
{
    HRESULT __stdcall get_TenantId(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_TenantName(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_Subject(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_KeyId(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_KeyName(HSTRING* value) noexcept override
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
    HRESULT __stdcall GetRegistrationsAsync(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept override
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

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity {

inline Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager EnterpriseKeyCredentialRegistrationManager::Current()
{
    return get_activation_factory<EnterpriseKeyCredentialRegistrationManager, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>().Current();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager> {};

}

WINRT_WARNING_POP
