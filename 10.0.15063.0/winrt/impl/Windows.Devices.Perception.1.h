// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Devices.Core.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Perception.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Perception {

struct WINRT_EBO [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IKnownCameraIntrinsicsPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownCameraIntrinsicsPropertiesStatics>
{
    IKnownCameraIntrinsicsPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IKnownPerceptionColorFrameSourcePropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownPerceptionColorFrameSourcePropertiesStatics>
{
    IKnownPerceptionColorFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")]] IKnownPerceptionDepthFrameSourcePropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownPerceptionDepthFrameSourcePropertiesStatics>
{
    IKnownPerceptionDepthFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] IKnownPerceptionFrameSourcePropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownPerceptionFrameSourcePropertiesStatics>
{
    IKnownPerceptionFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IKnownPerceptionFrameSourcePropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownPerceptionFrameSourcePropertiesStatics2>
{
    IKnownPerceptionFrameSourcePropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("KnownPerceptionInfraredFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IKnownPerceptionInfraredFrameSourcePropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownPerceptionInfraredFrameSourcePropertiesStatics>
{
    IKnownPerceptionInfraredFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IKnownPerceptionVideoFrameSourcePropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownPerceptionVideoFrameSourcePropertiesStatics>
{
    IKnownPerceptionVideoFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IKnownPerceptionVideoProfilePropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownPerceptionVideoProfilePropertiesStatics>
{
    IKnownPerceptionVideoProfilePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.VideoMediaFrame instead.")]] IPerceptionColorFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrame>,
    impl::require<IPerceptionColorFrame, Windows::Foundation::IClosable>
{
    IPerceptionColorFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] IPerceptionColorFrameArrivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrameArrivedEventArgs>
{
    IPerceptionColorFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] IPerceptionColorFrameReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrameReader>,
    impl::require<IPerceptionColorFrameReader, Windows::Foundation::IClosable>
{
    IPerceptionColorFrameReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionColorFrameSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrameSource>
{
    IPerceptionColorFrameSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionColorFrameSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrameSource2>
{
    IPerceptionColorFrameSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionColorFrameSourceAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrameSourceAddedEventArgs>
{
    IPerceptionColorFrameSourceAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionColorFrameSourceRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrameSourceRemovedEventArgs>
{
    IPerceptionColorFrameSourceRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionColorFrameSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrameSourceStatics>
{
    IPerceptionColorFrameSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] IPerceptionColorFrameSourceWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionColorFrameSourceWatcher>
{
    IPerceptionColorFrameSourceWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionControlSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionControlSession>,
    impl::require<IPerceptionControlSession, Windows::Foundation::IClosable>
{
    IPerceptionControlSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] IPerceptionDepthCorrelatedCameraIntrinsics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthCorrelatedCameraIntrinsics>
{
    IPerceptionDepthCorrelatedCameraIntrinsics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] IPerceptionDepthCorrelatedCoordinateMapper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthCorrelatedCoordinateMapper>
{
    IPerceptionDepthCorrelatedCoordinateMapper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")]] IPerceptionDepthFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrame>,
    impl::require<IPerceptionDepthFrame, Windows::Foundation::IClosable>
{
    IPerceptionDepthFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] IPerceptionDepthFrameArrivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrameArrivedEventArgs>
{
    IPerceptionDepthFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] IPerceptionDepthFrameReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrameReader>,
    impl::require<IPerceptionDepthFrameReader, Windows::Foundation::IClosable>
{
    IPerceptionDepthFrameReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionDepthFrameSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrameSource>
{
    IPerceptionDepthFrameSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionDepthFrameSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrameSource2>
{
    IPerceptionDepthFrameSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionDepthFrameSourceAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrameSourceAddedEventArgs>
{
    IPerceptionDepthFrameSourceAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionDepthFrameSourceRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrameSourceRemovedEventArgs>
{
    IPerceptionDepthFrameSourceRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionDepthFrameSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrameSourceStatics>
{
    IPerceptionDepthFrameSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] IPerceptionDepthFrameSourceWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionDepthFrameSourceWatcher>
{
    IPerceptionDepthFrameSourceWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionFrameSourcePropertiesChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFrameSourcePropertiesChangedEventArgs>
{
    IPerceptionFrameSourcePropertiesChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionFrameSourcePropertyChangeResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFrameSourcePropertyChangeResult>
{
    IPerceptionFrameSourcePropertyChangeResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.InfraredMediaFrame instead.")]] IPerceptionInfraredFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrame>,
    impl::require<IPerceptionInfraredFrame, Windows::Foundation::IClosable>
{
    IPerceptionInfraredFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] IPerceptionInfraredFrameArrivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrameArrivedEventArgs>
{
    IPerceptionInfraredFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] IPerceptionInfraredFrameReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrameReader>,
    impl::require<IPerceptionInfraredFrameReader, Windows::Foundation::IClosable>
{
    IPerceptionInfraredFrameReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionInfraredFrameSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrameSource>
{
    IPerceptionInfraredFrameSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionInfraredFrameSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrameSource2>
{
    IPerceptionInfraredFrameSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionInfraredFrameSourceAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrameSourceAddedEventArgs>
{
    IPerceptionInfraredFrameSourceAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] IPerceptionInfraredFrameSourceRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrameSourceRemovedEventArgs>
{
    IPerceptionInfraredFrameSourceRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] IPerceptionInfraredFrameSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrameSourceStatics>
{
    IPerceptionInfraredFrameSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] IPerceptionInfraredFrameSourceWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionInfraredFrameSourceWatcher>
{
    IPerceptionInfraredFrameSourceWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")]] IPerceptionVideoProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionVideoProfile>
{
    IPerceptionVideoProfile(std::nullptr_t = nullptr) noexcept {}
};

}
