// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Authentication.Identity.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_05da520c_aba4_584c_bc08_19c5389a70e2
#define WINRT_GENERIC_05da520c_aba4_584c_bc08_19c5389a70e2
template <> struct __declspec(uuid("05da520c-aba4-584c-bc08-19c5389a70e2")) __declspec(novtable) IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> : impl_IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_63c2e57e_3b00_5752_8fa7_cb9cbe8fe088
#define WINRT_GENERIC_63c2e57e_3b00_5752_8fa7_cb9cbe8fe088
template <> struct __declspec(uuid("63c2e57e-3b00-5752-8fa7-cb9cbe8fe088")) __declspec(novtable) IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> : impl_IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_18b0a73c_db59_5279_a76d_02416b2d90b6
#define WINRT_GENERIC_18b0a73c_db59_5279_a76d_02416b2d90b6
template <> struct __declspec(uuid("18b0a73c-db59-5279-a76d-02416b2d90b6")) __declspec(novtable) IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> : impl_IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> {};
#endif

#ifndef WINRT_GENERIC_10409b3c_42e4_586f_84c1_803da23765af
#define WINRT_GENERIC_10409b3c_42e4_586f_84c1_803da23765af
template <> struct __declspec(uuid("10409b3c-42e4-586f-84c1-803da23765af")) __declspec(novtable) EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> : impl_EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_864a2317_b440_5e9e_ae55_4550bb6307df
#define WINRT_GENERIC_864a2317_b440_5e9e_ae55_4550bb6307df
template <> struct __declspec(uuid("864a2317-b440-5e9e-ae55-4550bb6307df")) __declspec(novtable) IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> : impl_IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> {};
#endif

#ifndef WINRT_GENERIC_9159437a_4397_546e_be61_2ef161717e06
#define WINRT_GENERIC_9159437a_4397_546e_be61_2ef161717e06
template <> struct __declspec(uuid("9159437a-4397-546e-be61-2ef161717e06")) __declspec(novtable) IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> : impl_IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> {};
#endif

