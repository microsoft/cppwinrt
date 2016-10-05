// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Perception.Spatial.0.h"
#include "Windows.Perception.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Perception::Spatial {

struct SpatialBoundingFrustum
{
    Windows::Foundation::Numerics::plane Near;
    Windows::Foundation::Numerics::plane Far;
    Windows::Foundation::Numerics::plane Right;
    Windows::Foundation::Numerics::plane Left;
    Windows::Foundation::Numerics::plane Top;
    Windows::Foundation::Numerics::plane Bottom;
};

struct SpatialBoundingBox
{
    Windows::Foundation::Numerics::float3 Center;
    Windows::Foundation::Numerics::float3 Extents;
};

struct SpatialBoundingOrientedBox
{
    Windows::Foundation::Numerics::float3 Center;
    Windows::Foundation::Numerics::float3 Extents;
    Windows::Foundation::Numerics::quaternion Orientation;
};

struct SpatialBoundingSphere
{
    Windows::Foundation::Numerics::float3 Center;
    float Radius;
};

}

namespace Windows::Perception::Spatial {

using SpatialBoundingFrustum = ABI::Windows::Perception::Spatial::SpatialBoundingFrustum;
using SpatialBoundingBox = ABI::Windows::Perception::Spatial::SpatialBoundingBox;
using SpatialBoundingOrientedBox = ABI::Windows::Perception::Spatial::SpatialBoundingOrientedBox;
using SpatialBoundingSphere = ABI::Windows::Perception::Spatial::SpatialBoundingSphere;

}

namespace ABI::Windows::Perception::Spatial {

struct __declspec(uuid("0529e5ce-1d34-3702-bcec-eabff578a869")) __declspec(novtable) ISpatialAnchor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CoordinateSystem(Windows::Perception::Spatial::ISpatialCoordinateSystem ** value) = 0;
    virtual HRESULT __stdcall get_RawCoordinateSystem(Windows::Perception::Spatial::ISpatialCoordinateSystem ** value) = 0;
    virtual HRESULT __stdcall add_RawCoordinateSystemAdjusted(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_RawCoordinateSystemAdjusted(event_token cookie) = 0;
};

struct __declspec(uuid("ed17c908-a695-4cf6-92fd-97263ba71047")) __declspec(novtable) ISpatialAnchor2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemovedByUser(bool * value) = 0;
};

struct __declspec(uuid("88e30eab-f3b7-420b-b086-8a80c07d910d")) __declspec(novtable) ISpatialAnchorManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestStoreAsync(Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> ** value) = 0;
};

struct __declspec(uuid("a1e81eb8-56c7-3117-a2e4-81e0fcf28e00")) __declspec(novtable) ISpatialAnchorRawCoordinateSystemAdjustedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(Windows::Foundation::Numerics::float4x4 * value) = 0;
};

struct __declspec(uuid("a9928642-0174-311c-ae79-0e5107669f16")) __declspec(novtable) ISpatialAnchorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryCreateRelativeTo(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Perception::Spatial::ISpatialAnchor ** value) = 0;
    virtual HRESULT __stdcall abi_TryCreateWithPositionRelativeTo(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Foundation::Numerics::float3 position, Windows::Perception::Spatial::ISpatialAnchor ** value) = 0;
    virtual HRESULT __stdcall abi_TryCreateWithPositionAndOrientationRelativeTo(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::quaternion orientation, Windows::Perception::Spatial::ISpatialAnchor ** value) = 0;
};

struct __declspec(uuid("b0bc3636-486a-3cb0-9e6f-1245165c4db6")) __declspec(novtable) ISpatialAnchorStore : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetAllSavedAnchors(Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor> ** value) = 0;
    virtual HRESULT __stdcall abi_TrySave(hstring id, Windows::Perception::Spatial::ISpatialAnchor * anchor, bool * succeeded) = 0;
    virtual HRESULT __stdcall abi_Remove(hstring id) = 0;
    virtual HRESULT __stdcall abi_Clear() = 0;
};

struct __declspec(uuid("03bbf9b9-12d8-4bce-8835-c5df3ac0adab")) __declspec(novtable) ISpatialAnchorTransferManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryImportAnchorsAsync(Windows::Storage::Streams::IInputStream * stream, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> ** operation) = 0;
    virtual HRESULT __stdcall abi_TryExportAnchorsAsync(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> * anchors, Windows::Storage::Streams::IOutputStream * stream, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestAccessAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> ** result) = 0;
};

struct __declspec(uuid("fb2065da-68c3-33df-b7af-4c787207999c")) __declspec(novtable) ISpatialBoundingVolume : Windows::IInspectable
{
};

