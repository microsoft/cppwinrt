// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Geolocation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
#define WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
template <> struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3")) __declspec(novtable) IReference<uint32_t> : impl_IReference<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif

#ifndef WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
#define WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
template <> struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2")) __declspec(novtable) IReference<double> : impl_IReference<double> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_177f5719_e234_59db_99ba_f7fdddf31430
#define WINRT_GENERIC_177f5719_e234_59db_99ba_f7fdddf31430
template <> struct __declspec(uuid("177f5719-e234-59db-99ba-f7fdddf31430")) __declspec(novtable) IVectorView<Windows::Devices::Geolocation::BasicGeoposition> : impl_IVectorView<Windows::Devices::Geolocation::BasicGeoposition> {};
#endif

#ifndef WINRT_GENERIC_922399a8_0093_5009_a8d2_f87b0eae75f5
#define WINRT_GENERIC_922399a8_0093_5009_a8d2_f87b0eae75f5
template <> struct __declspec(uuid("922399a8-0093-5009-a8d2-f87b0eae75f5")) __declspec(novtable) IIterable<Windows::Devices::Geolocation::BasicGeoposition> : impl_IIterable<Windows::Devices::Geolocation::BasicGeoposition> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ee73ecf0_099d_57e5_8407_5b32e5af1cc4
#define WINRT_GENERIC_ee73ecf0_099d_57e5_8407_5b32e5af1cc4
template <> struct __declspec(uuid("ee73ecf0-099d-57e5-8407-5b32e5af1cc4")) __declspec(novtable) IAsyncOperation<Windows::Devices::Geolocation::Geoposition> : impl_IAsyncOperation<Windows::Devices::Geolocation::Geoposition> {};
#endif

