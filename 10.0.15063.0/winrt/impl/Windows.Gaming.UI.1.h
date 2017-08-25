// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Gaming.UI.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::UI {

struct WINRT_EBO IGameBarStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarStatics>
{
    IGameBarStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameChatMessageReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatMessageReceivedEventArgs>
{
    IGameChatMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameChatOverlay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatOverlay>
{
    IGameChatOverlay(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameChatOverlayMessageSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatOverlayMessageSource>
{
    IGameChatOverlayMessageSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameChatOverlayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatOverlayStatics>
{
    IGameChatOverlayStatics(std::nullptr_t = nullptr) noexcept {}
};

}
