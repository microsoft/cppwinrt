// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Credentials::UI {

struct ICredentialPickerOptions;
struct ICredentialPickerResults;
struct ICredentialPickerStatics;
struct IUserConsentVerifierStatics;
struct CredentialPickerOptions;
struct CredentialPickerResults;

}

namespace Windows::Security::Credentials::UI {

struct ICredentialPickerOptions;
struct ICredentialPickerResults;
struct ICredentialPickerStatics;
struct IUserConsentVerifierStatics;
struct CredentialPicker;
struct CredentialPickerOptions;
struct CredentialPickerResults;
struct UserConsentVerifier;

}

namespace Windows::Security::Credentials::UI {

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

}

}
