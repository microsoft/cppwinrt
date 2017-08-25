// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials::UI {

enum class AuthenticationProtocol
{
    Basic = 0,
    Digest = 1,
    Ntlm = 2,
    Kerberos = 3,
    Negotiate = 4,
    CredSsp = 5,
    Custom = 6,
};

enum class CredentialSaveOption
{
    Unselected = 0,
    Selected = 1,
    Hidden = 2,
};

enum class UserConsentVerificationResult
{
    Verified = 0,
    DeviceNotPresent = 1,
    NotConfiguredForUser = 2,
    DisabledByPolicy = 3,
    DeviceBusy = 4,
    RetriesExhausted = 5,
    Canceled = 6,
};

enum class UserConsentVerifierAvailability
{
    Available = 0,
    DeviceNotPresent = 1,
    NotConfiguredForUser = 2,
    DisabledByPolicy = 3,
    DeviceBusy = 4,
};

struct ICredentialPickerOptions;
struct ICredentialPickerResults;
struct ICredentialPickerStatics;
struct IUserConsentVerifierStatics;
struct CredentialPicker;
struct CredentialPickerOptions;
struct CredentialPickerResults;
struct UserConsentVerifier;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Credentials::UI::ICredentialPickerOptions>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::UI::ICredentialPickerResults>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::UI::ICredentialPickerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::UI::IUserConsentVerifierStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::UI::CredentialPicker>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::UI::CredentialPickerOptions>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::UI::CredentialPickerResults>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::UI::UserConsentVerifier>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::UI::AuthenticationProtocol>{ using type = enum_category; };
template <> struct category<Windows::Security::Credentials::UI::CredentialSaveOption>{ using type = enum_category; };
template <> struct category<Windows::Security::Credentials::UI::UserConsentVerificationResult>{ using type = enum_category; };
template <> struct category<Windows::Security::Credentials::UI::UserConsentVerifierAvailability>{ using type = enum_category; };
template <> struct name<Windows::Security::Credentials::UI::ICredentialPickerOptions>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.ICredentialPickerOptions" }; };
template <> struct name<Windows::Security::Credentials::UI::ICredentialPickerResults>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.ICredentialPickerResults" }; };
template <> struct name<Windows::Security::Credentials::UI::ICredentialPickerStatics>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.ICredentialPickerStatics" }; };
template <> struct name<Windows::Security::Credentials::UI::IUserConsentVerifierStatics>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.IUserConsentVerifierStatics" }; };
template <> struct name<Windows::Security::Credentials::UI::CredentialPicker>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.CredentialPicker" }; };
template <> struct name<Windows::Security::Credentials::UI::CredentialPickerOptions>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.CredentialPickerOptions" }; };
template <> struct name<Windows::Security::Credentials::UI::CredentialPickerResults>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.CredentialPickerResults" }; };
template <> struct name<Windows::Security::Credentials::UI::UserConsentVerifier>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.UserConsentVerifier" }; };
template <> struct name<Windows::Security::Credentials::UI::AuthenticationProtocol>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.AuthenticationProtocol" }; };
template <> struct name<Windows::Security::Credentials::UI::CredentialSaveOption>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.CredentialSaveOption" }; };
template <> struct name<Windows::Security::Credentials::UI::UserConsentVerificationResult>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.UserConsentVerificationResult" }; };
template <> struct name<Windows::Security::Credentials::UI::UserConsentVerifierAvailability>{ static constexpr auto & value{ L"Windows.Security.Credentials.UI.UserConsentVerifierAvailability" }; };
template <> struct guid<Windows::Security::Credentials::UI::ICredentialPickerOptions>{ static constexpr GUID value{ 0x965A0B4C,0x95FA,0x467F,{ 0x99,0x2B,0x0B,0x22,0xE5,0x85,0x9B,0xF6 } }; };
template <> struct guid<Windows::Security::Credentials::UI::ICredentialPickerResults>{ static constexpr GUID value{ 0x1948F99A,0xCC30,0x410C,{ 0x9C,0x38,0xCC,0x08,0x84,0xC5,0xB3,0xD7 } }; };
template <> struct guid<Windows::Security::Credentials::UI::ICredentialPickerStatics>{ static constexpr GUID value{ 0xAA3A5C73,0xC9EA,0x4782,{ 0x99,0xFB,0xE6,0xD7,0xE9,0x38,0xE1,0x2D } }; };
template <> struct guid<Windows::Security::Credentials::UI::IUserConsentVerifierStatics>{ static constexpr GUID value{ 0xAF4F3F91,0x564C,0x4DDC,{ 0xB8,0xB5,0x97,0x34,0x47,0x62,0x7C,0x65 } }; };
template <> struct default_interface<Windows::Security::Credentials::UI::CredentialPickerOptions>{ using type = Windows::Security::Credentials::UI::ICredentialPickerOptions; };
template <> struct default_interface<Windows::Security::Credentials::UI::CredentialPickerResults>{ using type = Windows::Security::Credentials::UI::ICredentialPickerResults; };

