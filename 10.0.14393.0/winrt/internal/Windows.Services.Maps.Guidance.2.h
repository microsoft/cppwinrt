// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Services.Maps.Guidance.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_81493670_e515_5c62_b34c_6e3d996cad31
#define WINRT_GENERIC_81493670_e515_5c62_b34c_6e3d996cad31
template <> struct __declspec(uuid("81493670-e515-5c62-b34c-6e3d996cad31")) __declspec(novtable) IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo> : impl_IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_82b3f7df_bf13_5445_aadc_ec61b50fbb46
#define WINRT_GENERIC_82b3f7df_bf13_5445_aadc_ec61b50fbb46
template <> struct __declspec(uuid("82b3f7df-bf13-5445-aadc-ec61b50fbb46")) __declspec(novtable) TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> : impl_TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_3f496c35_3dca_5e91_8730_6ef77e9d70bd
#define WINRT_GENERIC_3f496c35_3dca_5e91_8730_6ef77e9d70bd
template <> struct __declspec(uuid("3f496c35-3dca-5e91-8730-6ef77e9d70bd")) __declspec(novtable) TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> : impl_TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_61b92b1b_f22f_581b_bfa0_4868c314c63a
#define WINRT_GENERIC_61b92b1b_f22f_581b_bfa0_4868c314c63a
template <> struct __declspec(uuid("61b92b1b-f22f-581b-bfa0-4868c314c63a")) __declspec(novtable) TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> : impl_TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_743db36f_e9aa_557a_9fd7_304c9b0499df
#define WINRT_GENERIC_743db36f_e9aa_557a_9fd7_304c9b0499df
template <> struct __declspec(uuid("743db36f-e9aa-557a-9fd7-304c9b0499df")) __declspec(novtable) TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> : impl_TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_875644d8_57a4_59d6_9d2c_5d450d39d2f6
#define WINRT_GENERIC_875644d8_57a4_59d6_9d2c_5d450d39d2f6
template <> struct __declspec(uuid("875644d8-57a4-59d6-9d2c-5d450d39d2f6")) __declspec(novtable) IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> : impl_IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> {};
#endif

#ifndef WINRT_GENERIC_f04c7cc2_4d54_5244_beb2_8f4f05c184e6
#define WINRT_GENERIC_f04c7cc2_4d54_5244_beb2_8f4f05c184e6
template <> struct __declspec(uuid("f04c7cc2-4d54-5244-beb2-8f4f05c184e6")) __declspec(novtable) IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> : impl_IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_4d4ce4d8_7ce0_5168_ab29_6bcf7f198a58
#define WINRT_GENERIC_4d4ce4d8_7ce0_5168_ab29_6bcf7f198a58
template <> struct __declspec(uuid("4d4ce4d8-7ce0-5168-ab29-6bcf7f198a58")) __declspec(novtable) IIterator<Windows::Services::Maps::Guidance::GuidanceLaneInfo> : impl_IIterator<Windows::Services::Maps::Guidance::GuidanceLaneInfo> {};
#endif

#ifndef WINRT_GENERIC_45960d72_1bf6_5a1d_a17f_e83f56f1ab57
#define WINRT_GENERIC_45960d72_1bf6_5a1d_a17f_e83f56f1ab57
template <> struct __declspec(uuid("45960d72-1bf6-5a1d-a17f-e83f56f1ab57")) __declspec(novtable) IIterable<Windows::Services::Maps::Guidance::GuidanceLaneInfo> : impl_IIterable<Windows::Services::Maps::Guidance::GuidanceLaneInfo> {};
#endif

#ifndef WINRT_GENERIC_74a37092_2641_5c3d_b3cb_689dc8aba22e
#define WINRT_GENERIC_74a37092_2641_5c3d_b3cb_689dc8aba22e
template <> struct __declspec(uuid("74a37092-2641-5c3d-b3cb-689dc8aba22e")) __declspec(novtable) IIterator<Windows::Services::Maps::Guidance::GuidanceManeuver> : impl_IIterator<Windows::Services::Maps::Guidance::GuidanceManeuver> {};
#endif

#ifndef WINRT_GENERIC_b5780d67_8a8b_558f_a4b6_c4531ef32ec8
#define WINRT_GENERIC_b5780d67_8a8b_558f_a4b6_c4531ef32ec8
template <> struct __declspec(uuid("b5780d67-8a8b-558f-a4b6-c4531ef32ec8")) __declspec(novtable) IIterable<Windows::Services::Maps::Guidance::GuidanceManeuver> : impl_IIterable<Windows::Services::Maps::Guidance::GuidanceManeuver> {};
#endif

#ifndef WINRT_GENERIC_148cb8ff_3ab9_53ab_8824_256a62047b43
#define WINRT_GENERIC_148cb8ff_3ab9_53ab_8824_256a62047b43
template <> struct __declspec(uuid("148cb8ff-3ab9-53ab-8824-256a62047b43")) __declspec(novtable) IIterator<Windows::Services::Maps::Guidance::GuidanceRoadSegment> : impl_IIterator<Windows::Services::Maps::Guidance::GuidanceRoadSegment> {};
#endif

