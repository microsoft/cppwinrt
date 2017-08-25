// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct IDirect3DDevice;
struct IDirect3DSurface;

}

WINRT_EXPORT namespace winrt::Windows::Perception {

struct PerceptionTimestamp;

}

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial {

struct SpatialBoundingFrustum;
struct SpatialCoordinateSystem;
struct SpatialLocator;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct CoreWindow;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic {

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
struct HolographicAdapterId;
struct HolographicStereoTransform;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Holographic::IHolographicCamera>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCamera2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraPose>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicDisplay>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicDisplayStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicFrame>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicFramePrediction>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpace>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicCamera>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicCameraPose>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicCameraViewportParameters>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicDisplay>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicFrame>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicFramePrediction>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicSpace>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicFramePresentResult>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicReprojectionMode>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicAdapterId>{ using type = struct_category<uint32_t,int32_t>; };
template <> struct category<Windows::Graphics::Holographic::HolographicStereoTransform>{ using type = struct_category<Windows::Foundation::Numerics::float4x4,Windows::Foundation::Numerics::float4x4>; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCamera>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCamera2>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera2" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraPose>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraPose" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraViewportParameters" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicDisplay>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplay" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicDisplayStatics>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplayStatics" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicFrame>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrame" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicFramePrediction>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFramePrediction" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpace>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpace" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceStatics>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceStatics" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceStatics2" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicCamera>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCamera" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicCameraPose>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraPose" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraRenderingParameters" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicCameraViewportParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraViewportParameters" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicDisplay>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicDisplay" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicFrame>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFrame" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicFramePrediction>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePrediction" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicSpace>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicSpace" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicFramePresentResult>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePresentResult" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePresentWaitBehavior" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicReprojectionMode>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicReprojectionMode" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicAdapterId>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicAdapterId" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicStereoTransform>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicStereoTransform" }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCamera>{ static constexpr GUID value{ 0xE4E98445,0x9BED,0x4980,{ 0x9B,0xA0,0xE8,0x76,0x80,0xD1,0xCB,0x74 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCamera2>{ static constexpr GUID value{ 0xB55B9F1A,0xBA8C,0x4F84,{ 0xAD,0x79,0x2E,0x7E,0x1E,0x24,0x50,0xF3 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraPose>{ static constexpr GUID value{ 0x0D7D7E30,0x12DE,0x45BD,{ 0x91,0x2B,0xC7,0xF6,0x56,0x15,0x99,0xD1 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ static constexpr GUID value{ 0x8EAC2ED1,0x5BF4,0x4E16,{ 0x82,0x36,0xAE,0x08,0x00,0xC1,0x1D,0x0D } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ static constexpr GUID value{ 0x261270E3,0xB696,0x4634,{ 0x94,0xD6,0xBE,0x06,0x81,0x64,0x35,0x99 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ static constexpr GUID value{ 0x80CDF3F7,0x842A,0x41E1,{ 0x93,0xED,0x56,0x92,0xAB,0x1F,0xBB,0x10 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicDisplay>{ static constexpr GUID value{ 0x9ACEA414,0x1D9F,0x4090,{ 0xA3,0x88,0x90,0xC0,0x6F,0x6E,0xAE,0x9C } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicDisplayStatics>{ static constexpr GUID value{ 0xCB374983,0xE7B0,0x4841,{ 0x83,0x55,0x3A,0xE5,0xB5,0x36,0xE9,0xA4 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicFrame>{ static constexpr GUID value{ 0xC6988EB6,0xA8B9,0x3054,{ 0xA6,0xEB,0xD6,0x24,0xB6,0x53,0x63,0x75 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicFramePrediction>{ static constexpr GUID value{ 0x520F4DE1,0x5C0A,0x4E79,{ 0xA8,0x1E,0x6A,0xBE,0x02,0xBB,0x27,0x39 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpace>{ static constexpr GUID value{ 0x4380DBA6,0x5E78,0x434F,{ 0x80,0x7C,0x34,0x33,0xD1,0xEF,0xE8,0xB7 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ static constexpr GUID value{ 0x58F1DA35,0xBBB3,0x3C8F,{ 0x99,0x3D,0x6C,0x80,0xE7,0xFE,0xB9,0x9F } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ static constexpr GUID value{ 0x805444A8,0xF2AE,0x322E,{ 0x8D,0xA9,0x83,0x6A,0x0A,0x95,0xA4,0xC1 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceStatics>{ static constexpr GUID value{ 0x364E6064,0xC8F2,0x3BA1,{ 0x83,0x91,0x66,0xB8,0x48,0x9E,0x67,0xFD } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ static constexpr GUID value{ 0x0E777088,0x75FC,0x48AF,{ 0x87,0x58,0x06,0x52,0xF6,0xF0,0x7C,0x59 } }; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicCamera>{ using type = Windows::Graphics::Holographic::IHolographicCamera; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraPose>{ using type = Windows::Graphics::Holographic::IHolographicCameraPose; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>{ using type = Windows::Graphics::Holographic::IHolographicCameraRenderingParameters; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraViewportParameters>{ using type = Windows::Graphics::Holographic::IHolographicCameraViewportParameters; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicDisplay>{ using type = Windows::Graphics::Holographic::IHolographicDisplay; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicFrame>{ using type = Windows::Graphics::Holographic::IHolographicFrame; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicFramePrediction>{ using type = Windows::Graphics::Holographic::IHolographicFramePrediction; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpace>{ using type = Windows::Graphics::Holographic::IHolographicSpace; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>{ using type = Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>{ using type = Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCamera
{
    Windows::Foundation::Size RenderTargetSize() const;
    double ViewportScaleFactor() const;
    void ViewportScaleFactor(double value) const;
    bool IsStereo() const;
    uint32_t Id() const;
    void SetNearPlaneDistance(double value) const;
    void SetFarPlaneDistance(double value) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCamera2
{
    Windows::Graphics::Holographic::HolographicCameraViewportParameters LeftViewportParameters() const;
    Windows::Graphics::Holographic::HolographicCameraViewportParameters RightViewportParameters() const;
    Windows::Graphics::Holographic::HolographicDisplay Display() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera2> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera2<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraPose
{
    Windows::Graphics::Holographic::HolographicCamera HolographicCamera() const;
    Windows::Foundation::Rect Viewport() const;
    Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> TryGetViewTransform(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    Windows::Graphics::Holographic::HolographicStereoTransform ProjectionTransform() const;
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> TryGetCullingFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> TryGetVisibleFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    double NearPlaneDistance() const;
    double FarPlaneDistance() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraPose> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters
{
    void SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position) const;
    void SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal) const;
    void SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal, Windows::Foundation::Numerics::float3 const& linearVelocity) const;
    Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice Direct3D11Device() const;
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface Direct3D11BackBuffer() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2
{
    Windows::Graphics::Holographic::HolographicReprojectionMode ReprojectionMode() const;
    void ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode const& value) const;
    void CommitDirect3D11DepthBuffer(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& value) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters
{
    com_array<Windows::Foundation::Numerics::float2> HiddenAreaMesh() const;
    com_array<Windows::Foundation::Numerics::float2> VisibleAreaMesh() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraViewportParameters> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicDisplay
{
    hstring DisplayName() const;
    Windows::Foundation::Size MaxViewportSize() const;
    bool IsStereo() const;
    bool IsOpaque() const;
    Windows::Graphics::Holographic::HolographicAdapterId AdapterId() const;
    Windows::Perception::Spatial::SpatialLocator SpatialLocator() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplay> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicDisplayStatics
{
    Windows::Graphics::Holographic::HolographicDisplay GetDefault() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplayStatics> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplayStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicFrame
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> AddedCameras() const;
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> RemovedCameras() const;
    Windows::Graphics::Holographic::HolographicCameraRenderingParameters GetRenderingParameters(Windows::Graphics::Holographic::HolographicCameraPose const& cameraPose) const;
    Windows::Foundation::TimeSpan Duration() const;
    Windows::Graphics::Holographic::HolographicFramePrediction CurrentPrediction() const;
    void UpdateCurrentPrediction() const;
    Windows::Graphics::Holographic::HolographicFramePresentResult PresentUsingCurrentPrediction() const;
    Windows::Graphics::Holographic::HolographicFramePresentResult PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior const& waitBehavior) const;
    void WaitForFrameToFinish() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicFrame> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicFramePrediction
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> CameraPoses() const;
    Windows::Perception::PerceptionTimestamp Timestamp() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicFramePrediction> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFramePrediction<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicSpace
{
    Windows::Graphics::Holographic::HolographicAdapterId PrimaryAdapterId() const;
    void SetDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& value) const;
    event_token CameraAdded(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const;
    using CameraAdded_revoker = event_revoker<Windows::Graphics::Holographic::IHolographicSpace>;
    CameraAdded_revoker CameraAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const;
    void CameraAdded(event_token const& cookie) const;
    event_token CameraRemoved(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const;
    using CameraRemoved_revoker = event_revoker<Windows::Graphics::Holographic::IHolographicSpace>;
    CameraRemoved_revoker CameraRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const;
    void CameraRemoved(event_token const& cookie) const;
    Windows::Graphics::Holographic::HolographicFrame CreateNextFrame() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicSpace> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpace<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs
{
    Windows::Graphics::Holographic::HolographicCamera Camera() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs
{
    Windows::Graphics::Holographic::HolographicCamera Camera() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics
{
    Windows::Graphics::Holographic::HolographicSpace CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceStatics> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2
{
    bool IsSupported() const;
    bool IsAvailable() const;
    event_token IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using IsAvailableChanged_revoker = event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2>;
    IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void IsAvailableChanged(event_token const& token) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceStatics2> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>; };

template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RenderTargetSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_ViewportScaleFactor(double* value) = 0;
    virtual HRESULT __stdcall put_ViewportScaleFactor(double value) = 0;
    virtual HRESULT __stdcall get_IsStereo(bool* value) = 0;
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall SetNearPlaneDistance(double value) = 0;
    virtual HRESULT __stdcall SetFarPlaneDistance(double value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LeftViewportParameters(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_RightViewportParameters(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_Display(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraPose>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HolographicCamera(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Viewport(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall TryGetViewTransform(::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProjectionTransform(abi_t<Windows::Graphics::Holographic::HolographicStereoTransform>* value) = 0;
    virtual HRESULT __stdcall TryGetCullingFrustum(::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryGetVisibleFrustum(::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NearPlaneDistance(double* value) = 0;
    virtual HRESULT __stdcall get_FarPlaneDistance(double* value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetFocusPoint(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position) = 0;
    virtual HRESULT __stdcall SetFocusPointWithNormal(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position, abi_t<Windows::Foundation::Numerics::float3> normal) = 0;
    virtual HRESULT __stdcall SetFocusPointWithNormalLinearVelocity(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position, abi_t<Windows::Foundation::Numerics::float3> normal, abi_t<Windows::Foundation::Numerics::float3> linearVelocity) = 0;
    virtual HRESULT __stdcall get_Direct3D11Device(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Direct3D11BackBuffer(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ReprojectionMode(abi_t<Windows::Graphics::Holographic::HolographicReprojectionMode>* value) = 0;
    virtual HRESULT __stdcall put_ReprojectionMode(abi_t<Windows::Graphics::Holographic::HolographicReprojectionMode> value) = 0;
    virtual HRESULT __stdcall CommitDirect3D11DepthBuffer(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HiddenAreaMesh(uint32_t* __valueSize, abi_t<Windows::Foundation::Numerics::float2>** value) = 0;
    virtual HRESULT __stdcall get_VisibleAreaMesh(uint32_t* __valueSize, abi_t<Windows::Foundation::Numerics::float2>** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicDisplay>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MaxViewportSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_IsStereo(bool* value) = 0;
    virtual HRESULT __stdcall get_IsOpaque(bool* value) = 0;
    virtual HRESULT __stdcall get_AdapterId(abi_t<Windows::Graphics::Holographic::HolographicAdapterId>* value) = 0;
    virtual HRESULT __stdcall get_SpatialLocator(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicDisplayStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AddedCameras(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemovedCameras(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetRenderingParameters(::IUnknown* cameraPose, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_CurrentPrediction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall UpdateCurrentPrediction() = 0;
    virtual HRESULT __stdcall PresentUsingCurrentPrediction(abi_t<Windows::Graphics::Holographic::HolographicFramePresentResult>* result) = 0;
    virtual HRESULT __stdcall PresentUsingCurrentPredictionWithBehavior(abi_t<Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior> waitBehavior, abi_t<Windows::Graphics::Holographic::HolographicFramePresentResult>* result) = 0;
    virtual HRESULT __stdcall WaitForFrameToFinish() = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicFramePrediction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CameraPoses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicSpace>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrimaryAdapterId(abi_t<Windows::Graphics::Holographic::HolographicAdapterId>* value) = 0;
    virtual HRESULT __stdcall SetDirect3D11Device(::IUnknown* value) = 0;
    virtual HRESULT __stdcall add_CameraAdded(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_CameraAdded(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_CameraRemoved(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_CameraRemoved(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall CreateNextFrame(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Camera(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Camera(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateForCoreWindow(::IUnknown* window, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsAvailable(bool* value) = 0;
    virtual HRESULT __stdcall add_IsAvailableChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_IsAvailableChanged(abi_t<event_token> token) = 0;
};};

}
