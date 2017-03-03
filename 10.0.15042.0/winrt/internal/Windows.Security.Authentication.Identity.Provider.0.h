// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Authentication::Identity::Provider {

struct ISecondaryAuthenticationFactorAuthentication;
struct ISecondaryAuthenticationFactorAuthenticationResult;
struct ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
struct ISecondaryAuthenticationFactorAuthenticationStageInfo;
struct ISecondaryAuthenticationFactorAuthenticationStatics;
struct ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;
struct ISecondaryAuthenticationFactorInfo;
struct ISecondaryAuthenticationFactorInfo2;
struct ISecondaryAuthenticationFactorRegistration;
struct ISecondaryAuthenticationFactorRegistrationResult;
struct ISecondaryAuthenticationFactorRegistrationStatics;
struct SecondaryAuthenticationFactorAuthentication;
struct SecondaryAuthenticationFactorAuthenticationResult;
struct SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
struct SecondaryAuthenticationFactorAuthenticationStageInfo;
struct SecondaryAuthenticationFactorInfo;
struct SecondaryAuthenticationFactorRegistration;
struct SecondaryAuthenticationFactorRegistrationResult;

}

namespace Windows::Security::Authentication::Identity::Provider {

struct ISecondaryAuthenticationFactorAuthentication;
struct ISecondaryAuthenticationFactorAuthenticationResult;
struct ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
struct ISecondaryAuthenticationFactorAuthenticationStageInfo;
struct ISecondaryAuthenticationFactorAuthenticationStatics;
struct ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;
struct ISecondaryAuthenticationFactorInfo;
struct ISecondaryAuthenticationFactorInfo2;
struct ISecondaryAuthenticationFactorRegistration;
struct ISecondaryAuthenticationFactorRegistrationResult;
struct ISecondaryAuthenticationFactorRegistrationStatics;
struct SecondaryAuthenticationFactorAuthentication;
struct SecondaryAuthenticationFactorAuthenticationResult;
struct SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
struct SecondaryAuthenticationFactorAuthenticationStageInfo;
struct SecondaryAuthenticationFactorInfo;
struct SecondaryAuthenticationFactorRegistration;
struct SecondaryAuthenticationFactorRegistrationResult;

}

namespace Windows::Security::Authentication::Identity::Provider {

template <typename T> struct impl_ISecondaryAuthenticationFactorAuthentication;
template <typename T> struct impl_ISecondaryAuthenticationFactorAuthenticationResult;
template <typename T> struct impl_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
template <typename T> struct impl_ISecondaryAuthenticationFactorAuthenticationStageInfo;
template <typename T> struct impl_ISecondaryAuthenticationFactorAuthenticationStatics;
template <typename T> struct impl_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;
template <typename T> struct impl_ISecondaryAuthenticationFactorInfo;
template <typename T> struct impl_ISecondaryAuthenticationFactorInfo2;
template <typename T> struct impl_ISecondaryAuthenticationFactorRegistration;
template <typename T> struct impl_ISecondaryAuthenticationFactorRegistrationResult;
template <typename T> struct impl_ISecondaryAuthenticationFactorRegistrationStatics;

}

namespace Windows::Security::Authentication::Identity::Provider {

enum class SecondaryAuthenticationFactorAuthenticationMessage
{
    Invalid = 0,
    SwipeUpWelcome = 1,
    TapWelcome = 2,
    DeviceNeedsAttention = 3,
    LookingForDevice = 4,
    LookingForDevicePluggedin = 5,
    BluetoothIsDisabled = 6,
    NfcIsDisabled = 7,
    WiFiIsDisabled = 8,
    ExtraTapIsRequired = 9,
    DisabledByPolicy = 10,
    TapOnDeviceRequired = 11,
    HoldFinger = 12,
    ScanFinger = 13,
    UnauthorizedUser = 14,
    ReregisterRequired = 15,
    TryAgain = 16,
    SayPassphrase = 17,
    ReadyToSignIn = 18,
    UseAnotherSignInOption = 19,
};

enum class SecondaryAuthenticationFactorAuthenticationScenario
{
    SignIn = 0,
    CredentialPrompt = 1,
};

enum class SecondaryAuthenticationFactorAuthenticationStage
{
    NotStarted = 0,
    WaitingForUserConfirmation = 1,
    CollectingCredential = 2,
    SuspendingAuthentication = 3,
    CredentialCollected = 4,
    CredentialAuthenticated = 5,
    StoppingAuthentication = 6,
    ReadyForLock = 7,
    CheckingDevicePresence = 8,
};

enum class SecondaryAuthenticationFactorAuthenticationStatus
{
    Failed = 0,
    Started = 1,
    UnknownDevice = 2,
    DisabledByPolicy = 3,
    InvalidAuthenticationStage = 4,
};

enum class SecondaryAuthenticationFactorDeviceCapabilities : unsigned
{
    None = 0x0,
    SecureStorage = 0x1,
    StoreKeys = 0x2,
    ConfirmUserIntentToAuthenticate = 0x4,
    SupportSecureUserPresenceCheck = 0x8,
    TransmittedDataIsEncrypted = 0x10,
    HMacSha256 = 0x20,
    CloseRangeDataTransmission = 0x40,
};

DEFINE_ENUM_FLAG_OPERATORS(SecondaryAuthenticationFactorDeviceCapabilities)

enum class SecondaryAuthenticationFactorDeviceFindScope
{
    User = 0,
    AllUsers = 1,
};

enum class SecondaryAuthenticationFactorDevicePresence
{
    Absent = 0,
    Present = 1,
};

enum class SecondaryAuthenticationFactorDevicePresenceMonitoringMode
{
    Unsupported = 0,
    AppManaged = 1,
    SystemManaged = 2,
};

enum class SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
{
    Unsupported = 0,
    Succeeded = 1,
    DisabledByPolicy = 2,
};

enum class SecondaryAuthenticationFactorFinishAuthenticationStatus
{
    Failed = 0,
    Completed = 1,
    NonceExpired = 2,
};

enum class SecondaryAuthenticationFactorRegistrationStatus
{
    Failed = 0,
    Started = 1,
    CanceledByUser = 2,
    PinSetupRequired = 3,
    DisabledByPolicy = 4,
};

}

}
