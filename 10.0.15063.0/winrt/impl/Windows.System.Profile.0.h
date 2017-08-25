// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::System::Profile {

enum class PlatformDataCollectionLevel
{
    Security = 0,
    Basic = 1,
    Enhanced = 2,
    Full = 3,
};

enum class SystemIdentificationSource
{
    None = 0,
    Tpm = 1,
    Uefi = 2,
};

struct IAnalyticsInfoStatics;
struct IAnalyticsVersionInfo;
struct IEducationSettingsStatics;
struct IHardwareIdentificationStatics;
struct IHardwareToken;
struct IKnownRetailInfoPropertiesStatics;
struct IPlatformDiagnosticsAndUsageDataSettingsStatics;
struct IRetailInfoStatics;
struct ISharedModeSettingsStatics;
struct ISharedModeSettingsStatics2;
struct ISystemIdentificationInfo;
struct ISystemIdentificationStatics;
struct AnalyticsInfo;
struct AnalyticsVersionInfo;
struct EducationSettings;
struct HardwareIdentification;
struct HardwareToken;
struct KnownRetailInfoProperties;
struct PlatformDiagnosticsAndUsageDataSettings;
struct RetailInfo;
struct SharedModeSettings;
struct SystemIdentification;
struct SystemIdentificationInfo;

}