struct __declspec(uuid("05889117-b3e1-36d8-b017-566181a5b196")) __declspec(novtable) ISpatialBoundingVolumeStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromBox(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Perception::Spatial::SpatialBoundingBox box, Windows::Perception::Spatial::ISpatialBoundingVolume ** value) = 0;
    virtual HRESULT __stdcall abi_FromOrientedBox(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Perception::Spatial::SpatialBoundingOrientedBox box, Windows::Perception::Spatial::ISpatialBoundingVolume ** value) = 0;
    virtual HRESULT __stdcall abi_FromSphere(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Perception::Spatial::SpatialBoundingSphere sphere, Windows::Perception::Spatial::ISpatialBoundingVolume ** value) = 0;
    virtual HRESULT __stdcall abi_FromFrustum(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Perception::Spatial::SpatialBoundingFrustum frustum, Windows::Perception::Spatial::ISpatialBoundingVolume ** value) = 0;
};

struct __declspec(uuid("69ebca4b-60a3-3586-a653-59a7bd676d07")) __declspec(novtable) ISpatialCoordinateSystem : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryGetTransformTo(Windows::Perception::Spatial::ISpatialCoordinateSystem * target, Windows::Foundation::IReference<Windows::Foundation::Numerics::float4x4> ** value) = 0;
};

struct __declspec(uuid("1d81d29d-24a1-37d5-8fa1-39b4f9ad67e2")) __declspec(novtable) ISpatialLocation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion * value) = 0;
    virtual HRESULT __stdcall get_AbsoluteLinearVelocity(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall get_AbsoluteLinearAcceleration(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall get_AbsoluteAngularVelocity(Windows::Foundation::Numerics::quaternion * value) = 0;
    virtual HRESULT __stdcall get_AbsoluteAngularAcceleration(Windows::Foundation::Numerics::quaternion * value) = 0;
};

struct __declspec(uuid("f6478925-9e0c-3bb6-997e-b64ecca24cf4")) __declspec(novtable) ISpatialLocator : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Locatability(winrt::Windows::Perception::Spatial::SpatialLocatability * value) = 0;
    virtual HRESULT __stdcall add_LocatabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_LocatabilityChanged(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PositionalTrackingDeactivating(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_PositionalTrackingDeactivating(event_token cookie) = 0;
    virtual HRESULT __stdcall abi_TryLocateAtTimestamp(Windows::Perception::IPerceptionTimestamp * timestamp, Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Perception::Spatial::ISpatialLocation ** value) = 0;
    virtual HRESULT __stdcall abi_CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference ** value) = 0;
    virtual HRESULT __stdcall abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(Windows::Foundation::Numerics::float3 relativePosition, Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference ** value) = 0;
    virtual HRESULT __stdcall abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(Windows::Foundation::Numerics::float3 relativePosition, Windows::Foundation::Numerics::quaternion relativeOrientation, Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference ** value) = 0;
    virtual HRESULT __stdcall abi_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(Windows::Foundation::Numerics::float3 relativePosition, Windows::Foundation::Numerics::quaternion relativeOrientation, double relativeHeadingInRadians, Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference ** value) = 0;
    virtual HRESULT __stdcall abi_CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Perception::Spatial::ISpatialStationaryFrameOfReference ** value) = 0;
    virtual HRESULT __stdcall abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(Windows::Foundation::Numerics::float3 relativePosition, Windows::Perception::Spatial::ISpatialStationaryFrameOfReference ** value) = 0;
    virtual HRESULT __stdcall abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(Windows::Foundation::Numerics::float3 relativePosition, Windows::Foundation::Numerics::quaternion relativeOrientation, Windows::Perception::Spatial::ISpatialStationaryFrameOfReference ** value) = 0;
    virtual HRESULT __stdcall abi_CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(Windows::Foundation::Numerics::float3 relativePosition, Windows::Foundation::Numerics::quaternion relativeOrientation, double relativeHeadingInRadians, Windows::Perception::Spatial::ISpatialStationaryFrameOfReference ** value) = 0;
};

struct __declspec(uuid("e1774ef6-1f4f-499c-9625-ef5e6ed7a048")) __declspec(novtable) ISpatialLocatorAttachedFrameOfReference : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RelativePosition(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_RelativePosition(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_RelativeOrientation(Windows::Foundation::Numerics::quaternion * value) = 0;
    virtual HRESULT __stdcall put_RelativeOrientation(Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall abi_AdjustHeading(double headingOffsetInRadians) = 0;
    virtual HRESULT __stdcall abi_GetStationaryCoordinateSystemAtTimestamp(Windows::Perception::IPerceptionTimestamp * timestamp, Windows::Perception::Spatial::ISpatialCoordinateSystem ** value) = 0;
    virtual HRESULT __stdcall abi_TryGetRelativeHeadingAtTimestamp(Windows::Perception::IPerceptionTimestamp * timestamp, Windows::Foundation::IReference<double> ** value) = 0;
};

struct __declspec(uuid("b8a84063-e3f4-368b-9061-9ea9d1d6cc16")) __declspec(novtable) ISpatialLocatorPositionalTrackingDeactivatingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Canceled(bool * value) = 0;
    virtual HRESULT __stdcall put_Canceled(bool value) = 0;
};

struct __declspec(uuid("b76e3340-a7c2-361b-bb82-56e93b89b1bb")) __declspec(novtable) ISpatialLocatorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Perception::Spatial::ISpatialLocator ** value) = 0;
};

