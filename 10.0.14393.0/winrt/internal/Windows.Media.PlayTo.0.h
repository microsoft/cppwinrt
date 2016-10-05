// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::PlayTo {

struct ICurrentTimeChangeRequestedEventArgs;
struct IMuteChangeRequestedEventArgs;
struct IPlayToConnection;
struct IPlayToConnectionErrorEventArgs;
struct IPlayToConnectionStateChangedEventArgs;
struct IPlayToConnectionTransferredEventArgs;
struct IPlayToManager;
struct IPlayToManagerStatics;
struct IPlayToReceiver;
struct IPlayToSource;
struct IPlayToSourceDeferral;
struct IPlayToSourceRequest;
struct IPlayToSourceRequestedEventArgs;
struct IPlayToSourceSelectedEventArgs;
struct IPlayToSourceWithPreferredSourceUri;
struct IPlaybackRateChangeRequestedEventArgs;
struct ISourceChangeRequestedEventArgs;
struct IVolumeChangeRequestedEventArgs;
struct CurrentTimeChangeRequestedEventArgs;
struct MuteChangeRequestedEventArgs;
struct PlayToConnection;
struct PlayToConnectionErrorEventArgs;
struct PlayToConnectionStateChangedEventArgs;
struct PlayToConnectionTransferredEventArgs;
struct PlayToManager;
struct PlayToReceiver;
struct PlayToSource;
struct PlayToSourceDeferral;
struct PlayToSourceRequest;
struct PlayToSourceRequestedEventArgs;
struct PlayToSourceSelectedEventArgs;
struct PlaybackRateChangeRequestedEventArgs;
struct SourceChangeRequestedEventArgs;
struct VolumeChangeRequestedEventArgs;

}

namespace Windows::Media::PlayTo {

struct ICurrentTimeChangeRequestedEventArgs;
struct IMuteChangeRequestedEventArgs;
struct IPlayToConnection;
struct IPlayToConnectionErrorEventArgs;
struct IPlayToConnectionStateChangedEventArgs;
struct IPlayToConnectionTransferredEventArgs;
struct IPlayToManager;
struct IPlayToManagerStatics;
struct IPlayToReceiver;
struct IPlayToSource;
struct IPlayToSourceDeferral;
struct IPlayToSourceRequest;
struct IPlayToSourceRequestedEventArgs;
struct IPlayToSourceSelectedEventArgs;
struct IPlayToSourceWithPreferredSourceUri;
struct IPlaybackRateChangeRequestedEventArgs;
struct ISourceChangeRequestedEventArgs;
struct IVolumeChangeRequestedEventArgs;
struct CurrentTimeChangeRequestedEventArgs;
struct MuteChangeRequestedEventArgs;
struct PlayToConnection;
struct PlayToConnectionErrorEventArgs;
struct PlayToConnectionStateChangedEventArgs;
struct PlayToConnectionTransferredEventArgs;
struct PlayToManager;
struct PlayToReceiver;
struct PlayToSource;
struct PlayToSourceDeferral;
struct PlayToSourceRequest;
struct PlayToSourceRequestedEventArgs;
struct PlayToSourceSelectedEventArgs;
struct PlaybackRateChangeRequestedEventArgs;
struct SourceChangeRequestedEventArgs;
struct VolumeChangeRequestedEventArgs;

}

namespace Windows::Media::PlayTo {

enum class PlayToConnectionError
{
    None = 0,
    DeviceNotResponding = 1,
    DeviceError = 2,
    DeviceLocked = 3,
    ProtectedPlaybackFailed = 4,
};

enum class PlayToConnectionState
{
    Disconnected = 0,
    Connected = 1,
    Rendering = 2,
};

}

}
