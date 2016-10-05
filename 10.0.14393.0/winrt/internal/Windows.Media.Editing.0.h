// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Editing {

struct IBackgroundAudioTrack;
struct IBackgroundAudioTrackStatics;
struct IEmbeddedAudioTrack;
struct IMediaClip;
struct IMediaClipStatics;
struct IMediaClipStatics2;
struct IMediaComposition;
struct IMediaComposition2;
struct IMediaCompositionStatics;
struct IMediaOverlay;
struct IMediaOverlayFactory;
struct IMediaOverlayLayer;
struct IMediaOverlayLayerFactory;
struct BackgroundAudioTrack;
struct EmbeddedAudioTrack;
struct MediaClip;
struct MediaComposition;
struct MediaOverlay;
struct MediaOverlayLayer;

}

namespace Windows::Media::Editing {

struct IBackgroundAudioTrack;
struct IBackgroundAudioTrackStatics;
struct IEmbeddedAudioTrack;
struct IMediaClip;
struct IMediaClipStatics;
struct IMediaClipStatics2;
struct IMediaComposition;
struct IMediaComposition2;
struct IMediaCompositionStatics;
struct IMediaOverlay;
struct IMediaOverlayFactory;
struct IMediaOverlayLayer;
struct IMediaOverlayLayerFactory;
struct BackgroundAudioTrack;
struct EmbeddedAudioTrack;
struct MediaClip;
struct MediaComposition;
struct MediaOverlay;
struct MediaOverlayLayer;

}

namespace Windows::Media::Editing {

enum class MediaTrimmingPreference
{
    Fast = 0,
    Precise = 1,
};

enum class VideoFramePrecision
{
    NearestFrame = 0,
    NearestKeyFrame = 1,
};

}

}
