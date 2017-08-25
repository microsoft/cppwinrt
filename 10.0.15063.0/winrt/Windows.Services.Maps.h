// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Services.Maps.2.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Services_Maps_IEnhancedWaypoint<D>::Point() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IEnhancedWaypoint)->get_Point(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::WaypointKind consume_Windows_Services_Maps_IEnhancedWaypoint<D>::Kind() const
{
    Windows::Services::Maps::WaypointKind value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IEnhancedWaypoint)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::EnhancedWaypoint consume_Windows_Services_Maps_IEnhancedWaypointFactory<D>::Create(Windows::Devices::Geolocation::Geopoint const& point, Windows::Services::Maps::WaypointKind const& kind) const
{
    Windows::Services::Maps::EnhancedWaypoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IEnhancedWaypointFactory)->Create(get_abi(point), get_abi(kind), put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::ManeuverWarningKind consume_Windows_Services_Maps_IManeuverWarning<D>::Kind() const
{
    Windows::Services::Maps::ManeuverWarningKind value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IManeuverWarning)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::ManeuverWarningSeverity consume_Windows_Services_Maps_IManeuverWarning<D>::Severity() const
{
    Windows::Services::Maps::ManeuverWarningSeverity value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IManeuverWarning)->get_Severity(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::BuildingName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_BuildingName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::BuildingFloor() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_BuildingFloor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::BuildingRoom() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_BuildingRoom(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::BuildingWing() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_BuildingWing(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::StreetNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_StreetNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::Street() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_Street(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::Neighborhood() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_Neighborhood(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::District() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_District(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::Town() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_Town(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::Region() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_Region(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::RegionCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_RegionCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::Country() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_Country(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::CountryCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_CountryCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::PostCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_PostCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress<D>::Continent() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress)->get_Continent(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapAddress2<D>::FormattedAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapAddress2)->get_FormattedAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Services_Maps_IMapLocation<D>::Point() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocation)->get_Point(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapLocation<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocation)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapLocation<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocation)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapAddress consume_Windows_Services_Maps_IMapLocation<D>::Address() const
{
    Windows::Services::Maps::MapAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocation)->get_Address(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapLocation> consume_Windows_Services_Maps_IMapLocationFinderResult<D>::Locations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocationFinderResult)->get_Locations(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapLocationFinderStatus consume_Windows_Services_Maps_IMapLocationFinderResult<D>::Status() const
{
    Windows::Services::Maps::MapLocationFinderStatus value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocationFinderResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> consume_Windows_Services_Maps_IMapLocationFinderStatics<D>::FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocationFinderStatics)->FindLocationsAtAsync(get_abi(queryPoint), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> consume_Windows_Services_Maps_IMapLocationFinderStatics<D>::FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocationFinderStatics)->FindLocationsAsync(get_abi(searchText), get_abi(referencePoint), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> consume_Windows_Services_Maps_IMapLocationFinderStatics<D>::FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint, uint32_t maxCount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocationFinderStatics)->FindLocationsWithMaxCountAsync(get_abi(searchText), get_abi(referencePoint), maxCount, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> consume_Windows_Services_Maps_IMapLocationFinderStatics2<D>::FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy const& accuracy) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapLocationFinderStatics2)->FindLocationsAtWithAccuracyAsync(get_abi(queryPoint), get_abi(accuracy), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Services_Maps_IMapManagerStatics<D>::ShowDownloadedMapsUI() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapManagerStatics)->ShowDownloadedMapsUI());
}

template <typename D> void consume_Windows_Services_Maps_IMapManagerStatics<D>::ShowMapsUpdateUI() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapManagerStatics)->ShowMapsUpdateUI());
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Services_Maps_IMapRoute<D>::BoundingBox() const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute)->get_BoundingBox(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Services_Maps_IMapRoute<D>::LengthInMeters() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute)->get_LengthInMeters(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_IMapRoute<D>::EstimatedDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute)->get_EstimatedDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_Services_Maps_IMapRoute<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute)->get_Path(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteLeg> consume_Windows_Services_Maps_IMapRoute<D>::Legs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteLeg> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute)->get_Legs(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Maps_IMapRoute<D>::IsTrafficBased() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute)->get_IsTrafficBased(&value));
    return value;
}

