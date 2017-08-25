// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Services.Maps.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Services.Maps.Guidance.2.h"
#include "winrt/Windows.Services.Maps.h"

namespace winrt::impl {

template <typename D> Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind consume_Windows_Services_Maps_Guidance_IGuidanceAudioNotificationRequestedEventArgs<D>::AudioNotification() const
{
    Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs)->get_AudioNotification(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Services_Maps_Guidance_IGuidanceAudioNotificationRequestedEventArgs<D>::AudioFilePaths() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs)->get_AudioFilePaths(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceAudioNotificationRequestedEventArgs<D>::AudioText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs)->get_AudioText(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceLaneMarkers consume_Windows_Services_Maps_Guidance_IGuidanceLaneInfo<D>::LaneMarkers() const
{
    Windows::Services::Maps::Guidance::GuidanceLaneMarkers value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceLaneInfo)->get_LaneMarkers(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceLaneInfo<D>::IsOnRoute() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceLaneInfo)->get_IsOnRoute(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::StartLocation() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_StartLocation(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::DistanceFromRouteStart() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_DistanceFromRouteStart(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::DistanceFromPreviousManeuver() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_DistanceFromPreviousManeuver(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::DepartureRoadName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_DepartureRoadName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::NextRoadName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_NextRoadName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::DepartureShortRoadName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_DepartureShortRoadName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::NextShortRoadName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_NextShortRoadName(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceManeuverKind consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::Kind() const
{
    Windows::Services::Maps::Guidance::GuidanceManeuverKind value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::StartAngle() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_StartAngle(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::EndAngle() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_EndAngle(&value));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoadSignpost consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::RoadSignpost() const
{
    Windows::Services::Maps::Guidance::GuidanceRoadSignpost value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_RoadSignpost(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceManeuver<D>::InstructionText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceManeuver)->get_InstructionText(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate)->get_Location(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate<D>::CurrentHeading() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate)->get_CurrentHeading(&value));
    return value;
}

template <typename D> double consume_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate<D>::CurrentSpeed() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate)->get_CurrentSpeed(&value));
    return value;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate<D>::IsOnStreet() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate)->get_IsOnStreet(&value));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoadSegment consume_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate<D>::Road() const
{
    Windows::Services::Maps::Guidance::GuidanceRoadSegment value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate)->get_Road(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::StartNavigating(Windows::Services::Maps::Guidance::GuidanceRoute const& route) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->StartNavigating(get_abi(route)));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::StartSimulating(Windows::Services::Maps::Guidance::GuidanceRoute const& route, int32_t speedInMetersPerSecond) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->StartSimulating(get_abi(route), speedInMetersPerSecond));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::StartTracking() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->StartTracking());
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->Pause());
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->Resume());
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->Stop());
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::RepeatLastAudioNotification() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->RepeatLastAudioNotification());
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::AudioMeasurementSystem() const
{
    Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->get_AudioMeasurementSystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::AudioMeasurementSystem(Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->put_AudioMeasurementSystem(get_abi(value)));
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceAudioNotifications consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::AudioNotifications() const
{
    Windows::Services::Maps::Guidance::GuidanceAudioNotifications value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->get_AudioNotifications(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::AudioNotifications(Windows::Services::Maps::Guidance::GuidanceAudioNotifications const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->put_AudioNotifications(get_abi(value)));
}

template <typename D> event_token consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::GuidanceUpdated(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->add_GuidanceUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator> consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::GuidanceUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>(this, &abi_t<Windows::Services::Maps::Guidance::IGuidanceNavigator>::remove_GuidanceUpdated, GuidanceUpdated(handler));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::GuidanceUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->remove_GuidanceUpdated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::DestinationReached(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->add_DestinationReached(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator> consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::DestinationReached(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>(this, &abi_t<Windows::Services::Maps::Guidance::IGuidanceNavigator>::remove_DestinationReached, DestinationReached(handler));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::DestinationReached(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->remove_DestinationReached(get_abi(token)));
}

template <typename D> event_token consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Rerouting(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->add_Rerouting(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator> consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Rerouting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>(this, &abi_t<Windows::Services::Maps::Guidance::IGuidanceNavigator>::remove_Rerouting, Rerouting(handler));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Rerouting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->remove_Rerouting(get_abi(token)));
}

template <typename D> event_token consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Rerouted(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->add_Rerouted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator> consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Rerouted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>(this, &abi_t<Windows::Services::Maps::Guidance::IGuidanceNavigator>::remove_Rerouted, Rerouted(handler));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::Rerouted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->remove_Rerouted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::RerouteFailed(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->add_RerouteFailed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator> consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::RerouteFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>(this, &abi_t<Windows::Services::Maps::Guidance::IGuidanceNavigator>::remove_RerouteFailed, RerouteFailed(handler));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::RerouteFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->remove_RerouteFailed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::UserLocationLost(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->add_UserLocationLost(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator> consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::UserLocationLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>(this, &abi_t<Windows::Services::Maps::Guidance::IGuidanceNavigator>::remove_UserLocationLost, UserLocationLost(handler));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::UserLocationLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->remove_UserLocationLost(get_abi(token)));
}

template <typename D> event_token consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::UserLocationRestored(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->add_UserLocationRestored(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator> consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::UserLocationRestored(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>(this, &abi_t<Windows::Services::Maps::Guidance::IGuidanceNavigator>::remove_UserLocationRestored, UserLocationRestored(handler));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::UserLocationRestored(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->remove_UserLocationRestored(get_abi(token)));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::SetGuidanceVoice(int32_t voiceId, param::hstring const& voiceFolder) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->SetGuidanceVoice(voiceId, get_abi(voiceFolder)));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::UpdateUserLocation(Windows::Devices::Geolocation::Geocoordinate const& userLocation) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->UpdateUserLocation(get_abi(userLocation)));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator<D>::UpdateUserLocation(Windows::Devices::Geolocation::Geocoordinate const& userLocation, Windows::Devices::Geolocation::BasicGeoposition const& positionOverride) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator)->UpdateUserLocationWithPositionOverride(get_abi(userLocation), get_abi(positionOverride)));
}

template <typename D> event_token consume_Windows_Services_Maps_Guidance_IGuidanceNavigator2<D>::AudioNotificationRequested(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator2)->add_AudioNotificationRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::Guidance::IGuidanceNavigator2> consume_Windows_Services_Maps_Guidance_IGuidanceNavigator2<D>::AudioNotificationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::Guidance::IGuidanceNavigator2>(this, &abi_t<Windows::Services::Maps::Guidance::IGuidanceNavigator2>::remove_AudioNotificationRequested, AudioNotificationRequested(value));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator2<D>::AudioNotificationRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator2)->remove_AudioNotificationRequested(get_abi(token)));
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceNavigator2<D>::IsGuidanceAudioMuted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator2)->get_IsGuidanceAudioMuted(&value));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceNavigator2<D>::IsGuidanceAudioMuted(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigator2)->put_IsGuidanceAudioMuted(value));
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceNavigator consume_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics<D>::GetCurrent() const
{
    Windows::Services::Maps::Guidance::GuidanceNavigator result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics)->GetCurrent(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics2<D>::UseAppProvidedVoice() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2)->get_UseAppProvidedVoice(&value));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoute consume_Windows_Services_Maps_Guidance_IGuidanceReroutedEventArgs<D>::Route() const
{
    Windows::Services::Maps::Guidance::GuidanceRoute result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs)->get_Route(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::RoadName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_RoadName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::ShortRoadName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_ShortRoadName(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::SpeedLimit() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_SpeedLimit(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::TravelTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_TravelTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_Path(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_Id(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::IsHighway() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_IsHighway(&value));
    return value;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::IsTunnel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_IsTunnel(&value));
    return value;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceRoadSegment<D>::IsTollRoad() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSegment)->get_IsTollRoad(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost<D>::ExitNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSignpost)->get_ExitNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost<D>::Exit() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSignpost)->get_Exit(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSignpost)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost<D>::ForegroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSignpost)->get_ForegroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost<D>::ExitDirections() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoadSignpost)->get_ExitDirections(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_Guidance_IGuidanceRoute<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoute)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceRoute<D>::Distance() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoute)->get_Distance(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> consume_Windows_Services_Maps_Guidance_IGuidanceRoute<D>::Maneuvers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceManeuver> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoute)->get_Maneuvers(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_Services_Maps_Guidance_IGuidanceRoute<D>::BoundingBox() const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoute)->get_BoundingBox(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_Services_Maps_Guidance_IGuidanceRoute<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoute)->get_Path(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> consume_Windows_Services_Maps_Guidance_IGuidanceRoute<D>::RoadSegments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceRoadSegment> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoute)->get_RoadSegments(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapRoute consume_Windows_Services_Maps_Guidance_IGuidanceRoute<D>::ConvertToMapRoute() const
{
    Windows::Services::Maps::MapRoute result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRoute)->ConvertToMapRoute(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceRouteStatics<D>::CanCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRouteStatics)->CanCreateFromMapRoute(get_abi(mapRoute), &result));
    return result;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoute consume_Windows_Services_Maps_Guidance_IGuidanceRouteStatics<D>::TryCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute) const
{
    Windows::Services::Maps::Guidance::GuidanceRoute result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceRouteStatics)->TryCreateFromMapRoute(get_abi(mapRoute), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector)->get_Enabled(&value));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector)->put_Enabled(value));
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector<D>::ClearLocalData() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector)->ClearLocalData());
}