template <typename D>
struct consume_Windows_Security_Credentials_UI_ICredentialPickerOptions
{
    void Caption(param::hstring const& value) const;
    hstring Caption() const;
    void Message(param::hstring const& value) const;
    hstring Message() const;
    void ErrorCode(uint32_t value) const;
    uint32_t ErrorCode() const;
    void TargetName(param::hstring const& value) const;
    hstring TargetName() const;
    void AuthenticationProtocol(Windows::Security::Credentials::UI::AuthenticationProtocol const& value) const;
    Windows::Security::Credentials::UI::AuthenticationProtocol AuthenticationProtocol() const;
    void CustomAuthenticationProtocol(param::hstring const& value) const;
    hstring CustomAuthenticationProtocol() const;
    void PreviousCredential(Windows::Storage::Streams::IBuffer const& value) const;
    Windows::Storage::Streams::IBuffer PreviousCredential() const;
    void AlwaysDisplayDialog(bool value) const;
    bool AlwaysDisplayDialog() const;
    void CallerSavesCredential(bool value) const;
    bool CallerSavesCredential() const;
    void CredentialSaveOption(Windows::Security::Credentials::UI::CredentialSaveOption const& value) const;
    Windows::Security::Credentials::UI::CredentialSaveOption CredentialSaveOption() const;
};
template <> struct consume<Windows::Security::Credentials::UI::ICredentialPickerOptions> { template <typename D> using type = consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_UI_ICredentialPickerResults
{
    uint32_t ErrorCode() const;
    Windows::Security::Credentials::UI::CredentialSaveOption CredentialSaveOption() const;
    bool CredentialSaved() const;
    Windows::Storage::Streams::IBuffer Credential() const;
    hstring CredentialDomainName() const;
    hstring CredentialUserName() const;
    hstring CredentialPassword() const;
};
template <> struct consume<Windows::Security::Credentials::UI::ICredentialPickerResults> { template <typename D> using type = consume_Windows_Security_Credentials_UI_ICredentialPickerResults<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_UI_ICredentialPickerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(Windows::Security::Credentials::UI::CredentialPickerOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(param::hstring const& targetName, param::hstring const& message) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(param::hstring const& targetName, param::hstring const& message, param::hstring const& caption) const;
};
template <> struct consume<Windows::Security::Credentials::UI::ICredentialPickerStatics> { template <typename D> using type = consume_Windows_Security_Credentials_UI_ICredentialPickerStatics<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_UI_IUserConsentVerifierStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerifierAvailability> CheckAvailabilityAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerificationResult> RequestVerificationAsync(param::hstring const& message) const;
};
template <> struct consume<Windows::Security::Credentials::UI::IUserConsentVerifierStatics> { template <typename D> using type = consume_Windows_Security_Credentials_UI_IUserConsentVerifierStatics<D>; };

template <> struct abi<Windows::Security::Credentials::UI::ICredentialPickerOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Caption(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Caption(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Message(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ErrorCode(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AuthenticationProtocol(abi_t<Windows::Security::Credentials::UI::AuthenticationProtocol> value) = 0;
    virtual HRESULT __stdcall get_AuthenticationProtocol(abi_t<Windows::Security::Credentials::UI::AuthenticationProtocol>* value) = 0;
    virtual HRESULT __stdcall put_CustomAuthenticationProtocol(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CustomAuthenticationProtocol(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PreviousCredential(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PreviousCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AlwaysDisplayDialog(bool value) = 0;
    virtual HRESULT __stdcall get_AlwaysDisplayDialog(bool* value) = 0;
    virtual HRESULT __stdcall put_CallerSavesCredential(bool value) = 0;
    virtual HRESULT __stdcall get_CallerSavesCredential(bool* value) = 0;
    virtual HRESULT __stdcall put_CredentialSaveOption(abi_t<Windows::Security::Credentials::UI::CredentialSaveOption> value) = 0;
    virtual HRESULT __stdcall get_CredentialSaveOption(abi_t<Windows::Security::Credentials::UI::CredentialSaveOption>* value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::UI::ICredentialPickerResults>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ErrorCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_CredentialSaveOption(abi_t<Windows::Security::Credentials::UI::CredentialSaveOption>* value) = 0;
    virtual HRESULT __stdcall get_CredentialSaved(bool* value) = 0;
    virtual HRESULT __stdcall get_Credential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CredentialDomainName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CredentialUserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CredentialPassword(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::UI::ICredentialPickerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PickWithOptionsAsync(::IUnknown* options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PickWithMessageAsync(HSTRING targetName, HSTRING message, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PickWithCaptionAsync(HSTRING targetName, HSTRING message, HSTRING caption, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Security::Credentials::UI::IUserConsentVerifierStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CheckAvailabilityAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestVerificationAsync(HSTRING message, ::IUnknown** result) = 0;
};};

}
