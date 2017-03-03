// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.Holographic.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Graphics::Holographic {

struct WINRT_EBO HolographicCamera :
    Windows::Graphics::Holographic::IHolographicCamera,
    impl::require<HolographicCamera, Windows::Graphics::Holographic::IHolographicCamera2>
{
    HolographicCamera(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicCameraPose :
    Windows::Graphics::Holographic::IHolographicCameraPose
{
    HolographicCameraPose(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicCameraRenderingParameters :
    Windows::Graphics::Holographic::IHolographicCameraRenderingParameters,
    impl::require<HolographicCameraRenderingParameters, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
{
    HolographicCameraRenderingParameters(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicCameraViewportParameters :
    Windows::Graphics::Holographic::IHolographicCameraViewportParameters
{
    HolographicCameraViewportParameters(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicDisplay :
    Windows::Graphics::Holographic::IHolographicDisplay
{
    HolographicDisplay(std::nullptr_t) noexcept {}
    static Windows::Graphics::Holographic::HolographicDisplay GetDefault();
};

struct WINRT_EBO HolographicFrame :
    Windows::Graphics::Holographic::IHolographicFrame
{
    HolographicFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicFramePrediction :
    Windows::Graphics::Holographic::IHolographicFramePrediction
{
    HolographicFramePrediction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicSpace :
    Windows::Graphics::Holographic::IHolographicSpace
{
    HolographicSpace(std::nullptr_t) noexcept {}
    static Windows::Graphics::Holographic::HolographicSpace CreateForCoreWindow(const Windows::UI::Core::CoreWindow & window);
    static bool IsSupported();
    static bool IsAvailable();
    static event_token IsAvailableChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler);
    using IsAvailableChanged_revoker = factory_event_revoker<IHolographicSpaceStatics2>;
    static IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler);
    static void IsAvailableChanged(event_token token);
};

struct WINRT_EBO HolographicSpaceCameraAddedEventArgs :
    Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs
{
    HolographicSpaceCameraAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicSpaceCameraRemovedEventArgs :
    Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs
{
    HolographicSpaceCameraRemovedEventArgs(std::nullptr_t) noexcept {}
};

}

}
