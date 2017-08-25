// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Media.Playlists.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile> consume_Windows_Media_Playlists_IPlaylist<D>::Files() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playlists::IPlaylist)->get_Files(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Playlists_IPlaylist<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playlists::IPlaylist)->SaveAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Media_Playlists_IPlaylist<D>::SaveAsAsync(Windows::Storage::IStorageFolder const& saveLocation, param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playlists::IPlaylist)->SaveAsAsync(get_abi(saveLocation), get_abi(desiredName), get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Media_Playlists_IPlaylist<D>::SaveAsAsync(Windows::Storage::IStorageFolder const& saveLocation, param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option, Windows::Media::Playlists::PlaylistFormat const& playlistFormat) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playlists::IPlaylist)->SaveAsWithFormatAsync(get_abi(saveLocation), get_abi(desiredName), get_abi(option), get_abi(playlistFormat), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> consume_Windows_Media_Playlists_IPlaylistStatics<D>::LoadAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playlists::IPlaylistStatics)->LoadAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Media::Playlists::IPlaylist> : produce_base<D, Windows::Media::Playlists::IPlaylist>
{
    HRESULT __stdcall get_Files(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Files());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsAsync(::IUnknown* saveLocation, HSTRING desiredName, abi_t<Windows::Storage::NameCollisionOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveAsAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&saveLocation), *reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::NameCollisionOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsWithFormatAsync(::IUnknown* saveLocation, HSTRING desiredName, abi_t<Windows::Storage::NameCollisionOption> option, abi_t<Windows::Media::Playlists::PlaylistFormat> playlistFormat, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveAsAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&saveLocation), *reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::NameCollisionOption const*>(&option), *reinterpret_cast<Windows::Media::Playlists::PlaylistFormat const*>(&playlistFormat)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playlists::IPlaylistStatics> : produce_base<D, Windows::Media::Playlists::IPlaylistStatics>
{
    HRESULT __stdcall LoadAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Playlists {

inline Playlist::Playlist() :
    Playlist(activate_instance<Playlist>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> Playlist::LoadAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<Playlist, Windows::Media::Playlists::IPlaylistStatics>().LoadAsync(file);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Playlists::IPlaylist> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Playlists::IPlaylist> {};

template<> struct hash<winrt::Windows::Media::Playlists::IPlaylistStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Playlists::IPlaylistStatics> {};

template<> struct hash<winrt::Windows::Media::Playlists::Playlist> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Playlists::Playlist> {};

}

WINRT_WARNING_POP
