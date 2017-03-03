// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Services.Cortana.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Cortana {

struct __declspec(uuid("191330e0-8695-438a-9545-3da4e822ddb4")) __declspec(novtable) ICortanaPermissionsManager : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_IsSupported(bool * result) = 0;
    virtual HRESULT __stdcall abi_ArePermissionsGrantedAsync(Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission> * permissions, Windows::Foundation::IAsyncOperation<bool> ** getGrantedPermissionsOperation) = 0;
    virtual HRESULT __stdcall abi_GrantPermissionsAsync(Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission> * permissions, Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> ** grantOperation) = 0;
    virtual HRESULT __stdcall abi_RevokePermissionsAsync(Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission> * permissions, Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> ** revokeOperation) = 0;
};

struct __declspec(uuid("76b1e67a-b045-4414-9d6d-2ad3a5fe3a7e")) __declspec(novtable) ICortanaPermissionsManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Services::Cortana::ICortanaPermissionsManager ** result) = 0;
};

struct __declspec(uuid("54d571a7-8062-40f4-abe7-dedfd697b019")) __declspec(novtable) ICortanaSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_HasUserConsentToVoiceActivation(bool * value) = 0;
    virtual HRESULT __stdcall get_IsVoiceActivationEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsVoiceActivationEnabled(bool value) = 0;
};

struct __declspec(uuid("8b2ccd7e-2ec0-446d-9285-33f07ce8ac04")) __declspec(novtable) ICortanaSettingsStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_IsSupported(bool * value) = 0;
    virtual HRESULT __stdcall abi_GetDefault(Windows::Services::Cortana::ICortanaSettings ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Services::Cortana::CortanaPermissionsManager> { using default_interface = Windows::Services::Cortana::ICortanaPermissionsManager; };
template <> struct traits<Windows::Services::Cortana::CortanaSettings> { using default_interface = Windows::Services::Cortana::ICortanaSettings; };

}

namespace Windows::Services::Cortana {

template <typename D>
struct WINRT_EBO impl_ICortanaPermissionsManager
{
    bool IsSupported() const;
    Windows::Foundation::IAsyncOperation<bool> ArePermissionsGrantedAsync(iterable<winrt::Windows::Services::Cortana::CortanaPermission> permissions) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> GrantPermissionsAsync(iterable<winrt::Windows::Services::Cortana::CortanaPermission> permissions) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> RevokePermissionsAsync(iterable<winrt::Windows::Services::Cortana::CortanaPermission> permissions) const;
};

template <typename D>
struct WINRT_EBO impl_ICortanaPermissionsManagerStatics
{
    Windows::Services::Cortana::CortanaPermissionsManager GetDefault() const;
};

template <typename D>
struct WINRT_EBO impl_ICortanaSettings
{
    bool HasUserConsentToVoiceActivation() const;
    bool IsVoiceActivationEnabled() const;
    void IsVoiceActivationEnabled(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ICortanaSettingsStatics
{
    bool IsSupported() const;
    Windows::Services::Cortana::CortanaSettings GetDefault() const;
};

}

namespace impl {

template <> struct traits<Windows::Services::Cortana::ICortanaPermissionsManager>
{
    using abi = ABI::Windows::Services::Cortana::ICortanaPermissionsManager;
    template <typename D> using consume = Windows::Services::Cortana::impl_ICortanaPermissionsManager<D>;
};

template <> struct traits<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
{
    using abi = ABI::Windows::Services::Cortana::ICortanaPermissionsManagerStatics;
    template <typename D> using consume = Windows::Services::Cortana::impl_ICortanaPermissionsManagerStatics<D>;
};

template <> struct traits<Windows::Services::Cortana::ICortanaSettings>
{
    using abi = ABI::Windows::Services::Cortana::ICortanaSettings;
    template <typename D> using consume = Windows::Services::Cortana::impl_ICortanaSettings<D>;
};

template <> struct traits<Windows::Services::Cortana::ICortanaSettingsStatics>
{
    using abi = ABI::Windows::Services::Cortana::ICortanaSettingsStatics;
    template <typename D> using consume = Windows::Services::Cortana::impl_ICortanaSettingsStatics<D>;
};

template <> struct traits<Windows::Services::Cortana::CortanaPermissionsManager>
{
    using abi = ABI::Windows::Services::Cortana::CortanaPermissionsManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Cortana.CortanaPermissionsManager"; }
};

template <> struct traits<Windows::Services::Cortana::CortanaSettings>
{
    using abi = ABI::Windows::Services::Cortana::CortanaSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Cortana.CortanaSettings"; }
};

}

}
