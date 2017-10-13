// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct AppDisplayInfo;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration {

enum class GameListCategory : int32_t
{
    Candidate = 0,
    ConfirmedBySystem = 1,
    ConfirmedByUser = 2,
};

enum class GameListEntryLaunchableState : int32_t
{
    NotLaunchable = 0,
    ByLastRunningFullPath = 1,
    ByUserProvidedPath = 2,
    ByTile = 3,
};

struct IGameListEntry;
struct IGameListEntry2;
struct IGameListStatics;
struct IGameListStatics2;
struct IGameModeConfiguration;
struct IGameModeUserConfiguration;
struct IGameModeUserConfigurationStatics;
struct GameList;
struct GameListEntry;
struct GameModeConfiguration;
struct GameModeUserConfiguration;
struct GameListChangedEventHandler;
struct GameListRemovedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameList>{ using type = class_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ using type = class_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>{ using type = class_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>{ using type = class_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameList>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameList" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListCategory" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListEntryLaunchableState" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListChangedEventHandler" }; };
template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListRemovedEventHandler" }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ static constexpr GUID value{ 0x735924D3,0x811F,0x4494,{ 0xB6,0x9C,0xC6,0x41,0xA0,0xC6,0x15,0x43 } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>{ static constexpr GUID value{ 0xD84A8F8B,0x8749,0x4A25,{ 0x90,0xD3,0xF6,0xC5,0xA4,0x27,0x88,0x6D } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ static constexpr GUID value{ 0x2DDD0F6F,0x9C66,0x4B05,{ 0x94,0x5C,0xD6,0xED,0x78,0x49,0x1B,0x8C } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>{ static constexpr GUID value{ 0x395F2098,0xEA1A,0x45AA,{ 0x92,0x68,0xA8,0x39,0x05,0x68,0x6F,0x27 } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>{ static constexpr GUID value{ 0x78E591AF,0xB142,0x4EF0,{ 0x88,0x30,0x55,0xBC,0x2B,0xE4,0xF5,0xEA } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>{ static constexpr GUID value{ 0x72D34AF4,0x756B,0x470F,{ 0xA0,0xC2,0xBA,0x62,0xA9,0x07,0x95,0xDB } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>{ static constexpr GUID value{ 0x6E50D97C,0x66EA,0x478E,{ 0xA4,0xA1,0xF5,0x7C,0x0E,0x8D,0x00,0xE7 } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ static constexpr GUID value{ 0x25F6A421,0xD8F5,0x4D91,{ 0xB4,0x0E,0x53,0xD5,0xE8,0x6F,0xDE,0x64 } }; };
template <> struct guid<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ static constexpr GUID value{ 0x10C5648F,0x6C8F,0x4712,{ 0x9B,0x38,0x47,0x4B,0xC2,0x2E,0x76,0xD8 } }; };
template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ using type = Windows::Gaming::Preview::GamesEnumeration::IGameListEntry; };
template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>{ using type = Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration; };
template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>{ using type = Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration; };

template <typename D>
struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry
{
    Windows::ApplicationModel::AppDisplayInfo DisplayInfo() const noexcept;
    Windows::Foundation::IAsyncOperation<bool> LaunchAsync() const;
    Windows::Gaming::Preview::GamesEnumeration::GameListCategory Category() const noexcept;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const noexcept;
    Windows::Foundation::IAsyncAction SetCategoryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListCategory const& value) const;
};
template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry> { template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>; };

template <typename D>
struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2
{
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState LaunchableState() const noexcept;
    Windows::Storage::IStorageFile LauncherExecutable() const noexcept;
    hstring LaunchParameters() const noexcept;
    Windows::Foundation::IAsyncAction SetLauncherExecutableFileAsync(Windows::Storage::IStorageFile const& executableFile) const;
    Windows::Foundation::IAsyncAction SetLauncherExecutableFileAsync(Windows::Storage::IStorageFile const& executableFile, param::hstring const& launchParams) const;
    hstring TitleId() const noexcept;
    Windows::Foundation::IAsyncAction SetTitleIdAsync(param::hstring const& id) const;
    Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration GameModeConfiguration() const noexcept;
};
template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2> { template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>; };

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