namespace winrt::impl {

template <> struct category<Windows::System::Profile::IAnalyticsInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::IAnalyticsVersionInfo>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::IEducationSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::IHardwareIdentificationStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::IHardwareToken>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::IRetailInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::ISharedModeSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::ISharedModeSettingsStatics2>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::ISystemIdentificationInfo>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::ISystemIdentificationStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::AnalyticsInfo>{ using type = class_category; };
template <> struct category<Windows::System::Profile::AnalyticsVersionInfo>{ using type = class_category; };
template <> struct category<Windows::System::Profile::EducationSettings>{ using type = class_category; };
template <> struct category<Windows::System::Profile::HardwareIdentification>{ using type = class_category; };
template <> struct category<Windows::System::Profile::HardwareToken>{ using type = class_category; };
template <> struct category<Windows::System::Profile::KnownRetailInfoProperties>{ using type = class_category; };
template <> struct category<Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings>{ using type = class_category; };
template <> struct category<Windows::System::Profile::RetailInfo>{ using type = class_category; };
template <> struct category<Windows::System::Profile::SharedModeSettings>{ using type = class_category; };
template <> struct category<Windows::System::Profile::SystemIdentification>{ using type = class_category; };
template <> struct category<Windows::System::Profile::SystemIdentificationInfo>{ using type = class_category; };
template <> struct category<Windows::System::Profile::PlatformDataCollectionLevel>{ using type = enum_category; };
template <> struct category<Windows::System::Profile::SystemIdentificationSource>{ using type = enum_category; };
template <> struct name<Windows::System::Profile::IAnalyticsInfoStatics>{ static constexpr auto & value{ L"Windows.System.Profile.IAnalyticsInfoStatics" }; };
template <> struct name<Windows::System::Profile::IAnalyticsVersionInfo>{ static constexpr auto & value{ L"Windows.System.Profile.IAnalyticsVersionInfo" }; };
template <> struct name<Windows::System::Profile::IEducationSettingsStatics>{ static constexpr auto & value{ L"Windows.System.Profile.IEducationSettingsStatics" }; };
template <> struct name<Windows::System::Profile::IHardwareIdentificationStatics>{ static constexpr auto & value{ L"Windows.System.Profile.IHardwareIdentificationStatics" }; };
template <> struct name<Windows::System::Profile::IHardwareToken>{ static constexpr auto & value{ L"Windows.System.Profile.IHardwareToken" }; };
template <> struct name<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>{ static constexpr auto & value{ L"Windows.System.Profile.IKnownRetailInfoPropertiesStatics" }; };
template <> struct name<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>{ static constexpr auto & value{ L"Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics" }; };
template <> struct name<Windows::System::Profile::IRetailInfoStatics>{ static constexpr auto & value{ L"Windows.System.Profile.IRetailInfoStatics" }; };
template <> struct name<Windows::System::Profile::ISharedModeSettingsStatics>{ static constexpr auto & value{ L"Windows.System.Profile.ISharedModeSettingsStatics" }; };
template <> struct name<Windows::System::Profile::ISharedModeSettingsStatics2>{ static constexpr auto & value{ L"Windows.System.Profile.ISharedModeSettingsStatics2" }; };
template <> struct name<Windows::System::Profile::ISystemIdentificationInfo>{ static constexpr auto & value{ L"Windows.System.Profile.ISystemIdentificationInfo" }; };
template <> struct name<Windows::System::Profile::ISystemIdentificationStatics>{ static constexpr auto & value{ L"Windows.System.Profile.ISystemIdentificationStatics" }; };
template <> struct name<Windows::System::Profile::AnalyticsInfo>{ static constexpr auto & value{ L"Windows.System.Profile.AnalyticsInfo" }; };
template <> struct name<Windows::System::Profile::AnalyticsVersionInfo>{ static constexpr auto & value{ L"Windows.System.Profile.AnalyticsVersionInfo" }; };
template <> struct name<Windows::System::Profile::EducationSettings>{ static constexpr auto & value{ L"Windows.System.Profile.EducationSettings" }; };
template <> struct name<Windows::System::Profile::HardwareIdentification>{ static constexpr auto & value{ L"Windows.System.Profile.HardwareIdentification" }; };
template <> struct name<Windows::System::Profile::HardwareToken>{ static constexpr auto & value{ L"Windows.System.Profile.HardwareToken" }; };
template <> struct name<Windows::System::Profile::KnownRetailInfoProperties>{ static constexpr auto & value{ L"Windows.System.Profile.KnownRetailInfoProperties" }; };
template <> struct name<Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings>{ static constexpr auto & value{ L"Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings" }; };
template <> struct name<Windows::System::Profile::RetailInfo>{ static constexpr auto & value{ L"Windows.System.Profile.RetailInfo" }; };
template <> struct name<Windows::System::Profile::SharedModeSettings>{ static constexpr auto & value{ L"Windows.System.Profile.SharedModeSettings" }; };
template <> struct name<Windows::System::Profile::SystemIdentification>{ static constexpr auto & value{ L"Windows.System.Profile.SystemIdentification" }; };
template <> struct name<Windows::System::Profile::SystemIdentificationInfo>{ static constexpr auto & value{ L"Windows.System.Profile.SystemIdentificationInfo" }; };
template <> struct name<Windows::System::Profile::PlatformDataCollectionLevel>{ static constexpr auto & value{ L"Windows.System.Profile.PlatformDataCollectionLevel" }; };
template <> struct name<Windows::System::Profile::SystemIdentificationSource>{ static constexpr auto & value{ L"Windows.System.Profile.SystemIdentificationSource" }; };
template <> struct guid<Windows::System::Profile::IAnalyticsInfoStatics>{ static constexpr GUID value{ 0x1D5EE066,0x188D,0x5BA9,{ 0x43,0x87,0xAC,0xAE,0xB0,0xE7,0xE3,0x05 } }; };
template <> struct guid<Windows::System::Profile::IAnalyticsVersionInfo>{ static constexpr GUID value{ 0x926130B8,0x9955,0x4C74,{ 0xBD,0xC1,0x7C,0xD0,0xDE,0xCF,0x9B,0x03 } }; };
template <> struct guid<Windows::System::Profile::IEducationSettingsStatics>{ static constexpr GUID value{ 0xFC53F0EF,0x4D3E,0x4E13,{ 0x9B,0x23,0x50,0x5F,0x4D,0x09,0x1E,0x92 } }; };
template <> struct guid<Windows::System::Profile::IHardwareIdentificationStatics>{ static constexpr GUID value{ 0x971260E0,0xF170,0x4A42,{ 0xBD,0x55,0xA9,0x00,0xB2,0x12,0xDA,0xE2 } }; };
template <> struct guid<Windows::System::Profile::IHardwareToken>{ static constexpr GUID value{ 0x28F6D4C0,0xFB12,0x40A4,{ 0x81,0x67,0x7F,0x4E,0x03,0xD2,0x72,0x4C } }; };
template <> struct guid<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>{ static constexpr GUID value{ 0x99571178,0x500F,0x487E,{ 0x8E,0x75,0x29,0xE5,0x51,0x72,0x87,0x12 } }; };
template <> struct guid<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>{ static constexpr GUID value{ 0xB6E24C1B,0x7B1C,0x4B32,{ 0x8C,0x62,0xA6,0x65,0x97,0xCE,0x72,0x3A } }; };
template <> struct guid<Windows::System::Profile::IRetailInfoStatics>{ static constexpr GUID value{ 0x0712C6B8,0x8B92,0x4F2A,{ 0x84,0x99,0x03,0x1F,0x17,0x98,0xD6,0xEF } }; };
template <> struct guid<Windows::System::Profile::ISharedModeSettingsStatics>{ static constexpr GUID value{ 0x893DF40E,0xCAD6,0x4D50,{ 0x8C,0x49,0x6F,0xCF,0xC0,0x3E,0xDB,0x29 } }; };
template <> struct guid<Windows::System::Profile::ISharedModeSettingsStatics2>{ static constexpr GUID value{ 0x608988A4,0xCCF1,0x4EE8,{ 0xA5,0xE2,0xFD,0x6A,0x1D,0x0C,0xFA,0xC8 } }; };
template <> struct guid<Windows::System::Profile::ISystemIdentificationInfo>{ static constexpr GUID value{ 0x0C659E7D,0xC3C2,0x4D33,{ 0xA2,0xDF,0x21,0xBC,0x41,0x91,0x6E,0xB3 } }; };
template <> struct guid<Windows::System::Profile::ISystemIdentificationStatics>{ static constexpr GUID value{ 0x5581F42A,0xD3DF,0x4D93,{ 0xA3,0x7D,0xC4,0x1A,0x61,0x6C,0x6D,0x01 } }; };
template <> struct default_interface<Windows::System::Profile::AnalyticsVersionInfo>{ using type = Windows::System::Profile::IAnalyticsVersionInfo; };
template <> struct default_interface<Windows::System::Profile::HardwareToken>{ using type = Windows::System::Profile::IHardwareToken; };
template <> struct default_interface<Windows::System::Profile::SystemIdentificationInfo>{ using type = Windows::System::Profile::ISystemIdentificationInfo; };

template <typename D>
struct consume_Windows_System_Profile_IAnalyticsInfoStatics
{
    Windows::System::Profile::AnalyticsVersionInfo VersionInfo() const;
    hstring DeviceForm() const;
};
template <> struct consume<Windows::System::Profile::IAnalyticsInfoStatics> { template <typename D> using type = consume_Windows_System_Profile_IAnalyticsInfoStatics<D>; };

template <typename D>
struct consume_Windows_System_Profile_IAnalyticsVersionInfo
{
    hstring DeviceFamily() const;
    hstring DeviceFamilyVersion() const;
};
template <> struct consume<Windows::System::Profile::IAnalyticsVersionInfo> { template <typename D> using type = consume_Windows_System_Profile_IAnalyticsVersionInfo<D>; };

template <typename D>
struct consume_Windows_System_Profile_IEducationSettingsStatics
{
    bool IsEducationEnvironment() const;
};
template <> struct consume<Windows::System::Profile::IEducationSettingsStatics> { template <typename D> using type = consume_Windows_System_Profile_IEducationSettingsStatics<D>; };

template <typename D>
struct consume_Windows_System_Profile_IHardwareIdentificationStatics
{
    Windows::System::Profile::HardwareToken GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce) const;
};
template <> struct consume<Windows::System::Profile::IHardwareIdentificationStatics> { template <typename D> using type = consume_Windows_System_Profile_IHardwareIdentificationStatics<D>; };

