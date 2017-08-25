// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.Authentication.Identity.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Provider {

struct WINRT_EBO SecondaryAuthenticationFactorAuthentication :
    Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication
{
    SecondaryAuthenticationFactorAuthentication(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncAction ShowNotificationMessageAsync(param::hstring const& deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage const& message);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> StartAuthenticationAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& serviceAuthenticationNonce);
    static event_token AuthenticationStageChanged(Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler);
    using AuthenticationStageChanged_revoker = factory_event_revoker<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>;
    static AuthenticationStageChanged_revoker AuthenticationStageChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler);
    static void AuthenticationStageChanged(event_token const& token);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> GetAuthenticationStageInfoAsync();
};

struct WINRT_EBO SecondaryAuthenticationFactorAuthenticationResult :
    Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult
{
    SecondaryAuthenticationFactorAuthenticationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs :
    Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
{
    SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SecondaryAuthenticationFactorAuthenticationStageInfo :
    Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo
{
    SecondaryAuthenticationFactorAuthenticationStageInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SecondaryAuthenticationFactorInfo :
    Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo,
    impl::require<SecondaryAuthenticationFactorInfo, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2>
{
    SecondaryAuthenticationFactorInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SecondaryAuthenticationFactorRegistration :
    Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration
{
    SecondaryAuthenticationFactorRegistration(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceConfigurationData);
    static Windows::Foundation::IAsyncAction UnregisterDevicePresenceMonitoringAsync(param::hstring const& deviceId);
    static bool IsDevicePresenceMonitoringSupported();
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> RequestStartRegisteringDeviceAsync(param::hstring const& deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities const& capabilities, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceKey, Windows::Storage::Streams::IBuffer const& mutualAuthenticationKey);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope const& queryType);
    static Windows::Foundation::IAsyncAction UnregisterDeviceAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncAction UpdateDeviceConfigurationDataAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& deviceConfigurationData);
};

struct WINRT_EBO SecondaryAuthenticationFactorRegistrationResult :
    Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult
{
    SecondaryAuthenticationFactorRegistrationResult(std::nullptr_t) noexcept {}
};

}
