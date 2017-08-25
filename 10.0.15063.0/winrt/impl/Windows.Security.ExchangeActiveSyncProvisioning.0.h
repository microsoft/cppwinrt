// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning {

enum class EasDisallowConvenienceLogonResult
{
    NotEvaluated = 0,
    Compliant = 1,
    CanBeCompliant = 2,
    RequestedPolicyIsStricter = 3,
};

enum class EasEncryptionProviderType
{
    NotEvaluated = 0,
    WindowsEncryption = 1,
    OtherEncryption = 2,
};

enum class EasMaxInactivityTimeLockResult
{
    NotEvaluated = 0,
    Compliant = 1,
    CanBeCompliant = 2,
    RequestedPolicyIsStricter = 3,
    InvalidParameter = 4,
};

enum class EasMaxPasswordFailedAttemptsResult
{
    NotEvaluated = 0,
    Compliant = 1,
    CanBeCompliant = 2,
    RequestedPolicyIsStricter = 3,
    InvalidParameter = 4,
};

enum class EasMinPasswordComplexCharactersResult
{
    NotEvaluated = 0,
    Compliant = 1,
    CanBeCompliant = 2,
    RequestedPolicyIsStricter = 3,
    RequestedPolicyNotEnforceable = 4,
    InvalidParameter = 5,
    CurrentUserHasBlankPassword = 6,
    AdminsHaveBlankPassword = 7,
    UserCannotChangePassword = 8,
    AdminsCannotChangePassword = 9,
    LocalControlledUsersCannotChangePassword = 10,
    ConnectedAdminsProviderPolicyIsWeak = 11,
    ConnectedUserProviderPolicyIsWeak = 12,
    ChangeConnectedAdminsPassword = 13,
    ChangeConnectedUserPassword = 14,
};

enum class EasMinPasswordLengthResult
{
    NotEvaluated = 0,
    Compliant = 1,
    CanBeCompliant = 2,
    RequestedPolicyIsStricter = 3,
    RequestedPolicyNotEnforceable = 4,
    InvalidParameter = 5,
    CurrentUserHasBlankPassword = 6,
    AdminsHaveBlankPassword = 7,
    UserCannotChangePassword = 8,
    AdminsCannotChangePassword = 9,
    LocalControlledUsersCannotChangePassword = 10,
    ConnectedAdminsProviderPolicyIsWeak = 11,
    ConnectedUserProviderPolicyIsWeak = 12,
    ChangeConnectedAdminsPassword = 13,
    ChangeConnectedUserPassword = 14,
};

enum class EasPasswordExpirationResult
{
    NotEvaluated = 0,
    Compliant = 1,
    CanBeCompliant = 2,
    RequestedPolicyIsStricter = 3,
    RequestedExpirationIncompatible = 4,
    InvalidParameter = 5,
    UserCannotChangePassword = 6,
    AdminsCannotChangePassword = 7,
    LocalControlledUsersCannotChangePassword = 8,
};

enum class EasPasswordHistoryResult
{
    NotEvaluated = 0,
    Compliant = 1,
    CanBeCompliant = 2,
    RequestedPolicyIsStricter = 3,
    InvalidParameter = 4,
};

enum class EasRequireEncryptionResult
{
    NotEvaluated = 0,
    Compliant = 1,
    CanBeCompliant = 2,
    NotProvisionedOnAllVolumes = 3,
    DeFixedDataNotSupported [[deprecated("DeFixedDataNotSupported may be altered or unavailable for releases after Windows 8.1. Instead, use FixedDataNotSupported.")]] = 4,
    FixedDataNotSupported = 4,
    DeHardwareNotCompliant [[deprecated("DeHardwareNotCompliant may be altered or unavailable for releases after Windows 8.1. Instead, use HardwareNotCompliant.")]] = 5,
    HardwareNotCompliant = 5,
    DeWinReNotConfigured [[deprecated("DeWinReNotConfigured may be altered or unavailable for releases after Windows 8.1. Instead, use LockNotConfigured.")]] = 6,
    LockNotConfigured = 6,
    DeProtectionSuspended [[deprecated("DeProtectionSuspended may be altered or unavailable for releases after Windows 8.1. Instead, use ProtectionSuspended.")]] = 7,
    ProtectionSuspended = 7,
    DeOsVolumeNotProtected [[deprecated("DeOsVolumeNotProtected may be altered or unavailable for releases after Windows 8.1. Instead, use OsVolumeNotProtected.")]] = 8,
    OsVolumeNotProtected = 8,
    DeProtectionNotYetEnabled [[deprecated("DeProtectionNotYetEnabled may be altered or unavailable for releases after Windows 8.1. Instead, use ProtectionNotYetEnabled.")]] = 9,
    ProtectionNotYetEnabled = 9,
    NoFeatureLicense = 10,
    OsNotProtected = 11,
    UnexpectedFailure = 12,
};

struct IEasClientDeviceInformation;
struct IEasClientDeviceInformation2;
struct IEasClientSecurityPolicy;
struct IEasComplianceResults;
struct IEasComplianceResults2;
struct EasClientDeviceInformation;
struct EasClientSecurityPolicy;
struct EasComplianceResults;

}

