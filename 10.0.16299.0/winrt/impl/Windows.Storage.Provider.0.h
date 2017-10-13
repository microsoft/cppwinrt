// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct IStorageFolder;
struct IStorageItem;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

enum class CachedFileOptions : uint32_t
{
    None = 0x0,
    RequireUpdateOnAccess = 0x1,
    UseCachedFileWhenOffline = 0x2,
    DenyAccessWhenOffline = 0x4,
};

enum class CachedFileTarget : int32_t
{
    Local = 0,
    Remote = 1,
};

enum class FileUpdateStatus : int32_t
{
    Incomplete = 0,
    Complete = 1,
    UserInputNeeded = 2,
    CurrentlyUnavailable = 3,
    Failed = 4,
    CompleteAndRenamed = 5,
};

enum class ReadActivationMode : int32_t
{
    NotNeeded = 0,
    BeforeAccess = 1,
};

enum class StorageProviderHardlinkPolicy : uint32_t
{
    None = 0x0,
    Allowed = 0x1,
};

enum class StorageProviderHydrationPolicy : int32_t
{
    Partial = 0,
    Progressive = 1,
    Full = 2,
    AlwaysFull = 3,
};

enum class StorageProviderHydrationPolicyModifier : uint32_t
{
    None = 0x0,
    ValidationRequired = 0x1,
    StreamingAllowed = 0x2,
};

enum class StorageProviderInSyncPolicy : uint32_t
{
    Default = 0x0,
    FileCreationTime = 0x1,
    FileReadOnlyAttribute = 0x2,
    FileHiddenAttribute = 0x4,
    FileSystemAttribute = 0x8,
    DirectoryCreationTime = 0x10,
    DirectoryReadOnlyAttribute = 0x20,
    DirectoryHiddenAttribute = 0x40,
    DirectorySystemAttribute = 0x80,
    FileLastWriteTime = 0x100,
    DirectoryLastWriteTime = 0x200,
    PreserveInsyncForSyncEngine = 0x80000000,
};

enum class StorageProviderPopulationPolicy : int32_t
{
    Full = 1,
    AlwaysFull = 2,
};

enum class StorageProviderProtectionMode : int32_t
{
    Unknown = 0,
    Personal = 1,
};

enum class UIStatus : int32_t
{
    Unavailable = 0,
    Hidden = 1,
    Visible = 2,
    Complete = 3,
};

enum class WriteActivationMode : int32_t
{
    ReadOnly = 0,
    NotNeeded = 1,
    AfterWrite = 2,
};