template <typename D>
struct consume_Windows_System_Profile_IHardwareToken
{
    Windows::Storage::Streams::IBuffer Id() const;
    Windows::Storage::Streams::IBuffer Signature() const;
    Windows::Storage::Streams::IBuffer Certificate() const;
};
template <> struct consume<Windows::System::Profile::IHardwareToken> { template <typename D> using type = consume_Windows_System_Profile_IHardwareToken<D>; };

template <typename D>
struct consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics
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
template <> struct consume<Windows::System::Profile::IKnownRetailInfoPropertiesStatics> { template <typename D> using type = consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics
{
    Windows::System::Profile::PlatformDataCollectionLevel CollectionLevel() const;
    event_token CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using CollectionLevelChanged_revoker = event_revoker<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>;
    CollectionLevelChanged_revoker CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void CollectionLevelChanged(event_token const& token) const;
    bool CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level) const;
};
template <> struct consume<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> { template <typename D> using type = consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>; };

template <typename D>
struct consume_Windows_System_Profile_IRetailInfoStatics
{
    bool IsDemoModeEnabled() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
};
template <> struct consume<Windows::System::Profile::IRetailInfoStatics> { template <typename D> using type = consume_Windows_System_Profile_IRetailInfoStatics<D>; };

template <typename D>
struct consume_Windows_System_Profile_ISharedModeSettingsStatics
{
    bool IsEnabled() const;
};
template <> struct consume<Windows::System::Profile::ISharedModeSettingsStatics> { template <typename D> using type = consume_Windows_System_Profile_ISharedModeSettingsStatics<D>; };