struct __declspec(uuid("09dbccb9-bcf8-3e7f-be7e-7edccbb178a8")) __declspec(novtable) ISpatialStationaryFrameOfReference : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CoordinateSystem(Windows::Perception::Spatial::ISpatialCoordinateSystem ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Perception::Spatial::SpatialAnchor> { using default_interface = Windows::Perception::Spatial::ISpatialAnchor; };
template <> struct traits<Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> { using default_interface = Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs; };
template <> struct traits<Windows::Perception::Spatial::SpatialAnchorStore> { using default_interface = Windows::Perception::Spatial::ISpatialAnchorStore; };
template <> struct traits<Windows::Perception::Spatial::SpatialBoundingVolume> { using default_interface = Windows::Perception::Spatial::ISpatialBoundingVolume; };
template <> struct traits<Windows::Perception::Spatial::SpatialCoordinateSystem> { using default_interface = Windows::Perception::Spatial::ISpatialCoordinateSystem; };
template <> struct traits<Windows::Perception::Spatial::SpatialLocation> { using default_interface = Windows::Perception::Spatial::ISpatialLocation; };
template <> struct traits<Windows::Perception::Spatial::SpatialLocator> { using default_interface = Windows::Perception::Spatial::ISpatialLocator; };
template <> struct traits<Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference> { using default_interface = Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference; };
template <> struct traits<Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> { using default_interface = Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs; };
template <> struct traits<Windows::Perception::Spatial::SpatialStationaryFrameOfReference> { using default_interface = Windows::Perception::Spatial::ISpatialStationaryFrameOfReference; };

}

namespace Windows::Perception::Spatial {

template <typename T> struct impl_ISpatialAnchor;
template <typename T> struct impl_ISpatialAnchor2;
template <typename T> struct impl_ISpatialAnchorManagerStatics;
template <typename T> struct impl_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
template <typename T> struct impl_ISpatialAnchorStatics;
template <typename T> struct impl_ISpatialAnchorStore;
template <typename T> struct impl_ISpatialAnchorTransferManagerStatics;
template <typename T> struct impl_ISpatialBoundingVolume;
template <typename T> struct impl_ISpatialBoundingVolumeStatics;
template <typename T> struct impl_ISpatialCoordinateSystem;
template <typename T> struct impl_ISpatialLocation;
template <typename T> struct impl_ISpatialLocator;
template <typename T> struct impl_ISpatialLocatorAttachedFrameOfReference;
template <typename T> struct impl_ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
template <typename T> struct impl_ISpatialLocatorStatics;
template <typename T> struct impl_ISpatialStationaryFrameOfReference;

}

namespace impl {

template <> struct traits<Windows::Perception::Spatial::ISpatialAnchor>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialAnchor;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialAnchor<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialAnchor2>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialAnchor2;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialAnchor2<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialAnchorManagerStatics;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialAnchorManagerStatics<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialAnchorStatics>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialAnchorStatics;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialAnchorStatics<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialAnchorStore>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialAnchorStore;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialAnchorStore<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialAnchorTransferManagerStatics<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialBoundingVolume>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialBoundingVolume;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialBoundingVolume<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialBoundingVolumeStatics<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialCoordinateSystem>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialCoordinateSystem<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialLocation>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialLocation;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialLocation<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialLocator>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialLocator;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialLocator<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialLocatorAttachedFrameOfReference<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialLocatorPositionalTrackingDeactivatingEventArgs<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialLocatorStatics>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialLocatorStatics;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialLocatorStatics<D>;
};

template <> struct traits<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
{
    using abi = ABI::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference;
    template <typename D> using consume = Windows::Perception::Spatial::impl_ISpatialStationaryFrameOfReference<D>;
};

template <> struct traits<Windows::Perception::Spatial::SpatialAnchor>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialAnchor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialAnchor"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialAnchorManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialAnchorManager"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialAnchorStore>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialAnchorStore;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialAnchorStore"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialAnchorTransferManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialAnchorTransferManager"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialBoundingVolume>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialBoundingVolume;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialBoundingVolume"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialCoordinateSystem>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialCoordinateSystem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialCoordinateSystem"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialLocation>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialLocation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialLocation"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialLocator>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialLocator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialLocator"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs"; }
};

template <> struct traits<Windows::Perception::Spatial::SpatialStationaryFrameOfReference>
{
    using abi = ABI::Windows::Perception::Spatial::SpatialStationaryFrameOfReference;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.Spatial.SpatialStationaryFrameOfReference"; }
};

}

}
