// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.AccessCache.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> Windows::Storage::AccessCache::AccessListEntry consume_Windows_Storage_AccessCache_IItemRemovedEventArgs<D>::RemovedEntry() const
{
    Windows::Storage::AccessCache::AccessListEntry value{};
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IItemRemovedEventArgs)->get_RemovedEntry(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::AccessCache::StorageItemAccessList consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics<D>::FutureAccessList() const
{
    Windows::Storage::AccessCache::StorageItemAccessList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics)->get_FutureAccessList(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics<D>::MostRecentlyUsedList() const
{
    Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics)->get_MostRecentlyUsedList(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::Add(Windows::Storage::IStorageItem const& file) const
{
    hstring token{};
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->AddOverloadDefaultMetadata(get_abi(file), put_abi(token)));
    return token;
}

template <typename D> hstring consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::Add(Windows::Storage::IStorageItem const& file, param::hstring const& metadata) const
{
    hstring token{};
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->Add(get_abi(file), get_abi(metadata), put_abi(token)));
    return token;
}

template <typename D> void consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->AddOrReplaceOverloadDefaultMetadata(get_abi(token), get_abi(file)));
}

template <typename D> void consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file, param::hstring const& metadata) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->AddOrReplace(get_abi(token), get_abi(file), get_abi(metadata)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::GetItemAsync(param::hstring const& token) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->GetItemAsync(get_abi(token), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::GetFileAsync(param::hstring const& token) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->GetFileAsync(get_abi(token), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::GetFolderAsync(param::hstring const& token) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->GetFolderAsync(get_abi(token), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::GetItemAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->GetItemWithOptionsAsync(get_abi(token), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::GetFileAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->GetFileWithOptionsAsync(get_abi(token), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::GetFolderAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->GetFolderWithOptionsAsync(get_abi(token), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::Remove(param::hstring const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->Remove(get_abi(token)));
}

template <typename D> bool consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::ContainsItem(param::hstring const& token) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->ContainsItem(get_abi(token), &value));
    return value;
}

template <typename D> void consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->Clear());
}

template <typename D> bool consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::CheckAccess(Windows::Storage::IStorageItem const& file) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->CheckAccess(get_abi(file), &value));
    return value;
}

template <typename D> Windows::Storage::AccessCache::AccessListEntryView consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::Entries() const
{
    Windows::Storage::AccessCache::AccessListEntryView entries{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->get_Entries(put_abi(entries)));
    return entries;
}

template <typename D> uint32_t consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>::MaximumItemsAllowed() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemAccessList)->get_MaximumItemsAllowed(&value));
    return value;
}

template <typename D> event_token consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList<D>::ItemRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const& handler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList)->add_ItemRemoved(get_abi(handler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList> consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList<D>::ItemRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>(this, &abi_t<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>::remove_ItemRemoved, ItemRemoved(handler));
}

template <typename D> void consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList<D>::ItemRemoved(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList)->remove_ItemRemoved(get_abi(eventCookie)));
}

template <typename D> hstring consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2<D>::Add(Windows::Storage::IStorageItem const& file, param::hstring const& metadata, Windows::Storage::AccessCache::RecentStorageItemVisibility const& visibility) const
{
    hstring token{};
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2)->AddWithMetadataAndVisibility(get_abi(file), get_abi(metadata), get_abi(visibility), put_abi(token)));
    return token;
}

template <typename D> void consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2<D>::AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file, param::hstring const& metadata, Windows::Storage::AccessCache::RecentStorageItemVisibility const& visibility) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2)->AddOrReplaceWithMetadataAndVisibility(get_abi(token), get_abi(file), get_abi(metadata), get_abi(visibility)));
}