#ifndef WINRT_GENERIC_df3c6164_4e7b_5e8e_9a7e_13da059dec1e
#define WINRT_GENERIC_df3c6164_4e7b_5e8e_9a7e_13da059dec1e
template <> struct __declspec(uuid("df3c6164-4e7b-5e8e-9a7e-13da059dec1e")) __declspec(novtable) TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> : impl_TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_97fcf582_de6b_5cd3_9690_e2ecbb66da4d
#define WINRT_GENERIC_97fcf582_de6b_5cd3_9690_e2ecbb66da4d
template <> struct __declspec(uuid("97fcf582-de6b-5cd3-9690-e2ecbb66da4d")) __declspec(novtable) TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> : impl_TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_de2b24d0_b726_57b1_a7c5_e5a13932b7de
#define WINRT_GENERIC_de2b24d0_b726_57b1_a7c5_e5a13932b7de
template <> struct __declspec(uuid("de2b24d0-b726-57b1-a7c5-e5a13932b7de")) __declspec(novtable) IAsyncOperation<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus> : impl_IAsyncOperation<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_d572ccf3_0c60_553f_a624_c71648af8e7a
#define WINRT_GENERIC_d572ccf3_0c60_553f_a624_c71648af8e7a
template <> struct __declspec(uuid("d572ccf3-0c60-553f-a624-c71648af8e7a")) __declspec(novtable) IVectorView<Windows::Devices::Geolocation::Geoposition> : impl_IVectorView<Windows::Devices::Geolocation::Geoposition> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_e4d5dda6_f57c_57cc_b67f_2939a901dabe
#define WINRT_GENERIC_e4d5dda6_f57c_57cc_b67f_2939a901dabe
template <> struct __declspec(uuid("e4d5dda6-f57c-57cc-b67f-2939a901dabe")) __declspec(novtable) IReference<Windows::Devices::Geolocation::BasicGeoposition> : impl_IReference<Windows::Devices::Geolocation::BasicGeoposition> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_1b4e26a1_88e4_5872_bb2d_4f31700828b2
#define WINRT_GENERIC_1b4e26a1_88e4_5872_bb2d_4f31700828b2
template <> struct __declspec(uuid("1b4e26a1-88e4-5872-bb2d-4f31700828b2")) __declspec(novtable) IIterator<Windows::Devices::Geolocation::BasicGeoposition> : impl_IIterator<Windows::Devices::Geolocation::BasicGeoposition> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_7668a704_244e_5e12_8dcb_92a3299eba26
#define WINRT_GENERIC_7668a704_244e_5e12_8dcb_92a3299eba26
template <> struct __declspec(uuid("7668a704-244e-5e12-8dcb-92a3299eba26")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Geolocation::Geoposition> : impl_AsyncOperationCompletedHandler<Windows::Devices::Geolocation::Geoposition> {};
#endif

#ifndef WINRT_GENERIC_f3524c93_e5c7_5b88_bedb_d3e637cff271
#define WINRT_GENERIC_f3524c93_e5c7_5b88_bedb_d3e637cff271
template <> struct __declspec(uuid("f3524c93-e5c7-5b88-bedb-d3e637cff271")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_a99b4206_263e_5308_82f2_31315c65135c
#define WINRT_GENERIC_a99b4206_263e_5308_82f2_31315c65135c
template <> struct __declspec(uuid("a99b4206-263e-5308-82f2-31315c65135c")) __declspec(novtable) IIterator<Windows::Devices::Geolocation::Geoposition> : impl_IIterator<Windows::Devices::Geolocation::Geoposition> {};
#endif

#ifndef WINRT_GENERIC_135ed72d_75b1_5881_be41_6ffeaa202044
#define WINRT_GENERIC_135ed72d_75b1_5881_be41_6ffeaa202044
template <> struct __declspec(uuid("135ed72d-75b1-5881-be41-6ffeaa202044")) __declspec(novtable) IIterable<Windows::Devices::Geolocation::Geoposition> : impl_IIterable<Windows::Devices::Geolocation::Geoposition> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_9454b533_efb4_5385_8d3a_437fabc32d91
#define WINRT_GENERIC_9454b533_efb4_5385_8d3a_437fabc32d91
template <> struct __declspec(uuid("9454b533-efb4-5385-8d3a-437fabc32d91")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> {};
#endif

#ifndef WINRT_GENERIC_6c67a1d1_9441_5aee_b625_e3c1b5676a6d
#define WINRT_GENERIC_6c67a1d1_9441_5aee_b625_e3c1b5676a6d
template <> struct __declspec(uuid("6c67a1d1-9441-5aee-b625-e3c1b5676a6d")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> {};
#endif


}

namespace Windows::Devices::Geolocation {

template <typename D>
struct WINRT_EBO impl_ICivicAddress
{
    hstring Country() const;
    hstring State() const;
    hstring City() const;
    hstring PostalCode() const;
    Windows::Foundation::DateTime Timestamp() const;
};

template <typename D>
struct WINRT_EBO impl_IGeoboundingBox
{
    Windows::Devices::Geolocation::BasicGeoposition NorthwestCorner() const;
    Windows::Devices::Geolocation::BasicGeoposition SoutheastCorner() const;
    Windows::Devices::Geolocation::BasicGeoposition Center() const;
    double MinAltitude() const;
    double MaxAltitude() const;
};

template <typename D>
struct WINRT_EBO impl_IGeoboundingBoxFactory
{
    Windows::Devices::Geolocation::GeoboundingBox Create(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner) const;
    Windows::Devices::Geolocation::GeoboundingBox CreateWithAltitudeReference(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) const;
    Windows::Devices::Geolocation::GeoboundingBox CreateWithAltitudeReferenceAndSpatialReference(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) const;
};

template <typename D>
struct WINRT_EBO impl_IGeoboundingBoxStatics
{
    Windows::Devices::Geolocation::GeoboundingBox TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions) const;
    Windows::Devices::Geolocation::GeoboundingBox TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem) const;
    Windows::Devices::Geolocation::GeoboundingBox TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem, uint32_t spatialReferenceId) const;
};

template <typename D>
struct WINRT_EBO impl_IGeocircle
{
    Windows::Devices::Geolocation::BasicGeoposition Center() const;
    double Radius() const;
};

template <typename D>
struct WINRT_EBO impl_IGeocircleFactory
{
    Windows::Devices::Geolocation::Geocircle Create(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius) const;
    Windows::Devices::Geolocation::Geocircle CreateWithAltitudeReferenceSystem(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) const;
    Windows::Devices::Geolocation::Geocircle CreateWithAltitudeReferenceSystemAndSpatialReferenceId(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) const;
};

template <typename D>
struct WINRT_EBO impl_IGeocoordinate
{
    double Latitude() const;
    double Longitude() const;
    Windows::Foundation::IReference<double> Altitude() const;
    double Accuracy() const;
    Windows::Foundation::IReference<double> AltitudeAccuracy() const;
    Windows::Foundation::IReference<double> Heading() const;
    Windows::Foundation::IReference<double> Speed() const;
    Windows::Foundation::DateTime Timestamp() const;
};

template <typename D>
struct WINRT_EBO impl_IGeocoordinateSatelliteData
{
    Windows::Foundation::IReference<double> PositionDilutionOfPrecision() const;
    Windows::Foundation::IReference<double> HorizontalDilutionOfPrecision() const;
    Windows::Foundation::IReference<double> VerticalDilutionOfPrecision() const;
};

template <typename D>
struct WINRT_EBO impl_IGeocoordinateWithPoint
{
    Windows::Devices::Geolocation::Geopoint Point() const;
};

template <typename D>
struct WINRT_EBO impl_IGeocoordinateWithPositionData
{
    Windows::Devices::Geolocation::PositionSource PositionSource() const;
    Windows::Devices::Geolocation::GeocoordinateSatelliteData SatelliteData() const;
};

template <typename D>
struct WINRT_EBO impl_IGeocoordinateWithPositionSourceTimestamp
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> PositionSourceTimestamp() const;
};

