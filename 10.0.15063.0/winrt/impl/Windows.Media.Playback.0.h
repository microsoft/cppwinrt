// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct DeviceInformation;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;
struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct IDirect3DSurface;

}

WINRT_EXPORT namespace winrt::Windows::Media {

enum class MediaPlaybackAutoRepeatMode;
enum class MediaPlaybackType;
struct MediaTimeRange;
struct MediaTimelineController;
struct MusicDisplayProperties;
struct SystemMediaTransportControls;
struct VideoDisplayProperties;

}

WINRT_EXPORT namespace winrt::Windows::Media::Casting {

struct CastingSource;

}

WINRT_EXPORT namespace winrt::Windows::Media::Core {

struct AudioTrack;
struct IMediaSource;
struct ISingleSelectMediaTrackList;
struct MediaSource;
struct TimedMetadataTrack;
struct VideoTrack;

}

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

enum class SphericalVideoFrameFormat;
enum class StereoscopicVideoPackingMode;

}

WINRT_EXPORT namespace winrt::Windows::Media::Protection {

struct MediaProtectionManager;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;
struct RandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct Compositor;
struct ICompositionSurface;

}

WINRT_EXPORT namespace winrt::Windows::Media::Playback {

enum class AutoLoadedDisplayPropertyKind
{
    None = 0,
    MusicOrVideo = 1,
    Music = 2,
    Video = 3,
};

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

enum class MediaPlaybackItemChangedReason
{
    InitialItem = 0,
    EndOfStream = 1,
    Error = 2,
    AppRequested = 3,
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

enum class [[deprecated("Use MediaPlaybackState instead of MediaPlayerState.  For more info, see MSDN.")]] MediaPlayerState
{
    Closed = 0,
    Opening = 1,
    Buffering = 2,
    Playing = 3,
    Paused = 4,
    Stopped = 5,
};

enum class SphericalVideoProjectionMode
{
    Spherical = 0,
    Flat = 1,
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

struct IBackgroundMediaPlayerStatics;
struct ICurrentMediaPlaybackItemChangedEventArgs;
struct ICurrentMediaPlaybackItemChangedEventArgs2;
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
struct IMediaPlaybackItem3;
struct IMediaPlaybackItemError;
struct IMediaPlaybackItemFactory;
struct IMediaPlaybackItemFactory2;
struct IMediaPlaybackItemFailedEventArgs;
struct IMediaPlaybackItemOpenedEventArgs;
struct IMediaPlaybackItemStatics;
struct IMediaPlaybackList;
struct IMediaPlaybackList2;
struct IMediaPlaybackList3;
struct IMediaPlaybackSession;
struct IMediaPlaybackSession2;
struct IMediaPlaybackSource;
struct IMediaPlaybackSphericalVideoProjection;
struct IMediaPlaybackTimedMetadataTrackList;
struct IMediaPlayer;
struct IMediaPlayer2;
struct IMediaPlayer3;
struct IMediaPlayer4;
struct IMediaPlayer5;
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
struct MediaPlaybackSphericalVideoProjection;
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

namespace winrt::impl {

template <> struct category<Windows::Media::Playback::IBackgroundMediaPlayerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaBreak>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaBreakEndedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaBreakFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaBreakManager>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaBreakSchedule>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaBreakSkippedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaBreakStartedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaEnginePlaybackSource>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaItemDisplayProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManager>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItem>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItem2>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItem3>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItemError>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItemFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItemFactory2>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackItemStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackList>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackList2>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackList3>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackSession>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackSession2>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackSource>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayer>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayer2>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayer3>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayer4>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayer5>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayerEffects>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayerEffects2>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayerFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayerSource>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayerSource2>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IMediaPlayerSurface>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IPlaybackMediaMarker>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IPlaybackMediaMarkerFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::IPlaybackMediaMarkerSequence>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Playback::BackgroundMediaPlayer>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaBreak>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaBreakEndedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaBreakManager>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaBreakSchedule>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaBreakSeekedOverEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaBreakSkippedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaBreakStartedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaItemDisplayProperties>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackAudioTrackList>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManager>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackItem>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackItemError>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackItemFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackList>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackSession>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackSphericalVideoProjection>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackVideoTrackList>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlayer>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlayerFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlayerRateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::MediaPlayerSurface>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::PlaybackMediaMarker>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::PlaybackMediaMarkerSequence>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Playback::AutoLoadedDisplayPropertyKind>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::FailedMediaStreamKind>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaBreakInsertionMethod>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaCommandEnablingRule>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackItemChangedReason>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackItemErrorCode>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaPlaybackState>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaPlayerAudioCategory>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaPlayerAudioDeviceType>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaPlayerError>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::MediaPlayerState>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::SphericalVideoProjectionMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::StereoscopicVideoRenderMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Playback::TimedMetadataTrackPresentationMode>{ using type = enum_category; };
template <> struct name<Windows::Media::Playback::IBackgroundMediaPlayerStatics>{ static constexpr auto & value{ L"Windows.Media.Playback.IBackgroundMediaPlayerStatics" }; };
template <> struct name<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.ICurrentMediaPlaybackItemChangedEventArgs" }; };
template <> struct name<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>{ static constexpr auto & value{ L"Windows.Media.Playback.ICurrentMediaPlaybackItemChangedEventArgs2" }; };
template <> struct name<Windows::Media::Playback::IMediaBreak>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaBreak" }; };
template <> struct name<Windows::Media::Playback::IMediaBreakEndedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaBreakEndedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaBreakFactory>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaBreakFactory" }; };
template <> struct name<Windows::Media::Playback::IMediaBreakManager>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaBreakManager" }; };
template <> struct name<Windows::Media::Playback::IMediaBreakSchedule>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaBreakSchedule" }; };
template <> struct name<Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaBreakSeekedOverEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaBreakSkippedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaBreakSkippedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaBreakStartedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaBreakStartedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaEnginePlaybackSource>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaEnginePlaybackSource" }; };
template <> struct name<Windows::Media::Playback::IMediaItemDisplayProperties>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaItemDisplayProperties" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManager>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManager" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerCommandBehavior" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerFastForwardReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerNextReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerPauseReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerPlayReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerPositionReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerPreviousReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerRateReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerRewindReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackCommandManagerShuffleReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItem>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItem" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItem2>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItem2" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItem3>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItem3" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItemError>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItemError" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItemFactory>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItemFactory" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItemFactory2>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItemFactory2" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItemFailedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItemOpenedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackItemStatics>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackItemStatics" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackList>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackList" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackList2>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackList2" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackList3>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackList3" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackSession>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackSession" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackSession2>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackSession2" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackSource>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackSource" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackSphericalVideoProjection" }; };
template <> struct name<Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlaybackTimedMetadataTrackList" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayer>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayer" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayer2>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayer2" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayer3>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayer3" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayer4>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayer4" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayer5>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayer5" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayerDataReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayerEffects>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayerEffects" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayerEffects2>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayerEffects2" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayerFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayerFailedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayerRateChangedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayerSource>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayerSource" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayerSource2>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayerSource2" }; };
template <> struct name<Windows::Media::Playback::IMediaPlayerSurface>{ static constexpr auto & value{ L"Windows.Media.Playback.IMediaPlayerSurface" }; };
template <> struct name<Windows::Media::Playback::IPlaybackMediaMarker>{ static constexpr auto & value{ L"Windows.Media.Playback.IPlaybackMediaMarker" }; };
template <> struct name<Windows::Media::Playback::IPlaybackMediaMarkerFactory>{ static constexpr auto & value{ L"Windows.Media.Playback.IPlaybackMediaMarkerFactory" }; };
template <> struct name<Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.IPlaybackMediaMarkerReachedEventArgs" }; };
template <> struct name<Windows::Media::Playback::IPlaybackMediaMarkerSequence>{ static constexpr auto & value{ L"Windows.Media.Playback.IPlaybackMediaMarkerSequence" }; };
template <> struct name<Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.ITimedMetadataPresentationModeChangedEventArgs" }; };
template <> struct name<Windows::Media::Playback::BackgroundMediaPlayer>{ static constexpr auto & value{ L"Windows.Media.Playback.BackgroundMediaPlayer" }; };
template <> struct name<Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.CurrentMediaPlaybackItemChangedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaBreak>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaBreak" }; };
template <> struct name<Windows::Media::Playback::MediaBreakEndedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaBreakEndedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaBreakManager>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaBreakManager" }; };
template <> struct name<Windows::Media::Playback::MediaBreakSchedule>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaBreakSchedule" }; };
template <> struct name<Windows::Media::Playback::MediaBreakSeekedOverEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaBreakSeekedOverEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaBreakSkippedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaBreakSkippedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaBreakStartedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaBreakStartedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaItemDisplayProperties>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaItemDisplayProperties" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackAudioTrackList>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackAudioTrackList" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManager>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManager" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerCommandBehavior" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerFastForwardReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerNextReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerPauseReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerPlayReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerPositionReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerPreviousReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerRateReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerRewindReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackCommandManagerShuffleReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackItem>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackItem" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackItemError>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackItemError" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackItemFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackItemFailedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackItemOpenedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackList>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackList" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackSession>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackSession" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackSphericalVideoProjection>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackSphericalVideoProjection" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackTimedMetadataTrackList" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackVideoTrackList>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackVideoTrackList" }; };
template <> struct name<Windows::Media::Playback::MediaPlayer>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayer" }; };
template <> struct name<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayerDataReceivedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlayerFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayerFailedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlayerRateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayerRateChangedEventArgs" }; };
template <> struct name<Windows::Media::Playback::MediaPlayerSurface>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayerSurface" }; };
template <> struct name<Windows::Media::Playback::PlaybackMediaMarker>{ static constexpr auto & value{ L"Windows.Media.Playback.PlaybackMediaMarker" }; };
template <> struct name<Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.PlaybackMediaMarkerReachedEventArgs" }; };
template <> struct name<Windows::Media::Playback::PlaybackMediaMarkerSequence>{ static constexpr auto & value{ L"Windows.Media.Playback.PlaybackMediaMarkerSequence" }; };
template <> struct name<Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Playback.TimedMetadataPresentationModeChangedEventArgs" }; };
template <> struct name<Windows::Media::Playback::AutoLoadedDisplayPropertyKind>{ static constexpr auto & value{ L"Windows.Media.Playback.AutoLoadedDisplayPropertyKind" }; };
template <> struct name<Windows::Media::Playback::FailedMediaStreamKind>{ static constexpr auto & value{ L"Windows.Media.Playback.FailedMediaStreamKind" }; };
template <> struct name<Windows::Media::Playback::MediaBreakInsertionMethod>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaBreakInsertionMethod" }; };
template <> struct name<Windows::Media::Playback::MediaCommandEnablingRule>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaCommandEnablingRule" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackItemChangedReason>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackItemChangedReason" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackItemErrorCode>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackItemErrorCode" }; };
template <> struct name<Windows::Media::Playback::MediaPlaybackState>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlaybackState" }; };
template <> struct name<Windows::Media::Playback::MediaPlayerAudioCategory>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayerAudioCategory" }; };
template <> struct name<Windows::Media::Playback::MediaPlayerAudioDeviceType>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayerAudioDeviceType" }; };
template <> struct name<Windows::Media::Playback::MediaPlayerError>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayerError" }; };
template <> struct name<Windows::Media::Playback::MediaPlayerState>{ static constexpr auto & value{ L"Windows.Media.Playback.MediaPlayerState" }; };
template <> struct name<Windows::Media::Playback::SphericalVideoProjectionMode>{ static constexpr auto & value{ L"Windows.Media.Playback.SphericalVideoProjectionMode" }; };
template <> struct name<Windows::Media::Playback::StereoscopicVideoRenderMode>{ static constexpr auto & value{ L"Windows.Media.Playback.StereoscopicVideoRenderMode" }; };
template <> struct name<Windows::Media::Playback::TimedMetadataTrackPresentationMode>{ static constexpr auto & value{ L"Windows.Media.Playback.TimedMetadataTrackPresentationMode" }; };
template <> struct guid<Windows::Media::Playback::IBackgroundMediaPlayerStatics>{ static constexpr GUID value{ 0x856DDBC1,0x55F7,0x471F,{ 0xA0,0xF2,0x68,0xAC,0x4C,0x90,0x45,0x92 } }; };
template <> struct guid<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>{ static constexpr GUID value{ 0x1743A892,0x5C43,0x4A15,{ 0x96,0x7A,0x57,0x2D,0x2D,0x0F,0x26,0xC6 } }; };
template <> struct guid<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>{ static constexpr GUID value{ 0x1D80A51E,0x996E,0x40A9,{ 0xBE,0x48,0xE6,0x6E,0xC9,0x0B,0x2B,0x7D } }; };
template <> struct guid<Windows::Media::Playback::IMediaBreak>{ static constexpr GUID value{ 0x714BE270,0x0DEF,0x4EBC,{ 0xA4,0x89,0x6B,0x34,0x93,0x0E,0x15,0x58 } }; };
template <> struct guid<Windows::Media::Playback::IMediaBreakEndedEventArgs>{ static constexpr GUID value{ 0x32B93276,0x1C5D,0x4FEE,{ 0x87,0x32,0x23,0x6D,0xC3,0xA8,0x85,0x80 } }; };
template <> struct guid<Windows::Media::Playback::IMediaBreakFactory>{ static constexpr GUID value{ 0x4516E002,0x18E0,0x4079,{ 0x8B,0x5F,0xD3,0x34,0x95,0xC1,0x5D,0x2E } }; };
template <> struct guid<Windows::Media::Playback::IMediaBreakManager>{ static constexpr GUID value{ 0xA854DDB1,0xFEB4,0x4D9B,{ 0x9D,0x97,0x0F,0xDB,0xE5,0x8E,0x5E,0x39 } }; };
template <> struct guid<Windows::Media::Playback::IMediaBreakSchedule>{ static constexpr GUID value{ 0xA19A5813,0x98B6,0x41D8,{ 0x83,0xDA,0xF9,0x71,0xD2,0x2B,0x7B,0xBA } }; };
template <> struct guid<Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>{ static constexpr GUID value{ 0xE5AA6746,0x0606,0x4492,{ 0xB9,0xD3,0xC3,0xC8,0xFD,0xE0,0xA4,0xEA } }; };
template <> struct guid<Windows::Media::Playback::IMediaBreakSkippedEventArgs>{ static constexpr GUID value{ 0x6EE94C05,0x2F54,0x4A3E,{ 0xA3,0xAB,0x24,0xC3,0xB2,0x70,0xB4,0xA3 } }; };
template <> struct guid<Windows::Media::Playback::IMediaBreakStartedEventArgs>{ static constexpr GUID value{ 0xA87EFE71,0xDFD4,0x454A,{ 0x95,0x6E,0x0A,0x4A,0x64,0x83,0x95,0xF8 } }; };
template <> struct guid<Windows::Media::Playback::IMediaEnginePlaybackSource>{ static constexpr GUID value{ 0x5C1D0BA7,0x3856,0x48B9,{ 0x8D,0xC6,0x24,0x4B,0xF1,0x07,0xBF,0x8C } }; };
template <> struct guid<Windows::Media::Playback::IMediaItemDisplayProperties>{ static constexpr GUID value{ 0x1E3C1B48,0x7097,0x4384,{ 0xA2,0x17,0xC1,0x29,0x1D,0xFA,0x8C,0x16 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManager>{ static constexpr GUID value{ 0x5ACEE5A6,0x5CB6,0x4A5A,{ 0x85,0x21,0xCC,0x86,0xB1,0xC1,0xED,0x37 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ static constexpr GUID value{ 0x3D6F4F23,0x5230,0x4411,{ 0xA0,0xE9,0xBA,0xD9,0x4C,0x2A,0x04,0x5C } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>{ static constexpr GUID value{ 0x786C1E78,0xCE78,0x4A10,{ 0xAF,0xD6,0x84,0x3F,0xCB,0xB9,0x0C,0x2E } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ static constexpr GUID value{ 0x30F064D9,0xB491,0x4D0A,{ 0xBC,0x21,0x30,0x98,0xBD,0x13,0x32,0xE9 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>{ static constexpr GUID value{ 0xE1504433,0xA2B0,0x45D4,{ 0xB9,0xDE,0x5F,0x42,0xAC,0x14,0xA8,0x39 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>{ static constexpr GUID value{ 0x5CECCD1C,0xC25C,0x4221,{ 0xB1,0x6C,0xC3,0xC9,0x8C,0xE0,0x12,0xD6 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>{ static constexpr GUID value{ 0x9AF0004E,0x578B,0x4C56,{ 0xA0,0x06,0x16,0x15,0x9D,0x88,0x8A,0x48 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>{ static constexpr GUID value{ 0x5591A754,0xD627,0x4BDD,{ 0xA9,0x0D,0x86,0xA0,0x15,0xB2,0x49,0x02 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>{ static constexpr GUID value{ 0x525E3081,0x4632,0x4F76,{ 0x99,0xB1,0xD7,0x71,0x62,0x3F,0x62,0x87 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>{ static constexpr GUID value{ 0x18EA3939,0x4A16,0x4169,{ 0x8B,0x05,0x3E,0xB9,0xF5,0xFF,0x78,0xEB } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>{ static constexpr GUID value{ 0x9F085947,0xA3C0,0x425D,{ 0xAA,0xEF,0x97,0xBA,0x78,0x98,0xB1,0x41 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>{ static constexpr GUID value{ 0x50A05CEF,0x63EE,0x4A96,{ 0xB7,0xB5,0xFE,0xE0,0x8B,0x9F,0xF9,0x0C } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItem>{ static constexpr GUID value{ 0x047097D2,0xE4AF,0x48AB,{ 0xB2,0x83,0x69,0x29,0xE6,0x74,0xEC,0xE2 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItem2>{ static constexpr GUID value{ 0xD859D171,0xD7EF,0x4B81,{ 0xAC,0x1F,0xF4,0x04,0x93,0xCB,0xB0,0x91 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItem3>{ static constexpr GUID value{ 0x0D328220,0xB80A,0x4D09,{ 0x9F,0xF8,0xF8,0x70,0x94,0xA1,0xC8,0x31 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItemError>{ static constexpr GUID value{ 0x69FBEF2B,0xDCD6,0x4DF9,{ 0xA4,0x50,0xDB,0xF4,0xC6,0xF1,0xC2,0xC2 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItemFactory>{ static constexpr GUID value{ 0x7133FCE1,0x1769,0x4FF9,{ 0xA7,0xC1,0x38,0xD2,0xC4,0xD4,0x23,0x60 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItemFactory2>{ static constexpr GUID value{ 0xD77CDF3A,0xB947,0x4972,{ 0xB3,0x5D,0xAD,0xFB,0x93,0x1A,0x71,0xE6 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>{ static constexpr GUID value{ 0x7703134A,0xE9A7,0x47C3,{ 0x86,0x2C,0xC6,0x56,0xD3,0x06,0x83,0xD4 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>{ static constexpr GUID value{ 0xCBD9BD82,0x3037,0x4FBE,{ 0xAE,0x8F,0x39,0xFC,0x39,0xED,0xF4,0xEF } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackItemStatics>{ static constexpr GUID value{ 0x4B1BE7F4,0x4345,0x403C,{ 0x8A,0x67,0xF5,0xDE,0x91,0xDF,0x4C,0x86 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackList>{ static constexpr GUID value{ 0x7F77EE9C,0xDC42,0x4E26,{ 0xA9,0x8D,0x78,0x50,0xDF,0x8E,0xC9,0x25 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackList2>{ static constexpr GUID value{ 0x0E09B478,0x600A,0x4274,{ 0xA1,0x4B,0x0B,0x67,0x23,0xD0,0xF4,0x8B } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackList3>{ static constexpr GUID value{ 0xDD24BBA9,0xBC47,0x4463,{ 0xAA,0x90,0xC1,0x8B,0x7E,0x5F,0xFD,0xE1 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackSession>{ static constexpr GUID value{ 0xC32B683D,0x0407,0x41BA,{ 0x89,0x46,0x8B,0x34,0x5A,0x5A,0x54,0x35 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackSession2>{ static constexpr GUID value{ 0xF8BA7C79,0x1FC8,0x4097,{ 0xAD,0x70,0xC0,0xFA,0x18,0xCC,0x00,0x50 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackSource>{ static constexpr GUID value{ 0xEF9DC2BC,0x9317,0x4696,{ 0xB0,0x51,0x2B,0xAD,0x64,0x31,0x77,0xB5 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>{ static constexpr GUID value{ 0xD405B37C,0x6F0E,0x4661,{ 0xB8,0xEE,0xD4,0x87,0xBA,0x97,0x52,0xD5 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>{ static constexpr GUID value{ 0x72B41319,0xBBFB,0x46A3,{ 0x93,0x72,0x9C,0x9C,0x74,0x4B,0x94,0x38 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayer>{ static constexpr GUID value{ 0x381A83CB,0x6FFF,0x499B,{ 0x8D,0x64,0x28,0x85,0xDF,0xC1,0x24,0x9E } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayer2>{ static constexpr GUID value{ 0x3C841218,0x2123,0x4FC5,{ 0x90,0x82,0x2F,0x88,0x3F,0x77,0xBD,0xF5 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayer3>{ static constexpr GUID value{ 0xEE0660DA,0x031B,0x4FEB,{ 0xBD,0x9B,0x92,0xE0,0xA0,0xA8,0xD2,0x99 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayer4>{ static constexpr GUID value{ 0x80035DB0,0x7448,0x4770,{ 0xAF,0xCF,0x2A,0x57,0x45,0x09,0x14,0xC5 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayer5>{ static constexpr GUID value{ 0xCFE537FD,0xF86A,0x4446,{ 0xBF,0x4D,0xC8,0xE7,0x92,0xB7,0xB4,0xB3 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>{ static constexpr GUID value{ 0xC75A9405,0xC801,0x412A,{ 0x83,0x5B,0x83,0xFC,0x0E,0x62,0x2A,0x8E } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayerEffects>{ static constexpr GUID value{ 0x85A1DEDA,0xCAB6,0x4CC0,{ 0x8B,0xE3,0x60,0x35,0xF4,0xDE,0x25,0x91 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayerEffects2>{ static constexpr GUID value{ 0xFA419A79,0x1BBE,0x46C5,{ 0xAE,0x1F,0x8E,0xE6,0x9F,0xB3,0xC2,0xC7 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayerFailedEventArgs>{ static constexpr GUID value{ 0x2744E9B9,0xA7E3,0x4F16,{ 0xBA,0xC4,0x79,0x14,0xEB,0xC0,0x83,0x01 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>{ static constexpr GUID value{ 0x40600D58,0x3B61,0x4BB2,{ 0x98,0x9F,0xFC,0x65,0x60,0x8B,0x6C,0xAB } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayerSource>{ static constexpr GUID value{ 0xBD4F8897,0x1423,0x4C3E,{ 0x82,0xC5,0x0F,0xB1,0xAF,0x94,0xF7,0x15 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayerSource2>{ static constexpr GUID value{ 0x82449B9F,0x7322,0x4C0B,{ 0xB0,0x3B,0x3E,0x69,0xA4,0x82,0x60,0xC5 } }; };
template <> struct guid<Windows::Media::Playback::IMediaPlayerSurface>{ static constexpr GUID value{ 0x0ED653BC,0xB736,0x49C3,{ 0x83,0x0B,0x76,0x4A,0x38,0x45,0x31,0x3A } }; };
template <> struct guid<Windows::Media::Playback::IPlaybackMediaMarker>{ static constexpr GUID value{ 0xC4D22F5C,0x3C1C,0x4444,{ 0xB6,0xB9,0x77,0x8B,0x04,0x22,0xD4,0x1A } }; };
template <> struct guid<Windows::Media::Playback::IPlaybackMediaMarkerFactory>{ static constexpr GUID value{ 0x8C530A78,0xE0AE,0x4E1A,{ 0xA8,0xC8,0xE2,0x3F,0x98,0x2A,0x93,0x7B } }; };
template <> struct guid<Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>{ static constexpr GUID value{ 0x578CD1B9,0x90E2,0x4E60,{ 0xAB,0xC4,0x87,0x40,0xB0,0x1F,0x61,0x96 } }; };
template <> struct guid<Windows::Media::Playback::IPlaybackMediaMarkerSequence>{ static constexpr GUID value{ 0xF2810CEE,0x638B,0x46CF,{ 0x88,0x17,0x1D,0x11,0x1F,0xE9,0xD8,0xC4 } }; };
template <> struct guid<Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>{ static constexpr GUID value{ 0xD1636099,0x65DF,0x45AE,{ 0x8C,0xEF,0xDC,0x0B,0x53,0xFD,0xC2,0xBB } }; };
template <> struct default_interface<Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs>{ using type = Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaBreak>{ using type = Windows::Media::Playback::IMediaBreak; };
template <> struct default_interface<Windows::Media::Playback::MediaBreakEndedEventArgs>{ using type = Windows::Media::Playback::IMediaBreakEndedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaBreakManager>{ using type = Windows::Media::Playback::IMediaBreakManager; };
template <> struct default_interface<Windows::Media::Playback::MediaBreakSchedule>{ using type = Windows::Media::Playback::IMediaBreakSchedule; };
template <> struct default_interface<Windows::Media::Playback::MediaBreakSeekedOverEventArgs>{ using type = Windows::Media::Playback::IMediaBreakSeekedOverEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaBreakSkippedEventArgs>{ using type = Windows::Media::Playback::IMediaBreakSkippedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaBreakStartedEventArgs>{ using type = Windows::Media::Playback::IMediaBreakStartedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaItemDisplayProperties>{ using type = Windows::Media::Playback::IMediaItemDisplayProperties; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackAudioTrackList>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Media::Core::AudioTrack>; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManager>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManager; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackItem>{ using type = Windows::Media::Playback::IMediaPlaybackItem; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackItemError>{ using type = Windows::Media::Playback::IMediaPlaybackItemError; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackItemFailedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs>{ using type = Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackList>{ using type = Windows::Media::Playback::IMediaPlaybackList; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackSession>{ using type = Windows::Media::Playback::IMediaPlaybackSession; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackSphericalVideoProjection>{ using type = Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>; };
template <> struct default_interface<Windows::Media::Playback::MediaPlaybackVideoTrackList>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Media::Core::VideoTrack>; };
template <> struct default_interface<Windows::Media::Playback::MediaPlayer>{ using type = Windows::Media::Playback::IMediaPlayer; };
template <> struct default_interface<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>{ using type = Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlayerFailedEventArgs>{ using type = Windows::Media::Playback::IMediaPlayerFailedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlayerRateChangedEventArgs>{ using type = Windows::Media::Playback::IMediaPlayerRateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::MediaPlayerSurface>{ using type = Windows::Media::Playback::IMediaPlayerSurface; };
template <> struct default_interface<Windows::Media::Playback::PlaybackMediaMarker>{ using type = Windows::Media::Playback::IPlaybackMediaMarker; };
template <> struct default_interface<Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs>{ using type = Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs; };
template <> struct default_interface<Windows::Media::Playback::PlaybackMediaMarkerSequence>{ using type = Windows::Media::Playback::IPlaybackMediaMarkerSequence; };
template <> struct default_interface<Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs>{ using type = Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs; };

template <typename D>
struct consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics
{
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] Windows::Media::Playback::MediaPlayer Current() const;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] event_token MessageReceivedFromBackground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const;
    using MessageReceivedFromBackground_revoker = event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics>;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] MessageReceivedFromBackground_revoker MessageReceivedFromBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] void MessageReceivedFromBackground(event_token const& token) const;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] event_token MessageReceivedFromForeground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const;
    using MessageReceivedFromForeground_revoker = event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics>;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] MessageReceivedFromForeground_revoker MessageReceivedFromForeground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] void MessageReceivedFromForeground(event_token const& token) const;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] void SendMessageToBackground(Windows::Foundation::Collections::ValueSet const& value) const;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] void SendMessageToForeground(Windows::Foundation::Collections::ValueSet const& value) const;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] bool IsMediaPlaying() const;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] void Shutdown() const;
};
template <> struct consume<Windows::Media::Playback::IBackgroundMediaPlayerStatics> { template <typename D> using type = consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>; };

template <typename D>
struct consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs
{
    Windows::Media::Playback::MediaPlaybackItem NewItem() const;
    Windows::Media::Playback::MediaPlaybackItem OldItem() const;
};
template <> struct consume<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs2
{
    Windows::Media::Playback::MediaPlaybackItemChangedReason Reason() const;
};
template <> struct consume<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2> { template <typename D> using type = consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs2<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaBreak
{
    Windows::Media::Playback::MediaPlaybackList PlaybackList() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> PresentationPosition() const;
    Windows::Media::Playback::MediaBreakInsertionMethod InsertionMethod() const;
    Windows::Foundation::Collections::ValueSet CustomProperties() const;
    bool CanStart() const;
    void CanStart(bool value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaBreak> { template <typename D> using type = consume_Windows_Media_Playback_IMediaBreak<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaBreakEndedEventArgs
{
    Windows::Media::Playback::MediaBreak MediaBreak() const;
};
template <> struct consume<Windows::Media::Playback::IMediaBreakEndedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakEndedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaBreakFactory
{
    Windows::Media::Playback::MediaBreak Create(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod) const;
    Windows::Media::Playback::MediaBreak CreateWithPresentationPosition(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod, Windows::Foundation::TimeSpan const& presentationPosition) const;
};
template <> struct consume<Windows::Media::Playback::IMediaBreakFactory> { template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakFactory<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaBreakManager
{
    event_token BreaksSeekedOver(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> const& handler) const;
    using BreaksSeekedOver_revoker = event_revoker<Windows::Media::Playback::IMediaBreakManager>;
    BreaksSeekedOver_revoker BreaksSeekedOver(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> const& handler) const;
    void BreaksSeekedOver(event_token const& token) const;
    event_token BreakStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> const& handler) const;
    using BreakStarted_revoker = event_revoker<Windows::Media::Playback::IMediaBreakManager>;
    BreakStarted_revoker BreakStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> const& handler) const;
    void BreakStarted(event_token const& token) const;
    event_token BreakEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> const& handler) const;
    using BreakEnded_revoker = event_revoker<Windows::Media::Playback::IMediaBreakManager>;
    BreakEnded_revoker BreakEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> const& handler) const;
    void BreakEnded(event_token const& token) const;
    event_token BreakSkipped(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> const& handler) const;
    using BreakSkipped_revoker = event_revoker<Windows::Media::Playback::IMediaBreakManager>;
    BreakSkipped_revoker BreakSkipped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> const& handler) const;
    void BreakSkipped(event_token const& token) const;
    Windows::Media::Playback::MediaBreak CurrentBreak() const;
    Windows::Media::Playback::MediaPlaybackSession PlaybackSession() const;
    void PlayBreak(Windows::Media::Playback::MediaBreak const& value) const;
    void SkipCurrentBreak() const;
};
template <> struct consume<Windows::Media::Playback::IMediaBreakManager> { template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakManager<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaBreakSchedule
{
    event_token ScheduleChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::Foundation::IInspectable> const& handler) const;
    using ScheduleChanged_revoker = event_revoker<Windows::Media::Playback::IMediaBreakSchedule>;
    ScheduleChanged_revoker ScheduleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::Foundation::IInspectable> const& handler) const;
    void ScheduleChanged(event_token const& token) const;
    void InsertMidrollBreak(Windows::Media::Playback::MediaBreak const& mediaBreak) const;
    void RemoveMidrollBreak(Windows::Media::Playback::MediaBreak const& mediaBreak) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> MidrollBreaks() const;
    void PrerollBreak(Windows::Media::Playback::MediaBreak const& value) const;
    Windows::Media::Playback::MediaBreak PrerollBreak() const;
    void PostrollBreak(Windows::Media::Playback::MediaBreak const& value) const;
    Windows::Media::Playback::MediaBreak PostrollBreak() const;
    Windows::Media::Playback::MediaPlaybackItem PlaybackItem() const;
};
template <> struct consume<Windows::Media::Playback::IMediaBreakSchedule> { template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakSchedule<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaBreakSeekedOverEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> SeekedOverBreaks() const;
    Windows::Foundation::TimeSpan OldPosition() const;
    Windows::Foundation::TimeSpan NewPosition() const;
};
template <> struct consume<Windows::Media::Playback::IMediaBreakSeekedOverEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakSeekedOverEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaBreakSkippedEventArgs
{
    Windows::Media::Playback::MediaBreak MediaBreak() const;
};
template <> struct consume<Windows::Media::Playback::IMediaBreakSkippedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakSkippedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaBreakStartedEventArgs
{
    Windows::Media::Playback::MediaBreak MediaBreak() const;
};
template <> struct consume<Windows::Media::Playback::IMediaBreakStartedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakStartedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaEnginePlaybackSource
{
    [[deprecated("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")]] Windows::Media::Playback::MediaPlaybackItem CurrentItem() const;
    [[deprecated("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")]] void SetPlaybackSource(Windows::Media::Playback::IMediaPlaybackSource const& source) const;
};
template <> struct consume<Windows::Media::Playback::IMediaEnginePlaybackSource> { template <typename D> using type = consume_Windows_Media_Playback_IMediaEnginePlaybackSource<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaItemDisplayProperties
{
    Windows::Media::MediaPlaybackType Type() const;
    void Type(Windows::Media::MediaPlaybackType const& value) const;
    Windows::Media::MusicDisplayProperties MusicProperties() const;
    Windows::Media::VideoDisplayProperties VideoProperties() const;
    Windows::Storage::Streams::RandomAccessStreamReference Thumbnail() const;
    void Thumbnail(Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
    void ClearAll() const;
};
template <> struct consume<Windows::Media::Playback::IMediaItemDisplayProperties> { template <typename D> using type = consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManager
{
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    Windows::Media::Playback::MediaPlayer MediaPlayer() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior PlayBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior PauseBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior NextBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior PreviousBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior FastForwardBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior RewindBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior ShuffleBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior AutoRepeatModeBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior PositionBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior RateBehavior() const;
    event_token PlayReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> const& handler) const;
    using PlayReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    PlayReceived_revoker PlayReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> const& handler) const;
    void PlayReceived(event_token const& token) const;
    event_token PauseReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> const& handler) const;
    using PauseReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    PauseReceived_revoker PauseReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> const& handler) const;
    void PauseReceived(event_token const& token) const;
    event_token NextReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> const& handler) const;
    using NextReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    NextReceived_revoker NextReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> const& handler) const;
    void NextReceived(event_token const& token) const;
    event_token PreviousReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> const& handler) const;
    using PreviousReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    PreviousReceived_revoker PreviousReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> const& handler) const;
    void PreviousReceived(event_token const& token) const;
    event_token FastForwardReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> const& handler) const;
    using FastForwardReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    FastForwardReceived_revoker FastForwardReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> const& handler) const;
    void FastForwardReceived(event_token const& token) const;
    event_token RewindReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> const& handler) const;
    using RewindReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    RewindReceived_revoker RewindReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> const& handler) const;
    void RewindReceived(event_token const& token) const;
    event_token ShuffleReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> const& handler) const;
    using ShuffleReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    ShuffleReceived_revoker ShuffleReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> const& handler) const;
    void ShuffleReceived(event_token const& token) const;
    event_token AutoRepeatModeReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> const& handler) const;
    using AutoRepeatModeReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    AutoRepeatModeReceived_revoker AutoRepeatModeReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> const& handler) const;
    void AutoRepeatModeReceived(event_token const& token) const;
    event_token PositionReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> const& handler) const;
    using PositionReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    PositionReceived_revoker PositionReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> const& handler) const;
    void PositionReceived(event_token const& token) const;
    event_token RateReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> const& handler) const;
    using RateReceived_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager>;
    RateReceived_revoker RateReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> const& handler) const;
    void RateReceived(event_token const& token) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManager> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Media::MediaPlaybackAutoRepeatMode AutoRepeatMode() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior
{
    Windows::Media::Playback::MediaPlaybackCommandManager CommandManager() const;
    bool IsEnabled() const;
    Windows::Media::Playback::MediaCommandEnablingRule EnablingRule() const;
    void EnablingRule(Windows::Media::Playback::MediaCommandEnablingRule const& value) const;
    event_token IsEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::Foundation::IInspectable> const& handler) const;
    using IsEnabledChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>;
    IsEnabledChanged_revoker IsEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::Foundation::IInspectable> const& handler) const;
    void IsEnabledChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerNextReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerNextReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPauseReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPauseReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPlayReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPlayReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::TimeSpan Position() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPreviousReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPreviousReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    double PlaybackRate() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRewindReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRewindReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    bool IsShuffleRequested() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItem
{
    event_token AudioTracksChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
    using AudioTracksChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackItem>;
    AudioTracksChanged_revoker AudioTracksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
    void AudioTracksChanged(event_token const& token) const;
    event_token VideoTracksChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
    using VideoTracksChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackItem>;
    VideoTracksChanged_revoker VideoTracksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
    void VideoTracksChanged(event_token const& token) const;
    event_token TimedMetadataTracksChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
    using TimedMetadataTracksChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackItem>;
    TimedMetadataTracksChanged_revoker TimedMetadataTracksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
    void TimedMetadataTracksChanged(event_token const& token) const;
    Windows::Media::Core::MediaSource Source() const;
    Windows::Media::Playback::MediaPlaybackAudioTrackList AudioTracks() const;
    Windows::Media::Playback::MediaPlaybackVideoTrackList VideoTracks() const;
    Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList TimedMetadataTracks() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItem> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItem<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItem2
{
    Windows::Media::Playback::MediaBreakSchedule BreakSchedule() const;
    Windows::Foundation::TimeSpan StartTime() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> DurationLimit() const;
    bool CanSkip() const;
    void CanSkip(bool value) const;
    Windows::Media::Playback::MediaItemDisplayProperties GetDisplayProperties() const;
    void ApplyDisplayProperties(Windows::Media::Playback::MediaItemDisplayProperties const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItem2> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItem2<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItem3
{
    bool IsDisabledInPlaybackList() const;
    void IsDisabledInPlaybackList(bool value) const;
    double TotalDownloadProgress() const;
    Windows::Media::Playback::AutoLoadedDisplayPropertyKind AutoLoadedDisplayProperties() const;
    void AutoLoadedDisplayProperties(Windows::Media::Playback::AutoLoadedDisplayPropertyKind const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItem3> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItem3<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItemError
{
    Windows::Media::Playback::MediaPlaybackItemErrorCode ErrorCode() const;
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItemError> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemError<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItemFactory
{
    Windows::Media::Playback::MediaPlaybackItem Create(Windows::Media::Core::MediaSource const& source) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItemFactory> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemFactory<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItemFactory2
{
    Windows::Media::Playback::MediaPlaybackItem CreateWithStartTime(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime) const;
    Windows::Media::Playback::MediaPlaybackItem CreateWithStartTimeAndDurationLimit(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime, Windows::Foundation::TimeSpan const& durationLimit) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItemFactory2> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemFactory2<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItemFailedEventArgs
{
    Windows::Media::Playback::MediaPlaybackItem Item() const;
    Windows::Media::Playback::MediaPlaybackItemError Error() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItemOpenedEventArgs
{
    Windows::Media::Playback::MediaPlaybackItem Item() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemOpenedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackItemStatics
{
    Windows::Media::Playback::MediaPlaybackItem FindFromMediaSource(Windows::Media::Core::MediaSource const& source) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackItemStatics> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemStatics<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackList
{
    event_token ItemFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> const& handler) const;
    using ItemFailed_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackList>;
    ItemFailed_revoker ItemFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> const& handler) const;
    void ItemFailed(event_token const& token) const;
    event_token CurrentItemChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> const& handler) const;
    using CurrentItemChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackList>;
    CurrentItemChanged_revoker CurrentItemChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> const& handler) const;
    void CurrentItemChanged(event_token const& token) const;
    event_token ItemOpened(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> const& handler) const;
    using ItemOpened_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackList>;
    ItemOpened_revoker ItemOpened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> const& handler) const;
    void ItemOpened(event_token const& token) const;
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Playback::MediaPlaybackItem> Items() const;
    bool AutoRepeatEnabled() const;
    void AutoRepeatEnabled(bool value) const;
    bool ShuffleEnabled() const;
    void ShuffleEnabled(bool value) const;
    Windows::Media::Playback::MediaPlaybackItem CurrentItem() const;
    uint32_t CurrentItemIndex() const;
    Windows::Media::Playback::MediaPlaybackItem MoveNext() const;
    Windows::Media::Playback::MediaPlaybackItem MovePrevious() const;
    Windows::Media::Playback::MediaPlaybackItem MoveTo(uint32_t itemIndex) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackList> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackList<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackList2
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> MaxPrefetchTime() const;
    void MaxPrefetchTime(optional<Windows::Foundation::TimeSpan> const& value) const;
    Windows::Media::Playback::MediaPlaybackItem StartingItem() const;
    void StartingItem(Windows::Media::Playback::MediaPlaybackItem const& value) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaPlaybackItem> ShuffledItems() const;
    void SetShuffledItems(param::iterable<Windows::Media::Playback::MediaPlaybackItem> const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackList2> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackList2<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackList3
{
    Windows::Foundation::IReference<uint32_t> MaxPlayedItemsToKeepOpen() const;
    void MaxPlayedItemsToKeepOpen(optional<uint32_t> const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackList3> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackList3<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackSession
{
    event_token PlaybackStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using PlaybackStateChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    PlaybackStateChanged_revoker PlaybackStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void PlaybackStateChanged(event_token const& token) const;
    event_token PlaybackRateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using PlaybackRateChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    PlaybackRateChanged_revoker PlaybackRateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void PlaybackRateChanged(event_token const& token) const;
    event_token SeekCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using SeekCompleted_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    SeekCompleted_revoker SeekCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void SeekCompleted(event_token const& token) const;
    event_token BufferingStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using BufferingStarted_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    BufferingStarted_revoker BufferingStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void BufferingStarted(event_token const& token) const;
    event_token BufferingEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using BufferingEnded_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    BufferingEnded_revoker BufferingEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void BufferingEnded(event_token const& token) const;
    event_token BufferingProgressChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using BufferingProgressChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    BufferingProgressChanged_revoker BufferingProgressChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void BufferingProgressChanged(event_token const& token) const;
    event_token DownloadProgressChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using DownloadProgressChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    DownloadProgressChanged_revoker DownloadProgressChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void DownloadProgressChanged(event_token const& token) const;
    event_token NaturalDurationChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using NaturalDurationChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    NaturalDurationChanged_revoker NaturalDurationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void NaturalDurationChanged(event_token const& token) const;
    event_token PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using PositionChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    PositionChanged_revoker PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void PositionChanged(event_token const& token) const;
    event_token NaturalVideoSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using NaturalVideoSizeChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession>;
    NaturalVideoSizeChanged_revoker NaturalVideoSizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void NaturalVideoSizeChanged(event_token const& token) const;
    Windows::Media::Playback::MediaPlayer MediaPlayer() const;
    Windows::Foundation::TimeSpan NaturalDuration() const;
    Windows::Foundation::TimeSpan Position() const;
    void Position(Windows::Foundation::TimeSpan const& value) const;
    Windows::Media::Playback::MediaPlaybackState PlaybackState() const;
    bool CanSeek() const;
    bool CanPause() const;
    bool IsProtected() const;
    double PlaybackRate() const;
    void PlaybackRate(double value) const;
    double BufferingProgress() const;
    double DownloadProgress() const;
    uint32_t NaturalVideoHeight() const;
    uint32_t NaturalVideoWidth() const;
    Windows::Foundation::Rect NormalizedSourceRect() const;
    void NormalizedSourceRect(Windows::Foundation::Rect const& value) const;
    Windows::Media::MediaProperties::StereoscopicVideoPackingMode StereoscopicVideoPackingMode() const;
    void StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackSession> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSession<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackSession2
{
    event_token BufferedRangesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using BufferedRangesChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession2>;
    BufferedRangesChanged_revoker BufferedRangesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void BufferedRangesChanged(event_token const& token) const;
    event_token PlayedRangesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using PlayedRangesChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession2>;
    PlayedRangesChanged_revoker PlayedRangesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void PlayedRangesChanged(event_token const& token) const;
    event_token SeekableRangesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using SeekableRangesChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession2>;
    SeekableRangesChanged_revoker SeekableRangesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void SeekableRangesChanged(event_token const& token) const;
    event_token SupportedPlaybackRatesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    using SupportedPlaybackRatesChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackSession2>;
    SupportedPlaybackRatesChanged_revoker SupportedPlaybackRatesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const;
    void SupportedPlaybackRatesChanged(event_token const& token) const;
    Windows::Media::Playback::MediaPlaybackSphericalVideoProjection SphericalVideoProjection() const;
    bool IsMirroring() const;
    void IsMirroring(bool value) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> GetBufferedRanges() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> GetPlayedRanges() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> GetSeekableRanges() const;
    bool IsSupportedPlaybackRateRange(double rate1, double rate2) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackSession2> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSession2<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackSource
{
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackSource> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSource<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection
{
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    Windows::Media::MediaProperties::SphericalVideoFrameFormat FrameFormat() const;
    void FrameFormat(Windows::Media::MediaProperties::SphericalVideoFrameFormat const& value) const;
    double HorizontalFieldOfViewInDegrees() const;
    void HorizontalFieldOfViewInDegrees(double value) const;
    Windows::Foundation::Numerics::quaternion ViewOrientation() const;
    void ViewOrientation(Windows::Foundation::Numerics::quaternion const& value) const;
    Windows::Media::Playback::SphericalVideoProjectionMode ProjectionMode() const;
    void ProjectionMode(Windows::Media::Playback::SphericalVideoProjectionMode const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList
{
    event_token PresentationModeChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> const& handler) const;
    using PresentationModeChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>;
    PresentationModeChanged_revoker PresentationModeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> const& handler) const;
    void PresentationModeChanged(event_token const& token) const;
    Windows::Media::Playback::TimedMetadataTrackPresentationMode GetPresentationMode(uint32_t index) const;
    void SetPresentationMode(uint32_t index, Windows::Media::Playback::TimedMetadataTrackPresentationMode const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayer
{
    bool AutoPlay() const;
    void AutoPlay(bool value) const;
    [[deprecated("Use PlaybackSession.NaturalDuration instead of NaturalDuration.  For more info, see MSDN.")]] Windows::Foundation::TimeSpan NaturalDuration() const;
    [[deprecated("Use PlaybackSession.Position instead of Position.  For more info, see MSDN.")]] Windows::Foundation::TimeSpan Position() const;
    [[deprecated("Use PlaybackSession.Position instead of Position.  For more info, see MSDN.")]] void Position(Windows::Foundation::TimeSpan const& value) const;
    [[deprecated("Use PlaybackSession.BufferingProgress instead of BufferingProgress.  For more info, see MSDN.")]] double BufferingProgress() const;
    [[deprecated("Use PlaybackSession.State instead of CurrentState.  For more info, see MSDN.")]] Windows::Media::Playback::MediaPlayerState CurrentState() const;
    [[deprecated("Use PlaybackSession.CanSeek instead of CanSeek.  For more info, see MSDN.")]] bool CanSeek() const;
    [[deprecated("Use PlaybackSession.CanPause instead of CanPause.  For more info, see MSDN.")]] bool CanPause() const;
    bool IsLoopingEnabled() const;
    void IsLoopingEnabled(bool value) const;
    [[deprecated("Use PlaybackSession.IsProtected instead of IsProtected.  For more info, see MSDN.")]] bool IsProtected() const;
    bool IsMuted() const;
    void IsMuted(bool value) const;
    [[deprecated("Use PlaybackSession.PlaybackRate instead of PlaybackRate.  For more info, see MSDN.")]] double PlaybackRate() const;
    [[deprecated("Use PlaybackSession.PlaybackRate instead of PlaybackRate.  For more info, see MSDN.")]] void PlaybackRate(double value) const;
    double Volume() const;
    void Volume(double value) const;
    [[deprecated("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")]] Windows::Media::Playback::PlaybackMediaMarkerSequence PlaybackMediaMarkers() const;
    event_token MediaOpened(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using MediaOpened_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    MediaOpened_revoker MediaOpened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    void MediaOpened(event_token const& token) const;
    event_token MediaEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using MediaEnded_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    MediaEnded_revoker MediaEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    void MediaEnded(event_token const& token) const;
    event_token MediaFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> const& value) const;
    using MediaFailed_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    MediaFailed_revoker MediaFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> const& value) const;
    void MediaFailed(event_token const& token) const;
    [[deprecated("Use PlaybackSession.PlaybackStateChanged instead of CurrentStateChanged.  For more info, see MSDN.")]] event_token CurrentStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using CurrentStateChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    [[deprecated("Use PlaybackSession.PlaybackStateChanged instead of CurrentStateChanged.  For more info, see MSDN.")]] CurrentStateChanged_revoker CurrentStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    [[deprecated("Use PlaybackSession.PlaybackStateChanged instead of CurrentStateChanged.  For more info, see MSDN.")]] void CurrentStateChanged(event_token const& token) const;
    [[deprecated("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")]] event_token PlaybackMediaMarkerReached(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> const& value) const;
    using PlaybackMediaMarkerReached_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    [[deprecated("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")]] PlaybackMediaMarkerReached_revoker PlaybackMediaMarkerReached(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> const& value) const;
    [[deprecated("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")]] void PlaybackMediaMarkerReached(event_token const& token) const;
    [[deprecated("Use PlaybackSession.PlaybackRateChanged instead of MediaPlayerRateChanged.  For more info, see MSDN.")]] event_token MediaPlayerRateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> const& value) const;
    using MediaPlayerRateChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    [[deprecated("Use PlaybackSession.PlaybackRateChanged instead of MediaPlayerRateChanged.  For more info, see MSDN.")]] MediaPlayerRateChanged_revoker MediaPlayerRateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> const& value) const;
    [[deprecated("Use PlaybackSession.PlaybackRateChanged instead of MediaPlayerRateChanged.  For more info, see MSDN.")]] void MediaPlayerRateChanged(event_token const& token) const;
    event_token VolumeChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using VolumeChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    VolumeChanged_revoker VolumeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    void VolumeChanged(event_token const& token) const;
    [[deprecated("Use PlaybackSession.SeekCompleted instead of SeekCompleted.  For more info, see MSDN.")]] event_token SeekCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using SeekCompleted_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    [[deprecated("Use PlaybackSession.SeekCompleted instead of SeekCompleted.  For more info, see MSDN.")]] SeekCompleted_revoker SeekCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    [[deprecated("Use PlaybackSession.SeekCompleted instead of SeekCompleted.  For more info, see MSDN.")]] void SeekCompleted(event_token const& token) const;
    [[deprecated("Use PlaybackSession.BufferingStarted instead of BufferingStarted.  For more info, see MSDN.")]] event_token BufferingStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using BufferingStarted_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    [[deprecated("Use PlaybackSession.BufferingStarted instead of BufferingStarted.  For more info, see MSDN.")]] BufferingStarted_revoker BufferingStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    [[deprecated("Use PlaybackSession.BufferingStarted instead of BufferingStarted.  For more info, see MSDN.")]] void BufferingStarted(event_token const& token) const;
    [[deprecated("Use PlaybackSession.BufferingEnded instead of BufferingEnded.  For more info, see MSDN.")]] event_token BufferingEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using BufferingEnded_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer>;
    [[deprecated("Use PlaybackSession.BufferingEnded instead of BufferingEnded.  For more info, see MSDN.")]] BufferingEnded_revoker BufferingEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    [[deprecated("Use PlaybackSession.BufferingEnded instead of BufferingEnded.  For more info, see MSDN.")]] void BufferingEnded(event_token const& token) const;
    void Play() const;
    void Pause() const;
    [[deprecated("Use Source instead of SetUriSource.  For more info, see MSDN.")]] void SetUriSource(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayer> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayer2
{
    Windows::Media::SystemMediaTransportControls SystemMediaTransportControls() const;
    Windows::Media::Playback::MediaPlayerAudioCategory AudioCategory() const;
    void AudioCategory(Windows::Media::Playback::MediaPlayerAudioCategory const& value) const;
    Windows::Media::Playback::MediaPlayerAudioDeviceType AudioDeviceType() const;
    void AudioDeviceType(Windows::Media::Playback::MediaPlayerAudioDeviceType const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayer2> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer2<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayer3
{
    event_token IsMutedChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using IsMutedChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer3>;
    IsMutedChanged_revoker IsMutedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    void IsMutedChanged(event_token const& token) const;
    event_token SourceChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using SourceChanged_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer3>;
    SourceChanged_revoker SourceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    void SourceChanged(event_token const& token) const;
    double AudioBalance() const;
    void AudioBalance(double value) const;
    bool RealTimePlayback() const;
    void RealTimePlayback(bool value) const;
    Windows::Media::Playback::StereoscopicVideoRenderMode StereoscopicVideoRenderMode() const;
    void StereoscopicVideoRenderMode(Windows::Media::Playback::StereoscopicVideoRenderMode const& value) const;
    Windows::Media::Playback::MediaBreakManager BreakManager() const;
    Windows::Media::Playback::MediaPlaybackCommandManager CommandManager() const;
    Windows::Devices::Enumeration::DeviceInformation AudioDevice() const;
    void AudioDevice(Windows::Devices::Enumeration::DeviceInformation const& value) const;
    Windows::Media::MediaTimelineController TimelineController() const;
    void TimelineController(Windows::Media::MediaTimelineController const& value) const;
    Windows::Foundation::TimeSpan TimelineControllerPositionOffset() const;
    void TimelineControllerPositionOffset(Windows::Foundation::TimeSpan const& value) const;
    Windows::Media::Playback::MediaPlaybackSession PlaybackSession() const;
    void StepForwardOneFrame() const;
    void StepBackwardOneFrame() const;
    Windows::Media::Casting::CastingSource GetAsCastingSource() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayer3> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer3<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayer4
{
    void SetSurfaceSize(Windows::Foundation::Size const& size) const;
    Windows::Media::Playback::MediaPlayerSurface GetSurface(Windows::UI::Composition::Compositor const& compositor) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayer4> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer4<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayer5
{
    event_token VideoFrameAvailable(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    using VideoFrameAvailable_revoker = event_revoker<Windows::Media::Playback::IMediaPlayer5>;
    VideoFrameAvailable_revoker VideoFrameAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const;
    void VideoFrameAvailable(event_token const& token) const;
    bool IsVideoFrameServerEnabled() const;
    void IsVideoFrameServerEnabled(bool value) const;
    void CopyFrameToVideoSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination) const;
    void CopyFrameToVideoSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination, Windows::Foundation::Rect const& targetRectangle) const;
    void CopyFrameToStereoscopicVideoSurfaces(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destinationLeftEye, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destinationRightEye) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayer5> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer5<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayerDataReceivedEventArgs
{
    Windows::Foundation::Collections::ValueSet Data() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerDataReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayerEffects
{
    void AddAudioEffect(param::hstring const& activatableClassId, bool effectOptional, Windows::Foundation::Collections::IPropertySet const& configuration) const;
    void RemoveAllEffects() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayerEffects> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerEffects<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayerEffects2
{
    void AddVideoEffect(param::hstring const& activatableClassId, bool effectOptional, Windows::Foundation::Collections::IPropertySet const& effectConfiguration) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayerEffects2> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerEffects2<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayerFailedEventArgs
{
    Windows::Media::Playback::MediaPlayerError Error() const;
    HRESULT ExtendedErrorCode() const;
    hstring ErrorMessage() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayerFailedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayerRateChangedEventArgs
{
    double NewRate() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayerRateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerRateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayerSource
{
    Windows::Media::Protection::MediaProtectionManager ProtectionManager() const;
    void ProtectionManager(Windows::Media::Protection::MediaProtectionManager const& value) const;
    [[deprecated("Use Source instead of SetFileSource.  For more info, see MSDN.")]] void SetFileSource(Windows::Storage::IStorageFile const& file) const;
    [[deprecated("Use Source instead of SetStreamSource.  For more info, see MSDN.")]] void SetStreamSource(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    [[deprecated("Use Source instead of SetMediaSource.  For more info, see MSDN.")]] void SetMediaSource(Windows::Media::Core::IMediaSource const& source) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayerSource> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerSource<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayerSource2
{
    Windows::Media::Playback::IMediaPlaybackSource Source() const;
    void Source(Windows::Media::Playback::IMediaPlaybackSource const& value) const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayerSource2> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerSource2<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IMediaPlayerSurface
{
    Windows::UI::Composition::ICompositionSurface CompositionSurface() const;
    Windows::UI::Composition::Compositor Compositor() const;
    Windows::Media::Playback::MediaPlayer MediaPlayer() const;
};
template <> struct consume<Windows::Media::Playback::IMediaPlayerSurface> { template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerSurface<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IPlaybackMediaMarker
{
    Windows::Foundation::TimeSpan Time() const;
    hstring MediaMarkerType() const;
    hstring Text() const;
};
template <> struct consume<Windows::Media::Playback::IPlaybackMediaMarker> { template <typename D> using type = consume_Windows_Media_Playback_IPlaybackMediaMarker<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IPlaybackMediaMarkerFactory
{
    Windows::Media::Playback::PlaybackMediaMarker CreateFromTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Media::Playback::PlaybackMediaMarker Create(Windows::Foundation::TimeSpan const& value, param::hstring const& mediaMarketType, param::hstring const& text) const;
};
template <> struct consume<Windows::Media::Playback::IPlaybackMediaMarkerFactory> { template <typename D> using type = consume_Windows_Media_Playback_IPlaybackMediaMarkerFactory<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IPlaybackMediaMarkerReachedEventArgs
{
    Windows::Media::Playback::PlaybackMediaMarker PlaybackMediaMarker() const;
};
template <> struct consume<Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_IPlaybackMediaMarkerReachedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Playback_IPlaybackMediaMarkerSequence
{
    uint32_t Size() const;
    void Insert(Windows::Media::Playback::PlaybackMediaMarker const& value) const;
    void Clear() const;
};
template <> struct consume<Windows::Media::Playback::IPlaybackMediaMarkerSequence> { template <typename D> using type = consume_Windows_Media_Playback_IPlaybackMediaMarkerSequence<D>; };

template <typename D>
struct consume_Windows_Media_Playback_ITimedMetadataPresentationModeChangedEventArgs
{
    Windows::Media::Core::TimedMetadataTrack Track() const;
    Windows::Media::Playback::TimedMetadataTrackPresentationMode OldPresentationMode() const;
    Windows::Media::Playback::TimedMetadataTrackPresentationMode NewPresentationMode() const;
};
template <> struct consume<Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Playback_ITimedMetadataPresentationModeChangedEventArgs<D>; };

template <> struct abi<Windows::Media::Playback::IBackgroundMediaPlayerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** player) = 0;
    virtual HRESULT __stdcall add_MessageReceivedFromBackground(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MessageReceivedFromBackground(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_MessageReceivedFromForeground(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MessageReceivedFromForeground(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall SendMessageToBackground(::IUnknown* value) = 0;
    virtual HRESULT __stdcall SendMessageToForeground(::IUnknown* value) = 0;
    virtual HRESULT __stdcall IsMediaPlaying(bool* isMediaPlaying) = 0;
    virtual HRESULT __stdcall Shutdown() = 0;
};};

template <> struct abi<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NewItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OldItem(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reason(abi_t<Windows::Media::Playback::MediaPlaybackItemChangedReason>* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaBreak>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PlaybackList(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PresentationPosition(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InsertionMethod(abi_t<Windows::Media::Playback::MediaBreakInsertionMethod>* value) = 0;
    virtual HRESULT __stdcall get_CustomProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanStart(bool* value) = 0;
    virtual HRESULT __stdcall put_CanStart(bool value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaBreakEndedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MediaBreak(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaBreakFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Media::Playback::MediaBreakInsertionMethod> insertionMethod, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithPresentationPosition(abi_t<Windows::Media::Playback::MediaBreakInsertionMethod> insertionMethod, abi_t<Windows::Foundation::TimeSpan> presentationPosition, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaBreakManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_BreaksSeekedOver(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BreaksSeekedOver(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BreakStarted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BreakStarted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BreakEnded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BreakEnded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BreakSkipped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BreakSkipped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_CurrentBreak(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PlaybackSession(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PlayBreak(::IUnknown* value) = 0;
    virtual HRESULT __stdcall SkipCurrentBreak() = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaBreakSchedule>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ScheduleChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ScheduleChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall InsertMidrollBreak(::IUnknown* mediaBreak) = 0;
    virtual HRESULT __stdcall RemoveMidrollBreak(::IUnknown* mediaBreak) = 0;
    virtual HRESULT __stdcall get_MidrollBreaks(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PrerollBreak(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PrerollBreak(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PostrollBreak(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PostrollBreak(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PlaybackItem(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SeekedOverBreaks(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OldPosition(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_NewPosition(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaBreakSkippedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MediaBreak(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaBreakStartedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MediaBreak(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaEnginePlaybackSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetPlaybackSource(::IUnknown* source) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaItemDisplayProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Media::MediaPlaybackType>* value) = 0;
    virtual HRESULT __stdcall put_Type(abi_t<Windows::Media::MediaPlaybackType> value) = 0;
    virtual HRESULT __stdcall get_MusicProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall ClearAll() = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_MediaPlayer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PlayBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PauseBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NextBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PreviousBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FastForwardBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RewindBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ShuffleBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AutoRepeatModeBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PositionBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RateBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_PlayReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PlayReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PauseReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PauseReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_NextReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NextReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PreviousReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PreviousReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_FastForwardReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FastForwardReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RewindReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RewindReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ShuffleReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ShuffleReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AutoRepeatModeReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AutoRepeatModeReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PositionReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PositionReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RateReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RateReceived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_AutoRepeatMode(abi_t<Windows::Media::MediaPlaybackAutoRepeatMode>* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CommandManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_EnablingRule(abi_t<Windows::Media::Playback::MediaCommandEnablingRule>* value) = 0;
    virtual HRESULT __stdcall put_EnablingRule(abi_t<Windows::Media::Playback::MediaCommandEnablingRule> value) = 0;
    virtual HRESULT __stdcall add_IsEnabledChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_IsEnabledChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_PlaybackRate(double* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_IsShuffleRequested(bool* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_AudioTracksChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AudioTracksChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VideoTracksChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoTracksChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_TimedMetadataTracksChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_TimedMetadataTracksChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioTracks(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoTracks(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TimedMetadataTracks(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItem2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BreakSchedule(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_DurationLimit(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanSkip(bool* value) = 0;
    virtual HRESULT __stdcall put_CanSkip(bool value) = 0;
    virtual HRESULT __stdcall GetDisplayProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ApplyDisplayProperties(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItem3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsDisabledInPlaybackList(bool* value) = 0;
    virtual HRESULT __stdcall put_IsDisabledInPlaybackList(bool value) = 0;
    virtual HRESULT __stdcall get_TotalDownloadProgress(double* value) = 0;
    virtual HRESULT __stdcall get_AutoLoadedDisplayProperties(abi_t<Windows::Media::Playback::AutoLoadedDisplayPropertyKind>* value) = 0;
    virtual HRESULT __stdcall put_AutoLoadedDisplayProperties(abi_t<Windows::Media::Playback::AutoLoadedDisplayPropertyKind> value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItemError>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ErrorCode(abi_t<Windows::Media::Playback::MediaPlaybackItemErrorCode>* value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItemFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* source, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItemFactory2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithStartTime(::IUnknown* source, abi_t<Windows::Foundation::TimeSpan> startTime, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithStartTimeAndDurationLimit(::IUnknown* source, abi_t<Windows::Foundation::TimeSpan> startTime, abi_t<Windows::Foundation::TimeSpan> durationLimit, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Item(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Error(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Item(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackItemStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindFromMediaSource(::IUnknown* source, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ItemFailed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ItemFailed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CurrentItemChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CurrentItemChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ItemOpened(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ItemOpened(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Items(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AutoRepeatEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoRepeatEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ShuffleEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_ShuffleEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_CurrentItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CurrentItemIndex(uint32_t* value) = 0;
    virtual HRESULT __stdcall MoveNext(::IUnknown** item) = 0;
    virtual HRESULT __stdcall MovePrevious(::IUnknown** item) = 0;
    virtual HRESULT __stdcall MoveTo(uint32_t itemIndex, ::IUnknown** item) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackList2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxPrefetchTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxPrefetchTime(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StartingItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StartingItem(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ShuffledItems(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetShuffledItems(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackList3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxPlayedItemsToKeepOpen(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxPlayedItemsToKeepOpen(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PlaybackStateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PlaybackStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PlaybackRateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PlaybackRateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SeekCompleted(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SeekCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BufferingStarted(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BufferingStarted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BufferingEnded(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BufferingEnded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BufferingProgressChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BufferingProgressChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DownloadProgressChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DownloadProgressChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_NaturalDurationChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NaturalDurationChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PositionChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PositionChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_NaturalVideoSizeChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NaturalVideoSizeChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_MediaPlayer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NaturalDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Position(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_PlaybackState(abi_t<Windows::Media::Playback::MediaPlaybackState>* value) = 0;
    virtual HRESULT __stdcall get_CanSeek(bool* value) = 0;
    virtual HRESULT __stdcall get_CanPause(bool* value) = 0;
    virtual HRESULT __stdcall get_IsProtected(bool* value) = 0;
    virtual HRESULT __stdcall get_PlaybackRate(double* value) = 0;
    virtual HRESULT __stdcall put_PlaybackRate(double value) = 0;
    virtual HRESULT __stdcall get_BufferingProgress(double* value) = 0;
    virtual HRESULT __stdcall get_DownloadProgress(double* value) = 0;
    virtual HRESULT __stdcall get_NaturalVideoHeight(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_NaturalVideoWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_NormalizedSourceRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall put_NormalizedSourceRect(abi_t<Windows::Foundation::Rect> value) = 0;
    virtual HRESULT __stdcall get_StereoscopicVideoPackingMode(abi_t<Windows::Media::MediaProperties::StereoscopicVideoPackingMode>* value) = 0;
    virtual HRESULT __stdcall put_StereoscopicVideoPackingMode(abi_t<Windows::Media::MediaProperties::StereoscopicVideoPackingMode> value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackSession2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_BufferedRangesChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BufferedRangesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PlayedRangesChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PlayedRangesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SeekableRangesChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SeekableRangesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SupportedPlaybackRatesChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SupportedPlaybackRatesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_SphericalVideoProjection(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsMirroring(bool* value) = 0;
    virtual HRESULT __stdcall put_IsMirroring(bool value) = 0;
    virtual HRESULT __stdcall GetBufferedRanges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetPlayedRanges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetSeekableRanges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall IsSupportedPlaybackRateRange(double rate1, double rate2, bool* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackSource>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_FrameFormat(abi_t<Windows::Media::MediaProperties::SphericalVideoFrameFormat>* value) = 0;
    virtual HRESULT __stdcall put_FrameFormat(abi_t<Windows::Media::MediaProperties::SphericalVideoFrameFormat> value) = 0;
    virtual HRESULT __stdcall get_HorizontalFieldOfViewInDegrees(double* value) = 0;
    virtual HRESULT __stdcall put_HorizontalFieldOfViewInDegrees(double value) = 0;
    virtual HRESULT __stdcall get_ViewOrientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) = 0;
    virtual HRESULT __stdcall put_ViewOrientation(abi_t<Windows::Foundation::Numerics::quaternion> value) = 0;
    virtual HRESULT __stdcall get_ProjectionMode(abi_t<Windows::Media::Playback::SphericalVideoProjectionMode>* value) = 0;
    virtual HRESULT __stdcall put_ProjectionMode(abi_t<Windows::Media::Playback::SphericalVideoProjectionMode> value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PresentationModeChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PresentationModeChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetPresentationMode(uint32_t index, abi_t<Windows::Media::Playback::TimedMetadataTrackPresentationMode>* value) = 0;
    virtual HRESULT __stdcall SetPresentationMode(uint32_t index, abi_t<Windows::Media::Playback::TimedMetadataTrackPresentationMode> value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AutoPlay(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoPlay(bool value) = 0;
    virtual HRESULT __stdcall get_NaturalDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Position(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_BufferingProgress(double* value) = 0;
    virtual HRESULT __stdcall get_CurrentState(abi_t<Windows::Media::Playback::MediaPlayerState>* value) = 0;
    virtual HRESULT __stdcall get_CanSeek(bool* value) = 0;
    virtual HRESULT __stdcall get_CanPause(bool* value) = 0;
    virtual HRESULT __stdcall get_IsLoopingEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsLoopingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsProtected(bool* value) = 0;
    virtual HRESULT __stdcall get_IsMuted(bool* value) = 0;
    virtual HRESULT __stdcall put_IsMuted(bool value) = 0;
    virtual HRESULT __stdcall get_PlaybackRate(double* value) = 0;
    virtual HRESULT __stdcall put_PlaybackRate(double value) = 0;
    virtual HRESULT __stdcall get_Volume(double* value) = 0;
    virtual HRESULT __stdcall put_Volume(double value) = 0;
    virtual HRESULT __stdcall get_PlaybackMediaMarkers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_MediaOpened(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MediaOpened(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_MediaEnded(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MediaEnded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_MediaFailed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MediaFailed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CurrentStateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CurrentStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PlaybackMediaMarkerReached(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PlaybackMediaMarkerReached(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_MediaPlayerRateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MediaPlayerRateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VolumeChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VolumeChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SeekCompleted(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SeekCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BufferingStarted(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BufferingStarted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BufferingEnded(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BufferingEnded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Play() = 0;
    virtual HRESULT __stdcall Pause() = 0;
    virtual HRESULT __stdcall SetUriSource(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SystemMediaTransportControls(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioCategory(abi_t<Windows::Media::Playback::MediaPlayerAudioCategory>* value) = 0;
    virtual HRESULT __stdcall put_AudioCategory(abi_t<Windows::Media::Playback::MediaPlayerAudioCategory> value) = 0;
    virtual HRESULT __stdcall get_AudioDeviceType(abi_t<Windows::Media::Playback::MediaPlayerAudioDeviceType>* value) = 0;
    virtual HRESULT __stdcall put_AudioDeviceType(abi_t<Windows::Media::Playback::MediaPlayerAudioDeviceType> value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayer3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_IsMutedChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_IsMutedChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SourceChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SourceChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_AudioBalance(double* value) = 0;
    virtual HRESULT __stdcall put_AudioBalance(double value) = 0;
    virtual HRESULT __stdcall get_RealTimePlayback(bool* value) = 0;
    virtual HRESULT __stdcall put_RealTimePlayback(bool value) = 0;
    virtual HRESULT __stdcall get_StereoscopicVideoRenderMode(abi_t<Windows::Media::Playback::StereoscopicVideoRenderMode>* value) = 0;
    virtual HRESULT __stdcall put_StereoscopicVideoRenderMode(abi_t<Windows::Media::Playback::StereoscopicVideoRenderMode> value) = 0;
    virtual HRESULT __stdcall get_BreakManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CommandManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioDevice(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AudioDevice(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TimelineController(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TimelineController(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TimelineControllerPositionOffset(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_TimelineControllerPositionOffset(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_PlaybackSession(::IUnknown** value) = 0;
    virtual HRESULT __stdcall StepForwardOneFrame() = 0;
    virtual HRESULT __stdcall StepBackwardOneFrame() = 0;
    virtual HRESULT __stdcall GetAsCastingSource(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayer4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetSurfaceSize(abi_t<Windows::Foundation::Size> size) = 0;
    virtual HRESULT __stdcall GetSurface(::IUnknown* compositor, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayer5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_VideoFrameAvailable(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoFrameAvailable(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_IsVideoFrameServerEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsVideoFrameServerEnabled(bool value) = 0;
    virtual HRESULT __stdcall CopyFrameToVideoSurface(::IUnknown* destination) = 0;
    virtual HRESULT __stdcall CopyFrameToVideoSurfaceWithTargetRectangle(::IUnknown* destination, abi_t<Windows::Foundation::Rect> targetRectangle) = 0;
    virtual HRESULT __stdcall CopyFrameToStereoscopicVideoSurfaces(::IUnknown* destinationLeftEye, ::IUnknown* destinationRightEye) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayerEffects>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddAudioEffect(HSTRING activatableClassId, bool effectOptional, ::IUnknown* configuration) = 0;
    virtual HRESULT __stdcall RemoveAllEffects() = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayerEffects2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddVideoEffect(HSTRING activatableClassId, bool effectOptional, ::IUnknown* effectConfiguration) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayerFailedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Media::Playback::MediaPlayerError>* value) = 0;
    virtual HRESULT __stdcall get_ExtendedErrorCode(abi_t<HRESULT>* value) = 0;
    virtual HRESULT __stdcall get_ErrorMessage(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NewRate(double* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayerSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProtectionManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ProtectionManager(::IUnknown* value) = 0;
    virtual HRESULT __stdcall SetFileSource(::IUnknown* file) = 0;
    virtual HRESULT __stdcall SetStreamSource(::IUnknown* stream) = 0;
    virtual HRESULT __stdcall SetMediaSource(::IUnknown* source) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayerSource2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IMediaPlayerSurface>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CompositionSurface(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Compositor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MediaPlayer(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IPlaybackMediaMarker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Time(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_MediaMarkerType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IPlaybackMediaMarkerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromTime(abi_t<Windows::Foundation::TimeSpan> value, ::IUnknown** marker) = 0;
    virtual HRESULT __stdcall Create(abi_t<Windows::Foundation::TimeSpan> value, HSTRING mediaMarketType, HSTRING text, ::IUnknown** marker) = 0;
};};

template <> struct abi<Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PlaybackMediaMarker(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Playback::IPlaybackMediaMarkerSequence>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Size(uint32_t* value) = 0;
    virtual HRESULT __stdcall Insert(::IUnknown* value) = 0;
    virtual HRESULT __stdcall Clear() = 0;
};};

template <> struct abi<Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Track(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OldPresentationMode(abi_t<Windows::Media::Playback::TimedMetadataTrackPresentationMode>* value) = 0;
    virtual HRESULT __stdcall get_NewPresentationMode(abi_t<Windows::Media::Playback::TimedMetadataTrackPresentationMode>* value) = 0;
};};

}
