// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity {

struct IEnterpriseKeyCredentialRegistrationInfo;
struct IEnterpriseKeyCredentialRegistrationManager;
struct IEnterpriseKeyCredentialRegistrationManagerStatics;
struct EnterpriseKeyCredentialRegistrationInfo;
struct EnterpriseKeyCredentialRegistrationManager;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>{ using type = class_category; };
template <> struct name<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationManager" }; };
template <> struct name<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationManagerStatics" }; };
template <> struct name<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationManager" }; };
template <> struct guid<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>{ static constexpr GUID value{ 0x38321ACC,0x672B,0x4823,{ 0xB6,0x03,0x6B,0x3C,0x75,0x3D,0xAF,0x97 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>{ static constexpr GUID value{ 0x83F3BE3F,0xA25F,0x4CBA,{ 0xBB,0x8E,0xBD,0xC3,0x2D,0x03,0xC2,0x97 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>{ static constexpr GUID value{ 0x77B85E9E,0xACF4,0x4BC0,{ 0xBA,0xC2,0x40,0xBB,0x46,0xEF,0xBB,0x3F } }; };
template <> struct default_interface<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>{ using type = Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo; };
template <> struct default_interface<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>{ using type = Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo
{
    hstring TenantId() const;
    hstring TenantName() const;
    hstring Subject() const;
    hstring KeyId() const;
    hstring KeyName() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> GetRegistrationsAsync() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics
{
    Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager Current() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics<D>; };

template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TenantId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TenantName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KeyId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KeyName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetRegistrationsAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
};};

}
