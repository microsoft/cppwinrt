// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX {

enum class DirectXPixelFormat;

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

enum class HolographicFramePresentResult : int32_t
{
    Success = 0,
    DeviceRemoved = 1,
};

enum class HolographicFramePresentWaitBehavior : int32_t
{
    WaitForFrameToFinish = 0,
    DoNotWaitForFrameToFinish = 1,
};

enum class HolographicReprojectionMode : int32_t
{
    PositionAndOrientation = 0,
    OrientationOnly = 1,
    Disabled = 2,
};

struct IHolographicCamera;
struct IHolographicCamera2;
struct IHolographicCamera3;
struct IHolographicCameraPose;
struct IHolographicCameraRenderingParameters;
struct IHolographicCameraRenderingParameters2;
struct IHolographicCameraRenderingParameters3;
struct IHolographicCameraViewportParameters;
struct IHolographicDisplay;
struct IHolographicDisplay2;
struct IHolographicDisplayStatics;
struct IHolographicFrame;
struct IHolographicFrame2;
struct IHolographicFramePrediction;
struct IHolographicQuadLayer;
struct IHolographicQuadLayerFactory;
struct IHolographicQuadLayerUpdateParameters;
struct IHolographicSpace;
struct IHolographicSpaceCameraAddedEventArgs;
struct IHolographicSpaceCameraRemovedEventArgs;
struct IHolographicSpaceStatics;
struct IHolographicSpaceStatics2;
struct IHolographicSpaceStatics3;
struct HolographicCamera;
struct HolographicCameraPose;
struct HolographicCameraRenderingParameters;
struct HolographicCameraViewportParameters;
struct HolographicDisplay;
struct HolographicFrame;
struct HolographicFramePrediction;
struct HolographicQuadLayer;
struct HolographicQuadLayerUpdateParameters;
struct HolographicSpace;
struct HolographicSpaceCameraAddedEventArgs;
struct HolographicSpaceCameraRemovedEventArgs;
struct HolographicAdapterId;
struct HolographicStereoTransform;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Holographic::IHolographicCamera>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCamera2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCamera3>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraPose>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicDisplay>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicDisplay2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicDisplayStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicFrame>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicFrame2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicFramePrediction>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicQuadLayer>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpace>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceStatics3>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicCamera>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicCameraPose>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicCameraViewportParameters>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicDisplay>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicFrame>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicFramePrediction>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicQuadLayer>{ using type = class_category; };
template <> struct category<Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>{ using type = class_category; };
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
template <> struct name<Windows::Graphics::Holographic::IHolographicCamera3>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera3" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraPose>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraPose" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraViewportParameters" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicDisplay>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplay" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicDisplay2>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplay2" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicDisplayStatics>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplayStatics" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicFrame>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrame" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicFrame2>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrame2" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicFramePrediction>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFramePrediction" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicQuadLayer>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicQuadLayer" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicQuadLayerFactory" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpace>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpace" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceStatics>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceStatics" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceStatics2" }; };
template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceStatics3>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceStatics3" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicCamera>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCamera" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicCameraPose>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraPose" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraRenderingParameters" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicCameraViewportParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraViewportParameters" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicDisplay>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicDisplay" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicFrame>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFrame" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicFramePrediction>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePrediction" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicQuadLayer>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicQuadLayer" }; };
template <> struct name<Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>{ static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters" }; };
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
template <> struct guid<Windows::Graphics::Holographic::IHolographicCamera3>{ static constexpr GUID value{ 0x45AA4FB3,0x7B59,0x524E,{ 0x4A,0x3F,0x4A,0x6A,0xD6,0x65,0x04,0x77 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraPose>{ static constexpr GUID value{ 0x0D7D7E30,0x12DE,0x45BD,{ 0x91,0x2B,0xC7,0xF6,0x56,0x15,0x99,0xD1 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ static constexpr GUID value{ 0x8EAC2ED1,0x5BF4,0x4E16,{ 0x82,0x36,0xAE,0x08,0x00,0xC1,0x1D,0x0D } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ static constexpr GUID value{ 0x261270E3,0xB696,0x4634,{ 0x94,0xD6,0xBE,0x06,0x81,0x64,0x35,0x99 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>{ static constexpr GUID value{ 0xB1AA513F,0x136D,0x4B06,{ 0xB9,0xD4,0xE4,0xB9,0x14,0xCD,0x06,0x83 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ static constexpr GUID value{ 0x80CDF3F7,0x842A,0x41E1,{ 0x93,0xED,0x56,0x92,0xAB,0x1F,0xBB,0x10 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicDisplay>{ static constexpr GUID value{ 0x9ACEA414,0x1D9F,0x4090,{ 0xA3,0x88,0x90,0xC0,0x6F,0x6E,0xAE,0x9C } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicDisplay2>{ static constexpr GUID value{ 0x75AC3F82,0xE755,0x436C,{ 0x8D,0x96,0x4D,0x32,0xD1,0x31,0x47,0x3E } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicDisplayStatics>{ static constexpr GUID value{ 0xCB374983,0xE7B0,0x4841,{ 0x83,0x55,0x3A,0xE5,0xB5,0x36,0xE9,0xA4 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicFrame>{ static constexpr GUID value{ 0xC6988EB6,0xA8B9,0x3054,{ 0xA6,0xEB,0xD6,0x24,0xB6,0x53,0x63,0x75 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicFrame2>{ static constexpr GUID value{ 0x283F37BF,0x3BF2,0x5E91,{ 0x66,0x33,0x87,0x05,0x74,0xE6,0xF2,0x17 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicFramePrediction>{ static constexpr GUID value{ 0x520F4DE1,0x5C0A,0x4E79,{ 0xA8,0x1E,0x6A,0xBE,0x02,0xBB,0x27,0x39 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicQuadLayer>{ static constexpr GUID value{ 0x903460C9,0xC9D9,0x5D5C,{ 0x41,0xAC,0xA2,0xD5,0xAB,0x0F,0xD3,0x31 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>{ static constexpr GUID value{ 0xA67538F3,0x5A14,0x5A10,{ 0x48,0x9A,0x45,0x50,0x65,0xB3,0x7B,0x76 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>{ static constexpr GUID value{ 0x2B0EA3B0,0x798D,0x5BCA,{ 0x55,0xC2,0x2C,0x0C,0x76,0x2E,0xBB,0x08 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpace>{ static constexpr GUID value{ 0x4380DBA6,0x5E78,0x434F,{ 0x80,0x7C,0x34,0x33,0xD1,0xEF,0xE8,0xB7 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ static constexpr GUID value{ 0x58F1DA35,0xBBB3,0x3C8F,{ 0x99,0x3D,0x6C,0x80,0xE7,0xFE,0xB9,0x9F } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ static constexpr GUID value{ 0x805444A8,0xF2AE,0x322E,{ 0x8D,0xA9,0x83,0x6A,0x0A,0x95,0xA4,0xC1 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceStatics>{ static constexpr GUID value{ 0x364E6064,0xC8F2,0x3BA1,{ 0x83,0x91,0x66,0xB8,0x48,0x9E,0x67,0xFD } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ static constexpr GUID value{ 0x0E777088,0x75FC,0x48AF,{ 0x87,0x58,0x06,0x52,0xF6,0xF0,0x7C,0x59 } }; };
template <> struct guid<Windows::Graphics::Holographic::IHolographicSpaceStatics3>{ static constexpr GUID value{ 0x3B00DE3D,0xB1A3,0x4DFE,{ 0x8E,0x79,0xFE,0xC5,0x90,0x9E,0x6D,0xF8 } }; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicCamera>{ using type = Windows::Graphics::Holographic::IHolographicCamera; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraPose>{ using type = Windows::Graphics::Holographic::IHolographicCameraPose; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>{ using type = Windows::Graphics::Holographic::IHolographicCameraRenderingParameters; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraViewportParameters>{ using type = Windows::Graphics::Holographic::IHolographicCameraViewportParameters; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicDisplay>{ using type = Windows::Graphics::Holographic::IHolographicDisplay; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicFrame>{ using type = Windows::Graphics::Holographic::IHolographicFrame; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicFramePrediction>{ using type = Windows::Graphics::Holographic::IHolographicFramePrediction; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicQuadLayer>{ using type = Windows::Graphics::Holographic::IHolographicQuadLayer; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>{ using type = Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpace>{ using type = Windows::Graphics::Holographic::IHolographicSpace; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>{ using type = Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs; };
template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>{ using type = Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCamera
{
    Windows::Foundation::Size RenderTargetSize() const noexcept;
    double ViewportScaleFactor() const noexcept;
    void ViewportScaleFactor(double value) const noexcept;
    bool IsStereo() const noexcept;
    uint32_t Id() const noexcept;
    void SetNearPlaneDistance(double value) const;
    void SetFarPlaneDistance(double value) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCamera2
{
    Windows::Graphics::Holographic::HolographicCameraViewportParameters LeftViewportParameters() const noexcept;
    Windows::Graphics::Holographic::HolographicCameraViewportParameters RightViewportParameters() const noexcept;
    Windows::Graphics::Holographic::HolographicDisplay Display() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera2> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera2<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCamera3
{
    bool IsPrimaryLayerEnabled() const noexcept;
    void IsPrimaryLayerEnabled(bool value) const noexcept;
    uint32_t MaxQuadLayerCount() const noexcept;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Holographic::HolographicQuadLayer> QuadLayers() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera3> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera3<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraPose
{
    Windows::Graphics::Holographic::HolographicCamera HolographicCamera() const noexcept;
    Windows::Foundation::Rect Viewport() const noexcept;
    Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> TryGetViewTransform(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    Windows::Graphics::Holographic::HolographicStereoTransform ProjectionTransform() const noexcept;
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> TryGetCullingFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> TryGetVisibleFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    double NearPlaneDistance() const noexcept;
    double FarPlaneDistance() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraPose> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters
{
    void SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position) const;
    void SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal) const;
    void SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal, Windows::Foundation::Numerics::float3 const& linearVelocity) const;
    Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice Direct3D11Device() const noexcept;
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface Direct3D11BackBuffer() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2
{
    Windows::Graphics::Holographic::HolographicReprojectionMode ReprojectionMode() const noexcept;
    void ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode const& value) const noexcept;
    void CommitDirect3D11DepthBuffer(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& value) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3
{
    bool IsContentProtectionEnabled() const noexcept;
    void IsContentProtectionEnabled(bool value) const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters
{
    com_array<Windows::Foundation::Numerics::float2> HiddenAreaMesh() const noexcept;
    com_array<Windows::Foundation::Numerics::float2> VisibleAreaMesh() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraViewportParameters> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicDisplay
{
    hstring DisplayName() const noexcept;
    Windows::Foundation::Size MaxViewportSize() const noexcept;
    bool IsStereo() const noexcept;
    bool IsOpaque() const noexcept;
    Windows::Graphics::Holographic::HolographicAdapterId AdapterId() const noexcept;
    Windows::Perception::Spatial::SpatialLocator SpatialLocator() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplay> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicDisplay2
{
    double RefreshRate() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplay2> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay2<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicDisplayStatics
{
    Windows::Graphics::Holographic::HolographicDisplay GetDefault() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplayStatics> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplayStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicFrame
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> AddedCameras() const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> RemovedCameras() const noexcept;
    Windows::Graphics::Holographic::HolographicCameraRenderingParameters GetRenderingParameters(Windows::Graphics::Holographic::HolographicCameraPose const& cameraPose) const;
    Windows::Foundation::TimeSpan Duration() const noexcept;
    Windows::Graphics::Holographic::HolographicFramePrediction CurrentPrediction() const noexcept;
    void UpdateCurrentPrediction() const;
    Windows::Graphics::Holographic::HolographicFramePresentResult PresentUsingCurrentPrediction() const;
    Windows::Graphics::Holographic::HolographicFramePresentResult PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior const& waitBehavior) const;
    void WaitForFrameToFinish() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicFrame> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicFrame2
{
    Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters GetQuadLayerUpdateParameters(Windows::Graphics::Holographic::HolographicQuadLayer const& layer) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicFrame2> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame2<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicFramePrediction
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> CameraPoses() const noexcept;
    Windows::Perception::PerceptionTimestamp Timestamp() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicFramePrediction> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFramePrediction<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicQuadLayer
{
    Windows::Graphics::DirectX::DirectXPixelFormat PixelFormat() const noexcept;
    Windows::Foundation::Size Size() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicQuadLayer> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayer<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicQuadLayerFactory
{
    Windows::Graphics::Holographic::HolographicQuadLayer Create(Windows::Foundation::Size const& size) const;
    Windows::Graphics::Holographic::HolographicQuadLayer CreateWithPixelFormat(Windows::Foundation::Size const& size, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicQuadLayerFactory> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayerFactory<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface AcquireBufferToUpdateContent() const;
    void UpdateViewport(Windows::Foundation::Rect const& value) const;
    void UpdateContentProtectionEnabled(bool value) const;
    void UpdateExtents(Windows::Foundation::Numerics::float2 const& value) const;
    void UpdateLocationWithStationaryMode(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const;
    void UpdateLocationWithDisplayRelativeMode(Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicSpace
{
    Windows::Graphics::Holographic::HolographicAdapterId PrimaryAdapterId() const noexcept;
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
    Windows::Graphics::Holographic::HolographicCamera Camera() const noexcept;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs
{
    Windows::Graphics::Holographic::HolographicCamera Camera() const noexcept;
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
    bool IsSupported() const noexcept;
    bool IsAvailable() const noexcept;
    event_token IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using IsAvailableChanged_revoker = event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2>;
    IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void IsAvailableChanged(event_token const& token) const;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceStatics2> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>; };

template <typename D>
struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics3
{
    bool IsConfigured() const noexcept;
};
template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceStatics3> { template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics3<D>; };

template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RenderTargetSize(Windows::Foundation::Size* value) = 0;
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

template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsPrimaryLayerEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPrimaryLayerEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_MaxQuadLayerCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_QuadLayers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraPose>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HolographicCamera(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Viewport(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall TryGetViewTransform(::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProjectionTransform(struct_of<128>* value) = 0;
    virtual HRESULT __stdcall TryGetCullingFrustum(::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryGetVisibleFrustum(::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NearPlaneDistance(double* value) = 0;
    virtual HRESULT __stdcall get_FarPlaneDistance(double* value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetFocusPoint(::IUnknown* coordinateSystem, Windows::Foundation::Numerics::float3 position) = 0;
    virtual HRESULT __stdcall SetFocusPointWithNormal(::IUnknown* coordinateSystem, Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::float3 normal) = 0;
    virtual HRESULT __stdcall SetFocusPointWithNormalLinearVelocity(::IUnknown* coordinateSystem, Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::float3 normal, Windows::Foundation::Numerics::float3 linearVelocity) = 0;
    virtual HRESULT __stdcall get_Direct3D11Device(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Direct3D11BackBuffer(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode* value) = 0;
    virtual HRESULT __stdcall put_ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode value) = 0;
    virtual HRESULT __stdcall CommitDirect3D11DepthBuffer(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsContentProtectionEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsContentProtectionEnabled(bool value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HiddenAreaMesh(uint32_t* __valueSize, Windows::Foundation::Numerics::float2** value) = 0;
    virtual HRESULT __stdcall get_VisibleAreaMesh(uint32_t* __valueSize, Windows::Foundation::Numerics::float2** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicDisplay>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MaxViewportSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_IsStereo(bool* value) = 0;
    virtual HRESULT __stdcall get_IsOpaque(bool* value) = 0;
    virtual HRESULT __stdcall get_AdapterId(struct_of<8>* value) = 0;
    virtual HRESULT __stdcall get_SpatialLocator(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicDisplay2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RefreshRate(double* value) = 0;
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
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall get_CurrentPrediction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall UpdateCurrentPrediction() = 0;
    virtual HRESULT __stdcall PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentResult* result) = 0;
    virtual HRESULT __stdcall PresentUsingCurrentPredictionWithBehavior(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior waitBehavior, Windows::Graphics::Holographic::HolographicFramePresentResult* result) = 0;
    virtual HRESULT __stdcall WaitForFrameToFinish() = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicFrame2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetQuadLayerUpdateParameters(::IUnknown* layer, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicFramePrediction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CameraPoses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicQuadLayer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PixelFormat(Windows::Graphics::DirectX::DirectXPixelFormat* value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(Windows::Foundation::Size size, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithPixelFormat(Windows::Foundation::Size size, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AcquireBufferToUpdateContent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall UpdateViewport(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall UpdateContentProtectionEnabled(bool value) = 0;
    virtual HRESULT __stdcall UpdateExtents(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall UpdateLocationWithStationaryMode(::IUnknown* coordinateSystem, Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::quaternion orientation) = 0;
    virtual HRESULT __stdcall UpdateLocationWithDisplayRelativeMode(Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::quaternion orientation) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicSpace>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrimaryAdapterId(struct_of<8>* value) = 0;
    virtual HRESULT __stdcall SetDirect3D11Device(::IUnknown* value) = 0;
    virtual HRESULT __stdcall add_CameraAdded(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_CameraAdded(event_token cookie) = 0;
    virtual HRESULT __stdcall add_CameraRemoved(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_CameraRemoved(event_token cookie) = 0;
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
    virtual HRESULT __stdcall add_IsAvailableChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_IsAvailableChanged(event_token token) = 0;
};};

template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsConfigured(bool* value) = 0;
};};

}
