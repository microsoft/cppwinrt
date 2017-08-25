// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.AppService.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Media.0.h"

WINRT_EXPORT namespace winrt::Windows::Media {

struct WINRT_EBO IAudioBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioBuffer>,
    impl::require<IAudioBuffer, Windows::Foundation::IClosable, Windows::Foundation::IMemoryBuffer>
{
    IAudioBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFrame>,
    impl::require<IAudioFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    IAudioFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioFrameFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFrameFactory>
{
    IAudioFrameFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutoRepeatModeChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutoRepeatModeChangeRequestedEventArgs>
{
    IAutoRepeatModeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageDisplayProperties>
{
    IImageDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] IMediaControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaControl>
{
    IMediaControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaExtension :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaExtension>
{
    IMediaExtension(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaExtensionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaExtensionManager>
{
    IMediaExtensionManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaExtensionManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaExtensionManager2>,
    impl::require<IMediaExtensionManager2, Windows::Media::IMediaExtensionManager>
{
    IMediaExtensionManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrame>,
    impl::require<IMediaFrame, Windows::Foundation::IClosable>
{
    IMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaMarker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaMarker>
{
    IMediaMarker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaMarkerTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaMarkerTypesStatics>
{
    IMediaMarkerTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaMarkers :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaMarkers>
{
    IMediaMarkers(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaProcessingTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProcessingTriggerDetails>
{
    IMediaProcessingTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaTimelineController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTimelineController>
{
    IMediaTimelineController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaTimelineController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTimelineController2>
{
    IMediaTimelineController2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaTimelineControllerFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTimelineControllerFailedEventArgs>
{
    IMediaTimelineControllerFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMusicDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMusicDisplayProperties>
{
    IMusicDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMusicDisplayProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMusicDisplayProperties2>
{
    IMusicDisplayProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMusicDisplayProperties3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMusicDisplayProperties3>
{
    IMusicDisplayProperties3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaybackPositionChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackPositionChangeRequestedEventArgs>
{
    IPlaybackPositionChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaybackRateChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackRateChangeRequestedEventArgs>
{
    IPlaybackRateChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShuffleEnabledChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShuffleEnabledChangeRequestedEventArgs>
{
    IShuffleEnabledChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMediaTransportControls :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControls>
{
    ISystemMediaTransportControls(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMediaTransportControls2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControls2>
{
    ISystemMediaTransportControls2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMediaTransportControlsButtonPressedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsButtonPressedEventArgs>
{
    ISystemMediaTransportControlsButtonPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMediaTransportControlsDisplayUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsDisplayUpdater>
{
    ISystemMediaTransportControlsDisplayUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMediaTransportControlsPropertyChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsPropertyChangedEventArgs>
{
    ISystemMediaTransportControlsPropertyChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMediaTransportControlsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsStatics>
{
    ISystemMediaTransportControlsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMediaTransportControlsTimelineProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaTransportControlsTimelineProperties>
{
    ISystemMediaTransportControlsTimelineProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoDisplayProperties>
{
    IVideoDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoDisplayProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoDisplayProperties2>
{
    IVideoDisplayProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEffectsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEffectsStatics>
{
    IVideoEffectsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoFrame>,
    impl::require<IVideoFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    IVideoFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoFrameFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoFrameFactory>
{
    IVideoFrameFactory(std::nullptr_t = nullptr) noexcept {}
};

}
