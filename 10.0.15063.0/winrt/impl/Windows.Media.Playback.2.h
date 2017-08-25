// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.Casting.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Media.Protection.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.Playback.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Playback {

struct [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] BackgroundMediaPlayer
{
    BackgroundMediaPlayer() = delete;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static Windows::Media::Playback::MediaPlayer Current();
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static event_token MessageReceivedFromBackground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
    using MessageReceivedFromBackground_revoker = factory_event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics>;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static MessageReceivedFromBackground_revoker MessageReceivedFromBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void MessageReceivedFromBackground(event_token const& token);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static event_token MessageReceivedFromForeground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
    using MessageReceivedFromForeground_revoker = factory_event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics>;
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static MessageReceivedFromForeground_revoker MessageReceivedFromForeground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void MessageReceivedFromForeground(event_token const& token);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void SendMessageToBackground(Windows::Foundation::Collections::ValueSet const& value);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void SendMessageToForeground(Windows::Foundation::Collections::ValueSet const& value);
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static bool IsMediaPlaying();
    [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] static void Shutdown();
};

struct WINRT_EBO CurrentMediaPlaybackItemChangedEventArgs :
    Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs,
    impl::require<CurrentMediaPlaybackItemChangedEventArgs, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>
{
    CurrentMediaPlaybackItemChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaBreak :
    Windows::Media::Playback::IMediaBreak
{
    MediaBreak(std::nullptr_t) noexcept {}
    MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod);
    MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod, Windows::Foundation::TimeSpan const& presentationPosition);
};

