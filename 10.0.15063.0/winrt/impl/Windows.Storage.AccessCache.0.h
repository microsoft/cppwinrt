// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageItem;
struct StorageFile;
struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Storage::AccessCache {

enum class AccessCacheOptions : unsigned
{
    None = 0x0,
    DisallowUserInput = 0x1,
    FastLocationsOnly = 0x2,
    UseReadOnlyCachedCopy = 0x4,
    SuppressAccessTimeUpdate = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(AccessCacheOptions)

enum class RecentStorageItemVisibility
{
    AppOnly = 0,
    AppAndSystem = 1,
};

struct IItemRemovedEventArgs;
struct IStorageApplicationPermissionsStatics;
struct IStorageItemAccessList;
struct IStorageItemMostRecentlyUsedList;
struct IStorageItemMostRecentlyUsedList2;
struct AccessListEntryView;
struct ItemRemovedEventArgs;
struct StorageApplicationPermissions;
struct StorageItemAccessList;
struct StorageItemMostRecentlyUsedList;
struct AccessListEntry;

}

namespace winrt::impl {

template <> struct category<Windows::Storage::AccessCache::IItemRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::AccessCache::IStorageItemAccessList>{ using type = interface_category; };
template <> struct category<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>{ using type = interface_category; };
template <> struct category<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>{ using type = interface_category; };
template <> struct category<Windows::Storage::AccessCache::AccessListEntryView>{ using type = class_category; };
template <> struct category<Windows::Storage::AccessCache::ItemRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Storage::AccessCache::StorageApplicationPermissions>{ using type = class_category; };
template <> struct category<Windows::Storage::AccessCache::StorageItemAccessList>{ using type = class_category; };
template <> struct category<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>{ using type = class_category; };
template <> struct category<Windows::Storage::AccessCache::AccessCacheOptions>{ using type = enum_category; };
template <> struct category<Windows::Storage::AccessCache::RecentStorageItemVisibility>{ using type = enum_category; };
template <> struct category<Windows::Storage::AccessCache::AccessListEntry>{ using type = struct_category<hstring,hstring>; };
template <> struct name<Windows::Storage::AccessCache::IItemRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.IItemRemovedEventArgs" }; };
template <> struct name<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics" }; };
template <> struct name<Windows::Storage::AccessCache::IStorageItemAccessList>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageItemAccessList" }; };
template <> struct name<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList" }; };
template <> struct name<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2" }; };
template <> struct name<Windows::Storage::AccessCache::AccessListEntryView>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.AccessListEntryView" }; };
template <> struct name<Windows::Storage::AccessCache::ItemRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.ItemRemovedEventArgs" }; };
template <> struct name<Windows::Storage::AccessCache::StorageApplicationPermissions>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.StorageApplicationPermissions" }; };
template <> struct name<Windows::Storage::AccessCache::StorageItemAccessList>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.StorageItemAccessList" }; };
template <> struct name<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList" }; };
template <> struct name<Windows::Storage::AccessCache::AccessCacheOptions>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.AccessCacheOptions" }; };
template <> struct name<Windows::Storage::AccessCache::RecentStorageItemVisibility>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.RecentStorageItemVisibility" }; };
template <> struct name<Windows::Storage::AccessCache::AccessListEntry>{ static constexpr auto & value{ L"Windows.Storage.AccessCache.AccessListEntry" }; };
template <> struct guid<Windows::Storage::AccessCache::IItemRemovedEventArgs>{ static constexpr GUID value{ 0x59677E5C,0x55BE,0x4C66,{ 0xBA,0x66,0x5E,0xAE,0xA7,0x9D,0x26,0x31 } }; };
template <> struct guid<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>{ static constexpr GUID value{ 0x4391DFAA,0xD033,0x48F9,{ 0x80,0x60,0x3E,0xC8,0x47,0xD2,0xE3,0xF1 } }; };
template <> struct guid<Windows::Storage::AccessCache::IStorageItemAccessList>{ static constexpr GUID value{ 0x2CAFF6AD,0xDE90,0x47F5,{ 0xB2,0xC3,0xDD,0x36,0xC9,0xFD,0xD4,0x53 } }; };
template <> struct guid<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>{ static constexpr GUID value{ 0x016239D5,0x510D,0x411E,{ 0x8C,0xF1,0xC3,0xD1,0xEF,0xFA,0x4C,0x33 } }; };
template <> struct guid<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>{ static constexpr GUID value{ 0xDA481EA0,0xED8D,0x4731,{ 0xA1,0xDB,0xE4,0x4E,0xE2,0x20,0x40,0x93 } }; };
template <> struct default_interface<Windows::Storage::AccessCache::AccessListEntryView>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry>; };
template <> struct default_interface<Windows::Storage::AccessCache::ItemRemovedEventArgs>{ using type = Windows::Storage::AccessCache::IItemRemovedEventArgs; };
template <> struct default_interface<Windows::Storage::AccessCache::StorageItemAccessList>{ using type = Windows::Storage::AccessCache::IStorageItemAccessList; };
template <> struct default_interface<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>{ using type = Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList; };

template <> struct abi<Windows::Storage::AccessCache::AccessListEntry>{ struct type
{
    HSTRING Token;
    HSTRING Metadata;
};};

template <typename D>
struct consume_Windows_Storage_AccessCache_IItemRemovedEventArgs
{
    Windows::Storage::AccessCache::AccessListEntry RemovedEntry() const;
};
template <> struct consume<Windows::Storage::AccessCache::IItemRemovedEventArgs> { template <typename D> using type = consume_Windows_Storage_AccessCache_IItemRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics
{
    Windows::Storage::AccessCache::StorageItemAccessList FutureAccessList() const;
    Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList MostRecentlyUsedList() const;
};
template <> struct consume<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics> { template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics<D>; };

template <typename D>
struct consume_Windows_Storage_AccessCache_IStorageItemAccessList
{
    hstring Add(Windows::Storage::IStorageItem const& file) const;
    hstring Add(Windows::Storage::IStorageItem const& file, param::hstring const& metadata) const;
    void AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file) const;
    void AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file, param::hstring const& metadata) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> GetItemAsync(param::hstring const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> GetFileAsync(param::hstring const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetFolderAsync(param::hstring const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> GetItemAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> GetFileAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetFolderAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
    void Remove(param::hstring const& token) const;
    bool ContainsItem(param::hstring const& token) const;
    void Clear() const;
    bool CheckAccess(Windows::Storage::IStorageItem const& file) const;
    Windows::Storage::AccessCache::AccessListEntryView Entries() const;
    uint32_t MaximumItemsAllowed() const;
};
template <> struct consume<Windows::Storage::AccessCache::IStorageItemAccessList> { template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>; };

template <typename D>
struct consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList
{
    event_token ItemRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const& handler) const;
    using ItemRemoved_revoker = event_revoker<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>;
    ItemRemoved_revoker ItemRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const& handler) const;
    void ItemRemoved(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList> { template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList<D>; };

template <typename D>
struct consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2
{
    hstring Add(Windows::Storage::IStorageItem const& file, param::hstring const& metadata, Windows::Storage::AccessCache::RecentStorageItemVisibility const& visibility) const;
    void AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file, param::hstring const& metadata, Windows::Storage::AccessCache::RecentStorageItemVisibility const& visibility) const;
};
template <> struct consume<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2> { template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2<D>; };

template <> struct abi<Windows::Storage::AccessCache::IItemRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemovedEntry(abi_t<Windows::Storage::AccessCache::AccessListEntry>* value) = 0;
};};

