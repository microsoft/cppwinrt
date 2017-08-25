// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Capture.0.h"
#include "winrt/impl/Windows.Media.Devices.0.h"
#include "winrt/impl/Windows.Media.Devices.Core.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Perception.Spatial.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Capture.Frames.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames {

struct WINRT_EBO IBufferMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBufferMediaFrame>
{
    IBufferMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDepthMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDepthMediaFrame>
{
    IDepthMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDepthMediaFrame2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDepthMediaFrame2>
{
    IDepthMediaFrame2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDepthMediaFrameFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDepthMediaFrameFormat>
{
    IDepthMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInfraredMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInfraredMediaFrame>
{
    IInfraredMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameArrivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameArrivedEventArgs>
{
    IMediaFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameFormat>
{
    IMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameReader>,
    impl::require<IMediaFrameReader, Windows::Foundation::IClosable>
{
    IMediaFrameReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameReference>,
    impl::require<IMediaFrameReference, Windows::Foundation::IClosable>
{
    IMediaFrameReference(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSource>
{
    IMediaFrameSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameSourceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceController>
{
    IMediaFrameSourceController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameSourceController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceController2>
{
    IMediaFrameSourceController2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameSourceGetPropertyResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceGetPropertyResult>
{
    IMediaFrameSourceGetPropertyResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameSourceGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceGroup>
{
    IMediaFrameSourceGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameSourceGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceGroupStatics>
{
    IMediaFrameSourceGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaFrameSourceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaFrameSourceInfo>
{
    IMediaFrameSourceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMultiSourceMediaFrameArrivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMultiSourceMediaFrameArrivedEventArgs>
{
    IMultiSourceMediaFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMultiSourceMediaFrameReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMultiSourceMediaFrameReader>,
    impl::require<IMultiSourceMediaFrameReader, Windows::Foundation::IClosable>
{
    IMultiSourceMediaFrameReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMultiSourceMediaFrameReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMultiSourceMediaFrameReference>,
    impl::require<IMultiSourceMediaFrameReference, Windows::Foundation::IClosable>
{
    IMultiSourceMediaFrameReference(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoMediaFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoMediaFrame>
{
    IVideoMediaFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoMediaFrameFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoMediaFrameFormat>
{
    IVideoMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
};

}
