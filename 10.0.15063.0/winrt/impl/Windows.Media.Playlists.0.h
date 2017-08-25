// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

enum class NameCollisionOption;
struct IStorageFile;
struct IStorageFolder;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Media::Playlists {

enum class PlaylistFormat
{
    WindowsMedia = 0,
    Zune = 1,
    M3u = 2,
};

struct IPlaylist;
struct IPlaylistStatics;
struct Playlist;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Playlists::IPlaylist>{ using type = interface_category; };
template <> struct category<Windows::Media::Playlists::IPlaylistStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Playlists::Playlist>{ using type = class_category; };
template <> struct category<Windows::Media::Playlists::PlaylistFormat>{ using type = enum_category; };
template <> struct name<Windows::Media::Playlists::IPlaylist>{ static constexpr auto & value{ L"Windows.Media.Playlists.IPlaylist" }; };
template <> struct name<Windows::Media::Playlists::IPlaylistStatics>{ static constexpr auto & value{ L"Windows.Media.Playlists.IPlaylistStatics" }; };
template <> struct name<Windows::Media::Playlists::Playlist>{ static constexpr auto & value{ L"Windows.Media.Playlists.Playlist" }; };
template <> struct name<Windows::Media::Playlists::PlaylistFormat>{ static constexpr auto & value{ L"Windows.Media.Playlists.PlaylistFormat" }; };
template <> struct guid<Windows::Media::Playlists::IPlaylist>{ static constexpr GUID value{ 0x803736F5,0xCF44,0x4D97,{ 0x83,0xB3,0x7A,0x08,0x9E,0x9A,0xB6,0x63 } }; };
template <> struct guid<Windows::Media::Playlists::IPlaylistStatics>{ static constexpr GUID value{ 0xC5C331CD,0x81F9,0x4FF3,{ 0x95,0xB9,0x70,0xB6,0xFF,0x04,0x6B,0x68 } }; };
template <> struct default_interface<Windows::Media::Playlists::Playlist>{ using type = Windows::Media::Playlists::IPlaylist; };

template <typename D>
struct consume_Windows_Media_Playlists_IPlaylist
{
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile> Files() const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> SaveAsAsync(Windows::Storage::IStorageFolder const& saveLocation, param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> SaveAsAsync(Windows::Storage::IStorageFolder const& saveLocation, param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option, Windows::Media::Playlists::PlaylistFormat const& playlistFormat) const;
};
template <> struct consume<Windows::Media::Playlists::IPlaylist> { template <typename D> using type = consume_Windows_Media_Playlists_IPlaylist<D>; };

template <typename D>
struct consume_Windows_Media_Playlists_IPlaylistStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> LoadAsync(Windows::Storage::IStorageFile const& file) const;
};
template <> struct consume<Windows::Media::Playlists::IPlaylistStatics> { template <typename D> using type = consume_Windows_Media_Playlists_IPlaylistStatics<D>; };

template <> struct abi<Windows::Media::Playlists::IPlaylist>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Files(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SaveAsAsync(::IUnknown* saveLocation, HSTRING desiredName, abi_t<Windows::Storage::NameCollisionOption> option, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SaveAsWithFormatAsync(::IUnknown* saveLocation, HSTRING desiredName, abi_t<Windows::Storage::NameCollisionOption> option, abi_t<Windows::Media::Playlists::PlaylistFormat> playlistFormat, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Playlists::IPlaylistStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadAsync(::IUnknown* file, ::IUnknown** operation) = 0;
};};

}