template <typename D> Windows::Services::Maps::MapRouteRestrictions consume_Windows_Services_Maps_IMapRoute2<D>::ViolatedRestrictions() const
{
    Windows::Services::Maps::MapRouteRestrictions value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute2)->get_ViolatedRestrictions(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Maps_IMapRoute2<D>::HasBlockedRoads() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute2)->get_HasBlockedRoads(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_IMapRoute3<D>::DurationWithoutTraffic() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute3)->get_DurationWithoutTraffic(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::TrafficCongestion consume_Windows_Services_Maps_IMapRoute3<D>::TrafficCongestion() const
{
    Windows::Services::Maps::TrafficCongestion value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRoute3)->get_TrafficCongestion(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>::MaxAlternateRouteCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteDrivingOptions)->get_MaxAlternateRouteCount(&value));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>::MaxAlternateRouteCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteDrivingOptions)->put_MaxAlternateRouteCount(value));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>::InitialHeading() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteDrivingOptions)->get_InitialHeading(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>::InitialHeading(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteDrivingOptions)->put_InitialHeading(get_abi(value)));
}

template <typename D> Windows::Services::Maps::MapRouteOptimization consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>::RouteOptimization() const
{
    Windows::Services::Maps::MapRouteOptimization value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteDrivingOptions)->get_RouteOptimization(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>::RouteOptimization(Windows::Services::Maps::MapRouteOptimization const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteDrivingOptions)->put_RouteOptimization(get_abi(value)));
}

template <typename D> Windows::Services::Maps::MapRouteRestrictions consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>::RouteRestrictions() const
{
    Windows::Services::Maps::MapRouteRestrictions value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteDrivingOptions)->get_RouteRestrictions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>::RouteRestrictions(Windows::Services::Maps::MapRouteRestrictions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteDrivingOptions)->put_RouteRestrictions(get_abi(value)));
}

