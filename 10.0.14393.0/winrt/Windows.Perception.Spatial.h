// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Perception.3.h"
#include "internal/Windows.Perception.Spatial.3.h"
#include "Windows.Perception.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialAnchor> : produce_base<D, Windows::Perception::Spatial::ISpatialAnchor>
{
    HRESULT __stdcall get_CoordinateSystem(abi_arg_out<Windows::Perception::Spatial::ISpatialCoordinateSystem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CoordinateSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawCoordinateSystem(abi_arg_out<Windows::Perception::Spatial::ISpatialCoordinateSystem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawCoordinateSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RawCoordinateSystemAdjusted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().RawCoordinateSystemAdjusted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RawCoordinateSystemAdjusted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().RawCoordinateSystemAdjusted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialAnchor2> : produce_base<D, Windows::Perception::Spatial::ISpatialAnchor2>
{
    HRESULT __stdcall get_RemovedByUser(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemovedByUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialAnchorManagerStatics> : produce_base<D, Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
{
    HRESULT __stdcall abi_RequestStoreAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestStoreAsync());
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
struct produce<D, Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs> : produce_base<D, Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
{
    HRESULT __stdcall get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(abi_arg_out<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldRawCoordinateSystemToNewRawCoordinateSystemTransform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialAnchorStatics> : produce_base<D, Windows::Perception::Spatial::ISpatialAnchorStatics>
{
    HRESULT __stdcall abi_TryCreateRelativeTo(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::Perception::Spatial::ISpatialAnchor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryCreateRelativeTo(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCreateWithPositionRelativeTo(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Foundation::Numerics::float3> position, abi_arg_out<Windows::Perception::Spatial::ISpatialAnchor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryCreateRelativeTo(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCreateWithPositionAndOrientationRelativeTo(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Foundation::Numerics::float3> position, abi_arg_in<Windows::Foundation::Numerics::quaternion> orientation, abi_arg_out<Windows::Perception::Spatial::ISpatialAnchor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryCreateRelativeTo(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position), *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&orientation)));
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
struct produce<D, Windows::Perception::Spatial::ISpatialAnchorStore> : produce_base<D, Windows::Perception::Spatial::ISpatialAnchorStore>
{
    HRESULT __stdcall abi_GetAllSavedAnchors(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAllSavedAnchors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySave(abi_arg_in<hstring> id, abi_arg_in<Windows::Perception::Spatial::ISpatialAnchor> anchor, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TrySave(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::Perception::Spatial::SpatialAnchor *>(&anchor)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Remove(abi_arg_in<hstring> id) noexcept override
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const hstring *>(&id));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics> : produce_base<D, Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
{
    HRESULT __stdcall abi_TryImportAnchorsAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> stream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().TryImportAnchorsAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryExportAnchorsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>>> anchors, abi_arg_in<Windows::Storage::Streams::IOutputStream> stream, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().TryExportAnchorsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> *>(&anchors), *reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessAsync());
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
struct produce<D, Windows::Perception::Spatial::ISpatialBoundingVolume> : produce_base<D, Windows::Perception::Spatial::ISpatialBoundingVolume>
{};

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialBoundingVolumeStatics> : produce_base<D, Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
{
    HRESULT __stdcall abi_FromBox(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Perception::Spatial::SpatialBoundingBox> box, abi_arg_out<Windows::Perception::Spatial::ISpatialBoundingVolume> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromBox(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Perception::Spatial::SpatialBoundingBox *>(&box)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromOrientedBox(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Perception::Spatial::SpatialBoundingOrientedBox> box, abi_arg_out<Windows::Perception::Spatial::ISpatialBoundingVolume> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromOrientedBox(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Perception::Spatial::SpatialBoundingOrientedBox *>(&box)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromSphere(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Perception::Spatial::SpatialBoundingSphere> sphere, abi_arg_out<Windows::Perception::Spatial::ISpatialBoundingVolume> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromSphere(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Perception::Spatial::SpatialBoundingSphere *>(&sphere)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromFrustum(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Perception::Spatial::SpatialBoundingFrustum> frustum, abi_arg_out<Windows::Perception::Spatial::ISpatialBoundingVolume> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromFrustum(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Perception::Spatial::SpatialBoundingFrustum *>(&frustum)));
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
struct produce<D, Windows::Perception::Spatial::ISpatialCoordinateSystem> : produce_base<D, Windows::Perception::Spatial::ISpatialCoordinateSystem>
{
    HRESULT __stdcall abi_TryGetTransformTo(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> target, abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Numerics::float4x4>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetTransformTo(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&target)));
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
struct produce<D, Windows::Perception::Spatial::ISpatialLocation> : produce_base<D, Windows::Perception::Spatial::ISpatialLocation>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_arg_out<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AbsoluteLinearVelocity(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AbsoluteLinearVelocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AbsoluteLinearAcceleration(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AbsoluteLinearAcceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AbsoluteAngularVelocity(abi_arg_out<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AbsoluteAngularVelocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AbsoluteAngularAcceleration(abi_arg_out<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AbsoluteAngularAcceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialLocator> : produce_base<D, Windows::Perception::Spatial::ISpatialLocator>
{
    HRESULT __stdcall get_Locatability(Windows::Perception::Spatial::SpatialLocatability * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Locatability());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LocatabilityChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().LocatabilityChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LocatabilityChanged(event_token cookie) noexcept override
    {
        try
        {
            this->shim().LocatabilityChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PositionalTrackingDeactivating(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PositionalTrackingDeactivating(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionalTrackingDeactivating(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PositionalTrackingDeactivating(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryLocateAtTimestamp(abi_arg_in<Windows::Perception::IPerceptionTimestamp> timestamp, abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::Perception::Spatial::ISpatialLocation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryLocateAtTimestamp(*reinterpret_cast<const Windows::Perception::PerceptionTimestamp *>(&timestamp), *reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAttachedFrameOfReferenceAtCurrentHeading(abi_arg_out<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAttachedFrameOfReferenceAtCurrentHeading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(abi_arg_in<Windows::Foundation::Numerics::float3> relativePosition, abi_arg_out<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAttachedFrameOfReferenceAtCurrentHeading(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&relativePosition)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(abi_arg_in<Windows::Foundation::Numerics::float3> relativePosition, abi_arg_in<Windows::Foundation::Numerics::quaternion> relativeOrientation, abi_arg_out<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAttachedFrameOfReferenceAtCurrentHeading(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&relativePosition), *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&relativeOrientation)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(abi_arg_in<Windows::Foundation::Numerics::float3> relativePosition, abi_arg_in<Windows::Foundation::Numerics::quaternion> relativeOrientation, double relativeHeadingInRadians, abi_arg_out<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAttachedFrameOfReferenceAtCurrentHeading(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&relativePosition), *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&relativeOrientation), relativeHeadingInRadians));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStationaryFrameOfReferenceAtCurrentLocation(abi_arg_out<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateStationaryFrameOfReferenceAtCurrentLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(abi_arg_in<Windows::Foundation::Numerics::float3> relativePosition, abi_arg_out<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateStationaryFrameOfReferenceAtCurrentLocation(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&relativePosition)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(abi_arg_in<Windows::Foundation::Numerics::float3> relativePosition, abi_arg_in<Windows::Foundation::Numerics::quaternion> relativeOrientation, abi_arg_out<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateStationaryFrameOfReferenceAtCurrentLocation(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&relativePosition), *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&relativeOrientation)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(abi_arg_in<Windows::Foundation::Numerics::float3> relativePosition, abi_arg_in<Windows::Foundation::Numerics::quaternion> relativeOrientation, double relativeHeadingInRadians, abi_arg_out<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateStationaryFrameOfReferenceAtCurrentLocation(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&relativePosition), *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&relativeOrientation), relativeHeadingInRadians));
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
struct produce<D, Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> : produce_base<D, Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
{
    HRESULT __stdcall get_RelativePosition(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativePosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativePosition(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().RelativePosition(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeOrientation(abi_arg_out<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativeOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeOrientation(abi_arg_in<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            this->shim().RelativeOrientation(*reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AdjustHeading(double headingOffsetInRadians) noexcept override
    {
        try
        {
            this->shim().AdjustHeading(headingOffsetInRadians);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStationaryCoordinateSystemAtTimestamp(abi_arg_in<Windows::Perception::IPerceptionTimestamp> timestamp, abi_arg_out<Windows::Perception::Spatial::ISpatialCoordinateSystem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetStationaryCoordinateSystemAtTimestamp(*reinterpret_cast<const Windows::Perception::PerceptionTimestamp *>(&timestamp)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetRelativeHeadingAtTimestamp(abi_arg_in<Windows::Perception::IPerceptionTimestamp> timestamp, abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetRelativeHeadingAtTimestamp(*reinterpret_cast<const Windows::Perception::PerceptionTimestamp *>(&timestamp)));
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
struct produce<D, Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs> : produce_base<D, Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
{
    HRESULT __stdcall get_Canceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Canceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Canceled(bool value) noexcept override
    {
        try
        {
            this->shim().Canceled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialLocatorStatics> : produce_base<D, Windows::Perception::Spatial::ISpatialLocatorStatics>
{
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Perception::Spatial::ISpatialLocator> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDefault());
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
struct produce<D, Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> : produce_base<D, Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
{
    HRESULT __stdcall get_CoordinateSystem(abi_arg_out<Windows::Perception::Spatial::ISpatialCoordinateSystem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CoordinateSystem());
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

namespace Windows::Perception::Spatial {

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float4x4> impl_ISpatialCoordinateSystem<D>::TryGetTransformTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & target) const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float4x4> value;
    check_hresult(static_cast<const ISpatialCoordinateSystem &>(static_cast<const D &>(*this))->abi_TryGetTransformTo(get(target), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float4x4 impl_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs<D>::OldRawCoordinateSystemToNewRawCoordinateSystemTransform() const
{
    Windows::Foundation::Numerics::float4x4 value {};
    check_hresult(static_cast<const ISpatialAnchorRawCoordinateSystemAdjustedEventArgs &>(static_cast<const D &>(*this))->get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem impl_ISpatialAnchor<D>::CoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value { nullptr };
    check_hresult(static_cast<const ISpatialAnchor &>(static_cast<const D &>(*this))->get_CoordinateSystem(put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem impl_ISpatialAnchor<D>::RawCoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value { nullptr };
    check_hresult(static_cast<const ISpatialAnchor &>(static_cast<const D &>(*this))->get_RawCoordinateSystem(put(value)));
    return value;
}

template <typename D> event_token impl_ISpatialAnchor<D>::RawCoordinateSystemAdjusted(const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ISpatialAnchor &>(static_cast<const D &>(*this))->add_RawCoordinateSystemAdjusted(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ISpatialAnchor> impl_ISpatialAnchor<D>::RawCoordinateSystemAdjusted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialAnchor>(this, &ABI::Windows::Perception::Spatial::ISpatialAnchor::remove_RawCoordinateSystemAdjusted, RawCoordinateSystemAdjusted(handler));
}

template <typename D> void impl_ISpatialAnchor<D>::RawCoordinateSystemAdjusted(event_token cookie) const
{
    check_hresult(static_cast<const ISpatialAnchor &>(static_cast<const D &>(*this))->remove_RawCoordinateSystemAdjusted(cookie));
}

template <typename D> bool impl_ISpatialAnchor2<D>::RemovedByUser() const
{
    bool value {};
    check_hresult(static_cast<const ISpatialAnchor2 &>(static_cast<const D &>(*this))->get_RemovedByUser(&value));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialAnchor impl_ISpatialAnchorStatics<D>::TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Perception::Spatial::SpatialAnchor value { nullptr };
    check_hresult(static_cast<const ISpatialAnchorStatics &>(static_cast<const D &>(*this))->abi_TryCreateRelativeTo(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialAnchor impl_ISpatialAnchorStatics<D>::TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position) const
{
    Windows::Perception::Spatial::SpatialAnchor value { nullptr };
    check_hresult(static_cast<const ISpatialAnchorStatics &>(static_cast<const D &>(*this))->abi_TryCreateWithPositionRelativeTo(get(coordinateSystem), get(position), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialAnchor impl_ISpatialAnchorStatics<D>::TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::quaternion & orientation) const
{
    Windows::Perception::Spatial::SpatialAnchor value { nullptr };
    check_hresult(static_cast<const ISpatialAnchorStatics &>(static_cast<const D &>(*this))->abi_TryCreateWithPositionAndOrientationRelativeTo(get(coordinateSystem), get(position), get(orientation), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor> impl_ISpatialAnchorStore<D>::GetAllSavedAnchors() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor> value;
    check_hresult(static_cast<const ISpatialAnchorStore &>(static_cast<const D &>(*this))->abi_GetAllSavedAnchors(put(value)));
    return value;
}

template <typename D> bool impl_ISpatialAnchorStore<D>::TrySave(hstring_ref id, const Windows::Perception::Spatial::SpatialAnchor & anchor) const
{
    bool succeeded {};
    check_hresult(static_cast<const ISpatialAnchorStore &>(static_cast<const D &>(*this))->abi_TrySave(get(id), get(anchor), &succeeded));
    return succeeded;
}

template <typename D> void impl_ISpatialAnchorStore<D>::Remove(hstring_ref id) const
{
    check_hresult(static_cast<const ISpatialAnchorStore &>(static_cast<const D &>(*this))->abi_Remove(get(id)));
}

template <typename D> void impl_ISpatialAnchorStore<D>::Clear() const
{
    check_hresult(static_cast<const ISpatialAnchorStore &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> impl_ISpatialAnchorManagerStatics<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> value;
    check_hresult(static_cast<const ISpatialAnchorManagerStatics &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> impl_ISpatialAnchorTransferManagerStatics<D>::TryImportAnchorsAsync(const Windows::Storage::Streams::IInputStream & stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> operation;
    check_hresult(static_cast<const ISpatialAnchorTransferManagerStatics &>(static_cast<const D &>(*this))->abi_TryImportAnchorsAsync(get(stream), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISpatialAnchorTransferManagerStatics<D>::TryExportAnchorsAsync(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> & anchors, const Windows::Storage::Streams::IOutputStream & stream) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISpatialAnchorTransferManagerStatics &>(static_cast<const D &>(*this))->abi_TryExportAnchorsAsync(get(anchors), get(stream), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> impl_ISpatialAnchorTransferManagerStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> result;
    check_hresult(static_cast<const ISpatialAnchorTransferManagerStatics &>(static_cast<const D &>(*this))->abi_RequestAccessAsync(put(result)));
    return result;
}

template <typename D> bool impl_ISpatialLocatorPositionalTrackingDeactivatingEventArgs<D>::Canceled() const
{
    bool value {};
    check_hresult(static_cast<const ISpatialLocatorPositionalTrackingDeactivatingEventArgs &>(static_cast<const D &>(*this))->get_Canceled(&value));
    return value;
}

template <typename D> void impl_ISpatialLocatorPositionalTrackingDeactivatingEventArgs<D>::Canceled(bool value) const
{
    check_hresult(static_cast<const ISpatialLocatorPositionalTrackingDeactivatingEventArgs &>(static_cast<const D &>(*this))->put_Canceled(value));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpatialLocatorAttachedFrameOfReference<D>::RelativePosition() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpatialLocatorAttachedFrameOfReference &>(static_cast<const D &>(*this))->get_RelativePosition(put(value)));
    return value;
}

template <typename D> void impl_ISpatialLocatorAttachedFrameOfReference<D>::RelativePosition(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const ISpatialLocatorAttachedFrameOfReference &>(static_cast<const D &>(*this))->put_RelativePosition(get(value)));
}

template <typename D> Windows::Foundation::Numerics::quaternion impl_ISpatialLocatorAttachedFrameOfReference<D>::RelativeOrientation() const
{
    Windows::Foundation::Numerics::quaternion value {};
    check_hresult(static_cast<const ISpatialLocatorAttachedFrameOfReference &>(static_cast<const D &>(*this))->get_RelativeOrientation(put(value)));
    return value;
}

template <typename D> void impl_ISpatialLocatorAttachedFrameOfReference<D>::RelativeOrientation(const Windows::Foundation::Numerics::quaternion & value) const
{
    check_hresult(static_cast<const ISpatialLocatorAttachedFrameOfReference &>(static_cast<const D &>(*this))->put_RelativeOrientation(get(value)));
}

template <typename D> void impl_ISpatialLocatorAttachedFrameOfReference<D>::AdjustHeading(double headingOffsetInRadians) const
{
    check_hresult(static_cast<const ISpatialLocatorAttachedFrameOfReference &>(static_cast<const D &>(*this))->abi_AdjustHeading(headingOffsetInRadians));
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem impl_ISpatialLocatorAttachedFrameOfReference<D>::GetStationaryCoordinateSystemAtTimestamp(const Windows::Perception::PerceptionTimestamp & timestamp) const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value { nullptr };
    check_hresult(static_cast<const ISpatialLocatorAttachedFrameOfReference &>(static_cast<const D &>(*this))->abi_GetStationaryCoordinateSystemAtTimestamp(get(timestamp), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_ISpatialLocatorAttachedFrameOfReference<D>::TryGetRelativeHeadingAtTimestamp(const Windows::Perception::PerceptionTimestamp & timestamp) const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const ISpatialLocatorAttachedFrameOfReference &>(static_cast<const D &>(*this))->abi_TryGetRelativeHeadingAtTimestamp(get(timestamp), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem impl_ISpatialStationaryFrameOfReference<D>::CoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value { nullptr };
    check_hresult(static_cast<const ISpatialStationaryFrameOfReference &>(static_cast<const D &>(*this))->get_CoordinateSystem(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpatialLocation<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpatialLocation &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion impl_ISpatialLocation<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value {};
    check_hresult(static_cast<const ISpatialLocation &>(static_cast<const D &>(*this))->get_Orientation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpatialLocation<D>::AbsoluteLinearVelocity() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpatialLocation &>(static_cast<const D &>(*this))->get_AbsoluteLinearVelocity(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpatialLocation<D>::AbsoluteLinearAcceleration() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpatialLocation &>(static_cast<const D &>(*this))->get_AbsoluteLinearAcceleration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion impl_ISpatialLocation<D>::AbsoluteAngularVelocity() const
{
    Windows::Foundation::Numerics::quaternion value {};
    check_hresult(static_cast<const ISpatialLocation &>(static_cast<const D &>(*this))->get_AbsoluteAngularVelocity(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion impl_ISpatialLocation<D>::AbsoluteAngularAcceleration() const
{
    Windows::Foundation::Numerics::quaternion value {};
    check_hresult(static_cast<const ISpatialLocation &>(static_cast<const D &>(*this))->get_AbsoluteAngularAcceleration(put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatability impl_ISpatialLocator<D>::Locatability() const
{
    Windows::Perception::Spatial::SpatialLocatability value {};
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->get_Locatability(&value));
    return value;
}

template <typename D> event_token impl_ISpatialLocator<D>::LocatabilityChanged(const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->add_LocatabilityChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ISpatialLocator> impl_ISpatialLocator<D>::LocatabilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ISpatialLocator>(this, &ABI::Windows::Perception::Spatial::ISpatialLocator::remove_LocatabilityChanged, LocatabilityChanged(handler));
}

template <typename D> void impl_ISpatialLocator<D>::LocatabilityChanged(event_token cookie) const
{
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->remove_LocatabilityChanged(cookie));
}

template <typename D> event_token impl_ISpatialLocator<D>::PositionalTrackingDeactivating(const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->add_PositionalTrackingDeactivating(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ISpatialLocator> impl_ISpatialLocator<D>::PositionalTrackingDeactivating(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialLocator>(this, &ABI::Windows::Perception::Spatial::ISpatialLocator::remove_PositionalTrackingDeactivating, PositionalTrackingDeactivating(handler));
}

template <typename D> void impl_ISpatialLocator<D>::PositionalTrackingDeactivating(event_token cookie) const
{
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->remove_PositionalTrackingDeactivating(cookie));
}

template <typename D> Windows::Perception::Spatial::SpatialLocation impl_ISpatialLocator<D>::TryLocateAtTimestamp(const Windows::Perception::PerceptionTimestamp & timestamp, const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Perception::Spatial::SpatialLocation value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_TryLocateAtTimestamp(get(timestamp), get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference impl_ISpatialLocator<D>::CreateAttachedFrameOfReferenceAtCurrentHeading() const
{
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_CreateAttachedFrameOfReferenceAtCurrentHeading(put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference impl_ISpatialLocator<D>::CreateAttachedFrameOfReferenceAtCurrentHeading(const Windows::Foundation::Numerics::float3 & relativePosition) const
{
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(get(relativePosition), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference impl_ISpatialLocator<D>::CreateAttachedFrameOfReferenceAtCurrentHeading(const Windows::Foundation::Numerics::float3 & relativePosition, const Windows::Foundation::Numerics::quaternion & relativeOrientation) const
{
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(get(relativePosition), get(relativeOrientation), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference impl_ISpatialLocator<D>::CreateAttachedFrameOfReferenceAtCurrentHeading(const Windows::Foundation::Numerics::float3 & relativePosition, const Windows::Foundation::Numerics::quaternion & relativeOrientation, double relativeHeadingInRadians) const
{
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(get(relativePosition), get(relativeOrientation), relativeHeadingInRadians, put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStationaryFrameOfReference impl_ISpatialLocator<D>::CreateStationaryFrameOfReferenceAtCurrentLocation() const
{
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_CreateStationaryFrameOfReferenceAtCurrentLocation(put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStationaryFrameOfReference impl_ISpatialLocator<D>::CreateStationaryFrameOfReferenceAtCurrentLocation(const Windows::Foundation::Numerics::float3 & relativePosition) const
{
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(get(relativePosition), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStationaryFrameOfReference impl_ISpatialLocator<D>::CreateStationaryFrameOfReferenceAtCurrentLocation(const Windows::Foundation::Numerics::float3 & relativePosition, const Windows::Foundation::Numerics::quaternion & relativeOrientation) const
{
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(get(relativePosition), get(relativeOrientation), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStationaryFrameOfReference impl_ISpatialLocator<D>::CreateStationaryFrameOfReferenceAtCurrentLocation(const Windows::Foundation::Numerics::float3 & relativePosition, const Windows::Foundation::Numerics::quaternion & relativeOrientation, double relativeHeadingInRadians) const
{
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference value { nullptr };
    check_hresult(static_cast<const ISpatialLocator &>(static_cast<const D &>(*this))->abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(get(relativePosition), get(relativeOrientation), relativeHeadingInRadians, put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocator impl_ISpatialLocatorStatics<D>::GetDefault() const
{
    Windows::Perception::Spatial::SpatialLocator value { nullptr };
    check_hresult(static_cast<const ISpatialLocatorStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialBoundingVolume impl_ISpatialBoundingVolumeStatics<D>::FromBox(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingBox & box) const
{
    Windows::Perception::Spatial::SpatialBoundingVolume value { nullptr };
    check_hresult(static_cast<const ISpatialBoundingVolumeStatics &>(static_cast<const D &>(*this))->abi_FromBox(get(coordinateSystem), get(box), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialBoundingVolume impl_ISpatialBoundingVolumeStatics<D>::FromOrientedBox(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingOrientedBox & box) const
{
    Windows::Perception::Spatial::SpatialBoundingVolume value { nullptr };
    check_hresult(static_cast<const ISpatialBoundingVolumeStatics &>(static_cast<const D &>(*this))->abi_FromOrientedBox(get(coordinateSystem), get(box), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialBoundingVolume impl_ISpatialBoundingVolumeStatics<D>::FromSphere(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingSphere & sphere) const
{
    Windows::Perception::Spatial::SpatialBoundingVolume value { nullptr };
    check_hresult(static_cast<const ISpatialBoundingVolumeStatics &>(static_cast<const D &>(*this))->abi_FromSphere(get(coordinateSystem), get(sphere), put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialBoundingVolume impl_ISpatialBoundingVolumeStatics<D>::FromFrustum(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingFrustum & frustum) const
{
    Windows::Perception::Spatial::SpatialBoundingVolume value { nullptr };
    check_hresult(static_cast<const ISpatialBoundingVolumeStatics &>(static_cast<const D &>(*this))->abi_FromFrustum(get(coordinateSystem), get(frustum), put(value)));
    return value;
}

inline Windows::Perception::Spatial::SpatialAnchor SpatialAnchor::TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem)
{
    return get_activation_factory<SpatialAnchor, ISpatialAnchorStatics>().TryCreateRelativeTo(coordinateSystem);
}

inline Windows::Perception::Spatial::SpatialAnchor SpatialAnchor::TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position)
{
    return get_activation_factory<SpatialAnchor, ISpatialAnchorStatics>().TryCreateRelativeTo(coordinateSystem, position);
}

inline Windows::Perception::Spatial::SpatialAnchor SpatialAnchor::TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::quaternion & orientation)
{
    return get_activation_factory<SpatialAnchor, ISpatialAnchorStatics>().TryCreateRelativeTo(coordinateSystem, position, orientation);
}

inline Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> SpatialAnchorManager::RequestStoreAsync()
{
    return get_activation_factory<SpatialAnchorManager, ISpatialAnchorManagerStatics>().RequestStoreAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> SpatialAnchorTransferManager::TryImportAnchorsAsync(const Windows::Storage::Streams::IInputStream & stream)
{
    return get_activation_factory<SpatialAnchorTransferManager, ISpatialAnchorTransferManagerStatics>().TryImportAnchorsAsync(stream);
}

inline Windows::Foundation::IAsyncOperation<bool> SpatialAnchorTransferManager::TryExportAnchorsAsync(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> & anchors, const Windows::Storage::Streams::IOutputStream & stream)
{
    return get_activation_factory<SpatialAnchorTransferManager, ISpatialAnchorTransferManagerStatics>().TryExportAnchorsAsync(anchors, stream);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> SpatialAnchorTransferManager::RequestAccessAsync()
{
    return get_activation_factory<SpatialAnchorTransferManager, ISpatialAnchorTransferManagerStatics>().RequestAccessAsync();
}

inline Windows::Perception::Spatial::SpatialBoundingVolume SpatialBoundingVolume::FromBox(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingBox & box)
{
    return get_activation_factory<SpatialBoundingVolume, ISpatialBoundingVolumeStatics>().FromBox(coordinateSystem, box);
}

inline Windows::Perception::Spatial::SpatialBoundingVolume SpatialBoundingVolume::FromOrientedBox(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingOrientedBox & box)
{
    return get_activation_factory<SpatialBoundingVolume, ISpatialBoundingVolumeStatics>().FromOrientedBox(coordinateSystem, box);
}

inline Windows::Perception::Spatial::SpatialBoundingVolume SpatialBoundingVolume::FromSphere(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingSphere & sphere)
{
    return get_activation_factory<SpatialBoundingVolume, ISpatialBoundingVolumeStatics>().FromSphere(coordinateSystem, sphere);
}

inline Windows::Perception::Spatial::SpatialBoundingVolume SpatialBoundingVolume::FromFrustum(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingFrustum & frustum)
{
    return get_activation_factory<SpatialBoundingVolume, ISpatialBoundingVolumeStatics>().FromFrustum(coordinateSystem, frustum);
}

inline Windows::Perception::Spatial::SpatialLocator SpatialLocator::GetDefault()
{
    return get_activation_factory<SpatialLocator, ISpatialLocatorStatics>().GetDefault();
}

}

}
