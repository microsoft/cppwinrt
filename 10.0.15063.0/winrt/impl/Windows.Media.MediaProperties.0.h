// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

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

enum class SphericalVideoFrameFormat
{
    None = 0,
    Unsupported = 1,
    Equirectangular = 2,
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
    Uhd2160p = 8,
    Uhd4320p = 9,
};

struct IAudioEncodingProperties;
struct IAudioEncodingProperties2;
struct IAudioEncodingPropertiesStatics;
struct IAudioEncodingPropertiesStatics2;
struct IAudioEncodingPropertiesWithFormatUserData;
struct IContainerEncodingProperties;
struct IH264ProfileIdsStatics;
struct IImageEncodingProperties;
struct IImageEncodingPropertiesStatics;
struct IImageEncodingPropertiesStatics2;
struct IMediaEncodingProfile;
struct IMediaEncodingProfileStatics;
struct IMediaEncodingProfileStatics2;
struct IMediaEncodingProfileStatics3;
struct IMediaEncodingProperties;
struct IMediaEncodingSubtypesStatics;
struct IMediaEncodingSubtypesStatics2;
struct IMediaEncodingSubtypesStatics3;
struct IMediaRatio;
struct IMpeg2ProfileIdsStatics;
struct IVideoEncodingProperties;
struct IVideoEncodingProperties2;
struct IVideoEncodingProperties3;
struct IVideoEncodingProperties4;
struct IVideoEncodingPropertiesStatics;
struct IVideoEncodingPropertiesStatics2;
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