template <typename D> Windows::Services::Maps::MapRoute consume_Windows_Services_Maps_IMapRouteFinderResult<D>::Route() const
{
    Windows::Services::Maps::MapRoute value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderResult)->get_Route(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapRouteFinderStatus consume_Windows_Services_Maps_IMapRouteFinderResult<D>::Status() const
{
    Windows::Services::Maps::MapRouteFinderStatus value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRoute> consume_Windows_Services_Maps_IMapRouteFinderResult2<D>::AlternateRoutes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRoute> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderResult2)->get_AlternateRoutes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetDrivingRouteAsync(get_abi(startPoint), get_abi(endPoint), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetDrivingRouteWithOptimizationAsync(get_abi(startPoint), get_abi(endPoint), get_abi(optimization), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetDrivingRouteWithOptimizationAndRestrictionsAsync(get_abi(startPoint), get_abi(endPoint), get_abi(optimization), get_abi(restrictions), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(get_abi(startPoint), get_abi(endPoint), get_abi(optimization), get_abi(restrictions), headingInDegrees, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetDrivingRouteFromWaypointsAsync(get_abi(wayPoints), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetDrivingRouteFromWaypointsAndOptimizationAsync(get_abi(wayPoints), get_abi(optimization), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(get_abi(wayPoints), get_abi(optimization), get_abi(restrictions), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(get_abi(wayPoints), get_abi(optimization), get_abi(restrictions), headingInDegrees, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetWalkingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetWalkingRouteAsync(get_abi(startPoint), get_abi(endPoint), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics<D>::GetWalkingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics)->GetWalkingRouteFromWaypointsAsync(get_abi(wayPoints), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics2<D>::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteDrivingOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics2)->GetDrivingRouteWithOptionsAsync(get_abi(startPoint), get_abi(endPoint), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics3<D>::GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics3)->GetDrivingRouteFromEnhancedWaypointsAsync(get_abi(waypoints), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> consume_Windows_Services_Maps_IMapRouteFinderStatics3<D>::GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints, Windows::Services::Maps::MapRouteDrivingOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteFinderStatics3)->GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync(get_abi(waypoints), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Services_Maps_IMapRouteLeg<D>::BoundingBox() const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteLeg)->get_BoundingBox(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_Services_Maps_IMapRouteLeg<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteLeg)->get_Path(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Services_Maps_IMapRouteLeg<D>::LengthInMeters() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteLeg)->get_LengthInMeters(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_IMapRouteLeg<D>::EstimatedDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteLeg)->get_EstimatedDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteManeuver> consume_Windows_Services_Maps_IMapRouteLeg<D>::Maneuvers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteManeuver> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteLeg)->get_Maneuvers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_IMapRouteLeg2<D>::DurationWithoutTraffic() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteLeg2)->get_DurationWithoutTraffic(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::TrafficCongestion consume_Windows_Services_Maps_IMapRouteLeg2<D>::TrafficCongestion() const
{
    Windows::Services::Maps::TrafficCongestion value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteLeg2)->get_TrafficCongestion(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Services_Maps_IMapRouteManeuver<D>::StartingPoint() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver)->get_StartingPoint(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Services_Maps_IMapRouteManeuver<D>::LengthInMeters() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver)->get_LengthInMeters(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapRouteManeuver<D>::InstructionText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver)->get_InstructionText(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapRouteManeuverKind consume_Windows_Services_Maps_IMapRouteManeuver<D>::Kind() const
{
    Windows::Services::Maps::MapRouteManeuverKind value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapRouteManeuver<D>::ExitNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver)->get_ExitNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapManeuverNotices consume_Windows_Services_Maps_IMapRouteManeuver<D>::ManeuverNotices() const
{
    Windows::Services::Maps::MapManeuverNotices value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver)->get_ManeuverNotices(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Services_Maps_IMapRouteManeuver2<D>::StartHeading() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver2)->get_StartHeading(&value));
    return value;
}

template <typename D> double consume_Windows_Services_Maps_IMapRouteManeuver2<D>::EndHeading() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver2)->get_EndHeading(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapRouteManeuver2<D>::StreetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver2)->get_StreetName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::ManeuverWarning> consume_Windows_Services_Maps_IMapRouteManeuver3<D>::Warnings() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::ManeuverWarning> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapRouteManeuver3)->get_Warnings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_IMapServiceStatics<D>::ServiceToken(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapServiceStatics)->put_ServiceToken(get_abi(value)));
}

template <typename D> hstring consume_Windows_Services_Maps_IMapServiceStatics<D>::ServiceToken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapServiceStatics)->get_ServiceToken(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapServiceStatics2<D>::WorldViewRegionCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapServiceStatics2)->get_WorldViewRegionCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_IMapServiceStatics3<D>::DataAttributions() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapServiceStatics3)->get_DataAttributions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_IMapServiceStatics4<D>::DataUsagePreference(Windows::Services::Maps::MapServiceDataUsagePreference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapServiceStatics4)->put_DataUsagePreference(get_abi(value)));
}

