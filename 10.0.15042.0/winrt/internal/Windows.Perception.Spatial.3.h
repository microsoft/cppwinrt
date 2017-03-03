// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Perception.Spatial.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception::Spatial {

struct WINRT_EBO SpatialAnchor :
    Windows::Perception::Spatial::ISpatialAnchor,
    impl::require<SpatialAnchor, Windows::Perception::Spatial::ISpatialAnchor2>
{
    SpatialAnchor(std::nullptr_t) noexcept {}
    static Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem);
    static Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position);
    static Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::quaternion & orientation);
};

struct SpatialAnchorManager
{
    SpatialAnchorManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> RequestStoreAsync();
};

struct WINRT_EBO SpatialAnchorRawCoordinateSystemAdjustedEventArgs :
    Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs
{
    SpatialAnchorRawCoordinateSystemAdjustedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialAnchorStore :
    Windows::Perception::Spatial::ISpatialAnchorStore
{
    SpatialAnchorStore(std::nullptr_t) noexcept {}
};

struct [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] SpatialAnchorTransferManager
{
    SpatialAnchorTransferManager() = delete;
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> TryImportAnchorsAsync(const Windows::Storage::Streams::IInputStream & stream);
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<bool> TryExportAnchorsAsync(iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> anchors, const Windows::Storage::Streams::IOutputStream & stream);
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> RequestAccessAsync();
};

struct WINRT_EBO SpatialBoundingVolume :
    Windows::Perception::Spatial::ISpatialBoundingVolume
{
    SpatialBoundingVolume(std::nullptr_t) noexcept {}
    static Windows::Perception::Spatial::SpatialBoundingVolume FromBox(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingBox & box);
    static Windows::Perception::Spatial::SpatialBoundingVolume FromOrientedBox(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingOrientedBox & box);
    static Windows::Perception::Spatial::SpatialBoundingVolume FromSphere(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingSphere & sphere);
    static Windows::Perception::Spatial::SpatialBoundingVolume FromFrustum(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::Spatial::SpatialBoundingFrustum & frustum);
};

struct WINRT_EBO SpatialCoordinateSystem :
    Windows::Perception::Spatial::ISpatialCoordinateSystem
{
    SpatialCoordinateSystem(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialEntity :
    Windows::Perception::Spatial::ISpatialEntity
{
    SpatialEntity(std::nullptr_t) noexcept {}
    SpatialEntity(const Windows::Perception::Spatial::SpatialAnchor & spatialAnchor);
    SpatialEntity(const Windows::Perception::Spatial::SpatialAnchor & spatialAnchor, const Windows::Foundation::Collections::ValueSet & propertySet);
};

struct WINRT_EBO SpatialEntityAddedEventArgs :
    Windows::Perception::Spatial::ISpatialEntityAddedEventArgs
{
    SpatialEntityAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialEntityRemovedEventArgs :
    Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs
{
    SpatialEntityRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialEntityStore :
    Windows::Perception::Spatial::ISpatialEntityStore
{
    SpatialEntityStore(std::nullptr_t) noexcept {}
    static bool IsSupported();
    static Windows::Perception::Spatial::SpatialEntityStore TryGet(const Windows::System::RemoteSystems::RemoteSystemSession & session);
};

struct WINRT_EBO SpatialEntityUpdatedEventArgs :
    Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs
{
    SpatialEntityUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialEntityWatcher :
    Windows::Perception::Spatial::ISpatialEntityWatcher
{
    SpatialEntityWatcher(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialLocation :
    Windows::Perception::Spatial::ISpatialLocation
{
    SpatialLocation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialLocator :
    Windows::Perception::Spatial::ISpatialLocator
{
    SpatialLocator(std::nullptr_t) noexcept {}
    static Windows::Perception::Spatial::SpatialLocator GetDefault();
};

struct WINRT_EBO SpatialLocatorAttachedFrameOfReference :
    Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference
{
    SpatialLocatorAttachedFrameOfReference(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialLocatorPositionalTrackingDeactivatingEventArgs :
    Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs
{
    SpatialLocatorPositionalTrackingDeactivatingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialStageFrameOfReference :
    Windows::Perception::Spatial::ISpatialStageFrameOfReference
{
    SpatialStageFrameOfReference(std::nullptr_t) noexcept {}
    static Windows::Perception::Spatial::SpatialStageFrameOfReference Current();
    static event_token CurrentChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler);
    using CurrentChanged_revoker = factory_event_revoker<ISpatialStageFrameOfReferenceStatics>;
    static CurrentChanged_revoker CurrentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler);
    static void CurrentChanged(event_token cookie);
    static Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialStageFrameOfReference> RequestNewStageAsync();
};

struct WINRT_EBO SpatialStationaryFrameOfReference :
    Windows::Perception::Spatial::ISpatialStationaryFrameOfReference
{
    SpatialStationaryFrameOfReference(std::nullptr_t) noexcept {}
};

}

}
