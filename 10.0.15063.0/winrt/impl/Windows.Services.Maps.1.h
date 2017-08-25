// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Services.Maps.0.h"

WINRT_EXPORT namespace winrt::Windows::Services::Maps {

struct WINRT_EBO IEnhancedWaypoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnhancedWaypoint>
{
    IEnhancedWaypoint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEnhancedWaypointFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnhancedWaypointFactory>
{
    IEnhancedWaypointFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManeuverWarning :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManeuverWarning>
{
    IManeuverWarning(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapAddress>
{
    IMapAddress(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapAddress2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapAddress2>
{
    IMapAddress2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapLocation>
{
    IMapLocation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapLocationFinderResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapLocationFinderResult>
{
    IMapLocationFinderResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapLocationFinderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapLocationFinderStatics>
{
    IMapLocationFinderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapLocationFinderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapLocationFinderStatics2>
{
    IMapLocationFinderStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapManagerStatics>
{
    IMapManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRoute :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRoute>
{
    IMapRoute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRoute2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRoute2>
{
    IMapRoute2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRoute3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRoute3>
{
    IMapRoute3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteDrivingOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteDrivingOptions>
{
    IMapRouteDrivingOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteFinderResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteFinderResult>
{
    IMapRouteFinderResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteFinderResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteFinderResult2>
{
    IMapRouteFinderResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteFinderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteFinderStatics>
{
    IMapRouteFinderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteFinderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteFinderStatics2>
{
    IMapRouteFinderStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteFinderStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteFinderStatics3>
{
    IMapRouteFinderStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteLeg :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteLeg>
{
    IMapRouteLeg(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteLeg2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteLeg2>
{
    IMapRouteLeg2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteManeuver :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteManeuver>
{
    IMapRouteManeuver(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteManeuver2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteManeuver2>
{
    IMapRouteManeuver2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteManeuver3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteManeuver3>
{
    IMapRouteManeuver3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapServiceStatics>
{
    IMapServiceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapServiceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapServiceStatics2>
{
    IMapServiceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapServiceStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapServiceStatics3>
{
    IMapServiceStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapServiceStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapServiceStatics4>
{
    IMapServiceStatics4(std::nullptr_t = nullptr) noexcept {}
};

}
