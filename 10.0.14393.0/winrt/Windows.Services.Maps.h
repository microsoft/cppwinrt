// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Geolocation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Services.Maps.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Services::Maps::IMapAddress> : produce_base<D, Windows::Services::Maps::IMapAddress>
{
    HRESULT __stdcall get_BuildingName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BuildingName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BuildingFloor(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BuildingFloor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BuildingRoom(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BuildingRoom());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BuildingWing(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BuildingWing());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreetNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StreetNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Street(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Street());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Neighborhood(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Neighborhood());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_District(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().District());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Town(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Town());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Region(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Region());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegionCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RegionCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Country(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Country());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CountryCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CountryCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PostCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Continent(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Continent());
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
    HRESULT __stdcall get_FormattedAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FormattedAddress());
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
    HRESULT __stdcall get_Point(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Point());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Address(abi_arg_out<Windows::Services::Maps::IMapAddress> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Address());
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
    HRESULT __stdcall get_Locations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapLocation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Locations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Services::Maps::MapLocationFinderStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall abi_FindLocationsAtAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> queryPoint, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindLocationsAtAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&queryPoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindLocationsAsync(abi_arg_in<hstring> searchText, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> referencePoint, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindLocationsAsync(*reinterpret_cast<const hstring *>(&searchText), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&referencePoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindLocationsWithMaxCountAsync(abi_arg_in<hstring> searchText, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> referencePoint, uint32_t maxCount, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindLocationsAsync(*reinterpret_cast<const hstring *>(&searchText), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&referencePoint), maxCount));
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
    HRESULT __stdcall abi_FindLocationsAtWithAccuracyAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy accuracy, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindLocationsAtAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&queryPoint), accuracy));
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
    HRESULT __stdcall abi_ShowDownloadedMapsUI() noexcept override
    {
        try
        {
            this->shim().ShowDownloadedMapsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowMapsUpdateUI() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_BoundingBox(abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LengthInMeters(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LengthInMeters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EstimatedDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Legs(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteLeg>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Legs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTrafficBased(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTrafficBased());
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
    HRESULT __stdcall get_ViolatedRestrictions(Windows::Services::Maps::MapRouteRestrictions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViolatedRestrictions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasBlockedRoads(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasBlockedRoads());
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
    HRESULT __stdcall get_MaxAlternateRouteCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxAlternateRouteCount());
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
            this->shim().MaxAlternateRouteCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialHeading(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialHeading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialHeading(abi_arg_in<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            this->shim().InitialHeading(*reinterpret_cast<const Windows::Foundation::IReference<double> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RouteOptimization(Windows::Services::Maps::MapRouteOptimization * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RouteOptimization());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RouteOptimization(Windows::Services::Maps::MapRouteOptimization value) noexcept override
    {
        try
        {
            this->shim().RouteOptimization(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RouteRestrictions(Windows::Services::Maps::MapRouteRestrictions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RouteRestrictions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RouteRestrictions(Windows::Services::Maps::MapRouteRestrictions value) noexcept override
    {
        try
        {
            this->shim().RouteRestrictions(value);
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
    HRESULT __stdcall get_Route(abi_arg_out<Windows::Services::Maps::IMapRoute> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Route());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Services::Maps::MapRouteFinderStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall get_AlternateRoutes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRoute>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateRoutes());
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
    HRESULT __stdcall abi_GetDrivingRouteAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> startPoint, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> endPoint, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&startPoint), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&endPoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDrivingRouteWithOptimizationAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> startPoint, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> endPoint, Windows::Services::Maps::MapRouteOptimization optimization, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&startPoint), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&endPoint), optimization));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDrivingRouteWithOptimizationAndRestrictionsAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> startPoint, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> endPoint, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&startPoint), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&endPoint), optimization, restrictions));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> startPoint, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> endPoint, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&startPoint), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&endPoint), optimization, restrictions, headingInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDrivingRouteFromWaypointsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint>> wayPoints, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteFromWaypointsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> *>(&wayPoints)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDrivingRouteFromWaypointsAndOptimizationAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint>> wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteFromWaypointsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> *>(&wayPoints), optimization));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint>> wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteFromWaypointsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> *>(&wayPoints), optimization, restrictions));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint>> wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteFromWaypointsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> *>(&wayPoints), optimization, restrictions, headingInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetWalkingRouteAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> startPoint, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> endPoint, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetWalkingRouteAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&startPoint), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&endPoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetWalkingRouteFromWaypointsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint>> wayPoints, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetWalkingRouteFromWaypointsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> *>(&wayPoints)));
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
    HRESULT __stdcall abi_GetDrivingRouteWithOptionsAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> startPoint, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> endPoint, abi_arg_in<Windows::Services::Maps::IMapRouteDrivingOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDrivingRouteAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&startPoint), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&endPoint), *reinterpret_cast<const Windows::Services::Maps::MapRouteDrivingOptions *>(&options)));
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
    HRESULT __stdcall get_BoundingBox(abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LengthInMeters(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LengthInMeters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EstimatedDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maneuvers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteManeuver>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Maneuvers());
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
struct produce<D, Windows::Services::Maps::IMapRouteManeuver> : produce_base<D, Windows::Services::Maps::IMapRouteManeuver>
{
    HRESULT __stdcall get_StartingPoint(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartingPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LengthInMeters(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LengthInMeters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstructionText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstructionText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::Services::Maps::MapRouteManeuverKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManeuverNotices(Windows::Services::Maps::MapManeuverNotices * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManeuverNotices());
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
    HRESULT __stdcall get_StartHeading(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartHeading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndHeading(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndHeading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StreetName());
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
    HRESULT __stdcall put_ServiceToken(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ServiceToken(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceToken());
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
    HRESULT __stdcall get_WorldViewRegionCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WorldViewRegionCode());
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
    HRESULT __stdcall get_DataAttributions(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataAttributions());
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

namespace Windows::Services::Maps {

template <typename D> uint32_t impl_IMapRouteDrivingOptions<D>::MaxAlternateRouteCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMapRouteDrivingOptions &>(static_cast<const D &>(*this))->get_MaxAlternateRouteCount(&value));
    return value;
}

template <typename D> void impl_IMapRouteDrivingOptions<D>::MaxAlternateRouteCount(uint32_t value) const
{
    check_hresult(static_cast<const IMapRouteDrivingOptions &>(static_cast<const D &>(*this))->put_MaxAlternateRouteCount(value));
}

template <typename D> Windows::Foundation::IReference<double> impl_IMapRouteDrivingOptions<D>::InitialHeading() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IMapRouteDrivingOptions &>(static_cast<const D &>(*this))->get_InitialHeading(put(value)));
    return value;
}

template <typename D> void impl_IMapRouteDrivingOptions<D>::InitialHeading(const Windows::Foundation::IReference<double> & value) const
{
    check_hresult(static_cast<const IMapRouteDrivingOptions &>(static_cast<const D &>(*this))->put_InitialHeading(get(value)));
}

template <typename D> Windows::Services::Maps::MapRouteOptimization impl_IMapRouteDrivingOptions<D>::RouteOptimization() const
{
    Windows::Services::Maps::MapRouteOptimization value {};
    check_hresult(static_cast<const IMapRouteDrivingOptions &>(static_cast<const D &>(*this))->get_RouteOptimization(&value));
    return value;
}

template <typename D> void impl_IMapRouteDrivingOptions<D>::RouteOptimization(Windows::Services::Maps::MapRouteOptimization value) const
{
    check_hresult(static_cast<const IMapRouteDrivingOptions &>(static_cast<const D &>(*this))->put_RouteOptimization(value));
}

template <typename D> Windows::Services::Maps::MapRouteRestrictions impl_IMapRouteDrivingOptions<D>::RouteRestrictions() const
{
    Windows::Services::Maps::MapRouteRestrictions value {};
    check_hresult(static_cast<const IMapRouteDrivingOptions &>(static_cast<const D &>(*this))->get_RouteRestrictions(&value));
    return value;
}

template <typename D> void impl_IMapRouteDrivingOptions<D>::RouteRestrictions(Windows::Services::Maps::MapRouteRestrictions value) const
{
    check_hresult(static_cast<const IMapRouteDrivingOptions &>(static_cast<const D &>(*this))->put_RouteRestrictions(value));
}

template <typename D> hstring impl_IMapAddress<D>::BuildingName() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_BuildingName(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::BuildingFloor() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_BuildingFloor(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::BuildingRoom() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_BuildingRoom(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::BuildingWing() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_BuildingWing(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::StreetNumber() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_StreetNumber(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::Street() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_Street(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::Neighborhood() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_Neighborhood(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::District() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_District(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::Town() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_Town(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::Region() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_Region(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::RegionCode() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_RegionCode(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::Country() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_Country(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::CountryCode() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_CountryCode(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::PostCode() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_PostCode(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress<D>::Continent() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress &>(static_cast<const D &>(*this))->get_Continent(put(value)));
    return value;
}

template <typename D> hstring impl_IMapAddress2<D>::FormattedAddress() const
{
    hstring value;
    check_hresult(static_cast<const IMapAddress2 &>(static_cast<const D &>(*this))->get_FormattedAddress(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapLocation<D>::Point() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapLocation &>(static_cast<const D &>(*this))->get_Point(put(value)));
    return value;
}

template <typename D> hstring impl_IMapLocation<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IMapLocation &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IMapLocation<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IMapLocation &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapAddress impl_IMapLocation<D>::Address() const
{
    Windows::Services::Maps::MapAddress value { nullptr };
    check_hresult(static_cast<const IMapLocation &>(static_cast<const D &>(*this))->get_Address(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapLocation> impl_IMapLocationFinderResult<D>::Locations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapLocation> value;
    check_hresult(static_cast<const IMapLocationFinderResult &>(static_cast<const D &>(*this))->get_Locations(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapLocationFinderStatus impl_IMapLocationFinderResult<D>::Status() const
{
    Windows::Services::Maps::MapLocationFinderStatus value {};
    check_hresult(static_cast<const IMapLocationFinderResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapRouteManeuver<D>::StartingPoint() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapRouteManeuver &>(static_cast<const D &>(*this))->get_StartingPoint(put(value)));
    return value;
}

template <typename D> double impl_IMapRouteManeuver<D>::LengthInMeters() const
{
    double value {};
    check_hresult(static_cast<const IMapRouteManeuver &>(static_cast<const D &>(*this))->get_LengthInMeters(&value));
    return value;
}

template <typename D> hstring impl_IMapRouteManeuver<D>::InstructionText() const
{
    hstring value;
    check_hresult(static_cast<const IMapRouteManeuver &>(static_cast<const D &>(*this))->get_InstructionText(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapRouteManeuverKind impl_IMapRouteManeuver<D>::Kind() const
{
    Windows::Services::Maps::MapRouteManeuverKind value {};
    check_hresult(static_cast<const IMapRouteManeuver &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> hstring impl_IMapRouteManeuver<D>::ExitNumber() const
{
    hstring value;
    check_hresult(static_cast<const IMapRouteManeuver &>(static_cast<const D &>(*this))->get_ExitNumber(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapManeuverNotices impl_IMapRouteManeuver<D>::ManeuverNotices() const
{
    Windows::Services::Maps::MapManeuverNotices value {};
    check_hresult(static_cast<const IMapRouteManeuver &>(static_cast<const D &>(*this))->get_ManeuverNotices(&value));
    return value;
}

template <typename D> double impl_IMapRouteManeuver2<D>::StartHeading() const
{
    double value {};
    check_hresult(static_cast<const IMapRouteManeuver2 &>(static_cast<const D &>(*this))->get_StartHeading(&value));
    return value;
}

template <typename D> double impl_IMapRouteManeuver2<D>::EndHeading() const
{
    double value {};
    check_hresult(static_cast<const IMapRouteManeuver2 &>(static_cast<const D &>(*this))->get_EndHeading(&value));
    return value;
}

template <typename D> hstring impl_IMapRouteManeuver2<D>::StreetName() const
{
    hstring value;
    check_hresult(static_cast<const IMapRouteManeuver2 &>(static_cast<const D &>(*this))->get_StreetName(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IMapRouteLeg<D>::BoundingBox() const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IMapRouteLeg &>(static_cast<const D &>(*this))->get_BoundingBox(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IMapRouteLeg<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(static_cast<const IMapRouteLeg &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> double impl_IMapRouteLeg<D>::LengthInMeters() const
{
    double value {};
    check_hresult(static_cast<const IMapRouteLeg &>(static_cast<const D &>(*this))->get_LengthInMeters(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMapRouteLeg<D>::EstimatedDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMapRouteLeg &>(static_cast<const D &>(*this))->get_EstimatedDuration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteManeuver> impl_IMapRouteLeg<D>::Maneuvers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteManeuver> value;
    check_hresult(static_cast<const IMapRouteLeg &>(static_cast<const D &>(*this))->get_Maneuvers(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IMapRoute<D>::BoundingBox() const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IMapRoute &>(static_cast<const D &>(*this))->get_BoundingBox(put(value)));
    return value;
}

template <typename D> double impl_IMapRoute<D>::LengthInMeters() const
{
    double value {};
    check_hresult(static_cast<const IMapRoute &>(static_cast<const D &>(*this))->get_LengthInMeters(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMapRoute<D>::EstimatedDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMapRoute &>(static_cast<const D &>(*this))->get_EstimatedDuration(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IMapRoute<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(static_cast<const IMapRoute &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteLeg> impl_IMapRoute<D>::Legs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteLeg> value;
    check_hresult(static_cast<const IMapRoute &>(static_cast<const D &>(*this))->get_Legs(put(value)));
    return value;
}

template <typename D> bool impl_IMapRoute<D>::IsTrafficBased() const
{
    bool value {};
    check_hresult(static_cast<const IMapRoute &>(static_cast<const D &>(*this))->get_IsTrafficBased(&value));
    return value;
}

template <typename D> Windows::Services::Maps::MapRouteRestrictions impl_IMapRoute2<D>::ViolatedRestrictions() const
{
    Windows::Services::Maps::MapRouteRestrictions value {};
    check_hresult(static_cast<const IMapRoute2 &>(static_cast<const D &>(*this))->get_ViolatedRestrictions(&value));
    return value;
}

template <typename D> bool impl_IMapRoute2<D>::HasBlockedRoads() const
{
    bool value {};
    check_hresult(static_cast<const IMapRoute2 &>(static_cast<const D &>(*this))->get_HasBlockedRoads(&value));
    return value;
}

template <typename D> Windows::Services::Maps::MapRoute impl_IMapRouteFinderResult<D>::Route() const
{
    Windows::Services::Maps::MapRoute value { nullptr };
    check_hresult(static_cast<const IMapRouteFinderResult &>(static_cast<const D &>(*this))->get_Route(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapRouteFinderStatus impl_IMapRouteFinderResult<D>::Status() const
{
    Windows::Services::Maps::MapRouteFinderStatus value {};
    check_hresult(static_cast<const IMapRouteFinderResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRoute> impl_IMapRouteFinderResult2<D>::AlternateRoutes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRoute> value;
    check_hresult(static_cast<const IMapRouteFinderResult2 &>(static_cast<const D &>(*this))->get_AlternateRoutes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> impl_IMapLocationFinderStatics<D>::FindLocationsAtAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> result;
    check_hresult(static_cast<const IMapLocationFinderStatics &>(static_cast<const D &>(*this))->abi_FindLocationsAtAsync(get(queryPoint), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> impl_IMapLocationFinderStatics<D>::FindLocationsAsync(hstring_ref searchText, const Windows::Devices::Geolocation::Geopoint & referencePoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> result;
    check_hresult(static_cast<const IMapLocationFinderStatics &>(static_cast<const D &>(*this))->abi_FindLocationsAsync(get(searchText), get(referencePoint), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> impl_IMapLocationFinderStatics<D>::FindLocationsAsync(hstring_ref searchText, const Windows::Devices::Geolocation::Geopoint & referencePoint, uint32_t maxCount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> result;
    check_hresult(static_cast<const IMapLocationFinderStatics &>(static_cast<const D &>(*this))->abi_FindLocationsWithMaxCountAsync(get(searchText), get(referencePoint), maxCount, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> impl_IMapLocationFinderStatics2<D>::FindLocationsAtAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy accuracy) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> result;
    check_hresult(static_cast<const IMapLocationFinderStatics2 &>(static_cast<const D &>(*this))->abi_FindLocationsAtWithAccuracyAsync(get(queryPoint), accuracy, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetDrivingRouteAsync(get(startPoint), get(endPoint), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetDrivingRouteWithOptimizationAsync(get(startPoint), get(endPoint), optimization, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetDrivingRouteWithOptimizationAndRestrictionsAsync(get(startPoint), get(endPoint), optimization, restrictions, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(get(startPoint), get(endPoint), optimization, restrictions, headingInDegrees, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetDrivingRouteFromWaypointsAsync(get(wayPoints), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetDrivingRouteFromWaypointsAndOptimizationAsync(get(wayPoints), optimization, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(get(wayPoints), optimization, restrictions, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(get(wayPoints), optimization, restrictions, headingInDegrees, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetWalkingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetWalkingRouteAsync(get(startPoint), get(endPoint), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics<D>::GetWalkingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics &>(static_cast<const D &>(*this))->abi_GetWalkingRouteFromWaypointsAsync(get(wayPoints), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> impl_IMapRouteFinderStatics2<D>::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, const Windows::Services::Maps::MapRouteDrivingOptions & options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> result;
    check_hresult(static_cast<const IMapRouteFinderStatics2 &>(static_cast<const D &>(*this))->abi_GetDrivingRouteWithOptionsAsync(get(startPoint), get(endPoint), get(options), put(result)));
    return result;
}

template <typename D> void impl_IMapServiceStatics<D>::ServiceToken(hstring_ref value) const
{
    check_hresult(static_cast<const IMapServiceStatics &>(static_cast<const D &>(*this))->put_ServiceToken(get(value)));
}

template <typename D> hstring impl_IMapServiceStatics<D>::ServiceToken() const
{
    hstring value;
    check_hresult(static_cast<const IMapServiceStatics &>(static_cast<const D &>(*this))->get_ServiceToken(put(value)));
    return value;
}

template <typename D> void impl_IMapManagerStatics<D>::ShowDownloadedMapsUI() const
{
    check_hresult(static_cast<const IMapManagerStatics &>(static_cast<const D &>(*this))->abi_ShowDownloadedMapsUI());
}

template <typename D> void impl_IMapManagerStatics<D>::ShowMapsUpdateUI() const
{
    check_hresult(static_cast<const IMapManagerStatics &>(static_cast<const D &>(*this))->abi_ShowMapsUpdateUI());
}

template <typename D> hstring impl_IMapServiceStatics2<D>::WorldViewRegionCode() const
{
    hstring value;
    check_hresult(static_cast<const IMapServiceStatics2 &>(static_cast<const D &>(*this))->get_WorldViewRegionCode(put(value)));
    return value;
}

template <typename D> hstring impl_IMapServiceStatics3<D>::DataAttributions() const
{
    hstring value;
    check_hresult(static_cast<const IMapServiceStatics3 &>(static_cast<const D &>(*this))->get_DataAttributions(put(value)));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> MapLocationFinder::FindLocationsAtAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint)
{
    return get_activation_factory<MapLocationFinder, IMapLocationFinderStatics>().FindLocationsAtAsync(queryPoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> MapLocationFinder::FindLocationsAsync(hstring_ref searchText, const Windows::Devices::Geolocation::Geopoint & referencePoint)
{
    return get_activation_factory<MapLocationFinder, IMapLocationFinderStatics>().FindLocationsAsync(searchText, referencePoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> MapLocationFinder::FindLocationsAsync(hstring_ref searchText, const Windows::Devices::Geolocation::Geopoint & referencePoint, uint32_t maxCount)
{
    return get_activation_factory<MapLocationFinder, IMapLocationFinderStatics>().FindLocationsAsync(searchText, referencePoint, maxCount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> MapLocationFinder::FindLocationsAtAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy accuracy)
{
    return get_activation_factory<MapLocationFinder, IMapLocationFinderStatics2>().FindLocationsAtAsync(queryPoint, accuracy);
}

inline void MapManager::ShowDownloadedMapsUI()
{
    get_activation_factory<MapManager, IMapManagerStatics>().ShowDownloadedMapsUI();
}

inline void MapManager::ShowMapsUpdateUI()
{
    get_activation_factory<MapManager, IMapManagerStatics>().ShowMapsUpdateUI();
}

inline MapRouteDrivingOptions::MapRouteDrivingOptions() :
    MapRouteDrivingOptions(activate_instance<MapRouteDrivingOptions>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetDrivingRouteAsync(startPoint, endPoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetDrivingRouteAsync(startPoint, endPoint, optimization);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetDrivingRouteAsync(startPoint, endPoint, optimization, restrictions);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetDrivingRouteAsync(startPoint, endPoint, optimization, restrictions, headingInDegrees);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetDrivingRouteFromWaypointsAsync(wayPoints);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetDrivingRouteFromWaypointsAsync(wayPoints, optimization);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetDrivingRouteFromWaypointsAsync(wayPoints, optimization, restrictions);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetDrivingRouteFromWaypointsAsync(wayPoints, optimization, restrictions, headingInDegrees);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetWalkingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetWalkingRouteAsync(startPoint, endPoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetWalkingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics>().GetWalkingRouteFromWaypointsAsync(wayPoints);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> MapRouteFinder::GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, const Windows::Services::Maps::MapRouteDrivingOptions & options)
{
    return get_activation_factory<MapRouteFinder, IMapRouteFinderStatics2>().GetDrivingRouteAsync(startPoint, endPoint, options);
}

inline void MapService::ServiceToken(hstring_ref value)
{
    get_activation_factory<MapService, IMapServiceStatics>().ServiceToken(value);
}

inline hstring MapService::ServiceToken()
{
    return get_activation_factory<MapService, IMapServiceStatics>().ServiceToken();
}

inline hstring MapService::WorldViewRegionCode()
{
    return get_activation_factory<MapService, IMapServiceStatics2>().WorldViewRegionCode();
}

inline hstring MapService::DataAttributions()
{
    return get_activation_factory<MapService, IMapServiceStatics3>().DataAttributions();
}

}

}
