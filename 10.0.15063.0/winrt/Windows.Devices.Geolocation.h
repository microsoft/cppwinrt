// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Geolocation_ICivicAddress<D>::Country() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::ICivicAddress)->get_Country(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Geolocation_ICivicAddress<D>::State() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::ICivicAddress)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Geolocation_ICivicAddress<D>::City() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::ICivicAddress)->get_City(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Geolocation_ICivicAddress<D>::PostalCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::ICivicAddress)->get_PostalCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Geolocation_ICivicAddress<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::ICivicAddress)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition consume_Windows_Devices_Geolocation_IGeoboundingBox<D>::NorthwestCorner() const
{
    Windows::Devices::Geolocation::BasicGeoposition value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBox)->get_NorthwestCorner(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition consume_Windows_Devices_Geolocation_IGeoboundingBox<D>::SoutheastCorner() const
{
    Windows::Devices::Geolocation::BasicGeoposition value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBox)->get_SoutheastCorner(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition consume_Windows_Devices_Geolocation_IGeoboundingBox<D>::Center() const
{
    Windows::Devices::Geolocation::BasicGeoposition value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBox)->get_Center(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Geolocation_IGeoboundingBox<D>::MinAltitude() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBox)->get_MinAltitude(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Geolocation_IGeoboundingBox<D>::MaxAltitude() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBox)->get_MaxAltitude(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Devices_Geolocation_IGeoboundingBoxFactory<D>::Create(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner) const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBoxFactory)->Create(get_abi(northwestCorner), get_abi(southeastCorner), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Devices_Geolocation_IGeoboundingBoxFactory<D>::CreateWithAltitudeReference(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBoxFactory)->CreateWithAltitudeReference(get_abi(northwestCorner), get_abi(southeastCorner), get_abi(altitudeReferenceSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Devices_Geolocation_IGeoboundingBoxFactory<D>::CreateWithAltitudeReferenceAndSpatialReference(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBoxFactory)->CreateWithAltitudeReferenceAndSpatialReference(get_abi(northwestCorner), get_abi(southeastCorner), get_abi(altitudeReferenceSystem), spatialReferenceId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Devices_Geolocation_IGeoboundingBoxStatics<D>::TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions) const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBoxStatics)->TryCompute(get_abi(positions), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Devices_Geolocation_IGeoboundingBoxStatics<D>::TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem) const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBoxStatics)->TryComputeWithAltitudeReference(get_abi(positions), get_abi(altitudeRefSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Devices_Geolocation_IGeoboundingBoxStatics<D>::TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoboundingBoxStatics)->TryComputeWithAltitudeReferenceAndSpatialReference(get_abi(positions), get_abi(altitudeRefSystem), spatialReferenceId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition consume_Windows_Devices_Geolocation_IGeocircle<D>::Center() const
{
    Windows::Devices::Geolocation::BasicGeoposition value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocircle)->get_Center(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Geolocation_IGeocircle<D>::Radius() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocircle)->get_Radius(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geocircle consume_Windows_Devices_Geolocation_IGeocircleFactory<D>::Create(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius) const
{
    Windows::Devices::Geolocation::Geocircle value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocircleFactory)->Create(get_abi(position), radius, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geocircle consume_Windows_Devices_Geolocation_IGeocircleFactory<D>::CreateWithAltitudeReferenceSystem(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const
{
    Windows::Devices::Geolocation::Geocircle value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocircleFactory)->CreateWithAltitudeReferenceSystem(get_abi(position), radius, get_abi(altitudeReferenceSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geocircle consume_Windows_Devices_Geolocation_IGeocircleFactory<D>::CreateWithAltitudeReferenceSystemAndSpatialReferenceId(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::Geocircle value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocircleFactory)->CreateWithAltitudeReferenceSystemAndSpatialReferenceId(get_abi(position), radius, get_abi(altitudeReferenceSystem), spatialReferenceId, put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Geolocation_IGeocoordinate<D>::Latitude() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinate)->get_Latitude(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Geolocation_IGeocoordinate<D>::Longitude() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinate)->get_Longitude(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Devices_Geolocation_IGeocoordinate<D>::Altitude() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinate)->get_Altitude(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Geolocation_IGeocoordinate<D>::Accuracy() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinate)->get_Accuracy(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Devices_Geolocation_IGeocoordinate<D>::AltitudeAccuracy() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinate)->get_AltitudeAccuracy(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Devices_Geolocation_IGeocoordinate<D>::Heading() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinate)->get_Heading(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Devices_Geolocation_IGeocoordinate<D>::Speed() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinate)->get_Speed(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Geolocation_IGeocoordinate<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinate)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Devices_Geolocation_IGeocoordinateSatelliteData<D>::PositionDilutionOfPrecision() const
{
    Windows::Foundation::IReference<double> ppValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinateSatelliteData)->get_PositionDilutionOfPrecision(put_abi(ppValue)));
    return ppValue;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Devices_Geolocation_IGeocoordinateSatelliteData<D>::HorizontalDilutionOfPrecision() const
{
    Windows::Foundation::IReference<double> ppValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinateSatelliteData)->get_HorizontalDilutionOfPrecision(put_abi(ppValue)));
    return ppValue;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Devices_Geolocation_IGeocoordinateSatelliteData<D>::VerticalDilutionOfPrecision() const
{
    Windows::Foundation::IReference<double> ppValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinateSatelliteData)->get_VerticalDilutionOfPrecision(put_abi(ppValue)));
    return ppValue;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Devices_Geolocation_IGeocoordinateWithPoint<D>::Point() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinateWithPoint)->get_Point(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::PositionSource consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionData<D>::PositionSource() const
{
    Windows::Devices::Geolocation::PositionSource pValue{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinateWithPositionData)->get_PositionSource(put_abi(pValue)));
    return pValue;
}

template <typename D> Windows::Devices::Geolocation::GeocoordinateSatelliteData consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionData<D>::SatelliteData() const
{
    Windows::Devices::Geolocation::GeocoordinateSatelliteData ppValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinateWithPositionData)->get_SatelliteData(put_abi(ppValue)));
    return ppValue;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionSourceTimestamp<D>::PositionSourceTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp)->get_PositionSourceTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::PositionAccuracy consume_Windows_Devices_Geolocation_IGeolocator<D>::DesiredAccuracy() const
{
    Windows::Devices::Geolocation::PositionAccuracy value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->get_DesiredAccuracy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Geolocation_IGeolocator<D>::DesiredAccuracy(Windows::Devices::Geolocation::PositionAccuracy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->put_DesiredAccuracy(get_abi(value)));
}

template <typename D> double consume_Windows_Devices_Geolocation_IGeolocator<D>::MovementThreshold() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->get_MovementThreshold(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Geolocation_IGeolocator<D>::MovementThreshold(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->put_MovementThreshold(value));
}

template <typename D> uint32_t consume_Windows_Devices_Geolocation_IGeolocator<D>::ReportInterval() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->get_ReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Geolocation_IGeolocator<D>::ReportInterval(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->put_ReportInterval(value));
}

template <typename D> Windows::Devices::Geolocation::PositionStatus consume_Windows_Devices_Geolocation_IGeolocator<D>::LocationStatus() const
{
    Windows::Devices::Geolocation::PositionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->get_LocationStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> consume_Windows_Devices_Geolocation_IGeolocator<D>::GetGeopositionAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->GetGeopositionAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> consume_Windows_Devices_Geolocation_IGeolocator<D>::GetGeopositionAsync(Windows::Foundation::TimeSpan const& maximumAge, Windows::Foundation::TimeSpan const& timeout) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->GetGeopositionAsyncWithAgeAndTimeout(get_abi(maximumAge), get_abi(timeout), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Geolocation_IGeolocator<D>::PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->add_PositionChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Geolocation::IGeolocator> consume_Windows_Devices_Geolocation_IGeolocator<D>::PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Geolocation::IGeolocator>(this, &abi_t<Windows::Devices::Geolocation::IGeolocator>::remove_PositionChanged, PositionChanged(handler));
}

template <typename D> void consume_Windows_Devices_Geolocation_IGeolocator<D>::PositionChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->remove_PositionChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Geolocation_IGeolocator<D>::StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->add_StatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Geolocation::IGeolocator> consume_Windows_Devices_Geolocation_IGeolocator<D>::StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Geolocation::IGeolocator>(this, &abi_t<Windows::Devices::Geolocation::IGeolocator>::remove_StatusChanged, StatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_Geolocation_IGeolocator<D>::StatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator)->remove_StatusChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Geolocation_IGeolocator2<D>::AllowFallbackToConsentlessPositions() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocator2)->AllowFallbackToConsentlessPositions());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::GeolocationAccessStatus> consume_Windows_Devices_Geolocation_IGeolocatorStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::GeolocationAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocatorStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> consume_Windows_Devices_Geolocation_IGeolocatorStatics<D>::GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocatorStatics)->GetGeopositionHistoryAsync(get_abi(startTime), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> consume_Windows_Devices_Geolocation_IGeolocatorStatics<D>::GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocatorStatics)->GetGeopositionHistoryWithDurationAsync(get_abi(startTime), get_abi(duration), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_Geolocation_IGeolocatorStatics2<D>::IsDefaultGeopositionRecommended() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocatorStatics2)->get_IsDefaultGeopositionRecommended(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Geolocation_IGeolocatorStatics2<D>::DefaultGeoposition(optional<Windows::Devices::Geolocation::BasicGeoposition> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocatorStatics2)->put_DefaultGeoposition(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> consume_Windows_Devices_Geolocation_IGeolocatorStatics2<D>::DefaultGeoposition() const
{
    Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocatorStatics2)->get_DefaultGeoposition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy<D>::DesiredAccuracyInMeters() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy)->get_DesiredAccuracyInMeters(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy<D>::DesiredAccuracyInMeters(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy)->put_DesiredAccuracyInMeters(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::BasicGeoposition> consume_Windows_Devices_Geolocation_IGeopath<D>::Positions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::BasicGeoposition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeopath)->get_Positions(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_Devices_Geolocation_IGeopathFactory<D>::Create(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions) const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeopathFactory)->Create(get_abi(positions), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_Devices_Geolocation_IGeopathFactory<D>::CreateWithAltitudeReference(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeopathFactory)->CreateWithAltitudeReference(get_abi(positions), get_abi(altitudeReferenceSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_Devices_Geolocation_IGeopathFactory<D>::CreateWithAltitudeReferenceAndSpatialReference(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeopathFactory)->CreateWithAltitudeReferenceAndSpatialReference(get_abi(positions), get_abi(altitudeReferenceSystem), spatialReferenceId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition consume_Windows_Devices_Geolocation_IGeopoint<D>::Position() const
{
    Windows::Devices::Geolocation::BasicGeoposition value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeopoint)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Devices_Geolocation_IGeopointFactory<D>::Create(Windows::Devices::Geolocation::BasicGeoposition const& position) const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeopointFactory)->Create(get_abi(position), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Devices_Geolocation_IGeopointFactory<D>::CreateWithAltitudeReferenceSystem(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeopointFactory)->CreateWithAltitudeReferenceSystem(get_abi(position), get_abi(altitudeReferenceSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Devices_Geolocation_IGeopointFactory<D>::CreateWithAltitudeReferenceSystemAndSpatialReferenceId(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeopointFactory)->CreateWithAltitudeReferenceSystemAndSpatialReferenceId(get_abi(position), get_abi(altitudeReferenceSystem), spatialReferenceId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geocoordinate consume_Windows_Devices_Geolocation_IGeoposition<D>::Coordinate() const
{
    Windows::Devices::Geolocation::Geocoordinate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoposition)->get_Coordinate(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::CivicAddress consume_Windows_Devices_Geolocation_IGeoposition<D>::CivicAddress() const
{
    Windows::Devices::Geolocation::CivicAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoposition)->get_CivicAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::VenueData consume_Windows_Devices_Geolocation_IGeoposition2<D>::VenueData() const
{
    Windows::Devices::Geolocation::VenueData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoposition2)->get_VenueData(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoshapeType consume_Windows_Devices_Geolocation_IGeoshape<D>::GeoshapeType() const
{
    Windows::Devices::Geolocation::GeoshapeType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoshape)->get_GeoshapeType(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Geolocation_IGeoshape<D>::SpatialReferenceId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoshape)->get_SpatialReferenceId(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::AltitudeReferenceSystem consume_Windows_Devices_Geolocation_IGeoshape<D>::AltitudeReferenceSystem() const
{
    Windows::Devices::Geolocation::AltitudeReferenceSystem value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IGeoshape)->get_AltitudeReferenceSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geoposition consume_Windows_Devices_Geolocation_IPositionChangedEventArgs<D>::Position() const
{
    Windows::Devices::Geolocation::Geoposition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IPositionChangedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::PositionStatus consume_Windows_Devices_Geolocation_IStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::Geolocation::PositionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IStatusChangedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Geolocation_IVenueData<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IVenueData)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Geolocation_IVenueData<D>::Level() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::IVenueData)->get_Level(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Geolocation::ICivicAddress> : produce_base<D, Windows::Devices::Geolocation::ICivicAddress>
{
    HRESULT __stdcall get_Country(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Country());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_City(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().City());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PostalCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeoboundingBox> : produce_base<D, Windows::Devices::Geolocation::IGeoboundingBox>
{
    HRESULT __stdcall get_NorthwestCorner(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NorthwestCorner());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoutheastCorner(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SoutheastCorner());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Center(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinAltitude(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinAltitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAltitude(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxAltitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeoboundingBoxFactory> : produce_base<D, Windows::Devices::Geolocation::IGeoboundingBoxFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_t<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&northwestCorner), *reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&southeastCorner)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAltitudeReference(abi_t<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_t<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithAltitudeReference(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&northwestCorner), *reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&southeastCorner), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeReferenceSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAltitudeReferenceAndSpatialReference(abi_t<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_t<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, uint32_t spatialReferenceId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithAltitudeReferenceAndSpatialReference(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&northwestCorner), *reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&southeastCorner), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeReferenceSystem), spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeoboundingBoxStatics> : produce_base<D, Windows::Devices::Geolocation::IGeoboundingBoxStatics>
{
    HRESULT __stdcall TryCompute(::IUnknown* positions, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryCompute(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> const*>(&positions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryComputeWithAltitudeReference(::IUnknown* positions, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeRefSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryCompute(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> const*>(&positions), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeRefSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryComputeWithAltitudeReferenceAndSpatialReference(::IUnknown* positions, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeRefSystem, uint32_t spatialReferenceId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryCompute(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> const*>(&positions), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeRefSystem), spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeocircle> : produce_base<D, Windows::Devices::Geolocation::IGeocircle>
{
    HRESULT __stdcall get_Center(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Radius(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Radius());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeocircleFactory> : produce_base<D, Windows::Devices::Geolocation::IGeocircleFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&position), radius));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAltitudeReferenceSystem(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithAltitudeReferenceSystem(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&position), radius, *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeReferenceSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAltitudeReferenceSystemAndSpatialReferenceId(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, uint32_t spatialReferenceId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithAltitudeReferenceSystemAndSpatialReferenceId(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&position), radius, *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeReferenceSystem), spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeocoordinate> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinate>
{
    HRESULT __stdcall get_Latitude(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Latitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Longitude(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Longitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Altitude(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Altitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Accuracy(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Accuracy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AltitudeAccuracy(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AltitudeAccuracy());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Heading(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Heading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Speed(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Speed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeocoordinateSatelliteData> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinateSatelliteData>
{
    HRESULT __stdcall get_PositionDilutionOfPrecision(::IUnknown** ppValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppValue = detach_abi(this->shim().PositionDilutionOfPrecision());
            return S_OK;
        }
        catch (...)
        {
            *ppValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalDilutionOfPrecision(::IUnknown** ppValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppValue = detach_abi(this->shim().HorizontalDilutionOfPrecision());
            return S_OK;
        }
        catch (...)
        {
            *ppValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalDilutionOfPrecision(::IUnknown** ppValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppValue = detach_abi(this->shim().VerticalDilutionOfPrecision());
            return S_OK;
        }
        catch (...)
        {
            *ppValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeocoordinateWithPoint> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinateWithPoint>
{
    HRESULT __stdcall get_Point(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Point());
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
struct produce<D, Windows::Devices::Geolocation::IGeocoordinateWithPositionData> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinateWithPositionData>
{
    HRESULT __stdcall get_PositionSource(abi_t<Windows::Devices::Geolocation::PositionSource>* pValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pValue = detach_abi(this->shim().PositionSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SatelliteData(::IUnknown** ppValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppValue = detach_abi(this->shim().SatelliteData());
            return S_OK;
        }
        catch (...)
        {
            *ppValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
{
    HRESULT __stdcall get_PositionSourceTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionSourceTimestamp());
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
struct produce<D, Windows::Devices::Geolocation::IGeolocator> : produce_base<D, Windows::Devices::Geolocation::IGeolocator>
{
    HRESULT __stdcall get_DesiredAccuracy(abi_t<Windows::Devices::Geolocation::PositionAccuracy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredAccuracy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredAccuracy(abi_t<Windows::Devices::Geolocation::PositionAccuracy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredAccuracy(*reinterpret_cast<Windows::Devices::Geolocation::PositionAccuracy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MovementThreshold(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MovementThreshold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MovementThreshold(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MovementThreshold(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReportInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInterval(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocationStatus(abi_t<Windows::Devices::Geolocation::PositionStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocationStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGeopositionAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetGeopositionAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGeopositionAsyncWithAgeAndTimeout(abi_t<Windows::Foundation::TimeSpan> maximumAge, abi_t<Windows::Foundation::TimeSpan> timeout, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetGeopositionAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&maximumAge), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PositionChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PositionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeolocator2> : produce_base<D, Windows::Devices::Geolocation::IGeolocator2>
{
    HRESULT __stdcall AllowFallbackToConsentlessPositions() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowFallbackToConsentlessPositions();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeolocatorStatics> : produce_base<D, Windows::Devices::Geolocation::IGeolocatorStatics>
{
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

    HRESULT __stdcall GetGeopositionHistoryAsync(abi_t<Windows::Foundation::DateTime> startTime, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetGeopositionHistoryAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGeopositionHistoryWithDurationAsync(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::TimeSpan> duration, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetGeopositionHistoryAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
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
struct produce<D, Windows::Devices::Geolocation::IGeolocatorStatics2> : produce_base<D, Windows::Devices::Geolocation::IGeolocatorStatics2>
{
    HRESULT __stdcall get_IsDefaultGeopositionRecommended(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDefaultGeopositionRecommended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultGeoposition(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultGeoposition(*reinterpret_cast<Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultGeoposition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultGeoposition());
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
struct produce<D, Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy> : produce_base<D, Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>
{
    HRESULT __stdcall get_DesiredAccuracyInMeters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredAccuracyInMeters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredAccuracyInMeters(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredAccuracyInMeters(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeopath> : produce_base<D, Windows::Devices::Geolocation::IGeopath>
{
    HRESULT __stdcall get_Positions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Positions());
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
struct produce<D, Windows::Devices::Geolocation::IGeopathFactory> : produce_base<D, Windows::Devices::Geolocation::IGeopathFactory>
{
    HRESULT __stdcall Create(::IUnknown* positions, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> const*>(&positions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAltitudeReference(::IUnknown* positions, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithAltitudeReference(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> const*>(&positions), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeReferenceSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAltitudeReferenceAndSpatialReference(::IUnknown* positions, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, uint32_t spatialReferenceId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithAltitudeReferenceAndSpatialReference(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> const*>(&positions), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeReferenceSystem), spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeopoint> : produce_base<D, Windows::Devices::Geolocation::IGeopoint>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeopointFactory> : produce_base<D, Windows::Devices::Geolocation::IGeopointFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&position)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAltitudeReferenceSystem(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithAltitudeReferenceSystem(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&position), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeReferenceSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAltitudeReferenceSystemAndSpatialReferenceId(abi_t<Windows::Devices::Geolocation::BasicGeoposition> position, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> altitudeReferenceSystem, uint32_t spatialReferenceId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithAltitudeReferenceSystemAndSpatialReferenceId(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&position), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&altitudeReferenceSystem), spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeoposition> : produce_base<D, Windows::Devices::Geolocation::IGeoposition>
{
    HRESULT __stdcall get_Coordinate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Coordinate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CivicAddress(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CivicAddress());
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
struct produce<D, Windows::Devices::Geolocation::IGeoposition2> : produce_base<D, Windows::Devices::Geolocation::IGeoposition2>
{
    HRESULT __stdcall get_VenueData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VenueData());
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
struct produce<D, Windows::Devices::Geolocation::IGeoshape> : produce_base<D, Windows::Devices::Geolocation::IGeoshape>
{
    HRESULT __stdcall get_GeoshapeType(abi_t<Windows::Devices::Geolocation::GeoshapeType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GeoshapeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpatialReferenceId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpatialReferenceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AltitudeReferenceSystem(abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AltitudeReferenceSystem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IPositionChangedEventArgs> : produce_base<D, Windows::Devices::Geolocation::IPositionChangedEventArgs>
{
    HRESULT __stdcall get_Position(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
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
struct produce<D, Windows::Devices::Geolocation::IStatusChangedEventArgs> : produce_base<D, Windows::Devices::Geolocation::IStatusChangedEventArgs>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Geolocation::PositionStatus>* value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IVenueData> : produce_base<D, Windows::Devices::Geolocation::IVenueData>
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

    HRESULT __stdcall get_Level(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Level());
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

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

inline GeoboundingBox::GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner) :
    GeoboundingBox(get_activation_factory<GeoboundingBox, Windows::Devices::Geolocation::IGeoboundingBoxFactory>().Create(northwestCorner, southeastCorner))
{}

inline GeoboundingBox::GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) :
    GeoboundingBox(get_activation_factory<GeoboundingBox, Windows::Devices::Geolocation::IGeoboundingBoxFactory>().CreateWithAltitudeReference(northwestCorner, southeastCorner, altitudeReferenceSystem))
{}

inline GeoboundingBox::GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) :
    GeoboundingBox(get_activation_factory<GeoboundingBox, Windows::Devices::Geolocation::IGeoboundingBoxFactory>().CreateWithAltitudeReferenceAndSpatialReference(northwestCorner, southeastCorner, altitudeReferenceSystem, spatialReferenceId))
{}

inline Windows::Devices::Geolocation::GeoboundingBox GeoboundingBox::TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions)
{
    return get_activation_factory<GeoboundingBox, Windows::Devices::Geolocation::IGeoboundingBoxStatics>().TryCompute(positions);
}

inline Windows::Devices::Geolocation::GeoboundingBox GeoboundingBox::TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem)
{
    return get_activation_factory<GeoboundingBox, Windows::Devices::Geolocation::IGeoboundingBoxStatics>().TryCompute(positions, altitudeRefSystem);
}

inline Windows::Devices::Geolocation::GeoboundingBox GeoboundingBox::TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem, uint32_t spatialReferenceId)
{
    return get_activation_factory<GeoboundingBox, Windows::Devices::Geolocation::IGeoboundingBoxStatics>().TryCompute(positions, altitudeRefSystem, spatialReferenceId);
}

inline Geocircle::Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius) :
    Geocircle(get_activation_factory<Geocircle, Windows::Devices::Geolocation::IGeocircleFactory>().Create(position, radius))
{}

inline Geocircle::Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) :
    Geocircle(get_activation_factory<Geocircle, Windows::Devices::Geolocation::IGeocircleFactory>().CreateWithAltitudeReferenceSystem(position, radius, altitudeReferenceSystem))
{}

inline Geocircle::Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) :
    Geocircle(get_activation_factory<Geocircle, Windows::Devices::Geolocation::IGeocircleFactory>().CreateWithAltitudeReferenceSystemAndSpatialReferenceId(position, radius, altitudeReferenceSystem, spatialReferenceId))
{}

inline Geolocator::Geolocator() :
    Geolocator(activate_instance<Geolocator>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::GeolocationAccessStatus> Geolocator::RequestAccessAsync()
{
    return get_activation_factory<Geolocator, Windows::Devices::Geolocation::IGeolocatorStatics>().RequestAccessAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> Geolocator::GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime)
{
    return get_activation_factory<Geolocator, Windows::Devices::Geolocation::IGeolocatorStatics>().GetGeopositionHistoryAsync(startTime);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> Geolocator::GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration)
{
    return get_activation_factory<Geolocator, Windows::Devices::Geolocation::IGeolocatorStatics>().GetGeopositionHistoryAsync(startTime, duration);
}

inline bool Geolocator::IsDefaultGeopositionRecommended()
{
    return get_activation_factory<Geolocator, Windows::Devices::Geolocation::IGeolocatorStatics2>().IsDefaultGeopositionRecommended();
}

inline void Geolocator::DefaultGeoposition(optional<Windows::Devices::Geolocation::BasicGeoposition> const& value)
{
    get_activation_factory<Geolocator, Windows::Devices::Geolocation::IGeolocatorStatics2>().DefaultGeoposition(value);
}

inline Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> Geolocator::DefaultGeoposition()
{
    return get_activation_factory<Geolocator, Windows::Devices::Geolocation::IGeolocatorStatics2>().DefaultGeoposition();
}

inline Geopath::Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions) :
    Geopath(get_activation_factory<Geopath, Windows::Devices::Geolocation::IGeopathFactory>().Create(positions))
{}

inline Geopath::Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) :
    Geopath(get_activation_factory<Geopath, Windows::Devices::Geolocation::IGeopathFactory>().CreateWithAltitudeReference(positions, altitudeReferenceSystem))
{}

inline Geopath::Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) :
    Geopath(get_activation_factory<Geopath, Windows::Devices::Geolocation::IGeopathFactory>().CreateWithAltitudeReferenceAndSpatialReference(positions, altitudeReferenceSystem, spatialReferenceId))
{}

inline Geopoint::Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position) :
    Geopoint(get_activation_factory<Geopoint, Windows::Devices::Geolocation::IGeopointFactory>().Create(position))
{}

inline Geopoint::Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) :
    Geopoint(get_activation_factory<Geopoint, Windows::Devices::Geolocation::IGeopointFactory>().CreateWithAltitudeReferenceSystem(position, altitudeReferenceSystem))
{}

inline Geopoint::Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) :
    Geopoint(get_activation_factory<Geopoint, Windows::Devices::Geolocation::IGeopointFactory>().CreateWithAltitudeReferenceSystemAndSpatialReferenceId(position, altitudeReferenceSystem, spatialReferenceId))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Geolocation::ICivicAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::ICivicAddress> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeoboundingBox> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeoboundingBox> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeoboundingBoxFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeoboundingBoxFactory> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeoboundingBoxStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeoboundingBoxStatics> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeocircle> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeocircle> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeocircleFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeocircleFactory> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeocoordinate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeocoordinate> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeocoordinateSatelliteData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeocoordinateSatelliteData> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeocoordinateWithPoint> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeocoordinateWithPoint> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeocoordinateWithPositionData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeocoordinateWithPositionData> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeolocator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeolocator> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeolocator2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeolocator2> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeolocatorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeolocatorStatics> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeolocatorStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeolocatorStatics2> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeopath> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeopath> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeopathFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeopathFactory> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeopoint> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeopoint> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeopointFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeopointFactory> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeoposition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeoposition> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeoposition2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeoposition2> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IGeoshape> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IGeoshape> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IPositionChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IPositionChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::IVenueData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::IVenueData> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::CivicAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::CivicAddress> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::GeoboundingBox> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::GeoboundingBox> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geocircle> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geocircle> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geocoordinate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geocoordinate> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::GeocoordinateSatelliteData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::GeocoordinateSatelliteData> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geolocator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geolocator> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geopath> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geopath> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geopoint> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geopoint> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geoposition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geoposition> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::PositionChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::PositionChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::StatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::StatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::VenueData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::VenueData> {};

}

WINRT_WARNING_POP
