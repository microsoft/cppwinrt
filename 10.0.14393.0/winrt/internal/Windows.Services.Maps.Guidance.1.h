// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Services.Maps.Guidance.0.h"
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Services.Maps.0.h"
#include "Windows.UI.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Maps::Guidance {

struct __declspec(uuid("ca2aa24a-c7c2-4d4c-9d7c-499576bceddb")) __declspec(novtable) IGuidanceAudioNotificationRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AudioNotification(winrt::Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind * value) = 0;
    virtual HRESULT __stdcall get_AudioFilePaths(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_AudioText(hstring * value) = 0;
};

struct __declspec(uuid("8404d114-6581-43b7-ac15-c9079bf90df1")) __declspec(novtable) IGuidanceLaneInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LaneMarkers(winrt::Windows::Services::Maps::Guidance::GuidanceLaneMarkers * value) = 0;
    virtual HRESULT __stdcall get_IsOnRoute(bool * value) = 0;
};

struct __declspec(uuid("fc09326c-ecc9-4928-a2a1-7232b99b94a1")) __declspec(novtable) IGuidanceManeuver : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StartLocation(Windows::Devices::Geolocation::IGeopoint ** value) = 0;
    virtual HRESULT __stdcall get_DistanceFromRouteStart(int32_t * value) = 0;
    virtual HRESULT __stdcall get_DistanceFromPreviousManeuver(int32_t * value) = 0;
    virtual HRESULT __stdcall get_DepartureRoadName(hstring * value) = 0;
    virtual HRESULT __stdcall get_NextRoadName(hstring * value) = 0;
    virtual HRESULT __stdcall get_DepartureShortRoadName(hstring * value) = 0;
    virtual HRESULT __stdcall get_NextShortRoadName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Services::Maps::Guidance::GuidanceManeuverKind * value) = 0;
    virtual HRESULT __stdcall get_StartAngle(int32_t * value) = 0;
    virtual HRESULT __stdcall get_EndAngle(int32_t * value) = 0;
    virtual HRESULT __stdcall get_RoadSignpost(Windows::Services::Maps::Guidance::IGuidanceRoadSignpost ** value) = 0;
    virtual HRESULT __stdcall get_InstructionText(hstring * value) = 0;
};

struct __declspec(uuid("b7acb168-2912-4a99-aff1-798609b981fe")) __declspec(novtable) IGuidanceMapMatchedCoordinate : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Location(Windows::Devices::Geolocation::IGeopoint ** value) = 0;
    virtual HRESULT __stdcall get_CurrentHeading(double * value) = 0;
    virtual HRESULT __stdcall get_CurrentSpeed(double * value) = 0;
    virtual HRESULT __stdcall get_IsOnStreet(bool * value) = 0;
    virtual HRESULT __stdcall get_Road(Windows::Services::Maps::Guidance::IGuidanceRoadSegment ** value) = 0;
};

