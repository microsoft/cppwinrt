// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Perception.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.RemoteSystems.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/Windows.Perception.h"

namespace winrt::impl {

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_ISpatialAnchor<D>::CoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchor)->get_CoordinateSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_ISpatialAnchor<D>::RawCoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchor)->get_RawCoordinateSystem(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Perception_Spatial_ISpatialAnchor<D>::RawCoordinateSystemAdjusted(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchor)->add_RawCoordinateSystemAdjusted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Perception::Spatial::ISpatialAnchor> consume_Windows_Perception_Spatial_ISpatialAnchor<D>::RawCoordinateSystemAdjusted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::ISpatialAnchor>(this, &abi_t<Windows::Perception::Spatial::ISpatialAnchor>::remove_RawCoordinateSystemAdjusted, RawCoordinateSystemAdjusted(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialAnchor<D>::RawCoordinateSystemAdjusted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchor)->remove_RawCoordinateSystemAdjusted(get_abi(cookie)));
}

template <typename D> bool consume_Windows_Perception_Spatial_ISpatialAnchor2<D>::RemovedByUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchor2)->get_RemovedByUser(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> consume_Windows_Perception_Spatial_ISpatialAnchorManagerStatics<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorManagerStatics)->RequestStoreAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float4x4 consume_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs<D>::OldRawCoordinateSystemToNewRawCoordinateSystemTransform() const
{
    Windows::Foundation::Numerics::float4x4 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs)->get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialAnchor consume_Windows_Perception_Spatial_ISpatialAnchorStatics<D>::TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Perception::Spatial::SpatialAnchor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorStatics)->TryCreateRelativeTo(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialAnchor consume_Windows_Perception_Spatial_ISpatialAnchorStatics<D>::TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position) const
{
    Windows::Perception::Spatial::SpatialAnchor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorStatics)->TryCreateWithPositionRelativeTo(get_abi(coordinateSystem), get_abi(position), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialAnchor consume_Windows_Perception_Spatial_ISpatialAnchorStatics<D>::TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const
{
    Windows::Perception::Spatial::SpatialAnchor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorStatics)->TryCreateWithPositionAndOrientationRelativeTo(get_abi(coordinateSystem), get_abi(position), get_abi(orientation), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor> consume_Windows_Perception_Spatial_ISpatialAnchorStore<D>::GetAllSavedAnchors() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorStore)->GetAllSavedAnchors(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Perception_Spatial_ISpatialAnchorStore<D>::TrySave(param::hstring const& id, Windows::Perception::Spatial::SpatialAnchor const& anchor) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorStore)->TrySave(get_abi(id), get_abi(anchor), &succeeded));
    return succeeded;
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialAnchorStore<D>::Remove(param::hstring const& id) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorStore)->Remove(get_abi(id)));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialAnchorStore<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorStore)->Clear());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics<D>::TryImportAnchorsAsync(Windows::Storage::Streams::IInputStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics)->TryImportAnchorsAsync(get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics<D>::TryExportAnchorsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> const& anchors, Windows::Storage::Streams::IOutputStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics)->TryExportAnchorsAsync(get_abi(anchors), get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Perception::Spatial::SpatialBoundingVolume consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics<D>::FromBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingBox const& box) const
{
    Windows::Perception::Spatial::SpatialBoundingVolume value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialBoundingVolumeStatics)->FromBox(get_abi(coordinateSystem), get_abi(box), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialBoundingVolume consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics<D>::FromOrientedBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingOrientedBox const& box) const
{
    Windows::Perception::Spatial::SpatialBoundingVolume value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialBoundingVolumeStatics)->FromOrientedBox(get_abi(coordinateSystem), get_abi(box), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialBoundingVolume consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics<D>::FromSphere(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingSphere const& sphere) const
{
    Windows::Perception::Spatial::SpatialBoundingVolume value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialBoundingVolumeStatics)->FromSphere(get_abi(coordinateSystem), get_abi(sphere), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialBoundingVolume consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics<D>::FromFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingFrustum const& frustum) const
{
    Windows::Perception::Spatial::SpatialBoundingVolume value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialBoundingVolumeStatics)->FromFrustum(get_abi(coordinateSystem), get_abi(frustum), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float4x4> consume_Windows_Perception_Spatial_ISpatialCoordinateSystem<D>::TryGetTransformTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& target) const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float4x4> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialCoordinateSystem)->TryGetTransformTo(get_abi(target), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Perception_Spatial_ISpatialEntity<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntity)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialAnchor consume_Windows_Perception_Spatial_ISpatialEntity<D>::Anchor() const
{
    Windows::Perception::Spatial::SpatialAnchor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntity)->get_Anchor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Perception_Spatial_ISpatialEntity<D>::Properties() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntity)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialEntity consume_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs<D>::Entity() const
{
    Windows::Perception::Spatial::SpatialEntity value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityAddedEventArgs)->get_Entity(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialEntity consume_Windows_Perception_Spatial_ISpatialEntityFactory<D>::CreateWithSpatialAnchor(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor) const
{
    Windows::Perception::Spatial::SpatialEntity value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityFactory)->CreateWithSpatialAnchor(get_abi(spatialAnchor), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialEntity consume_Windows_Perception_Spatial_ISpatialEntityFactory<D>::CreateWithSpatialAnchorAndProperties(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor, Windows::Foundation::Collections::ValueSet const& propertySet) const
{
    Windows::Perception::Spatial::SpatialEntity value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityFactory)->CreateWithSpatialAnchorAndProperties(get_abi(spatialAnchor), get_abi(propertySet), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialEntity consume_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs<D>::Entity() const
{
    Windows::Perception::Spatial::SpatialEntity value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs)->get_Entity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Perception_Spatial_ISpatialEntityStore<D>::SaveAsync(Windows::Perception::Spatial::SpatialEntity const& entity) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityStore)->SaveAsync(get_abi(entity), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Perception_Spatial_ISpatialEntityStore<D>::RemoveAsync(Windows::Perception::Spatial::SpatialEntity const& entity) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityStore)->RemoveAsync(get_abi(entity), put_abi(action)));
    return action;
}

