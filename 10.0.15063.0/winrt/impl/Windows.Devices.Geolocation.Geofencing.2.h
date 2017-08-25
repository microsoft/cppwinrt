// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Devices.Geolocation.Geofencing.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation::Geofencing {

struct WINRT_EBO Geofence :
    Windows::Devices::Geolocation::Geofencing::IGeofence
{
    Geofence(std::nullptr_t) noexcept {}
    Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape);
    Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse);
    Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime);
    Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime, Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration);
};

struct WINRT_EBO GeofenceMonitor :
    Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor
{
    GeofenceMonitor(std::nullptr_t) noexcept {}
    static Windows::Devices::Geolocation::Geofencing::GeofenceMonitor Current();
};

struct WINRT_EBO GeofenceStateChangeReport :
    Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport
{
    GeofenceStateChangeReport(std::nullptr_t) noexcept {}
};

}
