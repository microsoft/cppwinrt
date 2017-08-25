// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Media.Transcoding.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Media.Editing.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Editing {

struct WINRT_EBO BackgroundAudioTrack :
    Windows::Media::Editing::IBackgroundAudioTrack
{
    BackgroundAudioTrack(std::nullptr_t) noexcept {}
    static Windows::Media::Editing::BackgroundAudioTrack CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Editing::BackgroundAudioTrack> CreateFromFileAsync(Windows::Storage::IStorageFile const& file);
};

struct WINRT_EBO EmbeddedAudioTrack :
    Windows::Media::Editing::IEmbeddedAudioTrack
{
    EmbeddedAudioTrack(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaClip :
    Windows::Media::Editing::IMediaClip
{
    MediaClip(std::nullptr_t) noexcept {}
    static Windows::Media::Editing::MediaClip CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> CreateFromFileAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration);
    static Windows::Media::Editing::MediaClip CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration);
};

struct WINRT_EBO MediaComposition :
    Windows::Media::Editing::IMediaComposition,
    impl::require<MediaComposition, Windows::Media::Editing::IMediaComposition2>
{
    MediaComposition(std::nullptr_t) noexcept {}
    MediaComposition();
    static Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaComposition> LoadAsync(Windows::Storage::StorageFile const& file);
};

struct WINRT_EBO MediaOverlay :
    Windows::Media::Editing::IMediaOverlay
{
    MediaOverlay(std::nullptr_t) noexcept {}
    MediaOverlay(Windows::Media::Editing::MediaClip const& clip);
    MediaOverlay(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity);
};

struct WINRT_EBO MediaOverlayLayer :
    Windows::Media::Editing::IMediaOverlayLayer
{
    MediaOverlayLayer(std::nullptr_t) noexcept {}
    MediaOverlayLayer();
    MediaOverlayLayer(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition);
};

}
