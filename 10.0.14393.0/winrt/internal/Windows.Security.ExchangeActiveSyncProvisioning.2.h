// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.ExchangeActiveSyncProvisioning.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_fc3a733a_7ded_5e92_a569_b43389ee8827
#define WINRT_GENERIC_fc3a733a_7ded_5e92_a569_b43389ee8827
template <> struct __declspec(uuid("fc3a733a-7ded-5e92-a569-b43389ee8827")) __declspec(novtable) IAsyncOperation<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> : impl_IAsyncOperation<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> {};
#endif

#ifndef WINRT_GENERIC_24a4131a_ed31_5eff_972e_750b956404d0
#define WINRT_GENERIC_24a4131a_ed31_5eff_972e_750b956404d0
template <> struct __declspec(uuid("24a4131a-ed31-5eff-972e-750b956404d0")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> : impl_AsyncOperationCompletedHandler<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> {};
#endif


}

namespace Windows::Security::ExchangeActiveSyncProvisioning {

template <typename D>
struct WINRT_EBO impl_IEasClientDeviceInformation
{
    GUID Id() const;
    hstring OperatingSystem() const;
    hstring FriendlyName() const;
    hstring SystemManufacturer() const;
    hstring SystemProductName() const;
    hstring SystemSku() const;
};

template <typename D>
struct WINRT_EBO impl_IEasClientDeviceInformation2
{
    hstring SystemHardwareVersion() const;
    hstring SystemFirmwareVersion() const;
};

template <typename D>
struct WINRT_EBO impl_IEasClientSecurityPolicy
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
    void PasswordExpiration(const Windows::Foundation::TimeSpan & value) const;
    uint32_t PasswordHistory() const;
    void PasswordHistory(uint32_t value) const;
    uint8_t MaxPasswordFailedAttempts() const;
    void MaxPasswordFailedAttempts(uint8_t value) const;
    Windows::Foundation::TimeSpan MaxInactivityTimeLock() const;
    void MaxInactivityTimeLock(const Windows::Foundation::TimeSpan & value) const;
    Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults CheckCompliance() const;
    Windows::Foundation::IAsyncOperation<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> ApplyAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEasComplianceResults
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

template <typename D>
struct WINRT_EBO impl_IEasComplianceResults2
{
    Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType EncryptionProviderType() const;
};

struct IEasClientDeviceInformation :
    Windows::IInspectable,
    impl::consume<IEasClientDeviceInformation>
{
    IEasClientDeviceInformation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEasClientDeviceInformation>(m_ptr); }
};

struct IEasClientDeviceInformation2 :
    Windows::IInspectable,
    impl::consume<IEasClientDeviceInformation2>,
    impl::require<IEasClientDeviceInformation2, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
{
    IEasClientDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEasClientDeviceInformation2>(m_ptr); }
};

struct IEasClientSecurityPolicy :
    Windows::IInspectable,
    impl::consume<IEasClientSecurityPolicy>
{
    IEasClientSecurityPolicy(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEasClientSecurityPolicy>(m_ptr); }
};

struct IEasComplianceResults :
    Windows::IInspectable,
    impl::consume<IEasComplianceResults>
{
    IEasComplianceResults(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEasComplianceResults>(m_ptr); }
};

struct IEasComplianceResults2 :
    Windows::IInspectable,
    impl::consume<IEasComplianceResults2>,
    impl::require<IEasComplianceResults2, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
{
    IEasComplianceResults2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEasComplianceResults2>(m_ptr); }
};

}

}