template <typename D>
struct produce<D, Windows::Storage::AccessCache::IItemRemovedEventArgs> : produce_base<D, Windows::Storage::AccessCache::IItemRemovedEventArgs>
{
    HRESULT __stdcall get_RemovedEntry(abi_t<Windows::Storage::AccessCache::AccessListEntry>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemovedEntry());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics> : produce_base<D, Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
{
    HRESULT __stdcall get_FutureAccessList(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FutureAccessList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MostRecentlyUsedList(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MostRecentlyUsedList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::AccessCache::IStorageItemAccessList> : produce_base<D, Windows::Storage::AccessCache::IStorageItemAccessList>
{
    HRESULT __stdcall AddOverloadDefaultMetadata(::IUnknown* file, HSTRING* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Add(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *token = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Add(::IUnknown* file, HSTRING metadata, HSTRING* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Add(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&file), *reinterpret_cast<hstring const*>(&metadata)));
            return S_OK;
        }
        catch (...)
        {
            *token = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddOrReplaceOverloadDefaultMetadata(HSTRING token, ::IUnknown* file) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddOrReplace(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Storage::IStorageItem const*>(&file));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddOrReplace(HSTRING token, ::IUnknown* file, HSTRING metadata) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddOrReplace(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Storage::IStorageItem const*>(&file), *reinterpret_cast<hstring const*>(&metadata));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemAsync(HSTRING token, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemAsync(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFileAsync(HSTRING token, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFileAsync(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFolderAsync(HSTRING token, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFolderAsync(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemWithOptionsAsync(HSTRING token, abi_t<Windows::Storage::AccessCache::AccessCacheOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemAsync(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Storage::AccessCache::AccessCacheOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFileWithOptionsAsync(HSTRING token, abi_t<Windows::Storage::AccessCache::AccessCacheOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFileAsync(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Storage::AccessCache::AccessCacheOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFolderWithOptionsAsync(HSTRING token, abi_t<Windows::Storage::AccessCache::AccessCacheOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFolderAsync(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Storage::AccessCache::AccessCacheOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Remove(HSTRING token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<hstring const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ContainsItem(HSTRING token, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContainsItem(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CheckAccess(::IUnknown* file, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CheckAccess(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Entries(::IUnknown** entries) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *entries = detach_abi(this->shim().Entries());
            return S_OK;
        }
        catch (...)
        {
            *entries = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumItemsAllowed(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaximumItemsAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList> : produce_base<D, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
{
    HRESULT __stdcall add_ItemRemoved(::IUnknown* handler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().ItemRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemRemoved(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemRemoved(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2> : produce_base<D, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
{
    HRESULT __stdcall AddWithMetadataAndVisibility(::IUnknown* file, HSTRING metadata, abi_t<Windows::Storage::AccessCache::RecentStorageItemVisibility> visibility, HSTRING* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Add(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&file), *reinterpret_cast<hstring const*>(&metadata), *reinterpret_cast<Windows::Storage::AccessCache::RecentStorageItemVisibility const*>(&visibility)));
            return S_OK;
        }
        catch (...)
        {
            *token = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddOrReplaceWithMetadataAndVisibility(HSTRING token, ::IUnknown* file, HSTRING metadata, abi_t<Windows::Storage::AccessCache::RecentStorageItemVisibility> visibility) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddOrReplace(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Storage::IStorageItem const*>(&file), *reinterpret_cast<hstring const*>(&metadata), *reinterpret_cast<Windows::Storage::AccessCache::RecentStorageItemVisibility const*>(&visibility));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::AccessCache {

inline Windows::Storage::AccessCache::StorageItemAccessList StorageApplicationPermissions::FutureAccessList()
{
    return get_activation_factory<StorageApplicationPermissions, Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>().FutureAccessList();
}

inline Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList StorageApplicationPermissions::MostRecentlyUsedList()
{
    return get_activation_factory<StorageApplicationPermissions, Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>().MostRecentlyUsedList();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::AccessCache::IItemRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::IItemRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::IStorageItemAccessList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::IStorageItemAccessList> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::AccessListEntryView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::AccessListEntryView> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::ItemRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::ItemRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::StorageApplicationPermissions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::StorageApplicationPermissions> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::StorageItemAccessList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::StorageItemAccessList> {};

template<> struct hash<winrt::Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList> {};

}

WINRT_WARNING_POP
