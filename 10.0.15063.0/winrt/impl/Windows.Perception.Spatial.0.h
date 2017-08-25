// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Perception {

struct PerceptionTimestamp;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;
struct IOutputStream;

}

WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems {

struct RemoteSystemSession;

}

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial {

enum class SpatialEntityWatcherStatus
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopping = 3,
    Stopped = 4,
    Aborted = 5,
};

enum class SpatialLocatability
{
    Unavailable = 0,
    OrientationOnly = 1,
    PositionalTrackingActivating = 2,
    PositionalTrackingActive = 3,
    PositionalTrackingInhibited = 4,
};

enum class SpatialLookDirectionRange
{
    ForwardOnly = 0,
    Omnidirectional = 1,
};

enum class SpatialMovementRange
{
    NoMovement = 0,
    Bounded = 1,
};

enum class SpatialPerceptionAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    DeniedByUser = 2,
    DeniedBySystem = 3,
};

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
struct ISpatialEntity;
struct ISpatialEntityAddedEventArgs;
struct ISpatialEntityFactory;
struct ISpatialEntityRemovedEventArgs;
struct ISpatialEntityStore;
struct ISpatialEntityStoreStatics;
struct ISpatialEntityUpdatedEventArgs;
struct ISpatialEntityWatcher;
struct ISpatialLocation;
struct ISpatialLocator;
struct ISpatialLocatorAttachedFrameOfReference;
struct ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
struct ISpatialLocatorStatics;
struct ISpatialStageFrameOfReference;
struct ISpatialStageFrameOfReferenceStatics;
struct ISpatialStationaryFrameOfReference;
struct SpatialAnchor;
struct SpatialAnchorManager;
struct SpatialAnchorRawCoordinateSystemAdjustedEventArgs;
struct SpatialAnchorStore;
struct SpatialAnchorTransferManager;
struct SpatialBoundingVolume;
struct SpatialCoordinateSystem;
struct SpatialEntity;
struct SpatialEntityAddedEventArgs;
struct SpatialEntityRemovedEventArgs;
struct SpatialEntityStore;
struct SpatialEntityUpdatedEventArgs;
struct SpatialEntityWatcher;
struct SpatialLocation;
struct SpatialLocator;
struct SpatialLocatorAttachedFrameOfReference;
struct SpatialLocatorPositionalTrackingDeactivatingEventArgs;
struct SpatialStageFrameOfReference;
struct SpatialStationaryFrameOfReference;
struct SpatialBoundingBox;
struct SpatialBoundingFrustum;
struct SpatialBoundingOrientedBox;
struct SpatialBoundingSphere;

}