template <typename D>
struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry> MergeEntriesAsync(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& left, Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& right) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> UnmergeEntryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& mergedEntry) const;
};
template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2> { template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2<D>; };

template <typename D>
struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration
{
    bool IsEnabled() const noexcept;
    void IsEnabled(bool value) const noexcept;
    Windows::Foundation::Collections::IVector<hstring> RelatedProcessNames() const noexcept;
    Windows::Foundation::IReference<int32_t> PercentGpuTimeAllocatedToGame() const noexcept;
    void PercentGpuTimeAllocatedToGame(optional<int32_t> const& value) const noexcept;
    Windows::Foundation::IReference<int32_t> PercentGpuMemoryAllocatedToGame() const noexcept;
    void PercentGpuMemoryAllocatedToGame(optional<int32_t> const& value) const noexcept;
    Windows::Foundation::IReference<int32_t> PercentGpuMemoryAllocatedToSystemCompositor() const noexcept;
    void PercentGpuMemoryAllocatedToSystemCompositor(optional<int32_t> const& value) const noexcept;
    Windows::Foundation::IReference<int32_t> MaxCpuCount() const noexcept;
    void MaxCpuCount(optional<int32_t> const& value) const noexcept;
    Windows::Foundation::IReference<int32_t> CpuExclusivityMaskLow() const noexcept;
    void CpuExclusivityMaskLow(optional<int32_t> const& value) const noexcept;
    Windows::Foundation::IReference<int32_t> CpuExclusivityMaskHigh() const noexcept;
    void CpuExclusivityMaskHigh(optional<int32_t> const& value) const noexcept;
    bool AffinitizeToExclusiveCpus() const noexcept;
    void AffinitizeToExclusiveCpus(bool value) const noexcept;
    Windows::Foundation::IAsyncAction SaveAsync() const;
};
template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration> { template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>; };

template <typename D>
struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration
{
    Windows::Foundation::Collections::IVector<hstring> GamingRelatedProcessNames() const noexcept;
    Windows::Foundation::IAsyncAction SaveAsync() const;
};
template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration> { template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration<D>; };

template <typename D>
struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics
{
    Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration GetDefault() const;
};
template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics> { template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics<D>; };

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall LaunchAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Category(Windows::Gaming::Preview::GamesEnumeration::GameListCategory* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetCategoryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListCategory value, ::IUnknown** action) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LaunchableState(Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState* value) = 0;
    virtual HRESULT __stdcall get_LauncherExecutable(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LaunchParameters(HSTRING* value) = 0;
    virtual HRESULT __stdcall SetLauncherExecutableFileAsync(::IUnknown* executableFile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetLauncherExecutableFileWithParamsAsync(::IUnknown* executableFile, HSTRING launchParams, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_TitleId(HSTRING* value) = 0;
    virtual HRESULT __stdcall SetTitleIdAsync(HSTRING id, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_GameModeConfiguration(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAllAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindAllAsyncPackageFamilyName(HSTRING packageFamilyName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_GameAdded(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_GameAdded(event_token token) = 0;
    virtual HRESULT __stdcall add_GameRemoved(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_GameRemoved(event_token token) = 0;
    virtual HRESULT __stdcall add_GameUpdated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_GameUpdated(event_token token) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall MergeEntriesAsync(::IUnknown* left, ::IUnknown* right, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UnmergeEntryAsync(::IUnknown* mergedEntry, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_RelatedProcessNames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PercentGpuTimeAllocatedToGame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PercentGpuTimeAllocatedToGame(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PercentGpuMemoryAllocatedToGame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PercentGpuMemoryAllocatedToGame(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PercentGpuMemoryAllocatedToSystemCompositor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PercentGpuMemoryAllocatedToSystemCompositor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxCpuCount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxCpuCount(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CpuExclusivityMaskLow(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CpuExclusivityMaskLow(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CpuExclusivityMaskHigh(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CpuExclusivityMaskHigh(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AffinitizeToExclusiveCpus(bool* value) = 0;
    virtual HRESULT __stdcall put_AffinitizeToExclusiveCpus(bool value) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GamingRelatedProcessNames(::IUnknown** processNames) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** userConfiguration) = 0;
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
