// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.AccessCache.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::AccessCache {

struct WINRT_EBO IItemRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemRemovedEventArgs>
{
    IItemRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageApplicationPermissionsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageApplicationPermissionsStatics>
{
    IStorageApplicationPermissionsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemAccessList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemAccessList>
{
    IStorageItemAccessList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemMostRecentlyUsedList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemMostRecentlyUsedList>,
    impl::require<IStorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemAccessList>
{
    IStorageItemMostRecentlyUsedList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemMostRecentlyUsedList2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemMostRecentlyUsedList2>,
    impl::require<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemAccessList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
{
    IStorageItemMostRecentlyUsedList2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemAccessList>::Add;
    using impl::consume_t<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::Add;
    using impl::consume_t<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemAccessList>::AddOrReplace;
    using impl::consume_t<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::AddOrReplace;
};

}