struct ICachedFileUpdaterStatics;
struct ICachedFileUpdaterUI;
struct ICachedFileUpdaterUI2;
struct IFileUpdateRequest;
struct IFileUpdateRequest2;
struct IFileUpdateRequestDeferral;
struct IFileUpdateRequestedEventArgs;
struct IStorageProviderItemPropertiesStatics;
struct IStorageProviderItemProperty;
struct IStorageProviderItemPropertyDefinition;
struct IStorageProviderItemPropertySource;
struct IStorageProviderPropertyCapabilities;
struct IStorageProviderSyncRootInfo;
struct IStorageProviderSyncRootManagerStatics;
struct CachedFileUpdater;
struct CachedFileUpdaterUI;
struct FileUpdateRequest;
struct FileUpdateRequestDeferral;
struct FileUpdateRequestedEventArgs;
struct StorageProviderItemProperties;
struct StorageProviderItemProperty;
struct StorageProviderItemPropertyDefinition;
struct StorageProviderSyncRootInfo;
struct StorageProviderSyncRootManager;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::Storage::Provider::CachedFileOptions> : std::true_type {};
template<> struct is_enum_flag<Windows::Storage::Provider::StorageProviderHardlinkPolicy> : std::true_type {};
template<> struct is_enum_flag<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier> : std::true_type {};
template<> struct is_enum_flag<Windows::Storage::Provider::StorageProviderInSyncPolicy> : std::true_type {};
template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterUI>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IFileUpdateRequest>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IFileUpdateRequest2>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IStorageProviderItemProperty>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertySource>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootInfo>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::CachedFileUpdater>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::CachedFileUpdaterUI>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::FileUpdateRequest>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::FileUpdateRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderItemProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderItemProperty>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderSyncRootInfo>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderSyncRootManager>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::CachedFileOptions>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::CachedFileTarget>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::FileUpdateStatus>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::ReadActivationMode>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderHardlinkPolicy>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderHydrationPolicy>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderInSyncPolicy>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderPopulationPolicy>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::StorageProviderProtectionMode>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::UIStatus>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::WriteActivationMode>{ using type = enum_category; };
template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterStatics" }; };
template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterUI>{ static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterUI" }; };
template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterUI2" }; };
template <> struct name<Windows::Storage::Provider::IFileUpdateRequest>{ static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequest" }; };
template <> struct name<Windows::Storage::Provider::IFileUpdateRequest2>{ static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequest2" }; };
template <> struct name<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequestDeferral" }; };
template <> struct name<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequestedEventArgs" }; };
template <> struct name<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>{ static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderItemPropertiesStatics" }; };
template <> struct name<Windows::Storage::Provider::IStorageProviderItemProperty>{ static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderItemProperty" }; };
template <> struct name<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>{ static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderItemPropertyDefinition" }; };
template <> struct name<Windows::Storage::Provider::IStorageProviderItemPropertySource>{ static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderItemPropertySource" }; };
template <> struct name<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>{ static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderPropertyCapabilities" }; };
template <> struct name<Windows::Storage::Provider::IStorageProviderSyncRootInfo>{ static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderSyncRootInfo" }; };
template <> struct name<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>{ static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics" }; };
template <> struct name<Windows::Storage::Provider::CachedFileUpdater>{ static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileUpdater" }; };
template <> struct name<Windows::Storage::Provider::CachedFileUpdaterUI>{ static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileUpdaterUI" }; };
template <> struct name<Windows::Storage::Provider::FileUpdateRequest>{ static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequest" }; };
template <> struct name<Windows::Storage::Provider::FileUpdateRequestDeferral>{ static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequestDeferral" }; };
template <> struct name<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequestedEventArgs" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderItemProperties>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderItemProperties" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderItemProperty>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderItemProperty" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderItemPropertyDefinition" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderSyncRootInfo>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderSyncRootInfo" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderSyncRootManager>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderSyncRootManager" }; };
template <> struct name<Windows::Storage::Provider::CachedFileOptions>{ static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileOptions" }; };
template <> struct name<Windows::Storage::Provider::CachedFileTarget>{ static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileTarget" }; };
template <> struct name<Windows::Storage::Provider::FileUpdateStatus>{ static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateStatus" }; };
template <> struct name<Windows::Storage::Provider::ReadActivationMode>{ static constexpr auto & value{ L"Windows.Storage.Provider.ReadActivationMode" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderHardlinkPolicy>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderHardlinkPolicy" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderHydrationPolicy>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderHydrationPolicy" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderHydrationPolicyModifier" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderInSyncPolicy>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderInSyncPolicy" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderPopulationPolicy>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderPopulationPolicy" }; };
template <> struct name<Windows::Storage::Provider::StorageProviderProtectionMode>{ static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderProtectionMode" }; };
template <> struct name<Windows::Storage::Provider::UIStatus>{ static constexpr auto & value{ L"Windows.Storage.Provider.UIStatus" }; };
template <> struct name<Windows::Storage::Provider::WriteActivationMode>{ static constexpr auto & value{ L"Windows.Storage.Provider.WriteActivationMode" }; };
template <> struct guid<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ static constexpr GUID value{ 0x9FC90920,0x7BCF,0x4888,{ 0xA8,0x1E,0x10,0x2D,0x70,0x34,0xD7,0xCE } }; };
template <> struct guid<Windows::Storage::Provider::ICachedFileUpdaterUI>{ static constexpr GUID value{ 0x9E6F41E6,0xBAF2,0x4A97,{ 0xB6,0x00,0x93,0x33,0xF5,0xDF,0x80,0xFD } }; };
template <> struct guid<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ static constexpr GUID value{ 0x8856A21C,0x8699,0x4340,{ 0x9F,0x49,0xF7,0xCA,0xD7,0xFE,0x89,0x91 } }; };
template <> struct guid<Windows::Storage::Provider::IFileUpdateRequest>{ static constexpr GUID value{ 0x40C82536,0xC1FE,0x4D93,{ 0xA7,0x92,0x1E,0x73,0x6B,0xC7,0x08,0x37 } }; };
template <> struct guid<Windows::Storage::Provider::IFileUpdateRequest2>{ static constexpr GUID value{ 0x82484648,0xBDBE,0x447B,{ 0xA2,0xEE,0x7A,0xFE,0x6A,0x03,0x2A,0x94 } }; };
template <> struct guid<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ static constexpr GUID value{ 0xFFCEDB2B,0x8ADE,0x44A5,{ 0xBB,0x00,0x16,0x4C,0x4E,0x72,0xF1,0x3A } }; };
template <> struct guid<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ static constexpr GUID value{ 0x7B0A9342,0x3905,0x438D,{ 0xAA,0xEF,0x78,0xAE,0x26,0x5F,0x8D,0xD2 } }; };
template <> struct guid<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>{ static constexpr GUID value{ 0x2D2C1C97,0x2704,0x4729,{ 0x8F,0xA9,0x7E,0x6B,0x8E,0x15,0x8C,0x2F } }; };
template <> struct guid<Windows::Storage::Provider::IStorageProviderItemProperty>{ static constexpr GUID value{ 0x476CB558,0x730B,0x4188,{ 0xB7,0xB5,0x63,0xB7,0x16,0xED,0x47,0x6D } }; };
template <> struct guid<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>{ static constexpr GUID value{ 0xC5B383BB,0xFF1F,0x4298,{ 0x83,0x1E,0xFF,0x1C,0x08,0x08,0x96,0x90 } }; };
template <> struct guid<Windows::Storage::Provider::IStorageProviderItemPropertySource>{ static constexpr GUID value{ 0x8F6F9C3E,0xF632,0x4A9B,{ 0x8D,0x99,0xD2,0xD7,0xA1,0x1D,0xF5,0x6A } }; };
template <> struct guid<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>{ static constexpr GUID value{ 0x658D2F0E,0x63B7,0x4567,{ 0xAC,0xF9,0x51,0xAB,0xE3,0x01,0xDD,0xA5 } }; };
template <> struct guid<Windows::Storage::Provider::IStorageProviderSyncRootInfo>{ static constexpr GUID value{ 0x7C1305C4,0x99F9,0x41AC,{ 0x89,0x04,0xAB,0x05,0x5D,0x65,0x49,0x26 } }; };
template <> struct guid<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>{ static constexpr GUID value{ 0x3E99FBBF,0x8FE3,0x4B40,{ 0xAB,0xC7,0xF6,0xFC,0x3D,0x74,0xC9,0x8E } }; };
template <> struct default_interface<Windows::Storage::Provider::CachedFileUpdaterUI>{ using type = Windows::Storage::Provider::ICachedFileUpdaterUI; };
template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequest>{ using type = Windows::Storage::Provider::IFileUpdateRequest; };
template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequestDeferral>{ using type = Windows::Storage::Provider::IFileUpdateRequestDeferral; };
template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ using type = Windows::Storage::Provider::IFileUpdateRequestedEventArgs; };
template <> struct default_interface<Windows::Storage::Provider::StorageProviderItemProperty>{ using type = Windows::Storage::Provider::IStorageProviderItemProperty; };
template <> struct default_interface<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>{ using type = Windows::Storage::Provider::IStorageProviderItemPropertyDefinition; };
template <> struct default_interface<Windows::Storage::Provider::StorageProviderSyncRootInfo>{ using type = Windows::Storage::Provider::IStorageProviderSyncRootInfo; };

template <typename D>
struct consume_Windows_Storage_Provider_ICachedFileUpdaterStatics
{
    void SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options) const;
};
template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterStatics> { template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterStatics<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_ICachedFileUpdaterUI
{
    hstring Title() const noexcept;
    void Title(param::hstring const& value) const noexcept;
    Windows::Storage::Provider::CachedFileTarget UpdateTarget() const noexcept;
    event_token FileUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const;
    using FileUpdateRequested_revoker = event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI>;
    FileUpdateRequested_revoker FileUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const;
    void FileUpdateRequested(event_token const& token) const;
    event_token UIRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const;
    using UIRequested_revoker = event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI>;
    UIRequested_revoker UIRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const;
    void UIRequested(event_token const& token) const;
    Windows::Storage::Provider::UIStatus UIStatus() const noexcept;
};
template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterUI> { template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_ICachedFileUpdaterUI2
{
    Windows::Storage::Provider::FileUpdateRequest UpdateRequest() const noexcept;
    Windows::Storage::Provider::FileUpdateRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterUI2> { template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IFileUpdateRequest
{
    hstring ContentId() const noexcept;
    Windows::Storage::StorageFile File() const noexcept;
    Windows::Storage::Provider::FileUpdateStatus Status() const noexcept;
    void Status(Windows::Storage::Provider::FileUpdateStatus const& value) const noexcept;
    Windows::Storage::Provider::FileUpdateRequestDeferral GetDeferral() const;
    void UpdateLocalFile(Windows::Storage::IStorageFile const& value) const;
};
template <> struct consume<Windows::Storage::Provider::IFileUpdateRequest> { template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequest<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IFileUpdateRequest2
{
    hstring UserInputNeededMessage() const noexcept;
    void UserInputNeededMessage(param::hstring const& value) const noexcept;
};
template <> struct consume<Windows::Storage::Provider::IFileUpdateRequest2> { template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequest2<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IFileUpdateRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Storage::Provider::IFileUpdateRequestDeferral> { template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequestDeferral<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs
{
    Windows::Storage::Provider::FileUpdateRequest Request() const noexcept;
};
template <> struct consume<Windows::Storage::Provider::IFileUpdateRequestedEventArgs> { template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics
{
    Windows::Foundation::IAsyncAction SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties) const;
};
template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics> { template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IStorageProviderItemProperty
{
    void Id(int32_t value) const noexcept;
    int32_t Id() const noexcept;
    void Value(param::hstring const& value) const noexcept;
    hstring Value() const noexcept;
    void IconResource(param::hstring const& value) const noexcept;
    hstring IconResource() const noexcept;
};
template <> struct consume<Windows::Storage::Provider::IStorageProviderItemProperty> { template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition
{
    int32_t Id() const noexcept;
    void Id(int32_t value) const noexcept;
    hstring DisplayNameResource() const noexcept;
    void DisplayNameResource(param::hstring const& value) const noexcept;
};
template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition> { template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IStorageProviderItemPropertySource
{
    Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty> GetItemProperties(param::hstring const& itemPath) const;
};
template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertySource> { template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertySource<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IStorageProviderPropertyCapabilities
{
    bool IsPropertySupported(param::hstring const& propertyCanonicalName) const;
};
template <> struct consume<Windows::Storage::Provider::IStorageProviderPropertyCapabilities> { template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderPropertyCapabilities<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo
{
    hstring Id() const noexcept;
    void Id(param::hstring const& value) const noexcept;
    Windows::Storage::Streams::IBuffer Context() const noexcept;
    void Context(Windows::Storage::Streams::IBuffer const& value) const noexcept;
    Windows::Storage::IStorageFolder Path() const noexcept;
    void Path(Windows::Storage::IStorageFolder const& folder) const noexcept;
    hstring DisplayNameResource() const noexcept;
    void DisplayNameResource(param::hstring const& value) const noexcept;
    hstring IconResource() const noexcept;
    void IconResource(param::hstring const& value) const noexcept;
    Windows::Storage::Provider::StorageProviderHydrationPolicy HydrationPolicy() const noexcept;
    void HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy const& value) const noexcept;
    Windows::Storage::Provider::StorageProviderHydrationPolicyModifier HydrationPolicyModifier() const noexcept;
    void HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier const& value) const noexcept;
    Windows::Storage::Provider::StorageProviderPopulationPolicy PopulationPolicy() const noexcept;
    void PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy const& value) const noexcept;
    Windows::Storage::Provider::StorageProviderInSyncPolicy InSyncPolicy() const noexcept;
    void InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy const& value) const noexcept;
    Windows::Storage::Provider::StorageProviderHardlinkPolicy HardlinkPolicy() const noexcept;
    void HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy const& value) const noexcept;
    bool ShowSiblingsAsGroup() const noexcept;
    void ShowSiblingsAsGroup(bool value) const noexcept;
    hstring Version() const noexcept;
    void Version(param::hstring const& value) const noexcept;
    Windows::Storage::Provider::StorageProviderProtectionMode ProtectionMode() const noexcept;
    void ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode const& value) const noexcept;
    bool AllowPinning() const noexcept;
    void AllowPinning(bool value) const noexcept;
    Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderItemPropertyDefinition> StorageProviderItemPropertyDefinitions() const noexcept;
    Windows::Foundation::Uri RecycleBinUri() const noexcept;
    void RecycleBinUri(Windows::Foundation::Uri const& value) const noexcept;
};
template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootInfo> { template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics
{
    void Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation) const;
    void Unregister(param::hstring const& id) const;
    Windows::Storage::Provider::StorageProviderSyncRootInfo GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder) const;
    Windows::Storage::Provider::StorageProviderSyncRootInfo GetSyncRootInformationForId(param::hstring const& id) const;
    Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo> GetCurrentSyncRoots() const;
};
template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics> { template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>; };

template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetUpdateInformation(::IUnknown* file, HSTRING contentId, Windows::Storage::Provider::ReadActivationMode readMode, Windows::Storage::Provider::WriteActivationMode writeMode, Windows::Storage::Provider::CachedFileOptions options) = 0;
};};

template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterUI>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_UpdateTarget(Windows::Storage::Provider::CachedFileTarget* value) = 0;
    virtual HRESULT __stdcall add_FileUpdateRequested(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_FileUpdateRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_UIRequested(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_UIRequested(event_token token) = 0;
    virtual HRESULT __stdcall get_UIStatus(Windows::Storage::Provider::UIStatus* value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UpdateRequest(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IFileUpdateRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContentId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(Windows::Storage::Provider::FileUpdateStatus* value) = 0;
    virtual HRESULT __stdcall put_Status(Windows::Storage::Provider::FileUpdateStatus value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
    virtual HRESULT __stdcall UpdateLocalFile(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IFileUpdateRequest2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UserInputNeededMessage(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UserInputNeededMessage(HSTRING value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetAsync(::IUnknown* item, ::IUnknown* itemProperties, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IStorageProviderItemProperty>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Id(int32_t value) = 0;
    virtual HRESULT __stdcall get_Id(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Value(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_IconResource(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IconResource(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Id(int32_t value) = 0;
    virtual HRESULT __stdcall get_DisplayNameResource(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayNameResource(HSTRING value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertySource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetItemProperties(HSTRING itemPath, ::IUnknown** itemProperties) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsPropertySupported(HSTRING propertyCanonicalName, bool* isSupported) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Context(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Context(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Path(::IUnknown** folder) = 0;
    virtual HRESULT __stdcall put_Path(::IUnknown* folder) = 0;
    virtual HRESULT __stdcall get_DisplayNameResource(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayNameResource(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IconResource(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_IconResource(HSTRING value) = 0;
    virtual HRESULT __stdcall get_HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy* value) = 0;
    virtual HRESULT __stdcall put_HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy value) = 0;
    virtual HRESULT __stdcall get_HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier* value) = 0;
    virtual HRESULT __stdcall put_HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier value) = 0;
    virtual HRESULT __stdcall get_PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy* value) = 0;
    virtual HRESULT __stdcall put_PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy value) = 0;
    virtual HRESULT __stdcall get_InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy* value) = 0;
    virtual HRESULT __stdcall put_InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy value) = 0;
    virtual HRESULT __stdcall get_HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy* value) = 0;
    virtual HRESULT __stdcall put_HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy value) = 0;
    virtual HRESULT __stdcall get_ShowSiblingsAsGroup(bool* value) = 0;
    virtual HRESULT __stdcall put_ShowSiblingsAsGroup(bool value) = 0;
    virtual HRESULT __stdcall get_Version(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Version(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode* value) = 0;
    virtual HRESULT __stdcall put_ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode value) = 0;
    virtual HRESULT __stdcall get_AllowPinning(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowPinning(bool value) = 0;
    virtual HRESULT __stdcall get_StorageProviderItemPropertyDefinitions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RecycleBinUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RecycleBinUri(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Register(::IUnknown* syncRootInformation) = 0;
    virtual HRESULT __stdcall Unregister(HSTRING id) = 0;
    virtual HRESULT __stdcall GetSyncRootInformationForFolder(::IUnknown* folder, ::IUnknown** syncRootInformation) = 0;
    virtual HRESULT __stdcall GetSyncRootInformationForId(HSTRING id, ::IUnknown** syncRootInformation) = 0;
    virtual HRESULT __stdcall GetCurrentSyncRoots(::IUnknown** value) = 0;
};};

}