namespace winrt::impl {

template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ using type = interface_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ using type = interface_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>{ using type = interface_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>{ using type = interface_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>{ using type = interface_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>{ using type = class_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy>{ using type = class_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>{ using type = class_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult>{ using type = enum_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType>{ using type = enum_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult>{ using type = enum_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult>{ using type = enum_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult>{ using type = enum_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult>{ using type = enum_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult>{ using type = enum_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult>{ using type = enum_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult>{ using type = enum_category; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasDisallowConvenienceLogonResult" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasEncryptionProviderType" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasMaxInactivityTimeLockResult" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasMaxPasswordFailedAttemptsResult" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasMinPasswordComplexCharactersResult" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasMinPasswordLengthResult" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasPasswordExpirationResult" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasPasswordHistoryResult" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasRequireEncryptionResult" }; };
template <> struct guid<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ static constexpr GUID value{ 0x54DFD981,0x1968,0x4CA3,{ 0xB9,0x58,0xE5,0x95,0xD1,0x65,0x05,0xEB } }; };
template <> struct guid<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ static constexpr GUID value{ 0xFFB35923,0xBB26,0x4D6A,{ 0x81,0xBC,0x16,0x5A,0xEE,0x0A,0xD7,0x54 } }; };
template <> struct guid<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>{ static constexpr GUID value{ 0x45B72362,0xDFBA,0x4A9B,{ 0xAC,0xED,0x6F,0xE2,0xAD,0xCB,0x64,0x20 } }; };
template <> struct guid<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>{ static constexpr GUID value{ 0x463C299C,0x7F19,0x4C66,{ 0xB4,0x03,0xCB,0x45,0xDD,0x57,0xA2,0xB3 } }; };
template <> struct guid<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>{ static constexpr GUID value{ 0x2FBE60C9,0x1AA8,0x47F5,{ 0x88,0xBB,0xCB,0x3E,0xF0,0xBF,0xFB,0x15 } }; };
template <> struct default_interface<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>{ using type = Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation; };
template <> struct default_interface<Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy>{ using type = Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy; };
template <> struct default_interface<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>{ using type = Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults; };

template <typename D>
struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation
{
    GUID Id() const;
    hstring OperatingSystem() const;
    hstring FriendlyName() const;
    hstring SystemManufacturer() const;
    hstring SystemProductName() const;
    hstring SystemSku() const;
};
template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> { template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>; };

template <typename D>
struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2
{
    hstring SystemHardwareVersion() const;
    hstring SystemFirmwareVersion() const;
};
template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> { template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>; };

template <typename D>
struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy
{
    bool RequireEncryption() const;
    void RequireEncryption(bool value) const;
    uint8_t MinPasswordLength() const;
    void MinPasswordLength(uint8_t value) const;
    bool DisallowConvenienceLogon() const;
    void DisallowConvenienceLogon(bool value) const;
    uint8_t MinPasswordComplexCharacters() const;
    void MinPasswordComplexCharacters(uint8_t value) const;
    Windows::Foundation::TimeSpan PasswordExpiration() const;
    void PasswordExpiration(Windows::Foundation::TimeSpan const& value) const;
    uint32_t PasswordHistory() const;
    void PasswordHistory(uint32_t value) const;
    uint8_t MaxPasswordFailedAttempts() const;
    void MaxPasswordFailedAttempts(uint8_t value) const;
    Windows::Foundation::TimeSpan MaxInactivityTimeLock() const;
    void MaxInactivityTimeLock(Windows::Foundation::TimeSpan const& value) const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults CheckCompliance() const;
    Windows::Foundation::IAsyncOperation<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> ApplyAsync() const;
};
template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy> { template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>; };

template <typename D>
struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults
{
    bool Compliant() const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult RequireEncryptionResult() const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult MinPasswordLengthResult() const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult DisallowConvenienceLogonResult() const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult MinPasswordComplexCharactersResult() const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult PasswordExpirationResult() const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult PasswordHistoryResult() const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult MaxPasswordFailedAttemptsResult() const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult MaxInactivityTimeLockResult() const;
};
template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults> { template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>; };

template <typename D>
struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults2
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType EncryptionProviderType() const;
};
template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2> { template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults2<D>; };

template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_OperatingSystem(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SystemManufacturer(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SystemProductName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SystemSku(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SystemHardwareVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SystemFirmwareVersion(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequireEncryption(bool* value) = 0;
    virtual HRESULT __stdcall put_RequireEncryption(bool value) = 0;
    virtual HRESULT __stdcall get_MinPasswordLength(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_MinPasswordLength(uint8_t value) = 0;
    virtual HRESULT __stdcall get_DisallowConvenienceLogon(bool* value) = 0;
    virtual HRESULT __stdcall put_DisallowConvenienceLogon(bool value) = 0;
    virtual HRESULT __stdcall get_MinPasswordComplexCharacters(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_MinPasswordComplexCharacters(uint8_t value) = 0;
    virtual HRESULT __stdcall get_PasswordExpiration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_PasswordExpiration(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_PasswordHistory(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_PasswordHistory(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MaxPasswordFailedAttempts(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_MaxPasswordFailedAttempts(uint8_t value) = 0;
    virtual HRESULT __stdcall get_MaxInactivityTimeLock(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_MaxInactivityTimeLock(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall CheckCompliance(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ApplyAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Compliant(bool* value) = 0;
    virtual HRESULT __stdcall get_RequireEncryptionResult(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult>* value) = 0;
    virtual HRESULT __stdcall get_MinPasswordLengthResult(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult>* value) = 0;
    virtual HRESULT __stdcall get_DisallowConvenienceLogonResult(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult>* value) = 0;
    virtual HRESULT __stdcall get_MinPasswordComplexCharactersResult(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult>* value) = 0;
    virtual HRESULT __stdcall get_PasswordExpirationResult(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult>* value) = 0;
    virtual HRESULT __stdcall get_PasswordHistoryResult(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult>* value) = 0;
    virtual HRESULT __stdcall get_MaxPasswordFailedAttemptsResult(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult>* value) = 0;
    virtual HRESULT __stdcall get_MaxInactivityTimeLockResult(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult>* value) = 0;
};};

template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EncryptionProviderType(abi_t<Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType>* value) = 0;
};};

}
