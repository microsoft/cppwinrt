// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Credentials.UI.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Security::Credentials::UI {

struct CredentialPicker
{
    CredentialPicker() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(const Windows::Security::Credentials::UI::CredentialPickerOptions & options);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(hstring_ref targetName, hstring_ref message);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> PickAsync(hstring_ref targetName, hstring_ref message, hstring_ref caption);
};

struct WINRT_EBO CredentialPickerOptions :
    Windows::Security::Credentials::UI::ICredentialPickerOptions
{
    CredentialPickerOptions(std::nullptr_t) noexcept {}
    CredentialPickerOptions();
};

struct WINRT_EBO CredentialPickerResults :
    Windows::Security::Credentials::UI::ICredentialPickerResults
{
    CredentialPickerResults(std::nullptr_t) noexcept {}
};

struct UserConsentVerifier
{
    UserConsentVerifier() = delete;
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> CheckAvailabilityAsync();
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> RequestVerificationAsync(hstring_ref message);
};

}

}
