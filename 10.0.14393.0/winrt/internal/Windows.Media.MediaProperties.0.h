// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::MediaProperties {

struct IAudioEncodingProperties;
struct IAudioEncodingPropertiesStatics;
struct IAudioEncodingPropertiesWithFormatUserData;
struct IContainerEncodingProperties;
struct IH264ProfileIdsStatics;
struct IImageEncodingProperties;
struct IImageEncodingPropertiesStatics;
struct IImageEncodingPropertiesStatics2;
struct IMediaEncodingProfile;
struct IMediaEncodingProfileStatics;
struct IMediaEncodingProfileStatics2;
struct IMediaEncodingProperties;
struct IMediaEncodingSubtypesStatics;
struct IMediaRatio;
struct IMpeg2ProfileIdsStatics;
struct IVideoEncodingProperties;
struct IVideoEncodingProperties2;
struct IVideoEncodingProperties3;
struct IVideoEncodingPropertiesStatics;
struct AudioEncodingProperties;
struct ContainerEncodingProperties;
struct ImageEncodingProperties;
struct MediaEncodingProfile;
struct MediaPropertySet;
struct MediaRatio;
struct VideoEncodingProperties;

}

namespace Windows::Media::MediaProperties {

struct IAudioEncodingProperties;
struct IAudioEncodingPropertiesStatics;
struct IAudioEncodingPropertiesWithFormatUserData;
struct IContainerEncodingProperties;
struct IH264ProfileIdsStatics;
struct IImageEncodingProperties;
struct IImageEncodingPropertiesStatics;
struct IImageEncodingPropertiesStatics2;
struct IMediaEncodingProfile;
struct IMediaEncodingProfileStatics;
struct IMediaEncodingProfileStatics2;
struct IMediaEncodingProperties;
struct IMediaEncodingSubtypesStatics;
struct IMediaRatio;
struct IMpeg2ProfileIdsStatics;
struct IVideoEncodingProperties;
struct IVideoEncodingProperties2;
struct IVideoEncodingProperties3;
struct IVideoEncodingPropertiesStatics;
struct AudioEncodingProperties;
struct ContainerEncodingProperties;
struct H264ProfileIds;
struct ImageEncodingProperties;
struct MediaEncodingProfile;
struct MediaEncodingSubtypes;
struct MediaPropertySet;
struct MediaRatio;
struct Mpeg2ProfileIds;
struct VideoEncodingProperties;

}

namespace Windows::Media::MediaProperties {

enum class AudioEncodingQuality
{
    Auto = 0,
    High = 1,
    Medium = 2,
    Low = 3,
};

enum class MediaMirroringOptions : unsigned
{
    None = 0x0,
    Horizontal = 0x1,
    Vertical = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(MediaMirroringOptions)

enum class MediaPixelFormat
{
    Nv12 = 0,
    Bgra8 = 1,
};

enum class MediaRotation
{
    None = 0,
    Clockwise90Degrees = 1,
    Clockwise180Degrees = 2,
    Clockwise270Degrees = 3,
};

enum class MediaThumbnailFormat
{
    Bmp = 0,
    Bgra8 = 1,
};

enum class StereoscopicVideoPackingMode
{
    None = 0,
    SideBySide = 1,
    TopBottom = 2,
};

enum class VideoEncodingQuality
{
    Auto = 0,
    HD1080p = 1,
    HD720p = 2,
    Wvga = 3,
    Ntsc = 4,
    Pal = 5,
    Vga = 6,
    Qvga = 7,
};

}

}
