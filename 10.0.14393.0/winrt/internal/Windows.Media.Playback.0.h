// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Playback {

struct IBackgroundMediaPlayerStatics;
struct ICurrentMediaPlaybackItemChangedEventArgs;
struct IMediaBreak;
struct IMediaBreakEndedEventArgs;
struct IMediaBreakFactory;
struct IMediaBreakManager;
struct IMediaBreakSchedule;
struct IMediaBreakSeekedOverEventArgs;
struct IMediaBreakSkippedEventArgs;
struct IMediaBreakStartedEventArgs;
struct IMediaEnginePlaybackSource;
struct IMediaItemDisplayProperties;
struct IMediaPlaybackCommandManager;
struct IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
struct IMediaPlaybackCommandManagerCommandBehavior;
struct IMediaPlaybackCommandManagerFastForwardReceivedEventArgs;
struct IMediaPlaybackCommandManagerNextReceivedEventArgs;
struct IMediaPlaybackCommandManagerPauseReceivedEventArgs;
struct IMediaPlaybackCommandManagerPlayReceivedEventArgs;
struct IMediaPlaybackCommandManagerPositionReceivedEventArgs;
struct IMediaPlaybackCommandManagerPreviousReceivedEventArgs;
struct IMediaPlaybackCommandManagerRateReceivedEventArgs;
struct IMediaPlaybackCommandManagerRewindReceivedEventArgs;
struct IMediaPlaybackCommandManagerShuffleReceivedEventArgs;
struct IMediaPlaybackItem;
struct IMediaPlaybackItem2;
struct IMediaPlaybackItemError;
struct IMediaPlaybackItemFactory;
struct IMediaPlaybackItemFactory2;
struct IMediaPlaybackItemFailedEventArgs;
struct IMediaPlaybackItemOpenedEventArgs;
struct IMediaPlaybackItemStatics;
struct IMediaPlaybackList;
struct IMediaPlaybackList2;
struct IMediaPlaybackSession;
struct IMediaPlaybackSource;
struct IMediaPlaybackTimedMetadataTrackList;
struct IMediaPlayer;
struct IMediaPlayer2;
struct IMediaPlayer3;
struct IMediaPlayer4;
struct IMediaPlayerDataReceivedEventArgs;
struct IMediaPlayerEffects;
struct IMediaPlayerEffects2;
struct IMediaPlayerFailedEventArgs;
struct IMediaPlayerRateChangedEventArgs;
struct IMediaPlayerSource;
struct IMediaPlayerSource2;
struct IMediaPlayerSurface;
struct IPlaybackMediaMarker;
struct IPlaybackMediaMarkerFactory;
struct IPlaybackMediaMarkerReachedEventArgs;
struct IPlaybackMediaMarkerSequence;
struct ITimedMetadataPresentationModeChangedEventArgs;
struct CurrentMediaPlaybackItemChangedEventArgs;
struct MediaBreak;
struct MediaBreakEndedEventArgs;
struct MediaBreakManager;
struct MediaBreakSchedule;
struct MediaBreakSeekedOverEventArgs;
struct MediaBreakSkippedEventArgs;
struct MediaBreakStartedEventArgs;
struct MediaItemDisplayProperties;
struct MediaPlaybackAudioTrackList;
struct MediaPlaybackCommandManager;
struct MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
struct MediaPlaybackCommandManagerCommandBehavior;
struct MediaPlaybackCommandManagerFastForwardReceivedEventArgs;
struct MediaPlaybackCommandManagerNextReceivedEventArgs;
struct MediaPlaybackCommandManagerPauseReceivedEventArgs;
struct MediaPlaybackCommandManagerPlayReceivedEventArgs;
struct MediaPlaybackCommandManagerPositionReceivedEventArgs;
struct MediaPlaybackCommandManagerPreviousReceivedEventArgs;
struct MediaPlaybackCommandManagerRateReceivedEventArgs;
struct MediaPlaybackCommandManagerRewindReceivedEventArgs;
struct MediaPlaybackCommandManagerShuffleReceivedEventArgs;
struct MediaPlaybackItem;
struct MediaPlaybackItemError;
struct MediaPlaybackItemFailedEventArgs;
struct MediaPlaybackItemOpenedEventArgs;
struct MediaPlaybackList;
struct MediaPlaybackSession;
struct MediaPlaybackTimedMetadataTrackList;
struct MediaPlaybackVideoTrackList;
struct MediaPlayer;
struct MediaPlayerDataReceivedEventArgs;
struct MediaPlayerFailedEventArgs;
struct MediaPlayerRateChangedEventArgs;
struct MediaPlayerSurface;
struct PlaybackMediaMarker;
struct PlaybackMediaMarkerReachedEventArgs;
struct PlaybackMediaMarkerSequence;
struct TimedMetadataPresentationModeChangedEventArgs;

}

