// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Profile.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_09335560_6c6b_5a26_9348_97b781132b20
#define WINRT_GENERIC_09335560_6c6b_5a26_9348_97b781132b20
template <> struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20")) __declspec(novtable) IKeyValuePair<hstring, Windows::IInspectable> : impl_IKeyValuePair<hstring, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_bb78502a_f79d_54fa_92c9_90c5039fdf7e
#define WINRT_GENERIC_bb78502a_f79d_54fa_92c9_90c5039fdf7e
template <> struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e")) __declspec(novtable) IMapView<hstring, Windows::IInspectable> : impl_IMapView<hstring, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_fe2f3d47_5d47_5499_8374_430c7cda0204
#define WINRT_GENERIC_fe2f3d47_5d47_5499_8374_430c7cda0204
template <> struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> {};
#endif

#ifndef WINRT_GENERIC_5db5fa32_707c_5849_a06b_91c8eb9d10e8
#define WINRT_GENERIC_5db5fa32_707c_5849_a06b_91c8eb9d10e8
template <> struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> {};
#endif


}

namespace Windows::System::Profile {

template <typename D>
struct WINRT_EBO impl_IAnalyticsInfoStatics
{
    Windows::System::Profile::AnalyticsVersionInfo VersionInfo() const;
    hstring DeviceForm() const;
};

template <typename D>
struct WINRT_EBO impl_IAnalyticsVersionInfo
{
    hstring DeviceFamily() const;
    hstring DeviceFamilyVersion() const;
};

template <typename D>
struct WINRT_EBO impl_IHardwareIdentificationStatics
{
    Windows::System::Profile::HardwareToken GetPackageSpecificToken(const Windows::Storage::Streams::IBuffer & nonce) const;
};

template <typename D>
struct WINRT_EBO impl_IHardwareToken
{
    Windows::Storage::Streams::IBuffer Id() const;
    Windows::Storage::Streams::IBuffer Signature() const;
    Windows::Storage::Streams::IBuffer Certificate() const;
};

template <typename D>
struct WINRT_EBO impl_IKnownRetailInfoPropertiesStatics
{
    hstring RetailAccessCode() const;
    hstring ManufacturerName() const;
    hstring ModelName() const;
    hstring DisplayModelName() const;
    hstring Price() const;
    hstring IsFeatured() const;
    hstring FormFactor() const;
    hstring ScreenSize() const;
    hstring Weight() const;
    hstring DisplayDescription() const;
    hstring BatteryLifeDescription() const;
    hstring ProcessorDescription() const;
    hstring Memory() const;
    hstring StorageDescription() const;
    hstring GraphicsDescription() const;
    hstring FrontCameraDescription() const;
    hstring RearCameraDescription() const;
    hstring HasNfc() const;
    hstring HasSdSlot() const;
    hstring HasOpticalDrive() const;
    hstring IsOfficeInstalled() const;
    hstring WindowsEdition() const;
};

template <typename D>
struct WINRT_EBO impl_IPlatformDiagnosticsAndUsageDataSettingsStatics
{
    Windows::System::Profile::PlatformDataCollectionLevel CollectionLevel() const;
    event_token CollectionLevelChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using CollectionLevelChanged_revoker = event_revoker<IPlatformDiagnosticsAndUsageDataSettingsStatics>;
    CollectionLevelChanged_revoker CollectionLevelChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void CollectionLevelChanged(event_token token) const;
    bool CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel level) const;
};

template <typename D>
struct WINRT_EBO impl_IRetailInfoStatics
{
    bool IsDemoModeEnabled() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> Properties() const;
};

template <typename D>
struct WINRT_EBO impl_ISharedModeSettingsStatics
{
    bool IsEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_ISystemIdentificationInfo
{
    Windows::Storage::Streams::IBuffer Id() const;
    Windows::System::Profile::SystemIdentificationSource Source() const;
};

template <typename D>
struct WINRT_EBO impl_ISystemIdentificationStatics
{
    Windows::System::Profile::SystemIdentificationInfo GetSystemIdForPublisher() const;
    Windows::System::Profile::SystemIdentificationInfo GetSystemIdForUser(const Windows::System::User & user) const;
};

struct IAnalyticsInfoStatics :
    Windows::IInspectable,
    impl::consume<IAnalyticsInfoStatics>
{
    IAnalyticsInfoStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAnalyticsInfoStatics>(m_ptr); }
};

struct IAnalyticsVersionInfo :
    Windows::IInspectable,
    impl::consume<IAnalyticsVersionInfo>
{
    IAnalyticsVersionInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAnalyticsVersionInfo>(m_ptr); }
};

struct IHardwareIdentificationStatics :
    Windows::IInspectable,
    impl::consume<IHardwareIdentificationStatics>
{
    IHardwareIdentificationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHardwareIdentificationStatics>(m_ptr); }
};

struct IHardwareToken :
    Windows::IInspectable,
    impl::consume<IHardwareToken>
{
    IHardwareToken(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHardwareToken>(m_ptr); }
};

struct IKnownRetailInfoPropertiesStatics :
    Windows::IInspectable,
    impl::consume<IKnownRetailInfoPropertiesStatics>
{
    IKnownRetailInfoPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKnownRetailInfoPropertiesStatics>(m_ptr); }
};

struct IPlatformDiagnosticsAndUsageDataSettingsStatics :
    Windows::IInspectable,
    impl::consume<IPlatformDiagnosticsAndUsageDataSettingsStatics>
{
    IPlatformDiagnosticsAndUsageDataSettingsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlatformDiagnosticsAndUsageDataSettingsStatics>(m_ptr); }
};

struct IRetailInfoStatics :
    Windows::IInspectable,
    impl::consume<IRetailInfoStatics>
{
    IRetailInfoStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRetailInfoStatics>(m_ptr); }
};

struct ISharedModeSettingsStatics :
    Windows::IInspectable,
    impl::consume<ISharedModeSettingsStatics>
{
    ISharedModeSettingsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISharedModeSettingsStatics>(m_ptr); }
};

struct ISystemIdentificationInfo :
    Windows::IInspectable,
    impl::consume<ISystemIdentificationInfo>
{
    ISystemIdentificationInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISystemIdentificationInfo>(m_ptr); }
};

struct ISystemIdentificationStatics :
    Windows::IInspectable,
    impl::consume<ISystemIdentificationStatics>
{
    ISystemIdentificationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISystemIdentificationStatics>(m_ptr); }
};

}

}
