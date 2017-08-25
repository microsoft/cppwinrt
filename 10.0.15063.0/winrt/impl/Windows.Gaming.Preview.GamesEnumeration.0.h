// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct AppDisplayInfo;

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration {

enum class GameListCategory
{
    Candidate = 0,
    ConfirmedBySystem = 1,
    ConfirmedByUser = 2,
};

struct IGameListEntry;
struct IGameListStatics;
struct GameList;
struct GameListEntry;
struct GameListChangedEventHandler;
struct GameListRemovedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameList>{ using type = class_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ using type = class_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameList>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameList" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListCategory" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListChangedEventHandler" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListRemovedEventHandler" }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ static constexpr GUID value{ 0x735924D3,0x811F,0x4494,{ 0xB6,0x9C,0xC6,0x41,0xA0,0xC6,0x15,0x43 } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ static constexpr GUID value{ 0x2DDD0F6F,0x9C66,0x4B05,{ 0x94,0x5C,0xD6,0xED,0x78,0x49,0x1B,0x8C } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ static constexpr GUID value{ 0x25F6A421,0xD8F5,0x4D91,{ 0xB4,0x0E,0x53,0xD5,0xE8,0x6F,0xDE,0x64 } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ static constexpr GUID value{ 0x10C5648F,0x6C8F,0x4712,{ 0x9B,0x38,0x47,0x4B,0xC2,0x2E,0x76,0xD8 } }; };
template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ using type = Windows::Gaming::Preview::GamesEnumeration::IGameListEntry; };

template <typename D>
struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry
{
    Windows::ApplicationModel::AppDisplayInfo DisplayInfo() const;
    Windows::Foundation::IAsyncOperation<bool> LaunchAsync() const;
    Windows::Gaming::Preview::GamesEnumeration::GameListCategory Category() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
    Windows::Foundation::IAsyncAction SetCategoryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListCategory const& value) const;
};
template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry> { template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>; };

template <typename D>
struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> FindAllAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> FindAllAsync(param::hstring const& packageFamilyName) const;
    event_token GameAdded(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
    using GameAdded_revoker = event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>;
    GameAdded_revoker GameAdded(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
    void GameAdded(event_token const& token) const;
    event_token GameRemoved(Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const;
    using GameRemoved_revoker = event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>;
    GameRemoved_revoker GameRemoved(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const;
    void GameRemoved(event_token const& token) const;
    event_token GameUpdated(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
    using GameUpdated_revoker = event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>;
    GameUpdated_revoker GameUpdated(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
    void GameUpdated(event_token const& token) const;
};
template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> { template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>; };

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall LaunchAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Category(abi_t<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetCategoryAsync(abi_t<Windows::Gaming::Preview::GamesEnumeration::GameListCategory> value, ::IUnknown** action) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAllAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindAllAsyncPackageFamilyName(HSTRING packageFamilyName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_GameAdded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GameAdded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_GameRemoved(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GameRemoved(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_GameUpdated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GameUpdated(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* game) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(HSTRING identifier) = 0;
};};

}