namespace winrt::impl {

template <> struct category<Windows::Perception::Spatial::ISpatialAnchor>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialAnchor2>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialAnchorStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialAnchorStore>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialBoundingVolume>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialCoordinateSystem>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialEntity>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialEntityFactory>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialEntityStore>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialEntityStoreStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialEntityWatcher>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialLocation>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialLocator>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialLocatorStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialStageFrameOfReference>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::SpatialAnchor>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialAnchorManager>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialAnchorStore>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialAnchorTransferManager>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialBoundingVolume>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialCoordinateSystem>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialEntity>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialEntityAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialEntityStore>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialEntityWatcher>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialLocation>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialLocator>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialStageFrameOfReference>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialStationaryFrameOfReference>{ using type = class_category; };
template <> struct category<Windows::Perception::Spatial::SpatialEntityWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::Perception::Spatial::SpatialLocatability>{ using type = enum_category; };
template <> struct category<Windows::Perception::Spatial::SpatialLookDirectionRange>{ using type = enum_category; };
template <> struct category<Windows::Perception::Spatial::SpatialMovementRange>{ using type = enum_category; };
template <> struct category<Windows::Perception::Spatial::SpatialPerceptionAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::Perception::Spatial::SpatialBoundingBox>{ using type = struct_category<Windows::Foundation::Numerics::float3,Windows::Foundation::Numerics::float3>; };
template <> struct category<Windows::Perception::Spatial::SpatialBoundingFrustum>{ using type = struct_category<Windows::Foundation::Numerics::plane,Windows::Foundation::Numerics::plane,Windows::Foundation::Numerics::plane,Windows::Foundation::Numerics::plane,Windows::Foundation::Numerics::plane,Windows::Foundation::Numerics::plane>; };
template <> struct category<Windows::Perception::Spatial::SpatialBoundingOrientedBox>{ using type = struct_category<Windows::Foundation::Numerics::float3,Windows::Foundation::Numerics::float3,Windows::Foundation::Numerics::quaternion>; };
template <> struct category<Windows::Perception::Spatial::SpatialBoundingSphere>{ using type = struct_category<Windows::Foundation::Numerics::float3,float>; };
template <> struct name<Windows::Perception::Spatial::ISpatialAnchor>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchor" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialAnchor2>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchor2" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorManagerStatics" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialAnchorStatics>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorStatics" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialAnchorStore>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorStore" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialBoundingVolume>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialBoundingVolume" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialBoundingVolumeStatics" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialCoordinateSystem>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialCoordinateSystem" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialEntity>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntity" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityAddedEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialEntityFactory>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityFactory" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialEntityStore>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityStore" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialEntityStoreStatics>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityStoreStatics" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialEntityWatcher>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityWatcher" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialLocation>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocation" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialLocator>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocator" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialLocatorStatics>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocatorStatics" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialStageFrameOfReference>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialStageFrameOfReference" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics" }; };
template <> struct name<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>{ static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialStationaryFrameOfReference" }; };
template <> struct name<Windows::Perception::Spatial::SpatialAnchor>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchor" }; };
template <> struct name<Windows::Perception::Spatial::SpatialAnchorManager>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorManager" }; };
template <> struct name<Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::SpatialAnchorStore>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorStore" }; };
template <> struct name<Windows::Perception::Spatial::SpatialAnchorTransferManager>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorTransferManager" }; };
template <> struct name<Windows::Perception::Spatial::SpatialBoundingVolume>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingVolume" }; };
template <> struct name<Windows::Perception::Spatial::SpatialCoordinateSystem>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialCoordinateSystem" }; };
template <> struct name<Windows::Perception::Spatial::SpatialEntity>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntity" }; };
template <> struct name<Windows::Perception::Spatial::SpatialEntityAddedEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityAddedEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityRemovedEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::SpatialEntityStore>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityStore" }; };
template <> struct name<Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::SpatialEntityWatcher>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityWatcher" }; };
template <> struct name<Windows::Perception::Spatial::SpatialLocation>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocation" }; };
template <> struct name<Windows::Perception::Spatial::SpatialLocator>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocator" }; };
template <> struct name<Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference" }; };
template <> struct name<Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs" }; };
template <> struct name<Windows::Perception::Spatial::SpatialStageFrameOfReference>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialStageFrameOfReference" }; };
template <> struct name<Windows::Perception::Spatial::SpatialStationaryFrameOfReference>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialStationaryFrameOfReference" }; };
template <> struct name<Windows::Perception::Spatial::SpatialEntityWatcherStatus>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityWatcherStatus" }; };
template <> struct name<Windows::Perception::Spatial::SpatialLocatability>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocatability" }; };
template <> struct name<Windows::Perception::Spatial::SpatialLookDirectionRange>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLookDirectionRange" }; };
template <> struct name<Windows::Perception::Spatial::SpatialMovementRange>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialMovementRange" }; };
template <> struct name<Windows::Perception::Spatial::SpatialPerceptionAccessStatus>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialPerceptionAccessStatus" }; };
template <> struct name<Windows::Perception::Spatial::SpatialBoundingBox>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingBox" }; };
template <> struct name<Windows::Perception::Spatial::SpatialBoundingFrustum>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingFrustum" }; };
template <> struct name<Windows::Perception::Spatial::SpatialBoundingOrientedBox>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingOrientedBox" }; };
template <> struct name<Windows::Perception::Spatial::SpatialBoundingSphere>{ static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingSphere" }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialAnchor>{ static constexpr GUID value{ 0x0529E5CE,0x1D34,0x3702,{ 0xBC,0xEC,0xEA,0xBF,0xF5,0x78,0xA8,0x69 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialAnchor2>{ static constexpr GUID value{ 0xED17C908,0xA695,0x4CF6,{ 0x92,0xFD,0x97,0x26,0x3B,0xA7,0x10,0x47 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>{ static constexpr GUID value{ 0x88E30EAB,0xF3B7,0x420B,{ 0xB0,0x86,0x8A,0x80,0xC0,0x7D,0x91,0x0D } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ static constexpr GUID value{ 0xA1E81EB8,0x56C7,0x3117,{ 0xA2,0xE4,0x81,0xE0,0xFC,0xF2,0x8E,0x00 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialAnchorStatics>{ static constexpr GUID value{ 0xA9928642,0x0174,0x311C,{ 0xAE,0x79,0x0E,0x51,0x07,0x66,0x9F,0x16 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialAnchorStore>{ static constexpr GUID value{ 0xB0BC3636,0x486A,0x3CB0,{ 0x9E,0x6F,0x12,0x45,0x16,0x5C,0x4D,0xB6 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>{ static constexpr GUID value{ 0x03BBF9B9,0x12D8,0x4BCE,{ 0x88,0x35,0xC5,0xDF,0x3A,0xC0,0xAD,0xAB } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialBoundingVolume>{ static constexpr GUID value{ 0xFB2065DA,0x68C3,0x33DF,{ 0xB7,0xAF,0x4C,0x78,0x72,0x07,0x99,0x9C } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>{ static constexpr GUID value{ 0x05889117,0xB3E1,0x36D8,{ 0xB0,0x17,0x56,0x61,0x81,0xA5,0xB1,0x96 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialCoordinateSystem>{ static constexpr GUID value{ 0x69EBCA4B,0x60A3,0x3586,{ 0xA6,0x53,0x59,0xA7,0xBD,0x67,0x6D,0x07 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialEntity>{ static constexpr GUID value{ 0x166DE955,0xE1EB,0x454C,{ 0xBA,0x08,0xE6,0xC0,0x66,0x8D,0xDC,0x65 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>{ static constexpr GUID value{ 0xA397F49B,0x156A,0x4707,{ 0xAC,0x2C,0xD3,0x1D,0x57,0x0E,0xD3,0x99 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialEntityFactory>{ static constexpr GUID value{ 0xE1F1E325,0x349F,0x4225,{ 0xA2,0xF3,0x4B,0x01,0xC1,0x5F,0xE0,0x56 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>{ static constexpr GUID value{ 0x91741800,0x536D,0x4E9F,{ 0xAB,0xF6,0x41,0x5B,0x54,0x44,0xD6,0x51 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialEntityStore>{ static constexpr GUID value{ 0x329788BA,0xE513,0x4F06,{ 0x88,0x9D,0x1B,0xE3,0x0E,0xCF,0x43,0xE6 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialEntityStoreStatics>{ static constexpr GUID value{ 0x6B4B389E,0x7C50,0x4E92,{ 0x8A,0x62,0x4D,0x1D,0x4B,0x7C,0xCD,0x3E } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>{ static constexpr GUID value{ 0xE5671766,0x627B,0x43CB,{ 0xA4,0x9F,0xB3,0xBE,0x6D,0x47,0xDE,0xED } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialEntityWatcher>{ static constexpr GUID value{ 0xB3B85FA0,0x6D5E,0x4BBC,{ 0x80,0x5D,0x5F,0xE5,0xB9,0xBA,0x19,0x59 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialLocation>{ static constexpr GUID value{ 0x1D81D29D,0x24A1,0x37D5,{ 0x8F,0xA1,0x39,0xB4,0xF9,0xAD,0x67,0xE2 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialLocator>{ static constexpr GUID value{ 0xF6478925,0x9E0C,0x3BB6,{ 0x99,0x7E,0xB6,0x4E,0xCC,0xA2,0x4C,0xF4 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>{ static constexpr GUID value{ 0xE1774EF6,0x1F4F,0x499C,{ 0x96,0x25,0xEF,0x5E,0x6E,0xD7,0xA0,0x48 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>{ static constexpr GUID value{ 0xB8A84063,0xE3F4,0x368B,{ 0x90,0x61,0x9E,0xA9,0xD1,0xD6,0xCC,0x16 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialLocatorStatics>{ static constexpr GUID value{ 0xB76E3340,0xA7C2,0x361B,{ 0xBB,0x82,0x56,0xE9,0x3B,0x89,0xB1,0xBB } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialStageFrameOfReference>{ static constexpr GUID value{ 0x7A8A3464,0xAD0D,0x4590,{ 0xAB,0x86,0x33,0x06,0x2B,0x67,0x49,0x26 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>{ static constexpr GUID value{ 0xF78D5C4D,0xA0A4,0x499C,{ 0x8D,0x91,0xA8,0xC9,0x65,0xD4,0x06,0x54 } }; };
template <> struct guid<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>{ static constexpr GUID value{ 0x09DBCCB9,0xBCF8,0x3E7F,{ 0xBE,0x7E,0x7E,0xDC,0xCB,0xB1,0x78,0xA8 } }; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialAnchor>{ using type = Windows::Perception::Spatial::ISpatialAnchor; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ using type = Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialAnchorStore>{ using type = Windows::Perception::Spatial::ISpatialAnchorStore; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialBoundingVolume>{ using type = Windows::Perception::Spatial::ISpatialBoundingVolume; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialCoordinateSystem>{ using type = Windows::Perception::Spatial::ISpatialCoordinateSystem; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialEntity>{ using type = Windows::Perception::Spatial::ISpatialEntity; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityAddedEventArgs>{ using type = Windows::Perception::Spatial::ISpatialEntityAddedEventArgs; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>{ using type = Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityStore>{ using type = Windows::Perception::Spatial::ISpatialEntityStore; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>{ using type = Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityWatcher>{ using type = Windows::Perception::Spatial::ISpatialEntityWatcher; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialLocation>{ using type = Windows::Perception::Spatial::ISpatialLocation; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialLocator>{ using type = Windows::Perception::Spatial::ISpatialLocator; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>{ using type = Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>{ using type = Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialStageFrameOfReference>{ using type = Windows::Perception::Spatial::ISpatialStageFrameOfReference; };
template <> struct default_interface<Windows::Perception::Spatial::SpatialStationaryFrameOfReference>{ using type = Windows::Perception::Spatial::ISpatialStationaryFrameOfReference; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialAnchor
{
    Windows::Perception::Spatial::SpatialCoordinateSystem CoordinateSystem() const;
    Windows::Perception::Spatial::SpatialCoordinateSystem RawCoordinateSystem() const;
    event_token RawCoordinateSystemAdjusted(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const& handler) const;
    using RawCoordinateSystemAdjusted_revoker = event_revoker<Windows::Perception::Spatial::ISpatialAnchor>;
    RawCoordinateSystemAdjusted_revoker RawCoordinateSystemAdjusted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const& handler) const;
    void RawCoordinateSystemAdjusted(event_token const& cookie) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialAnchor> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchor<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialAnchor2
{
    bool RemovedByUser() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialAnchor2> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchor2<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialAnchorManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialAnchorStore> RequestStoreAsync() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorManagerStatics> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorManagerStatics<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs
{
    Windows::Foundation::Numerics::float4x4 OldRawCoordinateSystemToNewRawCoordinateSystemTransform() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialAnchorStatics
{
    Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position) const;
    Windows::Perception::Spatial::SpatialAnchor TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorStatics> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorStatics<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialAnchorStore
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor> GetAllSavedAnchors() const;
    bool TrySave(param::hstring const& id, Windows::Perception::Spatial::SpatialAnchor const& anchor) const;
    void Remove(param::hstring const& id) const;
    void Clear() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorStore> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorStore<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics
{
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Perception::Spatial::SpatialAnchor>> TryImportAnchorsAsync(Windows::Storage::Streams::IInputStream const& stream) const;
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<bool> TryExportAnchorsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> const& anchors, Windows::Storage::Streams::IOutputStream const& stream) const;
    [[deprecated("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> RequestAccessAsync() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialBoundingVolume
{
};
template <> struct consume<Windows::Perception::Spatial::ISpatialBoundingVolume> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialBoundingVolume<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics
{
    Windows::Perception::Spatial::SpatialBoundingVolume FromBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingBox const& box) const;
    Windows::Perception::Spatial::SpatialBoundingVolume FromOrientedBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingOrientedBox const& box) const;
    Windows::Perception::Spatial::SpatialBoundingVolume FromSphere(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingSphere const& sphere) const;
    Windows::Perception::Spatial::SpatialBoundingVolume FromFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingFrustum const& frustum) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialCoordinateSystem
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float4x4> TryGetTransformTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& target) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialCoordinateSystem> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialCoordinateSystem<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialEntity
{
    hstring Id() const;
    Windows::Perception::Spatial::SpatialAnchor Anchor() const;
    Windows::Foundation::Collections::ValueSet Properties() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialEntity> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntity<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs
{
    Windows::Perception::Spatial::SpatialEntity Entity() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialEntityFactory
{
    Windows::Perception::Spatial::SpatialEntity CreateWithSpatialAnchor(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor) const;
    Windows::Perception::Spatial::SpatialEntity CreateWithSpatialAnchorAndProperties(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor, Windows::Foundation::Collections::ValueSet const& propertySet) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialEntityFactory> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityFactory<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs
{
    Windows::Perception::Spatial::SpatialEntity Entity() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialEntityStore
{
    Windows::Foundation::IAsyncAction SaveAsync(Windows::Perception::Spatial::SpatialEntity const& entity) const;
    Windows::Foundation::IAsyncAction RemoveAsync(Windows::Perception::Spatial::SpatialEntity const& entity) const;
    Windows::Perception::Spatial::SpatialEntityWatcher CreateEntityWatcher() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialEntityStore> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityStore<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialEntityStoreStatics
{
    bool IsSupported() const;
    Windows::Perception::Spatial::SpatialEntityStore TryGet(Windows::System::RemoteSystems::RemoteSystemSession const& session) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialEntityStoreStatics> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityStoreStatics<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs
{
    Windows::Perception::Spatial::SpatialEntity Entity() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialEntityWatcher
{
    Windows::Perception::Spatial::SpatialEntityWatcherStatus Status() const;
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const& handler) const;
    using Added_revoker = event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const& handler) const;
    void Added(event_token const& token) const;
    event_token Updated(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const& handler) const;
    using Updated_revoker = event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher>;
    Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const& handler) const;
    void Updated(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const& handler) const;
    using Removed_revoker = event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const& handler) const;
    void Removed(event_token const& token) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& token) const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialEntityWatcher> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialLocation
{
    Windows::Foundation::Numerics::float3 Position() const;
    Windows::Foundation::Numerics::quaternion Orientation() const;
    Windows::Foundation::Numerics::float3 AbsoluteLinearVelocity() const;
    Windows::Foundation::Numerics::float3 AbsoluteLinearAcceleration() const;
    Windows::Foundation::Numerics::quaternion AbsoluteAngularVelocity() const;
    Windows::Foundation::Numerics::quaternion AbsoluteAngularAcceleration() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialLocation> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocation<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialLocator
{
    Windows::Perception::Spatial::SpatialLocatability Locatability() const;
    event_token LocatabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Foundation::IInspectable> const& handler) const;
    using LocatabilityChanged_revoker = event_revoker<Windows::Perception::Spatial::ISpatialLocator>;
    LocatabilityChanged_revoker LocatabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Foundation::IInspectable> const& handler) const;
    void LocatabilityChanged(event_token const& cookie) const;
    event_token PositionalTrackingDeactivating(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const& handler) const;
    using PositionalTrackingDeactivating_revoker = event_revoker<Windows::Perception::Spatial::ISpatialLocator>;
    PositionalTrackingDeactivating_revoker PositionalTrackingDeactivating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const& handler) const;
    void PositionalTrackingDeactivating(event_token const& cookie) const;
    Windows::Perception::Spatial::SpatialLocation TryLocateAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp, Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference CreateAttachedFrameOfReferenceAtCurrentHeading() const;
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition) const;
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation) const;
    Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation, double relativeHeadingInRadians) const;
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference CreateStationaryFrameOfReferenceAtCurrentLocation() const;
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition) const;
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation) const;
    Windows::Perception::Spatial::SpatialStationaryFrameOfReference CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation, double relativeHeadingInRadians) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialLocator> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocator<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference
{
    Windows::Foundation::Numerics::float3 RelativePosition() const;
    void RelativePosition(Windows::Foundation::Numerics::float3 const& value) const;
    Windows::Foundation::Numerics::quaternion RelativeOrientation() const;
    void RelativeOrientation(Windows::Foundation::Numerics::quaternion const& value) const;
    void AdjustHeading(double headingOffsetInRadians) const;
    Windows::Perception::Spatial::SpatialCoordinateSystem GetStationaryCoordinateSystemAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const;
    Windows::Foundation::IReference<double> TryGetRelativeHeadingAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs
{
    bool Canceled() const;
    void Canceled(bool value) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialLocatorStatics
{
    Windows::Perception::Spatial::SpatialLocator GetDefault() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialLocatorStatics> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorStatics<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference
{
    Windows::Perception::Spatial::SpatialCoordinateSystem CoordinateSystem() const;
    Windows::Perception::Spatial::SpatialMovementRange MovementRange() const;
    Windows::Perception::Spatial::SpatialLookDirectionRange LookDirectionRange() const;
    Windows::Perception::Spatial::SpatialCoordinateSystem GetCoordinateSystemAtCurrentLocation(Windows::Perception::Spatial::SpatialLocator const& locator) const;
    com_array<Windows::Foundation::Numerics::float3> TryGetMovementBounds(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialStageFrameOfReference> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics
{
    Windows::Perception::Spatial::SpatialStageFrameOfReference Current() const;
    event_token CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using CurrentChanged_revoker = event_revoker<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>;
    CurrentChanged_revoker CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void CurrentChanged(event_token const& cookie) const;
    Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialStageFrameOfReference> RequestNewStageAsync() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics<D>; };

template <typename D>
struct consume_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference
{
    Windows::Perception::Spatial::SpatialCoordinateSystem CoordinateSystem() const;
};
template <> struct consume<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> { template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference<D>; };

template <> struct abi<Windows::Perception::Spatial::ISpatialAnchor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RawCoordinateSystem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_RawCoordinateSystemAdjusted(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_RawCoordinateSystemAdjusted(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialAnchor2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemovedByUser(bool* value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestStoreAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(abi_t<Windows::Foundation::Numerics::float4x4>* value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryCreateRelativeTo(::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryCreateWithPositionRelativeTo(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryCreateWithPositionAndOrientationRelativeTo(::IUnknown* coordinateSystem, abi_t<Windows::Foundation::Numerics::float3> position, abi_t<Windows::Foundation::Numerics::quaternion> orientation, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAllSavedAnchors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TrySave(HSTRING id, ::IUnknown* anchor, bool* succeeded) = 0;
    virtual HRESULT __stdcall Remove(HSTRING id) = 0;
    virtual HRESULT __stdcall Clear() = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryImportAnchorsAsync(::IUnknown* stream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryExportAnchorsAsync(::IUnknown* anchors, ::IUnknown* stream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialBoundingVolume>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromBox(::IUnknown* coordinateSystem, abi_t<Windows::Perception::Spatial::SpatialBoundingBox> box, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FromOrientedBox(::IUnknown* coordinateSystem, abi_t<Windows::Perception::Spatial::SpatialBoundingOrientedBox> box, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FromSphere(::IUnknown* coordinateSystem, abi_t<Windows::Perception::Spatial::SpatialBoundingSphere> sphere, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FromFrustum(::IUnknown* coordinateSystem, abi_t<Windows::Perception::Spatial::SpatialBoundingFrustum> frustum, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialCoordinateSystem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryGetTransformTo(::IUnknown* target, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialEntity>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Anchor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Entity(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialEntityFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithSpatialAnchor(::IUnknown* spatialAnchor, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithSpatialAnchorAndProperties(::IUnknown* spatialAnchor, ::IUnknown* propertySet, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Entity(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialEntityStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SaveAsync(::IUnknown* entity, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall RemoveAsync(::IUnknown* entity, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall CreateEntityWatcher(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialEntityStoreStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSupported(bool* value) = 0;
    virtual HRESULT __stdcall TryGetForRemoteSystemSession(::IUnknown* session, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Entity(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialEntityWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Perception::Spatial::SpatialEntityWatcherStatus>* value) = 0;
    virtual HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Added(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Updated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Removed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialLocation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall get_Orientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) = 0;
    virtual HRESULT __stdcall get_AbsoluteLinearVelocity(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall get_AbsoluteLinearAcceleration(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall get_AbsoluteAngularVelocity(abi_t<Windows::Foundation::Numerics::quaternion>* value) = 0;
    virtual HRESULT __stdcall get_AbsoluteAngularAcceleration(abi_t<Windows::Foundation::Numerics::quaternion>* value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialLocator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Locatability(abi_t<Windows::Perception::Spatial::SpatialLocatability>* value) = 0;
    virtual HRESULT __stdcall add_LocatabilityChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_LocatabilityChanged(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PositionalTrackingDeactivating(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PositionalTrackingDeactivating(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall TryLocateAtTimestamp(::IUnknown* timestamp, ::IUnknown* coordinateSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAttachedFrameOfReferenceAtCurrentHeading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(abi_t<Windows::Foundation::Numerics::float3> relativePosition, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(abi_t<Windows::Foundation::Numerics::float3> relativePosition, abi_t<Windows::Foundation::Numerics::quaternion> relativeOrientation, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(abi_t<Windows::Foundation::Numerics::float3> relativePosition, abi_t<Windows::Foundation::Numerics::quaternion> relativeOrientation, double relativeHeadingInRadians, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateStationaryFrameOfReferenceAtCurrentLocation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(abi_t<Windows::Foundation::Numerics::float3> relativePosition, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(abi_t<Windows::Foundation::Numerics::float3> relativePosition, abi_t<Windows::Foundation::Numerics::quaternion> relativeOrientation, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(abi_t<Windows::Foundation::Numerics::float3> relativePosition, abi_t<Windows::Foundation::Numerics::quaternion> relativeOrientation, double relativeHeadingInRadians, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RelativePosition(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_RelativePosition(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_RelativeOrientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) = 0;
    virtual HRESULT __stdcall put_RelativeOrientation(abi_t<Windows::Foundation::Numerics::quaternion> value) = 0;
    virtual HRESULT __stdcall AdjustHeading(double headingOffsetInRadians) = 0;
    virtual HRESULT __stdcall GetStationaryCoordinateSystemAtTimestamp(::IUnknown* timestamp, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryGetRelativeHeadingAtTimestamp(::IUnknown* timestamp, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Canceled(bool* value) = 0;
    virtual HRESULT __stdcall put_Canceled(bool value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialLocatorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialStageFrameOfReference>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MovementRange(abi_t<Windows::Perception::Spatial::SpatialMovementRange>* value) = 0;
    virtual HRESULT __stdcall get_LookDirectionRange(abi_t<Windows::Perception::Spatial::SpatialLookDirectionRange>* value) = 0;
    virtual HRESULT __stdcall GetCoordinateSystemAtCurrentLocation(::IUnknown* locator, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryGetMovementBounds(::IUnknown* coordinateSystem, uint32_t* __valueSize, abi_t<Windows::Foundation::Numerics::float3>** value) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_CurrentChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_CurrentChanged(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall RequestNewStageAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) = 0;
};};

}
