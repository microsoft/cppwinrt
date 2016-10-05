// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media {

struct WINRT_EBO AudioBuffer :
    Windows::Media::IAudioBuffer
{
    AudioBuffer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioFrame :
    Windows::Media::IAudioFrame
{
    AudioFrame(std::nullptr_t) noexcept {}
    AudioFrame(uint32_t capacity);
};

struct WINRT_EBO AutoRepeatModeChangeRequestedEventArgs :
    Windows::Media::IAutoRepeatModeChangeRequestedEventArgs
{
    AutoRepeatModeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ImageDisplayProperties :
    Windows::Media::IImageDisplayProperties
{
    ImageDisplayProperties(std::nullptr_t) noexcept {}
};

struct MediaControl
{
    MediaControl() = delete;
    static event_token SoundLevelChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using SoundLevelChanged_revoker = factory_event_revoker<IMediaControl>;
    static SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void SoundLevelChanged(event_token cookie);
    static event_token PlayPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using PlayPressed_revoker = factory_event_revoker<IMediaControl>;
    static PlayPressed_revoker PlayPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void PlayPressed(event_token cookie);
    static event_token PausePressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using PausePressed_revoker = factory_event_revoker<IMediaControl>;
    static PausePressed_revoker PausePressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void PausePressed(event_token cookie);
    static event_token StopPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using StopPressed_revoker = factory_event_revoker<IMediaControl>;
    static StopPressed_revoker StopPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void StopPressed(event_token cookie);
    static event_token PlayPauseTogglePressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using PlayPauseTogglePressed_revoker = factory_event_revoker<IMediaControl>;
    static PlayPauseTogglePressed_revoker PlayPauseTogglePressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void PlayPauseTogglePressed(event_token cookie);
    static event_token RecordPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using RecordPressed_revoker = factory_event_revoker<IMediaControl>;
    static RecordPressed_revoker RecordPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void RecordPressed(event_token cookie);
    static event_token NextTrackPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using NextTrackPressed_revoker = factory_event_revoker<IMediaControl>;
    static NextTrackPressed_revoker NextTrackPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void NextTrackPressed(event_token cookie);
    static event_token PreviousTrackPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using PreviousTrackPressed_revoker = factory_event_revoker<IMediaControl>;
    static PreviousTrackPressed_revoker PreviousTrackPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void PreviousTrackPressed(event_token cookie);
    static event_token FastForwardPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using FastForwardPressed_revoker = factory_event_revoker<IMediaControl>;
    static FastForwardPressed_revoker FastForwardPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void FastForwardPressed(event_token cookie);
    static event_token RewindPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using RewindPressed_revoker = factory_event_revoker<IMediaControl>;
    static RewindPressed_revoker RewindPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void RewindPressed(event_token cookie);
    static event_token ChannelUpPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using ChannelUpPressed_revoker = factory_event_revoker<IMediaControl>;
    static ChannelUpPressed_revoker ChannelUpPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void ChannelUpPressed(event_token cookie);
    static event_token ChannelDownPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using ChannelDownPressed_revoker = factory_event_revoker<IMediaControl>;
    static ChannelDownPressed_revoker ChannelDownPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void ChannelDownPressed(event_token cookie);
    static Windows::Media::SoundLevel SoundLevel();
    static void TrackName(hstring_ref value);
    static hstring TrackName();
    static void ArtistName(hstring_ref value);
    static hstring ArtistName();
    static void IsPlaying(bool value);
    static bool IsPlaying();
    static void AlbumArt(const Windows::Foundation::Uri & value);
    static Windows::Foundation::Uri AlbumArt();
};

struct WINRT_EBO MediaExtensionManager :
    Windows::Media::IMediaExtensionManager
{
    MediaExtensionManager(std::nullptr_t) noexcept {}
    MediaExtensionManager();
};

struct MediaMarkerTypes
{
    MediaMarkerTypes() = delete;
    static hstring Bookmark();
};

struct WINRT_EBO MediaProcessingTriggerDetails :
    Windows::Media::IMediaProcessingTriggerDetails
{
    MediaProcessingTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaTimelineController :
    Windows::Media::IMediaTimelineController
{
    MediaTimelineController(std::nullptr_t) noexcept {}
    MediaTimelineController();
};

struct WINRT_EBO MusicDisplayProperties :
    Windows::Media::IMusicDisplayProperties,
    impl::require<MusicDisplayProperties, Windows::Media::IMusicDisplayProperties2, Windows::Media::IMusicDisplayProperties3>
{
    MusicDisplayProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlaybackPositionChangeRequestedEventArgs :
    Windows::Media::IPlaybackPositionChangeRequestedEventArgs
{
    PlaybackPositionChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlaybackRateChangeRequestedEventArgs :
    Windows::Media::IPlaybackRateChangeRequestedEventArgs
{
    PlaybackRateChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ShuffleEnabledChangeRequestedEventArgs :
    Windows::Media::IShuffleEnabledChangeRequestedEventArgs
{
    ShuffleEnabledChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemMediaTransportControls :
    Windows::Media::ISystemMediaTransportControls,
    impl::require<SystemMediaTransportControls, Windows::Media::ISystemMediaTransportControls2>
{
    SystemMediaTransportControls(std::nullptr_t) noexcept {}
    static Windows::Media::SystemMediaTransportControls GetForCurrentView();
};

struct WINRT_EBO SystemMediaTransportControlsButtonPressedEventArgs :
    Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs
{
    SystemMediaTransportControlsButtonPressedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemMediaTransportControlsDisplayUpdater :
    Windows::Media::ISystemMediaTransportControlsDisplayUpdater
{
    SystemMediaTransportControlsDisplayUpdater(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemMediaTransportControlsPropertyChangedEventArgs :
    Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs
{
    SystemMediaTransportControlsPropertyChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemMediaTransportControlsTimelineProperties :
    Windows::Media::ISystemMediaTransportControlsTimelineProperties
{
    SystemMediaTransportControlsTimelineProperties(std::nullptr_t) noexcept {}
    SystemMediaTransportControlsTimelineProperties();
};

struct WINRT_EBO VideoDisplayProperties :
    Windows::Media::IVideoDisplayProperties,
    impl::require<VideoDisplayProperties, Windows::Media::IVideoDisplayProperties2>
{
    VideoDisplayProperties(std::nullptr_t) noexcept {}
};

struct VideoEffects
{
    VideoEffects() = delete;
    static hstring VideoStabilization();
};

struct WINRT_EBO VideoFrame :
    Windows::Media::IVideoFrame
{
    VideoFrame(std::nullptr_t) noexcept {}
    VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height);
    VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha);
};

}

}
