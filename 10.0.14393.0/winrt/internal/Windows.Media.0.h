// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media {

struct IAudioBuffer;
struct IAudioFrame;
struct IAudioFrameFactory;
struct IAutoRepeatModeChangeRequestedEventArgs;
struct IImageDisplayProperties;
struct IMediaControl;
struct IMediaExtension;
struct IMediaExtensionManager;
struct IMediaFrame;
struct IMediaMarker;
struct IMediaMarkerTypesStatics;
struct IMediaMarkers;
struct IMediaProcessingTriggerDetails;
struct IMediaTimelineController;
struct IMusicDisplayProperties;
struct IMusicDisplayProperties2;
struct IMusicDisplayProperties3;
struct IPlaybackPositionChangeRequestedEventArgs;
struct IPlaybackRateChangeRequestedEventArgs;
struct IShuffleEnabledChangeRequestedEventArgs;
struct ISystemMediaTransportControls;
struct ISystemMediaTransportControls2;
struct ISystemMediaTransportControlsButtonPressedEventArgs;
struct ISystemMediaTransportControlsDisplayUpdater;
struct ISystemMediaTransportControlsPropertyChangedEventArgs;
struct ISystemMediaTransportControlsStatics;
struct ISystemMediaTransportControlsTimelineProperties;
struct IVideoDisplayProperties;
struct IVideoDisplayProperties2;
struct IVideoEffectsStatics;
struct IVideoFrame;
struct IVideoFrameFactory;
struct AudioBuffer;
struct AudioFrame;
struct AutoRepeatModeChangeRequestedEventArgs;
struct ImageDisplayProperties;
struct MediaExtensionManager;
struct MediaProcessingTriggerDetails;
struct MediaTimelineController;
struct MusicDisplayProperties;
struct PlaybackPositionChangeRequestedEventArgs;
struct PlaybackRateChangeRequestedEventArgs;
struct ShuffleEnabledChangeRequestedEventArgs;
struct SystemMediaTransportControls;
struct SystemMediaTransportControlsButtonPressedEventArgs;
struct SystemMediaTransportControlsDisplayUpdater;
struct SystemMediaTransportControlsPropertyChangedEventArgs;
struct SystemMediaTransportControlsTimelineProperties;
struct VideoDisplayProperties;
struct VideoFrame;

}

namespace Windows::Media {

struct IAudioBuffer;
struct IAudioFrame;
struct IAudioFrameFactory;
struct IAutoRepeatModeChangeRequestedEventArgs;
struct IImageDisplayProperties;
struct IMediaControl;
struct IMediaExtension;
struct IMediaExtensionManager;
struct IMediaFrame;
struct IMediaMarker;
struct IMediaMarkerTypesStatics;
struct IMediaMarkers;
struct IMediaProcessingTriggerDetails;
struct IMediaTimelineController;
struct IMusicDisplayProperties;
struct IMusicDisplayProperties2;
struct IMusicDisplayProperties3;
struct IPlaybackPositionChangeRequestedEventArgs;
struct IPlaybackRateChangeRequestedEventArgs;
struct IShuffleEnabledChangeRequestedEventArgs;
struct ISystemMediaTransportControls;
struct ISystemMediaTransportControls2;
struct ISystemMediaTransportControlsButtonPressedEventArgs;
struct ISystemMediaTransportControlsDisplayUpdater;
struct ISystemMediaTransportControlsPropertyChangedEventArgs;
struct ISystemMediaTransportControlsStatics;
struct ISystemMediaTransportControlsTimelineProperties;
struct IVideoDisplayProperties;
struct IVideoDisplayProperties2;
struct IVideoEffectsStatics;
struct IVideoFrame;
struct IVideoFrameFactory;
struct AudioBuffer;
struct AudioFrame;
struct AutoRepeatModeChangeRequestedEventArgs;
struct ImageDisplayProperties;
struct MediaControl;
struct MediaExtensionManager;
struct MediaMarkerTypes;
struct MediaProcessingTriggerDetails;
struct MediaTimelineController;
struct MusicDisplayProperties;
struct PlaybackPositionChangeRequestedEventArgs;
struct PlaybackRateChangeRequestedEventArgs;
struct ShuffleEnabledChangeRequestedEventArgs;
struct SystemMediaTransportControls;
struct SystemMediaTransportControlsButtonPressedEventArgs;
struct SystemMediaTransportControlsDisplayUpdater;
struct SystemMediaTransportControlsPropertyChangedEventArgs;
struct SystemMediaTransportControlsTimelineProperties;
struct VideoDisplayProperties;
struct VideoEffects;
struct VideoFrame;

}

namespace Windows::Media {

enum class AudioBufferAccessMode
{
    Read = 0,
    ReadWrite = 1,
    Write = 2,
};

enum class AudioProcessing
{
    Default = 0,
    Raw = 1,
};

enum class MediaPlaybackAutoRepeatMode
{
    None = 0,
    Track = 1,
    List = 2,
};

enum class MediaPlaybackStatus
{
    Closed = 0,
    Changing = 1,
    Stopped = 2,
    Playing = 3,
    Paused = 4,
};

enum class MediaPlaybackType
{
    Unknown = 0,
    Music = 1,
    Video = 2,
    Image = 3,
};

enum class MediaTimelineControllerState
{
    Paused = 0,
    Running = 1,
};

enum class SoundLevel
{
    Muted = 0,
    Low = 1,
    Full = 2,
};

enum class SystemMediaTransportControlsButton
{
    Play = 0,
    Pause = 1,
    Stop = 2,
    Record = 3,
    FastForward = 4,
    Rewind = 5,
    Next = 6,
    Previous = 7,
    ChannelUp = 8,
    ChannelDown = 9,
};

enum class SystemMediaTransportControlsProperty
{
    SoundLevel = 0,
};

}

}
