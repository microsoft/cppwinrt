// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Geolocation {

struct BasicGeoposition;

}

namespace Windows::Devices::Geolocation {

using BasicGeoposition = ABI::Windows::Devices::Geolocation::BasicGeoposition;

}

namespace ABI::Windows::Devices::Geolocation {

struct ICivicAddress;
struct IGeoboundingBox;
struct IGeoboundingBoxFactory;
struct IGeoboundingBoxStatics;
struct IGeocircle;
struct IGeocircleFactory;
struct IGeocoordinate;
struct IGeocoordinateSatelliteData;
struct IGeocoordinateWithPoint;
struct IGeocoordinateWithPositionData;
struct IGeocoordinateWithPositionSourceTimestamp;
struct IGeolocator;
struct IGeolocator2;
struct IGeolocatorStatics;
struct IGeolocatorStatics2;
struct IGeolocatorWithScalarAccuracy;
struct IGeopath;
struct IGeopathFactory;
struct IGeopoint;
struct IGeopointFactory;
struct IGeoposition;
struct IGeoposition2;
struct IGeoshape;
struct IPositionChangedEventArgs;
struct IStatusChangedEventArgs;
struct IVenueData;
struct CivicAddress;
struct GeoboundingBox;
struct Geocircle;
struct Geocoordinate;
struct GeocoordinateSatelliteData;
struct Geolocator;
struct Geopath;
struct Geopoint;
struct Geoposition;
struct PositionChangedEventArgs;
struct StatusChangedEventArgs;
struct VenueData;

}

namespace Windows::Devices::Geolocation {

struct ICivicAddress;
struct IGeoboundingBox;
struct IGeoboundingBoxFactory;
struct IGeoboundingBoxStatics;
struct IGeocircle;
struct IGeocircleFactory;
struct IGeocoordinate;
struct IGeocoordinateSatelliteData;
struct IGeocoordinateWithPoint;
struct IGeocoordinateWithPositionData;
struct IGeocoordinateWithPositionSourceTimestamp;
struct IGeolocator;
struct IGeolocator2;
struct IGeolocatorStatics;
struct IGeolocatorStatics2;
struct IGeolocatorWithScalarAccuracy;
struct IGeopath;
struct IGeopathFactory;
struct IGeopoint;
struct IGeopointFactory;
struct IGeoposition;
struct IGeoposition2;
struct IGeoshape;
struct IPositionChangedEventArgs;
struct IStatusChangedEventArgs;
struct IVenueData;
struct CivicAddress;
struct GeoboundingBox;
struct Geocircle;
struct Geocoordinate;
struct GeocoordinateSatelliteData;
struct Geolocator;
struct Geopath;
struct Geopoint;
struct Geoposition;
struct PositionChangedEventArgs;
struct StatusChangedEventArgs;
struct VenueData;

}

namespace Windows::Devices::Geolocation {

enum class AltitudeReferenceSystem
{
    Unspecified = 0,
    Terrain = 1,
    Ellipsoid = 2,
    Geoid = 3,
    Surface = 4,
};

enum class GeolocationAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    Denied = 2,
};

enum class GeoshapeType
{
    Geopoint = 0,
    Geocircle = 1,
    Geopath = 2,
    GeoboundingBox = 3,
};

enum class PositionAccuracy
{
    Default = 0,
    High = 1,
};

enum class PositionSource
{
    Cellular = 0,
    Satellite = 1,
    WiFi = 2,
    IPAddress = 3,
    Unknown = 4,
    Default = 5,
    Obfuscated = 6,
};

enum class PositionStatus
{
    Ready = 0,
    Initializing = 1,
    NoData = 2,
    Disabled = 3,
    NotInitialized = 4,
    NotAvailable = 5,
};

}

}