namespace winrt::impl {

template <> struct category<Windows::Media::MediaProperties::IAudioEncodingProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IAudioEncodingProperties2>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IContainerEncodingProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IH264ProfileIdsStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IImageEncodingProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaEncodingProfile>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaEncodingProfileStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaEncodingProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMediaRatio>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IVideoEncodingProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IVideoEncodingProperties2>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IVideoEncodingProperties3>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IVideoEncodingProperties4>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::MediaProperties::AudioEncodingProperties>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::ContainerEncodingProperties>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::H264ProfileIds>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::ImageEncodingProperties>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::MediaEncodingProfile>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::MediaEncodingSubtypes>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::MediaPropertySet>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::MediaRatio>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::Mpeg2ProfileIds>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::VideoEncodingProperties>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProperties::AudioEncodingQuality>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaProperties::MediaMirroringOptions>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaProperties::MediaPixelFormat>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaProperties::MediaRotation>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaProperties::MediaThumbnailFormat>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaProperties::SphericalVideoFrameFormat>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaProperties::StereoscopicVideoPackingMode>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaProperties::VideoEncodingQuality>{ using type = enum_category; };
template <> struct name<Windows::Media::MediaProperties::IAudioEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IAudioEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::IAudioEncodingProperties2>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IAudioEncodingProperties2" }; };
template <> struct name<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics" }; };
template <> struct name<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2" }; };
template <> struct name<Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData" }; };
template <> struct name<Windows::Media::MediaProperties::IContainerEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IContainerEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::IH264ProfileIdsStatics>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IH264ProfileIdsStatics" }; };
template <> struct name<Windows::Media::MediaProperties::IImageEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IImageEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics" }; };
template <> struct name<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaEncodingProfile>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaEncodingProfile" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaEncodingProfileStatics>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics2" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics3" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3" }; };
template <> struct name<Windows::Media::MediaProperties::IMediaRatio>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMediaRatio" }; };
template <> struct name<Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics" }; };
template <> struct name<Windows::Media::MediaProperties::IVideoEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IVideoEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::IVideoEncodingProperties2>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IVideoEncodingProperties2" }; };
template <> struct name<Windows::Media::MediaProperties::IVideoEncodingProperties3>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IVideoEncodingProperties3" }; };
template <> struct name<Windows::Media::MediaProperties::IVideoEncodingProperties4>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IVideoEncodingProperties4" }; };
template <> struct name<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics" }; };
template <> struct name<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2" }; };
template <> struct name<Windows::Media::MediaProperties::AudioEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.AudioEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::ContainerEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.ContainerEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::H264ProfileIds>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.H264ProfileIds" }; };
template <> struct name<Windows::Media::MediaProperties::ImageEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.ImageEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::MediaEncodingProfile>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.MediaEncodingProfile" }; };
template <> struct name<Windows::Media::MediaProperties::MediaEncodingSubtypes>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.MediaEncodingSubtypes" }; };
template <> struct name<Windows::Media::MediaProperties::MediaPropertySet>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.MediaPropertySet" }; };
template <> struct name<Windows::Media::MediaProperties::MediaRatio>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.MediaRatio" }; };
template <> struct name<Windows::Media::MediaProperties::Mpeg2ProfileIds>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.Mpeg2ProfileIds" }; };
template <> struct name<Windows::Media::MediaProperties::VideoEncodingProperties>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.VideoEncodingProperties" }; };
template <> struct name<Windows::Media::MediaProperties::AudioEncodingQuality>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.AudioEncodingQuality" }; };
template <> struct name<Windows::Media::MediaProperties::MediaMirroringOptions>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.MediaMirroringOptions" }; };
template <> struct name<Windows::Media::MediaProperties::MediaPixelFormat>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.MediaPixelFormat" }; };
template <> struct name<Windows::Media::MediaProperties::MediaRotation>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.MediaRotation" }; };
template <> struct name<Windows::Media::MediaProperties::MediaThumbnailFormat>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.MediaThumbnailFormat" }; };
template <> struct name<Windows::Media::MediaProperties::SphericalVideoFrameFormat>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.SphericalVideoFrameFormat" }; };
template <> struct name<Windows::Media::MediaProperties::StereoscopicVideoPackingMode>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.StereoscopicVideoPackingMode" }; };
template <> struct name<Windows::Media::MediaProperties::VideoEncodingQuality>{ static constexpr auto & value{ L"Windows.Media.MediaProperties.VideoEncodingQuality" }; };
template <> struct guid<Windows::Media::MediaProperties::IAudioEncodingProperties>{ static constexpr GUID value{ 0x62BC7A16,0x005C,0x4B3B,{ 0x8A,0x0B,0x0A,0x09,0x0E,0x96,0x87,0xF3 } }; };
template <> struct guid<Windows::Media::MediaProperties::IAudioEncodingProperties2>{ static constexpr GUID value{ 0xC45D54DA,0x80BD,0x4C23,{ 0x80,0xD5,0x72,0xD4,0xA1,0x81,0xE8,0x94 } }; };
template <> struct guid<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>{ static constexpr GUID value{ 0x0CAD332C,0xEBE9,0x4527,{ 0xB3,0x6D,0xE4,0x2A,0x13,0xCF,0x38,0xDB } }; };
template <> struct guid<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>{ static constexpr GUID value{ 0x7489316F,0x77A0,0x433D,{ 0x8E,0xD5,0x40,0x40,0x28,0x0E,0x86,0x65 } }; };
template <> struct guid<Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>{ static constexpr GUID value{ 0x98F10D79,0x13EA,0x49FF,{ 0xBE,0x70,0x26,0x73,0xDB,0x69,0x70,0x2C } }; };
template <> struct guid<Windows::Media::MediaProperties::IContainerEncodingProperties>{ static constexpr GUID value{ 0x59AC2A57,0xB32A,0x479E,{ 0x8A,0x61,0x4B,0x7F,0x2E,0x9E,0x7E,0xA0 } }; };
template <> struct guid<Windows::Media::MediaProperties::IH264ProfileIdsStatics>{ static constexpr GUID value{ 0x38654CA7,0x846A,0x4F97,{ 0xA2,0xE5,0xC3,0xA1,0x5B,0xBF,0x70,0xFD } }; };
template <> struct guid<Windows::Media::MediaProperties::IImageEncodingProperties>{ static constexpr GUID value{ 0x78625635,0xF331,0x4189,{ 0xB1,0xC3,0xB4,0x8D,0x5A,0xE0,0x34,0xF1 } }; };
template <> struct guid<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>{ static constexpr GUID value{ 0x257C68DC,0x8B99,0x439E,{ 0xAA,0x59,0x91,0x3A,0x36,0x16,0x12,0x97 } }; };
template <> struct guid<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>{ static constexpr GUID value{ 0xF6C25B29,0x3824,0x46B0,{ 0x95,0x6E,0x50,0x13,0x29,0xE1,0xBE,0x3C } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaEncodingProfile>{ static constexpr GUID value{ 0xE7DBF5A8,0x1DB9,0x4783,{ 0x87,0x6B,0x3D,0xFE,0x12,0xAC,0xFD,0xB3 } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaEncodingProfileStatics>{ static constexpr GUID value{ 0x197F352C,0x2EDE,0x4A45,{ 0xA8,0x96,0x81,0x7A,0x48,0x54,0xF8,0xFE } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>{ static constexpr GUID value{ 0xCE8DE74F,0x6AF4,0x4288,{ 0x8F,0xE2,0x79,0xAD,0xF1,0xF7,0x9A,0x43 } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>{ static constexpr GUID value{ 0x90DAC5AA,0xCF76,0x4294,{ 0xA9,0xED,0x1A,0x14,0x20,0xF5,0x1F,0x6B } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaEncodingProperties>{ static constexpr GUID value{ 0xB4002AF6,0xACD4,0x4E5A,{ 0xA2,0x4B,0x5D,0x74,0x98,0xA8,0xB8,0xC4 } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>{ static constexpr GUID value{ 0x37B6580E,0xA171,0x4464,{ 0xBA,0x5A,0x53,0x18,0x9E,0x48,0xC1,0xC8 } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>{ static constexpr GUID value{ 0x4B7CD23D,0x42FF,0x4D33,{ 0x85,0x31,0x06,0x26,0xBE,0xE4,0xB5,0x2D } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>{ static constexpr GUID value{ 0xBA2414E4,0x883D,0x464E,{ 0xA4,0x4F,0x09,0x7D,0xA0,0x8E,0xF7,0xFF } }; };
template <> struct guid<Windows::Media::MediaProperties::IMediaRatio>{ static constexpr GUID value{ 0xD2D0FEE5,0x8929,0x401D,{ 0xAC,0x78,0x7D,0x35,0x7E,0x37,0x81,0x63 } }; };
template <> struct guid<Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>{ static constexpr GUID value{ 0xA461FF85,0xE57A,0x4128,{ 0x9B,0x21,0xD5,0x33,0x1B,0x04,0x23,0x5C } }; };
template <> struct guid<Windows::Media::MediaProperties::IVideoEncodingProperties>{ static constexpr GUID value{ 0x76EE6C9A,0x37C2,0x4F2A,{ 0x88,0x0A,0x12,0x82,0xBB,0xB4,0x37,0x3D } }; };
template <> struct guid<Windows::Media::MediaProperties::IVideoEncodingProperties2>{ static constexpr GUID value{ 0xF743A1EF,0xD465,0x4290,{ 0xA9,0x4B,0xEF,0x0F,0x15,0x28,0xF8,0xE3 } }; };
template <> struct guid<Windows::Media::MediaProperties::IVideoEncodingProperties3>{ static constexpr GUID value{ 0x386BCDC4,0x873A,0x479F,{ 0xB3,0xEB,0x56,0xC1,0xFC,0xBE,0xC6,0xD7 } }; };
template <> struct guid<Windows::Media::MediaProperties::IVideoEncodingProperties4>{ static constexpr GUID value{ 0x724EF014,0xC10C,0x40F2,{ 0x9D,0x72,0x3E,0xE1,0x3B,0x45,0xFA,0x8E } }; };
template <> struct guid<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>{ static constexpr GUID value{ 0x3CE14D44,0x1DC5,0x43DB,{ 0x9F,0x38,0xEB,0xEB,0xF9,0x01,0x52,0xCB } }; };
template <> struct guid<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>{ static constexpr GUID value{ 0xCF1EBD5D,0x49FE,0x4D00,{ 0xB5,0x9A,0xCF,0xA4,0xDF,0xC5,0x19,0x44 } }; };
template <> struct default_interface<Windows::Media::MediaProperties::AudioEncodingProperties>{ using type = Windows::Media::MediaProperties::IAudioEncodingProperties; };
template <> struct default_interface<Windows::Media::MediaProperties::ContainerEncodingProperties>{ using type = Windows::Media::MediaProperties::IContainerEncodingProperties; };
template <> struct default_interface<Windows::Media::MediaProperties::ImageEncodingProperties>{ using type = Windows::Media::MediaProperties::IImageEncodingProperties; };
template <> struct default_interface<Windows::Media::MediaProperties::MediaEncodingProfile>{ using type = Windows::Media::MediaProperties::IMediaEncodingProfile; };
template <> struct default_interface<Windows::Media::MediaProperties::MediaPropertySet>{ using type = Windows::Foundation::Collections::IMap<GUID, Windows::Foundation::IInspectable>; };
template <> struct default_interface<Windows::Media::MediaProperties::MediaRatio>{ using type = Windows::Media::MediaProperties::IMediaRatio; };
template <> struct default_interface<Windows::Media::MediaProperties::VideoEncodingProperties>{ using type = Windows::Media::MediaProperties::IVideoEncodingProperties; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IAudioEncodingProperties
{
    void Bitrate(uint32_t value) const;
    uint32_t Bitrate() const;
    void ChannelCount(uint32_t value) const;
    uint32_t ChannelCount() const;
    void SampleRate(uint32_t value) const;
    uint32_t SampleRate() const;
    void BitsPerSample(uint32_t value) const;
    uint32_t BitsPerSample() const;
};
template <> struct consume<Windows::Media::MediaProperties::IAudioEncodingProperties> { template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IAudioEncodingProperties2
{
    bool IsSpatial() const;
};
template <> struct consume<Windows::Media::MediaProperties::IAudioEncodingProperties2> { template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingProperties2<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics
{
    Windows::Media::MediaProperties::AudioEncodingProperties CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
};
template <> struct consume<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics> { template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2
{
    Windows::Media::MediaProperties::AudioEncodingProperties CreateAlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreateFlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const;
};
template <> struct consume<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2> { template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData
{
    void SetFormatUserData(array_view<uint8_t const> value) const;
    void GetFormatUserData(com_array<uint8_t>& value) const;
};
template <> struct consume<Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData> { template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IContainerEncodingProperties
{
};
template <> struct consume<Windows::Media::MediaProperties::IContainerEncodingProperties> { template <typename D> using type = consume_Windows_Media_MediaProperties_IContainerEncodingProperties<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics
{
    int32_t ConstrainedBaseline() const;
    int32_t Baseline() const;
    int32_t Extended() const;
    int32_t Main() const;
    int32_t High() const;
    int32_t High10() const;
    int32_t High422() const;
    int32_t High444() const;
    int32_t StereoHigh() const;
    int32_t MultiviewHigh() const;
};
template <> struct consume<Windows::Media::MediaProperties::IH264ProfileIdsStatics> { template <typename D> using type = consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IImageEncodingProperties
{
    void Width(uint32_t value) const;
    uint32_t Width() const;
    void Height(uint32_t value) const;
    uint32_t Height() const;
};
template <> struct consume<Windows::Media::MediaProperties::IImageEncodingProperties> { template <typename D> using type = consume_Windows_Media_MediaProperties_IImageEncodingProperties<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics
{
    Windows::Media::MediaProperties::ImageEncodingProperties CreateJpeg() const;
    Windows::Media::MediaProperties::ImageEncodingProperties CreatePng() const;
    Windows::Media::MediaProperties::ImageEncodingProperties CreateJpegXR() const;
};
template <> struct consume<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics> { template <typename D> using type = consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2
{
    Windows::Media::MediaProperties::ImageEncodingProperties CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat const& format) const;
    Windows::Media::MediaProperties::ImageEncodingProperties CreateBmp() const;
};
template <> struct consume<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2> { template <typename D> using type = consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaEncodingProfile
{
    void Audio(Windows::Media::MediaProperties::AudioEncodingProperties const& value) const;
    Windows::Media::MediaProperties::AudioEncodingProperties Audio() const;
    void Video(Windows::Media::MediaProperties::VideoEncodingProperties const& value) const;
    Windows::Media::MediaProperties::VideoEncodingProperties Video() const;
    void Container(Windows::Media::MediaProperties::ContainerEncodingProperties const& value) const;
    Windows::Media::MediaProperties::ContainerEncodingProperties Container() const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaEncodingProfile> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfile<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics
{
    Windows::Media::MediaProperties::MediaEncodingProfile CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> CreateFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaEncodingProfileStatics> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2
{
    Windows::Media::MediaProperties::MediaEncodingProfile CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaEncodingProfileStatics2> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3
{
    Windows::Media::MediaProperties::MediaEncodingProfile CreateAlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateFlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateHevc(Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaEncodingProfileStatics3> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaEncodingProperties
{
    Windows::Media::MediaProperties::MediaPropertySet Properties() const;
    hstring Type() const;
    void Subtype(param::hstring const& value) const;
    hstring Subtype() const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaEncodingProperties> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProperties<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics
{
    hstring Aac() const;
    hstring AacAdts() const;
    hstring Ac3() const;
    hstring AmrNb() const;
    hstring AmrWb() const;
    hstring Argb32() const;
    hstring Asf() const;
    hstring Avi() const;
    hstring Bgra8() const;
    hstring Bmp() const;
    hstring Eac3() const;
    hstring Float() const;
    hstring Gif() const;
    hstring H263() const;
    hstring H264() const;
    hstring H264Es() const;
    hstring Hevc() const;
    hstring HevcEs() const;
    hstring Iyuv() const;
    hstring Jpeg() const;
    hstring JpegXr() const;
    hstring Mjpg() const;
    hstring Mpeg() const;
    hstring Mpeg1() const;
    hstring Mpeg2() const;
    hstring Mp3() const;
    hstring Mpeg4() const;
    hstring Nv12() const;
    hstring Pcm() const;
    hstring Png() const;
    hstring Rgb24() const;
    hstring Rgb32() const;
    hstring Tiff() const;
    hstring Wave() const;
    hstring Wma8() const;
    hstring Wma9() const;
    hstring Wmv3() const;
    hstring Wvc1() const;
    hstring Yuy2() const;
    hstring Yv12() const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2
{
    hstring Vp9() const;
    hstring L8() const;
    hstring L16() const;
    hstring D16() const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3
{
    hstring Alac() const;
    hstring Flac() const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMediaRatio
{
    void Numerator(uint32_t value) const;
    uint32_t Numerator() const;
    void Denominator(uint32_t value) const;
    uint32_t Denominator() const;
};
template <> struct consume<Windows::Media::MediaProperties::IMediaRatio> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaRatio<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics
{
    int32_t Simple() const;
    int32_t Main() const;
    int32_t SignalNoiseRatioScalable() const;
    int32_t SpatiallyScalable() const;
    int32_t High() const;
};
template <> struct consume<Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics> { template <typename D> using type = consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties
{
    void Bitrate(uint32_t value) const;
    uint32_t Bitrate() const;
    void Width(uint32_t value) const;
    uint32_t Width() const;
    void Height(uint32_t value) const;
    uint32_t Height() const;
    Windows::Media::MediaProperties::MediaRatio FrameRate() const;
    Windows::Media::MediaProperties::MediaRatio PixelAspectRatio() const;
};
template <> struct consume<Windows::Media::MediaProperties::IVideoEncodingProperties> { template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties2
{
    void SetFormatUserData(array_view<uint8_t const> value) const;
    void GetFormatUserData(com_array<uint8_t>& value) const;
    void ProfileId(int32_t value) const;
    int32_t ProfileId() const;
};
template <> struct consume<Windows::Media::MediaProperties::IVideoEncodingProperties2> { template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties2<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties3
{
    Windows::Media::MediaProperties::StereoscopicVideoPackingMode StereoscopicVideoPackingMode() const;
};
template <> struct consume<Windows::Media::MediaProperties::IVideoEncodingProperties3> { template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties3<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties4
{
    Windows::Media::MediaProperties::SphericalVideoFrameFormat SphericalVideoFrameFormat() const;
};
template <> struct consume<Windows::Media::MediaProperties::IVideoEncodingProperties4> { template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties4<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics
{
    Windows::Media::MediaProperties::VideoEncodingProperties CreateH264() const;
    Windows::Media::MediaProperties::VideoEncodingProperties CreateMpeg2() const;
    Windows::Media::MediaProperties::VideoEncodingProperties CreateUncompressed(param::hstring const& subtype, uint32_t width, uint32_t height) const;
};
template <> struct consume<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics> { template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics2
{
    Windows::Media::MediaProperties::VideoEncodingProperties CreateHevc() const;
};
template <> struct consume<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2> { template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics2<D>; };

template <> struct abi<Windows::Media::MediaProperties::IAudioEncodingProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Bitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Bitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ChannelCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ChannelCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_SampleRate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_SampleRate(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_BitsPerSample(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BitsPerSample(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IAudioEncodingProperties2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSpatial(bool* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetFormatUserData(uint32_t __valueSize, uint8_t* value) = 0;
    virtual HRESULT __stdcall GetFormatUserData(uint32_t* __valueSize, uint8_t** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IContainerEncodingProperties>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Media::MediaProperties::IH264ProfileIdsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConstrainedBaseline(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Baseline(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Extended(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Main(int32_t* value) = 0;
    virtual HRESULT __stdcall get_High(int32_t* value) = 0;
    virtual HRESULT __stdcall get_High10(int32_t* value) = 0;
    virtual HRESULT __stdcall get_High422(int32_t* value) = 0;
    virtual HRESULT __stdcall get_High444(int32_t* value) = 0;
    virtual HRESULT __stdcall get_StereoHigh(int32_t* value) = 0;
    virtual HRESULT __stdcall get_MultiviewHigh(int32_t* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IImageEncodingProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Width(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Height(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateJpeg(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreatePng(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateJpegXR(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateUncompressed(abi_t<Windows::Media::MediaProperties::MediaPixelFormat> format, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateBmp(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaEncodingProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Audio(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Audio(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Video(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Video(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Container(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Container(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaEncodingProfileStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateM4a(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateMp3(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWma(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateMp4(abi_t<Windows::Media::MediaProperties::VideoEncodingQuality> quality, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWmv(abi_t<Windows::Media::MediaProperties::VideoEncodingQuality> quality, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFromFileAsync(::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFromStreamAsync(::IUnknown* stream, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWav(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAvi(abi_t<Windows::Media::MediaProperties::VideoEncodingQuality> quality, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAlac(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFlac(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateHevc(abi_t<Windows::Media::MediaProperties::VideoEncodingQuality> quality, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaEncodingProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Type(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Subtype(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Subtype(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Aac(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AacAdts(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Ac3(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AmrNb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AmrWb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Argb32(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Asf(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Avi(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Bgra8(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Bmp(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Eac3(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Float(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Gif(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_H263(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_H264(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_H264Es(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Hevc(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HevcEs(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Iyuv(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Jpeg(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_JpegXr(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mjpg(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mpeg(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mpeg1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mpeg2(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mp3(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mpeg4(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Nv12(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Pcm(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Png(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rgb24(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rgb32(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Tiff(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Wave(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Wma8(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Wma9(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Wmv3(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Wvc1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Yuy2(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Yv12(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Vp9(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_L8(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_L16(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_D16(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Alac(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Flac(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMediaRatio>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Numerator(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Numerator(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Denominator(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Denominator(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Simple(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Main(int32_t* value) = 0;
    virtual HRESULT __stdcall get_SignalNoiseRatioScalable(int32_t* value) = 0;
    virtual HRESULT __stdcall get_SpatiallyScalable(int32_t* value) = 0;
    virtual HRESULT __stdcall get_High(int32_t* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IVideoEncodingProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Bitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Bitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Width(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Height(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_FrameRate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PixelAspectRatio(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IVideoEncodingProperties2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetFormatUserData(uint32_t __valueSize, uint8_t* value) = 0;
    virtual HRESULT __stdcall GetFormatUserData(uint32_t* __valueSize, uint8_t** value) = 0;
    virtual HRESULT __stdcall put_ProfileId(int32_t value) = 0;
    virtual HRESULT __stdcall get_ProfileId(int32_t* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IVideoEncodingProperties3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StereoscopicVideoPackingMode(abi_t<Windows::Media::MediaProperties::StereoscopicVideoPackingMode>* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IVideoEncodingProperties4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SphericalVideoFrameFormat(abi_t<Windows::Media::MediaProperties::SphericalVideoFrameFormat>* value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateH264(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateMpeg2(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateUncompressed(HSTRING subtype, uint32_t width, uint32_t height, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateHevc(::IUnknown** value) = 0;
};};

}