struct WINRT_EBO MediaBreakEndedEventArgs :
    Windows::Media::Playback::IMediaBreakEndedEventArgs
{
    MediaBreakEndedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaBreakManager :
    Windows::Media::Playback::IMediaBreakManager
{
    MediaBreakManager(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaBreakSchedule :
    Windows::Media::Playback::IMediaBreakSchedule
{
    MediaBreakSchedule(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaBreakSeekedOverEventArgs :
    Windows::Media::Playback::IMediaBreakSeekedOverEventArgs
{
    MediaBreakSeekedOverEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaBreakSkippedEventArgs :
    Windows::Media::Playback::IMediaBreakSkippedEventArgs
{
    MediaBreakSkippedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaBreakStartedEventArgs :
    Windows::Media::Playback::IMediaBreakStartedEventArgs
{
    MediaBreakStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaItemDisplayProperties :
    Windows::Media::Playback::IMediaItemDisplayProperties
{
    MediaItemDisplayProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackAudioTrackList :
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::AudioTrack>,
    impl::require<MediaPlaybackAudioTrackList, Windows::Media::Core::ISingleSelectMediaTrackList>
{
    MediaPlaybackAudioTrackList(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManager :
    Windows::Media::Playback::IMediaPlaybackCommandManager
{
    MediaPlaybackCommandManager(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
{
    MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerCommandBehavior :
    Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior
{
    MediaPlaybackCommandManagerCommandBehavior(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerFastForwardReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs
{
    MediaPlaybackCommandManagerFastForwardReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerNextReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs
{
    MediaPlaybackCommandManagerNextReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerPauseReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs
{
    MediaPlaybackCommandManagerPauseReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerPlayReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs
{
    MediaPlaybackCommandManagerPlayReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerPositionReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs
{
    MediaPlaybackCommandManagerPositionReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerPreviousReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs
{
    MediaPlaybackCommandManagerPreviousReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerRateReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs
{
    MediaPlaybackCommandManagerRateReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerRewindReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs
{
    MediaPlaybackCommandManagerRewindReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackCommandManagerShuffleReceivedEventArgs :
    Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs
{
    MediaPlaybackCommandManagerShuffleReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackItem :
    Windows::Media::Playback::IMediaPlaybackItem,
    impl::require<MediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackItem3>
{
    MediaPlaybackItem(std::nullptr_t) noexcept {}
    MediaPlaybackItem(Windows::Media::Core::MediaSource const& source);
    MediaPlaybackItem(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime);
    MediaPlaybackItem(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime, Windows::Foundation::TimeSpan const& durationLimit);
    static Windows::Media::Playback::MediaPlaybackItem FindFromMediaSource(Windows::Media::Core::MediaSource const& source);
};

struct WINRT_EBO MediaPlaybackItemError :
    Windows::Media::Playback::IMediaPlaybackItemError
{
    MediaPlaybackItemError(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackItemFailedEventArgs :
    Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs
{
    MediaPlaybackItemFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackItemOpenedEventArgs :
    Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs
{
    MediaPlaybackItemOpenedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackList :
    Windows::Media::Playback::IMediaPlaybackList,
    impl::require<MediaPlaybackList, Windows::Media::Playback::IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackList3>
{
    MediaPlaybackList(std::nullptr_t) noexcept {}
    MediaPlaybackList();
};

struct WINRT_EBO MediaPlaybackSession :
    Windows::Media::Playback::IMediaPlaybackSession,
    impl::require<MediaPlaybackSession, Windows::Media::Playback::IMediaPlaybackSession2>
{
    MediaPlaybackSession(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackSphericalVideoProjection :
    Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection
{
    MediaPlaybackSphericalVideoProjection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackTimedMetadataTrackList :
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>,
    impl::require<MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>
{
    MediaPlaybackTimedMetadataTrackList(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlaybackVideoTrackList :
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::VideoTrack>,
    impl::require<MediaPlaybackVideoTrackList, Windows::Media::Core::ISingleSelectMediaTrackList>
{
    MediaPlaybackVideoTrackList(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlayer :
    Windows::Media::Playback::IMediaPlayer,
    impl::require<MediaPlayer, Windows::Foundation::IClosable, Windows::Media::Playback::IMediaPlayer2, Windows::Media::Playback::IMediaPlayer3, Windows::Media::Playback::IMediaPlayer4, Windows::Media::Playback::IMediaPlayer5, Windows::Media::Playback::IMediaPlayerEffects, Windows::Media::Playback::IMediaPlayerEffects2, Windows::Media::Playback::IMediaPlayerSource, Windows::Media::Playback::IMediaPlayerSource2>
{
    MediaPlayer(std::nullptr_t) noexcept {}
    MediaPlayer();
};

struct WINRT_EBO MediaPlayerDataReceivedEventArgs :
    Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs
{
    MediaPlayerDataReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlayerFailedEventArgs :
    Windows::Media::Playback::IMediaPlayerFailedEventArgs
{
    MediaPlayerFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlayerRateChangedEventArgs :
    Windows::Media::Playback::IMediaPlayerRateChangedEventArgs
{
    MediaPlayerRateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaPlayerSurface :
    Windows::Media::Playback::IMediaPlayerSurface,
    impl::require<MediaPlayerSurface, Windows::Foundation::IClosable>
{
    MediaPlayerSurface(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlaybackMediaMarker :
    Windows::Media::Playback::IPlaybackMediaMarker
{
    PlaybackMediaMarker(std::nullptr_t) noexcept {}
    PlaybackMediaMarker(Windows::Foundation::TimeSpan const& value);
    PlaybackMediaMarker(Windows::Foundation::TimeSpan const& value, param::hstring const& mediaMarketType, param::hstring const& text);
};

struct WINRT_EBO PlaybackMediaMarkerReachedEventArgs :
    Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs
{
    PlaybackMediaMarkerReachedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlaybackMediaMarkerSequence :
    Windows::Media::Playback::IPlaybackMediaMarkerSequence
{
    PlaybackMediaMarkerSequence(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TimedMetadataPresentationModeChangedEventArgs :
    Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs
{
    TimedMetadataPresentationModeChangedEventArgs(std::nullptr_t) noexcept {}
};

}
