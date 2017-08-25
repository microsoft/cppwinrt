// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

struct BasicGeoposition
{
    double Latitude;
    double Longitude;
    double Altitude;
};

struct WINRT_EBO CivicAddress :
    Windows::Devices::Geolocation::ICivicAddress
{
    CivicAddress(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GeoboundingBox :
    Windows::Devices::Geolocation::IGeoboundingBox
{
    GeoboundingBox(std::nullptr_t) noexcept {}
    GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner);
    GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
    GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
    static Windows::Devices::Geolocation::GeoboundingBox TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions);
    static Windows::Devices::Geolocation::GeoboundingBox TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem);
    static Windows::Devices::Geolocation::GeoboundingBox TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem, uint32_t spatialReferenceId);
};

struct WINRT_EBO Geocircle :
    Windows::Devices::Geolocation::IGeocircle
{
    Geocircle(std::nullptr_t) noexcept {}
    Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius);
    Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
    Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
};

struct WINRT_EBO Geocoordinate :
    Windows::Devices::Geolocation::IGeocoordinate,
    impl::require<Geocoordinate, Windows::Devices::Geolocation::IGeocoordinateWithPoint, Windows::Devices::Geolocation::IGeocoordinateWithPositionData, Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
{
    Geocoordinate(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GeocoordinateSatelliteData :
    Windows::Devices::Geolocation::IGeocoordinateSatelliteData
{
    GeocoordinateSatelliteData(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Geolocator :
    Windows::Devices::Geolocation::IGeolocator,
    impl::require<Geolocator, Windows::Devices::Geolocation::IGeolocator2, Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>
{
    Geolocator(std::nullptr_t) noexcept {}
    Geolocator();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::GeolocationAccessStatus> RequestAccessAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration);
    static bool IsDefaultGeopositionRecommended();
    static void DefaultGeoposition(optional<Windows::Devices::Geolocation::BasicGeoposition> const& value);
    static Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> DefaultGeoposition();
};

struct WINRT_EBO Geopath :
    Windows::Devices::Geolocation::IGeopath
{
    Geopath(std::nullptr_t) noexcept {}
    Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions);
    Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
    Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
};

struct WINRT_EBO Geopoint :
    Windows::Devices::Geolocation::IGeopoint
{
    Geopoint(std::nullptr_t) noexcept {}
    Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position);
    Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
    Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
};

struct WINRT_EBO Geoposition :
    Windows::Devices::Geolocation::IGeoposition,
    impl::require<Geoposition, Windows::Devices::Geolocation::IGeoposition2>
{
    Geoposition(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PositionChangedEventArgs :
    Windows::Devices::Geolocation::IPositionChangedEventArgs
{
    PositionChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StatusChangedEventArgs :
    Windows::Devices::Geolocation::IStatusChangedEventArgs
{
    StatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VenueData :
    Windows::Devices::Geolocation::IVenueData
{
    VenueData(std::nullptr_t) noexcept {}
};

}
