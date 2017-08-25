// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

struct GeoboundingBox;
struct Geopath;
struct Geopoint;

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps {

enum class ManeuverWarningKind
{
    None = 0,
    Accident = 1,
    AdministrativeDivisionChange = 2,
    Alert = 3,
    BlockedRoad = 4,
    CheckTimetable = 5,
    Congestion = 6,
    Construction = 7,
    CountryChange = 8,
    DisabledVehicle = 9,
    GateAccess = 10,
    GetOffTransit = 11,
    GetOnTransit = 12,
    IllegalUTurn = 13,
    MassTransit = 14,
    Miscellaneous = 15,
    NoIncident = 16,
    Other = 17,
    OtherNews = 18,
    OtherTrafficIncidents = 19,
    PlannedEvent = 20,
    PrivateRoad = 21,
    RestrictedTurn = 22,
    RoadClosures = 23,
    RoadHazard = 24,
    ScheduledConstruction = 25,
    SeasonalClosures = 26,
    Tollbooth = 27,
    TollRoad = 28,
    TollZoneEnter = 29,
    TollZoneExit = 30,
    TrafficFlow = 31,
    TransitLineChange = 32,
    UnpavedRoad = 33,
    UnscheduledConstruction = 34,
    Weather = 35,
};

enum class ManeuverWarningSeverity
{
    None = 0,
    LowImpact = 1,
    Minor = 2,
    Moderate = 3,
    Serious = 4,
};

enum class MapLocationDesiredAccuracy
{
    High = 0,
    Low = 1,
};

enum class MapLocationFinderStatus
{
    Success = 0,
    UnknownError = 1,
    InvalidCredentials = 2,
    BadLocation = 3,
    IndexFailure = 4,
    NetworkFailure = 5,
    NotSupported = 6,
};

enum class MapManeuverNotices : unsigned
{
    None = 0x0,
    Toll = 0x1,
    Unpaved = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(MapManeuverNotices)

enum class MapRouteFinderStatus
{
    Success = 0,
    UnknownError = 1,
    InvalidCredentials = 2,
    NoRouteFound = 3,
    NoRouteFoundWithGivenOptions = 4,
    StartPointNotFound = 5,
    EndPointNotFound = 6,
    NoPedestrianRouteFound = 7,
    NetworkFailure = 8,
    NotSupported = 9,
};

enum class MapRouteManeuverKind
{
    None = 0,
    Start = 1,
    Stopover = 2,
    StopoverResume = 3,
    End = 4,
    GoStraight = 5,
    UTurnLeft = 6,
    UTurnRight = 7,
    TurnKeepLeft = 8,
    TurnKeepRight = 9,
    TurnLightLeft = 10,
    TurnLightRight = 11,
    TurnLeft = 12,
    TurnRight = 13,
    TurnHardLeft = 14,
    TurnHardRight = 15,
    FreewayEnterLeft = 16,
    FreewayEnterRight = 17,
    FreewayLeaveLeft = 18,
    FreewayLeaveRight = 19,
    FreewayContinueLeft = 20,
    FreewayContinueRight = 21,
    TrafficCircleLeft = 22,
    TrafficCircleRight = 23,
    TakeFerry = 24,
};

enum class MapRouteOptimization
{
    Time = 0,
    Distance = 1,
    TimeWithTraffic = 2,
};

enum class MapRouteRestrictions : unsigned
{
    None = 0x0,
    Highways = 0x1,
    TollRoads = 0x2,
    Ferries = 0x4,
    Tunnels = 0x8,
    DirtRoads = 0x10,
    Motorail = 0x20,
};

DEFINE_ENUM_FLAG_OPERATORS(MapRouteRestrictions)

enum class MapServiceDataUsagePreference
{
    Default = 0,
    OfflineMapDataOnly = 1,
};

enum class TrafficCongestion
{
    Unknown = 0,
    Light = 1,
    Mild = 2,
    Medium = 3,
    Heavy = 4,
};

enum class WaypointKind
{
    Stop = 0,
    Via = 1,
};

struct IEnhancedWaypoint;
struct IEnhancedWaypointFactory;
struct IManeuverWarning;
struct IMapAddress;
struct IMapAddress2;
struct IMapLocation;
struct IMapLocationFinderResult;
struct IMapLocationFinderStatics;
struct IMapLocationFinderStatics2;
struct IMapManagerStatics;
struct IMapRoute;
struct IMapRoute2;
struct IMapRoute3;
struct IMapRouteDrivingOptions;
struct IMapRouteFinderResult;
struct IMapRouteFinderResult2;
struct IMapRouteFinderStatics;
struct IMapRouteFinderStatics2;
struct IMapRouteFinderStatics3;
struct IMapRouteLeg;
struct IMapRouteLeg2;
struct IMapRouteManeuver;
struct IMapRouteManeuver2;
struct IMapRouteManeuver3;
struct IMapServiceStatics;
struct IMapServiceStatics2;
struct IMapServiceStatics3;
struct IMapServiceStatics4;
struct EnhancedWaypoint;
struct ManeuverWarning;
struct MapAddress;
struct MapLocation;
struct MapLocationFinder;
struct MapLocationFinderResult;
struct MapManager;
struct MapRoute;
struct MapRouteDrivingOptions;
struct MapRouteFinder;
struct MapRouteFinderResult;
struct MapRouteLeg;
struct MapRouteManeuver;
struct MapService;

}

namespace winrt::impl {

template <> struct category<Windows::Services::Maps::IEnhancedWaypoint>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IEnhancedWaypointFactory>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IManeuverWarning>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapAddress>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapAddress2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapLocation>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapLocationFinderResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapLocationFinderStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapLocationFinderStatics2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRoute>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRoute2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRoute3>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteDrivingOptions>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteFinderResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteFinderResult2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteFinderStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteFinderStatics2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteFinderStatics3>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteLeg>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteLeg2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteManeuver>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteManeuver2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapRouteManeuver3>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapServiceStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapServiceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapServiceStatics3>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::IMapServiceStatics4>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::EnhancedWaypoint>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::ManeuverWarning>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapAddress>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapLocation>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapLocationFinder>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapLocationFinderResult>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapManager>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapRoute>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapRouteDrivingOptions>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapRouteFinder>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapRouteFinderResult>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapRouteLeg>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapRouteManeuver>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::MapService>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::ManeuverWarningKind>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::ManeuverWarningSeverity>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::MapLocationDesiredAccuracy>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::MapLocationFinderStatus>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::MapManeuverNotices>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::MapRouteFinderStatus>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::MapRouteManeuverKind>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::MapRouteOptimization>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::MapRouteRestrictions>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::MapServiceDataUsagePreference>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::TrafficCongestion>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::WaypointKind>{ using type = enum_category; };
template <> struct name<Windows::Services::Maps::IEnhancedWaypoint>{ static constexpr auto & value{ L"Windows.Services.Maps.IEnhancedWaypoint" }; };
template <> struct name<Windows::Services::Maps::IEnhancedWaypointFactory>{ static constexpr auto & value{ L"Windows.Services.Maps.IEnhancedWaypointFactory" }; };
template <> struct name<Windows::Services::Maps::IManeuverWarning>{ static constexpr auto & value{ L"Windows.Services.Maps.IManeuverWarning" }; };
template <> struct name<Windows::Services::Maps::IMapAddress>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapAddress" }; };
template <> struct name<Windows::Services::Maps::IMapAddress2>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapAddress2" }; };
template <> struct name<Windows::Services::Maps::IMapLocation>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapLocation" }; };
template <> struct name<Windows::Services::Maps::IMapLocationFinderResult>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapLocationFinderResult" }; };
template <> struct name<Windows::Services::Maps::IMapLocationFinderStatics>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapLocationFinderStatics" }; };
template <> struct name<Windows::Services::Maps::IMapLocationFinderStatics2>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapLocationFinderStatics2" }; };
template <> struct name<Windows::Services::Maps::IMapManagerStatics>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapManagerStatics" }; };
template <> struct name<Windows::Services::Maps::IMapRoute>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRoute" }; };
template <> struct name<Windows::Services::Maps::IMapRoute2>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRoute2" }; };
template <> struct name<Windows::Services::Maps::IMapRoute3>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRoute3" }; };
template <> struct name<Windows::Services::Maps::IMapRouteDrivingOptions>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteDrivingOptions" }; };
template <> struct name<Windows::Services::Maps::IMapRouteFinderResult>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderResult" }; };
template <> struct name<Windows::Services::Maps::IMapRouteFinderResult2>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderResult2" }; };
template <> struct name<Windows::Services::Maps::IMapRouteFinderStatics>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderStatics" }; };
template <> struct name<Windows::Services::Maps::IMapRouteFinderStatics2>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderStatics2" }; };
template <> struct name<Windows::Services::Maps::IMapRouteFinderStatics3>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderStatics3" }; };
template <> struct name<Windows::Services::Maps::IMapRouteLeg>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteLeg" }; };
template <> struct name<Windows::Services::Maps::IMapRouteLeg2>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteLeg2" }; };
template <> struct name<Windows::Services::Maps::IMapRouteManeuver>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteManeuver" }; };
template <> struct name<Windows::Services::Maps::IMapRouteManeuver2>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteManeuver2" }; };
template <> struct name<Windows::Services::Maps::IMapRouteManeuver3>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteManeuver3" }; };
template <> struct name<Windows::Services::Maps::IMapServiceStatics>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapServiceStatics" }; };
template <> struct name<Windows::Services::Maps::IMapServiceStatics2>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapServiceStatics2" }; };
template <> struct name<Windows::Services::Maps::IMapServiceStatics3>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapServiceStatics3" }; };
template <> struct name<Windows::Services::Maps::IMapServiceStatics4>{ static constexpr auto & value{ L"Windows.Services.Maps.IMapServiceStatics4" }; };
template <> struct name<Windows::Services::Maps::EnhancedWaypoint>{ static constexpr auto & value{ L"Windows.Services.Maps.EnhancedWaypoint" }; };
template <> struct name<Windows::Services::Maps::ManeuverWarning>{ static constexpr auto & value{ L"Windows.Services.Maps.ManeuverWarning" }; };
template <> struct name<Windows::Services::Maps::MapAddress>{ static constexpr auto & value{ L"Windows.Services.Maps.MapAddress" }; };
template <> struct name<Windows::Services::Maps::MapLocation>{ static constexpr auto & value{ L"Windows.Services.Maps.MapLocation" }; };
template <> struct name<Windows::Services::Maps::MapLocationFinder>{ static constexpr auto & value{ L"Windows.Services.Maps.MapLocationFinder" }; };
template <> struct name<Windows::Services::Maps::MapLocationFinderResult>{ static constexpr auto & value{ L"Windows.Services.Maps.MapLocationFinderResult" }; };
template <> struct name<Windows::Services::Maps::MapManager>{ static constexpr auto & value{ L"Windows.Services.Maps.MapManager" }; };
template <> struct name<Windows::Services::Maps::MapRoute>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRoute" }; };
template <> struct name<Windows::Services::Maps::MapRouteDrivingOptions>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteDrivingOptions" }; };
template <> struct name<Windows::Services::Maps::MapRouteFinder>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteFinder" }; };
template <> struct name<Windows::Services::Maps::MapRouteFinderResult>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteFinderResult" }; };
template <> struct name<Windows::Services::Maps::MapRouteLeg>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteLeg" }; };
template <> struct name<Windows::Services::Maps::MapRouteManeuver>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteManeuver" }; };
template <> struct name<Windows::Services::Maps::MapService>{ static constexpr auto & value{ L"Windows.Services.Maps.MapService" }; };
template <> struct name<Windows::Services::Maps::ManeuverWarningKind>{ static constexpr auto & value{ L"Windows.Services.Maps.ManeuverWarningKind" }; };
template <> struct name<Windows::Services::Maps::ManeuverWarningSeverity>{ static constexpr auto & value{ L"Windows.Services.Maps.ManeuverWarningSeverity" }; };
template <> struct name<Windows::Services::Maps::MapLocationDesiredAccuracy>{ static constexpr auto & value{ L"Windows.Services.Maps.MapLocationDesiredAccuracy" }; };
template <> struct name<Windows::Services::Maps::MapLocationFinderStatus>{ static constexpr auto & value{ L"Windows.Services.Maps.MapLocationFinderStatus" }; };
template <> struct name<Windows::Services::Maps::MapManeuverNotices>{ static constexpr auto & value{ L"Windows.Services.Maps.MapManeuverNotices" }; };
template <> struct name<Windows::Services::Maps::MapRouteFinderStatus>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteFinderStatus" }; };
template <> struct name<Windows::Services::Maps::MapRouteManeuverKind>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteManeuverKind" }; };
template <> struct name<Windows::Services::Maps::MapRouteOptimization>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteOptimization" }; };
template <> struct name<Windows::Services::Maps::MapRouteRestrictions>{ static constexpr auto & value{ L"Windows.Services.Maps.MapRouteRestrictions" }; };
template <> struct name<Windows::Services::Maps::MapServiceDataUsagePreference>{ static constexpr auto & value{ L"Windows.Services.Maps.MapServiceDataUsagePreference" }; };
template <> struct name<Windows::Services::Maps::TrafficCongestion>{ static constexpr auto & value{ L"Windows.Services.Maps.TrafficCongestion" }; };
template <> struct name<Windows::Services::Maps::WaypointKind>{ static constexpr auto & value{ L"Windows.Services.Maps.WaypointKind" }; };
template <> struct guid<Windows::Services::Maps::IEnhancedWaypoint>{ static constexpr GUID value{ 0xED268C74,0x5913,0x11E6,{ 0x8B,0x77,0x86,0xF3,0x0C,0xA8,0x93,0xD3 } }; };
template <> struct guid<Windows::Services::Maps::IEnhancedWaypointFactory>{ static constexpr GUID value{ 0xAF868477,0xA2AA,0x46DD,{ 0xB6,0x45,0x23,0xB3,0x1B,0x8A,0xA6,0xC7 } }; };
template <> struct guid<Windows::Services::Maps::IManeuverWarning>{ static constexpr GUID value{ 0xC1A36D8A,0x2630,0x4378,{ 0x9E,0x4A,0x6E,0x44,0x25,0x3D,0xCE,0xBA } }; };
template <> struct guid<Windows::Services::Maps::IMapAddress>{ static constexpr GUID value{ 0xCFA7A973,0xA3B4,0x4494,{ 0xB3,0xFF,0xCB,0xA9,0x4D,0xB6,0x96,0x99 } }; };
template <> struct guid<Windows::Services::Maps::IMapAddress2>{ static constexpr GUID value{ 0x75CD6DF1,0xE5AD,0x45A9,{ 0xBF,0x40,0x6C,0xF2,0x56,0xC1,0xDD,0x13 } }; };
template <> struct guid<Windows::Services::Maps::IMapLocation>{ static constexpr GUID value{ 0x3C073F57,0x0DA4,0x42E8,{ 0x9E,0xE2,0xA9,0x6F,0xCF,0x23,0x71,0xDC } }; };
template <> struct guid<Windows::Services::Maps::IMapLocationFinderResult>{ static constexpr GUID value{ 0x43F1F179,0xE8CC,0x45F6,{ 0xBE,0xD2,0x54,0xCC,0xBF,0x96,0x5D,0x9A } }; };
template <> struct guid<Windows::Services::Maps::IMapLocationFinderStatics>{ static constexpr GUID value{ 0x318ADB5D,0x1C5D,0x4F35,{ 0xA2,0xDF,0xAA,0xCA,0x94,0x95,0x95,0x17 } }; };
template <> struct guid<Windows::Services::Maps::IMapLocationFinderStatics2>{ static constexpr GUID value{ 0x959A8B96,0x6485,0x4DFD,{ 0x85,0x1A,0x33,0xAC,0x31,0x7E,0x3A,0xF6 } }; };
template <> struct guid<Windows::Services::Maps::IMapManagerStatics>{ static constexpr GUID value{ 0x37E3E515,0x82B4,0x4D54,{ 0x8F,0xD9,0xAF,0x26,0x24,0xB3,0x01,0x1C } }; };
template <> struct guid<Windows::Services::Maps::IMapRoute>{ static constexpr GUID value{ 0xFB07B732,0x584D,0x4583,{ 0x9C,0x60,0x64,0x1F,0xEA,0x27,0x43,0x49 } }; };
template <> struct guid<Windows::Services::Maps::IMapRoute2>{ static constexpr GUID value{ 0xD1C5D40C,0x2213,0x4AB0,{ 0xA2,0x60,0x46,0xB3,0x81,0x69,0xBE,0xAC } }; };
template <> struct guid<Windows::Services::Maps::IMapRoute3>{ static constexpr GUID value{ 0x858D1EAE,0xF2AD,0x429F,{ 0xBB,0x37,0xCD,0x21,0x09,0x4F,0xFC,0x92 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteDrivingOptions>{ static constexpr GUID value{ 0x6815364D,0xC6DC,0x4697,{ 0xA4,0x52,0xB1,0x8F,0x8F,0x0B,0x67,0xA1 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteFinderResult>{ static constexpr GUID value{ 0xA868A31A,0x9422,0x46AC,{ 0x8C,0xA1,0xB1,0x61,0x4D,0x4B,0xFB,0xE2 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteFinderResult2>{ static constexpr GUID value{ 0x20709C6D,0xD90C,0x46C8,{ 0x91,0xC6,0x7D,0x4B,0xE4,0xEF,0xB2,0x15 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteFinderStatics>{ static constexpr GUID value{ 0xB8A5C50F,0x1C64,0x4C3A,{ 0x81,0xEB,0x1F,0x7C,0x15,0x2A,0xFB,0xBB } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteFinderStatics2>{ static constexpr GUID value{ 0xAFCC2C73,0x7760,0x49AF,{ 0xB3,0xBD,0xBA,0xF1,0x35,0xB7,0x03,0xE1 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteFinderStatics3>{ static constexpr GUID value{ 0xF6098134,0x5913,0x11E6,{ 0x8B,0x77,0x86,0xF3,0x0C,0xA8,0x93,0xD3 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteLeg>{ static constexpr GUID value{ 0x96F8B2F6,0x5BBA,0x4D17,{ 0x9D,0xB6,0x1A,0x26,0x3F,0xEC,0x74,0x71 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteLeg2>{ static constexpr GUID value{ 0x02E2062D,0xC9C6,0x45B8,{ 0x8E,0x54,0x1A,0x10,0xB5,0x7A,0x17,0xE8 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteManeuver>{ static constexpr GUID value{ 0xED5C17F0,0xA6AB,0x4D65,{ 0xA0,0x86,0xFA,0x8A,0x7E,0x34,0x0D,0xF2 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteManeuver2>{ static constexpr GUID value{ 0x5D7BCD9C,0x7C9B,0x41DF,{ 0x83,0x8B,0xEA,0xE2,0x1E,0x4B,0x05,0xA9 } }; };
template <> struct guid<Windows::Services::Maps::IMapRouteManeuver3>{ static constexpr GUID value{ 0xA6A138DF,0x0483,0x4166,{ 0x85,0xBE,0xB9,0x93,0x36,0xC1,0x18,0x75 } }; };
template <> struct guid<Windows::Services::Maps::IMapServiceStatics>{ static constexpr GUID value{ 0x0144AD85,0xC04C,0x4CDD,{ 0x87,0x1A,0xA0,0x72,0x6D,0x09,0x7C,0xD4 } }; };
template <> struct guid<Windows::Services::Maps::IMapServiceStatics2>{ static constexpr GUID value{ 0xF8193EED,0x9C85,0x40A9,{ 0x88,0x96,0x0F,0xC3,0xFD,0x2B,0x7C,0x2A } }; };
template <> struct guid<Windows::Services::Maps::IMapServiceStatics3>{ static constexpr GUID value{ 0x0A11CE20,0x63A7,0x4854,{ 0xB3,0x55,0xD6,0xDC,0xDA,0x22,0x3D,0x1B } }; };
template <> struct guid<Windows::Services::Maps::IMapServiceStatics4>{ static constexpr GUID value{ 0x088A2862,0x6ABC,0x420E,{ 0x94,0x5F,0x4C,0xFD,0x89,0xC6,0x73,0x56 } }; };
template <> struct default_interface<Windows::Services::Maps::EnhancedWaypoint>{ using type = Windows::Services::Maps::IEnhancedWaypoint; };
template <> struct default_interface<Windows::Services::Maps::ManeuverWarning>{ using type = Windows::Services::Maps::IManeuverWarning; };
template <> struct default_interface<Windows::Services::Maps::MapAddress>{ using type = Windows::Services::Maps::IMapAddress; };
template <> struct default_interface<Windows::Services::Maps::MapLocation>{ using type = Windows::Services::Maps::IMapLocation; };
template <> struct default_interface<Windows::Services::Maps::MapLocationFinderResult>{ using type = Windows::Services::Maps::IMapLocationFinderResult; };
template <> struct default_interface<Windows::Services::Maps::MapRoute>{ using type = Windows::Services::Maps::IMapRoute; };
template <> struct default_interface<Windows::Services::Maps::MapRouteDrivingOptions>{ using type = Windows::Services::Maps::IMapRouteDrivingOptions; };
template <> struct default_interface<Windows::Services::Maps::MapRouteFinderResult>{ using type = Windows::Services::Maps::IMapRouteFinderResult; };
template <> struct default_interface<Windows::Services::Maps::MapRouteLeg>{ using type = Windows::Services::Maps::IMapRouteLeg; };
template <> struct default_interface<Windows::Services::Maps::MapRouteManeuver>{ using type = Windows::Services::Maps::IMapRouteManeuver; };

template <typename D>
struct consume_Windows_Services_Maps_IEnhancedWaypoint
{
    Windows::Devices::Geolocation::Geopoint Point() const;
    Windows::Services::Maps::WaypointKind Kind() const;
};
template <> struct consume<Windows::Services::Maps::IEnhancedWaypoint> { template <typename D> using type = consume_Windows_Services_Maps_IEnhancedWaypoint<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IEnhancedWaypointFactory
{
    Windows::Services::Maps::EnhancedWaypoint Create(Windows::Devices::Geolocation::Geopoint const& point, Windows::Services::Maps::WaypointKind const& kind) const;
};
template <> struct consume<Windows::Services::Maps::IEnhancedWaypointFactory> { template <typename D> using type = consume_Windows_Services_Maps_IEnhancedWaypointFactory<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IManeuverWarning
{
    Windows::Services::Maps::ManeuverWarningKind Kind() const;
    Windows::Services::Maps::ManeuverWarningSeverity Severity() const;
};
template <> struct consume<Windows::Services::Maps::IManeuverWarning> { template <typename D> using type = consume_Windows_Services_Maps_IManeuverWarning<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapAddress
{
    hstring BuildingName() const;
    hstring BuildingFloor() const;
    hstring BuildingRoom() const;
    hstring BuildingWing() const;
    hstring StreetNumber() const;
    hstring Street() const;
    hstring Neighborhood() const;
    hstring District() const;
    hstring Town() const;
    hstring Region() const;
    hstring RegionCode() const;
    hstring Country() const;
    hstring CountryCode() const;
    hstring PostCode() const;
    hstring Continent() const;
};
template <> struct consume<Windows::Services::Maps::IMapAddress> { template <typename D> using type = consume_Windows_Services_Maps_IMapAddress<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapAddress2
{
    hstring FormattedAddress() const;
};
template <> struct consume<Windows::Services::Maps::IMapAddress2> { template <typename D> using type = consume_Windows_Services_Maps_IMapAddress2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapLocation
{
    Windows::Devices::Geolocation::Geopoint Point() const;
    hstring DisplayName() const;
    hstring Description() const;
    Windows::Services::Maps::MapAddress Address() const;
};
template <> struct consume<Windows::Services::Maps::IMapLocation> { template <typename D> using type = consume_Windows_Services_Maps_IMapLocation<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapLocationFinderResult
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapLocation> Locations() const;
    Windows::Services::Maps::MapLocationFinderStatus Status() const;
};
template <> struct consume<Windows::Services::Maps::IMapLocationFinderResult> { template <typename D> using type = consume_Windows_Services_Maps_IMapLocationFinderResult<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapLocationFinderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint, uint32_t maxCount) const;
};
template <> struct consume<Windows::Services::Maps::IMapLocationFinderStatics> { template <typename D> using type = consume_Windows_Services_Maps_IMapLocationFinderStatics<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapLocationFinderStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy const& accuracy) const;
};
template <> struct consume<Windows::Services::Maps::IMapLocationFinderStatics2> { template <typename D> using type = consume_Windows_Services_Maps_IMapLocationFinderStatics2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapManagerStatics
{
    void ShowDownloadedMapsUI() const;
    void ShowMapsUpdateUI() const;
};
template <> struct consume<Windows::Services::Maps::IMapManagerStatics> { template <typename D> using type = consume_Windows_Services_Maps_IMapManagerStatics<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRoute
{
    Windows::Devices::Geolocation::GeoboundingBox BoundingBox() const;
    double LengthInMeters() const;
    Windows::Foundation::TimeSpan EstimatedDuration() const;
    Windows::Devices::Geolocation::Geopath Path() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteLeg> Legs() const;
    bool IsTrafficBased() const;
};
template <> struct consume<Windows::Services::Maps::IMapRoute> { template <typename D> using type = consume_Windows_Services_Maps_IMapRoute<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRoute2
{
    Windows::Services::Maps::MapRouteRestrictions ViolatedRestrictions() const;
    bool HasBlockedRoads() const;
};
template <> struct consume<Windows::Services::Maps::IMapRoute2> { template <typename D> using type = consume_Windows_Services_Maps_IMapRoute2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRoute3
{
    Windows::Foundation::TimeSpan DurationWithoutTraffic() const;
    Windows::Services::Maps::TrafficCongestion TrafficCongestion() const;
};
template <> struct consume<Windows::Services::Maps::IMapRoute3> { template <typename D> using type = consume_Windows_Services_Maps_IMapRoute3<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteDrivingOptions
{
    uint32_t MaxAlternateRouteCount() const;
    void MaxAlternateRouteCount(uint32_t value) const;
    Windows::Foundation::IReference<double> InitialHeading() const;
    void InitialHeading(optional<double> const& value) const;
    Windows::Services::Maps::MapRouteOptimization RouteOptimization() const;
    void RouteOptimization(Windows::Services::Maps::MapRouteOptimization const& value) const;
    Windows::Services::Maps::MapRouteRestrictions RouteRestrictions() const;
    void RouteRestrictions(Windows::Services::Maps::MapRouteRestrictions const& value) const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteDrivingOptions> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteFinderResult
{
    Windows::Services::Maps::MapRoute Route() const;
    Windows::Services::Maps::MapRouteFinderStatus Status() const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteFinderResult> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderResult<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteFinderResult2
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRoute> AlternateRoutes() const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteFinderResult2> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderResult2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteFinderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetWalkingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetWalkingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints) const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteFinderStatics> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderStatics<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteFinderStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteDrivingOptions const& options) const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteFinderStatics2> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderStatics2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteFinderStatics3
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints, Windows::Services::Maps::MapRouteDrivingOptions const& options) const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteFinderStatics3> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderStatics3<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteLeg
{
    Windows::Devices::Geolocation::GeoboundingBox BoundingBox() const;
    Windows::Devices::Geolocation::Geopath Path() const;
    double LengthInMeters() const;
    Windows::Foundation::TimeSpan EstimatedDuration() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteManeuver> Maneuvers() const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteLeg> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteLeg<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteLeg2
{
    Windows::Foundation::TimeSpan DurationWithoutTraffic() const;
    Windows::Services::Maps::TrafficCongestion TrafficCongestion() const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteLeg2> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteLeg2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteManeuver
{
    Windows::Devices::Geolocation::Geopoint StartingPoint() const;
    double LengthInMeters() const;
    hstring InstructionText() const;
    Windows::Services::Maps::MapRouteManeuverKind Kind() const;
    hstring ExitNumber() const;
    Windows::Services::Maps::MapManeuverNotices ManeuverNotices() const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteManeuver> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteManeuver<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteManeuver2
{
    double StartHeading() const;
    double EndHeading() const;
    hstring StreetName() const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteManeuver2> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteManeuver2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapRouteManeuver3
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::ManeuverWarning> Warnings() const;
};
template <> struct consume<Windows::Services::Maps::IMapRouteManeuver3> { template <typename D> using type = consume_Windows_Services_Maps_IMapRouteManeuver3<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapServiceStatics
{
    void ServiceToken(param::hstring const& value) const;
    hstring ServiceToken() const;
};
template <> struct consume<Windows::Services::Maps::IMapServiceStatics> { template <typename D> using type = consume_Windows_Services_Maps_IMapServiceStatics<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapServiceStatics2
{
    hstring WorldViewRegionCode() const;
};
template <> struct consume<Windows::Services::Maps::IMapServiceStatics2> { template <typename D> using type = consume_Windows_Services_Maps_IMapServiceStatics2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapServiceStatics3
{
    hstring DataAttributions() const;
};
template <> struct consume<Windows::Services::Maps::IMapServiceStatics3> { template <typename D> using type = consume_Windows_Services_Maps_IMapServiceStatics3<D>; };

template <typename D>
struct consume_Windows_Services_Maps_IMapServiceStatics4
{
    void DataUsagePreference(Windows::Services::Maps::MapServiceDataUsagePreference const& value) const;
    Windows::Services::Maps::MapServiceDataUsagePreference DataUsagePreference() const;
};
template <> struct consume<Windows::Services::Maps::IMapServiceStatics4> { template <typename D> using type = consume_Windows_Services_Maps_IMapServiceStatics4<D>; };

template <> struct abi<Windows::Services::Maps::IEnhancedWaypoint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Point(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Services::Maps::WaypointKind>* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IEnhancedWaypointFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* point, abi_t<Windows::Services::Maps::WaypointKind> kind, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IManeuverWarning>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Services::Maps::ManeuverWarningKind>* value) = 0;
    virtual HRESULT __stdcall get_Severity(abi_t<Windows::Services::Maps::ManeuverWarningSeverity>* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapAddress>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BuildingName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BuildingFloor(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BuildingRoom(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BuildingWing(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StreetNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Street(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Neighborhood(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_District(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Town(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Region(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RegionCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Country(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CountryCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PostCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Continent(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapAddress2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FormattedAddress(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapLocation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Point(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Address(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapLocationFinderResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Locations(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Services::Maps::MapLocationFinderStatus>* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapLocationFinderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindLocationsAtAsync(::IUnknown* queryPoint, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindLocationsAsync(HSTRING searchText, ::IUnknown* referencePoint, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindLocationsWithMaxCountAsync(HSTRING searchText, ::IUnknown* referencePoint, uint32_t maxCount, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapLocationFinderStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindLocationsAtWithAccuracyAsync(::IUnknown* queryPoint, abi_t<Windows::Services::Maps::MapLocationDesiredAccuracy> accuracy, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowDownloadedMapsUI() = 0;
    virtual HRESULT __stdcall ShowMapsUpdateUI() = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRoute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BoundingBox(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LengthInMeters(double* value) = 0;
    virtual HRESULT __stdcall get_EstimatedDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Path(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Legs(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsTrafficBased(bool* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRoute2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViolatedRestrictions(abi_t<Windows::Services::Maps::MapRouteRestrictions>* value) = 0;
    virtual HRESULT __stdcall get_HasBlockedRoads(bool* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRoute3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DurationWithoutTraffic(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_TrafficCongestion(abi_t<Windows::Services::Maps::TrafficCongestion>* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteDrivingOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxAlternateRouteCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxAlternateRouteCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_InitialHeading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InitialHeading(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RouteOptimization(abi_t<Windows::Services::Maps::MapRouteOptimization>* value) = 0;
    virtual HRESULT __stdcall put_RouteOptimization(abi_t<Windows::Services::Maps::MapRouteOptimization> value) = 0;
    virtual HRESULT __stdcall get_RouteRestrictions(abi_t<Windows::Services::Maps::MapRouteRestrictions>* value) = 0;
    virtual HRESULT __stdcall put_RouteRestrictions(abi_t<Windows::Services::Maps::MapRouteRestrictions> value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteFinderResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Route(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Services::Maps::MapRouteFinderStatus>* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteFinderResult2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlternateRoutes(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteFinderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDrivingRouteAsync(::IUnknown* startPoint, ::IUnknown* endPoint, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDrivingRouteWithOptimizationAsync(::IUnknown* startPoint, ::IUnknown* endPoint, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDrivingRouteWithOptimizationAndRestrictionsAsync(::IUnknown* startPoint, ::IUnknown* endPoint, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, abi_t<Windows::Services::Maps::MapRouteRestrictions> restrictions, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(::IUnknown* startPoint, ::IUnknown* endPoint, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, abi_t<Windows::Services::Maps::MapRouteRestrictions> restrictions, double headingInDegrees, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDrivingRouteFromWaypointsAsync(::IUnknown* wayPoints, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDrivingRouteFromWaypointsAndOptimizationAsync(::IUnknown* wayPoints, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(::IUnknown* wayPoints, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, abi_t<Windows::Services::Maps::MapRouteRestrictions> restrictions, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(::IUnknown* wayPoints, abi_t<Windows::Services::Maps::MapRouteOptimization> optimization, abi_t<Windows::Services::Maps::MapRouteRestrictions> restrictions, double headingInDegrees, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetWalkingRouteAsync(::IUnknown* startPoint, ::IUnknown* endPoint, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetWalkingRouteFromWaypointsAsync(::IUnknown* wayPoints, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteFinderStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDrivingRouteWithOptionsAsync(::IUnknown* startPoint, ::IUnknown* endPoint, ::IUnknown* options, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteFinderStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDrivingRouteFromEnhancedWaypointsAsync(::IUnknown* waypoints, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync(::IUnknown* waypoints, ::IUnknown* options, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteLeg>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BoundingBox(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Path(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LengthInMeters(double* value) = 0;
    virtual HRESULT __stdcall get_EstimatedDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Maneuvers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteLeg2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DurationWithoutTraffic(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_TrafficCongestion(abi_t<Windows::Services::Maps::TrafficCongestion>* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteManeuver>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StartingPoint(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LengthInMeters(double* value) = 0;
    virtual HRESULT __stdcall get_InstructionText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Services::Maps::MapRouteManeuverKind>* value) = 0;
    virtual HRESULT __stdcall get_ExitNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ManeuverNotices(abi_t<Windows::Services::Maps::MapManeuverNotices>* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteManeuver2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StartHeading(double* value) = 0;
    virtual HRESULT __stdcall get_EndHeading(double* value) = 0;
    virtual HRESULT __stdcall get_StreetName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapRouteManeuver3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Warnings(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapServiceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ServiceToken(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ServiceToken(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapServiceStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WorldViewRegionCode(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapServiceStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataAttributions(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::IMapServiceStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DataUsagePreference(abi_t<Windows::Services::Maps::MapServiceDataUsagePreference> value) = 0;
    virtual HRESULT __stdcall get_DataUsagePreference(abi_t<Windows::Services::Maps::MapServiceDataUsagePreference>* value) = 0;
};};

}
