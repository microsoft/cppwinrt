// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Devices.Geolocation.Geofencing.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation::Geofencing {

struct WINRT_EBO IGeofence :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofence>
{
    IGeofence(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeofenceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofenceFactory>
{
    IGeofenceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeofenceMonitor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofenceMonitor>
{
    IGeofenceMonitor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeofenceMonitorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofenceMonitorStatics>
{
    IGeofenceMonitorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeofenceStateChangeReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeofenceStateChangeReport>
{
    IGeofenceStateChangeReport(std::nullptr_t = nullptr) noexcept {}
};

}
