// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Streaming::Adaptive {

struct IAdaptiveMediaSource;
struct IAdaptiveMediaSource2;
struct IAdaptiveMediaSource3;
struct IAdaptiveMediaSourceAdvancedSettings;
struct IAdaptiveMediaSourceCorrelatedTimes;
struct IAdaptiveMediaSourceCreationResult;
struct IAdaptiveMediaSourceCreationResult2;
struct IAdaptiveMediaSourceDiagnosticAvailableEventArgs;
struct IAdaptiveMediaSourceDiagnostics;
struct IAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
struct IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;
struct IAdaptiveMediaSourceDownloadCompletedEventArgs;
struct IAdaptiveMediaSourceDownloadCompletedEventArgs2;
struct IAdaptiveMediaSourceDownloadFailedEventArgs;
struct IAdaptiveMediaSourceDownloadFailedEventArgs2;
struct IAdaptiveMediaSourceDownloadRequestedDeferral;
struct IAdaptiveMediaSourceDownloadRequestedEventArgs;
struct IAdaptiveMediaSourceDownloadRequestedEventArgs2;
struct IAdaptiveMediaSourceDownloadResult;
struct IAdaptiveMediaSourceDownloadResult2;
struct IAdaptiveMediaSourceDownloadStatistics;
struct IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
struct IAdaptiveMediaSourceStatics;
struct AdaptiveMediaSource;
struct AdaptiveMediaSourceAdvancedSettings;
struct AdaptiveMediaSourceCorrelatedTimes;
struct AdaptiveMediaSourceCreationResult;
struct AdaptiveMediaSourceDiagnosticAvailableEventArgs;
struct AdaptiveMediaSourceDiagnostics;
struct AdaptiveMediaSourceDownloadBitrateChangedEventArgs;
struct AdaptiveMediaSourceDownloadCompletedEventArgs;
struct AdaptiveMediaSourceDownloadFailedEventArgs;
struct AdaptiveMediaSourceDownloadRequestedDeferral;
struct AdaptiveMediaSourceDownloadRequestedEventArgs;
struct AdaptiveMediaSourceDownloadResult;
struct AdaptiveMediaSourceDownloadStatistics;
struct AdaptiveMediaSourcePlaybackBitrateChangedEventArgs;

}

namespace Windows::Media::Streaming::Adaptive {

struct IAdaptiveMediaSource;
struct IAdaptiveMediaSource2;
struct IAdaptiveMediaSource3;
struct IAdaptiveMediaSourceAdvancedSettings;
struct IAdaptiveMediaSourceCorrelatedTimes;
struct IAdaptiveMediaSourceCreationResult;
struct IAdaptiveMediaSourceCreationResult2;
struct IAdaptiveMediaSourceDiagnosticAvailableEventArgs;
struct IAdaptiveMediaSourceDiagnostics;
struct IAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
struct IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;
struct IAdaptiveMediaSourceDownloadCompletedEventArgs;
struct IAdaptiveMediaSourceDownloadCompletedEventArgs2;
struct IAdaptiveMediaSourceDownloadFailedEventArgs;
struct IAdaptiveMediaSourceDownloadFailedEventArgs2;
struct IAdaptiveMediaSourceDownloadRequestedDeferral;
struct IAdaptiveMediaSourceDownloadRequestedEventArgs;
struct IAdaptiveMediaSourceDownloadRequestedEventArgs2;
struct IAdaptiveMediaSourceDownloadResult;
struct IAdaptiveMediaSourceDownloadResult2;
struct IAdaptiveMediaSourceDownloadStatistics;
struct IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
struct IAdaptiveMediaSourceStatics;
struct AdaptiveMediaSource;
struct AdaptiveMediaSourceAdvancedSettings;
struct AdaptiveMediaSourceCorrelatedTimes;
struct AdaptiveMediaSourceCreationResult;
struct AdaptiveMediaSourceDiagnosticAvailableEventArgs;
struct AdaptiveMediaSourceDiagnostics;
struct AdaptiveMediaSourceDownloadBitrateChangedEventArgs;
struct AdaptiveMediaSourceDownloadCompletedEventArgs;
struct AdaptiveMediaSourceDownloadFailedEventArgs;
struct AdaptiveMediaSourceDownloadRequestedDeferral;
struct AdaptiveMediaSourceDownloadRequestedEventArgs;
struct AdaptiveMediaSourceDownloadResult;
struct AdaptiveMediaSourceDownloadStatistics;
struct AdaptiveMediaSourcePlaybackBitrateChangedEventArgs;

}

namespace Windows::Media::Streaming::Adaptive {

template <typename T> struct impl_IAdaptiveMediaSource;
template <typename T> struct impl_IAdaptiveMediaSource2;
template <typename T> struct impl_IAdaptiveMediaSource3;
template <typename T> struct impl_IAdaptiveMediaSourceAdvancedSettings;
template <typename T> struct impl_IAdaptiveMediaSourceCorrelatedTimes;
template <typename T> struct impl_IAdaptiveMediaSourceCreationResult;
template <typename T> struct impl_IAdaptiveMediaSourceCreationResult2;
template <typename T> struct impl_IAdaptiveMediaSourceDiagnosticAvailableEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDiagnostics;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadCompletedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadCompletedEventArgs2;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadFailedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadFailedEventArgs2;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadRequestedDeferral;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadRequestedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadRequestedEventArgs2;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadResult;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadResult2;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadStatistics;
template <typename T> struct impl_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceStatics;

}

namespace Windows::Media::Streaming::Adaptive {

enum class AdaptiveMediaSourceCreationStatus
{
    Success = 0,
    ManifestDownloadFailure = 1,
    ManifestParseFailure = 2,
    UnsupportedManifestContentType = 3,
    UnsupportedManifestVersion = 4,
    UnsupportedManifestProfile = 5,
    UnknownFailure = 6,
};

enum class AdaptiveMediaSourceDiagnosticType
{
    ManifestUnchangedUponReload = 0,
    ManifestMismatchUponReload = 1,
    ManifestSignaledEndOfLiveEventUponReload = 2,
    MediaSegmentSkipped = 3,
    ResourceNotFound = 4,
    ResourceTimedOut = 5,
    ResourceParsingError = 6,
    BitrateDisabled = 7,
};

enum class AdaptiveMediaSourceDownloadBitrateChangedReason
{
    SufficientInboundBitsPerSecond = 0,
    InsufficientInboundBitsPerSecond = 1,
    LowBufferLevel = 2,
    PositionChanged = 3,
    TrackSelectionChanged = 4,
    DesiredBitratesChanged = 5,
    ErrorInPreviousBitrate = 6,
};

enum class AdaptiveMediaSourceResourceType
{
    Manifest = 0,
    InitializationSegment = 1,
    MediaSegment = 2,
    Key = 3,
    InitializationVector = 4,
};

}

}
