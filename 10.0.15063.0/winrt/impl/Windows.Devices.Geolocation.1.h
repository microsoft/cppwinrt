// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

struct WINRT_EBO ICivicAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICivicAddress>
{
    ICivicAddress(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeoboundingBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoboundingBox>,
    impl::require<IGeoboundingBox, Windows::Devices::Geolocation::IGeoshape>
{
    IGeoboundingBox(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeoboundingBoxFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoboundingBoxFactory>
{
    IGeoboundingBoxFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeoboundingBoxStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoboundingBoxStatics>
{
    IGeoboundingBoxStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeocircle :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocircle>,
    impl::require<IGeocircle, Windows::Devices::Geolocation::IGeoshape>
{
    IGeocircle(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeocircleFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocircleFactory>
{
    IGeocircleFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeocoordinate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinate>
{
    IGeocoordinate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeocoordinateSatelliteData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinateSatelliteData>
{
    IGeocoordinateSatelliteData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeocoordinateWithPoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinateWithPoint>
{
    IGeocoordinateWithPoint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeocoordinateWithPositionData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinateWithPositionData>,
    impl::require<IGeocoordinateWithPositionData, Windows::Devices::Geolocation::IGeocoordinate>
{
    IGeocoordinateWithPositionData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeocoordinateWithPositionSourceTimestamp :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeocoordinateWithPositionSourceTimestamp>
{
    IGeocoordinateWithPositionSourceTimestamp(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeolocator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocator>
{
    IGeolocator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeolocator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocator2>
{
    IGeolocator2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeolocatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocatorStatics>
{
    IGeolocatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeolocatorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocatorStatics2>
{
    IGeolocatorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeolocatorWithScalarAccuracy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeolocatorWithScalarAccuracy>,
    impl::require<IGeolocatorWithScalarAccuracy, Windows::Devices::Geolocation::IGeolocator>
{
    IGeolocatorWithScalarAccuracy(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeopath :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeopath>,
    impl::require<IGeopath, Windows::Devices::Geolocation::IGeoshape>
{
    IGeopath(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeopathFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeopathFactory>
{
    IGeopathFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeopoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeopoint>,
    impl::require<IGeopoint, Windows::Devices::Geolocation::IGeoshape>
{
    IGeopoint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeopointFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeopointFactory>
{
    IGeopointFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeoposition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoposition>
{
    IGeoposition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeoposition2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoposition2>,
    impl::require<IGeoposition2, Windows::Devices::Geolocation::IGeoposition>
{
    IGeoposition2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeoshape :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeoshape>
{
    IGeoshape(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPositionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPositionChangedEventArgs>
{
    IPositionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStatusChangedEventArgs>
{
    IStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVenueData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVenueData>
{
    IVenueData(std::nullptr_t = nullptr) noexcept {}
};

}
