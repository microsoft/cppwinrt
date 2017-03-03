// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Gaming::Preview::GamesEnumeration {

struct GameListChangedEventHandler;
struct GameListRemovedEventHandler;
struct IGameListEntry;
struct IGameListStatics;
struct GameListEntry;

}

namespace Windows::Gaming::Preview::GamesEnumeration {

struct GameListChangedEventHandler;
struct GameListRemovedEventHandler;
struct IGameListEntry;
struct IGameListStatics;
struct GameList;
struct GameListEntry;

}

namespace Windows::Gaming::Preview::GamesEnumeration {

template <typename T> struct impl_IGameListEntry;
template <typename T> struct impl_IGameListStatics;
template <typename T> struct impl_GameListChangedEventHandler;
template <typename T> struct impl_GameListRemovedEventHandler;

}

namespace Windows::Gaming::Preview::GamesEnumeration {

enum class GameListCategory
{
    Candidate = 0,
    ConfirmedBySystem = 1,
    ConfirmedByUser = 2,
};

}

}
