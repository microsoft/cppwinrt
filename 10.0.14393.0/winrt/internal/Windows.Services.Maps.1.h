// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Services.Maps.0.h"
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Devices.Geolocation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Maps {

struct __declspec(uuid("cfa7a973-a3b4-4494-b3ff-cba94db69699")) __declspec(novtable) IMapAddress : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BuildingName(hstring * value) = 0;
    virtual HRESULT __stdcall get_BuildingFloor(hstring * value) = 0;
    virtual HRESULT __stdcall get_BuildingRoom(hstring * value) = 0;
    virtual HRESULT __stdcall get_BuildingWing(hstring * value) = 0;
    virtual HRESULT __stdcall get_StreetNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_Street(hstring * value) = 0;
    virtual HRESULT __stdcall get_Neighborhood(hstring * value) = 0;
    virtual HRESULT __stdcall get_District(hstring * value) = 0;
    virtual HRESULT __stdcall get_Town(hstring * value) = 0;
    virtual HRESULT __stdcall get_Region(hstring * value) = 0;
    virtual HRESULT __stdcall get_RegionCode(hstring * value) = 0;
    virtual HRESULT __stdcall get_Country(hstring * value) = 0;
    virtual HRESULT __stdcall get_CountryCode(hstring * value) = 0;
    virtual HRESULT __stdcall get_PostCode(hstring * value) = 0;
    virtual HRESULT __stdcall get_Continent(hstring * value) = 0;
};

struct __declspec(uuid("75cd6df1-e5ad-45a9-bf40-6cf256c1dd13")) __declspec(novtable) IMapAddress2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FormattedAddress(hstring * value) = 0;
};

struct __declspec(uuid("3c073f57-0da4-42e8-9ee2-a96fcf2371dc")) __declspec(novtable) IMapLocation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Point(Windows::Devices::Geolocation::IGeopoint ** value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_Address(Windows::Services::Maps::IMapAddress ** value) = 0;
};

struct __declspec(uuid("43f1f179-e8cc-45f6-bed2-54ccbf965d9a")) __declspec(novtable) IMapLocationFinderResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Locations(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapLocation> ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Services::Maps::MapLocationFinderStatus * value) = 0;
};

struct __declspec(uuid("318adb5d-1c5d-4f35-a2df-aaca94959517")) __declspec(novtable) IMapLocationFinderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FindLocationsAtAsync(Windows::Devices::Geolocation::IGeopoint * queryPoint, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_FindLocationsAsync(hstring searchText, Windows::Devices::Geolocation::IGeopoint * referencePoint, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_FindLocationsWithMaxCountAsync(hstring searchText, Windows::Devices::Geolocation::IGeopoint * referencePoint, uint32_t maxCount, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> ** result) = 0;
};

struct __declspec(uuid("959a8b96-6485-4dfd-851a-33ac317e3af6")) __declspec(novtable) IMapLocationFinderStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FindLocationsAtWithAccuracyAsync(Windows::Devices::Geolocation::IGeopoint * queryPoint, winrt::Windows::Services::Maps::MapLocationDesiredAccuracy accuracy, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> ** result) = 0;
};

struct __declspec(uuid("37e3e515-82b4-4d54-8fd9-af2624b3011c")) __declspec(novtable) IMapManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ShowDownloadedMapsUI() = 0;
    virtual HRESULT __stdcall abi_ShowMapsUpdateUI() = 0;
};

struct __declspec(uuid("fb07b732-584d-4583-9c60-641fea274349")) __declspec(novtable) IMapRoute : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BoundingBox(Windows::Devices::Geolocation::IGeoboundingBox ** value) = 0;
    virtual HRESULT __stdcall get_LengthInMeters(double * value) = 0;
    virtual HRESULT __stdcall get_EstimatedDuration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Path(Windows::Devices::Geolocation::IGeopath ** value) = 0;
    virtual HRESULT __stdcall get_Legs(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteLeg> ** value) = 0;
    virtual HRESULT __stdcall get_IsTrafficBased(bool * value) = 0;
};

struct __declspec(uuid("d1c5d40c-2213-4ab0-a260-46b38169beac")) __declspec(novtable) IMapRoute2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ViolatedRestrictions(winrt::Windows::Services::Maps::MapRouteRestrictions * value) = 0;
    virtual HRESULT __stdcall get_HasBlockedRoads(bool * value) = 0;
};