template <typename D>
struct WINRT_EBO impl_IGeolocator
{
    Windows::Devices::Geolocation::PositionAccuracy DesiredAccuracy() const;
    void DesiredAccuracy(Windows::Devices::Geolocation::PositionAccuracy value) const;
    double MovementThreshold() const;
    void MovementThreshold(double value) const;
    uint32_t ReportInterval() const;
    void ReportInterval(uint32_t value) const;
    Windows::Devices::Geolocation::PositionStatus LocationStatus() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> GetGeopositionAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> GetGeopositionAsync(const Windows::Foundation::TimeSpan & maximumAge, const Windows::Foundation::TimeSpan & timeout) const;
    event_token PositionChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> & handler) const;
    using PositionChanged_revoker = event_revoker<IGeolocator>;
    PositionChanged_revoker PositionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> & handler) const;
    void PositionChanged(event_token token) const;
    event_token StatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> & handler) const;
    using StatusChanged_revoker = event_revoker<IGeolocator>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> & handler) const;
    void StatusChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IGeolocator2
{
    void AllowFallbackToConsentlessPositions() const;
};

template <typename D>
struct WINRT_EBO impl_IGeolocatorStatics
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> GetGeopositionHistoryAsync(const Windows::Foundation::DateTime & startTime) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> GetGeopositionHistoryAsync(const Windows::Foundation::DateTime & startTime, const Windows::Foundation::TimeSpan & duration) const;
};

template <typename D>
struct WINRT_EBO impl_IGeolocatorStatics2
{
    bool IsDefaultGeopositionRecommended() const;
    void DefaultGeoposition(const Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> & value) const;
    Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> DefaultGeoposition() const;
};

