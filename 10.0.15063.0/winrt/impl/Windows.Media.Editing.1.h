// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Media.Transcoding.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Media.Editing.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Editing {

struct WINRT_EBO IBackgroundAudioTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundAudioTrack>
{
    IBackgroundAudioTrack(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundAudioTrackStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundAudioTrackStatics>
{
    IBackgroundAudioTrackStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmbeddedAudioTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmbeddedAudioTrack>
{
    IEmbeddedAudioTrack(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaClip :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaClip>
{
    IMediaClip(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaClipStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaClipStatics>
{
    IMediaClipStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaClipStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaClipStatics2>
{
    IMediaClipStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaComposition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaComposition>
{
    IMediaComposition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaComposition2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaComposition2>
{
    IMediaComposition2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCompositionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCompositionStatics>
{
    IMediaCompositionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaOverlay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaOverlay>
{
    IMediaOverlay(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaOverlayFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaOverlayFactory>
{
    IMediaOverlayFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaOverlayLayer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaOverlayLayer>
{
    IMediaOverlayLayer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaOverlayLayerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaOverlayLayerFactory>
{
    IMediaOverlayLayerFactory(std::nullptr_t = nullptr) noexcept {}
};

}
