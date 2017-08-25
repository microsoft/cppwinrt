// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Perception.Spatial.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Devices.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core {

struct WINRT_EBO ICameraIntrinsics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraIntrinsics>
{
    ICameraIntrinsics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraIntrinsics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraIntrinsics2>
{
    ICameraIntrinsics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraIntrinsicsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraIntrinsicsFactory>
{
    ICameraIntrinsicsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDepthCorrelatedCoordinateMapper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDepthCorrelatedCoordinateMapper>,
    impl::require<IDepthCorrelatedCoordinateMapper, Windows::Foundation::IClosable>
{
    IDepthCorrelatedCoordinateMapper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameControlCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameControlCapabilities>
{
    IFrameControlCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameControlCapabilities2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameControlCapabilities2>
{
    IFrameControlCapabilities2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameController>
{
    IFrameController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameController2>
{
    IFrameController2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameExposureCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameExposureCapabilities>
{
    IFrameExposureCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameExposureCompensationCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameExposureCompensationCapabilities>
{
    IFrameExposureCompensationCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameExposureCompensationControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameExposureCompensationControl>
{
    IFrameExposureCompensationControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameExposureControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameExposureControl>
{
    IFrameExposureControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameFlashCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameFlashCapabilities>
{
    IFrameFlashCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameFlashControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameFlashControl>
{
    IFrameFlashControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameFocusCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameFocusCapabilities>
{
    IFrameFocusCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameFocusControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameFocusControl>
{
    IFrameFocusControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameIsoSpeedCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameIsoSpeedCapabilities>
{
    IFrameIsoSpeedCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameIsoSpeedControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameIsoSpeedControl>
{
    IFrameIsoSpeedControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVariablePhotoSequenceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVariablePhotoSequenceController>
{
    IVariablePhotoSequenceController(std::nullptr_t = nullptr) noexcept {}
};

}
