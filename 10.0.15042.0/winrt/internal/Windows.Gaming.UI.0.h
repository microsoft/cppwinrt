// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Gaming::UI {

struct IGameBarStatics;
struct IGameChatMessageReceivedEventArgs;
struct IGameChatOverlay;
struct IGameChatOverlayMessageSource;
struct IGameChatOverlayStatics;
struct GameChatMessageReceivedEventArgs;
struct GameChatOverlay;
struct GameChatOverlayMessageSource;

}

namespace Windows::Gaming::UI {

struct IGameBarStatics;
struct IGameChatMessageReceivedEventArgs;
struct IGameChatOverlay;
struct IGameChatOverlayMessageSource;
struct IGameChatOverlayStatics;
struct GameBar;
struct GameChatMessageReceivedEventArgs;
struct GameChatOverlay;
struct GameChatOverlayMessageSource;

}

namespace Windows::Gaming::UI {

template <typename T> struct impl_IGameBarStatics;
template <typename T> struct impl_IGameChatMessageReceivedEventArgs;
template <typename T> struct impl_IGameChatOverlay;
template <typename T> struct impl_IGameChatOverlayMessageSource;
template <typename T> struct impl_IGameChatOverlayStatics;

}

namespace Windows::Gaming::UI {

enum class GameChatMessageOrigin
{
    Voice = 0,
    Text = 1,
};

enum class GameChatOverlayPosition
{
    BottomCenter = 0,
    BottomLeft = 1,
    BottomRight = 2,
    MiddleRight = 3,
    MiddleLeft = 4,
    TopCenter = 5,
    TopLeft = 6,
    TopRight = 7,
};

}

}
