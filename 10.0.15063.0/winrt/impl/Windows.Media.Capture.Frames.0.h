// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct DeviceInformation;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct IDirect3DSurface;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Media {

struct VideoFrame;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

enum class MediaStreamType;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices {

struct VideoDeviceController;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core {

struct CameraIntrinsics;
struct DepthCorrelatedCoordinateMapper;

}

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

struct MediaRatio;

}

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial {

struct SpatialCoordinateSystem;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames {

enum class MediaFrameReaderStartStatus
{
    Success = 0,
    UnknownFailure = 1,
    DeviceNotAvailable = 2,
    OutputFormatNotSupported = 3,
    ExclusiveControlNotAvailable = 4,
};

enum class MediaFrameSourceGetPropertyStatus
{
    Success = 0,
    UnknownFailure = 1,
    NotSupported = 2,
    DeviceNotAvailable = 3,
    MaxPropertyValueSizeTooSmall = 4,
    MaxPropertyValueSizeRequired = 5,
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

enum class MultiSourceMediaFrameReaderStartStatus
{
    Success = 0,
    NotSupported = 1,
    InsufficientResources = 2,
    DeviceNotAvailable = 3,
    UnknownFailure = 4,
};

struct IBufferMediaFrame;
struct IDepthMediaFrame;
struct IDepthMediaFrame2;
struct IDepthMediaFrameFormat;
struct IInfraredMediaFrame;
struct IMediaFrameArrivedEventArgs;
struct IMediaFrameFormat;
struct IMediaFrameReader;
struct IMediaFrameReference;
struct IMediaFrameSource;
struct IMediaFrameSourceController;
struct IMediaFrameSourceController2;
struct IMediaFrameSourceGetPropertyResult;
struct IMediaFrameSourceGroup;
struct IMediaFrameSourceGroupStatics;
struct IMediaFrameSourceInfo;
struct IMultiSourceMediaFrameArrivedEventArgs;
struct IMultiSourceMediaFrameReader;
struct IMultiSourceMediaFrameReference;
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
struct MultiSourceMediaFrameArrivedEventArgs;
struct MultiSourceMediaFrameReader;
struct MultiSourceMediaFrameReference;
struct VideoMediaFrame;
struct VideoMediaFrameFormat;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Capture::Frames::IBufferMediaFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IDepthMediaFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IDepthMediaFrame2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IDepthMediaFrameFormat>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IInfraredMediaFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameFormat>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameReader>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameReference>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameSource>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameSourceController>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameSourceController2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameSourceGroup>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMediaFrameSourceInfo>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IVideoMediaFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::IVideoMediaFrameFormat>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Frames::BufferMediaFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::DepthMediaFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::DepthMediaFrameFormat>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::InfraredMediaFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameFormat>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameReader>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameReference>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameSource>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameSourceController>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameSourceGroup>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameSourceInfo>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MultiSourceMediaFrameReference>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::VideoMediaFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::VideoMediaFrameFormat>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameReaderStartStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameSourceKind>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus>{ using type = enum_category; };
template <> struct name<Windows::Media::Capture::Frames::IBufferMediaFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IBufferMediaFrame" }; };
template <> struct name<Windows::Media::Capture::Frames::IDepthMediaFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IDepthMediaFrame" }; };
template <> struct name<Windows::Media::Capture::Frames::IDepthMediaFrame2>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IDepthMediaFrame2" }; };
template <> struct name<Windows::Media::Capture::Frames::IDepthMediaFrameFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IDepthMediaFrameFormat" }; };
template <> struct name<Windows::Media::Capture::Frames::IInfraredMediaFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IInfraredMediaFrame" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameFormat" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameReader>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameReader" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameReference>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameReference" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameSource>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameSource" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameSourceController>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameSourceController" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameSourceController2>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameSourceController2" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameSourceGroup>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameSourceGroup" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics" }; };
template <> struct name<Windows::Media::Capture::Frames::IMediaFrameSourceInfo>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo" }; };
template <> struct name<Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs" }; };
template <> struct name<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader" }; };
template <> struct name<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference" }; };
template <> struct name<Windows::Media::Capture::Frames::IVideoMediaFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IVideoMediaFrame" }; };
template <> struct name<Windows::Media::Capture::Frames::IVideoMediaFrameFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.IVideoMediaFrameFormat" }; };
template <> struct name<Windows::Media::Capture::Frames::BufferMediaFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.BufferMediaFrame" }; };
template <> struct name<Windows::Media::Capture::Frames::DepthMediaFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.DepthMediaFrame" }; };
template <> struct name<Windows::Media::Capture::Frames::DepthMediaFrameFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.DepthMediaFrameFormat" }; };
template <> struct name<Windows::Media::Capture::Frames::InfraredMediaFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.InfraredMediaFrame" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameFormat" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameReader>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameReader" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameReference>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameReference" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameSource>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameSource" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameSourceController>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameSourceController" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameSourceGroup>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameSourceGroup" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameSourceInfo>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameSourceInfo" }; };
template <> struct name<Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs" }; };
template <> struct name<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReader" }; };
template <> struct name<Windows::Media::Capture::Frames::MultiSourceMediaFrameReference>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReference" }; };
template <> struct name<Windows::Media::Capture::Frames::VideoMediaFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.VideoMediaFrame" }; };
template <> struct name<Windows::Media::Capture::Frames::VideoMediaFrameFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.VideoMediaFrameFormat" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameReaderStartStatus>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameReaderStartStatus" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyStatus" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameSourceKind>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameSourceKind" }; };
template <> struct name<Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MediaFrameSourceSetPropertyStatus" }; };
template <> struct name<Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus>{ static constexpr auto & value{ L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReaderStartStatus" }; };
template <> struct guid<Windows::Media::Capture::Frames::IBufferMediaFrame>{ static constexpr GUID value{ 0xB5B153C7,0x9B84,0x4062,{ 0xB7,0x9C,0xA3,0x65,0xB2,0x59,0x68,0x54 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IDepthMediaFrame>{ static constexpr GUID value{ 0x47135E4F,0x8549,0x45C0,{ 0x92,0x5B,0x80,0xD3,0x5E,0xFD,0xB1,0x0A } }; };
template <> struct guid<Windows::Media::Capture::Frames::IDepthMediaFrame2>{ static constexpr GUID value{ 0x6CCA473D,0xC4A4,0x4176,{ 0xB0,0xCD,0x33,0xEA,0xE3,0xB3,0x5A,0xA3 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IDepthMediaFrameFormat>{ static constexpr GUID value{ 0xC312CF40,0xD729,0x453E,{ 0x87,0x80,0x2E,0x04,0xF1,0x40,0xD2,0x8E } }; };
template <> struct guid<Windows::Media::Capture::Frames::IInfraredMediaFrame>{ static constexpr GUID value{ 0x3FD13503,0x004B,0x4F0E,{ 0x91,0xAC,0x46,0x52,0x99,0xB4,0x16,0x58 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>{ static constexpr GUID value{ 0x0B430ADD,0xA490,0x4435,{ 0xAD,0xA1,0x9A,0xFF,0xD5,0x52,0x39,0xF7 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameFormat>{ static constexpr GUID value{ 0x71902B4E,0xB279,0x4A97,{ 0xA9,0xDB,0xBD,0x5A,0x2F,0xB7,0x8F,0x39 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameReader>{ static constexpr GUID value{ 0xE4C94395,0x2028,0x48ED,{ 0x90,0xB0,0xD1,0xC1,0xB1,0x62,0xE2,0x4C } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameReference>{ static constexpr GUID value{ 0xF6B88641,0xF0DC,0x4044,{ 0x8D,0xC9,0x96,0x1C,0xED,0xD0,0x5B,0xAD } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameSource>{ static constexpr GUID value{ 0xD6782953,0x90DB,0x46A8,{ 0x8A,0xDD,0x2A,0xA8,0x84,0xA8,0xD2,0x53 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameSourceController>{ static constexpr GUID value{ 0x6D076635,0x316D,0x4B8F,{ 0xB7,0xB6,0xEE,0xB0,0x4A,0x8C,0x65,0x25 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameSourceController2>{ static constexpr GUID value{ 0xEFC49FD4,0xFCF2,0x4A03,{ 0xB4,0xE4,0xAC,0x96,0x28,0x73,0x9B,0xEE } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>{ static constexpr GUID value{ 0x088616C2,0x3A64,0x4BD5,{ 0xBD,0x2B,0xE7,0xC8,0x98,0xD2,0xF3,0x7A } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameSourceGroup>{ static constexpr GUID value{ 0x7F605B87,0x4832,0x4B5F,{ 0xAE,0x3D,0x41,0x2F,0xAA,0xB3,0x7D,0x34 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>{ static constexpr GUID value{ 0x1C48BFC5,0x436F,0x4508,{ 0x94,0xCF,0xD5,0xD8,0xB7,0x32,0x64,0x45 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMediaFrameSourceInfo>{ static constexpr GUID value{ 0x87BDC9CD,0x4601,0x408F,{ 0x91,0xCF,0x03,0x83,0x18,0xCD,0x0A,0xF3 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>{ static constexpr GUID value{ 0x63115E01,0xCF51,0x48FD,{ 0xAA,0xB0,0x6D,0x69,0x3E,0xB4,0x81,0x27 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>{ static constexpr GUID value{ 0x8D144402,0xF763,0x488D,{ 0x98,0xF2,0xB4,0x37,0xBC,0xF0,0x75,0xE7 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>{ static constexpr GUID value{ 0x21964B1A,0x7FE2,0x44D6,{ 0x92,0xE5,0x29,0x8E,0x6D,0x28,0x10,0xE9 } }; };
template <> struct guid<Windows::Media::Capture::Frames::IVideoMediaFrame>{ static constexpr GUID value{ 0x00DD4CCB,0x32BD,0x4FE1,{ 0xA0,0x13,0x7C,0xC1,0x3C,0xF5,0xDB,0xCF } }; };
template <> struct guid<Windows::Media::Capture::Frames::IVideoMediaFrameFormat>{ static constexpr GUID value{ 0x46027FC0,0xD71B,0x45C7,{ 0x8F,0x14,0x6D,0x9A,0x0A,0xE6,0x04,0xE4 } }; };
template <> struct default_interface<Windows::Media::Capture::Frames::BufferMediaFrame>{ using type = Windows::Media::Capture::Frames::IBufferMediaFrame; };
template <> struct default_interface<Windows::Media::Capture::Frames::DepthMediaFrame>{ using type = Windows::Media::Capture::Frames::IDepthMediaFrame; };
template <> struct default_interface<Windows::Media::Capture::Frames::DepthMediaFrameFormat>{ using type = Windows::Media::Capture::Frames::IDepthMediaFrameFormat; };
template <> struct default_interface<Windows::Media::Capture::Frames::InfraredMediaFrame>{ using type = Windows::Media::Capture::Frames::IInfraredMediaFrame; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs>{ using type = Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameFormat>{ using type = Windows::Media::Capture::Frames::IMediaFrameFormat; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameReader>{ using type = Windows::Media::Capture::Frames::IMediaFrameReader; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameReference>{ using type = Windows::Media::Capture::Frames::IMediaFrameReference; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameSource>{ using type = Windows::Media::Capture::Frames::IMediaFrameSource; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameSourceController>{ using type = Windows::Media::Capture::Frames::IMediaFrameSourceController; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult>{ using type = Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameSourceGroup>{ using type = Windows::Media::Capture::Frames::IMediaFrameSourceGroup; };
template <> struct default_interface<Windows::Media::Capture::Frames::MediaFrameSourceInfo>{ using type = Windows::Media::Capture::Frames::IMediaFrameSourceInfo; };
template <> struct default_interface<Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs>{ using type = Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader>{ using type = Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader; };
template <> struct default_interface<Windows::Media::Capture::Frames::MultiSourceMediaFrameReference>{ using type = Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference; };
template <> struct default_interface<Windows::Media::Capture::Frames::VideoMediaFrame>{ using type = Windows::Media::Capture::Frames::IVideoMediaFrame; };
template <> struct default_interface<Windows::Media::Capture::Frames::VideoMediaFrameFormat>{ using type = Windows::Media::Capture::Frames::IVideoMediaFrameFormat; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IBufferMediaFrame
{
    Windows::Media::Capture::Frames::MediaFrameReference FrameReference() const;
    Windows::Storage::Streams::IBuffer Buffer() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IBufferMediaFrame> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IBufferMediaFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IDepthMediaFrame
{
    Windows::Media::Capture::Frames::MediaFrameReference FrameReference() const;
    Windows::Media::Capture::Frames::VideoMediaFrame VideoMediaFrame() const;
    Windows::Media::Capture::Frames::DepthMediaFrameFormat DepthFormat() const;
    Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper TryCreateCoordinateMapper(Windows::Media::Devices::Core::CameraIntrinsics const& cameraIntrinsics, Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
};
template <> struct consume<Windows::Media::Capture::Frames::IDepthMediaFrame> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IDepthMediaFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IDepthMediaFrame2
{
    uint32_t MaxReliableDepth() const;
    uint32_t MinReliableDepth() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IDepthMediaFrame2> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IDepthMediaFrame2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IDepthMediaFrameFormat
{
    Windows::Media::Capture::Frames::VideoMediaFrameFormat VideoFormat() const;
    double DepthScaleInMeters() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IDepthMediaFrameFormat> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IDepthMediaFrameFormat<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IInfraredMediaFrame
{
    Windows::Media::Capture::Frames::MediaFrameReference FrameReference() const;
    Windows::Media::Capture::Frames::VideoMediaFrame VideoMediaFrame() const;
    bool IsIlluminated() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IInfraredMediaFrame> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IInfraredMediaFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameArrivedEventArgs
{
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameArrivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameFormat
{
    hstring MajorType() const;
    hstring Subtype() const;
    Windows::Media::MediaProperties::MediaRatio FrameRate() const;
    Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> Properties() const;
    Windows::Media::Capture::Frames::VideoMediaFrameFormat VideoFormat() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameFormat> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameFormat<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameReader
{
    event_token FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> const& handler) const;
    using FrameArrived_revoker = event_revoker<Windows::Media::Capture::Frames::IMediaFrameReader>;
    FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> const& handler) const;
    void FrameArrived(event_token const& token) const;
    Windows::Media::Capture::Frames::MediaFrameReference TryAcquireLatestFrame() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameReader> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameReader<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameReference
{
    Windows::Media::Capture::Frames::MediaFrameSourceKind SourceKind() const;
    Windows::Media::Capture::Frames::MediaFrameFormat Format() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> SystemRelativeTime() const;
    Windows::Foundation::TimeSpan Duration() const;
    Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> Properties() const;
    Windows::Media::Capture::Frames::BufferMediaFrame BufferMediaFrame() const;
    Windows::Media::Capture::Frames::VideoMediaFrame VideoMediaFrame() const;
    Windows::Perception::Spatial::SpatialCoordinateSystem CoordinateSystem() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameReference> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameSource
{
    Windows::Media::Capture::Frames::MediaFrameSourceInfo Info() const;
    Windows::Media::Capture::Frames::MediaFrameSourceController Controller() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameFormat> SupportedFormats() const;
    Windows::Media::Capture::Frames::MediaFrameFormat CurrentFormat() const;
    Windows::Foundation::IAsyncAction SetFormatAsync(Windows::Media::Capture::Frames::MediaFrameFormat const& format) const;
    event_token FormatChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using FormatChanged_revoker = event_revoker<Windows::Media::Capture::Frames::IMediaFrameSource>;
    FormatChanged_revoker FormatChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    void FormatChanged(event_token const& token) const;
    Windows::Media::Devices::Core::CameraIntrinsics TryGetCameraIntrinsics(Windows::Media::Capture::Frames::MediaFrameFormat const& format) const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameSource> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceController
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> GetPropertyAsync(param::hstring const& propertyId) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> SetPropertyAsync(param::hstring const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
    Windows::Media::Devices::VideoDeviceController VideoDeviceController() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameSourceController> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceController<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceController2
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> GetPropertyByExtendedIdAsync(array_view<uint8_t const> extendedPropertyId, optional<uint32_t> const& maxPropertyValueSize) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> SetPropertyByExtendedIdAsync(array_view<uint8_t const> extendedPropertyId, array_view<uint8_t const> propertyValue) const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameSourceController2> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceController2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult
{
    Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus Status() const;
    Windows::Foundation::IInspectable Value() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroup
{
    hstring Id() const;
    hstring DisplayName() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo> SourceInfos() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameSourceGroup> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroup<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> FindAllAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> FromIdAsync(param::hstring const& id) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo
{
    hstring Id() const;
    Windows::Media::Capture::MediaStreamType MediaStreamType() const;
    Windows::Media::Capture::Frames::MediaFrameSourceKind SourceKind() const;
    Windows::Media::Capture::Frames::MediaFrameSourceGroup SourceGroup() const;
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
    Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> Properties() const;
    Windows::Perception::Spatial::SpatialCoordinateSystem CoordinateSystem() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMediaFrameSourceInfo> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameArrivedEventArgs
{
};
template <> struct consume<Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameArrivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader
{
    event_token FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader, Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> const& handler) const;
    using FrameArrived_revoker = event_revoker<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>;
    FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader, Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> const& handler) const;
    void FrameArrived(event_token const& token) const;
    Windows::Media::Capture::Frames::MultiSourceMediaFrameReference TryAcquireLatestFrame() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReference
{
    Windows::Media::Capture::Frames::MediaFrameReference TryGetFrameReferenceBySourceId(param::hstring const& sourceId) const;
};
template <> struct consume<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReference<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IVideoMediaFrame
{
    Windows::Media::Capture::Frames::MediaFrameReference FrameReference() const;
    Windows::Media::Capture::Frames::VideoMediaFrameFormat VideoFormat() const;
    Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap() const;
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface Direct3DSurface() const;
    Windows::Media::Devices::Core::CameraIntrinsics CameraIntrinsics() const;
    Windows::Media::Capture::Frames::InfraredMediaFrame InfraredMediaFrame() const;
    Windows::Media::Capture::Frames::DepthMediaFrame DepthMediaFrame() const;
    Windows::Media::VideoFrame GetVideoFrame() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IVideoMediaFrame> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Frames_IVideoMediaFrameFormat
{
    Windows::Media::Capture::Frames::MediaFrameFormat MediaFrameFormat() const;
    Windows::Media::Capture::Frames::DepthMediaFrameFormat DepthFormat() const;
    uint32_t Width() const;
    uint32_t Height() const;
};
template <> struct consume<Windows::Media::Capture::Frames::IVideoMediaFrameFormat> { template <typename D> using type = consume_Windows_Media_Capture_Frames_IVideoMediaFrameFormat<D>; };

template <> struct abi<Windows::Media::Capture::Frames::IBufferMediaFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameReference(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Buffer(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IDepthMediaFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameReference(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoMediaFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DepthFormat(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryCreateCoordinateMapper(::IUnknown* cameraIntrinsics, ::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IDepthMediaFrame2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxReliableDepth(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MinReliableDepth(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IDepthMediaFrameFormat>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoFormat(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DepthScaleInMeters(double* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IInfraredMediaFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameReference(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoMediaFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsIlluminated(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameFormat>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MajorType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Subtype(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FrameRate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoFormat(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_FrameArrived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FrameArrived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall TryAcquireLatestFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** action) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameReference>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceKind(abi_t<Windows::Media::Capture::Frames::MediaFrameSourceKind>* value) = 0;
    virtual HRESULT __stdcall get_Format(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SystemRelativeTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BufferMediaFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoMediaFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Info(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Controller(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedFormats(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CurrentFormat(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetFormatAsync(::IUnknown* format, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_FormatChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FormatChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall TryGetCameraIntrinsics(::IUnknown* format, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameSourceController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPropertyAsync(HSTRING propertyId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetPropertyAsync(HSTRING propertyId, ::IUnknown* propertyValue, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameSourceController2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPropertyByExtendedIdAsync(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, ::IUnknown* maxPropertyValueSize, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetPropertyByExtendedIdAsync(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, uint32_t __propertyValueSize, uint8_t* propertyValue, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus>* value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameSourceGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SourceInfos(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAllAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMediaFrameSourceInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MediaStreamType(abi_t<Windows::Media::Capture::MediaStreamType>* value) = 0;
    virtual HRESULT __stdcall get_SourceKind(abi_t<Windows::Media::Capture::Frames::MediaFrameSourceKind>* value) = 0;
    virtual HRESULT __stdcall get_SourceGroup(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceInformation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_FrameArrived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FrameArrived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall TryAcquireLatestFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** action) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryGetFrameReferenceBySourceId(HSTRING sourceId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IVideoMediaFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameReference(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoFormat(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SoftwareBitmap(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Direct3DSurface(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CameraIntrinsics(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InfraredMediaFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DepthMediaFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetVideoFrame(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Frames::IVideoMediaFrameFormat>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MediaFrameFormat(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DepthFormat(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
};};

}
