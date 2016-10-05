// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.DirectX.Direct3D11.3.h"
#include "internal/Windows.UI.Core.3.h"
#include "internal/Windows.Perception.Spatial.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Perception.3.h"
#include "internal/Windows.Graphics.Holographic.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCamera> : produce_base<D, Windows::Graphics::Holographic::IHolographicCamera>
{
    HRESULT __stdcall get_RenderTargetSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RenderTargetSize());
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
            *value = detach(this->shim().ViewportScaleFactor());
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
            *value = detach(this->shim().IsStereo());
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
            *value = detach(this->shim().Id());
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
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraPose> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraPose>
{
    HRESULT __stdcall get_HolographicCamera(abi_arg_out<Windows::Graphics::Holographic::IHolographicCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HolographicCamera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Viewport(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Viewport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetViewTransform(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetViewTransform(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionTransform(abi_arg_out<Windows::Graphics::Holographic::HolographicStereoTransform> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProjectionTransform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetCullingFrustum(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetCullingFrustum(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetVisibleFrustum(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetVisibleFrustum(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
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
            *value = detach(this->shim().NearPlaneDistance());
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
            *value = detach(this->shim().FarPlaneDistance());
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
    HRESULT __stdcall abi_SetFocusPoint(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Foundation::Numerics::float3> position) noexcept override
    {
        try
        {
            this->shim().SetFocusPoint(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFocusPointWithNormal(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Foundation::Numerics::float3> position, abi_arg_in<Windows::Foundation::Numerics::float3> normal) noexcept override
    {
        try
        {
            this->shim().SetFocusPoint(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&normal));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFocusPointWithNormalLinearVelocity(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Foundation::Numerics::float3> position, abi_arg_in<Windows::Foundation::Numerics::float3> normal, abi_arg_in<Windows::Foundation::Numerics::float3> linearVelocity) noexcept override
    {
        try
        {
            this->shim().SetFocusPoint(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&normal), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&linearVelocity));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3D11Device(abi_arg_out<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direct3D11Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3D11BackBuffer(abi_arg_out<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direct3D11BackBuffer());
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
struct produce<D, Windows::Graphics::Holographic::IHolographicFrame> : produce_base<D, Windows::Graphics::Holographic::IHolographicFrame>
{
    HRESULT __stdcall get_AddedCameras(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AddedCameras());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemovedCameras(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemovedCameras());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRenderingParameters(abi_arg_in<Windows::Graphics::Holographic::IHolographicCameraPose> cameraPose, abi_arg_out<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetRenderingParameters(*reinterpret_cast<const Windows::Graphics::Holographic::HolographicCameraPose *>(&cameraPose)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPrediction(abi_arg_out<Windows::Graphics::Holographic::IHolographicFramePrediction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentPrediction());
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
            *result = detach(this->shim().PresentUsingCurrentPrediction());
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
            *result = detach(this->shim().PresentUsingCurrentPrediction(waitBehavior));
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
    HRESULT __stdcall get_CameraPoses(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CameraPoses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Perception::IPerceptionTimestamp> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
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
    HRESULT __stdcall get_PrimaryAdapterId(abi_arg_out<Windows::Graphics::Holographic::HolographicAdapterId> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrimaryAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDirect3D11Device(abi_arg_in<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> value) noexcept override
    {
        try
        {
            this->shim().SetDirect3D11Device(*reinterpret_cast<const Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraAdded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().CameraAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> *>(&handler)));
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
            this->shim().CameraAdded(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().CameraRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> *>(&handler)));
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
            this->shim().CameraRemoved(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateNextFrame(abi_arg_out<Windows::Graphics::Holographic::IHolographicFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateNextFrame());
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
    HRESULT __stdcall get_Camera(abi_arg_out<Windows::Graphics::Holographic::IHolographicCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Camera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall get_Camera(abi_arg_out<Windows::Graphics::Holographic::IHolographicCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Camera());
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
    HRESULT __stdcall abi_CreateForCoreWindow(abi_arg_in<Windows::UI::Core::ICoreWindow> window, abi_arg_out<Windows::Graphics::Holographic::IHolographicSpace> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateForCoreWindow(*reinterpret_cast<const Windows::UI::Core::CoreWindow *>(&window)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::Holographic {

template <typename D> Windows::Foundation::Size impl_IHolographicCamera<D>::RenderTargetSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const IHolographicCamera &>(static_cast<const D &>(*this))->get_RenderTargetSize(put(value)));
    return value;
}

template <typename D> double impl_IHolographicCamera<D>::ViewportScaleFactor() const
{
    double value {};
    check_hresult(static_cast<const IHolographicCamera &>(static_cast<const D &>(*this))->get_ViewportScaleFactor(&value));
    return value;
}

template <typename D> void impl_IHolographicCamera<D>::ViewportScaleFactor(double value) const
{
    check_hresult(static_cast<const IHolographicCamera &>(static_cast<const D &>(*this))->put_ViewportScaleFactor(value));
}

template <typename D> bool impl_IHolographicCamera<D>::IsStereo() const
{
    bool value {};
    check_hresult(static_cast<const IHolographicCamera &>(static_cast<const D &>(*this))->get_IsStereo(&value));
    return value;
}

template <typename D> uint32_t impl_IHolographicCamera<D>::Id() const
{
    uint32_t value {};
    check_hresult(static_cast<const IHolographicCamera &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> void impl_IHolographicCamera<D>::SetNearPlaneDistance(double value) const
{
    check_hresult(static_cast<const IHolographicCamera &>(static_cast<const D &>(*this))->abi_SetNearPlaneDistance(value));
}

template <typename D> void impl_IHolographicCamera<D>::SetFarPlaneDistance(double value) const
{
    check_hresult(static_cast<const IHolographicCamera &>(static_cast<const D &>(*this))->abi_SetFarPlaneDistance(value));
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera impl_IHolographicSpaceCameraAddedEventArgs<D>::Camera() const
{
    Windows::Graphics::Holographic::HolographicCamera value { nullptr };
    check_hresult(static_cast<const IHolographicSpaceCameraAddedEventArgs &>(static_cast<const D &>(*this))->get_Camera(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IHolographicSpaceCameraAddedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IHolographicSpaceCameraAddedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera impl_IHolographicSpaceCameraRemovedEventArgs<D>::Camera() const
{
    Windows::Graphics::Holographic::HolographicCamera value { nullptr };
    check_hresult(static_cast<const IHolographicSpaceCameraRemovedEventArgs &>(static_cast<const D &>(*this))->get_Camera(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicAdapterId impl_IHolographicSpace<D>::PrimaryAdapterId() const
{
    Windows::Graphics::Holographic::HolographicAdapterId value {};
    check_hresult(static_cast<const IHolographicSpace &>(static_cast<const D &>(*this))->get_PrimaryAdapterId(put(value)));
    return value;
}

template <typename D> void impl_IHolographicSpace<D>::SetDirect3D11Device(const Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice & value) const
{
    check_hresult(static_cast<const IHolographicSpace &>(static_cast<const D &>(*this))->abi_SetDirect3D11Device(get(value)));
}

template <typename D> event_token impl_IHolographicSpace<D>::CameraAdded(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IHolographicSpace &>(static_cast<const D &>(*this))->add_CameraAdded(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IHolographicSpace> impl_IHolographicSpace<D>::CameraAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IHolographicSpace>(this, &ABI::Windows::Graphics::Holographic::IHolographicSpace::remove_CameraAdded, CameraAdded(handler));
}

template <typename D> void impl_IHolographicSpace<D>::CameraAdded(event_token cookie) const
{
    check_hresult(static_cast<const IHolographicSpace &>(static_cast<const D &>(*this))->remove_CameraAdded(cookie));
}

template <typename D> event_token impl_IHolographicSpace<D>::CameraRemoved(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IHolographicSpace &>(static_cast<const D &>(*this))->add_CameraRemoved(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IHolographicSpace> impl_IHolographicSpace<D>::CameraRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IHolographicSpace>(this, &ABI::Windows::Graphics::Holographic::IHolographicSpace::remove_CameraRemoved, CameraRemoved(handler));
}

template <typename D> void impl_IHolographicSpace<D>::CameraRemoved(event_token cookie) const
{
    check_hresult(static_cast<const IHolographicSpace &>(static_cast<const D &>(*this))->remove_CameraRemoved(cookie));
}

template <typename D> Windows::Graphics::Holographic::HolographicFrame impl_IHolographicSpace<D>::CreateNextFrame() const
{
    Windows::Graphics::Holographic::HolographicFrame value { nullptr };
    check_hresult(static_cast<const IHolographicSpace &>(static_cast<const D &>(*this))->abi_CreateNextFrame(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicSpace impl_IHolographicSpaceStatics<D>::CreateForCoreWindow(const Windows::UI::Core::CoreWindow & window) const
{
    Windows::Graphics::Holographic::HolographicSpace value { nullptr };
    check_hresult(static_cast<const IHolographicSpaceStatics &>(static_cast<const D &>(*this))->abi_CreateForCoreWindow(get(window), put(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera impl_IHolographicCameraPose<D>::HolographicCamera() const
{
    Windows::Graphics::Holographic::HolographicCamera value { nullptr };
    check_hresult(static_cast<const IHolographicCameraPose &>(static_cast<const D &>(*this))->get_HolographicCamera(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IHolographicCameraPose<D>::Viewport() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IHolographicCameraPose &>(static_cast<const D &>(*this))->get_Viewport(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> impl_IHolographicCameraPose<D>::TryGetViewTransform(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> value;
    check_hresult(static_cast<const IHolographicCameraPose &>(static_cast<const D &>(*this))->abi_TryGetViewTransform(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicStereoTransform impl_IHolographicCameraPose<D>::ProjectionTransform() const
{
    Windows::Graphics::Holographic::HolographicStereoTransform value {};
    check_hresult(static_cast<const IHolographicCameraPose &>(static_cast<const D &>(*this))->get_ProjectionTransform(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> impl_IHolographicCameraPose<D>::TryGetCullingFrustum(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> value;
    check_hresult(static_cast<const IHolographicCameraPose &>(static_cast<const D &>(*this))->abi_TryGetCullingFrustum(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> impl_IHolographicCameraPose<D>::TryGetVisibleFrustum(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> value;
    check_hresult(static_cast<const IHolographicCameraPose &>(static_cast<const D &>(*this))->abi_TryGetVisibleFrustum(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> double impl_IHolographicCameraPose<D>::NearPlaneDistance() const
{
    double value {};
    check_hresult(static_cast<const IHolographicCameraPose &>(static_cast<const D &>(*this))->get_NearPlaneDistance(&value));
    return value;
}

template <typename D> double impl_IHolographicCameraPose<D>::FarPlaneDistance() const
{
    double value {};
    check_hresult(static_cast<const IHolographicCameraPose &>(static_cast<const D &>(*this))->get_FarPlaneDistance(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> impl_IHolographicFramePrediction<D>::CameraPoses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> value;
    check_hresult(static_cast<const IHolographicFramePrediction &>(static_cast<const D &>(*this))->get_CameraPoses(put(value)));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp impl_IHolographicFramePrediction<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value { nullptr };
    check_hresult(static_cast<const IHolographicFramePrediction &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> void impl_IHolographicCameraRenderingParameters<D>::SetFocusPoint(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position) const
{
    check_hresult(static_cast<const IHolographicCameraRenderingParameters &>(static_cast<const D &>(*this))->abi_SetFocusPoint(get(coordinateSystem), get(position)));
}

template <typename D> void impl_IHolographicCameraRenderingParameters<D>::SetFocusPoint(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::float3 & normal) const
{
    check_hresult(static_cast<const IHolographicCameraRenderingParameters &>(static_cast<const D &>(*this))->abi_SetFocusPointWithNormal(get(coordinateSystem), get(position), get(normal)));
}

template <typename D> void impl_IHolographicCameraRenderingParameters<D>::SetFocusPoint(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::float3 & normal, const Windows::Foundation::Numerics::float3 & linearVelocity) const
{
    check_hresult(static_cast<const IHolographicCameraRenderingParameters &>(static_cast<const D &>(*this))->abi_SetFocusPointWithNormalLinearVelocity(get(coordinateSystem), get(position), get(normal), get(linearVelocity)));
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice impl_IHolographicCameraRenderingParameters<D>::Direct3D11Device() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice value;
    check_hresult(static_cast<const IHolographicCameraRenderingParameters &>(static_cast<const D &>(*this))->get_Direct3D11Device(put(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface impl_IHolographicCameraRenderingParameters<D>::Direct3D11BackBuffer() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value;
    check_hresult(static_cast<const IHolographicCameraRenderingParameters &>(static_cast<const D &>(*this))->get_Direct3D11BackBuffer(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> impl_IHolographicFrame<D>::AddedCameras() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> value;
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->get_AddedCameras(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> impl_IHolographicFrame<D>::RemovedCameras() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> value;
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->get_RemovedCameras(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraRenderingParameters impl_IHolographicFrame<D>::GetRenderingParameters(const Windows::Graphics::Holographic::HolographicCameraPose & cameraPose) const
{
    Windows::Graphics::Holographic::HolographicCameraRenderingParameters value { nullptr };
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->abi_GetRenderingParameters(get(cameraPose), put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IHolographicFrame<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePrediction impl_IHolographicFrame<D>::CurrentPrediction() const
{
    Windows::Graphics::Holographic::HolographicFramePrediction value { nullptr };
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->get_CurrentPrediction(put(value)));
    return value;
}

template <typename D> void impl_IHolographicFrame<D>::UpdateCurrentPrediction() const
{
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->abi_UpdateCurrentPrediction());
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentResult impl_IHolographicFrame<D>::PresentUsingCurrentPrediction() const
{
    Windows::Graphics::Holographic::HolographicFramePresentResult result {};
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->abi_PresentUsingCurrentPrediction(&result));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentResult impl_IHolographicFrame<D>::PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior waitBehavior) const
{
    Windows::Graphics::Holographic::HolographicFramePresentResult result {};
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->abi_PresentUsingCurrentPredictionWithBehavior(waitBehavior, &result));
    return result;
}

template <typename D> void impl_IHolographicFrame<D>::WaitForFrameToFinish() const
{
    check_hresult(static_cast<const IHolographicFrame &>(static_cast<const D &>(*this))->abi_WaitForFrameToFinish());
}

inline Windows::Graphics::Holographic::HolographicSpace HolographicSpace::CreateForCoreWindow(const Windows::UI::Core::CoreWindow & window)
{
    return get_activation_factory<HolographicSpace, IHolographicSpaceStatics>().CreateForCoreWindow(window);
}

}

}
