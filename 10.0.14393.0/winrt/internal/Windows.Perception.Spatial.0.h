// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Perception::Spatial {

struct SpatialBoundingFrustum;
struct SpatialBoundingBox;
struct SpatialBoundingOrientedBox;
struct SpatialBoundingSphere;

}

namespace Windows::Perception::Spatial {

using SpatialBoundingFrustum = ABI::Windows::Perception::Spatial::SpatialBoundingFrustum;
using SpatialBoundingBox = ABI::Windows::Perception::Spatial::SpatialBoundingBox;
using SpatialBoundingOrientedBox = ABI::Windows::Perception::Spatial::SpatialBoundingOrientedBox;
using SpatialBoundingSphere = ABI::Windows::Perception::Spatial::SpatialBoundingSphere;

}

namespace ABI::Windows::Perception::Spatial {

struct ISpatialAnchor;
struct ISpatialAnchor2;
struct ISpatialAnchorManagerStatics;
struct ISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
struct ISpatialAnchorStatics;
struct ISpatialAnchorStore;
struct ISpatialAnchorTransferManagerStatics;
struct ISpatialBoundingVolume;
struct ISpatialBoundingVolumeStatics;
struct ISpatialCoordinateSystem;
struct ISpatialLocation;
struct ISpatialLocator;
struct ISpatialLocatorAttachedFrameOfReference;
struct ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
struct ISpatialLocatorStatics;
struct ISpatialStationaryFrameOfReference;
struct SpatialAnchor;
struct SpatialAnchorRawCoordinateSystemAdjustedEventArgs;
struct SpatialAnchorStore;
struct SpatialBoundingVolume;
struct SpatialCoordinateSystem;
struct SpatialLocation;
struct SpatialLocator;
struct SpatialLocatorAttachedFrameOfReference;
struct SpatialLocatorPositionalTrackingDeactivatingEventArgs;
struct SpatialStationaryFrameOfReference;

}

namespace Windows::Perception::Spatial {

struct ISpatialAnchor;
struct ISpatialAnchor2;
struct ISpatialAnchorManagerStatics;
struct ISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
struct ISpatialAnchorStatics;
struct ISpatialAnchorStore;
struct ISpatialAnchorTransferManagerStatics;
struct ISpatialBoundingVolume;
struct ISpatialBoundingVolumeStatics;
struct ISpatialCoordinateSystem;
struct ISpatialLocation;
struct ISpatialLocator;
struct ISpatialLocatorAttachedFrameOfReference;
struct ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
struct ISpatialLocatorStatics;
struct ISpatialStationaryFrameOfReference;
struct SpatialAnchor;
struct SpatialAnchorManager;
struct SpatialAnchorRawCoordinateSystemAdjustedEventArgs;
struct SpatialAnchorStore;
struct SpatialAnchorTransferManager;
struct SpatialBoundingVolume;
struct SpatialCoordinateSystem;
struct SpatialLocation;
struct SpatialLocator;
struct SpatialLocatorAttachedFrameOfReference;
struct SpatialLocatorPositionalTrackingDeactivatingEventArgs;
struct SpatialStationaryFrameOfReference;

}

namespace Windows::Perception::Spatial {

enum class SpatialLocatability
{
    Unavailable = 0,
    OrientationOnly = 1,
    PositionalTrackingActivating = 2,
    PositionalTrackingActive = 3,
    PositionalTrackingInhibited = 4,
};

enum class SpatialPerceptionAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    DeniedByUser = 2,
    DeniedBySystem = 3,
};

}

}
