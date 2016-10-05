// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Security.Authentication.Identity.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Authentication::Identity {

struct __declspec(uuid("38321acc-672b-4823-b603-6b3c753daf97")) __declspec(novtable) IEnterpriseKeyCredentialRegistrationInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TenantId(hstring * value) = 0;
    virtual HRESULT __stdcall get_TenantName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Subject(hstring * value) = 0;
    virtual HRESULT __stdcall get_KeyId(hstring * value) = 0;
    virtual HRESULT __stdcall get_KeyName(hstring * value) = 0;
};

struct __declspec(uuid("83f3be3f-a25f-4cba-bb8e-bdc32d03c297")) __declspec(novtable) IEnterpriseKeyCredentialRegistrationManager : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetRegistrationsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> ** value) = 0;
};

struct __declspec(uuid("77b85e9e-acf4-4bc0-bac2-40bb46efbb3f")) __declspec(novtable) IEnterpriseKeyCredentialRegistrationManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Current(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo> { using default_interface = Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo; };
template <> struct traits<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager> { using default_interface = Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager; };

}

namespace Windows::Security::Authentication::Identity {

template <typename T> struct impl_IEnterpriseKeyCredentialRegistrationInfo;
template <typename T> struct impl_IEnterpriseKeyCredentialRegistrationManager;
template <typename T> struct impl_IEnterpriseKeyCredentialRegistrationManagerStatics;

}

namespace impl {

template <> struct traits<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
{
    using abi = ABI::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo;
    template <typename D> using consume = Windows::Security::Authentication::Identity::impl_IEnterpriseKeyCredentialRegistrationInfo<D>;
};

template <> struct traits<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
{
    using abi = ABI::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager;
    template <typename D> using consume = Windows::Security::Authentication::Identity::impl_IEnterpriseKeyCredentialRegistrationManager<D>;
};

template <> struct traits<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
{
    using abi = ABI::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics;
    template <typename D> using consume = Windows::Security::Authentication::Identity::impl_IEnterpriseKeyCredentialRegistrationManagerStatics<D>;
};

template <> struct traits<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>
{
    using abi = ABI::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationInfo"; }
};

template <> struct traits<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>
{
    using abi = ABI::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationManager"; }
};

}

}
