// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.System.Profile.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Profile {

struct WINRT_EBO IAnalyticsInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAnalyticsInfoStatics>
{
    IAnalyticsInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAnalyticsVersionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAnalyticsVersionInfo>
{
    IAnalyticsVersionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEducationSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEducationSettingsStatics>
{
    IEducationSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHardwareIdentificationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHardwareIdentificationStatics>
{
    IHardwareIdentificationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHardwareToken :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHardwareToken>
{
    IHardwareToken(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownRetailInfoPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownRetailInfoPropertiesStatics>
{
    IKnownRetailInfoPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlatformDiagnosticsAndUsageDataSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformDiagnosticsAndUsageDataSettingsStatics>
{
    IPlatformDiagnosticsAndUsageDataSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRetailInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRetailInfoStatics>
{
    IRetailInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISharedModeSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISharedModeSettingsStatics>
{
    ISharedModeSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISharedModeSettingsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISharedModeSettingsStatics2>
{
    ISharedModeSettingsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemIdentificationInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemIdentificationInfo>
{
    ISystemIdentificationInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemIdentificationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemIdentificationStatics>
{
    ISystemIdentificationStatics(std::nullptr_t = nullptr) noexcept {}
};

}