#ifndef WINRT_GENERIC_f7c614c4_0fca_5eda_804c_85c829956334
#define WINRT_GENERIC_f7c614c4_0fca_5eda_804c_85c829956334
template <> struct __declspec(uuid("f7c614c4-0fca-5eda-804c-85c829956334")) __declspec(novtable) IIterable<Windows::Services::Maps::Guidance::GuidanceRoadSegment> : impl_IIterable<Windows::Services::Maps::Guidance::GuidanceRoadSegment> {};
#endif


}

namespace Windows::Services::Maps::Guidance {

template <typename D>
struct WINRT_EBO impl_IGuidanceAudioNotificationRequestedEventArgs
{
    Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind AudioNotification() const;
    Windows::Foundation::Collections::IVectorView<hstring> AudioFilePaths() const;
    hstring AudioText() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceLaneInfo
{
    Windows::Services::Maps::Guidance::GuidanceLaneMarkers LaneMarkers() const;
    bool IsOnRoute() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceManeuver
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

template <typename D>
struct WINRT_EBO impl_IGuidanceMapMatchedCoordinate
{
    Windows::Devices::Geolocation::Geopoint Location() const;
    double CurrentHeading() const;
    double CurrentSpeed() const;
    bool IsOnStreet() const;
    Windows::Services::Maps::Guidance::GuidanceRoadSegment Road() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceNavigator
{
    void StartNavigating(const Windows::Services::Maps::Guidance::GuidanceRoute & route) const;
    void StartSimulating(const Windows::Services::Maps::Guidance::GuidanceRoute & route, int32_t speedInMetersPerSecond) const;
    void StartTracking() const;
    void Pause() const;
    void Resume() const;
    void Stop() const;
    void RepeatLastAudioNotification() const;
    Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem AudioMeasurementSystem() const;
    void AudioMeasurementSystem(Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem value) const;
    Windows::Services::Maps::Guidance::GuidanceAudioNotifications AudioNotifications() const;
    void AudioNotifications(Windows::Services::Maps::Guidance::GuidanceAudioNotifications value) const;
    event_token GuidanceUpdated(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> & handler) const;
    using GuidanceUpdated_revoker = event_revoker<IGuidanceNavigator>;
    GuidanceUpdated_revoker GuidanceUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> & handler) const;
    void GuidanceUpdated(event_token token) const;
    event_token DestinationReached(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    using DestinationReached_revoker = event_revoker<IGuidanceNavigator>;
    DestinationReached_revoker DestinationReached(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    void DestinationReached(event_token token) const;
    event_token Rerouting(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    using Rerouting_revoker = event_revoker<IGuidanceNavigator>;
    Rerouting_revoker Rerouting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    void Rerouting(event_token token) const;
    event_token Rerouted(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> & handler) const;
    using Rerouted_revoker = event_revoker<IGuidanceNavigator>;
    Rerouted_revoker Rerouted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> & handler) const;
    void Rerouted(event_token token) const;
    event_token RerouteFailed(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    using RerouteFailed_revoker = event_revoker<IGuidanceNavigator>;
    RerouteFailed_revoker RerouteFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    void RerouteFailed(event_token token) const;
    event_token UserLocationLost(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    using UserLocationLost_revoker = event_revoker<IGuidanceNavigator>;
    UserLocationLost_revoker UserLocationLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    void UserLocationLost(event_token token) const;
    event_token UserLocationRestored(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    using UserLocationRestored_revoker = event_revoker<IGuidanceNavigator>;
    UserLocationRestored_revoker UserLocationRestored(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::IInspectable> & handler) const;
    void UserLocationRestored(event_token token) const;
    void SetGuidanceVoice(int32_t voiceId, hstring_ref voiceFolder) const;
    void UpdateUserLocation(const Windows::Devices::Geolocation::Geocoordinate & userLocation) const;
    void UpdateUserLocation(const Windows::Devices::Geolocation::Geocoordinate & userLocation, const Windows::Devices::Geolocation::BasicGeoposition & positionOverride) const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceNavigator2
{
    event_token AudioNotificationRequested(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> & value) const;
    using AudioNotificationRequested_revoker = event_revoker<IGuidanceNavigator2>;
    AudioNotificationRequested_revoker AudioNotificationRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> & value) const;
    void AudioNotificationRequested(event_token token) const;
    bool IsGuidanceAudioMuted() const;
    void IsGuidanceAudioMuted(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceNavigatorStatics
{
    Windows::Services::Maps::Guidance::GuidanceNavigator GetCurrent() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceNavigatorStatics2
{
    bool UseAppProvidedVoice() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceReroutedEventArgs
{
    Windows::Services::Maps::Guidance::GuidanceRoute Route() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceRoadSegment
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

template <typename D>
struct WINRT_EBO impl_IGuidanceRoadSignpost
{
    hstring ExitNumber() const;
    hstring Exit() const;
    Windows::UI::Color BackgroundColor() const;
    Windows::UI::Color ForegroundColor() const;
    Windows::Foundation::Collections::IVectorView<hstring> ExitDirections() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceRoute
{
    Windows::Foundation::TimeSpan Duration() const;
    int32_t Distance() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> Maneuvers() const;
    Windows::Devices::Geolocation::GeoboundingBox BoundingBox() const;
    Windows::Devices::Geolocation::Geopath Path() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> RoadSegments() const;
    Windows::Services::Maps::MapRoute ConvertToMapRoute() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceRouteStatics
{
    bool CanCreateFromMapRoute(const Windows::Services::Maps::MapRoute & mapRoute) const;
    Windows::Services::Maps::Guidance::GuidanceRoute TryCreateFromMapRoute(const Windows::Services::Maps::MapRoute & mapRoute) const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceTelemetryCollector
{
    bool Enabled() const;
    void Enabled(bool value) const;
    void ClearLocalData() const;
    double SpeedTrigger() const;
    void SpeedTrigger(double value) const;
    int32_t UploadFrequency() const;
    void UploadFrequency(int32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceTelemetryCollectorStatics
{
    Windows::Services::Maps::Guidance::GuidanceTelemetryCollector GetCurrent() const;
};

template <typename D>
struct WINRT_EBO impl_IGuidanceUpdatedEventArgs
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

struct IGuidanceAudioNotificationRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IGuidanceAudioNotificationRequestedEventArgs>
{
    IGuidanceAudioNotificationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceAudioNotificationRequestedEventArgs>(m_ptr); }
};

struct IGuidanceLaneInfo :
    Windows::IInspectable,
    impl::consume<IGuidanceLaneInfo>
{
    IGuidanceLaneInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceLaneInfo>(m_ptr); }
};

struct IGuidanceManeuver :
    Windows::IInspectable,
    impl::consume<IGuidanceManeuver>
{
    IGuidanceManeuver(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceManeuver>(m_ptr); }
};

struct IGuidanceMapMatchedCoordinate :
    Windows::IInspectable,
    impl::consume<IGuidanceMapMatchedCoordinate>
{
    IGuidanceMapMatchedCoordinate(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceMapMatchedCoordinate>(m_ptr); }
};

struct IGuidanceNavigator :
    Windows::IInspectable,
    impl::consume<IGuidanceNavigator>
{
    IGuidanceNavigator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceNavigator>(m_ptr); }
};

struct IGuidanceNavigator2 :
    Windows::IInspectable,
    impl::consume<IGuidanceNavigator2>
{
    IGuidanceNavigator2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceNavigator2>(m_ptr); }
};

struct IGuidanceNavigatorStatics :
    Windows::IInspectable,
    impl::consume<IGuidanceNavigatorStatics>
{
    IGuidanceNavigatorStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceNavigatorStatics>(m_ptr); }
};

struct IGuidanceNavigatorStatics2 :
    Windows::IInspectable,
    impl::consume<IGuidanceNavigatorStatics2>
{
    IGuidanceNavigatorStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceNavigatorStatics2>(m_ptr); }
};

struct IGuidanceReroutedEventArgs :
    Windows::IInspectable,
    impl::consume<IGuidanceReroutedEventArgs>
{
    IGuidanceReroutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceReroutedEventArgs>(m_ptr); }
};

struct IGuidanceRoadSegment :
    Windows::IInspectable,
    impl::consume<IGuidanceRoadSegment>
{
    IGuidanceRoadSegment(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceRoadSegment>(m_ptr); }
};

struct IGuidanceRoadSignpost :
    Windows::IInspectable,
    impl::consume<IGuidanceRoadSignpost>
{
    IGuidanceRoadSignpost(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceRoadSignpost>(m_ptr); }
};

struct IGuidanceRoute :
    Windows::IInspectable,
    impl::consume<IGuidanceRoute>
{
    IGuidanceRoute(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceRoute>(m_ptr); }
};

struct IGuidanceRouteStatics :
    Windows::IInspectable,
    impl::consume<IGuidanceRouteStatics>
{
    IGuidanceRouteStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceRouteStatics>(m_ptr); }
};

struct IGuidanceTelemetryCollector :
    Windows::IInspectable,
    impl::consume<IGuidanceTelemetryCollector>
{
    IGuidanceTelemetryCollector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceTelemetryCollector>(m_ptr); }
};

struct IGuidanceTelemetryCollectorStatics :
    Windows::IInspectable,
    impl::consume<IGuidanceTelemetryCollectorStatics>
{
    IGuidanceTelemetryCollectorStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceTelemetryCollectorStatics>(m_ptr); }
};

struct IGuidanceUpdatedEventArgs :
    Windows::IInspectable,
    impl::consume<IGuidanceUpdatedEventArgs>
{
    IGuidanceUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGuidanceUpdatedEventArgs>(m_ptr); }
};

}

}
