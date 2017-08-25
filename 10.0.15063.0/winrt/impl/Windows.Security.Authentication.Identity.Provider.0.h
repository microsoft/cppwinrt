// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Provider {

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

namespace winrt::impl {

template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus>{ using type = enum_category; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthentication" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationResult" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStatics" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo2" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistration" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationResult" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationStatics" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationMessage" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationScenario" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStage" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStatus" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDeviceCapabilities" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDeviceFindScope" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresence" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresenceMonitoringMode" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorFinishAuthenticationStatus" }; };
template <> struct name<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationStatus" }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication>{ static constexpr GUID value{ 0x020A16E5,0x6A25,0x40A3,{ 0x8C,0x00,0x50,0xA0,0x23,0xF6,0x19,0xD1 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult>{ static constexpr GUID value{ 0x9CBB5987,0xEF6D,0x4BC2,{ 0xBF,0x49,0x46,0x17,0x51,0x5A,0x0F,0x9A } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>{ static constexpr GUID value{ 0xD4A5EE56,0x7291,0x4073,{ 0xBC,0x1F,0xCC,0xB8,0xF5,0xAF,0xDF,0x96 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo>{ static constexpr GUID value{ 0x56FEC28B,0xE8AA,0x4C0F,{ 0x8E,0x4C,0xA5,0x59,0xE7,0x3A,0xDD,0x88 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>{ static constexpr GUID value{ 0x3F582656,0x28F8,0x4E0F,{ 0xAE,0x8C,0x58,0x98,0xB9,0xAE,0x24,0x69 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>{ static constexpr GUID value{ 0x90499A19,0x7EF2,0x4523,{ 0x95,0x1C,0xA4,0x17,0xA2,0x4A,0xCF,0x93 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>{ static constexpr GUID value{ 0x1E2BA861,0x8533,0x4FCE,{ 0x83,0x9B,0xEC,0xB7,0x24,0x10,0xAC,0x14 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2>{ static constexpr GUID value{ 0x14D981A3,0xFC26,0x4FF7,{ 0xAB,0xC3,0x48,0xE8,0x2A,0x51,0x2A,0x0A } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration>{ static constexpr GUID value{ 0x9F4CBBB4,0x8CBA,0x48B0,{ 0x84,0x0D,0xDB,0xB2,0x2A,0x54,0xC6,0x78 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult>{ static constexpr GUID value{ 0xA4FE35F0,0xADE3,0x4981,{ 0xAF,0x6B,0xEC,0x19,0x59,0x21,0x68,0x2A } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>{ static constexpr GUID value{ 0x1ADF0F65,0xE3B7,0x4155,{ 0x99,0x7F,0xB7,0x56,0xEF,0x65,0xBE,0xBA } }; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication>{ using type = Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult>{ using type = Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>{ using type = Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo>{ using type = Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>{ using type = Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration>{ using type = Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult>{ using type = Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication
{
    Windows::Storage::Streams::IBuffer ServiceAuthenticationHmac() const;
    Windows::Storage::Streams::IBuffer SessionNonce() const;
    Windows::Storage::Streams::IBuffer DeviceNonce() const;
    Windows::Storage::Streams::IBuffer DeviceConfigurationData() const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> FinishAuthenticationAsync(Windows::Storage::Streams::IBuffer const& deviceHmac, Windows::Storage::Streams::IBuffer const& sessionHmac) const;
    Windows::Foundation::IAsyncAction AbortAuthenticationAsync(param::hstring const& errorLogMessage) const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus Status() const;
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication Authentication() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo StageInfo() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage Stage() const;
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario Scenario() const;
    hstring DeviceId() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics
{
    Windows::Foundation::IAsyncAction ShowNotificationMessageAsync(param::hstring const& deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage const& message) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> StartAuthenticationAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& serviceAuthenticationNonce) const;
    event_token AuthenticationStageChanged(Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler) const;
    using AuthenticationStageChanged_revoker = event_revoker<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>;
    AuthenticationStageChanged_revoker AuthenticationStageChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler) const;
    void AuthenticationStageChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> GetAuthenticationStageInfoAsync() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const;
    Windows::Foundation::IAsyncAction UnregisterDevicePresenceMonitoringAsync(param::hstring const& deviceId) const;
    bool IsDevicePresenceMonitoringSupported() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo
{
    hstring DeviceId() const;
    hstring DeviceFriendlyName() const;
    hstring DeviceModelNumber() const;
    Windows::Storage::Streams::IBuffer DeviceConfigurationData() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode PresenceMonitoringMode() const;
    Windows::Foundation::IAsyncAction UpdateDevicePresenceAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence const& presenceState) const;
    bool IsAuthenticationSupported() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration
{
    Windows::Foundation::IAsyncAction FinishRegisteringDeviceAsync(Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const;
    Windows::Foundation::IAsyncAction AbortRegisteringDeviceAsync(param::hstring const& errorLogMessage) const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus Status() const;
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration Registration() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> RequestStartRegisteringDeviceAsync(param::hstring const& deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities const& capabilities, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceKey, Windows::Storage::Streams::IBuffer const& mutualAuthenticationKey) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope const& queryType) const;
    Windows::Foundation::IAsyncAction UnregisterDeviceAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncAction UpdateDeviceConfigurationDataAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>; };

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceAuthenticationHmac(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SessionNonce(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceNonce(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceConfigurationData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall FinishAuthenticationAsync(::IUnknown* deviceHmac, ::IUnknown* sessionHmac, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall AbortAuthenticationAsync(HSTRING errorLogMessage, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus>* value) = 0;
    virtual HRESULT __stdcall get_Authentication(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StageInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Stage(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage>* value) = 0;
    virtual HRESULT __stdcall get_Scenario(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario>* value) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowNotificationMessageAsync(HSTRING deviceName, abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage> message, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall StartAuthenticationAsync(HSTRING deviceId, ::IUnknown* serviceAuthenticationNonce, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_AuthenticationStageChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AuthenticationStageChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetAuthenticationStageInfoAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterDevicePresenceMonitoringAsync(HSTRING deviceId, HSTRING deviceInstancePath, abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode> monitoringMode, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RegisterDevicePresenceMonitoringWithNewDeviceAsync(HSTRING deviceId, HSTRING deviceInstancePath, abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode> monitoringMode, HSTRING deviceFriendlyName, HSTRING deviceModelNumber, ::IUnknown* deviceConfigurationData, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UnregisterDevicePresenceMonitoringAsync(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsDevicePresenceMonitoringSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* deviceId) = 0;
    virtual HRESULT __stdcall get_DeviceFriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceModelNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceConfigurationData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PresenceMonitoringMode(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode>* value) = 0;
    virtual HRESULT __stdcall UpdateDevicePresenceAsync(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence> presenceState, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_IsAuthenticationSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FinishRegisteringDeviceAsync(::IUnknown* deviceConfigurationData, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall AbortRegisteringDeviceAsync(HSTRING errorLogMessage, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus>* value) = 0;
    virtual HRESULT __stdcall get_Registration(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestStartRegisteringDeviceAsync(HSTRING deviceId, abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities> capabilities, HSTRING deviceFriendlyName, HSTRING deviceModelNumber, ::IUnknown* deviceKey, ::IUnknown* mutualAuthenticationKey, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindAllRegisteredDeviceInfoAsync(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope> queryType, ::IUnknown** deviceInfoList) = 0;
    virtual HRESULT __stdcall UnregisterDeviceAsync(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UpdateDeviceConfigurationDataAsync(HSTRING deviceId, ::IUnknown* deviceConfigurationData, ::IUnknown** result) = 0;
};};

}
