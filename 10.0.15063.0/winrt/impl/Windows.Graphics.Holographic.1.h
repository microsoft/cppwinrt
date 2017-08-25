// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Perception.0.h"
#include "winrt/impl/Windows.Perception.Spatial.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.Graphics.Holographic.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic {

struct WINRT_EBO IHolographicCamera :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCamera>
{
    IHolographicCamera(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicCamera2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCamera2>,
    impl::require<IHolographicCamera2, Windows::Graphics::Holographic::IHolographicCamera>
{
    IHolographicCamera2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicCameraPose :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCameraPose>
{
    IHolographicCameraPose(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicCameraRenderingParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCameraRenderingParameters>
{
    IHolographicCameraRenderingParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicCameraRenderingParameters2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCameraRenderingParameters2>,
    impl::require<IHolographicCameraRenderingParameters2, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
{
    IHolographicCameraRenderingParameters2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicCameraViewportParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicCameraViewportParameters>
{
    IHolographicCameraViewportParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicDisplay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicDisplay>
{
    IHolographicDisplay(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicDisplayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicDisplayStatics>
{
    IHolographicDisplayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicFrame>
{
    IHolographicFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicFramePrediction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicFramePrediction>
{
    IHolographicFramePrediction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicSpace :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpace>
{
    IHolographicSpace(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicSpaceCameraAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpaceCameraAddedEventArgs>
{
    IHolographicSpaceCameraAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicSpaceCameraRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpaceCameraRemovedEventArgs>
{
    IHolographicSpaceCameraRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicSpaceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpaceStatics>
{
    IHolographicSpaceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHolographicSpaceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicSpaceStatics2>
{
    IHolographicSpaceStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
