// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Services.Maps.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Services.Maps.Guidance.0.h"

WINRT_EXPORT namespace winrt::Windows::Services::Maps::Guidance {

struct WINRT_EBO IGuidanceAudioNotificationRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceAudioNotificationRequestedEventArgs>
{
    IGuidanceAudioNotificationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceLaneInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceLaneInfo>
{
    IGuidanceLaneInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceManeuver :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceManeuver>
{
    IGuidanceManeuver(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceMapMatchedCoordinate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceMapMatchedCoordinate>
{
    IGuidanceMapMatchedCoordinate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceNavigator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceNavigator>
{
    IGuidanceNavigator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceNavigator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceNavigator2>
{
    IGuidanceNavigator2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceNavigatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceNavigatorStatics>
{
    IGuidanceNavigatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceNavigatorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceNavigatorStatics2>
{
    IGuidanceNavigatorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceReroutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceReroutedEventArgs>
{
    IGuidanceReroutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceRoadSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceRoadSegment>
{
    IGuidanceRoadSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceRoadSignpost :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceRoadSignpost>
{
    IGuidanceRoadSignpost(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceRoute :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceRoute>
{
    IGuidanceRoute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceRouteStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceRouteStatics>
{
    IGuidanceRouteStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceTelemetryCollector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceTelemetryCollector>
{
    IGuidanceTelemetryCollector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceTelemetryCollectorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceTelemetryCollectorStatics>
{
    IGuidanceTelemetryCollectorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGuidanceUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGuidanceUpdatedEventArgs>
{
    IGuidanceUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
