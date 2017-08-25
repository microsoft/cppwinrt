// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.AccessCache.1.h"

WINRT_EXPORT namespace winrt::Windows::Storage::AccessCache {

struct AccessListEntry
{
    hstring Token;
    hstring Metadata;
};

struct WINRT_EBO AccessListEntryView :
    Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry>
{
    AccessListEntryView(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ItemRemovedEventArgs :
    Windows::Storage::AccessCache::IItemRemovedEventArgs
{
    ItemRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct StorageApplicationPermissions
{
    StorageApplicationPermissions() = delete;
    static Windows::Storage::AccessCache::StorageItemAccessList FutureAccessList();
    static Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList MostRecentlyUsedList();
};

struct WINRT_EBO StorageItemAccessList :
    Windows::Storage::AccessCache::IStorageItemAccessList
{
    StorageItemAccessList(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorageItemMostRecentlyUsedList :
    Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList,
    impl::require<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
{
    StorageItemMostRecentlyUsedList(std::nullptr_t) noexcept {}
    using impl::consume_t<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::Add;
    using Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList::Add;
    using impl::consume_t<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::AddOrReplace;
    using Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList::AddOrReplace;
};

}
