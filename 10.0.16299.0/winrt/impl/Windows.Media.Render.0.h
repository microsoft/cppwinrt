// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Media::Render {

enum class AudioRenderCategory : int32_t
{
    Other = 0,
    ForegroundOnlyMedia [[deprecated("ForegroundOnlyMedia is deprecated and might not work on all platforms. For more info, see MSDN.")]] = 1,
    BackgroundCapableMedia [[deprecated("BackgroundCapableMedia is deprecated and might not work on all platforms. For more info, see MSDN.")]] = 2,
    Communications = 3,
    Alerts = 4,
    SoundEffects = 5,
    GameEffects = 6,
    GameMedia = 7,
    GameChat = 8,
    Speech = 9,
    Movie = 10,
    Media = 11,
};

}

namespace winrt::impl {

template <> struct category<Windows::Media::Render::AudioRenderCategory>{ using type = enum_category; };
template <> struct name<Windows::Media::Render::AudioRenderCategory>{ static constexpr auto & value{ L"Windows.Media.Render.AudioRenderCategory" }; };

}