template <typename D> double consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector<D>::SpeedTrigger() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector)->get_SpeedTrigger(&value));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector<D>::SpeedTrigger(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector)->put_SpeedTrigger(value));
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector<D>::UploadFrequency() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector)->get_UploadFrequency(&value));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector<D>::UploadFrequency(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector)->put_UploadFrequency(value));
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceTelemetryCollector consume_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollectorStatics<D>::GetCurrent() const
{
    Windows::Services::Maps::Guidance::GuidanceTelemetryCollector result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics)->GetCurrent(put_abi(result)));
    return result;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceMode consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::Mode() const
{
    Windows::Services::Maps::Guidance::GuidanceMode value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceManeuver consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::NextManeuver() const
{
    Windows::Services::Maps::Guidance::GuidanceManeuver value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_NextManeuver(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::NextManeuverDistance() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_NextManeuverDistance(&value));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceManeuver consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::AfterNextManeuver() const
{
    Windows::Services::Maps::Guidance::GuidanceManeuver value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_AfterNextManeuver(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::AfterNextManeuverDistance() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_AfterNextManeuverDistance(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::DistanceToDestination() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_DistanceToDestination(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::ElapsedDistance() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_ElapsedDistance(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::ElapsedTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_ElapsedTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::TimeToDestination() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_TimeToDestination(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::RoadName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_RoadName(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceRoute consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::Route() const
{
    Windows::Services::Maps::Guidance::GuidanceRoute result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_Route(put_abi(result)));
    return result;
}

template <typename D> Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::CurrentLocation() const
{
    Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_CurrentLocation(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::IsNewManeuver() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_IsNewManeuver(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo> consume_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs<D>::LaneInfo() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::Guidance::GuidanceLaneInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs)->get_LaneInfo(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs>
{
    HRESULT __stdcall get_AudioNotification(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioNotification());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFilePaths(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioFilePaths());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceLaneInfo> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceLaneInfo>
{
    HRESULT __stdcall get_LaneMarkers(abi_t<Windows::Services::Maps::Guidance::GuidanceLaneMarkers>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LaneMarkers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOnRoute(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOnRoute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceManeuver> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceManeuver>
{
    HRESULT __stdcall get_StartLocation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistanceFromRouteStart(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DistanceFromRouteStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistanceFromPreviousManeuver(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DistanceFromPreviousManeuver());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DepartureRoadName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DepartureRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextRoadName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NextRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DepartureShortRoadName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DepartureShortRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextShortRoadName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NextShortRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::Services::Maps::Guidance::GuidanceManeuverKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartAngle(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndAngle(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoadSignpost(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoadSignpost());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstructionText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstructionText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate>
{
    HRESULT __stdcall get_Location(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentHeading(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentHeading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentSpeed(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentSpeed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOnStreet(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOnStreet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Road(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Road());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceNavigator> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceNavigator>
{
    HRESULT __stdcall StartNavigating(::IUnknown* route) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartNavigating(*reinterpret_cast<Windows::Services::Maps::Guidance::GuidanceRoute const*>(&route));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartSimulating(::IUnknown* route, int32_t speedInMetersPerSecond) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartSimulating(*reinterpret_cast<Windows::Services::Maps::Guidance::GuidanceRoute const*>(&route), speedInMetersPerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartTracking() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTracking();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Pause() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Resume() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RepeatLastAudioNotification() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepeatLastAudioNotification();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioMeasurementSystem(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioMeasurementSystem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioMeasurementSystem(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioMeasurementSystem(*reinterpret_cast<Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioNotifications(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioNotifications>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioNotifications());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioNotifications(abi_t<Windows::Services::Maps::Guidance::GuidanceAudioNotifications> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioNotifications(*reinterpret_cast<Windows::Services::Maps::Guidance::GuidanceAudioNotifications const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GuidanceUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GuidanceUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GuidanceUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GuidanceUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DestinationReached(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DestinationReached(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DestinationReached(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DestinationReached(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Rerouting(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Rerouting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Rerouting(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rerouting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Rerouted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Rerouted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Rerouted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rerouted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RerouteFailed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RerouteFailed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RerouteFailed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RerouteFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UserLocationLost(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UserLocationLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UserLocationLost(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserLocationLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UserLocationRestored(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UserLocationRestored(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UserLocationRestored(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserLocationRestored(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetGuidanceVoice(int32_t voiceId, HSTRING voiceFolder) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetGuidanceVoice(voiceId, *reinterpret_cast<hstring const*>(&voiceFolder));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateUserLocation(::IUnknown* userLocation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateUserLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geocoordinate const*>(&userLocation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateUserLocationWithPositionOverride(::IUnknown* userLocation, abi_t<Windows::Devices::Geolocation::BasicGeoposition> positionOverride) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateUserLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geocoordinate const*>(&userLocation), *reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&positionOverride));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceNavigator2> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceNavigator2>
{
    HRESULT __stdcall add_AudioNotificationRequested(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AudioNotificationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::Guidance::GuidanceNavigator, Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioNotificationRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioNotificationRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGuidanceAudioMuted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGuidanceAudioMuted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsGuidanceAudioMuted(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsGuidanceAudioMuted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics>
{
    HRESULT __stdcall GetCurrent(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCurrent());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2>
{
    HRESULT __stdcall get_UseAppProvidedVoice(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UseAppProvidedVoice());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs>
{
    HRESULT __stdcall get_Route(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Route());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceRoadSegment> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceRoadSegment>
{
    HRESULT __stdcall get_RoadName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShortRoadName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShortRoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedLimit(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpeedLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TravelTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TravelTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHighway(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHighway());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTunnel(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTunnel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTollRoad(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTollRoad());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceRoadSignpost> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceRoadSignpost>
{
    HRESULT __stdcall get_ExitNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Exit(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitDirections(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitDirections());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceRoute> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceRoute>
{
    HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Distance(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Distance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maneuvers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Maneuvers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingBox(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoadSegments(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoadSegments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertToMapRoute(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConvertToMapRoute());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceRouteStatics> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceRouteStatics>
{
    HRESULT __stdcall CanCreateFromMapRoute(::IUnknown* mapRoute, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CanCreateFromMapRoute(*reinterpret_cast<Windows::Services::Maps::MapRoute const*>(&mapRoute)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCreateFromMapRoute(::IUnknown* mapRoute, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryCreateFromMapRoute(*reinterpret_cast<Windows::Services::Maps::MapRoute const*>(&mapRoute)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector>
{
    HRESULT __stdcall get_Enabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearLocalData() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearLocalData();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedTrigger(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpeedTrigger());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpeedTrigger(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpeedTrigger(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UploadFrequency(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UploadFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UploadFrequency(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UploadFrequency(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics>
{
    HRESULT __stdcall GetCurrent(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCurrent());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs> : produce_base<D, Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs>
{
    HRESULT __stdcall get_Mode(abi_t<Windows::Services::Maps::Guidance::GuidanceMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextManeuver(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NextManeuver());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextManeuverDistance(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NextManeuverDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AfterNextManeuver(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AfterNextManeuver());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AfterNextManeuverDistance(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AfterNextManeuverDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistanceToDestination(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DistanceToDestination());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElapsedDistance(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ElapsedDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElapsedTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ElapsedTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeToDestination(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeToDestination());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoadName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoadName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Route(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Route());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentLocation(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CurrentLocation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNewManeuver(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsNewManeuver());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LaneInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LaneInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps::Guidance {

inline Windows::Services::Maps::Guidance::GuidanceNavigator GuidanceNavigator::GetCurrent()
{
    return get_activation_factory<GuidanceNavigator, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics>().GetCurrent();
}

inline bool GuidanceNavigator::UseAppProvidedVoice()
{
    return get_activation_factory<GuidanceNavigator, Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2>().UseAppProvidedVoice();
}

inline bool GuidanceRoute::CanCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute)
{
    return get_activation_factory<GuidanceRoute, Windows::Services::Maps::Guidance::IGuidanceRouteStatics>().CanCreateFromMapRoute(mapRoute);
}

inline Windows::Services::Maps::Guidance::GuidanceRoute GuidanceRoute::TryCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute)
{
    return get_activation_factory<GuidanceRoute, Windows::Services::Maps::Guidance::IGuidanceRouteStatics>().TryCreateFromMapRoute(mapRoute);
}

inline Windows::Services::Maps::Guidance::GuidanceTelemetryCollector GuidanceTelemetryCollector::GetCurrent()
{
    return get_activation_factory<GuidanceTelemetryCollector, Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics>().GetCurrent();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceLaneInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceLaneInfo> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceManeuver> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceManeuver> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceNavigator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceNavigator> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceNavigator2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceNavigator2> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceRoadSegment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceRoadSegment> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceRoadSignpost> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceRoadSignpost> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceRoute> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceRoute> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceRouteStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceRouteStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceLaneInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceLaneInfo> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceManeuver> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceManeuver> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceMapMatchedCoordinate> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceNavigator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceNavigator> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceRoadSegment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceRoadSegment> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceRoadSignpost> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceRoadSignpost> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceRoute> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceRoute> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceTelemetryCollector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceTelemetryCollector> {};

template<> struct hash<winrt::Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs> {};

}

WINRT_WARNING_POP
