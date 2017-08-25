// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Media.Playlists.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Playlists {

struct WINRT_EBO IPlaylist :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaylist>
{
    IPlaylist(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaylistStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaylistStatics>
{
    IPlaylistStatics(std::nullptr_t = nullptr) noexcept {}
};

}
