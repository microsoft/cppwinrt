// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

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
struct BasicGeoposition;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Geolocation::ICivicAddress>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeoboundingBox>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeoboundingBoxFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeoboundingBoxStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeocircle>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeocircleFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeocoordinate>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeocoordinateWithPoint>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeolocator>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeolocator2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeolocatorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeolocatorStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeopath>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeopathFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeopoint>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeopointFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeoposition>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeoposition2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IGeoshape>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IPositionChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IStatusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::IVenueData>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::CivicAddress>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::GeoboundingBox>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geocircle>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geocoordinate>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::GeocoordinateSatelliteData>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geolocator>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geopath>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geopoint>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geoposition>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::PositionChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::StatusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::VenueData>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::AltitudeReferenceSystem>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::GeolocationAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::GeoshapeType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::PositionAccuracy>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::PositionSource>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::PositionStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::BasicGeoposition>{ using type = struct_category<double,double,double>; };
template <> struct name<Windows::Devices::Geolocation::ICivicAddress>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.ICivicAddress" }; };
template <> struct name<Windows::Devices::Geolocation::IGeoboundingBox>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoboundingBox" }; };
template <> struct name<Windows::Devices::Geolocation::IGeoboundingBoxFactory>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoboundingBoxFactory" }; };
template <> struct name<Windows::Devices::Geolocation::IGeoboundingBoxStatics>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoboundingBoxStatics" }; };
template <> struct name<Windows::Devices::Geolocation::IGeocircle>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocircle" }; };
template <> struct name<Windows::Devices::Geolocation::IGeocircleFactory>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocircleFactory" }; };
template <> struct name<Windows::Devices::Geolocation::IGeocoordinate>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinate" }; };
template <> struct name<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinateSatelliteData" }; };
template <> struct name<Windows::Devices::Geolocation::IGeocoordinateWithPoint>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinateWithPoint" }; };
template <> struct name<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinateWithPositionData" }; };
template <> struct name<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp" }; };
template <> struct name<Windows::Devices::Geolocation::IGeolocator>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocator" }; };
template <> struct name<Windows::Devices::Geolocation::IGeolocator2>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocator2" }; };
template <> struct name<Windows::Devices::Geolocation::IGeolocatorStatics>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocatorStatics" }; };
template <> struct name<Windows::Devices::Geolocation::IGeolocatorStatics2>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocatorStatics2" }; };
template <> struct name<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy" }; };
template <> struct name<Windows::Devices::Geolocation::IGeopath>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeopath" }; };
template <> struct name<Windows::Devices::Geolocation::IGeopathFactory>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeopathFactory" }; };
template <> struct name<Windows::Devices::Geolocation::IGeopoint>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeopoint" }; };
template <> struct name<Windows::Devices::Geolocation::IGeopointFactory>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeopointFactory" }; };
template <> struct name<Windows::Devices::Geolocation::IGeoposition>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoposition" }; };
template <> struct name<Windows::Devices::Geolocation::IGeoposition2>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoposition2" }; };
template <> struct name<Windows::Devices::Geolocation::IGeoshape>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoshape" }; };
template <> struct name<Windows::Devices::Geolocation::IPositionChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IPositionChangedEventArgs" }; };
template <> struct name<Windows::Devices::Geolocation::IStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IStatusChangedEventArgs" }; };
template <> struct name<Windows::Devices::Geolocation::IVenueData>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.IVenueData" }; };
template <> struct name<Windows::Devices::Geolocation::CivicAddress>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.CivicAddress" }; };
template <> struct name<Windows::Devices::Geolocation::GeoboundingBox>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.GeoboundingBox" }; };
template <> struct name<Windows::Devices::Geolocation::Geocircle>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geocircle" }; };
template <> struct name<Windows::Devices::Geolocation::Geocoordinate>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geocoordinate" }; };
template <> struct name<Windows::Devices::Geolocation::GeocoordinateSatelliteData>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.GeocoordinateSatelliteData" }; };
template <> struct name<Windows::Devices::Geolocation::Geolocator>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geolocator" }; };
template <> struct name<Windows::Devices::Geolocation::Geopath>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geopath" }; };
template <> struct name<Windows::Devices::Geolocation::Geopoint>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geopoint" }; };
template <> struct name<Windows::Devices::Geolocation::Geoposition>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geoposition" }; };
template <> struct name<Windows::Devices::Geolocation::PositionChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.PositionChangedEventArgs" }; };
template <> struct name<Windows::Devices::Geolocation::StatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.StatusChangedEventArgs" }; };
template <> struct name<Windows::Devices::Geolocation::VenueData>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.VenueData" }; };
template <> struct name<Windows::Devices::Geolocation::AltitudeReferenceSystem>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.AltitudeReferenceSystem" }; };
template <> struct name<Windows::Devices::Geolocation::GeolocationAccessStatus>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.GeolocationAccessStatus" }; };
template <> struct name<Windows::Devices::Geolocation::GeoshapeType>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.GeoshapeType" }; };
template <> struct name<Windows::Devices::Geolocation::PositionAccuracy>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.PositionAccuracy" }; };
template <> struct name<Windows::Devices::Geolocation::PositionSource>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.PositionSource" }; };
template <> struct name<Windows::Devices::Geolocation::PositionStatus>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.PositionStatus" }; };
template <> struct name<Windows::Devices::Geolocation::BasicGeoposition>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.BasicGeoposition" }; };
template <> struct guid<Windows::Devices::Geolocation::ICivicAddress>{ static constexpr GUID value{ 0xA8567A1A,0x64F4,0x4D48,{ 0xBC,0xEA,0xF6,0xB0,0x08,0xEC,0xA3,0x4C } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeoboundingBox>{ static constexpr GUID value{ 0x0896C80B,0x274F,0x43DA,{ 0x9A,0x06,0xCB,0xFC,0xDA,0xEB,0x4E,0xC2 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeoboundingBoxFactory>{ static constexpr GUID value{ 0x4DFBA589,0x0411,0x4ABC,{ 0xB3,0xB5,0x5B,0xBC,0xCB,0x57,0xD9,0x8C } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeoboundingBoxStatics>{ static constexpr GUID value{ 0x67B80708,0xE61A,0x4CD0,{ 0x84,0x1B,0x93,0x23,0x37,0x92,0xB5,0xCA } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeocircle>{ static constexpr GUID value{ 0x39E45843,0xA7F9,0x4E63,{ 0x92,0xA7,0xBA,0x0C,0x28,0xD1,0x24,0xB1 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeocircleFactory>{ static constexpr GUID value{ 0xAFD6531F,0x72B1,0x4F7D,{ 0x87,0xCC,0x4E,0xD4,0xC9,0x84,0x9C,0x05 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeocoordinate>{ static constexpr GUID value{ 0xEE21A3AA,0x976A,0x4C70,{ 0x80,0x3D,0x08,0x3E,0xA5,0x5B,0xCB,0xC4 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>{ static constexpr GUID value{ 0xC32A74D9,0x2608,0x474C,{ 0x91,0x2C,0x06,0xDD,0x49,0x0F,0x4A,0xF7 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeocoordinateWithPoint>{ static constexpr GUID value{ 0xFEEA0525,0xD22C,0x4D46,{ 0xB5,0x27,0x0B,0x96,0x06,0x6F,0xC7,0xDB } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>{ static constexpr GUID value{ 0x95E634BE,0xDBD6,0x40AC,{ 0xB8,0xF2,0xA6,0x5C,0x03,0x40,0xD9,0xA6 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>{ static constexpr GUID value{ 0x8543FC02,0xC9F1,0x4610,{ 0xAF,0xE0,0x8B,0xC3,0xA6,0xA8,0x70,0x36 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeolocator>{ static constexpr GUID value{ 0xA9C3BF62,0x4524,0x4989,{ 0x8A,0xA9,0xDE,0x01,0x9D,0x2E,0x55,0x1F } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeolocator2>{ static constexpr GUID value{ 0xD1B42E6D,0x8891,0x43B4,{ 0xAD,0x36,0x27,0xC6,0xFE,0x9A,0x97,0xB1 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeolocatorStatics>{ static constexpr GUID value{ 0x9A8E7571,0x2DF5,0x4591,{ 0x9F,0x87,0xEB,0x5F,0xD8,0x94,0xE9,0xB7 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeolocatorStatics2>{ static constexpr GUID value{ 0x993011A2,0xFA1C,0x4631,{ 0xA7,0x1D,0x0D,0xBE,0xB1,0x25,0x0D,0x9C } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>{ static constexpr GUID value{ 0x96F5D3C1,0xB80F,0x460A,{ 0x99,0x4D,0xA9,0x6C,0x47,0xA5,0x1A,0xA4 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeopath>{ static constexpr GUID value{ 0xE53FD7B9,0x2DA4,0x4714,{ 0xA6,0x52,0xDE,0x85,0x93,0x28,0x98,0x98 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeopathFactory>{ static constexpr GUID value{ 0x27BEA9C8,0xC7E7,0x4359,{ 0x9B,0x9B,0xFC,0xA3,0xE0,0x5E,0xF5,0x93 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeopoint>{ static constexpr GUID value{ 0x6BFA00EB,0xE56E,0x49BB,{ 0x9C,0xAF,0xCB,0xAA,0x78,0xA8,0xBC,0xEF } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeopointFactory>{ static constexpr GUID value{ 0xDB6B8D33,0x76BD,0x4E30,{ 0x8A,0xF7,0xA8,0x44,0xDC,0x37,0xB7,0xA0 } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeoposition>{ static constexpr GUID value{ 0xC18D0454,0x7D41,0x4FF7,{ 0xA9,0x57,0x9D,0xFF,0xB4,0xEF,0x7F,0x5B } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeoposition2>{ static constexpr GUID value{ 0x7F62F697,0x8671,0x4B0D,{ 0x86,0xF8,0x47,0x4A,0x84,0x96,0x18,0x7C } }; };
template <> struct guid<Windows::Devices::Geolocation::IGeoshape>{ static constexpr GUID value{ 0xC99CA2AF,0xC729,0x43C1,{ 0x8F,0xAB,0xD6,0xDE,0xC9,0x14,0xDF,0x7E } }; };
template <> struct guid<Windows::Devices::Geolocation::IPositionChangedEventArgs>{ static constexpr GUID value{ 0x37859CE5,0x9D1E,0x46C5,{ 0xBF,0x3B,0x6A,0xD8,0xCA,0xC1,0xA0,0x93 } }; };
template <> struct guid<Windows::Devices::Geolocation::IStatusChangedEventArgs>{ static constexpr GUID value{ 0x3453D2DA,0x8C93,0x4111,{ 0xA2,0x05,0x9A,0xEC,0xFC,0x9B,0xE5,0xC0 } }; };
template <> struct guid<Windows::Devices::Geolocation::IVenueData>{ static constexpr GUID value{ 0x66F39187,0x60E3,0x4B2F,{ 0xB5,0x27,0x4F,0x53,0xF1,0xC3,0xC6,0x77 } }; };
template <> struct default_interface<Windows::Devices::Geolocation::CivicAddress>{ using type = Windows::Devices::Geolocation::ICivicAddress; };
template <> struct default_interface<Windows::Devices::Geolocation::GeoboundingBox>{ using type = Windows::Devices::Geolocation::IGeoboundingBox; };
template <> struct default_interface<Windows::Devices::Geolocation::Geocircle>{ using type = Windows::Devices::Geolocation::IGeocircle; };
template <> struct default_interface<Windows::Devices::Geolocation::Geocoordinate>{ using type = Windows::Devices::Geolocation::IGeocoordinate; };
template <> struct default_interface<Windows::Devices::Geolocation::GeocoordinateSatelliteData>{ using type = Windows::Devices::Geolocation::IGeocoordinateSatelliteData; };
template <> struct default_interface<Windows::Devices::Geolocation::Geolocator>{ using type = Windows::Devices::Geolocation::IGeolocator; };
template <> struct default_interface<Windows::Devices::Geolocation::Geopath>{ using type = Windows::Devices::Geolocation::IGeopath; };
template <> struct default_interface<Windows::Devices::Geolocation::Geopoint>{ using type = Windows::Devices::Geolocation::IGeopoint; };
template <> struct default_interface<Windows::Devices::Geolocation::Geoposition>{ using type = Windows::Devices::Geolocation::IGeoposition; };
template <> struct default_interface<Windows::Devices::Geolocation::PositionChangedEventArgs>{ using type = Windows::Devices::Geolocation::IPositionChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Geolocation::StatusChangedEventArgs>{ using type = Windows::Devices::Geolocation::IStatusChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Geolocation::VenueData>{ using type = Windows::Devices::Geolocation::IVenueData; };

template <typename D>
struct consume_Windows_Devices_Geolocation_ICivicAddress
{
    hstring Country() const;
    hstring State() const;
    hstring City() const;
    hstring PostalCode() const;
    Windows::Foundation::DateTime Timestamp() const;
};
template <> struct consume<Windows::Devices::Geolocation::ICivicAddress> { template <typename D> using type = consume_Windows_Devices_Geolocation_ICivicAddress<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeoboundingBox
{
    Windows::Devices::Geolocation::BasicGeoposition NorthwestCorner() const;
    Windows::Devices::Geolocation::BasicGeoposition SoutheastCorner() const;
    Windows::Devices::Geolocation::BasicGeoposition Center() const;
    double MinAltitude() const;
    double MaxAltitude() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeoboundingBox> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoboundingBox<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeoboundingBoxFactory
{
    Windows::Devices::Geolocation::GeoboundingBox Create(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner) const;
    Windows::Devices::Geolocation::GeoboundingBox CreateWithAltitudeReference(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const;
    Windows::Devices::Geolocation::GeoboundingBox CreateWithAltitudeReferenceAndSpatialReference(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeoboundingBoxFactory> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoboundingBoxFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeoboundingBoxStatics
{
    Windows::Devices::Geolocation::GeoboundingBox TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions) const;
    Windows::Devices::Geolocation::GeoboundingBox TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem) const;
    Windows::Devices::Geolocation::GeoboundingBox TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem, uint32_t spatialReferenceId) const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeoboundingBoxStatics> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoboundingBoxStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeocircle
{
    Windows::Devices::Geolocation::BasicGeoposition Center() const;
    double Radius() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeocircle> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocircle<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeocircleFactory
{
    Windows::Devices::Geolocation::Geocircle Create(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius) const;
    Windows::Devices::Geolocation::Geocircle CreateWithAltitudeReferenceSystem(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const;
    Windows::Devices::Geolocation::Geocircle CreateWithAltitudeReferenceSystemAndSpatialReferenceId(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeocircleFactory> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocircleFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeocoordinate
{
    [[deprecated("Latitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Latitude")]] double Latitude() const;
    [[deprecated("Longitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Longitude")]] double Longitude() const;
    [[deprecated("Altitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Altitude")]] Windows::Foundation::IReference<double> Altitude() const;
    double Accuracy() const;
    Windows::Foundation::IReference<double> AltitudeAccuracy() const;
    Windows::Foundation::IReference<double> Heading() const;
    Windows::Foundation::IReference<double> Speed() const;
    Windows::Foundation::DateTime Timestamp() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeocoordinate> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinate<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeocoordinateSatelliteData
{
    Windows::Foundation::IReference<double> PositionDilutionOfPrecision() const;
    Windows::Foundation::IReference<double> HorizontalDilutionOfPrecision() const;
    Windows::Foundation::IReference<double> VerticalDilutionOfPrecision() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeocoordinateSatelliteData> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinateSatelliteData<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeocoordinateWithPoint
{
    Windows::Devices::Geolocation::Geopoint Point() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeocoordinateWithPoint> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinateWithPoint<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionData
{
    Windows::Devices::Geolocation::PositionSource PositionSource() const;
    Windows::Devices::Geolocation::GeocoordinateSatelliteData SatelliteData() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeocoordinateWithPositionData> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionData<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionSourceTimestamp
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> PositionSourceTimestamp() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionSourceTimestamp<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeolocator
{
    Windows::Devices::Geolocation::PositionAccuracy DesiredAccuracy() const;
    void DesiredAccuracy(Windows::Devices::Geolocation::PositionAccuracy const& value) const;
    double MovementThreshold() const;
    void MovementThreshold(double value) const;
    uint32_t ReportInterval() const;
    void ReportInterval(uint32_t value) const;
    Windows::Devices::Geolocation::PositionStatus LocationStatus() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> GetGeopositionAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> GetGeopositionAsync(Windows::Foundation::TimeSpan const& maximumAge, Windows::Foundation::TimeSpan const& timeout) const;
    event_token PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> const& handler) const;
    using PositionChanged_revoker = event_revoker<Windows::Devices::Geolocation::IGeolocator>;
    PositionChanged_revoker PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> const& handler) const;
    void PositionChanged(event_token const& token) const;
    event_token StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> const& handler) const;
    using StatusChanged_revoker = event_revoker<Windows::Devices::Geolocation::IGeolocator>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> const& handler) const;
    void StatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeolocator> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocator<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeolocator2
{
    void AllowFallbackToConsentlessPositions() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeolocator2> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocator2<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeolocatorStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::GeolocationAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeolocatorStatics> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocatorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeolocatorStatics2
{
    bool IsDefaultGeopositionRecommended() const;
    void DefaultGeoposition(optional<Windows::Devices::Geolocation::BasicGeoposition> const& value) const;
    Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> DefaultGeoposition() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeolocatorStatics2> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocatorStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy
{
    Windows::Foundation::IReference<uint32_t> DesiredAccuracyInMeters() const;
    void DesiredAccuracyInMeters(optional<uint32_t> const& value) const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeopath
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::BasicGeoposition> Positions() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeopath> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeopath<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeopathFactory
{
    Windows::Devices::Geolocation::Geopath Create(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions) const;
    Windows::Devices::Geolocation::Geopath CreateWithAltitudeReference(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const;
    Windows::Devices::Geolocation::Geopath CreateWithAltitudeReferenceAndSpatialReference(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeopathFactory> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeopathFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeopoint
{
    Windows::Devices::Geolocation::BasicGeoposition Position() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeopoint> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeopoint<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeopointFactory
{
    Windows::Devices::Geolocation::Geopoint Create(Windows::Devices::Geolocation::BasicGeoposition const& position) const;
    Windows::Devices::Geolocation::Geopoint CreateWithAltitudeReferenceSystem(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const;
    Windows::Devices::Geolocation::Geopoint CreateWithAltitudeReferenceSystemAndSpatialReferenceId(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeopointFactory> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeopointFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeoposition
{
    Windows::Devices::Geolocation::Geocoordinate Coordinate() const;
    Windows::Devices::Geolocation::CivicAddress CivicAddress() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeoposition> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoposition<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeoposition2
{
    Windows::Devices::Geolocation::VenueData VenueData() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeoposition2> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoposition2<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IGeoshape
{
    Windows::Devices::Geolocation::GeoshapeType GeoshapeType() const;
    uint32_t SpatialReferenceId() const;
    Windows::Devices::Geolocation::AltitudeReferenceSystem AltitudeReferenceSystem() const;
};
template <> struct consume<Windows::Devices::Geolocation::IGeoshape> { template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoshape<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IPositionChangedEventArgs
{
    Windows::Devices::Geolocation::Geoposition Position() const;
};
template <> struct consume<Windows::Devices::Geolocation::IPositionChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Geolocation_IPositionChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IStatusChangedEventArgs
{
    Windows::Devices::Geolocation::PositionStatus Status() const;
};
template <> struct consume<Windows::Devices::Geolocation::IStatusChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Geolocation_IStatusChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_IVenueData
{
    hstring Id() const;
    hstring Level() const;
};
template <> struct consume<Windows::Devices::Geolocation::IVenueData> { template <typename D> using type = consume_Windows_Devices_Geolocation_IVenueData<D>; };

template <> struct abi<Windows::Devices::Geolocation::ICivicAddress>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Country(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_State(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_City(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PostalCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeoboundingBox>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NorthwestCorner(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) = 0;
    virtual HRESULT __stdcall get_SoutheastCorner(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) = 0;
    virtual HRESULT __stdcall get_Center(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) = 0;
    virtual HRESULT __stdcall get_MinAltitude(double* value) = 0;
    virtual HRESULT __stdcall get_MaxAltitude(double* value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeoboundingBoxFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_t<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAltitudeReference(abi_t<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_t<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAltitudeReferenceAndSpatialReference(abi_t<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_t<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, uint32_t spatialReferenceId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeoboundingBoxStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryCompute(::IUnknown* positions, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryComputeWithAltitudeReference(::IUnknown* positions, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeRefSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryComputeWithAltitudeReferenceAndSpatialReference(::IUnknown* positions, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeRefSystem, uint32_t spatialReferenceId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeocircle>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Center(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) = 0;
    virtual HRESULT __stdcall get_Radius(double* value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeocircleFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAltitudeReferenceSystem(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAltitudeReferenceSystemAndSpatialReferenceId(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, uint32_t spatialReferenceId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeocoordinate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Latitude(double* value) = 0;
    virtual HRESULT __stdcall get_Longitude(double* value) = 0;
    virtual HRESULT __stdcall get_Altitude(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Accuracy(double* value) = 0;
    virtual HRESULT __stdcall get_AltitudeAccuracy(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Heading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Speed(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PositionDilutionOfPrecision(::IUnknown** ppValue) = 0;
    virtual HRESULT __stdcall get_HorizontalDilutionOfPrecision(::IUnknown** ppValue) = 0;
    virtual HRESULT __stdcall get_VerticalDilutionOfPrecision(::IUnknown** ppValue) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeocoordinateWithPoint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Point(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PositionSource(abi_t<Windows::Devices::Geolocation::PositionSource>* pValue) = 0;
    virtual HRESULT __stdcall get_SatelliteData(::IUnknown** ppValue) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PositionSourceTimestamp(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeolocator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredAccuracy(abi_t<Windows::Devices::Geolocation::PositionAccuracy>* value) = 0;
    virtual HRESULT __stdcall put_DesiredAccuracy(abi_t<Windows::Devices::Geolocation::PositionAccuracy> value) = 0;
    virtual HRESULT __stdcall get_MovementThreshold(double* value) = 0;
    virtual HRESULT __stdcall put_MovementThreshold(double value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_LocationStatus(abi_t<Windows::Devices::Geolocation::PositionStatus>* value) = 0;
    virtual HRESULT __stdcall GetGeopositionAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetGeopositionAsyncWithAgeAndTimeout(abi_t<Windows::Foundation::TimeSpan> maximumAge, abi_t<Windows::Foundation::TimeSpan> timeout, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_PositionChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PositionChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_StatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StatusChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeolocator2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AllowFallbackToConsentlessPositions() = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeolocatorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetGeopositionHistoryAsync(abi_t<Windows::Foundation::DateTime> startTime, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetGeopositionHistoryWithDurationAsync(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::TimeSpan> duration, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeolocatorStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsDefaultGeopositionRecommended(bool* value) = 0;
    virtual HRESULT __stdcall put_DefaultGeoposition(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DefaultGeoposition(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredAccuracyInMeters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DesiredAccuracyInMeters(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeopath>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Positions(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeopathFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* positions, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAltitudeReference(::IUnknown* positions, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAltitudeReferenceAndSpatialReference(::IUnknown* positions, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, uint32_t spatialReferenceId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeopoint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeopointFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAltitudeReferenceSystem(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAltitudeReferenceSystemAndSpatialReferenceId(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, uint32_t spatialReferenceId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeoposition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Coordinate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CivicAddress(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeoposition2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VenueData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IGeoshape>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GeoshapeType(abi_t<Windows::Devices::Geolocation::GeoshapeType>* value) = 0;
    virtual HRESULT __stdcall get_SpatialReferenceId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AltitudeReferenceSystem(abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem>* value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IPositionChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IStatusChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Geolocation::PositionStatus>* value) = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::IVenueData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Level(HSTRING* value) = 0;
};};

}
