// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Security.Authentication.Identity.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Provider {

struct WINRT_EBO ISecondaryAuthenticationFactorAuthentication :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthentication>
{
    ISecondaryAuthenticationFactorAuthentication(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorAuthenticationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationResult>
{
    ISecondaryAuthenticationFactorAuthenticationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>
{
    ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorAuthenticationStageInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationStageInfo>
{
    ISecondaryAuthenticationFactorAuthenticationStageInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorAuthenticationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationStatics>
{
    ISecondaryAuthenticationFactorAuthenticationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>
{
    ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorInfo>
{
    ISecondaryAuthenticationFactorInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorInfo2>,
    impl::require<ISecondaryAuthenticationFactorInfo2, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>
{
    ISecondaryAuthenticationFactorInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorRegistration :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorRegistration>
{
    ISecondaryAuthenticationFactorRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorRegistrationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorRegistrationResult>
{
    ISecondaryAuthenticationFactorRegistrationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorRegistrationStatics>
{
    ISecondaryAuthenticationFactorRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

}
