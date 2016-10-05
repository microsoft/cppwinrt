// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Storage.AccessCache.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::AccessCache {

struct AccessListEntry
{
    hstring Token;
    hstring Metadata;
};

}

namespace Windows::Storage::AccessCache {

struct AccessListEntry
{
    hstring Token;
    hstring Metadata;
};

}

namespace impl {

template <> struct traits<Windows::Storage::AccessCache::AccessListEntry>
{
    using abi = ABI::Windows::Storage::AccessCache::AccessListEntry;
};

}

namespace ABI::Windows::Storage::AccessCache {

struct __declspec(uuid("59677e5c-55be-4c66-ba66-5eaea79d2631")) __declspec(novtable) IItemRemovedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemovedEntry(Windows::Storage::AccessCache::AccessListEntry * value) = 0;
};

struct __declspec(uuid("4391dfaa-d033-48f9-8060-3ec847d2e3f1")) __declspec(novtable) IStorageApplicationPermissionsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FutureAccessList(Windows::Storage::AccessCache::IStorageItemAccessList ** value) = 0;
    virtual HRESULT __stdcall get_MostRecentlyUsedList(Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList ** value) = 0;
};

struct __declspec(uuid("2caff6ad-de90-47f5-b2c3-dd36c9fdd453")) __declspec(novtable) IStorageItemAccessList : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AddOverloadDefaultMetadata(Windows::Storage::IStorageItem * file, hstring * token) = 0;
    virtual HRESULT __stdcall abi_Add(Windows::Storage::IStorageItem * file, hstring metadata, hstring * token) = 0;
    virtual HRESULT __stdcall abi_AddOrReplaceOverloadDefaultMetadata(hstring token, Windows::Storage::IStorageItem * file) = 0;
    virtual HRESULT __stdcall abi_AddOrReplace(hstring token, Windows::Storage::IStorageItem * file, hstring metadata) = 0;
    virtual HRESULT __stdcall abi_GetItemAsync(hstring token, Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFileAsync(hstring token, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFolderAsync(hstring token, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetItemWithOptionsAsync(hstring token, winrt::Windows::Storage::AccessCache::AccessCacheOptions options, Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFileWithOptionsAsync(hstring token, winrt::Windows::Storage::AccessCache::AccessCacheOptions options, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFolderWithOptionsAsync(hstring token, winrt::Windows::Storage::AccessCache::AccessCacheOptions options, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_Remove(hstring token) = 0;
    virtual HRESULT __stdcall abi_ContainsItem(hstring token, bool * value) = 0;
    virtual HRESULT __stdcall abi_Clear() = 0;
    virtual HRESULT __stdcall abi_CheckAccess(Windows::Storage::IStorageItem * file, bool * value) = 0;
    virtual HRESULT __stdcall get_Entries(Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry> ** entries) = 0;
    virtual HRESULT __stdcall get_MaximumItemsAllowed(uint32_t * value) = 0;
};

struct __declspec(uuid("016239d5-510d-411e-8cf1-c3d1effa4c33")) __declspec(novtable) IStorageItemMostRecentlyUsedList : Windows::IInspectable
{
    virtual HRESULT __stdcall add_ItemRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> * handler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_ItemRemoved(event_token eventCookie) = 0;
};

struct __declspec(uuid("da481ea0-ed8d-4731-a1db-e44ee2204093")) __declspec(novtable) IStorageItemMostRecentlyUsedList2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AddWithMetadataAndVisibility(Windows::Storage::IStorageItem * file, hstring metadata, winrt::Windows::Storage::AccessCache::RecentStorageItemVisibility visibility, hstring * token) = 0;
    virtual HRESULT __stdcall abi_AddOrReplaceWithMetadataAndVisibility(hstring token, Windows::Storage::IStorageItem * file, hstring metadata, winrt::Windows::Storage::AccessCache::RecentStorageItemVisibility visibility) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Storage::AccessCache::AccessListEntryView> { using default_interface = Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry>; };
template <> struct traits<Windows::Storage::AccessCache::ItemRemovedEventArgs> { using default_interface = Windows::Storage::AccessCache::IItemRemovedEventArgs; };
template <> struct traits<Windows::Storage::AccessCache::StorageItemAccessList> { using default_interface = Windows::Storage::AccessCache::IStorageItemAccessList; };
template <> struct traits<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList> { using default_interface = Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList; };

}

namespace Windows::Storage::AccessCache {

template <typename T> struct impl_IItemRemovedEventArgs;
template <typename T> struct impl_IStorageApplicationPermissionsStatics;
template <typename T> struct impl_IStorageItemAccessList;
template <typename T> struct impl_IStorageItemMostRecentlyUsedList;
template <typename T> struct impl_IStorageItemMostRecentlyUsedList2;

}

namespace impl {

template <> struct traits<Windows::Storage::AccessCache::IItemRemovedEventArgs>
{
    using abi = ABI::Windows::Storage::AccessCache::IItemRemovedEventArgs;
    template <typename D> using consume = Windows::Storage::AccessCache::impl_IItemRemovedEventArgs<D>;
};

template <> struct traits<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
{
    using abi = ABI::Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics;
    template <typename D> using consume = Windows::Storage::AccessCache::impl_IStorageApplicationPermissionsStatics<D>;
};

template <> struct traits<Windows::Storage::AccessCache::IStorageItemAccessList>
{
    using abi = ABI::Windows::Storage::AccessCache::IStorageItemAccessList;
    template <typename D> using consume = Windows::Storage::AccessCache::impl_IStorageItemAccessList<D>;
};

template <> struct traits<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
{
    using abi = ABI::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList;
    template <typename D> using consume = Windows::Storage::AccessCache::impl_IStorageItemMostRecentlyUsedList<D>;
};

template <> struct traits<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
{
    using abi = ABI::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2;
    template <typename D> using consume = Windows::Storage::AccessCache::impl_IStorageItemMostRecentlyUsedList2<D>;
};

template <> struct traits<Windows::Storage::AccessCache::AccessListEntryView>
{
    using abi = ABI::Windows::Storage::AccessCache::AccessListEntryView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.AccessCache.AccessListEntryView"; }
};

template <> struct traits<Windows::Storage::AccessCache::ItemRemovedEventArgs>
{
    using abi = ABI::Windows::Storage::AccessCache::ItemRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.AccessCache.ItemRemovedEventArgs"; }
};

template <> struct traits<Windows::Storage::AccessCache::StorageApplicationPermissions>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.AccessCache.StorageApplicationPermissions"; }
};

template <> struct traits<Windows::Storage::AccessCache::StorageItemAccessList>
{
    using abi = ABI::Windows::Storage::AccessCache::StorageItemAccessList;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.AccessCache.StorageItemAccessList"; }
};

template <> struct traits<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>
{
    using abi = ABI::Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList"; }
};

}

}
