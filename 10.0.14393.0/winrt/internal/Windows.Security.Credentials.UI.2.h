// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Credentials.UI.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_83fd09a4_21fd_5c01_9cf6_8293b2929a9f
#define WINRT_GENERIC_83fd09a4_21fd_5c01_9cf6_8293b2929a9f
template <> struct __declspec(uuid("83fd09a4-21fd-5c01-9cf6-8293b2929a9f")) __declspec(novtable) IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> : impl_IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> {};
#endif

#ifndef WINRT_GENERIC_ddd384f3_d818_5d83_ab4b_32119c28587c
#define WINRT_GENERIC_ddd384f3_d818_5d83_ab4b_32119c28587c
template <> struct __declspec(uuid("ddd384f3-d818-5d83-ab4b-32119c28587c")) __declspec(novtable) IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> : impl_IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> {};
#endif

#ifndef WINRT_GENERIC_fd596ffd_2318_558f_9dbe_d21df43764a5
#define WINRT_GENERIC_fd596ffd_2318_558f_9dbe_d21df43764a5
template <> struct __declspec(uuid("fd596ffd-2318-558f-9dbe-d21df43764a5")) __declspec(novtable) IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> : impl_IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> {};
#endif

#ifndef WINRT_GENERIC_091a96b8_52a6_523a_8c94_7f9c11c6dae5
#define WINRT_GENERIC_091a96b8_52a6_523a_8c94_7f9c11c6dae5
template <> struct __declspec(uuid("091a96b8-52a6-523a-8c94-7f9c11c6dae5")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Credentials::UI::CredentialPickerResults> : impl_AsyncOperationCompletedHandler<Windows::Security::Credentials::UI::CredentialPickerResults> {};
#endif

#ifndef WINRT_GENERIC_28988174_ace2_5c15_a0df_580a26d94294
#define WINRT_GENERIC_28988174_ace2_5c15_a0df_580a26d94294
template <> struct __declspec(uuid("28988174-ace2-5c15-a0df-580a26d94294")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> : impl_AsyncOperationCompletedHandler<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> {};
#endif

#ifndef WINRT_GENERIC_0cffc6c9_4c2b_5cd4_b38c_7b8df3ff5afb
#define WINRT_GENERIC_0cffc6c9_4c2b_5cd4_b38c_7b8df3ff5afb
template <> struct __declspec(uuid("0cffc6c9-4c2b-5cd4-b38c-7b8df3ff5afb")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> {};
#endif


}

namespace Windows::Security::Credentials::UI {

template <typename D>
struct WINRT_EBO impl_ICredentialPickerOptions
{
    void Caption(hstring_ref value) const;
    hstring Caption() const;
    void Message(hstring_ref value) const;
    hstring Message() const;
    void ErrorCode(uint32_t value) const;
    uint32_t ErrorCode() const;
    void TargetName(hstring_ref value) const;
    hstring TargetName() const;
    void AuthenticationProtocol(Windows::Security::Credentials::UI::AuthenticationProtocol value) const;
    Windows::Security::Credentials::UI::AuthenticationProtocol AuthenticationProtocol() const;
    void CustomAuthenticationProtocol(hstring_ref value) const;
    hstring CustomAuthenticationProtocol() const;
    void PreviousCredential(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Storage::Streams::IBuffer PreviousCredential() const;
    void AlwaysDisplayDialog(bool value) const;
    bool AlwaysDisplayDialog() const;
    void CallerSavesCredential(bool value) const;
    bool CallerSavesCredential() const;
    void CredentialSaveOption(Windows::Security::Credentials::UI::CredentialSaveOption value) const;
    Windows::Security::Credentials::UI::CredentialSaveOption CredentialSaveOption() const;
};

template <typename D>
struct WINRT_EBO impl_ICredentialPickerResults
{
    uint32_t ErrorCode() const;
    Windows::Security::Credentials::UI::CredentialSaveOption CredentialSaveOption() const;
    bool CredentialSaved() const;
    Windows::Storage::Streams::IBuffer Credential() const;
    hstring CredentialDomainName() const;
    hstring CredentialUserName() const;
    hstring CredentialPassword() const;
};

template <typename D>
struct WINRT_EBO impl_ICredentialPickerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(const Windows::Security::Credentials::UI::CredentialPickerOptions & options) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(hstring_ref targetName, hstring_ref message) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(hstring_ref targetName, hstring_ref message, hstring_ref caption) const;
};

template <typename D>
struct WINRT_EBO impl_IUserConsentVerifierStatics
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> CheckAvailabilityAsync() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> RequestVerificationAsync(hstring_ref message) const;
};

struct ICredentialPickerOptions :
    Windows::IInspectable,
    impl::consume<ICredentialPickerOptions>
{
    ICredentialPickerOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICredentialPickerOptions>(m_ptr); }
};

struct ICredentialPickerResults :
    Windows::IInspectable,
    impl::consume<ICredentialPickerResults>
{
    ICredentialPickerResults(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICredentialPickerResults>(m_ptr); }
};

struct ICredentialPickerStatics :
    Windows::IInspectable,
    impl::consume<ICredentialPickerStatics>
{
    ICredentialPickerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICredentialPickerStatics>(m_ptr); }
};

struct IUserConsentVerifierStatics :
    Windows::IInspectable,
    impl::consume<IUserConsentVerifierStatics>
{
    IUserConsentVerifierStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserConsentVerifierStatics>(m_ptr); }
};

}

}
