// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Media.PlayTo.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::PlayTo {

struct WINRT_EBO CurrentTimeChangeRequestedEventArgs :
    Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs
{
    CurrentTimeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MuteChangeRequestedEventArgs :
    Windows::Media::PlayTo::IMuteChangeRequestedEventArgs
{
    MuteChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")]] PlayToConnection :
    Windows::Media::PlayTo::IPlayToConnection
{
    PlayToConnection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")]] PlayToConnectionErrorEventArgs :
    Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs
{
    PlayToConnectionErrorEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] PlayToConnectionStateChangedEventArgs :
    Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs
{
    PlayToConnectionStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")]] PlayToConnectionTransferredEventArgs :
    Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs
{
    PlayToConnectionTransferredEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] PlayToManager :
    Windows::Media::PlayTo::IPlayToManager
{
    PlayToManager(std::nullptr_t) noexcept {}
    [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] static Windows::Media::PlayTo::PlayToManager GetForCurrentView();
    [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] static void ShowPlayToUI();
};

struct WINRT_EBO PlayToReceiver :
    Windows::Media::PlayTo::IPlayToReceiver
{
    PlayToReceiver(std::nullptr_t) noexcept {}
    PlayToReceiver();
};

struct WINRT_EBO [[deprecated("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")]] PlayToSource :
    Windows::Media::PlayTo::IPlayToSource,
    impl::require<PlayToSource, Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>
{
    PlayToSource(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceDeferral may be altered or unavailable for releases after Windows 10.")]] PlayToSourceDeferral :
    Windows::Media::PlayTo::IPlayToSourceDeferral
{
    PlayToSourceDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")]] PlayToSourceRequest :
    Windows::Media::PlayTo::IPlayToSourceRequest
{
    PlayToSourceRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceRequestedEventArgs may be altered or unavailable for releases after Windows 10.")]] PlayToSourceRequestedEventArgs :
    Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs
{
    PlayToSourceRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")]] PlayToSourceSelectedEventArgs :
    Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs
{
    PlayToSourceSelectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlaybackRateChangeRequestedEventArgs :
    Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs
{
    PlaybackRateChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SourceChangeRequestedEventArgs :
    Windows::Media::PlayTo::ISourceChangeRequestedEventArgs
{
    SourceChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VolumeChangeRequestedEventArgs :
    Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs
{
    VolumeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
};

}
