// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Management.Policies.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Management::Policies {

struct __declspec(uuid("38dcb198-95ac-4077-a643-8078cae26400")) __declspec(novtable) INamedPolicyData : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Area(hstring * value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Management::Policies::NamedPolicyKind * value) = 0;
    virtual HRESULT __stdcall get_IsManaged(bool * value) = 0;
    virtual HRESULT __stdcall get_IsUserPolicy(bool * value) = 0;
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
    virtual HRESULT __stdcall abi_GetBoolean(bool * result) = 0;
    virtual HRESULT __stdcall abi_GetBinary(Windows::Storage::Streams::IBuffer ** result) = 0;
    virtual HRESULT __stdcall abi_GetInt32(int32_t * result) = 0;
    virtual HRESULT __stdcall abi_GetInt64(int64_t * result) = 0;
    virtual HRESULT __stdcall abi_GetString(hstring * result) = 0;
    virtual HRESULT __stdcall add_Changed(Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> * changedHandler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_Changed(event_token cookie) = 0;
};

struct __declspec(uuid("7f793be7-76c4-4058-8cad-67662cd05f0d")) __declspec(novtable) INamedPolicyStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetPolicyFromPath(hstring area, hstring name, Windows::Management::Policies::INamedPolicyData ** result) = 0;
    virtual HRESULT __stdcall abi_GetPolicyFromPathForUser(Windows::System::IUser * user, hstring area, hstring name, Windows::Management::Policies::INamedPolicyData ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Management::Policies::NamedPolicyData> { using default_interface = Windows::Management::Policies::INamedPolicyData; };

}

namespace Windows::Management::Policies {

template <typename D>
struct WINRT_EBO impl_INamedPolicyData
{
    hstring Area() const;
    hstring Name() const;
    Windows::Management::Policies::NamedPolicyKind Kind() const;
    bool IsManaged() const;
    bool IsUserPolicy() const;
    Windows::System::User User() const;
    bool GetBoolean() const;
    Windows::Storage::Streams::IBuffer GetBinary() const;
    int32_t GetInt32() const;
    int64_t GetInt64() const;
    hstring GetString() const;
    event_token Changed(const Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> & changedHandler) const;
    using Changed_revoker = event_revoker<INamedPolicyData>;
    Changed_revoker Changed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> & changedHandler) const;
    void Changed(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_INamedPolicyStatics
{
    Windows::Management::Policies::NamedPolicyData GetPolicyFromPath(hstring_view area, hstring_view name) const;
    Windows::Management::Policies::NamedPolicyData GetPolicyFromPathForUser(const Windows::System::User & user, hstring_view area, hstring_view name) const;
};

}

namespace impl {

template <> struct traits<Windows::Management::Policies::INamedPolicyData>
{
    using abi = ABI::Windows::Management::Policies::INamedPolicyData;
    template <typename D> using consume = Windows::Management::Policies::impl_INamedPolicyData<D>;
};

template <> struct traits<Windows::Management::Policies::INamedPolicyStatics>
{
    using abi = ABI::Windows::Management::Policies::INamedPolicyStatics;
    template <typename D> using consume = Windows::Management::Policies::impl_INamedPolicyStatics<D>;
};

template <> struct traits<Windows::Management::Policies::NamedPolicy>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Management.Policies.NamedPolicy"; }
};

template <> struct traits<Windows::Management::Policies::NamedPolicyData>
{
    using abi = ABI::Windows::Management::Policies::NamedPolicyData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Management.Policies.NamedPolicyData"; }
};

}

}
