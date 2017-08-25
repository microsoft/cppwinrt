// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Perception.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.Graphics.Holographic.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Size consume_Windows_Graphics_Holographic_IHolographicCamera<D>::RenderTargetSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->get_RenderTargetSize(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Graphics_Holographic_IHolographicCamera<D>::ViewportScaleFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->get_ViewportScaleFactor(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCamera<D>::ViewportScaleFactor(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->put_ViewportScaleFactor(value));
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicCamera<D>::IsStereo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->get_IsStereo(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Holographic_IHolographicCamera<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->get_Id(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCamera<D>::SetNearPlaneDistance(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->SetNearPlaneDistance(value));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCamera<D>::SetFarPlaneDistance(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->SetFarPlaneDistance(value));
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraViewportParameters consume_Windows_Graphics_Holographic_IHolographicCamera2<D>::LeftViewportParameters() const
{
    Windows::Graphics::Holographic::HolographicCameraViewportParameters result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera2)->get_LeftViewportParameters(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraViewportParameters consume_Windows_Graphics_Holographic_IHolographicCamera2<D>::RightViewportParameters() const
{
    Windows::Graphics::Holographic::HolographicCameraViewportParameters result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera2)->get_RightViewportParameters(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicDisplay consume_Windows_Graphics_Holographic_IHolographicCamera2<D>::Display() const
{
    Windows::Graphics::Holographic::HolographicDisplay result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera2)->get_Display(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::HolographicCamera() const
{
    Windows::Graphics::Holographic::HolographicCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_HolographicCamera(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::Viewport() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_Viewport(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::TryGetViewTransform(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->TryGetViewTransform(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicStereoTransform consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::ProjectionTransform() const
{
    Windows::Graphics::Holographic::HolographicStereoTransform value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_ProjectionTransform(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::TryGetCullingFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->TryGetCullingFrustum(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::TryGetVisibleFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->TryGetVisibleFrustum(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::NearPlaneDistance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_NearPlaneDistance(&value));
    return value;
}

template <typename D> double consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::FarPlaneDistance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_FarPlaneDistance(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->SetFocusPoint(get_abi(coordinateSystem), get_abi(position)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->SetFocusPointWithNormal(get_abi(coordinateSystem), get_abi(position), get_abi(normal)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal, Windows::Foundation::Numerics::float3 const& linearVelocity) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->SetFocusPointWithNormalLinearVelocity(get_abi(coordinateSystem), get_abi(position), get_abi(normal), get_abi(linearVelocity)));
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::Direct3D11Device() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->get_Direct3D11Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::Direct3D11BackBuffer() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->get_Direct3D11BackBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicReprojectionMode consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>::ReprojectionMode() const
{
    Windows::Graphics::Holographic::HolographicReprojectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2)->get_ReprojectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>::ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2)->put_ReprojectionMode(get_abi(value)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>::CommitDirect3D11DepthBuffer(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2)->CommitDirect3D11DepthBuffer(get_abi(value)));
}

template <typename D> com_array<Windows::Foundation::Numerics::float2> consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters<D>::HiddenAreaMesh() const
{
    com_array<Windows::Foundation::Numerics::float2> value;
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraViewportParameters)->get_HiddenAreaMesh(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> com_array<Windows::Foundation::Numerics::float2> consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters<D>::VisibleAreaMesh() const
{
    com_array<Windows::Foundation::Numerics::float2> value;
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraViewportParameters)->get_VisibleAreaMesh(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::MaxViewportSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_MaxViewportSize(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::IsStereo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_IsStereo(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::IsOpaque() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_IsOpaque(&value));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicAdapterId consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::AdapterId() const
{
    Windows::Graphics::Holographic::HolographicAdapterId value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_AdapterId(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocator consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::SpatialLocator() const
{
    Windows::Perception::Spatial::SpatialLocator value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_SpatialLocator(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicDisplay consume_Windows_Graphics_Holographic_IHolographicDisplayStatics<D>::GetDefault() const
{
    Windows::Graphics::Holographic::HolographicDisplay result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplayStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> consume_Windows_Graphics_Holographic_IHolographicFrame<D>::AddedCameras() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->get_AddedCameras(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> consume_Windows_Graphics_Holographic_IHolographicFrame<D>::RemovedCameras() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->get_RemovedCameras(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraRenderingParameters consume_Windows_Graphics_Holographic_IHolographicFrame<D>::GetRenderingParameters(Windows::Graphics::Holographic::HolographicCameraPose const& cameraPose) const
{
    Windows::Graphics::Holographic::HolographicCameraRenderingParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->GetRenderingParameters(get_abi(cameraPose), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Graphics_Holographic_IHolographicFrame<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePrediction consume_Windows_Graphics_Holographic_IHolographicFrame<D>::CurrentPrediction() const
{
    Windows::Graphics::Holographic::HolographicFramePrediction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->get_CurrentPrediction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicFrame<D>::UpdateCurrentPrediction() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->UpdateCurrentPrediction());
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentResult consume_Windows_Graphics_Holographic_IHolographicFrame<D>::PresentUsingCurrentPrediction() const
{
    Windows::Graphics::Holographic::HolographicFramePresentResult result{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->PresentUsingCurrentPrediction(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentResult consume_Windows_Graphics_Holographic_IHolographicFrame<D>::PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior const& waitBehavior) const
{
    Windows::Graphics::Holographic::HolographicFramePresentResult result{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->PresentUsingCurrentPredictionWithBehavior(get_abi(waitBehavior), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicFrame<D>::WaitForFrameToFinish() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->WaitForFrameToFinish());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> consume_Windows_Graphics_Holographic_IHolographicFramePrediction<D>::CameraPoses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePrediction)->get_CameraPoses(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp consume_Windows_Graphics_Holographic_IHolographicFramePrediction<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePrediction)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicAdapterId consume_Windows_Graphics_Holographic_IHolographicSpace<D>::PrimaryAdapterId() const
{
    Windows::Graphics::Holographic::HolographicAdapterId value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->get_PrimaryAdapterId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace<D>::SetDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->SetDirect3D11Device(get_abi(value)));
}

template <typename D> event_token consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraAdded(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->add_CameraAdded(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Graphics::Holographic::IHolographicSpace> consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Holographic::IHolographicSpace>(this, &abi_t<Windows::Graphics::Holographic::IHolographicSpace>::remove_CameraAdded, CameraAdded(handler));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraAdded(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->remove_CameraAdded(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraRemoved(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->add_CameraRemoved(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Graphics::Holographic::IHolographicSpace> consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Holographic::IHolographicSpace>(this, &abi_t<Windows::Graphics::Holographic::IHolographicSpace>::remove_CameraRemoved, CameraRemoved(handler));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraRemoved(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->remove_CameraRemoved(get_abi(cookie)));
}

template <typename D> Windows::Graphics::Holographic::HolographicFrame consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CreateNextFrame() const
{
    Windows::Graphics::Holographic::HolographicFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->CreateNextFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs<D>::Camera() const
{
    Windows::Graphics::Holographic::HolographicCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs<D>::Camera() const
{
    Windows::Graphics::Holographic::HolographicCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicSpace consume_Windows_Graphics_Holographic_IHolographicSpaceStatics<D>::CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window) const
{
    Windows::Graphics::Holographic::HolographicSpace value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics)->CreateForCoreWindow(get_abi(window), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics2)->get_IsSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsAvailable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics2)->get_IsAvailable(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics2)->add_IsAvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2> consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Holographic::IHolographicSpaceStatics2>(this, &abi_t<Windows::Graphics::Holographic::IHolographicSpaceStatics2>::remove_IsAvailableChanged, IsAvailableChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsAvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics2)->remove_IsAvailableChanged(get_abi(token)));
}

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCamera> : produce_base<D, Windows::Graphics::Holographic::IHolographicCamera>
{
    HRESULT __stdcall get_RenderTargetSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RenderTargetSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportScaleFactor(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewportScaleFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewportScaleFactor(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewportScaleFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStereo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStereo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetNearPlaneDistance(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNearPlaneDistance(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFarPlaneDistance(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFarPlaneDistance(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCamera2> : produce_base<D, Windows::Graphics::Holographic::IHolographicCamera2>
{
    HRESULT __stdcall get_LeftViewportParameters(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().LeftViewportParameters());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightViewportParameters(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RightViewportParameters());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Display(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Display());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraPose> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraPose>
{
    HRESULT __stdcall get_HolographicCamera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HolographicCamera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Viewport(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Viewport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetViewTransform(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetViewTransform(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionTransform(abi_t<Windows::Graphics::Holographic::HolographicStereoTransform>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProjectionTransform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetCullingFrustum(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetCullingFrustum(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetVisibleFrustum(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetVisibleFrustum(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NearPlaneDistance(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NearPlaneDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FarPlaneDistance(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FarPlaneDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
{
    HRESULT __stdcall SetFocusPoint(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFocusPointWithNormal(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position, abi_t<Windows::Foundation::Numerics::float3> normal) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&normal));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFocusPointWithNormalLinearVelocity(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position, abi_t<Windows::Foundation::Numerics::float3> normal, abi_t<Windows::Foundation::Numerics::float3> linearVelocity) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&normal), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&linearVelocity));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3D11Device(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Direct3D11Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3D11BackBuffer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Direct3D11BackBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
{
    HRESULT __stdcall get_ReprojectionMode(abi_t<Windows::Graphics::Holographic::HolographicReprojectionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReprojectionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReprojectionMode(abi_t<Windows::Graphics::Holographic::HolographicReprojectionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReprojectionMode(*reinterpret_cast<Windows::Graphics::Holographic::HolographicReprojectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CommitDirect3D11DepthBuffer(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommitDirect3D11DepthBuffer(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraViewportParameters> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
{
    HRESULT __stdcall get_HiddenAreaMesh(uint32_t* __valueSize, abi_t<Windows::Foundation::Numerics::float2>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().HiddenAreaMesh());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleAreaMesh(uint32_t* __valueSize, abi_t<Windows::Foundation::Numerics::float2>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().VisibleAreaMesh());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicDisplay> : produce_base<D, Windows::Graphics::Holographic::IHolographicDisplay>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxViewportSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxViewportSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStereo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStereo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOpaque(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOpaque());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdapterId(abi_t<Windows::Graphics::Holographic::HolographicAdapterId>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdapterId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpatialLocator(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpatialLocator());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicDisplayStatics> : produce_base<D, Windows::Graphics::Holographic::IHolographicDisplayStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicFrame> : produce_base<D, Windows::Graphics::Holographic::IHolographicFrame>
{
    HRESULT __stdcall get_AddedCameras(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AddedCameras());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemovedCameras(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemovedCameras());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRenderingParameters(::IUnknown* cameraPose, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRenderingParameters(*reinterpret_cast<Windows::Graphics::Holographic::HolographicCameraPose const*>(&cameraPose)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPrediction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentPrediction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateCurrentPrediction() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateCurrentPrediction();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PresentUsingCurrentPrediction(abi_t<Windows::Graphics::Holographic::HolographicFramePresentResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PresentUsingCurrentPrediction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PresentUsingCurrentPredictionWithBehavior(abi_t<Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior> waitBehavior, abi_t<Windows::Graphics::Holographic::HolographicFramePresentResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PresentUsingCurrentPrediction(*reinterpret_cast<Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior const*>(&waitBehavior)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WaitForFrameToFinish() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WaitForFrameToFinish();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicFramePrediction> : produce_base<D, Windows::Graphics::Holographic::IHolographicFramePrediction>
{
    HRESULT __stdcall get_CameraPoses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraPoses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpace> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpace>
{
    HRESULT __stdcall get_PrimaryAdapterId(abi_t<Windows::Graphics::Holographic::HolographicAdapterId>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrimaryAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDirect3D11Device(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDirect3D11Device(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraAdded(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().CameraAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraAdded(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraAdded(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraRemoved(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().CameraRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraRemoved(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraRemoved(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateNextFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateNextFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
{
    HRESULT __stdcall get_Camera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Camera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
{
    HRESULT __stdcall get_Camera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Camera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceStatics> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceStatics>
{
    HRESULT __stdcall CreateForCoreWindow(::IUnknown* window, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateForCoreWindow(*reinterpret_cast<Windows::UI::Core::CoreWindow const*>(&window)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceStatics2> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceStatics2>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAvailable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsAvailableChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsAvailableChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsAvailableChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic {

inline Windows::Graphics::Holographic::HolographicDisplay HolographicDisplay::GetDefault()
{
    return get_activation_factory<HolographicDisplay, Windows::Graphics::Holographic::IHolographicDisplayStatics>().GetDefault();
}

inline Windows::Graphics::Holographic::HolographicSpace HolographicSpace::CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window)
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics>().CreateForCoreWindow(window);
}

inline bool HolographicSpace::IsSupported()
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>().IsSupported();
}

inline bool HolographicSpace::IsAvailable()
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>().IsAvailable();
}

inline event_token HolographicSpace::IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>().IsAvailableChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2> HolographicSpace::IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>();
    return { factory, &abi_t<Windows::Graphics::Holographic::IHolographicSpaceStatics2>::remove_IsAvailableChanged, factory.IsAvailableChanged(handler) };
}

inline void HolographicSpace::IsAvailableChanged(event_token const& token)
{
    get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>().IsAvailableChanged(token);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCamera> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicCamera> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCamera2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicCamera2> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraPose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicCameraPose> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicDisplay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicDisplay> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicFrame> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpace> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicSpace> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicCamera> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicCamera> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicCameraPose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicCameraPose> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicDisplay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicDisplay> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicFrame> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicFramePrediction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicFramePrediction> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicSpace> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicSpace> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> {};

}

WINRT_WARNING_POP