#ifndef WINRT_GENERIC_a04902e8_f830_50ea_89ea_96e2a6fb9453
#define WINRT_GENERIC_a04902e8_f830_50ea_89ea_96e2a6fb9453
template <> struct __declspec(uuid("a04902e8-f830-50ea-89ea-96e2a6fb9453")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> : impl_AsyncOperationCompletedHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_0eedbda6_2de0_50af_abc4_46073245fb2d
#define WINRT_GENERIC_0eedbda6_2de0_50af_abc4_46073245fb2d
template <> struct __declspec(uuid("0eedbda6-2de0-50af-abc4-46073245fb2d")) __declspec(novtable) IIterator<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> : impl_IIterator<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> {};
#endif

#ifndef WINRT_GENERIC_43b7bbe4_f096_53dd_8c16_1faa4b468c86
#define WINRT_GENERIC_43b7bbe4_f096_53dd_8c16_1faa4b468c86
template <> struct __declspec(uuid("43b7bbe4-f096-53dd-8c16-1faa4b468c86")) __declspec(novtable) IIterable<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> : impl_IIterable<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2547373d_9684_5e5b_a9b8_a6f90ce632ad
#define WINRT_GENERIC_2547373d_9684_5e5b_a9b8_a6f90ce632ad
template <> struct __declspec(uuid("2547373d-9684-5e5b-a9b8-a6f90ce632ad")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> : impl_AsyncOperationCompletedHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> {};
#endif

#ifndef WINRT_GENERIC_7811d384_2eb8_58f1_afed_4b4b888f4357
#define WINRT_GENERIC_7811d384_2eb8_58f1_afed_4b4b888f4357
template <> struct __declspec(uuid("7811d384-2eb8-58f1-afed-4b4b888f4357")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> : impl_AsyncOperationCompletedHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> {};
#endif

#ifndef WINRT_GENERIC_ae1d7146_3d91_50e3_8f13_613cf2801207
#define WINRT_GENERIC_ae1d7146_3d91_50e3_8f13_613cf2801207
template <> struct __declspec(uuid("ae1d7146-3d91-50e3-8f13-613cf2801207")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> {};
#endif

#ifndef WINRT_GENERIC_47eb155b_abe0_55a5_9310_feb1dd57dca5
#define WINRT_GENERIC_47eb155b_abe0_55a5_9310_feb1dd57dca5
template <> struct __declspec(uuid("47eb155b-abe0-55a5-9310-feb1dd57dca5")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> {};
#endif

#ifndef WINRT_GENERIC_06752d25_d43e_5d2e_a305_4e1576846fee
#define WINRT_GENERIC_06752d25_d43e_5d2e_a305_4e1576846fee
template <> struct __declspec(uuid("06752d25-d43e-5d2e-a305-4e1576846fee")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> {};
#endif


}

namespace Windows::Security::Authentication::Identity::Provider {

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorAuthentication
{
    Windows::Storage::Streams::IBuffer ServiceAuthenticationHmac() const;
    Windows::Storage::Streams::IBuffer SessionNonce() const;
    Windows::Storage::Streams::IBuffer DeviceNonce() const;
    Windows::Storage::Streams::IBuffer DeviceConfigurationData() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> FinishAuthenticationAsync(const Windows::Storage::Streams::IBuffer & deviceHmac, const Windows::Storage::Streams::IBuffer & sessionHmac) const;
    Windows::Foundation::IAsyncAction AbortAuthenticationAsync(hstring_ref errorLogMessage) const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorAuthenticationResult
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus Status() const;
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication Authentication() const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo StageInfo() const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorAuthenticationStageInfo
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage Stage() const;
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario Scenario() const;
    hstring DeviceId() const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorAuthenticationStatics
{
    Windows::Foundation::IAsyncAction ShowNotificationMessageAsync(hstring_ref deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage message) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> StartAuthenticationAsync(hstring_ref deviceId, const Windows::Storage::Streams::IBuffer & serviceAuthenticationNonce) const;
    event_token AuthenticationStageChanged(const Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> & handler) const;
    using AuthenticationStageChanged_revoker = event_revoker<ISecondaryAuthenticationFactorAuthenticationStatics>;
    AuthenticationStageChanged_revoker AuthenticationStageChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> & handler) const;
    void AuthenticationStageChanged(event_token token) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> GetAuthenticationStageInfoAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorInfo
{
    hstring DeviceId() const;
    hstring DeviceFriendlyName() const;
    hstring DeviceModelNumber() const;
    Windows::Storage::Streams::IBuffer DeviceConfigurationData() const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorRegistration
{
    Windows::Foundation::IAsyncAction FinishRegisteringDeviceAsync(const Windows::Storage::Streams::IBuffer & deviceConfigurationData) const;
    Windows::Foundation::IAsyncAction AbortRegisteringDeviceAsync(hstring_ref errorLogMessage) const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorRegistrationResult
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus Status() const;
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration Registration() const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorRegistrationStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> RequestStartRegisteringDeviceAsync(hstring_ref deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities capabilities, hstring_ref deviceFriendlyName, hstring_ref deviceModelNumber, const Windows::Storage::Streams::IBuffer & deviceKey, const Windows::Storage::Streams::IBuffer & mutualAuthenticationKey) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope queryType) const;
    Windows::Foundation::IAsyncAction UnregisterDeviceAsync(hstring_ref deviceId) const;
    Windows::Foundation::IAsyncAction UpdateDeviceConfigurationDataAsync(hstring_ref deviceId, const Windows::Storage::Streams::IBuffer & deviceConfigurationData) const;
};

struct ISecondaryAuthenticationFactorAuthentication :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorAuthentication>
{
    ISecondaryAuthenticationFactorAuthentication(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorAuthentication>(m_ptr); }
};

struct ISecondaryAuthenticationFactorAuthenticationResult :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorAuthenticationResult>
{
    ISecondaryAuthenticationFactorAuthenticationResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorAuthenticationResult>(m_ptr); }
};

struct ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>
{
    ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>(m_ptr); }
};

struct ISecondaryAuthenticationFactorAuthenticationStageInfo :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorAuthenticationStageInfo>
{
    ISecondaryAuthenticationFactorAuthenticationStageInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorAuthenticationStageInfo>(m_ptr); }
};

struct ISecondaryAuthenticationFactorAuthenticationStatics :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorAuthenticationStatics>
{
    ISecondaryAuthenticationFactorAuthenticationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorAuthenticationStatics>(m_ptr); }
};

struct ISecondaryAuthenticationFactorInfo :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorInfo>
{
    ISecondaryAuthenticationFactorInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorInfo>(m_ptr); }
};

struct ISecondaryAuthenticationFactorRegistration :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorRegistration>
{
    ISecondaryAuthenticationFactorRegistration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorRegistration>(m_ptr); }
};

struct ISecondaryAuthenticationFactorRegistrationResult :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorRegistrationResult>
{
    ISecondaryAuthenticationFactorRegistrationResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorRegistrationResult>(m_ptr); }
};

struct ISecondaryAuthenticationFactorRegistrationStatics :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorRegistrationStatics>
{
    ISecondaryAuthenticationFactorRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorRegistrationStatics>(m_ptr); }
};

}

}
