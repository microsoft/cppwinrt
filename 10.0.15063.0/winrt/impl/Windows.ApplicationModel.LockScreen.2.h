// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.LockScreen.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::LockScreen {

struct WINRT_EBO LockApplicationHost :
    Windows::ApplicationModel::LockScreen::ILockApplicationHost
{
    LockApplicationHost(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::LockScreen::LockApplicationHost GetForCurrentView();
};

struct WINRT_EBO LockScreenBadge :
    Windows::ApplicationModel::LockScreen::ILockScreenBadge
{
    LockScreenBadge(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LockScreenInfo :
    Windows::ApplicationModel::LockScreen::ILockScreenInfo
{
    LockScreenInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LockScreenUnlockingDeferral :
    Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral
{
    LockScreenUnlockingDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LockScreenUnlockingEventArgs :
    Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs
{
    LockScreenUnlockingEventArgs(std::nullptr_t) noexcept {}
};

}
