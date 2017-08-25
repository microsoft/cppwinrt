// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Gaming.Preview.GamesEnumeration.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration {

struct WINRT_EBO IGameListEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameListEntry>
{
    IGameListEntry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameListStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameListStatics>
{
    IGameListStatics(std::nullptr_t = nullptr) noexcept {}
};

}
