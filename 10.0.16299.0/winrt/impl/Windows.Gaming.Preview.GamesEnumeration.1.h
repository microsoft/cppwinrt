// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Gaming.Preview.GamesEnumeration.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration {

struct WINRT_EBO IGameListEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameListEntry>
{
    IGameListEntry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameListEntry2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameListEntry2>,
    impl::require<IGameListEntry2, Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
{
    IGameListEntry2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameListStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameListStatics>
{
    IGameListStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameListStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameListStatics2>
{
    IGameListStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameModeConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameModeConfiguration>
{
    IGameModeConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameModeUserConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameModeUserConfiguration>
{
    IGameModeUserConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameModeUserConfigurationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameModeUserConfigurationStatics>
{
    IGameModeUserConfigurationStatics(std::nullptr_t = nullptr) noexcept {}
};

}
