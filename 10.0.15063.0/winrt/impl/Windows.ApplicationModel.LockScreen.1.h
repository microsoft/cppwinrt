// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.ApplicationModel.LockScreen.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::LockScreen {

struct WINRT_EBO ILockApplicationHost :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockApplicationHost>
{
    ILockApplicationHost(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockApplicationHostStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockApplicationHostStatics>
{
    ILockApplicationHostStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenBadge :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenBadge>
{
    ILockScreenBadge(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenInfo>
{
    ILockScreenInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenUnlockingDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenUnlockingDeferral>
{
    ILockScreenUnlockingDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenUnlockingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenUnlockingEventArgs>
{
    ILockScreenUnlockingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
