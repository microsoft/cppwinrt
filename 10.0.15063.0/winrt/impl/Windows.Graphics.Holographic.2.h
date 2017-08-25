// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Perception.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.Graphics.Holographic.1.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic {

struct HolographicAdapterId
{
    uint32_t LowPart;
    int32_t HighPart;
};

struct HolographicStereoTransform
{
    Windows::Foundation::Numerics::float4x4 Left;
    Windows::Foundation::Numerics::float4x4 Right;
};

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
    static Windows::Graphics::Holographic::HolographicSpace CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window);
    static bool IsSupported();
    static bool IsAvailable();
    static event_token IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using IsAvailableChanged_revoker = factory_event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2>;
    static IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void IsAvailableChanged(event_token const& token);
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
