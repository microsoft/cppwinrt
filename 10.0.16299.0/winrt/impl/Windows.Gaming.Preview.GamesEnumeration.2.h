// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Gaming.Preview.GamesEnumeration.1.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration {

struct GameListChangedEventHandler : Windows::Foundation::IUnknown
{
    GameListChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> GameListChangedEventHandler(L lambda);
    template <typename F> GameListChangedEventHandler(F* function);
    template <typename O, typename M> GameListChangedEventHandler(O* object, M method);
    void operator()(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& game) const;
};

struct GameListRemovedEventHandler : Windows::Foundation::IUnknown
{
    GameListRemovedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> GameListRemovedEventHandler(L lambda);
    template <typename F> GameListRemovedEventHandler(F* function);
    template <typename O, typename M> GameListRemovedEventHandler(O* object, M method);
    void operator()(param::hstring const& identifier) const;
};

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration {

struct GameList
{
    GameList() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> FindAllAsync(param::hstring const& packageFamilyName);
    static event_token GameAdded(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler);
    using GameAdded_revoker = factory_event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>;
    static GameAdded_revoker GameAdded(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler);
    static void GameAdded(event_token const& token);
    static event_token GameRemoved(Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler);
    using GameRemoved_revoker = factory_event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>;
    static GameRemoved_revoker GameRemoved(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler);
    static void GameRemoved(event_token const& token);
    static event_token GameUpdated(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler);
    using GameUpdated_revoker = factory_event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>;
    static GameUpdated_revoker GameUpdated(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler);
    static void GameUpdated(event_token const& token);
    static Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry> MergeEntriesAsync(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& left, Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& right);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> UnmergeEntryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& mergedEntry);
};

struct WINRT_EBO GameListEntry :
    Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,
    impl::require<GameListEntry, Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
{
    GameListEntry(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameModeConfiguration :
    Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration
{
    GameModeConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameModeUserConfiguration :
    Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration
{
    GameModeUserConfiguration(std::nullptr_t) noexcept {}
    static Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration GetDefault();
};

}