template <> struct abi<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FutureAccessList(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MostRecentlyUsedList(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::AccessCache::IStorageItemAccessList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddOverloadDefaultMetadata(::IUnknown* file, HSTRING* token) = 0;
    virtual HRESULT __stdcall Add(::IUnknown* file, HSTRING metadata, HSTRING* token) = 0;
    virtual HRESULT __stdcall AddOrReplaceOverloadDefaultMetadata(HSTRING token, ::IUnknown* file) = 0;
    virtual HRESULT __stdcall AddOrReplace(HSTRING token, ::IUnknown* file, HSTRING metadata) = 0;
    virtual HRESULT __stdcall GetItemAsync(HSTRING token, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFileAsync(HSTRING token, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFolderAsync(HSTRING token, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetItemWithOptionsAsync(HSTRING token, abi_t<Windows::Storage::AccessCache::AccessCacheOptions> options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFileWithOptionsAsync(HSTRING token, abi_t<Windows::Storage::AccessCache::AccessCacheOptions> options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFolderWithOptionsAsync(HSTRING token, abi_t<Windows::Storage::AccessCache::AccessCacheOptions> options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall Remove(HSTRING token) = 0;
    virtual HRESULT __stdcall ContainsItem(HSTRING token, bool* value) = 0;
    virtual HRESULT __stdcall Clear() = 0;
    virtual HRESULT __stdcall CheckAccess(::IUnknown* file, bool* value) = 0;
    virtual HRESULT __stdcall get_Entries(::IUnknown** entries) = 0;
    virtual HRESULT __stdcall get_MaximumItemsAllowed(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ItemRemoved(::IUnknown* handler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_ItemRemoved(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddWithMetadataAndVisibility(::IUnknown* file, HSTRING metadata, abi_t<Windows::Storage::AccessCache::RecentStorageItemVisibility> visibility, HSTRING* token) = 0;
    virtual HRESULT __stdcall AddOrReplaceWithMetadataAndVisibility(HSTRING token, ::IUnknown* file, HSTRING metadata, abi_t<Windows::Storage::AccessCache::RecentStorageItemVisibility> visibility) = 0;
};};

}