template <typename D>
struct WINRT_EBO impl_IGeolocatorWithScalarAccuracy
{
    Windows::Foundation::IReference<uint32_t> DesiredAccuracyInMeters() const;
    void DesiredAccuracyInMeters(const Windows::Foundation::IReference<uint32_t> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IGeopath
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::BasicGeoposition> Positions() const;
};

template <typename D>
struct WINRT_EBO impl_IGeopathFactory
{
    Windows::Devices::Geolocation::Geopath Create(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions) const;
    Windows::Devices::Geolocation::Geopath CreateWithAltitudeReference(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) const;
    Windows::Devices::Geolocation::Geopath CreateWithAltitudeReferenceAndSpatialReference(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) const;
};

template <typename D>
struct WINRT_EBO impl_IGeopoint
{
    Windows::Devices::Geolocation::BasicGeoposition Position() const;
};

template <typename D>
struct WINRT_EBO impl_IGeopointFactory
{
    Windows::Devices::Geolocation::Geopoint Create(const Windows::Devices::Geolocation::BasicGeoposition & position) const;
    Windows::Devices::Geolocation::Geopoint CreateWithAltitudeReferenceSystem(const Windows::Devices::Geolocation::BasicGeoposition & position, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) const;
    Windows::Devices::Geolocation::Geopoint CreateWithAltitudeReferenceSystemAndSpatialReferenceId(const Windows::Devices::Geolocation::BasicGeoposition & position, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) const;
};

template <typename D>
struct WINRT_EBO impl_IGeoposition
{
    Windows::Devices::Geolocation::Geocoordinate Coordinate() const;
    Windows::Devices::Geolocation::CivicAddress CivicAddress() const;
};

template <typename D>
struct WINRT_EBO impl_IGeoposition2
{
    Windows::Devices::Geolocation::VenueData VenueData() const;
};

template <typename D>
struct WINRT_EBO impl_IGeoshape
{
    Windows::Devices::Geolocation::GeoshapeType GeoshapeType() const;
    uint32_t SpatialReferenceId() const;
    Windows::Devices::Geolocation::AltitudeReferenceSystem AltitudeReferenceSystem() const;
};

template <typename D>
struct WINRT_EBO impl_IPositionChangedEventArgs
{
    Windows::Devices::Geolocation::Geoposition Position() const;
};

template <typename D>
struct WINRT_EBO impl_IStatusChangedEventArgs
{
    Windows::Devices::Geolocation::PositionStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IVenueData
{
    hstring Id() const;
    hstring Level() const;
};

struct ICivicAddress :
    Windows::IInspectable,
    impl::consume<ICivicAddress>
{
    ICivicAddress(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICivicAddress>(m_ptr); }
};

struct IGeoboundingBox :
    Windows::IInspectable,
    impl::consume<IGeoboundingBox>,
    impl::require<IGeoboundingBox, Windows::Devices::Geolocation::IGeoshape>
{
    IGeoboundingBox(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeoboundingBox>(m_ptr); }
};

struct IGeoboundingBoxFactory :
    Windows::IInspectable,
    impl::consume<IGeoboundingBoxFactory>
{
    IGeoboundingBoxFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeoboundingBoxFactory>(m_ptr); }
};

struct IGeoboundingBoxStatics :
    Windows::IInspectable,
    impl::consume<IGeoboundingBoxStatics>
{
    IGeoboundingBoxStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeoboundingBoxStatics>(m_ptr); }
};

struct IGeocircle :
    Windows::IInspectable,
    impl::consume<IGeocircle>,
    impl::require<IGeocircle, Windows::Devices::Geolocation::IGeoshape>
{
    IGeocircle(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeocircle>(m_ptr); }
};

struct IGeocircleFactory :
    Windows::IInspectable,
    impl::consume<IGeocircleFactory>
{
    IGeocircleFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeocircleFactory>(m_ptr); }
};

struct IGeocoordinate :
    Windows::IInspectable,
    impl::consume<IGeocoordinate>
{
    IGeocoordinate(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeocoordinate>(m_ptr); }
};

struct IGeocoordinateSatelliteData :
    Windows::IInspectable,
    impl::consume<IGeocoordinateSatelliteData>
{
    IGeocoordinateSatelliteData(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeocoordinateSatelliteData>(m_ptr); }
};