struct __declspec(uuid("6815364d-c6dc-4697-a452-b18f8f0b67a1")) __declspec(novtable) IMapRouteDrivingOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaxAlternateRouteCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_MaxAlternateRouteCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_InitialHeading(Windows::Foundation::IReference<double> ** value) = 0;
    virtual HRESULT __stdcall put_InitialHeading(Windows::Foundation::IReference<double> * value) = 0;
    virtual HRESULT __stdcall get_RouteOptimization(winrt::Windows::Services::Maps::MapRouteOptimization * value) = 0;
    virtual HRESULT __stdcall put_RouteOptimization(winrt::Windows::Services::Maps::MapRouteOptimization value) = 0;
    virtual HRESULT __stdcall get_RouteRestrictions(winrt::Windows::Services::Maps::MapRouteRestrictions * value) = 0;
    virtual HRESULT __stdcall put_RouteRestrictions(winrt::Windows::Services::Maps::MapRouteRestrictions value) = 0;
};

struct __declspec(uuid("a868a31a-9422-46ac-8ca1-b1614d4bfbe2")) __declspec(novtable) IMapRouteFinderResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Route(Windows::Services::Maps::IMapRoute ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Services::Maps::MapRouteFinderStatus * value) = 0;
};

struct __declspec(uuid("20709c6d-d90c-46c8-91c6-7d4be4efb215")) __declspec(novtable) IMapRouteFinderResult2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlternateRoutes(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRoute> ** value) = 0;
};

