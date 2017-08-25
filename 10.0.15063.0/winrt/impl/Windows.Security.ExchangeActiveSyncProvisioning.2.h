// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning {

struct WINRT_EBO EasClientDeviceInformation :
    Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation,
    impl::require<EasClientDeviceInformation, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
{
    EasClientDeviceInformation(std::nullptr_t) noexcept {}
    EasClientDeviceInformation();
};

struct WINRT_EBO EasClientSecurityPolicy :
    Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy
{
    EasClientSecurityPolicy(std::nullptr_t) noexcept {}
    EasClientSecurityPolicy();
};

struct WINRT_EBO EasComplianceResults :
    Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults,
    impl::require<EasComplianceResults, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
{
    EasComplianceResults(std::nullptr_t) noexcept {}
};

}
