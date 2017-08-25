// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Notifications.0.h"
#include "winrt/impl/Windows.Phone.StartScreen.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::StartScreen {

struct WINRT_EBO IDualSimTile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDualSimTile>
{
    IDualSimTile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDualSimTileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDualSimTileStatics>
{
    IDualSimTileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics3>
{
    IToastNotificationManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

}