struct __declspec(uuid("b8a5c50f-1c64-4c3a-81eb-1f7c152afbbb")) __declspec(novtable) IMapRouteFinderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDrivingRouteAsync(Windows::Devices::Geolocation::IGeopoint * startPoint, Windows::Devices::Geolocation::IGeopoint * endPoint, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDrivingRouteWithOptimizationAsync(Windows::Devices::Geolocation::IGeopoint * startPoint, Windows::Devices::Geolocation::IGeopoint * endPoint, winrt::Windows::Services::Maps::MapRouteOptimization optimization, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDrivingRouteWithOptimizationAndRestrictionsAsync(Windows::Devices::Geolocation::IGeopoint * startPoint, Windows::Devices::Geolocation::IGeopoint * endPoint, winrt::Windows::Services::Maps::MapRouteOptimization optimization, winrt::Windows::Services::Maps::MapRouteRestrictions restrictions, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(Windows::Devices::Geolocation::IGeopoint * startPoint, Windows::Devices::Geolocation::IGeopoint * endPoint, winrt::Windows::Services::Maps::MapRouteOptimization optimization, winrt::Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDrivingRouteFromWaypointsAsync(Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> * wayPoints, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDrivingRouteFromWaypointsAndOptimizationAsync(Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> * wayPoints, winrt::Windows::Services::Maps::MapRouteOptimization optimization, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> * wayPoints, winrt::Windows::Services::Maps::MapRouteOptimization optimization, winrt::Windows::Services::Maps::MapRouteRestrictions restrictions, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> * wayPoints, winrt::Windows::Services::Maps::MapRouteOptimization optimization, winrt::Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetWalkingRouteAsync(Windows::Devices::Geolocation::IGeopoint * startPoint, Windows::Devices::Geolocation::IGeopoint * endPoint, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetWalkingRouteFromWaypointsAsync(Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> * wayPoints, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
};

struct __declspec(uuid("afcc2c73-7760-49af-b3bd-baf135b703e1")) __declspec(novtable) IMapRouteFinderStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDrivingRouteWithOptionsAsync(Windows::Devices::Geolocation::IGeopoint * startPoint, Windows::Devices::Geolocation::IGeopoint * endPoint, Windows::Services::Maps::IMapRouteDrivingOptions * options, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> ** result) = 0;
};

struct __declspec(uuid("96f8b2f6-5bba-4d17-9db6-1a263fec7471")) __declspec(novtable) IMapRouteLeg : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BoundingBox(Windows::Devices::Geolocation::IGeoboundingBox ** value) = 0;
    virtual HRESULT __stdcall get_Path(Windows::Devices::Geolocation::IGeopath ** value) = 0;
    virtual HRESULT __stdcall get_LengthInMeters(double * value) = 0;
    virtual HRESULT __stdcall get_EstimatedDuration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Maneuvers(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteManeuver> ** value) = 0;
};

struct __declspec(uuid("ed5c17f0-a6ab-4d65-a086-fa8a7e340df2")) __declspec(novtable) IMapRouteManeuver : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StartingPoint(Windows::Devices::Geolocation::IGeopoint ** value) = 0;
    virtual HRESULT __stdcall get_LengthInMeters(double * value) = 0;
    virtual HRESULT __stdcall get_InstructionText(hstring * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Services::Maps::MapRouteManeuverKind * value) = 0;
    virtual HRESULT __stdcall get_ExitNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_ManeuverNotices(winrt::Windows::Services::Maps::MapManeuverNotices * value) = 0;
};

struct __declspec(uuid("5d7bcd9c-7c9b-41df-838b-eae21e4b05a9")) __declspec(novtable) IMapRouteManeuver2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StartHeading(double * value) = 0;
    virtual HRESULT __stdcall get_EndHeading(double * value) = 0;
    virtual HRESULT __stdcall get_StreetName(hstring * value) = 0;
};

struct __declspec(uuid("0144ad85-c04c-4cdd-871a-a0726d097cd4")) __declspec(novtable) IMapServiceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall put_ServiceToken(hstring value) = 0;
    virtual HRESULT __stdcall get_ServiceToken(hstring * value) = 0;
};

struct __declspec(uuid("f8193eed-9c85-40a9-8896-0fc3fd2b7c2a")) __declspec(novtable) IMapServiceStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WorldViewRegionCode(hstring * value) = 0;
};

struct __declspec(uuid("0a11ce20-63a7-4854-b355-d6dcda223d1b")) __declspec(novtable) IMapServiceStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DataAttributions(hstring * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Services::Maps::MapAddress> { using default_interface = Windows::Services::Maps::IMapAddress; };
template <> struct traits<Windows::Services::Maps::MapLocation> { using default_interface = Windows::Services::Maps::IMapLocation; };
template <> struct traits<Windows::Services::Maps::MapLocationFinderResult> { using default_interface = Windows::Services::Maps::IMapLocationFinderResult; };
template <> struct traits<Windows::Services::Maps::MapRoute> { using default_interface = Windows::Services::Maps::IMapRoute; };
template <> struct traits<Windows::Services::Maps::MapRouteDrivingOptions> { using default_interface = Windows::Services::Maps::IMapRouteDrivingOptions; };
template <> struct traits<Windows::Services::Maps::MapRouteFinderResult> { using default_interface = Windows::Services::Maps::IMapRouteFinderResult; };
template <> struct traits<Windows::Services::Maps::MapRouteLeg> { using default_interface = Windows::Services::Maps::IMapRouteLeg; };
template <> struct traits<Windows::Services::Maps::MapRouteManeuver> { using default_interface = Windows::Services::Maps::IMapRouteManeuver; };

}

namespace Windows::Services::Maps {

template <typename T> struct impl_IMapAddress;
template <typename T> struct impl_IMapAddress2;
template <typename T> struct impl_IMapLocation;
template <typename T> struct impl_IMapLocationFinderResult;
template <typename T> struct impl_IMapLocationFinderStatics;
template <typename T> struct impl_IMapLocationFinderStatics2;
template <typename T> struct impl_IMapManagerStatics;
template <typename T> struct impl_IMapRoute;
template <typename T> struct impl_IMapRoute2;
template <typename T> struct impl_IMapRouteDrivingOptions;
template <typename T> struct impl_IMapRouteFinderResult;
template <typename T> struct impl_IMapRouteFinderResult2;
template <typename T> struct impl_IMapRouteFinderStatics;
template <typename T> struct impl_IMapRouteFinderStatics2;
template <typename T> struct impl_IMapRouteLeg;
template <typename T> struct impl_IMapRouteManeuver;
template <typename T> struct impl_IMapRouteManeuver2;
template <typename T> struct impl_IMapServiceStatics;
template <typename T> struct impl_IMapServiceStatics2;
template <typename T> struct impl_IMapServiceStatics3;

}

namespace impl {

template <> struct traits<Windows::Services::Maps::IMapAddress>
{
    using abi = ABI::Windows::Services::Maps::IMapAddress;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapAddress<D>;
};

template <> struct traits<Windows::Services::Maps::IMapAddress2>
{
    using abi = ABI::Windows::Services::Maps::IMapAddress2;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapAddress2<D>;
};

template <> struct traits<Windows::Services::Maps::IMapLocation>
{
    using abi = ABI::Windows::Services::Maps::IMapLocation;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapLocation<D>;
};

template <> struct traits<Windows::Services::Maps::IMapLocationFinderResult>
{
    using abi = ABI::Windows::Services::Maps::IMapLocationFinderResult;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapLocationFinderResult<D>;
};

template <> struct traits<Windows::Services::Maps::IMapLocationFinderStatics>
{
    using abi = ABI::Windows::Services::Maps::IMapLocationFinderStatics;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapLocationFinderStatics<D>;
};

template <> struct traits<Windows::Services::Maps::IMapLocationFinderStatics2>
{
    using abi = ABI::Windows::Services::Maps::IMapLocationFinderStatics2;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapLocationFinderStatics2<D>;
};

template <> struct traits<Windows::Services::Maps::IMapManagerStatics>
{
    using abi = ABI::Windows::Services::Maps::IMapManagerStatics;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapManagerStatics<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRoute>
{
    using abi = ABI::Windows::Services::Maps::IMapRoute;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRoute<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRoute2>
{
    using abi = ABI::Windows::Services::Maps::IMapRoute2;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRoute2<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRouteDrivingOptions>
{
    using abi = ABI::Windows::Services::Maps::IMapRouteDrivingOptions;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRouteDrivingOptions<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRouteFinderResult>
{
    using abi = ABI::Windows::Services::Maps::IMapRouteFinderResult;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRouteFinderResult<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRouteFinderResult2>
{
    using abi = ABI::Windows::Services::Maps::IMapRouteFinderResult2;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRouteFinderResult2<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRouteFinderStatics>
{
    using abi = ABI::Windows::Services::Maps::IMapRouteFinderStatics;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRouteFinderStatics<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRouteFinderStatics2>
{
    using abi = ABI::Windows::Services::Maps::IMapRouteFinderStatics2;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRouteFinderStatics2<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRouteLeg>
{
    using abi = ABI::Windows::Services::Maps::IMapRouteLeg;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRouteLeg<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRouteManeuver>
{
    using abi = ABI::Windows::Services::Maps::IMapRouteManeuver;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRouteManeuver<D>;
};

template <> struct traits<Windows::Services::Maps::IMapRouteManeuver2>
{
    using abi = ABI::Windows::Services::Maps::IMapRouteManeuver2;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapRouteManeuver2<D>;
};

template <> struct traits<Windows::Services::Maps::IMapServiceStatics>
{
    using abi = ABI::Windows::Services::Maps::IMapServiceStatics;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapServiceStatics<D>;
};

template <> struct traits<Windows::Services::Maps::IMapServiceStatics2>
{
    using abi = ABI::Windows::Services::Maps::IMapServiceStatics2;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapServiceStatics2<D>;
};

template <> struct traits<Windows::Services::Maps::IMapServiceStatics3>
{
    using abi = ABI::Windows::Services::Maps::IMapServiceStatics3;
    template <typename D> using consume = Windows::Services::Maps::impl_IMapServiceStatics3<D>;
};

template <> struct traits<Windows::Services::Maps::MapAddress>
{
    using abi = ABI::Windows::Services::Maps::MapAddress;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapAddress"; }
};

template <> struct traits<Windows::Services::Maps::MapLocation>
{
    using abi = ABI::Windows::Services::Maps::MapLocation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapLocation"; }
};

template <> struct traits<Windows::Services::Maps::MapLocationFinder>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapLocationFinder"; }
};

template <> struct traits<Windows::Services::Maps::MapLocationFinderResult>
{
    using abi = ABI::Windows::Services::Maps::MapLocationFinderResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapLocationFinderResult"; }
};

template <> struct traits<Windows::Services::Maps::MapManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapManager"; }
};

template <> struct traits<Windows::Services::Maps::MapRoute>
{
    using abi = ABI::Windows::Services::Maps::MapRoute;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapRoute"; }
};

template <> struct traits<Windows::Services::Maps::MapRouteDrivingOptions>
{
    using abi = ABI::Windows::Services::Maps::MapRouteDrivingOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapRouteDrivingOptions"; }
};

template <> struct traits<Windows::Services::Maps::MapRouteFinder>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapRouteFinder"; }
};

template <> struct traits<Windows::Services::Maps::MapRouteFinderResult>
{
    using abi = ABI::Windows::Services::Maps::MapRouteFinderResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapRouteFinderResult"; }
};

template <> struct traits<Windows::Services::Maps::MapRouteLeg>
{
    using abi = ABI::Windows::Services::Maps::MapRouteLeg;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapRouteLeg"; }
};

template <> struct traits<Windows::Services::Maps::MapRouteManeuver>
{
    using abi = ABI::Windows::Services::Maps::MapRouteManeuver;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapRouteManeuver"; }
};

template <> struct traits<Windows::Services::Maps::MapService>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.MapService"; }
};

}

}
