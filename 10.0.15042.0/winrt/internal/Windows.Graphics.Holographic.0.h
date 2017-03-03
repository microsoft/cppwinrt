// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics::Holographic {

struct HolographicStereoTransform;
struct HolographicAdapterId;

}

namespace Windows::Graphics::Holographic {

using HolographicStereoTransform = ABI::Windows::Graphics::Holographic::HolographicStereoTransform;
using HolographicAdapterId = ABI::Windows::Graphics::Holographic::HolographicAdapterId;

}

namespace ABI::Windows::Graphics::Holographic {

struct IHolographicCamera;
struct IHolographicCamera2;
struct IHolographicCameraPose;
struct IHolographicCameraRenderingParameters;
struct IHolographicCameraRenderingParameters2;
struct IHolographicCameraViewportParameters;
struct IHolographicDisplay;
struct IHolographicDisplayStatics;
struct IHolographicFrame;
struct IHolographicFramePrediction;
struct IHolographicSpace;
struct IHolographicSpaceCameraAddedEventArgs;
struct IHolographicSpaceCameraRemovedEventArgs;
struct IHolographicSpaceStatics;
struct IHolographicSpaceStatics2;
struct HolographicCamera;
struct HolographicCameraPose;
struct HolographicCameraRenderingParameters;
struct HolographicCameraViewportParameters;
struct HolographicDisplay;
struct HolographicFrame;
struct HolographicFramePrediction;
struct HolographicSpace;
struct HolographicSpaceCameraAddedEventArgs;
struct HolographicSpaceCameraRemovedEventArgs;

}

namespace Windows::Graphics::Holographic {

struct IHolographicCamera;
struct IHolographicCamera2;
struct IHolographicCameraPose;
struct IHolographicCameraRenderingParameters;
struct IHolographicCameraRenderingParameters2;
struct IHolographicCameraViewportParameters;
struct IHolographicDisplay;
struct IHolographicDisplayStatics;
struct IHolographicFrame;
struct IHolographicFramePrediction;
struct IHolographicSpace;
struct IHolographicSpaceCameraAddedEventArgs;
struct IHolographicSpaceCameraRemovedEventArgs;
struct IHolographicSpaceStatics;
struct IHolographicSpaceStatics2;
struct HolographicCamera;
struct HolographicCameraPose;
struct HolographicCameraRenderingParameters;
struct HolographicCameraViewportParameters;
struct HolographicDisplay;
struct HolographicFrame;
struct HolographicFramePrediction;
struct HolographicSpace;
struct HolographicSpaceCameraAddedEventArgs;
struct HolographicSpaceCameraRemovedEventArgs;

}

namespace Windows::Graphics::Holographic {

template <typename T> struct impl_IHolographicCamera;
template <typename T> struct impl_IHolographicCamera2;
template <typename T> struct impl_IHolographicCameraPose;
template <typename T> struct impl_IHolographicCameraRenderingParameters;
template <typename T> struct impl_IHolographicCameraRenderingParameters2;
template <typename T> struct impl_IHolographicCameraViewportParameters;
template <typename T> struct impl_IHolographicDisplay;
template <typename T> struct impl_IHolographicDisplayStatics;
template <typename T> struct impl_IHolographicFrame;
template <typename T> struct impl_IHolographicFramePrediction;
template <typename T> struct impl_IHolographicSpace;
template <typename T> struct impl_IHolographicSpaceCameraAddedEventArgs;
template <typename T> struct impl_IHolographicSpaceCameraRemovedEventArgs;
template <typename T> struct impl_IHolographicSpaceStatics;
template <typename T> struct impl_IHolographicSpaceStatics2;

}

namespace Windows::Graphics::Holographic {

enum class HolographicFramePresentResult
{
    Success = 0,
    DeviceRemoved = 1,
};

enum class HolographicFramePresentWaitBehavior
{
    WaitForFrameToFinish = 0,
    DoNotWaitForFrameToFinish = 1,
};

enum class HolographicReprojectionMode
{
    PositionAndOrientation = 0,
    OrientationOnly = 1,
    Disabled = 2,
};

}

}
