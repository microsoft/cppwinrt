// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

struct BasicGeoposition;
struct GeoboundingBox;
struct Geocoordinate;
struct Geopath;
struct Geopoint;

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps {

struct MapRoute;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps::Guidance {

enum class GuidanceAudioMeasurementSystem
{
    Meters = 0,
    MilesAndYards = 1,
    MilesAndFeet = 2,
};

enum class GuidanceAudioNotificationKind
{
    Maneuver = 0,
    Route = 1,
    Gps = 2,
    SpeedLimit = 3,
    Traffic = 4,
    TrafficCamera = 5,
};

enum class GuidanceAudioNotifications : unsigned
{
    None = 0x0,
    Maneuver = 0x1,
    Route = 0x2,
    Gps = 0x4,
    SpeedLimit = 0x8,
    Traffic = 0x10,
    TrafficCamera = 0x20,
};

DEFINE_ENUM_FLAG_OPERATORS(GuidanceAudioNotifications)

enum class GuidanceLaneMarkers : unsigned
{
    None = 0x0,
    LightRight = 0x1,
    Right = 0x2,
    HardRight = 0x4,
    Straight = 0x8,
    UTurnLeft = 0x10,
    HardLeft = 0x20,
    Left = 0x40,
    LightLeft = 0x80,
    UTurnRight = 0x100,
    Unknown = 0xFFFFFFFF,
};

DEFINE_ENUM_FLAG_OPERATORS(GuidanceLaneMarkers)

enum class GuidanceManeuverKind
{
    None = 0,
    GoStraight = 1,
    UTurnRight = 2,
    UTurnLeft = 3,
    TurnKeepRight = 4,
    TurnLightRight = 5,
    TurnRight = 6,
    TurnHardRight = 7,
    KeepMiddle = 8,
    TurnKeepLeft = 9,
    TurnLightLeft = 10,
    TurnLeft = 11,
    TurnHardLeft = 12,
    FreewayEnterRight = 13,
    FreewayEnterLeft = 14,
    FreewayLeaveRight = 15,
    FreewayLeaveLeft = 16,
    FreewayKeepRight = 17,
    FreewayKeepLeft = 18,
    TrafficCircleRight1 = 19,
    TrafficCircleRight2 = 20,
    TrafficCircleRight3 = 21,
    TrafficCircleRight4 = 22,
    TrafficCircleRight5 = 23,
    TrafficCircleRight6 = 24,
    TrafficCircleRight7 = 25,
    TrafficCircleRight8 = 26,
    TrafficCircleRight9 = 27,
    TrafficCircleRight10 = 28,
    TrafficCircleRight11 = 29,
    TrafficCircleRight12 = 30,
    TrafficCircleLeft1 = 31,
    TrafficCircleLeft2 = 32,
    TrafficCircleLeft3 = 33,
    TrafficCircleLeft4 = 34,
    TrafficCircleLeft5 = 35,
    TrafficCircleLeft6 = 36,
    TrafficCircleLeft7 = 37,
    TrafficCircleLeft8 = 38,
    TrafficCircleLeft9 = 39,
    TrafficCircleLeft10 = 40,
    TrafficCircleLeft11 = 41,
    TrafficCircleLeft12 = 42,
    Start = 43,
    End = 44,
    TakeFerry = 45,
    PassTransitStation = 46,
    LeaveTransitStation = 47,
};

enum class GuidanceMode
{
    None = 0,
    Simulation = 1,
    Navigation = 2,
    Tracking = 3,
};

struct IGuidanceAudioNotificationRequestedEventArgs;
struct IGuidanceLaneInfo;
struct IGuidanceManeuver;
struct IGuidanceMapMatchedCoordinate;
struct IGuidanceNavigator;
struct IGuidanceNavigator2;
struct IGuidanceNavigatorStatics;
struct IGuidanceNavigatorStatics2;
struct IGuidanceReroutedEventArgs;
struct IGuidanceRoadSegment;
struct IGuidanceRoadSignpost;
struct IGuidanceRoute;
struct IGuidanceRouteStatics;
struct IGuidanceTelemetryCollector;
struct IGuidanceTelemetryCollectorStatics;
struct IGuidanceUpdatedEventArgs;
struct GuidanceAudioNotificationRequestedEventArgs;
struct GuidanceLaneInfo;
struct GuidanceManeuver;
struct GuidanceMapMatchedCoordinate;
struct GuidanceNavigator;
struct GuidanceReroutedEventArgs;
struct GuidanceRoadSegment;
struct GuidanceRoadSignpost;
struct GuidanceRoute;
struct GuidanceTelemetryCollector;
struct GuidanceUpdatedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceLaneInfo>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceManeuver>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceNavigator>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceNavigator2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceRoadSegment>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceRoadSignpost>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceRoute>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceRouteStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceLaneInfo>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceManeuver>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceNavigator>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceRoadSegment>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceRoadSignpost>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceRoute>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceTelemetryCollector>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceAudioNotifications>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceLaneMarkers>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceManeuverKind>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::Guidance::GuidanceMode>{ using type = enum_category; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceAudioNotificationRequestedEventArgs" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceLaneInfo>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceLaneInfo" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceManeuver>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceManeuver" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceMapMatchedCoordinate" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceNavigator>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceNavigator" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceNavigator2>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceNavigator2" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics2" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceReroutedEventArgs" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceRoadSegment>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceRoadSegment" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceRoadSignpost>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceRoadSignpost" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceRoute>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceRoute" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceRouteStatics>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceRouteStatics" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceTelemetryCollector" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceTelemetryCollectorStatics" }; };
template <> struct name<Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.IGuidanceUpdatedEventArgs" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceLaneInfo>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceLaneInfo" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceManeuver>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceManeuver" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceNavigator>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceNavigator" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceRoadSegment>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceRoadSegment" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceRoadSignpost>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceRoadSignpost" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceRoute>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceRoute" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceTelemetryCollector>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceTelemetryCollector" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceAudioMeasurementSystem" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceAudioNotificationKind" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceAudioNotifications>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceAudioNotifications" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceLaneMarkers>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceLaneMarkers" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceManeuverKind>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceManeuverKind" }; };
template <> struct name<Windows::Services::Maps::Guidance::GuidanceMode>{ static constexpr auto & value{ L"Windows.Services.Maps.Guidance.GuidanceMode" }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs>{ static constexpr GUID value{ 0xCA2AA24A,0xC7C2,0x4D4C,{ 0x9D,0x7C,0x49,0x95,0x76,0xBC,0xED,0xDB } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceLaneInfo>{ static constexpr GUID value{ 0x8404D114,0x6581,0x43B7,{ 0xAC,0x15,0xC9,0x07,0x9B,0xF9,0x0D,0xF1 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceManeuver>{ static constexpr GUID value{ 0xFC09326C,0xECC9,0x4928,{ 0xA2,0xA1,0x72,0x32,0xB9,0x9B,0x94,0xA1 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate>{ static constexpr GUID value{ 0xB7ACB168,0x2912,0x4A99,{ 0xAF,0xF1,0x79,0x86,0x09,0xB9,0x81,0xFE } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceNavigator>{ static constexpr GUID value{ 0x08F17EF7,0x8E3F,0x4D9A,{ 0xBE,0x8A,0x10,0x8F,0x9A,0x01,0x2C,0x67 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceNavigator2>{ static constexpr GUID value{ 0x6CDC50D1,0x041C,0x4BF3,{ 0xB6,0x33,0xA1,0x01,0xFC,0x2F,0x6B,0x57 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics>{ static constexpr GUID value{ 0x00FD9513,0x4456,0x4E66,{ 0xA1,0x43,0x3A,0xDD,0x6B,0xE0,0x84,0x26 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2>{ static constexpr GUID value{ 0x54C5C3E2,0x7784,0x4C85,{ 0x8C,0x95,0xD0,0xC6,0xEF,0xB4,0x39,0x65 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs>{ static constexpr GUID value{ 0x115D4008,0xD528,0x454E,{ 0xBB,0x94,0xA5,0x03,0x41,0xD2,0xC9,0xF1 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceRoadSegment>{ static constexpr GUID value{ 0xB32758A6,0xBE78,0x4C63,{ 0xAF,0xE7,0x6C,0x29,0x57,0x47,0x9B,0x3E } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceRoadSignpost>{ static constexpr GUID value{ 0xF1A728B6,0xF77A,0x4742,{ 0x83,0x12,0x53,0x30,0x0F,0x98,0x45,0xF0 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceRoute>{ static constexpr GUID value{ 0x3A14545D,0x801A,0x40BD,{ 0xA2,0x86,0xAF,0xB2,0x01,0x0C,0xCE,0x6C } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceRouteStatics>{ static constexpr GUID value{ 0xF56D926A,0x55ED,0x49C1,{ 0xB0,0x9C,0x4B,0x82,0x23,0xB5,0x0D,0xB3 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector>{ static constexpr GUID value{ 0xDB1F8DA5,0xB878,0x4D92,{ 0x98,0xDD,0x34,0x7D,0x23,0xD3,0x82,0x62 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics>{ static constexpr GUID value{ 0x36532047,0xF160,0x44FB,{ 0xB5,0x78,0x94,0x57,0x7C,0xA0,0x59,0x90 } }; };
template <> struct guid<Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs>{ static constexpr GUID value{ 0xFDAC160B,0x9E8D,0x4DE3,{ 0xA9,0xFA,0xB0,0x63,0x21,0xD1,0x8D,0xB9 } }; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs>{ using type = Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceLaneInfo>{ using type = Windows::Services::Maps::Guidance::IGuidanceLaneInfo; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceManeuver>{ using type = Windows::Services::Maps::Guidance::IGuidanceManeuver; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate>{ using type = Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceNavigator>{ using type = Windows::Services::Maps::Guidance::IGuidanceNavigator; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs>{ using type = Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceRoadSegment>{ using type = Windows::Services::Maps::Guidance::IGuidanceRoadSegment; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceRoadSignpost>{ using type = Windows::Services::Maps::Guidance::IGuidanceRoadSignpost; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceRoute>{ using type = Windows::Services::Maps::Guidance::IGuidanceRoute; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceTelemetryCollector>{ using type = Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector; };
template <> struct default_interface<Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs>{ using type = Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceAudioNotificationRequestedEventArgs
{
    Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind AudioNotification() const;
    Windows::Foundation::Collections::IVectorView<hstring> AudioFilePaths() const;
    hstring AudioText() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceAudioNotificationRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceLaneInfo
{
    Windows::Services::Maps::Guidance::GuidanceLaneMarkers LaneMarkers() const;
    bool IsOnRoute() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceLaneInfo> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceLaneInfo<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceManeuver
{
    Windows::Devices::Geolocation::Geopoint StartLocation() const;
    int32_t DistanceFromRouteStart() const;
    int32_t DistanceFromPreviousManeuver() const;
    hstring DepartureRoadName() const;
    hstring NextRoadName() const;
    hstring DepartureShortRoadName() const;
    hstring NextShortRoadName() const;
    Windows::Services::Maps::Guidance::GuidanceManeuverKind Kind() const;
    int32_t StartAngle() const;
    int32_t EndAngle() const;
    Windows::Services::Maps::Guidance::GuidanceRoadSignpost RoadSignpost() const;
    hstring InstructionText() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceManeuver> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate
{
    Windows::Devices::Geolocation::Geopoint Location() const;
    double CurrentHeading() const;
    double CurrentSpeed() const;
    bool IsOnStreet() const;
    Windows::Services::Maps::Guidance::GuidanceRoadSegment Road() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceNavigator
{
    void StartNavigating(Windows::Services::Maps::Guidance::GuidanceRoute const& route) const;
    void StartSimulating(Windows::Services::Maps::Guidance::GuidanceRoute const& route, int32_t speedInMetersPerSecond) const;
    void StartTracking() const;
    void Pause() const;
    void Resume() const;
    void Stop() const;
    void RepeatLastAudioNotification() const;
    Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem AudioMeasurementSystem() const;
    void AudioMeasurementSystem(Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem const& value) const;
    Windows::Services::Maps::Guidance::GuidanceAudioNotifications AudioNotifications() const;
    void AudioNotifications(Windows::Services::Maps::Guidance::GuidanceAudioNotifications const& value) const;
    event_token GuidanceUpdated(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> const& handler) const;
    using GuidanceUpdated_revoker = event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator>;
    GuidanceUpdated_revoker GuidanceUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> const& handler) const;
    void GuidanceUpdated(event_token const& token) const;
    event_token DestinationReached(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    using DestinationReached_revoker = event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator>;
    DestinationReached_revoker DestinationReached(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    void DestinationReached(event_token const& token) const;
    event_token Rerouting(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    using Rerouting_revoker = event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator>;
    Rerouting_revoker Rerouting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    void Rerouting(event_token const& token) const;
    event_token Rerouted(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> const& handler) const;
    using Rerouted_revoker = event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator>;
    Rerouted_revoker Rerouted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> const& handler) const;
    void Rerouted(event_token const& token) const;
    event_token RerouteFailed(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    using RerouteFailed_revoker = event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator>;
    RerouteFailed_revoker RerouteFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    void RerouteFailed(event_token const& token) const;
    event_token UserLocationLost(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    using UserLocationLost_revoker = event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator>;
    UserLocationLost_revoker UserLocationLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    void UserLocationLost(event_token const& token) const;
    event_token UserLocationRestored(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    using UserLocationRestored_revoker = event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator>;
    UserLocationRestored_revoker UserLocationRestored(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const;
    void UserLocationRestored(event_token const& token) const;
    void SetGuidanceVoice(int32_t voiceId, param::hstring const& voiceFolder) const;
    void UpdateUserLocation(Windows::Devices::Geolocation::Geocoordinate const& userLocation) const;
    void UpdateUserLocation(Windows::Devices::Geolocation::Geocoordinate const& userLocation, Windows::Devices::Geolocation::BasicGeoposition const& positionOverride) const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceNavigator> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceNavigator2
{
    event_token AudioNotificationRequested(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> const& value) const;
    using AudioNotificationRequested_revoker = event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator2>;
    AudioNotificationRequested_revoker AudioNotificationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> const& value) const;
    void AudioNotificationRequested(event_token const& token) const;
    bool IsGuidanceAudioMuted() const;
    void IsGuidanceAudioMuted(bool value) const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceNavigator2> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceNavigator2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics
{
    Windows::Services::Maps::Guidance::GuidanceNavigator GetCurrent() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics2
{
    bool UseAppProvidedVoice() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics2<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceReroutedEventArgs
{
    Windows::Services::Maps::Guidance::GuidanceRoute Route() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceReroutedEventArgs<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment
{
    hstring RoadName() const;
    hstring ShortRoadName() const;
    double SpeedLimit() const;
    Windows::Foundation::TimeSpan TravelTime() const;
    Windows::Devices::Geolocation::Geopath Path() const;
    hstring Id() const;
    bool IsHighway() const;
    bool IsTunnel() const;
    bool IsTollRoad() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceRoadSegment> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost
{
    hstring ExitNumber() const;
    hstring Exit() const;
    Windows::UI::Color BackgroundColor() const;
    Windows::UI::Color ForegroundColor() const;
    Windows::Foundation::Collections::IVectorView<hstring> ExitDirections() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceRoadSignpost> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceRoute
{
    Windows::Foundation::TimeSpan Duration() const;
    int32_t Distance() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> Maneuvers() const;
    Windows::Devices::Geolocation::GeoboundingBox BoundingBox() const;
    Windows::Devices::Geolocation::Geopath Path() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> RoadSegments() const;
    Windows::Services::Maps::MapRoute ConvertToMapRoute() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceRoute> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceRoute<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceRouteStatics
{
    bool CanCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute) const;
    Windows::Services::Maps::Guidance::GuidanceRoute TryCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute) const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceRouteStatics> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceRouteStatics<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector
{
    bool Enabled() const;
    void Enabled(bool value) const;
    void ClearLocalData() const;
    double SpeedTrigger() const;
    void SpeedTrigger(double value) const;
    int32_t UploadFrequency() const;
    void UploadFrequency(int32_t value) const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollectorStatics
{
    Windows::Services::Maps::Guidance::GuidanceTelemetryCollector GetCurrent() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollectorStatics<D>; };

template <typename D>
struct consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs
{
    Windows::Services::Maps::Guidance::GuidanceMode Mode() const;
    Windows::Services::Maps::Guidance::GuidanceManeuver NextManeuver() const;
    int32_t NextManeuverDistance() const;
    Windows::Services::Maps::Guidance::GuidanceManeuver AfterNextManeuver() const;
    int32_t AfterNextManeuverDistance() const;
    int32_t DistanceToDestination() const;
    int32_t ElapsedDistance() const;
    Windows::Foundation::TimeSpan ElapsedTime() const;
    Windows::Foundation::TimeSpan TimeToDestination() const;
    hstring RoadName() const;
    Windows::Services::Maps::Guidance::GuidanceRoute Route() const;
    Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate CurrentLocation() const;
    bool IsNewManeuver() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo> LaneInfo() const;
};
template <> struct consume<Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs> { template <typename D> using type = consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>; };

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AudioNotification(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind>* value) = 0;
    virtual HRESULT __stdcall get_AudioFilePaths(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceLaneInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LaneMarkers(abi_t<Windows::Services::Maps::Guidance::GuidanceLaneMarkers>* value) = 0;
    virtual HRESULT __stdcall get_IsOnRoute(bool* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceManeuver>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StartLocation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DistanceFromRouteStart(int32_t* value) = 0;
    virtual HRESULT __stdcall get_DistanceFromPreviousManeuver(int32_t* value) = 0;
    virtual HRESULT __stdcall get_DepartureRoadName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NextRoadName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DepartureShortRoadName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NextShortRoadName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Services::Maps::Guidance::GuidanceManeuverKind>* value) = 0;
    virtual HRESULT __stdcall get_StartAngle(int32_t* value) = 0;
    virtual HRESULT __stdcall get_EndAngle(int32_t* value) = 0;
    virtual HRESULT __stdcall get_RoadSignpost(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InstructionText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CurrentHeading(double* value) = 0;
    virtual HRESULT __stdcall get_CurrentSpeed(double* value) = 0;
    virtual HRESULT __stdcall get_IsOnStreet(bool* value) = 0;
    virtual HRESULT __stdcall get_Road(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceNavigator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartNavigating(::IUnknown* route) = 0;
    virtual HRESULT __stdcall StartSimulating(::IUnknown* route, int32_t speedInMetersPerSecond) = 0;
    virtual HRESULT __stdcall StartTracking() = 0;
    virtual HRESULT __stdcall Pause() = 0;
    virtual HRESULT __stdcall Resume() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall RepeatLastAudioNotification() = 0;
    virtual HRESULT __stdcall get_AudioMeasurementSystem(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem>* value) = 0;
    virtual HRESULT __stdcall put_AudioMeasurementSystem(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem> value) = 0;
    virtual HRESULT __stdcall get_AudioNotifications(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioNotifications>* value) = 0;
    virtual HRESULT __stdcall put_AudioNotifications(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioNotifications> value) = 0;
    virtual HRESULT __stdcall add_GuidanceUpdated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GuidanceUpdated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DestinationReached(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DestinationReached(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Rerouting(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Rerouting(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Rerouted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Rerouted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RerouteFailed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RerouteFailed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_UserLocationLost(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_UserLocationLost(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_UserLocationRestored(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_UserLocationRestored(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall SetGuidanceVoice(int32_t voiceId, HSTRING voiceFolder) = 0;
    virtual HRESULT __stdcall UpdateUserLocation(::IUnknown* userLocation) = 0;
    virtual HRESULT __stdcall UpdateUserLocationWithPositionOverride(::IUnknown* userLocation, abi_t<Windows::Devices::Geolocation::BasicGeoposition> positionOverride) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceNavigator2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_AudioNotificationRequested(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AudioNotificationRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_IsGuidanceAudioMuted(bool* value) = 0;
    virtual HRESULT __stdcall put_IsGuidanceAudioMuted(bool value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrent(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UseAppProvidedVoice(bool* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Route(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceRoadSegment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RoadName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ShortRoadName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SpeedLimit(double* value) = 0;
    virtual HRESULT __stdcall get_TravelTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Path(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsHighway(bool* value) = 0;
    virtual HRESULT __stdcall get_IsTunnel(bool* value) = 0;
    virtual HRESULT __stdcall get_IsTollRoad(bool* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceRoadSignpost>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExitNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Exit(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_ForegroundColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_ExitDirections(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceRoute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Distance(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Maneuvers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BoundingBox(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Path(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RoadSegments(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ConvertToMapRoute(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceRouteStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CanCreateFromMapRoute(::IUnknown* mapRoute, bool* result) = 0;
    virtual HRESULT __stdcall TryCreateFromMapRoute(::IUnknown* mapRoute, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall ClearLocalData() = 0;
    virtual HRESULT __stdcall get_SpeedTrigger(double* value) = 0;
    virtual HRESULT __stdcall put_SpeedTrigger(double value) = 0;
    virtual HRESULT __stdcall get_UploadFrequency(int32_t* value) = 0;
    virtual HRESULT __stdcall put_UploadFrequency(int32_t value) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrent(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Services::Maps::Guidance::GuidanceMode>* value) = 0;
    virtual HRESULT __stdcall get_NextManeuver(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NextManeuverDistance(int32_t* value) = 0;
    virtual HRESULT __stdcall get_AfterNextManeuver(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AfterNextManeuverDistance(int32_t* value) = 0;
    virtual HRESULT __stdcall get_DistanceToDestination(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ElapsedDistance(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ElapsedTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_TimeToDestination(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_RoadName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Route(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_CurrentLocation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_IsNewManeuver(bool* value) = 0;
    virtual HRESULT __stdcall get_LaneInfo(::IUnknown** value) = 0;
};};

}
