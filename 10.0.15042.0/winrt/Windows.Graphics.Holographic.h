// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.DirectX.Direct3D11.3.h"
#include "internal/Windows.UI.Core.3.h"
#include "internal/Windows.Perception.Spatial.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Perception.3.h"
#include "internal/Windows.Graphics.Holographic.3.h"
#include "Windows.Graphics.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCamera> : produce_base<D, Windows::Graphics::Holographic::IHolographicCamera>
{
    HRESULT __stdcall get_RenderTargetSize(impl::abi_arg_out<Windows::Foundation::Size> value) noexcept override
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

    HRESULT __stdcall get_ViewportScaleFactor(double * value) noexcept override
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

    HRESULT __stdcall get_IsStereo(bool * value) noexcept override
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

    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
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

    HRESULT __stdcall abi_SetNearPlaneDistance(double value) noexcept override
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

    HRESULT __stdcall abi_SetFarPlaneDistance(double value) noexcept override
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
    HRESULT __stdcall get_LeftViewportParameters(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicCameraViewportParameters> result) noexcept override
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

    HRESULT __stdcall get_RightViewportParameters(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicCameraViewportParameters> result) noexcept override
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

    HRESULT __stdcall get_Display(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicDisplay> result) noexcept override
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
    HRESULT __stdcall get_HolographicCamera(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicCamera> value) noexcept override
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

    HRESULT __stdcall get_Viewport(impl::abi_arg_out<Windows::Foundation::Rect> value) noexcept override
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

    HRESULT __stdcall abi_TryGetViewTransform(impl::abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, impl::abi_arg_out<Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetViewTransform(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionTransform(impl::abi_arg_out<Windows::Graphics::Holographic::HolographicStereoTransform> value) noexcept override
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

    HRESULT __stdcall abi_TryGetCullingFrustum(impl::abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, impl::abi_arg_out<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetCullingFrustum(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetVisibleFrustum(impl::abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, impl::abi_arg_out<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetVisibleFrustum(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NearPlaneDistance(double * value) noexcept override
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

    HRESULT __stdcall get_FarPlaneDistance(double * value) noexcept override
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
    HRESULT __stdcall abi_SetFocusPoint(impl::abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, impl::abi_arg_in<Windows::Foundation::Numerics::float3> position) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFocusPointWithNormal(impl::abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, impl::abi_arg_in<Windows::Foundation::Numerics::float3> position, impl::abi_arg_in<Windows::Foundation::Numerics::float3> normal) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&normal));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFocusPointWithNormalLinearVelocity(impl::abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, impl::abi_arg_in<Windows::Foundation::Numerics::float3> position, impl::abi_arg_in<Windows::Foundation::Numerics::float3> normal, impl::abi_arg_in<Windows::Foundation::Numerics::float3> linearVelocity) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&normal), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&linearVelocity));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3D11Device(impl::abi_arg_out<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> value) noexcept override
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

    HRESULT __stdcall get_Direct3D11BackBuffer(impl::abi_arg_out<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> value) noexcept override
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
    HRESULT __stdcall get_ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode * value) noexcept override
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

    HRESULT __stdcall put_ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReprojectionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CommitDirect3D11DepthBuffer(impl::abi_arg_in<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommitDirect3D11DepthBuffer(*reinterpret_cast<const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *>(&value));
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
    HRESULT __stdcall get_HiddenAreaMesh(uint32_t * __valueSize, impl::abi_arg_out<Windows::Foundation::Numerics::float2> * value) noexcept override
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

    HRESULT __stdcall get_VisibleAreaMesh(uint32_t * __valueSize, impl::abi_arg_out<Windows::Foundation::Numerics::float2> * value) noexcept override
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
    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_MaxViewportSize(impl::abi_arg_out<Windows::Foundation::Size> value) noexcept override
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

    HRESULT __stdcall get_IsStereo(bool * value) noexcept override
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

    HRESULT __stdcall get_IsOpaque(bool * value) noexcept override
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

    HRESULT __stdcall get_AdapterId(impl::abi_arg_out<Windows::Graphics::Holographic::HolographicAdapterId> value) noexcept override
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

    HRESULT __stdcall get_SpatialLocator(impl::abi_arg_out<Windows::Perception::Spatial::ISpatialLocator> value) noexcept override
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
    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicDisplay> result) noexcept override
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
    HRESULT __stdcall get_AddedCameras(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera>> value) noexcept override
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

    HRESULT __stdcall get_RemovedCameras(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera>> value) noexcept override
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

    HRESULT __stdcall abi_GetRenderingParameters(impl::abi_arg_in<Windows::Graphics::Holographic::IHolographicCameraPose> cameraPose, impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRenderingParameters(*reinterpret_cast<const Windows::Graphics::Holographic::HolographicCameraPose *>(&cameraPose)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
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

    HRESULT __stdcall get_CurrentPrediction(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicFramePrediction> value) noexcept override
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

    HRESULT __stdcall abi_UpdateCurrentPrediction() noexcept override
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

    HRESULT __stdcall abi_PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentResult * result) noexcept override
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

    HRESULT __stdcall abi_PresentUsingCurrentPredictionWithBehavior(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior waitBehavior, Windows::Graphics::Holographic::HolographicFramePresentResult * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PresentUsingCurrentPrediction(waitBehavior));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WaitForFrameToFinish() noexcept override
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
    HRESULT __stdcall get_CameraPoses(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose>> value) noexcept override
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

    HRESULT __stdcall get_Timestamp(impl::abi_arg_out<Windows::Perception::IPerceptionTimestamp> value) noexcept override
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
    HRESULT __stdcall get_PrimaryAdapterId(impl::abi_arg_out<Windows::Graphics::Holographic::HolographicAdapterId> value) noexcept override
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

    HRESULT __stdcall abi_SetDirect3D11Device(impl::abi_arg_in<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDirect3D11Device(*reinterpret_cast<const Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraAdded(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().CameraAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraAdded(event_token cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraAdded(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraRemoved(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().CameraRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraRemoved(event_token cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraRemoved(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateNextFrame(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicFrame> value) noexcept override
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
    HRESULT __stdcall get_Camera(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicCamera> value) noexcept override
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

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
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
    HRESULT __stdcall get_Camera(impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicCamera> value) noexcept override
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
    HRESULT __stdcall abi_CreateForCoreWindow(impl::abi_arg_in<Windows::UI::Core::ICoreWindow> window, impl::abi_arg_out<Windows::Graphics::Holographic::IHolographicSpace> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateForCoreWindow(*reinterpret_cast<const Windows::UI::Core::CoreWindow *>(&window)));
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
    HRESULT __stdcall get_IsSupported(bool * value) noexcept override
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

    HRESULT __stdcall get_IsAvailable(bool * value) noexcept override
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

    HRESULT __stdcall add_IsAvailableChanged(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsAvailableChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsAvailableChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAvailableChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::Holographic {

template <typename D> Windows::Foundation::Size impl_IHolographicCamera<D>::RenderTargetSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(WINRT_SHIM(IHolographicCamera)->get_RenderTargetSize(put_abi(value)));
    return value;
}

template <typename D> double impl_IHolographicCamera<D>::ViewportScaleFactor() const
{
    double value {};
    check_hresult(WINRT_SHIM(IHolographicCamera)->get_ViewportScaleFactor(&value));
    return value;
}

template <typename D> void impl_IHolographicCamera<D>::ViewportScaleFactor(double value) const
{
    check_hresult(WINRT_SHIM(IHolographicCamera)->put_ViewportScaleFactor(value));
}

template <typename D> bool impl_IHolographicCamera<D>::IsStereo() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHolographicCamera)->get_IsStereo(&value));
    return value;
}

template <typename D> uint32_t impl_IHolographicCamera<D>::Id() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IHolographicCamera)->get_Id(&value));
    return value;
}

template <typename D> void impl_IHolographicCamera<D>::SetNearPlaneDistance(double value) const
{
    check_hresult(WINRT_SHIM(IHolographicCamera)->abi_SetNearPlaneDistance(value));
}

template <typename D> void impl_IHolographicCamera<D>::SetFarPlaneDistance(double value) const
{
    check_hresult(WINRT_SHIM(IHolographicCamera)->abi_SetFarPlaneDistance(value));
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera impl_IHolographicSpaceCameraAddedEventArgs<D>::Camera() const
{
    Windows::Graphics::Holographic::HolographicCamera value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicSpaceCameraAddedEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IHolographicSpaceCameraAddedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicSpaceCameraAddedEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera impl_IHolographicSpaceCameraRemovedEventArgs<D>::Camera() const
{
    Windows::Graphics::Holographic::HolographicCamera value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicSpaceCameraRemovedEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicAdapterId impl_IHolographicSpace<D>::PrimaryAdapterId() const
{
    Windows::Graphics::Holographic::HolographicAdapterId value {};
    check_hresult(WINRT_SHIM(IHolographicSpace)->get_PrimaryAdapterId(put_abi(value)));
    return value;
}

template <typename D> void impl_IHolographicSpace<D>::SetDirect3D11Device(const Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice & value) const
{
    check_hresult(WINRT_SHIM(IHolographicSpace)->abi_SetDirect3D11Device(get_abi(value)));
}

template <typename D> event_token impl_IHolographicSpace<D>::CameraAdded(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(WINRT_SHIM(IHolographicSpace)->add_CameraAdded(get_abi(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IHolographicSpace> impl_IHolographicSpace<D>::CameraAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IHolographicSpace>(this, &ABI::Windows::Graphics::Holographic::IHolographicSpace::remove_CameraAdded, CameraAdded(handler));
}

template <typename D> void impl_IHolographicSpace<D>::CameraAdded(event_token cookie) const
{
    check_hresult(WINRT_SHIM(IHolographicSpace)->remove_CameraAdded(cookie));
}

template <typename D> event_token impl_IHolographicSpace<D>::CameraRemoved(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(WINRT_SHIM(IHolographicSpace)->add_CameraRemoved(get_abi(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IHolographicSpace> impl_IHolographicSpace<D>::CameraRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IHolographicSpace>(this, &ABI::Windows::Graphics::Holographic::IHolographicSpace::remove_CameraRemoved, CameraRemoved(handler));
}

template <typename D> void impl_IHolographicSpace<D>::CameraRemoved(event_token cookie) const
{
    check_hresult(WINRT_SHIM(IHolographicSpace)->remove_CameraRemoved(cookie));
}

template <typename D> Windows::Graphics::Holographic::HolographicFrame impl_IHolographicSpace<D>::CreateNextFrame() const
{
    Windows::Graphics::Holographic::HolographicFrame value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicSpace)->abi_CreateNextFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicSpace impl_IHolographicSpaceStatics<D>::CreateForCoreWindow(const Windows::UI::Core::CoreWindow & window) const
{
    Windows::Graphics::Holographic::HolographicSpace value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicSpaceStatics)->abi_CreateForCoreWindow(get_abi(window), put_abi(value)));
    return value;
}

template <typename D> bool impl_IHolographicSpaceStatics2<D>::IsSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHolographicSpaceStatics2)->get_IsSupported(&value));
    return value;
}

template <typename D> bool impl_IHolographicSpaceStatics2<D>::IsAvailable() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHolographicSpaceStatics2)->get_IsAvailable(&value));
    return value;
}

template <typename D> event_token impl_IHolographicSpaceStatics2<D>::IsAvailableChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IHolographicSpaceStatics2)->add_IsAvailableChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IHolographicSpaceStatics2> impl_IHolographicSpaceStatics2<D>::IsAvailableChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IHolographicSpaceStatics2>(this, &ABI::Windows::Graphics::Holographic::IHolographicSpaceStatics2::remove_IsAvailableChanged, IsAvailableChanged(handler));
}

template <typename D> void impl_IHolographicSpaceStatics2<D>::IsAvailableChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IHolographicSpaceStatics2)->remove_IsAvailableChanged(token));
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera impl_IHolographicCameraPose<D>::HolographicCamera() const
{
    Windows::Graphics::Holographic::HolographicCamera value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicCameraPose)->get_HolographicCamera(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IHolographicCameraPose<D>::Viewport() const
{
    Windows::Foundation::Rect value {};
    check_hresult(WINRT_SHIM(IHolographicCameraPose)->get_Viewport(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> impl_IHolographicCameraPose<D>::TryGetViewTransform(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> value;
    check_hresult(WINRT_SHIM(IHolographicCameraPose)->abi_TryGetViewTransform(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicStereoTransform impl_IHolographicCameraPose<D>::ProjectionTransform() const
{
    Windows::Graphics::Holographic::HolographicStereoTransform value {};
    check_hresult(WINRT_SHIM(IHolographicCameraPose)->get_ProjectionTransform(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> impl_IHolographicCameraPose<D>::TryGetCullingFrustum(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> value;
    check_hresult(WINRT_SHIM(IHolographicCameraPose)->abi_TryGetCullingFrustum(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> impl_IHolographicCameraPose<D>::TryGetVisibleFrustum(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> value;
    check_hresult(WINRT_SHIM(IHolographicCameraPose)->abi_TryGetVisibleFrustum(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> double impl_IHolographicCameraPose<D>::NearPlaneDistance() const
{
    double value {};
    check_hresult(WINRT_SHIM(IHolographicCameraPose)->get_NearPlaneDistance(&value));
    return value;
}

template <typename D> double impl_IHolographicCameraPose<D>::FarPlaneDistance() const
{
    double value {};
    check_hresult(WINRT_SHIM(IHolographicCameraPose)->get_FarPlaneDistance(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> impl_IHolographicFramePrediction<D>::CameraPoses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> value;
    check_hresult(WINRT_SHIM(IHolographicFramePrediction)->get_CameraPoses(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp impl_IHolographicFramePrediction<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicFramePrediction)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> void impl_IHolographicCameraRenderingParameters<D>::SetFocusPoint(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position) const
{
    check_hresult(WINRT_SHIM(IHolographicCameraRenderingParameters)->abi_SetFocusPoint(get_abi(coordinateSystem), get_abi(position)));
}

template <typename D> void impl_IHolographicCameraRenderingParameters<D>::SetFocusPoint(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::float3 & normal) const
{
    check_hresult(WINRT_SHIM(IHolographicCameraRenderingParameters)->abi_SetFocusPointWithNormal(get_abi(coordinateSystem), get_abi(position), get_abi(normal)));
}

template <typename D> void impl_IHolographicCameraRenderingParameters<D>::SetFocusPoint(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::float3 & normal, const Windows::Foundation::Numerics::float3 & linearVelocity) const
{
    check_hresult(WINRT_SHIM(IHolographicCameraRenderingParameters)->abi_SetFocusPointWithNormalLinearVelocity(get_abi(coordinateSystem), get_abi(position), get_abi(normal), get_abi(linearVelocity)));
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice impl_IHolographicCameraRenderingParameters<D>::Direct3D11Device() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice value;
    check_hresult(WINRT_SHIM(IHolographicCameraRenderingParameters)->get_Direct3D11Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface impl_IHolographicCameraRenderingParameters<D>::Direct3D11BackBuffer() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value;
    check_hresult(WINRT_SHIM(IHolographicCameraRenderingParameters)->get_Direct3D11BackBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> impl_IHolographicFrame<D>::AddedCameras() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> value;
    check_hresult(WINRT_SHIM(IHolographicFrame)->get_AddedCameras(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> impl_IHolographicFrame<D>::RemovedCameras() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> value;
    check_hresult(WINRT_SHIM(IHolographicFrame)->get_RemovedCameras(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraRenderingParameters impl_IHolographicFrame<D>::GetRenderingParameters(const Windows::Graphics::Holographic::HolographicCameraPose & cameraPose) const
{
    Windows::Graphics::Holographic::HolographicCameraRenderingParameters value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicFrame)->abi_GetRenderingParameters(get_abi(cameraPose), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IHolographicFrame<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IHolographicFrame)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePrediction impl_IHolographicFrame<D>::CurrentPrediction() const
{
    Windows::Graphics::Holographic::HolographicFramePrediction value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicFrame)->get_CurrentPrediction(put_abi(value)));
    return value;
}

template <typename D> void impl_IHolographicFrame<D>::UpdateCurrentPrediction() const
{
    check_hresult(WINRT_SHIM(IHolographicFrame)->abi_UpdateCurrentPrediction());
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentResult impl_IHolographicFrame<D>::PresentUsingCurrentPrediction() const
{
    Windows::Graphics::Holographic::HolographicFramePresentResult result {};
    check_hresult(WINRT_SHIM(IHolographicFrame)->abi_PresentUsingCurrentPrediction(&result));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentResult impl_IHolographicFrame<D>::PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior waitBehavior) const
{
    Windows::Graphics::Holographic::HolographicFramePresentResult result {};
    check_hresult(WINRT_SHIM(IHolographicFrame)->abi_PresentUsingCurrentPredictionWithBehavior(waitBehavior, &result));
    return result;
}

template <typename D> void impl_IHolographicFrame<D>::WaitForFrameToFinish() const
{
    check_hresult(WINRT_SHIM(IHolographicFrame)->abi_WaitForFrameToFinish());
}

template <typename D> Windows::Graphics::Holographic::HolographicReprojectionMode impl_IHolographicCameraRenderingParameters2<D>::ReprojectionMode() const
{
    Windows::Graphics::Holographic::HolographicReprojectionMode value {};
    check_hresult(WINRT_SHIM(IHolographicCameraRenderingParameters2)->get_ReprojectionMode(&value));
    return value;
}

template <typename D> void impl_IHolographicCameraRenderingParameters2<D>::ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode value) const
{
    check_hresult(WINRT_SHIM(IHolographicCameraRenderingParameters2)->put_ReprojectionMode(value));
}

template <typename D> void impl_IHolographicCameraRenderingParameters2<D>::CommitDirect3D11DepthBuffer(const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface & value) const
{
    check_hresult(WINRT_SHIM(IHolographicCameraRenderingParameters2)->abi_CommitDirect3D11DepthBuffer(get_abi(value)));
}

template <typename D> com_array<Windows::Foundation::Numerics::float2> impl_IHolographicCameraViewportParameters<D>::HiddenAreaMesh() const
{
    com_array<Windows::Foundation::Numerics::float2> value {};
    check_hresult(WINRT_SHIM(IHolographicCameraViewportParameters)->get_HiddenAreaMesh(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> com_array<Windows::Foundation::Numerics::float2> impl_IHolographicCameraViewportParameters<D>::VisibleAreaMesh() const
{
    com_array<Windows::Foundation::Numerics::float2> value {};
    check_hresult(WINRT_SHIM(IHolographicCameraViewportParameters)->get_VisibleAreaMesh(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraViewportParameters impl_IHolographicCamera2<D>::LeftViewportParameters() const
{
    Windows::Graphics::Holographic::HolographicCameraViewportParameters result { nullptr };
    check_hresult(WINRT_SHIM(IHolographicCamera2)->get_LeftViewportParameters(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraViewportParameters impl_IHolographicCamera2<D>::RightViewportParameters() const
{
    Windows::Graphics::Holographic::HolographicCameraViewportParameters result { nullptr };
    check_hresult(WINRT_SHIM(IHolographicCamera2)->get_RightViewportParameters(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicDisplay impl_IHolographicCamera2<D>::Display() const
{
    Windows::Graphics::Holographic::HolographicDisplay result { nullptr };
    check_hresult(WINRT_SHIM(IHolographicCamera2)->get_Display(put_abi(result)));
    return result;
}

template <typename D> hstring impl_IHolographicDisplay<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IHolographicDisplay)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_IHolographicDisplay<D>::MaxViewportSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(WINRT_SHIM(IHolographicDisplay)->get_MaxViewportSize(put_abi(value)));
    return value;
}

template <typename D> bool impl_IHolographicDisplay<D>::IsStereo() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHolographicDisplay)->get_IsStereo(&value));
    return value;
}

template <typename D> bool impl_IHolographicDisplay<D>::IsOpaque() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHolographicDisplay)->get_IsOpaque(&value));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicAdapterId impl_IHolographicDisplay<D>::AdapterId() const
{
    Windows::Graphics::Holographic::HolographicAdapterId value {};
    check_hresult(WINRT_SHIM(IHolographicDisplay)->get_AdapterId(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocator impl_IHolographicDisplay<D>::SpatialLocator() const
{
    Windows::Perception::Spatial::SpatialLocator value { nullptr };
    check_hresult(WINRT_SHIM(IHolographicDisplay)->get_SpatialLocator(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicDisplay impl_IHolographicDisplayStatics<D>::GetDefault() const
{
    Windows::Graphics::Holographic::HolographicDisplay result { nullptr };
    check_hresult(WINRT_SHIM(IHolographicDisplayStatics)->abi_GetDefault(put_abi(result)));
    return result;
}

inline Windows::Graphics::Holographic::HolographicDisplay HolographicDisplay::GetDefault()
{
    return get_activation_factory<HolographicDisplay, IHolographicDisplayStatics>().GetDefault();
}

inline Windows::Graphics::Holographic::HolographicSpace HolographicSpace::CreateForCoreWindow(const Windows::UI::Core::CoreWindow & window)
{
    return get_activation_factory<HolographicSpace, IHolographicSpaceStatics>().CreateForCoreWindow(window);
}

inline bool HolographicSpace::IsSupported()
{
    return get_activation_factory<HolographicSpace, IHolographicSpaceStatics2>().IsSupported();
}

inline bool HolographicSpace::IsAvailable()
{
    return get_activation_factory<HolographicSpace, IHolographicSpaceStatics2>().IsAvailable();
}

inline event_token HolographicSpace::IsAvailableChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler)
{
    return get_activation_factory<HolographicSpace, IHolographicSpaceStatics2>().IsAvailableChanged(handler);
}

inline factory_event_revoker<IHolographicSpaceStatics2> HolographicSpace::IsAvailableChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler)
{
    auto factory = get_activation_factory<HolographicSpace, IHolographicSpaceStatics2>();
    return { factory, &ABI::Windows::Graphics::Holographic::IHolographicSpaceStatics2::remove_IsAvailableChanged, factory.IsAvailableChanged(handler) };
}

inline void HolographicSpace::IsAvailableChanged(event_token token)
{
    get_activation_factory<HolographicSpace, IHolographicSpaceStatics2>().IsAvailableChanged(token);
}

}

}

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicCamera>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicCamera & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicCamera2>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicCamera2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicCameraPose>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicCameraPose & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicDisplay>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicDisplay & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicFrame>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicFramePrediction & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicSpace>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicSpace & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicCamera>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicCamera & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicCameraPose>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicCameraPose & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicDisplay>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicDisplay & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicFrame>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicFramePrediction>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicFramePrediction & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicSpace>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicSpace & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>
{
    size_t operator()(const winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
