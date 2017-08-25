// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Devices.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core {

struct WINRT_EBO CameraIntrinsics :
    Windows::Media::Devices::Core::ICameraIntrinsics,
    impl::require<CameraIntrinsics, Windows::Media::Devices::Core::ICameraIntrinsics2>
{
    CameraIntrinsics(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DepthCorrelatedCoordinateMapper :
    Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper
{
    DepthCorrelatedCoordinateMapper(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameControlCapabilities :
    Windows::Media::Devices::Core::IFrameControlCapabilities,
    impl::require<FrameControlCapabilities, Windows::Media::Devices::Core::IFrameControlCapabilities2>
{
    FrameControlCapabilities(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameController :
    Windows::Media::Devices::Core::IFrameController,
    impl::require<FrameController, Windows::Media::Devices::Core::IFrameController2>
{
    FrameController(std::nullptr_t) noexcept {}
    FrameController();
};

struct WINRT_EBO FrameExposureCapabilities :
    Windows::Media::Devices::Core::IFrameExposureCapabilities
{
    FrameExposureCapabilities(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameExposureCompensationCapabilities :
    Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities
{
    FrameExposureCompensationCapabilities(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameExposureCompensationControl :
    Windows::Media::Devices::Core::IFrameExposureCompensationControl
{
    FrameExposureCompensationControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameExposureControl :
    Windows::Media::Devices::Core::IFrameExposureControl
{
    FrameExposureControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameFlashCapabilities :
    Windows::Media::Devices::Core::IFrameFlashCapabilities
{
    FrameFlashCapabilities(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameFlashControl :
    Windows::Media::Devices::Core::IFrameFlashControl
{
    FrameFlashControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameFocusCapabilities :
    Windows::Media::Devices::Core::IFrameFocusCapabilities
{
    FrameFocusCapabilities(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameFocusControl :
    Windows::Media::Devices::Core::IFrameFocusControl
{
    FrameFocusControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameIsoSpeedCapabilities :
    Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities
{
    FrameIsoSpeedCapabilities(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameIsoSpeedControl :
    Windows::Media::Devices::Core::IFrameIsoSpeedControl
{
    FrameIsoSpeedControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VariablePhotoSequenceController :
    Windows::Media::Devices::Core::IVariablePhotoSequenceController
{
    VariablePhotoSequenceController(std::nullptr_t) noexcept {}
};

}
