// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Capture::Frames {

struct IBufferMediaFrame;
struct IDepthMediaFrame;
struct IDepthMediaFrameFormat;
struct IInfraredMediaFrame;
struct IMediaFrameArrivedEventArgs;
struct IMediaFrameFormat;
struct IMediaFrameReader;
struct IMediaFrameReference;
struct IMediaFrameSource;
struct IMediaFrameSourceController;
struct IMediaFrameSourceGetPropertyResult;
struct IMediaFrameSourceGroup;
struct IMediaFrameSourceGroupStatics;
struct IMediaFrameSourceInfo;
struct IVideoMediaFrame;
struct IVideoMediaFrameFormat;
struct BufferMediaFrame;
struct DepthMediaFrame;
struct DepthMediaFrameFormat;
struct InfraredMediaFrame;
struct MediaFrameArrivedEventArgs;
struct MediaFrameFormat;
struct MediaFrameReader;
struct MediaFrameReference;
struct MediaFrameSource;
struct MediaFrameSourceController;
struct MediaFrameSourceGetPropertyResult;
struct MediaFrameSourceGroup;
struct MediaFrameSourceInfo;
struct VideoMediaFrame;
struct VideoMediaFrameFormat;

}

namespace Windows::Media::Capture::Frames {

struct IBufferMediaFrame;
struct IDepthMediaFrame;
struct IDepthMediaFrameFormat;
struct IInfraredMediaFrame;
struct IMediaFrameArrivedEventArgs;
struct IMediaFrameFormat;
struct IMediaFrameReader;
struct IMediaFrameReference;
struct IMediaFrameSource;
struct IMediaFrameSourceController;
struct IMediaFrameSourceGetPropertyResult;
struct IMediaFrameSourceGroup;
struct IMediaFrameSourceGroupStatics;
struct IMediaFrameSourceInfo;
struct IVideoMediaFrame;
struct IVideoMediaFrameFormat;
struct BufferMediaFrame;
struct DepthMediaFrame;
struct DepthMediaFrameFormat;
struct InfraredMediaFrame;
struct MediaFrameArrivedEventArgs;
struct MediaFrameFormat;
struct MediaFrameReader;
struct MediaFrameReference;
struct MediaFrameSource;
struct MediaFrameSourceController;
struct MediaFrameSourceGetPropertyResult;
struct MediaFrameSourceGroup;
struct MediaFrameSourceInfo;
struct VideoMediaFrame;
struct VideoMediaFrameFormat;

}

namespace Windows::Media::Capture::Frames {

enum class MediaFrameReaderStartStatus
{
    Success = 0,
    UnknownFailure = 1,
    DeviceNotAvailable = 2,
    OutputFormatNotSupported = 3,
};

enum class MediaFrameSourceGetPropertyStatus
{
    Success = 0,
    UnknownFailure = 1,
    NotSupported = 2,
    DeviceNotAvailable = 3,
};

enum class MediaFrameSourceKind
{
    Custom = 0,
    Color = 1,
    Infrared = 2,
    Depth = 3,
};

enum class MediaFrameSourceSetPropertyStatus
{
    Success = 0,
    UnknownFailure = 1,
    NotSupported = 2,
    InvalidValue = 3,
    DeviceNotAvailable = 4,
    NotInControl = 5,
};

}

}
