// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

enum class CortanaPermission
{
    BrowsingHistory = 0,
    Calendar = 1,
    CallHistory = 2,
    Contacts = 3,
    Email = 4,
    InputPersonalization = 5,
    Location = 6,
    Messaging = 7,
    Microphone = 8,
    Personalization = 9,
    PhoneCall = 10,
};

enum class CortanaPermissionsChangeResult
{
    Success = 0,
    Unavailable = 1,
    DisabledByPolicy = 2,
};

struct ICortanaPermissionsManager;
struct ICortanaPermissionsManagerStatics;
struct ICortanaSettings;
struct ICortanaSettingsStatics;
struct CortanaPermissionsManager;
struct CortanaSettings;

}

namespace winrt::impl {

template <> struct category<Windows::Services::Cortana::ICortanaPermissionsManager>{ using type = interface_category; };
template <> struct category<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Cortana::ICortanaSettings>{ using type = interface_category; };
template <> struct category<Windows::Services::Cortana::ICortanaSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Cortana::CortanaPermissionsManager>{ using type = class_category; };
template <> struct category<Windows::Services::Cortana::CortanaSettings>{ using type = class_category; };
template <> struct category<Windows::Services::Cortana::CortanaPermission>{ using type = enum_category; };
template <> struct category<Windows::Services::Cortana::CortanaPermissionsChangeResult>{ using type = enum_category; };
template <> struct name<Windows::Services::Cortana::ICortanaPermissionsManager>{ static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaPermissionsManager" }; };
template <> struct name<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>{ static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaPermissionsManagerStatics" }; };
template <> struct name<Windows::Services::Cortana::ICortanaSettings>{ static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaSettings" }; };
template <> struct name<Windows::Services::Cortana::ICortanaSettingsStatics>{ static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaSettingsStatics" }; };
template <> struct name<Windows::Services::Cortana::CortanaPermissionsManager>{ static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermissionsManager" }; };
template <> struct name<Windows::Services::Cortana::CortanaSettings>{ static constexpr auto & value{ L"Windows.Services.Cortana.CortanaSettings" }; };
template <> struct name<Windows::Services::Cortana::CortanaPermission>{ static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermission" }; };
template <> struct name<Windows::Services::Cortana::CortanaPermissionsChangeResult>{ static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermissionsChangeResult" }; };
template <> struct guid<Windows::Services::Cortana::ICortanaPermissionsManager>{ static constexpr GUID value{ 0x191330E0,0x8695,0x438A,{ 0x95,0x45,0x3D,0xA4,0xE8,0x22,0xDD,0xB4 } }; };
template <> struct guid<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>{ static constexpr GUID value{ 0x76B1E67A,0xB045,0x4414,{ 0x9D,0x6D,0x2A,0xD3,0xA5,0xFE,0x3A,0x7E } }; };
template <> struct guid<Windows::Services::Cortana::ICortanaSettings>{ static constexpr GUID value{ 0x54D571A7,0x8062,0x40F4,{ 0xAB,0xE7,0xDE,0xDF,0xD6,0x97,0xB0,0x19 } }; };
template <> struct guid<Windows::Services::Cortana::ICortanaSettingsStatics>{ static constexpr GUID value{ 0x8B2CCD7E,0x2EC0,0x446D,{ 0x92,0x85,0x33,0xF0,0x7C,0xE8,0xAC,0x04 } }; };
template <> struct default_interface<Windows::Services::Cortana::CortanaPermissionsManager>{ using type = Windows::Services::Cortana::ICortanaPermissionsManager; };
template <> struct default_interface<Windows::Services::Cortana::CortanaSettings>{ using type = Windows::Services::Cortana::ICortanaSettings; };

template <typename D>
struct consume_Windows_Services_Cortana_ICortanaPermissionsManager
{
    bool IsSupported() const;
    Windows::Foundation::IAsyncOperation<bool> ArePermissionsGrantedAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> GrantPermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> RevokePermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
};
template <> struct consume<Windows::Services::Cortana::ICortanaPermissionsManager> { template <typename D> using type = consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>; };

template <typename D>
struct consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics
{
    Windows::Services::Cortana::CortanaPermissionsManager GetDefault() const;
};
template <> struct consume<Windows::Services::Cortana::ICortanaPermissionsManagerStatics> { template <typename D> using type = consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics<D>; };

template <typename D>
struct consume_Windows_Services_Cortana_ICortanaSettings
{
    bool HasUserConsentToVoiceActivation() const;
    bool IsVoiceActivationEnabled() const;
    void IsVoiceActivationEnabled(bool value) const;
};
template <> struct consume<Windows::Services::Cortana::ICortanaSettings> { template <typename D> using type = consume_Windows_Services_Cortana_ICortanaSettings<D>; };

template <typename D>
struct consume_Windows_Services_Cortana_ICortanaSettingsStatics
{
    bool IsSupported() const;
    Windows::Services::Cortana::CortanaSettings GetDefault() const;
};
template <> struct consume<Windows::Services::Cortana::ICortanaSettingsStatics> { template <typename D> using type = consume_Windows_Services_Cortana_ICortanaSettingsStatics<D>; };

template <> struct abi<Windows::Services::Cortana::ICortanaPermissionsManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(bool* result) = 0;
    virtual HRESULT __stdcall ArePermissionsGrantedAsync(::IUnknown* permissions, ::IUnknown** getGrantedPermissionsOperation) = 0;
    virtual HRESULT __stdcall GrantPermissionsAsync(::IUnknown* permissions, ::IUnknown** grantOperation) = 0;
    virtual HRESULT __stdcall RevokePermissionsAsync(::IUnknown* permissions, ::IUnknown** revokeOperation) = 0;
};};

template <> struct abi<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Cortana::ICortanaSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HasUserConsentToVoiceActivation(bool* value) = 0;
    virtual HRESULT __stdcall get_IsVoiceActivationEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsVoiceActivationEnabled(bool value) = 0;
};};

template <> struct abi<Windows::Services::Cortana::ICortanaSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(bool* value) = 0;
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

}