namespace Windows::Media::Playback {

struct IBackgroundMediaPlayerStatics;
struct ICurrentMediaPlaybackItemChangedEventArgs;
struct IMediaBreak;
struct IMediaBreakEndedEventArgs;
struct IMediaBreakFactory;
struct IMediaBreakManager;
struct IMediaBreakSchedule;
struct IMediaBreakSeekedOverEventArgs;
struct IMediaBreakSkippedEventArgs;
struct IMediaBreakStartedEventArgs;
struct IMediaEnginePlaybackSource;
struct IMediaItemDisplayProperties;
struct IMediaPlaybackCommandManager;
struct IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
struct IMediaPlaybackCommandManagerCommandBehavior;
struct IMediaPlaybackCommandManagerFastForwardReceivedEventArgs;
struct IMediaPlaybackCommandManagerNextReceivedEventArgs;
struct IMediaPlaybackCommandManagerPauseReceivedEventArgs;
struct IMediaPlaybackCommandManagerPlayReceivedEventArgs;
struct IMediaPlaybackCommandManagerPositionReceivedEventArgs;
struct IMediaPlaybackCommandManagerPreviousReceivedEventArgs;
struct IMediaPlaybackCommandManagerRateReceivedEventArgs;
struct IMediaPlaybackCommandManagerRewindReceivedEventArgs;
struct IMediaPlaybackCommandManagerShuffleReceivedEventArgs;
struct IMediaPlaybackItem;
struct IMediaPlaybackItem2;
struct IMediaPlaybackItemError;
struct IMediaPlaybackItemFactory;
struct IMediaPlaybackItemFactory2;
struct IMediaPlaybackItemFailedEventArgs;
struct IMediaPlaybackItemOpenedEventArgs;
struct IMediaPlaybackItemStatics;
struct IMediaPlaybackList;
struct IMediaPlaybackList2;
struct IMediaPlaybackSession;
struct IMediaPlaybackSource;
struct IMediaPlaybackTimedMetadataTrackList;
struct IMediaPlayer;
struct IMediaPlayer2;
struct IMediaPlayer3;
struct IMediaPlayer4;
struct IMediaPlayerDataReceivedEventArgs;
struct IMediaPlayerEffects;
struct IMediaPlayerEffects2;
struct IMediaPlayerFailedEventArgs;
struct IMediaPlayerRateChangedEventArgs;
struct IMediaPlayerSource;
struct IMediaPlayerSource2;
struct IMediaPlayerSurface;
struct IPlaybackMediaMarker;
struct IPlaybackMediaMarkerFactory;
struct IPlaybackMediaMarkerReachedEventArgs;
struct IPlaybackMediaMarkerSequence;
struct ITimedMetadataPresentationModeChangedEventArgs;
struct BackgroundMediaPlayer;
struct CurrentMediaPlaybackItemChangedEventArgs;
struct MediaBreak;
struct MediaBreakEndedEventArgs;
struct MediaBreakManager;
struct MediaBreakSchedule;
struct MediaBreakSeekedOverEventArgs;
struct MediaBreakSkippedEventArgs;
struct MediaBreakStartedEventArgs;
struct MediaItemDisplayProperties;
struct MediaPlaybackAudioTrackList;
struct MediaPlaybackCommandManager;
struct MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
struct MediaPlaybackCommandManagerCommandBehavior;
struct MediaPlaybackCommandManagerFastForwardReceivedEventArgs;
struct MediaPlaybackCommandManagerNextReceivedEventArgs;
struct MediaPlaybackCommandManagerPauseReceivedEventArgs;
struct MediaPlaybackCommandManagerPlayReceivedEventArgs;
struct MediaPlaybackCommandManagerPositionReceivedEventArgs;
struct MediaPlaybackCommandManagerPreviousReceivedEventArgs;
struct MediaPlaybackCommandManagerRateReceivedEventArgs;
struct MediaPlaybackCommandManagerRewindReceivedEventArgs;
struct MediaPlaybackCommandManagerShuffleReceivedEventArgs;
struct MediaPlaybackItem;
struct MediaPlaybackItemError;
struct MediaPlaybackItemFailedEventArgs;
struct MediaPlaybackItemOpenedEventArgs;
struct MediaPlaybackList;
struct MediaPlaybackSession;
struct MediaPlaybackTimedMetadataTrackList;
struct MediaPlaybackVideoTrackList;
struct MediaPlayer;
struct MediaPlayerDataReceivedEventArgs;
struct MediaPlayerFailedEventArgs;
struct MediaPlayerRateChangedEventArgs;
struct MediaPlayerSurface;
struct PlaybackMediaMarker;
struct PlaybackMediaMarkerReachedEventArgs;
struct PlaybackMediaMarkerSequence;
struct TimedMetadataPresentationModeChangedEventArgs;

}

namespace Windows::Media::Playback {

enum class FailedMediaStreamKind
{
    Unknown = 0,
    Audio = 1,
    Video = 2,
};

enum class MediaBreakInsertionMethod
{
    Interrupt = 0,
    Replace = 1,
};

enum class MediaCommandEnablingRule
{
    Auto = 0,
    Always = 1,
    Never = 2,
};

enum class MediaPlaybackItemErrorCode
{
    None = 0,
    Aborted = 1,
    NetworkError = 2,
    DecodeError = 3,
    SourceNotSupportedError = 4,
    EncryptionError = 5,
};

enum class MediaPlaybackState
{
    None = 0,
    Opening = 1,
    Buffering = 2,
    Playing = 3,
    Paused = 4,
};

enum class MediaPlayerAudioCategory
{
    Other = 0,
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

enum class MediaPlayerAudioDeviceType
{
    Console = 0,
    Multimedia = 1,
    Communications = 2,
};

enum class MediaPlayerError
{
    Unknown = 0,
    Aborted = 1,
    NetworkError = 2,
    DecodingError = 3,
    SourceNotSupported = 4,
};

enum class MediaPlayerState
{
    Closed = 0,
    Opening = 1,
    Buffering = 2,
    Playing = 3,
    Paused = 4,
    Stopped = 5,
};

enum class StereoscopicVideoRenderMode
{
    Mono = 0,
    Stereo = 1,
};

enum class TimedMetadataTrackPresentationMode
{
    Disabled = 0,
    Hidden = 1,
    ApplicationPresented = 2,
    PlatformPresented = 3,
};

}

}
