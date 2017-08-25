// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Casting.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Media.Protection.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.Composition.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Media.Playback.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Playback {

struct WINRT_EBO [[deprecated("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")]] IBackgroundMediaPlayerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundMediaPlayerStatics>
{
    IBackgroundMediaPlayerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentMediaPlaybackItemChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentMediaPlaybackItemChangedEventArgs>
{
    ICurrentMediaPlaybackItemChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentMediaPlaybackItemChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentMediaPlaybackItemChangedEventArgs2>,
    impl::require<ICurrentMediaPlaybackItemChangedEventArgs2, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>
{
    ICurrentMediaPlaybackItemChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBreak :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreak>
{
    IMediaBreak(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBreakEndedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakEndedEventArgs>
{
    IMediaBreakEndedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBreakFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakFactory>
{
    IMediaBreakFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBreakManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakManager>
{
    IMediaBreakManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBreakSchedule :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakSchedule>
{
    IMediaBreakSchedule(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBreakSeekedOverEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakSeekedOverEventArgs>
{
    IMediaBreakSeekedOverEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBreakSkippedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakSkippedEventArgs>
{
    IMediaBreakSkippedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBreakStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBreakStartedEventArgs>
{
    IMediaBreakStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")]] IMediaEnginePlaybackSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEnginePlaybackSource>
{
    IMediaEnginePlaybackSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaItemDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaItemDisplayProperties>
{
    IMediaItemDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManager>
{
    IMediaPlaybackCommandManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
{
    IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerCommandBehavior :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerCommandBehavior>
{
    IMediaPlaybackCommandManagerCommandBehavior(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerFastForwardReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>
{
    IMediaPlaybackCommandManagerFastForwardReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerNextReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerNextReceivedEventArgs>
{
    IMediaPlaybackCommandManagerNextReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerPauseReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerPauseReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPauseReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerPlayReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerPlayReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPlayReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerPositionReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerPositionReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPositionReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerPreviousReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerPreviousReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPreviousReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerRateReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerRateReceivedEventArgs>
{
    IMediaPlaybackCommandManagerRateReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerRewindReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerRewindReceivedEventArgs>
{
    IMediaPlaybackCommandManagerRewindReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackCommandManagerShuffleReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackCommandManagerShuffleReceivedEventArgs>
{
    IMediaPlaybackCommandManagerShuffleReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItem>,
    impl::require<IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItem2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItem2>,
    impl::require<IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackItem2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItem3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItem3>,
    impl::require<IMediaPlaybackItem3, Windows::Media::Playback::IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackItem3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItemError :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemError>
{
    IMediaPlaybackItemError(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemFactory>
{
    IMediaPlaybackItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItemFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemFactory2>,
    impl::require<IMediaPlaybackItemFactory2, Windows::Media::Playback::IMediaPlaybackItemFactory>
{
    IMediaPlaybackItemFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItemFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemFailedEventArgs>
{
    IMediaPlaybackItemFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItemOpenedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemOpenedEventArgs>
{
    IMediaPlaybackItemOpenedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackItemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackItemStatics>
{
    IMediaPlaybackItemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackList>,
    impl::require<IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackList2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackList2>,
    impl::require<IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackList2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackList3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackList3>,
    impl::require<IMediaPlaybackList3, Windows::Media::Playback::IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackList3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackSession>
{
    IMediaPlaybackSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackSession2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackSession2>
{
    IMediaPlaybackSession2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackSource>
{
    IMediaPlaybackSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackSphericalVideoProjection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackSphericalVideoProjection>
{
    IMediaPlaybackSphericalVideoProjection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlaybackTimedMetadataTrackList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlaybackTimedMetadataTrackList>
{
    IMediaPlaybackTimedMetadataTrackList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer>
{
    IMediaPlayer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer2>
{
    IMediaPlayer2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayer3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer3>
{
    IMediaPlayer3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayer4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer4>
{
    IMediaPlayer4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayer5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayer5>
{
    IMediaPlayer5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerDataReceivedEventArgs>
{
    IMediaPlayerDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerEffects :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerEffects>
{
    IMediaPlayerEffects(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerEffects2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerEffects2>
{
    IMediaPlayerEffects2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerFailedEventArgs>
{
    IMediaPlayerFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerRateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerRateChangedEventArgs>
{
    IMediaPlayerRateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerSource>
{
    IMediaPlayerSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerSource2>
{
    IMediaPlayerSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerSurface>
{
    IMediaPlayerSurface(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaybackMediaMarker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackMediaMarker>
{
    IPlaybackMediaMarker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaybackMediaMarkerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackMediaMarkerFactory>
{
    IPlaybackMediaMarkerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaybackMediaMarkerReachedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackMediaMarkerReachedEventArgs>
{
    IPlaybackMediaMarkerReachedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaybackMediaMarkerSequence :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackMediaMarkerSequence>,
    impl::require<IPlaybackMediaMarkerSequence, Windows::Foundation::Collections::IIterable<Windows::Media::Playback::PlaybackMediaMarker>>
{
    IPlaybackMediaMarkerSequence(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedMetadataPresentationModeChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataPresentationModeChangedEventArgs>
{
    ITimedMetadataPresentationModeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