template <typename D>
struct consume_Windows_System_Profile_ISharedModeSettingsStatics2
{
    bool ShouldAvoidLocalStorage() const;
};
template <> struct consume<Windows::System::Profile::ISharedModeSettingsStatics2> { template <typename D> using type = consume_Windows_System_Profile_ISharedModeSettingsStatics2<D>; };

template <typename D>
struct consume_Windows_System_Profile_ISystemIdentificationInfo
{
    Windows::Storage::Streams::IBuffer Id() const;
    Windows::System::Profile::SystemIdentificationSource Source() const;
};
template <> struct consume<Windows::System::Profile::ISystemIdentificationInfo> { template <typename D> using type = consume_Windows_System_Profile_ISystemIdentificationInfo<D>; };

template <typename D>
struct consume_Windows_System_Profile_ISystemIdentificationStatics
{
    Windows::System::Profile::SystemIdentificationInfo GetSystemIdForPublisher() const;
    Windows::System::Profile::SystemIdentificationInfo GetSystemIdForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::System::Profile::ISystemIdentificationStatics> { template <typename D> using type = consume_Windows_System_Profile_ISystemIdentificationStatics<D>; };

template <> struct abi<Windows::System::Profile::IAnalyticsInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VersionInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceForm(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::Profile::IAnalyticsVersionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceFamily(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceFamilyVersion(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::Profile::IEducationSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsEducationEnvironment(bool* value) = 0;
};};

template <> struct abi<Windows::System::Profile::IHardwareIdentificationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPackageSpecificToken(::IUnknown* nonce, ::IUnknown** packageSpecificHardwareToken) = 0;
};};

template <> struct abi<Windows::System::Profile::IHardwareToken>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Signature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Certificate(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RetailAccessCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ManufacturerName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ModelName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayModelName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Price(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsFeatured(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FormFactor(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ScreenSize(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Weight(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BatteryLifeDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ProcessorDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Memory(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StorageDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GraphicsDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FrontCameraDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RearCameraDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HasNfc(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HasSdSlot(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HasOpticalDrive(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsOfficeInstalled(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WindowsEdition(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CollectionLevel(abi_t<Windows::System::Profile::PlatformDataCollectionLevel>* value) = 0;
    virtual HRESULT __stdcall add_CollectionLevelChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CollectionLevelChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall CanCollectDiagnostics(abi_t<Windows::System::Profile::PlatformDataCollectionLevel> level, bool* result) = 0;
};};

template <> struct abi<Windows::System::Profile::IRetailInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsDemoModeEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Profile::ISharedModeSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::System::Profile::ISharedModeSettingsStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ShouldAvoidLocalStorage(bool* value) = 0;
};};

template <> struct abi<Windows::System::Profile::ISystemIdentificationInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Source(abi_t<Windows::System::Profile::SystemIdentificationSource>* value) = 0;
};};

template <> struct abi<Windows::System::Profile::ISystemIdentificationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSystemIdForPublisher(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetSystemIdForUser(::IUnknown* user, ::IUnknown** result) = 0;
};};

}
