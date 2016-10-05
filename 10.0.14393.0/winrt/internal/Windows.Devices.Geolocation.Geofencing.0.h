// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Geolocation::Geofencing {

struct IGeofence;
struct IGeofenceFactory;
struct IGeofenceMonitor;
struct IGeofenceMonitorStatics;
struct IGeofenceStateChangeReport;
struct Geofence;
struct GeofenceMonitor;
struct GeofenceStateChangeReport;

}

namespace Windows::Devices::Geolocation::Geofencing {

struct IGeofence;
struct IGeofenceFactory;
struct IGeofenceMonitor;
struct IGeofenceMonitorStatics;
struct IGeofenceStateChangeReport;
struct Geofence;
struct GeofenceMonitor;
struct GeofenceStateChangeReport;

}

namespace Windows::Devices::Geolocation::Geofencing {

enum class GeofenceMonitorStatus
{
    Ready = 0,
    Initializing = 1,
    NoData = 2,
    Disabled = 3,
    NotInitialized = 4,
    NotAvailable = 5,
};

enum class GeofenceRemovalReason
{
    Used = 0,
    Expired = 1,
};

enum class GeofenceState : unsigned
{
    None = 0x0,
    Entered = 0x1,
    Exited = 0x2,
    Removed = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(GeofenceState)

enum class MonitoredGeofenceStates : unsigned
{
    None = 0x0,
    Entered = 0x1,
    Exited = 0x2,
    Removed = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(MonitoredGeofenceStates)

}

}