struct __declspec(uuid("08f17ef7-8e3f-4d9a-be8a-108f9a012c67")) __declspec(novtable) IGuidanceNavigator : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_StartNavigating(Windows::Services::Maps::Guidance::IGuidanceRoute * route) = 0;
    virtual HRESULT __stdcall abi_StartSimulating(Windows::Services::Maps::Guidance::IGuidanceRoute * route, int32_t speedInMetersPerSecond) = 0;
    virtual HRESULT __stdcall abi_StartTracking() = 0;
    virtual HRESULT __stdcall abi_Pause() = 0;
    virtual HRESULT __stdcall abi_Resume() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall abi_RepeatLastAudioNotification() = 0;
    virtual HRESULT __stdcall get_AudioMeasurementSystem(winrt::Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem * value) = 0;
    virtual HRESULT __stdcall put_AudioMeasurementSystem(winrt::Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem value) = 0;
    virtual HRESULT __stdcall get_AudioNotifications(winrt::Windows::Services::Maps::Guidance::GuidanceAudioNotifications * value) = 0;
    virtual HRESULT __stdcall put_AudioNotifications(winrt::Windows::Services::Maps::Guidance::GuidanceAudioNotifications value) = 0;
    virtual HRESULT __stdcall add_GuidanceUpdated(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_GuidanceUpdated(event_token token) = 0;
    virtual HRESULT __stdcall add_DestinationReached(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DestinationReached(event_token token) = 0;
    virtual HRESULT __stdcall add_Rerouting(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Rerouting(event_token token) = 0;
    virtual HRESULT __stdcall add_Rerouted(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Rerouted(event_token token) = 0;
    virtual HRESULT __stdcall add_RerouteFailed(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RerouteFailed(event_token token) = 0;
    virtual HRESULT __stdcall add_UserLocationLost(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_UserLocationLost(event_token token) = 0;
    virtual HRESULT __stdcall add_UserLocationRestored(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_UserLocationRestored(event_token token) = 0;
    virtual HRESULT __stdcall abi_SetGuidanceVoice(int32_t voiceId, hstring voiceFolder) = 0;
    virtual HRESULT __stdcall abi_UpdateUserLocation(Windows::Devices::Geolocation::IGeocoordinate * userLocation) = 0;
    virtual HRESULT __stdcall abi_UpdateUserLocationWithPositionOverride(Windows::Devices::Geolocation::IGeocoordinate * userLocation, Windows::Devices::Geolocation::BasicGeoposition positionOverride) = 0;
};

struct __declspec(uuid("6cdc50d1-041c-4bf3-b633-a101fc2f6b57")) __declspec(novtable) IGuidanceNavigator2 : Windows::IInspectable
{
    virtual HRESULT __stdcall add_AudioNotificationRequested(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AudioNotificationRequested(event_token token) = 0;
    virtual HRESULT __stdcall get_IsGuidanceAudioMuted(bool * value) = 0;
    virtual HRESULT __stdcall put_IsGuidanceAudioMuted(bool value) = 0;
};

struct __declspec(uuid("00fd9513-4456-4e66-a143-3add6be08426")) __declspec(novtable) IGuidanceNavigatorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrent(Windows::Services::Maps::Guidance::IGuidanceNavigator ** result) = 0;
};

struct __declspec(uuid("54c5c3e2-7784-4c85-8c95-d0c6efb43965")) __declspec(novtable) IGuidanceNavigatorStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UseAppProvidedVoice(bool * value) = 0;
};

struct __declspec(uuid("115d4008-d528-454e-bb94-a50341d2c9f1")) __declspec(novtable) IGuidanceReroutedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Route(Windows::Services::Maps::Guidance::IGuidanceRoute ** result) = 0;
};

struct __declspec(uuid("b32758a6-be78-4c63-afe7-6c2957479b3e")) __declspec(novtable) IGuidanceRoadSegment : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RoadName(hstring * value) = 0;
    virtual HRESULT __stdcall get_ShortRoadName(hstring * value) = 0;
    virtual HRESULT __stdcall get_SpeedLimit(double * value) = 0;
    virtual HRESULT __stdcall get_TravelTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Path(Windows::Devices::Geolocation::IGeopath ** value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsHighway(bool * value) = 0;
    virtual HRESULT __stdcall get_IsTunnel(bool * value) = 0;
    virtual HRESULT __stdcall get_IsTollRoad(bool * value) = 0;
};

struct __declspec(uuid("f1a728b6-f77a-4742-8312-53300f9845f0")) __declspec(novtable) IGuidanceRoadSignpost : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExitNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_Exit(hstring * value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_ForegroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_ExitDirections(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("3a14545d-801a-40bd-a286-afb2010cce6c")) __declspec(novtable) IGuidanceRoute : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Distance(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Maneuvers(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> ** value) = 0;
    virtual HRESULT __stdcall get_BoundingBox(Windows::Devices::Geolocation::IGeoboundingBox ** value) = 0;
    virtual HRESULT __stdcall get_Path(Windows::Devices::Geolocation::IGeopath ** value) = 0;
    virtual HRESULT __stdcall get_RoadSegments(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> ** value) = 0;
    virtual HRESULT __stdcall abi_ConvertToMapRoute(Windows::Services::Maps::IMapRoute ** result) = 0;
};

struct __declspec(uuid("f56d926a-55ed-49c1-b09c-4b8223b50db3")) __declspec(novtable) IGuidanceRouteStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CanCreateFromMapRoute(Windows::Services::Maps::IMapRoute * mapRoute, bool * result) = 0;
    virtual HRESULT __stdcall abi_TryCreateFromMapRoute(Windows::Services::Maps::IMapRoute * mapRoute, Windows::Services::Maps::Guidance::IGuidanceRoute ** result) = 0;
};

struct __declspec(uuid("db1f8da5-b878-4d92-98dd-347d23d38262")) __declspec(novtable) IGuidanceTelemetryCollector : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Enabled(bool * value) = 0;
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall abi_ClearLocalData() = 0;
    virtual HRESULT __stdcall get_SpeedTrigger(double * value) = 0;
    virtual HRESULT __stdcall put_SpeedTrigger(double value) = 0;
    virtual HRESULT __stdcall get_UploadFrequency(int32_t * value) = 0;
    virtual HRESULT __stdcall put_UploadFrequency(int32_t value) = 0;
};

struct __declspec(uuid("36532047-f160-44fb-b578-94577ca05990")) __declspec(novtable) IGuidanceTelemetryCollectorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrent(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector ** result) = 0;
};

struct __declspec(uuid("fdac160b-9e8d-4de3-a9fa-b06321d18db9")) __declspec(novtable) IGuidanceUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Mode(winrt::Windows::Services::Maps::Guidance::GuidanceMode * value) = 0;
    virtual HRESULT __stdcall get_NextManeuver(Windows::Services::Maps::Guidance::IGuidanceManeuver ** value) = 0;
    virtual HRESULT __stdcall get_NextManeuverDistance(int32_t * value) = 0;
    virtual HRESULT __stdcall get_AfterNextManeuver(Windows::Services::Maps::Guidance::IGuidanceManeuver ** value) = 0;
    virtual HRESULT __stdcall get_AfterNextManeuverDistance(int32_t * value) = 0;
    virtual HRESULT __stdcall get_DistanceToDestination(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ElapsedDistance(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ElapsedTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_TimeToDestination(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_RoadName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Route(Windows::Services::Maps::Guidance::IGuidanceRoute ** result) = 0;
    virtual HRESULT __stdcall get_CurrentLocation(Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate ** result) = 0;
    virtual HRESULT __stdcall get_IsNewManeuver(bool * value) = 0;
    virtual HRESULT __stdcall get_LaneInfo(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo> ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceLaneInfo> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceLaneInfo; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceManeuver> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceManeuver; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceNavigator> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceNavigator; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceRoadSegment> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceRoadSegment; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceRoadSignpost> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceRoadSignpost; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceRoute> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceRoute; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceTelemetryCollector> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector; };
template <> struct traits<Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> { using default_interface = Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs; };

}

namespace Windows::Services::Maps::Guidance {

template <typename T> struct impl_IGuidanceAudioNotificationRequestedEventArgs;
template <typename T> struct impl_IGuidanceLaneInfo;
template <typename T> struct impl_IGuidanceManeuver;
template <typename T> struct impl_IGuidanceMapMatchedCoordinate;
template <typename T> struct impl_IGuidanceNavigator;
template <typename T> struct impl_IGuidanceNavigator2;
template <typename T> struct impl_IGuidanceNavigatorStatics;
template <typename T> struct impl_IGuidanceNavigatorStatics2;
template <typename T> struct impl_IGuidanceReroutedEventArgs;
template <typename T> struct impl_IGuidanceRoadSegment;
template <typename T> struct impl_IGuidanceRoadSignpost;
template <typename T> struct impl_IGuidanceRoute;
template <typename T> struct impl_IGuidanceRouteStatics;
template <typename T> struct impl_IGuidanceTelemetryCollector;
template <typename T> struct impl_IGuidanceTelemetryCollectorStatics;
template <typename T> struct impl_IGuidanceUpdatedEventArgs;

}

namespace impl {

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceAudioNotificationRequestedEventArgs<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceLaneInfo>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceLaneInfo<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceManeuver>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceManeuver<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceMapMatchedCoordinate<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceNavigator>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceNavigator<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceNavigator2>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator2;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceNavigator2<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceNavigatorStatics<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceNavigatorStatics2<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceReroutedEventArgs<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceRoadSegment>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceRoadSegment<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceRoadSignpost>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSignpost;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceRoadSignpost<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceRoute>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceRoute;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceRoute<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceRouteStatics>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceRouteStatics;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceRouteStatics<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceTelemetryCollector<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceTelemetryCollectorStatics<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs>
{
    using abi = ABI::Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs;
    template <typename D> using consume = Windows::Services::Maps::Guidance::impl_IGuidanceUpdatedEventArgs<D>;
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceLaneInfo>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceLaneInfo"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceManeuver>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceManeuver;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceManeuver"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceNavigator>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceNavigator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceNavigator"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceRoadSegment>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceRoadSegment"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceRoadSignpost>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceRoadSignpost;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceRoadSignpost"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceRoute>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceRoute;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceRoute"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceTelemetryCollector>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceTelemetryCollector;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceTelemetryCollector"; }
};

template <> struct traits<Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs>
{
    using abi = ABI::Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs"; }
};

}

}
