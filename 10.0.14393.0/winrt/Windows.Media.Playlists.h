// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Media.Playlists.3.h"
#include "Windows.Media.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Playlists::IPlaylist> : produce_base<D, Windows::Media::Playlists::IPlaylist>
{
    HRESULT __stdcall get_Files(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Files());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsAsync(abi_arg_in<Windows::Storage::IStorageFolder> saveLocation, abi_arg_in<hstring> desiredName, Windows::Storage::NameCollisionOption option, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SaveAsAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&saveLocation), *reinterpret_cast<const hstring *>(&desiredName), option));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsWithFormatAsync(abi_arg_in<Windows::Storage::IStorageFolder> saveLocation, abi_arg_in<hstring> desiredName, Windows::Storage::NameCollisionOption option, Windows::Media::Playlists::PlaylistFormat playlistFormat, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SaveAsAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&saveLocation), *reinterpret_cast<const hstring *>(&desiredName), option, playlistFormat));
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
    HRESULT __stdcall abi_LoadAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LoadAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
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

namespace Windows::Media::Playlists {

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile> impl_IPlaylist<D>::Files() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile> value;
    check_hresult(static_cast<const IPlaylist &>(static_cast<const D &>(*this))->get_Files(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPlaylist<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPlaylist &>(static_cast<const D &>(*this))->abi_SaveAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IPlaylist<D>::SaveAsAsync(const Windows::Storage::IStorageFolder & saveLocation, hstring_ref desiredName, Windows::Storage::NameCollisionOption option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IPlaylist &>(static_cast<const D &>(*this))->abi_SaveAsAsync(get(saveLocation), get(desiredName), option, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IPlaylist<D>::SaveAsAsync(const Windows::Storage::IStorageFolder & saveLocation, hstring_ref desiredName, Windows::Storage::NameCollisionOption option, Windows::Media::Playlists::PlaylistFormat playlistFormat) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IPlaylist &>(static_cast<const D &>(*this))->abi_SaveAsWithFormatAsync(get(saveLocation), get(desiredName), option, playlistFormat, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> impl_IPlaylistStatics<D>::LoadAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> operation;
    check_hresult(static_cast<const IPlaylistStatics &>(static_cast<const D &>(*this))->abi_LoadAsync(get(file), put(operation)));
    return operation;
}

inline Playlist::Playlist() :
    Playlist(activate_instance<Playlist>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> Playlist::LoadAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<Playlist, IPlaylistStatics>().LoadAsync(file);
}

}

}
