// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

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
struct IHolographicCameraPose;
struct IHolographicCameraRenderingParameters;
struct IHolographicFrame;
struct IHolographicFramePrediction;
struct IHolographicSpace;
struct IHolographicSpaceCameraAddedEventArgs;
struct IHolographicSpaceCameraRemovedEventArgs;
struct IHolographicSpaceStatics;
struct HolographicCamera;
struct HolographicCameraPose;
struct HolographicCameraRenderingParameters;
struct HolographicFrame;
struct HolographicFramePrediction;
struct HolographicSpace;
struct HolographicSpaceCameraAddedEventArgs;
struct HolographicSpaceCameraRemovedEventArgs;

}

namespace Windows::Graphics::Holographic {

struct IHolographicCamera;
struct IHolographicCameraPose;
struct IHolographicCameraRenderingParameters;
struct IHolographicFrame;
struct IHolographicFramePrediction;
struct IHolographicSpace;
struct IHolographicSpaceCameraAddedEventArgs;
struct IHolographicSpaceCameraRemovedEventArgs;
struct IHolographicSpaceStatics;
struct HolographicCamera;
struct HolographicCameraPose;
struct HolographicCameraRenderingParameters;
struct HolographicFrame;
struct HolographicFramePrediction;
struct HolographicSpace;
struct HolographicSpaceCameraAddedEventArgs;
struct HolographicSpaceCameraRemovedEventArgs;

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

}

}