template <typename D> Windows::Services::Maps::MapServiceDataUsagePreference consume_Windows_Services_Maps_IMapServiceStatics4<D>::DataUsagePreference() const
{
    Windows::Services::Maps::MapServiceDataUsagePreference value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::IMapServiceStatics4)->get_DataUsagePreference(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Services::Maps::IEnhancedWaypoint> : produce_base<D, Windows::Services::Maps::IEnhancedWaypoint>
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

    HRESULT __stdcall get_Kind(abi_t<Windows::Services::Maps::WaypointKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IEnhancedWaypointFactory> : produce_base<D, Windows::Services::Maps::IEnhancedWaypointFactory>
{
    HRESULT __stdcall Create(::IUnknown* point, abi_t<Windows::Services::Maps::WaypointKind> kind, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&point), *reinterpret_cast<Windows::Services::Maps::WaypointKind const*>(&kind)));
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
struct produce<D, Windows::Services::Maps::IManeuverWarning> : produce_base<D, Windows::Services::Maps::IManeuverWarning>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Services::Maps::ManeuverWarningKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Severity(abi_t<Windows::Services::Maps::ManeuverWarningSeverity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Severity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IMapAddress> : produce_base<D, Windows::Services::Maps::IMapAddress>
{
    HRESULT __stdcall get_BuildingName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BuildingName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BuildingFloor(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BuildingFloor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BuildingRoom(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BuildingRoom());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BuildingWing(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BuildingWing());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreetNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreetNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Street(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Street());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Neighborhood(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Neighborhood());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_District(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().District());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Town(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Town());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Region(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Region());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegionCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RegionCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_CountryCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CountryCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PostCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Continent(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Continent());
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
struct produce<D, Windows::Services::Maps::IMapAddress2> : produce_base<D, Windows::Services::Maps::IMapAddress2>
{
    HRESULT __stdcall get_FormattedAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormattedAddress());
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
struct produce<D, Windows::Services::Maps::IMapLocation> : produce_base<D, Windows::Services::Maps::IMapLocation>
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

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Address(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Address());
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
struct produce<D, Windows::Services::Maps::IMapLocationFinderResult> : produce_base<D, Windows::Services::Maps::IMapLocationFinderResult>
{
    HRESULT __stdcall get_Locations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Locations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Services::Maps::MapLocationFinderStatus>* value) noexcept override
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
struct produce<D, Windows::Services::Maps::IMapLocationFinderStatics> : produce_base<D, Windows::Services::Maps::IMapLocationFinderStatics>
{
    HRESULT __stdcall FindLocationsAtAsync(::IUnknown* queryPoint, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindLocationsAtAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&queryPoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindLocationsAsync(HSTRING searchText, ::IUnknown* referencePoint, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindLocationsAsync(*reinterpret_cast<hstring const*>(&searchText), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&referencePoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindLocationsWithMaxCountAsync(HSTRING searchText, ::IUnknown* referencePoint, uint32_t maxCount, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindLocationsAsync(*reinterpret_cast<hstring const*>(&searchText), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&referencePoint), maxCount));
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
struct produce<D, Windows::Services::Maps::IMapLocationFinderStatics2> : produce_base<D, Windows::Services::Maps::IMapLocationFinderStatics2>
{
    HRESULT __stdcall FindLocationsAtWithAccuracyAsync(::IUnknown* queryPoint, abi_t<Windows::Services::Maps::MapLocationDesiredAccuracy> accuracy, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindLocationsAtAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&queryPoint), *reinterpret_cast<Windows::Services::Maps::MapLocationDesiredAccuracy const*>(&accuracy)));
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
struct produce<D, Windows::Services::Maps::IMapManagerStatics> : produce_base<D, Windows::Services::Maps::IMapManagerStatics>
{
    HRESULT __stdcall ShowDownloadedMapsUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowDownloadedMapsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowMapsUpdateUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowMapsUpdateUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IMapRoute> : produce_base<D, Windows::Services::Maps::IMapRoute>
{
    HRESULT __stdcall get_BoundingBox(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LengthInMeters(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LengthInMeters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EstimatedDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Legs(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Legs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTrafficBased(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTrafficBased());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IMapRoute2> : produce_base<D, Windows::Services::Maps::IMapRoute2>
{
    HRESULT __stdcall get_ViolatedRestrictions(abi_t<Windows::Services::Maps::MapRouteRestrictions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViolatedRestrictions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasBlockedRoads(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasBlockedRoads());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IMapRoute3> : produce_base<D, Windows::Services::Maps::IMapRoute3>
{
    HRESULT __stdcall get_DurationWithoutTraffic(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DurationWithoutTraffic());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficCongestion(abi_t<Windows::Services::Maps::TrafficCongestion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrafficCongestion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IMapRouteDrivingOptions> : produce_base<D, Windows::Services::Maps::IMapRouteDrivingOptions>
{
    HRESULT __stdcall get_MaxAlternateRouteCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxAlternateRouteCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAlternateRouteCount(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxAlternateRouteCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialHeading(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InitialHeading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialHeading(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialHeading(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RouteOptimization(abi_t<Windows::Services::Maps::MapRouteOptimization>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RouteOptimization());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RouteOptimization(abi_t<Windows::Services::Maps::MapRouteOptimization> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RouteOptimization(*reinterpret_cast<Windows::Services::Maps::MapRouteOptimization const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RouteRestrictions(abi_t<Windows::Services::Maps::MapRouteRestrictions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RouteRestrictions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RouteRestrictions(abi_t<Windows::Services::Maps::MapRouteRestrictions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RouteRestrictions(*reinterpret_cast<Windows::Services::Maps::MapRouteRestrictions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IMapRouteFinderResult> : produce_base<D, Windows::Services::Maps::IMapRouteFinderResult>
{
    HRESULT __stdcall get_Route(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Route());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Services::Maps::MapRouteFinderStatus>* value) noexcept override
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
struct produce<D, Windows::Services::Maps::IMapRouteFinderResult2> : produce_base<D, Windows::Services::Maps::IMapRouteFinderResult2>
{
    HRESULT __stdcall get_AlternateRoutes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateRoutes());
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
struct produce<D, Windows::Services::Maps::IMapRouteFinderStatics> : produce_base<D, Windows::Services::Maps::IMapRouteFinderStatics>
{
    HRESULT __stdcall GetDrivingRouteAsync(::IUnknown* startPoint, ::IUnknown* endPoint, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&startPoint), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&endPoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDrivingRouteWithOptimizationAsync(::IUnknown* startPoint, ::IUnknown* endPoint, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&startPoint), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&endPoint), *reinterpret_cast<Windows::Services::Maps::MapRouteOptimization const*>(&optimization)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDrivingRouteWithOptimizationAndRestrictionsAsync(::IUnknown* startPoint, ::IUnknown* endPoint, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, abi_t<Windows::Services::Maps::MapRouteRestrictions> restrictions, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&startPoint), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&endPoint), *reinterpret_cast<Windows::Services::Maps::MapRouteOptimization const*>(&optimization), *reinterpret_cast<Windows::Services::Maps::MapRouteRestrictions const*>(&restrictions)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(::IUnknown* startPoint, ::IUnknown* endPoint, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, abi_t<Windows::Services::Maps::MapRouteRestrictions> restrictions, double headingInDegrees, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&startPoint), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&endPoint), *reinterpret_cast<Windows::Services::Maps::MapRouteOptimization const*>(&optimization), *reinterpret_cast<Windows::Services::Maps::MapRouteRestrictions const*>(&restrictions), headingInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDrivingRouteFromWaypointsAsync(::IUnknown* wayPoints, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteFromWaypointsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&wayPoints)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDrivingRouteFromWaypointsAndOptimizationAsync(::IUnknown* wayPoints, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteFromWaypointsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&wayPoints), *reinterpret_cast<Windows::Services::Maps::MapRouteOptimization const*>(&optimization)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(::IUnknown* wayPoints, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, abi_t<Windows::Services::Maps::MapRouteRestrictions> restrictions, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteFromWaypointsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&wayPoints), *reinterpret_cast<Windows::Services::Maps::MapRouteOptimization const*>(&optimization), *reinterpret_cast<Windows::Services::Maps::MapRouteRestrictions const*>(&restrictions)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(::IUnknown* wayPoints, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, abi_t<Windows::Services::Maps::MapRouteRestrictions> restrictions, double headingInDegrees, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteFromWaypointsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&wayPoints), *reinterpret_cast<Windows::Services::Maps::MapRouteOptimization const*>(&optimization), *reinterpret_cast<Windows::Services::Maps::MapRouteRestrictions const*>(&restrictions), headingInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetWalkingRouteAsync(::IUnknown* startPoint, ::IUnknown* endPoint, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetWalkingRouteAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&startPoint), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&endPoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetWalkingRouteFromWaypointsAsync(::IUnknown* wayPoints, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetWalkingRouteFromWaypointsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&wayPoints)));
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
struct produce<D, Windows::Services::Maps::IMapRouteFinderStatics2> : produce_base<D, Windows::Services::Maps::IMapRouteFinderStatics2>
{
    HRESULT __stdcall GetDrivingRouteWithOptionsAsync(::IUnknown* startPoint, ::IUnknown* endPoint, ::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&startPoint), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&endPoint), *reinterpret_cast<Windows::Services::Maps::MapRouteDrivingOptions const*>(&options)));
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
struct produce<D, Windows::Services::Maps::IMapRouteFinderStatics3> : produce_base<D, Windows::Services::Maps::IMapRouteFinderStatics3>
{
    HRESULT __stdcall GetDrivingRouteFromEnhancedWaypointsAsync(::IUnknown* waypoints, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteFromEnhancedWaypointsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Maps::EnhancedWaypoint> const*>(&waypoints)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync(::IUnknown* waypoints, ::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDrivingRouteFromEnhancedWaypointsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Maps::EnhancedWaypoint> const*>(&waypoints), *reinterpret_cast<Windows::Services::Maps::MapRouteDrivingOptions const*>(&options)));
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
struct produce<D, Windows::Services::Maps::IMapRouteLeg> : produce_base<D, Windows::Services::Maps::IMapRouteLeg>
{
    HRESULT __stdcall get_BoundingBox(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LengthInMeters(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LengthInMeters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EstimatedDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maneuvers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Maneuvers());
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
struct produce<D, Windows::Services::Maps::IMapRouteLeg2> : produce_base<D, Windows::Services::Maps::IMapRouteLeg2>
{
    HRESULT __stdcall get_DurationWithoutTraffic(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DurationWithoutTraffic());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficCongestion(abi_t<Windows::Services::Maps::TrafficCongestion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrafficCongestion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IMapRouteManeuver> : produce_base<D, Windows::Services::Maps::IMapRouteManeuver>
{
    HRESULT __stdcall get_StartingPoint(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartingPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LengthInMeters(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LengthInMeters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstructionText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstructionText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::Services::Maps::MapRouteManeuverKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManeuverNotices(abi_t<Windows::Services::Maps::MapManeuverNotices>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManeuverNotices());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::IMapRouteManeuver2> : produce_base<D, Windows::Services::Maps::IMapRouteManeuver2>
{
    HRESULT __stdcall get_StartHeading(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartHeading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndHeading(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndHeading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreetName());
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
struct produce<D, Windows::Services::Maps::IMapRouteManeuver3> : produce_base<D, Windows::Services::Maps::IMapRouteManeuver3>
{
    HRESULT __stdcall get_Warnings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Warnings());
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
struct produce<D, Windows::Services::Maps::IMapServiceStatics> : produce_base<D, Windows::Services::Maps::IMapServiceStatics>
{
    HRESULT __stdcall put_ServiceToken(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceToken(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceToken(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceToken());
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
struct produce<D, Windows::Services::Maps::IMapServiceStatics2> : produce_base<D, Windows::Services::Maps::IMapServiceStatics2>
{
    HRESULT __stdcall get_WorldViewRegionCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WorldViewRegionCode());
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
struct produce<D, Windows::Services::Maps::IMapServiceStatics3> : produce_base<D, Windows::Services::Maps::IMapServiceStatics3>
{
    HRESULT __stdcall get_DataAttributions(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataAttributions());
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
struct produce<D, Windows::Services::Maps::IMapServiceStatics4> : produce_base<D, Windows::Services::Maps::IMapServiceStatics4>
{
    HRESULT __stdcall put_DataUsagePreference(abi_t<Windows::Services::Maps::MapServiceDataUsagePreference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataUsagePreference(*reinterpret_cast<Windows::Services::Maps::MapServiceDataUsagePreference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataUsagePreference(abi_t<Windows::Services::Maps::MapServiceDataUsagePreference>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataUsagePreference());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps {

inline EnhancedWaypoint::EnhancedWaypoint(Windows::Devices::Geolocation::Geopoint const& point, Windows::Services::Maps::WaypointKind const& kind) :
    EnhancedWaypoint(get_activation_factory<EnhancedWaypoint, Windows::Services::Maps::IEnhancedWaypointFactory>().Create(point, kind))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> MapLocationFinder::FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint)
{
    return get_activation_factory<MapLocationFinder, Windows::Services::Maps::IMapLocationFinderStatics>().FindLocationsAtAsync(queryPoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> MapLocationFinder::FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint)
{
    return get_activation_factory<MapLocationFinder, Windows::Services::Maps::IMapLocationFinderStatics>().FindLocationsAsync(searchText, referencePoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> MapLocationFinder::FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint, uint32_t maxCount)
{
    return get_activation_factory<MapLocationFinder, Windows::Services::Maps::IMapLocationFinderStatics>().FindLocationsAsync(searchText, referencePoint, maxCount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> MapLocationFinder::FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy const& accuracy)
{
    return get_activation_factory<MapLocationFinder, Windows::Services::Maps::IMapLocationFinderStatics2>().FindLocationsAtAsync(queryPoint, accuracy);
}

inline void MapManager::ShowDownloadedMapsUI()
{
    get_activation_factory<MapManager, Windows::Services::Maps::IMapManagerStatics>().ShowDownloadedMapsUI();
}

inline void MapManager::ShowMapsUpdateUI()
{
    get_activation_factory<MapManager, Windows::Services::Maps::IMapManagerStatics>().ShowMapsUpdateUI();
}

inline MapRouteDrivingOptions::MapRouteDrivingOptions() :
    MapRouteDrivingOptions(activate_instance<MapRouteDrivingOptions>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetDrivingRouteAsync(startPoint, endPoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetDrivingRouteAsync(startPoint, endPoint, optimization);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetDrivingRouteAsync(startPoint, endPoint, optimization, restrictions);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetDrivingRouteAsync(startPoint, endPoint, optimization, restrictions, headingInDegrees);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetDrivingRouteFromWaypointsAsync(wayPoints);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetDrivingRouteFromWaypointsAsync(wayPoints, optimization);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetDrivingRouteFromWaypointsAsync(wayPoints, optimization, restrictions);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetDrivingRouteFromWaypointsAsync(wayPoints, optimization, restrictions, headingInDegrees);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetWalkingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetWalkingRouteAsync(startPoint, endPoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetWalkingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics>().GetWalkingRouteFromWaypointsAsync(wayPoints);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteDrivingOptions const& options)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics2>().GetDrivingRouteAsync(startPoint, endPoint, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics3>().GetDrivingRouteFromEnhancedWaypointsAsync(waypoints);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints, Windows::Services::Maps::MapRouteDrivingOptions const& options)
{
    return get_activation_factory<MapRouteFinder, Windows::Services::Maps::IMapRouteFinderStatics3>().GetDrivingRouteFromEnhancedWaypointsAsync(waypoints, options);
}

inline void MapService::ServiceToken(param::hstring const& value)
{
    get_activation_factory<MapService, Windows::Services::Maps::IMapServiceStatics>().ServiceToken(value);
}

inline hstring MapService::ServiceToken()
{
    return get_activation_factory<MapService, Windows::Services::Maps::IMapServiceStatics>().ServiceToken();
}

inline hstring MapService::WorldViewRegionCode()
{
    return get_activation_factory<MapService, Windows::Services::Maps::IMapServiceStatics2>().WorldViewRegionCode();
}

inline hstring MapService::DataAttributions()
{
    return get_activation_factory<MapService, Windows::Services::Maps::IMapServiceStatics3>().DataAttributions();
}

inline void MapService::DataUsagePreference(Windows::Services::Maps::MapServiceDataUsagePreference const& value)
{
    get_activation_factory<MapService, Windows::Services::Maps::IMapServiceStatics4>().DataUsagePreference(value);
}

inline Windows::Services::Maps::MapServiceDataUsagePreference MapService::DataUsagePreference()
{
    return get_activation_factory<MapService, Windows::Services::Maps::IMapServiceStatics4>().DataUsagePreference();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Services::Maps::IEnhancedWaypoint> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IEnhancedWaypoint> {};

template<> struct hash<winrt::Windows::Services::Maps::IEnhancedWaypointFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IEnhancedWaypointFactory> {};

template<> struct hash<winrt::Windows::Services::Maps::IManeuverWarning> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IManeuverWarning> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapAddress> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapAddress2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapAddress2> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapLocation> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapLocationFinderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapLocationFinderResult> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapLocationFinderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapLocationFinderStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapLocationFinderStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapLocationFinderStatics2> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapManagerStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRoute> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRoute> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRoute2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRoute2> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRoute3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRoute3> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteDrivingOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteDrivingOptions> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteFinderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteFinderResult> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteFinderResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteFinderResult2> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteFinderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteFinderStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteFinderStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteFinderStatics2> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteFinderStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteFinderStatics3> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteLeg> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteLeg> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteLeg2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteLeg2> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteManeuver> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteManeuver> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteManeuver2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteManeuver2> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapRouteManeuver3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapRouteManeuver3> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapServiceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapServiceStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapServiceStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapServiceStatics2> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapServiceStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapServiceStatics3> {};

template<> struct hash<winrt::Windows::Services::Maps::IMapServiceStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::IMapServiceStatics4> {};

template<> struct hash<winrt::Windows::Services::Maps::EnhancedWaypoint> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::EnhancedWaypoint> {};

template<> struct hash<winrt::Windows::Services::Maps::ManeuverWarning> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::ManeuverWarning> {};

template<> struct hash<winrt::Windows::Services::Maps::MapAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapAddress> {};

template<> struct hash<winrt::Windows::Services::Maps::MapLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapLocation> {};

template<> struct hash<winrt::Windows::Services::Maps::MapLocationFinder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapLocationFinder> {};

template<> struct hash<winrt::Windows::Services::Maps::MapLocationFinderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapLocationFinderResult> {};

template<> struct hash<winrt::Windows::Services::Maps::MapManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapManager> {};

template<> struct hash<winrt::Windows::Services::Maps::MapRoute> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapRoute> {};

template<> struct hash<winrt::Windows::Services::Maps::MapRouteDrivingOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapRouteDrivingOptions> {};

template<> struct hash<winrt::Windows::Services::Maps::MapRouteFinder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapRouteFinder> {};

template<> struct hash<winrt::Windows::Services::Maps::MapRouteFinderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapRouteFinderResult> {};

template<> struct hash<winrt::Windows::Services::Maps::MapRouteLeg> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapRouteLeg> {};

template<> struct hash<winrt::Windows::Services::Maps::MapRouteManeuver> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapRouteManeuver> {};

template<> struct hash<winrt::Windows::Services::Maps::MapService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::MapService> {};

}

WINRT_WARNING_POP
