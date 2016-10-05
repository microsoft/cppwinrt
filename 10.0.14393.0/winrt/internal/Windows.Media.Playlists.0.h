// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Playlists {

struct IPlaylist;
struct IPlaylistStatics;
struct Playlist;

}

namespace Windows::Media::Playlists {

struct IPlaylist;
struct IPlaylistStatics;
struct Playlist;

}

namespace Windows::Media::Playlists {

enum class PlaylistFormat
{
    WindowsMedia = 0,
    Zune = 1,
    M3u = 2,
};

}

}