template <typename D> Windows::Perception::Spatial::SpatialEntityWatcher consume_Windows_Perception_Spatial_ISpatialEntityStore<D>::CreateEntityWatcher() const
{
    Windows::Perception::Spatial::SpatialEntityWatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityStore)->CreateEntityWatcher(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Perception_Spatial_ISpatialEntityStoreStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityStoreStatics)->get_IsSupported(&value));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialEntityStore consume_Windows_Perception_Spatial_ISpatialEntityStoreStatics<D>::TryGet(Windows::System::RemoteSystems::RemoteSystemSession const& session) const
{
    Windows::Perception::Spatial::SpatialEntityStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityStoreStatics)->TryGetForRemoteSystemSession(get_abi(session), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialEntity consume_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs<D>::Entity() const
{
    Windows::Perception::Spatial::SpatialEntity value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs)->get_Entity(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialEntityWatcherStatus consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Status() const
{
    Windows::Perception::Spatial::SpatialEntityWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher> consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::ISpatialEntityWatcher>(this, &abi_t<Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher> consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::ISpatialEntityWatcher>(this, &abi_t<Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher> consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::ISpatialEntityWatcher>(this, &abi_t<Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher> consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::ISpatialEntityWatcher>(this, &abi_t<Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->Start());
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialEntityWatcher)->Stop());
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_Spatial_ISpatialLocation<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocation)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Perception_Spatial_ISpatialLocation<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocation)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_Spatial_ISpatialLocation<D>::AbsoluteLinearVelocity() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocation)->get_AbsoluteLinearVelocity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_Spatial_ISpatialLocation<D>::AbsoluteLinearAcceleration() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocation)->get_AbsoluteLinearAcceleration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Perception_Spatial_ISpatialLocation<D>::AbsoluteAngularVelocity() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocation)->get_AbsoluteAngularVelocity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Perception_Spatial_ISpatialLocation<D>::AbsoluteAngularAcceleration() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocation)->get_AbsoluteAngularAcceleration(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatability consume_Windows_Perception_Spatial_ISpatialLocator<D>::Locatability() const
{
    Windows::Perception::Spatial::SpatialLocatability value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->get_Locatability(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Perception_Spatial_ISpatialLocator<D>::LocatabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->add_LocatabilityChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Perception::Spatial::ISpatialLocator> consume_Windows_Perception_Spatial_ISpatialLocator<D>::LocatabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::ISpatialLocator>(this, &abi_t<Windows::Perception::Spatial::ISpatialLocator>::remove_LocatabilityChanged, LocatabilityChanged(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialLocator<D>::LocatabilityChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->remove_LocatabilityChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Perception_Spatial_ISpatialLocator<D>::PositionalTrackingDeactivating(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->add_PositionalTrackingDeactivating(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Perception::Spatial::ISpatialLocator> consume_Windows_Perception_Spatial_ISpatialLocator<D>::PositionalTrackingDeactivating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::ISpatialLocator>(this, &abi_t<Windows::Perception::Spatial::ISpatialLocator>::remove_PositionalTrackingDeactivating, PositionalTrackingDeactivating(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialLocator<D>::PositionalTrackingDeactivating(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->remove_PositionalTrackingDeactivating(get_abi(cookie)));
}

template <typename D> Windows::Perception::Spatial::SpatialLocation consume_Windows_Perception_Spatial_ISpatialLocator<D>::TryLocateAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp, Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Perception::Spatial::SpatialLocation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->TryLocateAtTimestamp(get_abi(timestamp), get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference consume_Windows_Perception_Spatial_ISpatialLocator<D>::CreateAttachedFrameOfReferenceAtCurrentHeading() const
{
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->CreateAttachedFrameOfReferenceAtCurrentHeading(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference consume_Windows_Perception_Spatial_ISpatialLocator<D>::CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition) const
{
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(get_abi(relativePosition), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference consume_Windows_Perception_Spatial_ISpatialLocator<D>::CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation) const
{
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(get_abi(relativePosition), get_abi(relativeOrientation), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference consume_Windows_Perception_Spatial_ISpatialLocator<D>::CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation, double relativeHeadingInRadians) const
{
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(get_abi(relativePosition), get_abi(relativeOrientation), relativeHeadingInRadians, put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStationaryFrameOfReference consume_Windows_Perception_Spatial_ISpatialLocator<D>::CreateStationaryFrameOfReferenceAtCurrentLocation() const
{
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->CreateStationaryFrameOfReferenceAtCurrentLocation(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStationaryFrameOfReference consume_Windows_Perception_Spatial_ISpatialLocator<D>::CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition) const
{
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(get_abi(relativePosition), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStationaryFrameOfReference consume_Windows_Perception_Spatial_ISpatialLocator<D>::CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation) const
{
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(get_abi(relativePosition), get_abi(relativeOrientation), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStationaryFrameOfReference consume_Windows_Perception_Spatial_ISpatialLocator<D>::CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation, double relativeHeadingInRadians) const
{
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocator)->CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(get_abi(relativePosition), get_abi(relativeOrientation), relativeHeadingInRadians, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>::RelativePosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference)->get_RelativePosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>::RelativePosition(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference)->put_RelativePosition(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>::RelativeOrientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference)->get_RelativeOrientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>::RelativeOrientation(Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference)->put_RelativeOrientation(get_abi(value)));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>::AdjustHeading(double headingOffsetInRadians) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference)->AdjustHeading(headingOffsetInRadians));
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>::GetStationaryCoordinateSystemAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference)->GetStationaryCoordinateSystemAtTimestamp(get_abi(timestamp), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>::TryGetRelativeHeadingAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference)->TryGetRelativeHeadingAtTimestamp(get_abi(timestamp), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs<D>::Canceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs)->get_Canceled(&value));
    return value;
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs<D>::Canceled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs)->put_Canceled(value));
}

template <typename D> Windows::Perception::Spatial::SpatialLocator consume_Windows_Perception_Spatial_ISpatialLocatorStatics<D>::GetDefault() const
{
    Windows::Perception::Spatial::SpatialLocator value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialLocatorStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference<D>::CoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReference)->get_CoordinateSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialMovementRange consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference<D>::MovementRange() const
{
    Windows::Perception::Spatial::SpatialMovementRange value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReference)->get_MovementRange(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLookDirectionRange consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference<D>::LookDirectionRange() const
{
    Windows::Perception::Spatial::SpatialLookDirectionRange value{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReference)->get_LookDirectionRange(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference<D>::GetCoordinateSystemAtCurrentLocation(Windows::Perception::Spatial::SpatialLocator const& locator) const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReference)->GetCoordinateSystemAtCurrentLocation(get_abi(locator), put_abi(result)));
    return result;
}

template <typename D> com_array<Windows::Foundation::Numerics::float3> consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference<D>::TryGetMovementBounds(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    com_array<Windows::Foundation::Numerics::float3> value;
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReference)->TryGetMovementBounds(get_abi(coordinateSystem), impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialStageFrameOfReference consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics<D>::Current() const
{
    Windows::Perception::Spatial::SpatialStageFrameOfReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics<D>::CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics)->add_CurrentChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics> consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics<D>::CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>(this, &abi_t<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>::remove_CurrentChanged, CurrentChanged(handler));
}

template <typename D> void consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics<D>::CurrentChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics)->remove_CurrentChanged(get_abi(cookie)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialStageFrameOfReference> consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics<D>::RequestNewStageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialStageFrameOfReference> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics)->RequestNewStageAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference<D>::CoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::ISpatialStationaryFrameOfReference)->get_CoordinateSystem(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialAnchor> : produce_base<D, Windows::Perception::Spatial::ISpatialAnchor>
{
    HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CoordinateSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawCoordinateSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawCoordinateSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RawCoordinateSystemAdjusted(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().RawCoordinateSystemAdjusted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RawCoordinateSystemAdjusted(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RawCoordinateSystemAdjusted(*reinterpret_cast<event_token const*>(&cookie));
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
    HRESULT __stdcall get_RemovedByUser(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemovedByUser());
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
    HRESULT __stdcall RequestStoreAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestStoreAsync());
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
    HRESULT __stdcall get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(abi_t<Windows::Foundation::Numerics::float4x4>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OldRawCoordinateSystemToNewRawCoordinateSystemTransform());
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
    HRESULT __stdcall TryCreateRelativeTo(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryCreateRelativeTo(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCreateWithPositionRelativeTo(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryCreateRelativeTo(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCreateWithPositionAndOrientationRelativeTo(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position, abi_t<Windows::Foundation::Numerics::quaternion> orientation, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryCreateRelativeTo(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&orientation)));
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
    HRESULT __stdcall GetAllSavedAnchors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAllSavedAnchors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySave(HSTRING id, ::IUnknown* anchor, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TrySave(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Perception::Spatial::SpatialAnchor const*>(&anchor)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Remove(HSTRING id) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<hstring const*>(&id));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall TryImportAnchorsAsync(::IUnknown* stream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryImportAnchorsAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryExportAnchorsAsync(::IUnknown* anchors, ::IUnknown* stream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryExportAnchorsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> const*>(&anchors), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync());
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
    HRESULT __stdcall FromBox(::IUnknown* coordinateSystem, abi_t<Windows::Perception::Spatial::SpatialBoundingBox> box, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromBox(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Perception::Spatial::SpatialBoundingBox const*>(&box)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromOrientedBox(::IUnknown* coordinateSystem, abi_t<Windows::Perception::Spatial::SpatialBoundingOrientedBox> box, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromOrientedBox(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Perception::Spatial::SpatialBoundingOrientedBox const*>(&box)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromSphere(::IUnknown* coordinateSystem, abi_t<Windows::Perception::Spatial::SpatialBoundingSphere> sphere, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromSphere(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Perception::Spatial::SpatialBoundingSphere const*>(&sphere)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromFrustum(::IUnknown* coordinateSystem, abi_t<Windows::Perception::Spatial::SpatialBoundingFrustum> frustum, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromFrustum(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Perception::Spatial::SpatialBoundingFrustum const*>(&frustum)));
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
    HRESULT __stdcall TryGetTransformTo(::IUnknown* target, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetTransformTo(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&target)));
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
struct produce<D, Windows::Perception::Spatial::ISpatialEntity> : produce_base<D, Windows::Perception::Spatial::ISpatialEntity>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Anchor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Anchor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
struct produce<D, Windows::Perception::Spatial::ISpatialEntityAddedEventArgs> : produce_base<D, Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>
{
    HRESULT __stdcall get_Entity(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Entity());
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
struct produce<D, Windows::Perception::Spatial::ISpatialEntityFactory> : produce_base<D, Windows::Perception::Spatial::ISpatialEntityFactory>
{
    HRESULT __stdcall CreateWithSpatialAnchor(::IUnknown* spatialAnchor, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithSpatialAnchor(*reinterpret_cast<Windows::Perception::Spatial::SpatialAnchor const*>(&spatialAnchor)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithSpatialAnchorAndProperties(::IUnknown* spatialAnchor, ::IUnknown* propertySet, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithSpatialAnchorAndProperties(*reinterpret_cast<Windows::Perception::Spatial::SpatialAnchor const*>(&spatialAnchor), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&propertySet)));
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
struct produce<D, Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs> : produce_base<D, Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>
{
    HRESULT __stdcall get_Entity(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Entity());
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
struct produce<D, Windows::Perception::Spatial::ISpatialEntityStore> : produce_base<D, Windows::Perception::Spatial::ISpatialEntityStore>
{
    HRESULT __stdcall SaveAsync(::IUnknown* entity, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SaveAsync(*reinterpret_cast<Windows::Perception::Spatial::SpatialEntity const*>(&entity)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveAsync(::IUnknown* entity, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().RemoveAsync(*reinterpret_cast<Windows::Perception::Spatial::SpatialEntity const*>(&entity)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateEntityWatcher(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateEntityWatcher());
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
struct produce<D, Windows::Perception::Spatial::ISpatialEntityStoreStatics> : produce_base<D, Windows::Perception::Spatial::ISpatialEntityStoreStatics>
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

    HRESULT __stdcall TryGetForRemoteSystemSession(::IUnknown* session, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGet(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemSession const*>(&session)));
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
struct produce<D, Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs> : produce_base<D, Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>
{
    HRESULT __stdcall get_Entity(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Entity());
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
struct produce<D, Windows::Perception::Spatial::ISpatialEntityWatcher> : produce_base<D, Windows::Perception::Spatial::ISpatialEntityWatcher>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Perception::Spatial::SpatialEntityWatcherStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::Spatial::ISpatialLocation> : produce_base<D, Windows::Perception::Spatial::ISpatialLocation>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AbsoluteLinearVelocity(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteLinearVelocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AbsoluteLinearAcceleration(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteLinearAcceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AbsoluteAngularVelocity(abi_t<Windows::Foundation::Numerics::quaternion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteAngularVelocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AbsoluteAngularAcceleration(abi_t<Windows::Foundation::Numerics::quaternion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteAngularAcceleration());
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
    HRESULT __stdcall get_Locatability(abi_t<Windows::Perception::Spatial::SpatialLocatability>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Locatability());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LocatabilityChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().LocatabilityChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LocatabilityChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocatabilityChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PositionalTrackingDeactivating(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PositionalTrackingDeactivating(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionalTrackingDeactivating(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionalTrackingDeactivating(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryLocateAtTimestamp(::IUnknown* timestamp, ::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryLocateAtTimestamp(*reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timestamp), *reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAttachedFrameOfReferenceAtCurrentHeading(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAttachedFrameOfReferenceAtCurrentHeading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(abi_t<Windows::Foundation::Numerics::float3> relativePosition, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAttachedFrameOfReferenceAtCurrentHeading(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&relativePosition)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(abi_t<Windows::Foundation::Numerics::float3> relativePosition, abi_t<Windows::Foundation::Numerics::quaternion> relativeOrientation, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAttachedFrameOfReferenceAtCurrentHeading(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&relativePosition), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&relativeOrientation)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(abi_t<Windows::Foundation::Numerics::float3> relativePosition, abi_t<Windows::Foundation::Numerics::quaternion> relativeOrientation, double relativeHeadingInRadians, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAttachedFrameOfReferenceAtCurrentHeading(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&relativePosition), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&relativeOrientation), relativeHeadingInRadians));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStationaryFrameOfReferenceAtCurrentLocation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateStationaryFrameOfReferenceAtCurrentLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(abi_t<Windows::Foundation::Numerics::float3> relativePosition, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateStationaryFrameOfReferenceAtCurrentLocation(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&relativePosition)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(abi_t<Windows::Foundation::Numerics::float3> relativePosition, abi_t<Windows::Foundation::Numerics::quaternion> relativeOrientation, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateStationaryFrameOfReferenceAtCurrentLocation(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&relativePosition), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&relativeOrientation)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(abi_t<Windows::Foundation::Numerics::float3> relativePosition, abi_t<Windows::Foundation::Numerics::quaternion> relativeOrientation, double relativeHeadingInRadians, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateStationaryFrameOfReferenceAtCurrentLocation(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&relativePosition), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&relativeOrientation), relativeHeadingInRadians));
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
    HRESULT __stdcall get_RelativePosition(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativePosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativePosition(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativePosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeOrientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeOrientation(abi_t<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeOrientation(*reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AdjustHeading(double headingOffsetInRadians) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdjustHeading(headingOffsetInRadians);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStationaryCoordinateSystemAtTimestamp(::IUnknown* timestamp, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStationaryCoordinateSystemAtTimestamp(*reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timestamp)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetRelativeHeadingAtTimestamp(::IUnknown* timestamp, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetRelativeHeadingAtTimestamp(*reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timestamp)));
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
    HRESULT __stdcall get_Canceled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Canceled());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Perception::Spatial::ISpatialStageFrameOfReference> : produce_base<D, Windows::Perception::Spatial::ISpatialStageFrameOfReference>
{
    HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CoordinateSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MovementRange(abi_t<Windows::Perception::Spatial::SpatialMovementRange>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MovementRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LookDirectionRange(abi_t<Windows::Perception::Spatial::SpatialLookDirectionRange>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LookDirectionRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCoordinateSystemAtCurrentLocation(::IUnknown* locator, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCoordinateSystemAtCurrentLocation(*reinterpret_cast<Windows::Perception::Spatial::SpatialLocator const*>(&locator)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetMovementBounds(::IUnknown* coordinateSystem, uint32_t* __valueSize, abi_t<Windows::Foundation::Numerics::float3>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().TryGetMovementBounds(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
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
struct produce<D, Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics> : produce_base<D, Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().CurrentChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestNewStageAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestNewStageAsync());
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
struct produce<D, Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> : produce_base<D, Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
{
    HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CoordinateSystem());
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

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial {

inline Windows::Perception::Spatial::SpatialAnchor SpatialAnchor::TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem)
{
    return get_activation_factory<SpatialAnchor, Windows::Perception::Spatial::ISpatialAnchorStatics>().TryCreateRelativeTo(coordinateSystem);
}

inline Windows::Perception::Spatial::SpatialAnchor SpatialAnchor::TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position)
{
    return get_activation_factory<SpatialAnchor, Windows::Perception::Spatial::ISpatialAnchorStatics>().TryCreateRelativeTo(coordinateSystem, position);
}

inline Windows::Perception::Spatial::SpatialAnchor SpatialAnchor::TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation)
{
    return get_activation_factory<SpatialAnchor, Windows::Perception::Spatial::ISpatialAnchorStatics>().TryCreateRelativeTo(coordinateSystem, position, orientation);
}

inline Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> SpatialAnchorManager::RequestStoreAsync()
{
    return get_activation_factory<SpatialAnchorManager, Windows::Perception::Spatial::ISpatialAnchorManagerStatics>().RequestStoreAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> SpatialAnchorTransferManager::TryImportAnchorsAsync(Windows::Storage::Streams::IInputStream const& stream)
{
    return get_activation_factory<SpatialAnchorTransferManager, Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>().TryImportAnchorsAsync(stream);
}

inline Windows::Foundation::IAsyncOperation<bool> SpatialAnchorTransferManager::TryExportAnchorsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> const& anchors, Windows::Storage::Streams::IOutputStream const& stream)
{
    return get_activation_factory<SpatialAnchorTransferManager, Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>().TryExportAnchorsAsync(anchors, stream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> SpatialAnchorTransferManager::RequestAccessAsync()
{
    return get_activation_factory<SpatialAnchorTransferManager, Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>().RequestAccessAsync();
}

inline Windows::Perception::Spatial::SpatialBoundingVolume SpatialBoundingVolume::FromBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingBox const& box)
{
    return get_activation_factory<SpatialBoundingVolume, Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>().FromBox(coordinateSystem, box);
}

inline Windows::Perception::Spatial::SpatialBoundingVolume SpatialBoundingVolume::FromOrientedBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingOrientedBox const& box)
{
    return get_activation_factory<SpatialBoundingVolume, Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>().FromOrientedBox(coordinateSystem, box);
}

inline Windows::Perception::Spatial::SpatialBoundingVolume SpatialBoundingVolume::FromSphere(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingSphere const& sphere)
{
    return get_activation_factory<SpatialBoundingVolume, Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>().FromSphere(coordinateSystem, sphere);
}

inline Windows::Perception::Spatial::SpatialBoundingVolume SpatialBoundingVolume::FromFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingFrustum const& frustum)
{
    return get_activation_factory<SpatialBoundingVolume, Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>().FromFrustum(coordinateSystem, frustum);
}

inline SpatialEntity::SpatialEntity(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor) :
    SpatialEntity(get_activation_factory<SpatialEntity, Windows::Perception::Spatial::ISpatialEntityFactory>().CreateWithSpatialAnchor(spatialAnchor))
{}

inline SpatialEntity::SpatialEntity(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor, Windows::Foundation::Collections::ValueSet const& propertySet) :
    SpatialEntity(get_activation_factory<SpatialEntity, Windows::Perception::Spatial::ISpatialEntityFactory>().CreateWithSpatialAnchorAndProperties(spatialAnchor, propertySet))
{}

inline bool SpatialEntityStore::IsSupported()
{
    return get_activation_factory<SpatialEntityStore, Windows::Perception::Spatial::ISpatialEntityStoreStatics>().IsSupported();
}

inline Windows::Perception::Spatial::SpatialEntityStore SpatialEntityStore::TryGet(Windows::System::RemoteSystems::RemoteSystemSession const& session)
{
    return get_activation_factory<SpatialEntityStore, Windows::Perception::Spatial::ISpatialEntityStoreStatics>().TryGet(session);
}

inline Windows::Perception::Spatial::SpatialLocator SpatialLocator::GetDefault()
{
    return get_activation_factory<SpatialLocator, Windows::Perception::Spatial::ISpatialLocatorStatics>().GetDefault();
}

inline Windows::Perception::Spatial::SpatialStageFrameOfReference SpatialStageFrameOfReference::Current()
{
    return get_activation_factory<SpatialStageFrameOfReference, Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>().Current();
}

inline event_token SpatialStageFrameOfReference::CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<SpatialStageFrameOfReference, Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>().CurrentChanged(handler);
}

inline factory_event_revoker<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics> SpatialStageFrameOfReference::CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<SpatialStageFrameOfReference, Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>();
    return { factory, &abi_t<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>::remove_CurrentChanged, factory.CurrentChanged(handler) };
}

inline void SpatialStageFrameOfReference::CurrentChanged(event_token const& cookie)
{
    get_activation_factory<SpatialStageFrameOfReference, Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>().CurrentChanged(cookie);
}

inline Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialStageFrameOfReference> SpatialStageFrameOfReference::RequestNewStageAsync()
{
    return get_activation_factory<SpatialStageFrameOfReference, Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>().RequestNewStageAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialAnchor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialAnchor> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialAnchor2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialAnchor2> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialAnchorManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialAnchorManagerStatics> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialAnchorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialAnchorStatics> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialAnchorStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialAnchorStore> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialBoundingVolume> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialBoundingVolume> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialCoordinateSystem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialCoordinateSystem> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialEntity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialEntity> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialEntityFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialEntityFactory> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialEntityStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialEntityStore> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialEntityStoreStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialEntityStoreStatics> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialLocation> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialLocator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialLocator> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialLocatorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialLocatorStatics> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReference> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics> {};

template<> struct hash<winrt::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialAnchor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialAnchor> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialAnchorManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialAnchorManager> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialAnchorStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialAnchorStore> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialAnchorTransferManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialAnchorTransferManager> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialBoundingVolume> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialBoundingVolume> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialEntity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialEntity> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialEntityStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialEntityStore> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialEntityWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialEntityWatcher> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialLocation> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialLocator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialLocator> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference> {};

template<> struct hash<winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference> {};

}

WINRT_WARNING_POP