struct IGeocoordinateWithPoint :
    Windows::IInspectable,
    impl::consume<IGeocoordinateWithPoint>
{
    IGeocoordinateWithPoint(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeocoordinateWithPoint>(m_ptr); }
};

struct IGeocoordinateWithPositionData :
    Windows::IInspectable,
    impl::consume<IGeocoordinateWithPositionData>,
    impl::require<IGeocoordinateWithPositionData, Windows::Devices::Geolocation::IGeocoordinate>
{
    IGeocoordinateWithPositionData(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeocoordinateWithPositionData>(m_ptr); }
};

struct IGeocoordinateWithPositionSourceTimestamp :
    Windows::IInspectable,
    impl::consume<IGeocoordinateWithPositionSourceTimestamp>
{
    IGeocoordinateWithPositionSourceTimestamp(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeocoordinateWithPositionSourceTimestamp>(m_ptr); }
};

struct IGeolocator :
    Windows::IInspectable,
    impl::consume<IGeolocator>
{
    IGeolocator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeolocator>(m_ptr); }
};

struct IGeolocator2 :
    Windows::IInspectable,
    impl::consume<IGeolocator2>
{
    IGeolocator2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeolocator2>(m_ptr); }
};

struct IGeolocatorStatics :
    Windows::IInspectable,
    impl::consume<IGeolocatorStatics>
{
    IGeolocatorStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeolocatorStatics>(m_ptr); }
};

struct IGeolocatorStatics2 :
    Windows::IInspectable,
    impl::consume<IGeolocatorStatics2>
{
    IGeolocatorStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeolocatorStatics2>(m_ptr); }
};

struct IGeolocatorWithScalarAccuracy :
    Windows::IInspectable,
    impl::consume<IGeolocatorWithScalarAccuracy>,
    impl::require<IGeolocatorWithScalarAccuracy, Windows::Devices::Geolocation::IGeolocator>
{
    IGeolocatorWithScalarAccuracy(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeolocatorWithScalarAccuracy>(m_ptr); }
};

struct IGeopath :
    Windows::IInspectable,
    impl::consume<IGeopath>,
    impl::require<IGeopath, Windows::Devices::Geolocation::IGeoshape>
{
    IGeopath(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeopath>(m_ptr); }
};

struct IGeopathFactory :
    Windows::IInspectable,
    impl::consume<IGeopathFactory>
{
    IGeopathFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeopathFactory>(m_ptr); }
};

struct IGeopoint :
    Windows::IInspectable,
    impl::consume<IGeopoint>,
    impl::require<IGeopoint, Windows::Devices::Geolocation::IGeoshape>
{
    IGeopoint(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeopoint>(m_ptr); }
};

struct IGeopointFactory :
    Windows::IInspectable,
    impl::consume<IGeopointFactory>
{
    IGeopointFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeopointFactory>(m_ptr); }
};

struct IGeoposition :
    Windows::IInspectable,
    impl::consume<IGeoposition>
{
    IGeoposition(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeoposition>(m_ptr); }
};

struct IGeoposition2 :
    Windows::IInspectable,
    impl::consume<IGeoposition2>,
    impl::require<IGeoposition2, Windows::Devices::Geolocation::IGeoposition>
{
    IGeoposition2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeoposition2>(m_ptr); }
};

struct IGeoshape :
    Windows::IInspectable,
    impl::consume<IGeoshape>
{
    IGeoshape(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeoshape>(m_ptr); }
};

struct IPositionChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IPositionChangedEventArgs>
{
    IPositionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPositionChangedEventArgs>(m_ptr); }
};

struct IStatusChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IStatusChangedEventArgs>
{
    IStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStatusChangedEventArgs>(m_ptr); }
};

struct IVenueData :
    Windows::IInspectable,
    impl::consume<IVenueData>
{
    IVenueData(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVenueData>(m_ptr); }
};

}

}
