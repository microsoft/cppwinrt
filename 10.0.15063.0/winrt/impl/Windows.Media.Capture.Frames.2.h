// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"
#include "winrt/impl/Windows.Media.Devices.Core.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Capture.Frames.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames {

struct WINRT_EBO BufferMediaFrame :
    Windows::Media::Capture::Frames::IBufferMediaFrame
{
    BufferMediaFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DepthMediaFrame :
    Windows::Media::Capture::Frames::IDepthMediaFrame,
    impl::require<DepthMediaFrame, Windows::Media::Capture::Frames::IDepthMediaFrame2>
{
    DepthMediaFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DepthMediaFrameFormat :
    Windows::Media::Capture::Frames::IDepthMediaFrameFormat
{
    DepthMediaFrameFormat(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InfraredMediaFrame :
    Windows::Media::Capture::Frames::IInfraredMediaFrame
{
    InfraredMediaFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaFrameArrivedEventArgs :
    Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs
{
    MediaFrameArrivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaFrameFormat :
    Windows::Media::Capture::Frames::IMediaFrameFormat
{
    MediaFrameFormat(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaFrameReader :
    Windows::Media::Capture::Frames::IMediaFrameReader
{
    MediaFrameReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaFrameReference :
    Windows::Media::Capture::Frames::IMediaFrameReference
{
    MediaFrameReference(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaFrameSource :
    Windows::Media::Capture::Frames::IMediaFrameSource
{
    MediaFrameSource(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaFrameSourceController :
    Windows::Media::Capture::Frames::IMediaFrameSourceController,
    impl::require<MediaFrameSourceController, Windows::Media::Capture::Frames::IMediaFrameSourceController2>
{
    MediaFrameSourceController(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaFrameSourceGetPropertyResult :
    Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult
{
    MediaFrameSourceGetPropertyResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaFrameSourceGroup :
    Windows::Media::Capture::Frames::IMediaFrameSourceGroup
{
    MediaFrameSourceGroup(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> FromIdAsync(param::hstring const& id);
    static hstring GetDeviceSelector();
};

struct WINRT_EBO MediaFrameSourceInfo :
    Windows::Media::Capture::Frames::IMediaFrameSourceInfo
{
    MediaFrameSourceInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MultiSourceMediaFrameArrivedEventArgs :
    Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs
{
    MultiSourceMediaFrameArrivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MultiSourceMediaFrameReader :
    Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader
{
    MultiSourceMediaFrameReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MultiSourceMediaFrameReference :
    Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference
{
    MultiSourceMediaFrameReference(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoMediaFrame :
    Windows::Media::Capture::Frames::IVideoMediaFrame
{
    VideoMediaFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoMediaFrameFormat :
    Windows::Media::Capture::Frames::IVideoMediaFrameFormat
{
    VideoMediaFrameFormat(std::nullptr_t) noexcept {}
};

}
