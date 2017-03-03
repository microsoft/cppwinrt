// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Gaming.UI.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::Foundation::IInspectable> : impl_EventHandler<Windows::Foundation::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_fe4f13bf_689c_5fe3_b7ad_55bc57f92466
#define WINRT_GENERIC_fe4f13bf_689c_5fe3_b7ad_55bc57f92466
template <> struct __declspec(uuid("fe4f13bf-689c-5fe3-b7ad-55bc57f92466")) __declspec(novtable) TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> : impl_TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> {};
#endif


}

namespace Windows::Gaming::UI {

struct IGameBarStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IGameBarStatics>
{
    IGameBarStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGameChatMessageReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IGameChatMessageReceivedEventArgs>
{
    IGameChatMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGameChatOverlay :
    Windows::Foundation::IInspectable,
    impl::consume<IGameChatOverlay>
{
    IGameChatOverlay(std::nullptr_t = nullptr) noexcept {}
};

struct IGameChatOverlayMessageSource :
    Windows::Foundation::IInspectable,
    impl::consume<IGameChatOverlayMessageSource>
{
    IGameChatOverlayMessageSource(std::nullptr_t = nullptr) noexcept {}
};

struct IGameChatOverlayStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IGameChatOverlayStatics>
{
    IGameChatOverlayStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
