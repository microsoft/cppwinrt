// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Services.Maps.2.h"
#include "winrt/impl/Windows.Services.Maps.LocalSearch.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Maps.2.h"
#include "winrt/Windows.UI.Xaml.Controls.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>::BitmapRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource)->add_BitmapRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>::BitmapRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>::remove_BitmapRequested, BitmapRequested(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>::BitmapRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource)->remove_BitmapRequested(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriFormatString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->get_UriFormatString(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriFormatString(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->put_UriFormatString(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::AdditionalRequestHeaders() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->get_AdditionalRequestHeaders(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::AllowCaching() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->get_AllowCaching(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::AllowCaching(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->put_AllowCaching(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->add_UriRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>::remove_UriRequested, UriRequested(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>::UriRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource)->remove_UriRequested(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory<D>::CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory)->CreateInstanceWithUriFormatString(get_abi(uriFormatString), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriFormatString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource)->get_UriFormatString(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriFormatString(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource)->put_UriFormatString(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource)->add_UriRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>::remove_UriRequested, UriRequested(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>::UriRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource)->remove_UriRequested(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory<D>::CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory)->CreateInstanceWithUriFormatString(get_abi(uriFormatString), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs<D>::Camera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2<D>::ChangeReason() const
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2)->get_ChangeReason(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs<D>::Camera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2<D>::ChangeReason() const
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2)->get_ChangeReason(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_Location(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::Location(Windows::Devices::Geolocation::Geopoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->put_Location(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::NormalizedAnchorPoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_NormalizedAnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::NormalizedAnchorPoint(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->put_NormalizedAnchorPoint(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::Image() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_Image(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->put_Image(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::CollisionBehaviorDesired() const
{
    Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_CollisionBehaviorDesired(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->put_CollisionBehaviorDesired(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>::ReferenceCamera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboard)->get_ReferenceCamera(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapBillboard consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory<D>::CreateInstanceFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const
{
    Windows::UI::Xaml::Controls::Maps::MapBillboard instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory)->CreateInstanceFromCamera(get_abi(camera), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>::LocationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics)->get_LocationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>::NormalizedAnchorPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics)->get_NormalizedAnchorPointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>::CollisionBehaviorDesiredProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics)->get_CollisionBehaviorDesiredProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_Location(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Location(Windows::Devices::Geolocation::Geopoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_Location(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Heading() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_Heading(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Heading(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_Heading(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Pitch() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_Pitch(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Pitch(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_Pitch(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Roll() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_Roll(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::Roll(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_Roll(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::FieldOfView() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->get_FieldOfView(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>::FieldOfView(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCamera)->put_FieldOfView(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>::CreateInstanceWithLocation(Windows::Devices::Geolocation::Geopoint const& location) const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCameraFactory)->CreateInstanceWithLocation(get_abi(location), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>::CreateInstanceWithLocationAndHeading(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCameraFactory)->CreateInstanceWithLocationAndHeading(get_abi(location), headingInDegrees, put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>::CreateInstanceWithLocationHeadingAndPitch(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCameraFactory)->CreateInstanceWithLocationHeadingAndPitch(get_abi(location), headingInDegrees, pitchInDegrees, put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>::CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCameraFactory)->CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(get_abi(location), headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees, put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>::MapElements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs)->get_MapElements(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Center() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Center(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Center(Windows::Devices::Geolocation::Geopoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_Center(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Children() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Children(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapColorScheme consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ColorScheme() const
{
    Windows::UI::Xaml::Controls::Maps::MapColorScheme value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_ColorScheme(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_ColorScheme(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::DesiredPitch() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_DesiredPitch(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::DesiredPitch(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_DesiredPitch(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Heading() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Heading(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Heading(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_Heading(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LandmarksVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_LandmarksVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LandmarksVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_LandmarksVisible(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapLoadingStatus consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatus() const
{
    Windows::UI::Xaml::Controls::Maps::MapLoadingStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_LoadingStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapServiceToken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_MapServiceToken(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapServiceToken(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_MapServiceToken(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MaxZoomLevel() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_MaxZoomLevel(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MinZoomLevel() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_MinZoomLevel(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PedestrianFeaturesVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_PedestrianFeaturesVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PedestrianFeaturesVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_PedestrianFeaturesVisible(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Pitch() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Pitch(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyle consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Style() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Style(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Style(Windows::UI::Xaml::Controls::Maps::MapStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_Style(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrafficFlowVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_TrafficFlowVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrafficFlowVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_TrafficFlowVisible(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOrigin() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_TransformOrigin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOrigin(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_TransformOrigin(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapWatermarkMode consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::WatermarkMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapWatermarkMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_WatermarkMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_WatermarkMode(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevel() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_ZoomLevel(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevel(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->put_ZoomLevel(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapElements() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_MapElements(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::Routes() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_Routes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TileSources() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->get_TileSources(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::CenterChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_CenterChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::CenterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_CenterChanged, CenterChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::CenterChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_CenterChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::HeadingChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_HeadingChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::HeadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_HeadingChanged, HeadingChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::HeadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_HeadingChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatusChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_LoadingStatusChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_LoadingStatusChanged, LoadingStatusChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::LoadingStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_LoadingStatusChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapDoubleTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_MapDoubleTapped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapDoubleTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapDoubleTapped, MapDoubleTapped(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapDoubleTapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_MapDoubleTapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_MapHolding(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapHolding, MapHolding(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapHolding(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_MapHolding(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_MapTapped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapTapped, MapTapped(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::MapTapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_MapTapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PitchChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_PitchChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PitchChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_PitchChanged, PitchChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::PitchChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_PitchChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOriginChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_TransformOriginChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOriginChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_TransformOriginChanged, TransformOriginChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TransformOriginChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_TransformOriginChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevelChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->add_ZoomLevelChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_ZoomLevelChanged, ZoomLevelChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::ZoomLevelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->remove_ZoomLevelChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::FindMapElementsAtOffset(Windows::Foundation::Point const& offset) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->FindMapElementsAtOffset(get_abi(offset), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->GetLocationFromOffset(get_abi(offset), put_abi(location)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::GetOffsetFromLocation(Windows::Devices::Geolocation::Geopoint const& location, Windows::Foundation::Point& offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->GetOffsetFromLocation(get_abi(location), put_abi(offset)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::IsLocationInView(Windows::Devices::Geolocation::Geopoint const& location, bool& isInView) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->IsLocationInView(get_abi(location), &isInView));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewBoundsAsync(Windows::Devices::Geolocation::GeoboundingBox const& bounds, optional<Windows::UI::Xaml::Thickness> const& margin, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewBoundsAsync(get_abi(bounds), get_abi(margin), get_abi(animation), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewWithCenterAsync(get_abi(center), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, optional<double> const& zoomLevel) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewWithCenterAndZoomAsync(get_abi(center), get_abi(zoomLevel), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, optional<double> const& zoomLevel, optional<double> const& heading, optional<double> const& desiredPitch) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewWithCenterZoomHeadingAndPitchAsync(get_abi(center), get_abi(zoomLevel), get_abi(heading), get_abi(desiredPitch), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>::TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, optional<double> const& zoomLevel, optional<double> const& heading, optional<double> const& desiredPitch, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl)->TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(get_abi(center), get_abi(zoomLevel), get_abi(heading), get_abi(desiredPitch), get_abi(animation), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::BusinessLandmarksVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_BusinessLandmarksVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::BusinessLandmarksVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_BusinessLandmarksVisible(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TransitFeaturesVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_TransitFeaturesVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TransitFeaturesVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_TransitFeaturesVisible(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::PanInteractionMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_PanInteractionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_PanInteractionMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapInteractionMode consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::RotateInteractionMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_RotateInteractionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_RotateInteractionMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapInteractionMode consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TiltInteractionMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_TiltInteractionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_TiltInteractionMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapInteractionMode consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ZoomInteractionMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_ZoomInteractionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_ZoomInteractionMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::Is3DSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_Is3DSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::IsStreetsideSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_IsStreetsideSupported(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::Scene() const
{
    Windows::UI::Xaml::Controls::Maps::MapScene value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_Scene(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::Scene(Windows::UI::Xaml::Controls::Maps::MapScene const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_Scene(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCamera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_ActualCamera(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCamera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_TargetCamera(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCustomExperience consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperience() const
{
    Windows::UI::Xaml::Controls::Maps::MapCustomExperience value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->get_CustomExperience(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperience(Windows::UI::Xaml::Controls::Maps::MapCustomExperience const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->put_CustomExperience(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_MapElementClick(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementClick, MapElementClick(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementClick(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_MapElementClick(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_MapElementPointerEntered(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementPointerEntered, MapElementPointerEntered(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerEntered(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_MapElementPointerEntered(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_MapElementPointerExited(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementPointerExited, MapElementPointerExited(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::MapElementPointerExited(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_MapElementPointerExited(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_ActualCameraChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_ActualCameraChanged, ActualCameraChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_ActualCameraChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanging(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_ActualCameraChanging(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_ActualCameraChanging, ActualCameraChanging(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::ActualCameraChanging(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_ActualCameraChanging(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_TargetCameraChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_TargetCameraChanged, TargetCameraChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TargetCameraChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_TargetCameraChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperienceChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->add_CustomExperienceChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperienceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_CustomExperienceChanged, CustomExperienceChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::CustomExperienceChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->remove_CustomExperienceChanged(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StartContinuousRotate(double rateInDegreesPerSecond) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StartContinuousRotate(rateInDegreesPerSecond));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StopContinuousRotate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StopContinuousRotate());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StartContinuousTilt(double rateInDegreesPerSecond) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StartContinuousTilt(rateInDegreesPerSecond));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StopContinuousTilt() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StopContinuousTilt());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StartContinuousZoom(double rateOfChangePerSecond) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StartContinuousZoom(rateOfChangePerSecond));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::StopContinuousZoom() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->StopContinuousZoom());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryRotateAsync(double degrees) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryRotateAsync(degrees, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryRotateToAsync(double angleInDegrees) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryRotateToAsync(angleInDegrees, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryTiltAsync(double degrees) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryTiltAsync(degrees, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryTiltToAsync(double angleInDegrees) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryTiltToAsync(angleInDegrees, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryZoomInAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryZoomInAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryZoomOutAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryZoomOutAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TryZoomToAsync(double zoomLevel) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TryZoomToAsync(zoomLevel, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TrySetSceneAsync(get_abi(scene), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>::TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animationKind) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl2)->TrySetSceneWithAnimationAsync(get_abi(scene), get_abi(animationKind), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>::MapRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl3)->add_MapRightTapped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl3> consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>::MapRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl3>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl3>::remove_MapRightTapped, MapRightTapped(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>::MapRightTapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl3)->remove_MapRightTapped(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::BusinessLandmarksEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->get_BusinessLandmarksEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::BusinessLandmarksEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->put_BusinessLandmarksEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::TransitFeaturesEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->get_TransitFeaturesEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::TransitFeaturesEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->put_TransitFeaturesEnabled(value));
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>::GetVisibleRegion(Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind const& region) const
{
    Windows::Devices::Geolocation::Geopath returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl4)->GetVisibleRegion(get_abi(region), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapProjection consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapProjection() const
{
    Windows::UI::Xaml::Controls::Maps::MapProjection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->get_MapProjection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapProjection(Windows::UI::Xaml::Controls::Maps::MapProjection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->put_MapProjection(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::StyleSheet() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->get_StyleSheet(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::StyleSheet(Windows::UI::Xaml::Controls::Maps::MapStyleSheet const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->put_StyleSheet(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::ViewPadding() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->get_ViewPadding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::ViewPadding(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->put_ViewPadding(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->add_MapContextRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl5> consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControl5>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl5>::remove_MapContextRequested, MapContextRequested(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::MapContextRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->remove_MapContextRequested(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::FindMapElementsAtOffset(Windows::Foundation::Point const& offset, double radius) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->FindMapElementsAtOffsetWithRadius(get_abi(offset), radius, put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->GetLocationFromOffsetWithReferenceSystem(get_abi(offset), get_abi(desiredReferenceSystem), put_abi(location)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::StartContinuousPan(double horizontalPixelsPerSecond, double verticalPixelsPerSecond) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->StartContinuousPan(horizontalPixelsPerSecond, verticalPixelsPerSecond));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::StopContinuousPan() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->StopContinuousPan());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::TryPanAsync(double horizontalPixels, double verticalPixels) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->TryPanAsync(horizontalPixels, verticalPixels, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>::TryPanToAsync(Windows::Devices::Geolocation::Geopoint const& location) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControl5)->TryPanToAsync(get_abi(location), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkClickEventArgs<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs)->get_LocalLocations(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerEnteredEventArgs<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs)->get_LocalLocations(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerExitedEventArgs<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs)->get_LocalLocations(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkRightTappedEventArgs<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs)->get_LocalLocations(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->add_BusinessLandmarkClick(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_BusinessLandmarkClick, BusinessLandmarkClick(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkClick(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->remove_BusinessLandmarkClick(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->add_TransitFeatureClick(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_TransitFeatureClick, TransitFeatureClick(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureClick(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->remove_TransitFeatureClick(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->add_BusinessLandmarkRightTapped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_BusinessLandmarkRightTapped, BusinessLandmarkRightTapped(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->remove_BusinessLandmarkRightTapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->add_TransitFeatureRightTapped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_TransitFeatureRightTapped, TransitFeatureRightTapped(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>::TransitFeatureRightTapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper)->remove_TransitFeatureRightTapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->add_BusinessLandmarkPointerEntered(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_BusinessLandmarkPointerEntered, BusinessLandmarkPointerEntered(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->remove_BusinessLandmarkPointerEntered(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->add_TransitFeaturePointerEntered(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_TransitFeaturePointerEntered, TransitFeaturePointerEntered(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->remove_TransitFeaturePointerEntered(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->add_BusinessLandmarkPointerExited(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_BusinessLandmarkPointerExited, BusinessLandmarkPointerExited(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->remove_BusinessLandmarkPointerExited(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->add_TransitFeaturePointerExited(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_TransitFeaturePointerExited, TransitFeaturePointerExited(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>::TransitFeaturePointerExited(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2)->remove_TransitFeaturePointerExited(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapControlDataHelper consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperFactory<D>::CreateInstance(Windows::UI::Xaml::Controls::Maps::MapControl const& map) const
{
    Windows::UI::Xaml::Controls::Maps::MapControlDataHelper instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory)->CreateInstance(get_abi(map), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::CenterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_CenterProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::ChildrenProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_ChildrenProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::ColorSchemeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_ColorSchemeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::DesiredPitchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_DesiredPitchProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::HeadingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_HeadingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::LandmarksVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_LandmarksVisibleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::LoadingStatusProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_LoadingStatusProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::MapServiceTokenProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_MapServiceTokenProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::PedestrianFeaturesVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_PedestrianFeaturesVisibleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::PitchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_PitchProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::StyleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_StyleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::TrafficFlowVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_TrafficFlowVisibleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::TransformOriginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_TransformOriginProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::WatermarkModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_WatermarkModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::ZoomLevelProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_ZoomLevelProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::MapElementsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_MapElementsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::RoutesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_RoutesProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::TileSourcesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_TileSourcesProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::LocationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_LocationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::GetLocation(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->GetLocation(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->SetLocation(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::NormalizedAnchorPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->get_NormalizedAnchorPointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->GetNormalizedAnchorPoint(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>::SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics)->SetNormalizedAnchorPoint(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::BusinessLandmarksVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_BusinessLandmarksVisibleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::TransitFeaturesVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_TransitFeaturesVisibleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::PanInteractionModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_PanInteractionModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::RotateInteractionModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_RotateInteractionModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::TiltInteractionModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_TiltInteractionModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::ZoomInteractionModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_ZoomInteractionModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::Is3DSupportedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_Is3DSupportedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::IsStreetsideSupportedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_IsStreetsideSupportedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>::SceneProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics2)->get_SceneProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4<D>::BusinessLandmarksEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics4)->get_BusinessLandmarksEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4<D>::TransitFeaturesEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics4)->get_TransitFeaturesEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>::MapProjectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics5)->get_MapProjectionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>::StyleSheetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics5)->get_StyleSheetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>::ViewPaddingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlStatics5)->get_ViewPaddingProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs<D>::TransitProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs)->get_TransitProperties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs<D>::TransitProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs)->get_TransitProperties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs<D>::TransitProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs)->get_TransitProperties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs<D>::TransitProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs)->get_TransitProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCustomExperience consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapCustomExperience instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>::ZIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement)->get_ZIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>::ZIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement)->put_ZIndex(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement)->get_Visible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>::Visible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement)->put_Visible(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapElement2<D>::MapTabIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement2)->get_MapTabIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapElement2<D>::MapTabIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElement2)->put_MapTabIndex(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>::MapElements() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs)->get_MapElements(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElement consume_Windows_UI_Xaml_Controls_Maps_IMapElementFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapElement instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElement consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>::MapElement() const
{
    Windows::UI::Xaml::Controls::Maps::MapElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs)->get_MapElement(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElement consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>::MapElement() const
{
    Windows::UI::Xaml::Controls::Maps::MapElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs)->get_MapElement(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics<D>::ZIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics)->get_ZIndexProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics<D>::VisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics)->get_VisibleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2<D>::MapTabIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapElementStatics2)->get_MapTabIndexProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->get_Location(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Location(Windows::Devices::Geolocation::Geopoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->put_Location(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->put_Title(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::NormalizedAnchorPoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->get_NormalizedAnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::NormalizedAnchorPoint(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->put_NormalizedAnchorPoint(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Image() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->get_Image(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>::Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon)->put_Image(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2<D>::CollisionBehaviorDesired() const
{
    Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon2)->get_CollisionBehaviorDesired(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2<D>::CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIcon2)->put_CollisionBehaviorDesired(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>::LocationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIconStatics)->get_LocationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>::TitleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIconStatics)->get_TitleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>::NormalizedAnchorPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIconStatics)->get_NormalizedAnchorPointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2<D>::CollisionBehaviorDesiredProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapIconStatics2)->get_CollisionBehaviorDesiredProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::ItemsSource() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->get_ItemsSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::ItemsSource(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->put_ItemsSource(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->get_Items(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DataTemplate consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::ItemTemplate() const
{
    Windows::UI::Xaml::DataTemplate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->get_ItemTemplate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>::ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControl)->put_ItemTemplate(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>::ItemsSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics)->get_ItemsSourceProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>::ItemsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics)->get_ItemsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>::ItemTemplateProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics)->get_ItemTemplateProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_Path(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::Path(Windows::Devices::Geolocation::Geopath const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_Path(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_StrokeColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_StrokeColor(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeThickness() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_StrokeThickness(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeThickness(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_StrokeThickness(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeDashed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_StrokeDashed(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::StrokeDashed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_StrokeDashed(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::FillColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->get_FillColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>::FillColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon)->put_FillColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath> consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon2<D>::Paths() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygon2)->get_Paths(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>::PathProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics)->get_PathProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>::StrokeThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics)->get_StrokeThicknessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>::StrokeDashedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics)->get_StrokeDashedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->get_Path(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::Path(Windows::Devices::Geolocation::Geopath const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->put_Path(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->get_StrokeColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->put_StrokeColor(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeThickness() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->get_StrokeThickness(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeThickness(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->put_StrokeThickness(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeDashed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->get_StrokeDashed(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>::StrokeDashed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolyline)->put_StrokeDashed(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics<D>::PathProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics)->get_PathProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics<D>::StrokeDashedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics)->get_StrokeDashedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::RouteColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->get_RouteColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::RouteColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->put_RouteColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::OutlineColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->get_OutlineColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::OutlineColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->put_OutlineColor(get_abi(value)));
}

template <typename D> Windows::Services::Maps::MapRoute consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>::Route() const
{
    Windows::Services::Maps::MapRoute value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteView)->get_Route(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapRouteView consume_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory<D>::CreateInstanceWithMapRoute(Windows::Services::Maps::MapRoute const& route, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapRouteView instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory)->CreateInstanceWithMapRoute(get_abi(route), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCamera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapScene)->get_TargetCamera(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapScene)->add_TargetCameraChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Maps::IMapScene> consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Maps::IMapScene>(this, &abi_t<Windows::UI::Xaml::Controls::Maps::IMapScene>::remove_TargetCameraChanged, TargetCameraChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>::TargetCameraChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapScene)->remove_TargetCameraChanged(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromBoundingBox(get_abi(bounds), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromBoundingBoxWithHeadingAndPitch(get_abi(bounds), headingInDegrees, pitchInDegrees, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromCamera(get_abi(camera), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocation(get_abi(location), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocationWithHeadingAndPitch(get_abi(location), headingInDegrees, pitchInDegrees, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocationAndRadius(get_abi(location), radiusInMeters, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocationAndRadiusWithHeadingAndPitch(get_abi(location), radiusInMeters, headingInDegrees, pitchInDegrees, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocations(get_abi(locations), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>::CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapSceneStatics)->CreateFromLocationsWithHeadingAndPitch(get_abi(locations), headingInDegrees, pitchInDegrees, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::Aerial() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->Aerial(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::AerialWithOverlay() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->AerialWithOverlay(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::RoadLight() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->RoadLight(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::RoadDark() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->RoadDark(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::RoadHighContrastLight() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->RoadHighContrastLight(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::RoadHighContrastDark() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->RoadHighContrastDark(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets) const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->Combine(get_abi(styleSheets), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyleSheet consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::ParseFromJson(param::hstring const& styleAsJson) const
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->ParseFromJson(get_abi(styleAsJson), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>::TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics)->TryParseFromJson(get_abi(styleAsJson), put_abi(styleSheet), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs<D>::Camera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2<D>::ChangeReason() const
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2)->get_ChangeReason(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>::PixelData() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest)->get_PixelData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>::PixelData(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest)->put_PixelData(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>::GetDeferral() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest)->GetDeferral(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral)->Complete());
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>::X() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs)->get_X(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>::Y() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs)->get_Y(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>::ZoomLevel() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs)->get_ZoomLevel(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>::Request() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileDataSource consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileDataSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileDataSource consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::DataSource() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileDataSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_DataSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::DataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_DataSource(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileLayer consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Layer() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileLayer value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_Layer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_Layer(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::ZoomLevelRange() const
{
    Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_ZoomLevelRange(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::ZoomLevelRange(Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_ZoomLevelRange(get_abi(value)));
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Bounds() const
{
    Windows::Devices::Geolocation::GeoboundingBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Bounds(Windows::Devices::Geolocation::GeoboundingBox const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_Bounds(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::AllowOverstretch() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_AllowOverstretch(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::AllowOverstretch(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_AllowOverstretch(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsFadingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_IsFadingEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsFadingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_IsFadingEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsTransparencyEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_IsTransparencyEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsTransparencyEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_IsTransparencyEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsRetryEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_IsRetryEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::IsRetryEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_IsRetryEnabled(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::ZIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_ZIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::ZIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_ZIndex(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::TilePixelSize() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_TilePixelSize(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::TilePixelSize(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_TilePixelSize(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->get_Visible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>::Visible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSource)->put_Visible(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstanceWithDataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstanceWithDataSource(get_abi(dataSource), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceAndZoomRange(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstanceWithDataSourceAndZoomRange(get_abi(dataSource), get_abi(zoomLevelRange), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceZoomRangeAndBounds(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstanceWithDataSourceZoomRangeAndBounds(get_abi(dataSource), get_abi(zoomLevelRange), get_abi(bounds), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory)->CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(get_abi(dataSource), get_abi(zoomLevelRange), get_abi(bounds), tileSizeInPixels, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::DataSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_DataSourceProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::LayerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_LayerProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::ZoomLevelRangeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_ZoomLevelRangeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::BoundsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_BoundsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::AllowOverstretchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_AllowOverstretchProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::IsFadingEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_IsFadingEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::IsTransparencyEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_IsTransparencyEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::IsRetryEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_IsRetryEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::ZIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_ZIndexProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::TilePixelSizeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_TilePixelSizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>::VisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics)->get_VisibleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest)->put_Uri(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>::GetDeferral() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest)->GetDeferral(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral)->Complete());
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>::X() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs)->get_X(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>::Y() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs)->get_Y(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>::ZoomLevel() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs)->get_ZoomLevel(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileUriRequest consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>::Request() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileUriRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::AddressTextVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_AddressTextVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::AddressTextVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_AddressTextVisible(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::CursorVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_CursorVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::CursorVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_CursorVisible(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::OverviewMapVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_OverviewMapVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::OverviewMapVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_OverviewMapVisible(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::StreetLabelsVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_StreetLabelsVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::StreetLabelsVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_StreetLabelsVisible(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::ExitButtonVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_ExitButtonVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::ExitButtonVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_ExitButtonVisible(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::ZoomButtonsVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->get_ZoomButtonsVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>::ZoomButtonsVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperience)->put_ZoomButtonsVisible(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::StreetsideExperience consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory<D>::CreateInstanceWithPanorama(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama) const
{
    Windows::UI::Xaml::Controls::Maps::StreetsideExperience instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory)->CreateInstanceWithPanorama(get_abi(panorama), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::StreetsideExperience consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory<D>::CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::StreetsideExperience instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory)->CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(get_abi(panorama), headingInDegrees, pitchInDegrees, fieldOfViewInDegrees, put_abi(instance)));
    return instance;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama)->get_Location(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics<D>::FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics)->FindNearbyWithLocationAsync(get_abi(location), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics<D>::FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics)->FindNearbyWithLocationAndRadiusAsync(get_abi(location), radiusInMeters, put_abi(returnValue)));
    return returnValue;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
{
    HRESULT __stdcall add_BitmapRequested(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BitmapRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BitmapRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitmapRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
{
    HRESULT __stdcall get_UriFormatString(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UriFormatString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UriFormatString(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriFormatString(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalRequestHeaders(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdditionalRequestHeaders());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowCaching(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowCaching());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowCaching(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCaching(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UriRequested(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UriRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UriRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithUriFormatString(HSTRING uriFormatString, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithUriFormatString(*reinterpret_cast<hstring const*>(&uriFormatString), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
{
    HRESULT __stdcall get_UriFormatString(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UriFormatString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UriFormatString(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriFormatString(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UriRequested(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UriRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UriRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithUriFormatString(HSTRING uriFormatString, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithUriFormatString(*reinterpret_cast<hstring const*>(&uriFormatString), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
{
    HRESULT __stdcall get_Camera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Camera());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
{
    HRESULT __stdcall get_ChangeReason(abi_t<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
{
    HRESULT __stdcall get_Camera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Camera());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
{
    HRESULT __stdcall get_ChangeReason(abi_t<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapBillboard> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapBillboard>
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

    HRESULT __stdcall put_Location(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedAnchorPoint(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizedAnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NormalizedAnchorPoint(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalizedAnchorPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Image(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CollisionBehaviorDesired(abi_t<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollisionBehaviorDesired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CollisionBehaviorDesired(abi_t<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollisionBehaviorDesired(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReferenceCamera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReferenceCamera());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
{
    HRESULT __stdcall CreateInstanceFromCamera(::IUnknown* camera, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceFromCamera(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapCamera const*>(&camera)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
{
    HRESULT __stdcall get_LocationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedAnchorPointProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizedAnchorPointProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CollisionBehaviorDesiredProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollisionBehaviorDesiredProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCamera> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCamera>
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

    HRESULT __stdcall put_Location(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Heading(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Heading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Heading(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Heading(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pitch(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pitch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Pitch(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pitch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Roll(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Roll());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Roll(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Roll(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FieldOfView(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FieldOfView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FieldOfView(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FieldOfView(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
{
    HRESULT __stdcall CreateInstanceWithLocation(::IUnknown* location, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithLocationAndHeading(::IUnknown* location, double headingInDegrees, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithLocationAndHeading(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), headingInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithLocationHeadingAndPitch(::IUnknown* location, double headingInDegrees, double pitchInDegrees, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithLocationHeadingAndPitch(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(::IUnknown* location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_MapElements(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapElements());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl>
{
    HRESULT __stdcall get_Center(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Center(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Center(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Children(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorScheme(abi_t<Windows::UI::Xaml::Controls::Maps::MapColorScheme>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorScheme());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ColorScheme(abi_t<Windows::UI::Xaml::Controls::Maps::MapColorScheme> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorScheme(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapColorScheme const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredPitch(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredPitch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredPitch(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredPitch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Heading(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Heading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Heading(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Heading(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LandmarksVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LandmarksVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LandmarksVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LandmarksVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LoadingStatus(abi_t<Windows::UI::Xaml::Controls::Maps::MapLoadingStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadingStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapServiceToken(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapServiceToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MapServiceToken(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapServiceToken(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxZoomLevel(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinZoomLevel(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PedestrianFeaturesVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PedestrianFeaturesVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PedestrianFeaturesVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PedestrianFeaturesVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pitch(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pitch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Style(abi_t<Windows::UI::Xaml::Controls::Maps::MapStyle>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Style(abi_t<Windows::UI::Xaml::Controls::Maps::MapStyle> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Style(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficFlowVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrafficFlowVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrafficFlowVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrafficFlowVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformOrigin(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformOrigin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformOrigin(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformOrigin(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WatermarkMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WatermarkMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WatermarkMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WatermarkMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevel(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ZoomLevel(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapElements(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapElements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Routes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Routes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileSources(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TileSources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CenterChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CenterChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CenterChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HeadingChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HeadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HeadingChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LoadingStatusChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LoadingStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LoadingStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadingStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapDoubleTapped(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MapDoubleTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapDoubleTapped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapDoubleTapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapHolding(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MapHolding(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapHolding(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapHolding(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapTapped(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MapTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapTapped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapTapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PitchChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PitchChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PitchChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PitchChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransformOriginChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TransformOriginChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransformOriginChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformOriginChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ZoomLevelChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ZoomLevelChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ZoomLevelChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomLevelChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindMapElementsAtOffset(abi_t<Windows::Foundation::Point> offset, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FindMapElementsAtOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocationFromOffset(abi_t<Windows::Foundation::Point> offset, ::IUnknown** location) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetLocationFromOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint*>(location));
            return S_OK;
        }
        catch (...)
        {
            *location = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetOffsetFromLocation(::IUnknown* location, abi_t<Windows::Foundation::Point>* offset) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetOffsetFromLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), *reinterpret_cast<Windows::Foundation::Point*>(offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsLocationInView(::IUnknown* location, bool* isInView) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLocationInView(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), *isInView);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetViewBoundsAsync(::IUnknown* bounds, ::IUnknown* margin, abi_t<Windows::UI::Xaml::Controls::Maps::MapAnimationKind> animation, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TrySetViewBoundsAsync(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds), *reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Xaml::Thickness> const*>(&margin), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapAnimationKind const*>(&animation)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetViewWithCenterAsync(::IUnknown* center, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TrySetViewAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&center)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetViewWithCenterAndZoomAsync(::IUnknown* center, ::IUnknown* zoomLevel, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TrySetViewAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&center), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&zoomLevel)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetViewWithCenterZoomHeadingAndPitchAsync(::IUnknown* center, ::IUnknown* zoomLevel, ::IUnknown* heading, ::IUnknown* desiredPitch, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TrySetViewAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&center), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&zoomLevel), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&heading), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&desiredPitch)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(::IUnknown* center, ::IUnknown* zoomLevel, ::IUnknown* heading, ::IUnknown* desiredPitch, abi_t<Windows::UI::Xaml::Controls::Maps::MapAnimationKind> animation, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TrySetViewAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&center), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&zoomLevel), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&heading), *reinterpret_cast<Windows::Foundation::IReference<double> const*>(&desiredPitch), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapAnimationKind const*>(&animation)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl2>
{
    HRESULT __stdcall get_BusinessLandmarksVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BusinessLandmarksVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BusinessLandmarksVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarksVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitFeaturesVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransitFeaturesVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransitFeaturesVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeaturesVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PanInteractionMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PanInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PanInteractionMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PanInteractionMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotateInteractionMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotateInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotateInteractionMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapInteractionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotateInteractionMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapInteractionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiltInteractionMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TiltInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TiltInteractionMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapInteractionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TiltInteractionMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapInteractionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomInteractionMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ZoomInteractionMode(abi_t<Windows::UI::Xaml::Controls::Maps::MapInteractionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomInteractionMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapInteractionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Is3DSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Is3DSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStreetsideSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStreetsideSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scene(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scene());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scene(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scene(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapScene const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActualCamera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActualCamera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetCamera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetCamera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomExperience(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomExperience());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomExperience(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomExperience(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapCustomExperience const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapElementClick(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MapElementClick(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapElementClick(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementClick(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapElementPointerEntered(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MapElementPointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapElementPointerEntered(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementPointerEntered(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapElementPointerExited(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MapElementPointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapElementPointerExited(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapElementPointerExited(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActualCameraChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ActualCameraChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActualCameraChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActualCameraChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActualCameraChanging(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ActualCameraChanging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActualCameraChanging(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActualCameraChanging(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TargetCameraChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TargetCameraChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetCameraChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetCameraChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CustomExperienceChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CustomExperienceChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CustomExperienceChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomExperienceChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartContinuousRotate(double rateInDegreesPerSecond) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartContinuousRotate(rateInDegreesPerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopContinuousRotate() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopContinuousRotate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartContinuousTilt(double rateInDegreesPerSecond) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartContinuousTilt(rateInDegreesPerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopContinuousTilt() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopContinuousTilt();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartContinuousZoom(double rateOfChangePerSecond) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartContinuousZoom(rateOfChangePerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopContinuousZoom() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopContinuousZoom();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryRotateAsync(double degrees, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryRotateAsync(degrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryRotateToAsync(double angleInDegrees, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryRotateToAsync(angleInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryTiltAsync(double degrees, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryTiltAsync(degrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryTiltToAsync(double angleInDegrees, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryTiltToAsync(angleInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryZoomInAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryZoomInAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryZoomOutAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryZoomOutAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryZoomToAsync(double zoomLevel, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryZoomToAsync(zoomLevel));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetSceneAsync(::IUnknown* scene, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TrySetSceneAsync(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapScene const*>(&scene)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetSceneWithAnimationAsync(::IUnknown* scene, abi_t<Windows::UI::Xaml::Controls::Maps::MapAnimationKind> animationKind, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TrySetSceneAsync(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapScene const*>(&scene), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapAnimationKind const*>(&animationKind)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl3> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl3>
{
    HRESULT __stdcall add_MapRightTapped(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MapRightTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapRightTapped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapRightTapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl4> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl4>
{
    HRESULT __stdcall get_BusinessLandmarksEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BusinessLandmarksEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BusinessLandmarksEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarksEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitFeaturesEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransitFeaturesEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransitFeaturesEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeaturesEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVisibleRegion(abi_t<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind> region, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetVisibleRegion(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind const*>(&region)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl5> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl5>
{
    HRESULT __stdcall get_MapProjection(abi_t<Windows::UI::Xaml::Controls::Maps::MapProjection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapProjection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MapProjection(abi_t<Windows::UI::Xaml::Controls::Maps::MapProjection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapProjection(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapProjection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleSheet(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleSheet());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StyleSheet(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StyleSheet(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapStyleSheet const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewPadding(abi_t<Windows::UI::Xaml::Thickness>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewPadding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewPadding(abi_t<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewPadding(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapContextRequested(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MapContextRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapContextRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapContextRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindMapElementsAtOffsetWithRadius(abi_t<Windows::Foundation::Point> offset, double radius, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FindMapElementsAtOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset), radius));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocationFromOffsetWithReferenceSystem(abi_t<Windows::Foundation::Point> offset, abi_t<Windows::Devices::Geolocation::AltitudeReferenceSystem> desiredReferenceSystem, ::IUnknown** location) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetLocationFromOffset(*reinterpret_cast<Windows::Foundation::Point const*>(&offset), *reinterpret_cast<Windows::Devices::Geolocation::AltitudeReferenceSystem const*>(&desiredReferenceSystem), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint*>(location));
            return S_OK;
        }
        catch (...)
        {
            *location = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartContinuousPan(double horizontalPixelsPerSecond, double verticalPixelsPerSecond) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartContinuousPan(horizontalPixelsPerSecond, verticalPixelsPerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopContinuousPan() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopContinuousPan();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryPanAsync(double horizontalPixels, double verticalPixels, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryPanAsync(horizontalPixels, verticalPixels));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryPanToAsync(::IUnknown* location, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryPanToAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
{
    HRESULT __stdcall get_LocalLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalLocations());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
{
    HRESULT __stdcall get_LocalLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalLocations());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
{
    HRESULT __stdcall get_LocalLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalLocations());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
{
    HRESULT __stdcall get_LocalLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalLocations());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
{
    HRESULT __stdcall add_BusinessLandmarkClick(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BusinessLandmarkClick(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BusinessLandmarkClick(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarkClick(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransitFeatureClick(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TransitFeatureClick(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransitFeatureClick(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeatureClick(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BusinessLandmarkRightTapped(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BusinessLandmarkRightTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BusinessLandmarkRightTapped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarkRightTapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransitFeatureRightTapped(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TransitFeatureRightTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransitFeatureRightTapped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeatureRightTapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
{
    HRESULT __stdcall add_BusinessLandmarkPointerEntered(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BusinessLandmarkPointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BusinessLandmarkPointerEntered(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarkPointerEntered(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransitFeaturePointerEntered(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TransitFeaturePointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransitFeaturePointerEntered(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeaturePointerEntered(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BusinessLandmarkPointerExited(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BusinessLandmarkPointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BusinessLandmarkPointerExited(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusinessLandmarkPointerExited(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransitFeaturePointerExited(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TransitFeaturePointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransitFeaturePointerExited(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitFeaturePointerExited(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* map, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapControl const*>(&map)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
{
    HRESULT __stdcall get_CenterProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChildrenProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChildrenProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorSchemeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorSchemeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredPitchProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredPitchProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeadingProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeadingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LandmarksVisibleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LandmarksVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LoadingStatusProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadingStatusProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapServiceTokenProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapServiceTokenProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PedestrianFeaturesVisibleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PedestrianFeaturesVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PitchProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PitchProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficFlowVisibleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrafficFlowVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformOriginProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformOriginProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WatermarkModeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WatermarkModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevelProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomLevelProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapElementsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapElementsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoutesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoutesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileSourcesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TileSourcesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocation(::IUnknown* element, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLocation(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLocation(::IUnknown* element, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLocation(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedAnchorPointProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizedAnchorPointProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNormalizedAnchorPoint(::IUnknown* element, abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNormalizedAnchorPoint(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetNormalizedAnchorPoint(::IUnknown* element, abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNormalizedAnchorPoint(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
{
    HRESULT __stdcall get_BusinessLandmarksVisibleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BusinessLandmarksVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitFeaturesVisibleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransitFeaturesVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PanInteractionModeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PanInteractionModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotateInteractionModeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotateInteractionModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiltInteractionModeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TiltInteractionModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomInteractionModeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomInteractionModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Is3DSupportedProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Is3DSupportedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStreetsideSupportedProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStreetsideSupportedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SceneProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SceneProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics4> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
{
    HRESULT __stdcall get_BusinessLandmarksEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BusinessLandmarksEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitFeaturesEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransitFeaturesEnabledProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
{
    HRESULT __stdcall get_MapProjectionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapProjectionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleSheetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleSheetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewPaddingProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewPaddingProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_TransitProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransitProperties());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_TransitProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransitProperties());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_TransitProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransitProperties());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_TransitProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransitProperties());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement>
{
    HRESULT __stdcall get_ZIndex(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ZIndex(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Visible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement2>
{
    HRESULT __stdcall get_MapTabIndex(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapTabIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MapTabIndex(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapTabIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_MapElements(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapElements());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_MapElement(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapElement());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_MapElement(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapElement());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
{
    HRESULT __stdcall get_ZIndexProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VisibleProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
{
    HRESULT __stdcall get_MapTabIndexProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapTabIndexProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapIcon> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapIcon>
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

    HRESULT __stdcall put_Location(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedAnchorPoint(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizedAnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NormalizedAnchorPoint(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalizedAnchorPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Image(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapIcon2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapIcon2>
{
    HRESULT __stdcall get_CollisionBehaviorDesired(abi_t<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollisionBehaviorDesired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CollisionBehaviorDesired(abi_t<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollisionBehaviorDesired(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapIconStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
{
    HRESULT __stdcall get_LocationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TitleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedAnchorPointProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizedAnchorPointProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapIconStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
{
    HRESULT __stdcall get_CollisionBehaviorDesiredProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollisionBehaviorDesiredProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapItemsControl> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
{
    HRESULT __stdcall get_ItemsSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemsSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemsSource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemsSource(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Items(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTemplate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemTemplate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemTemplate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemTemplate(*reinterpret_cast<Windows::UI::Xaml::DataTemplate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
{
    HRESULT __stdcall get_ItemsSourceProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemsSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTemplateProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemTemplateProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolygon> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolygon>
{
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

    HRESULT __stdcall put_Path(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::Devices::Geolocation::Geopath const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThickness(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeThickness(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeThickness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeDashed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDashed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FillColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolygon2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
{
    HRESULT __stdcall get_Paths(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Paths());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
{
    HRESULT __stdcall get_PathProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PathProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThicknessProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashedProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeDashedProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolyline> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolyline>
{
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

    HRESULT __stdcall put_Path(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::Devices::Geolocation::Geopath const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThickness(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeThickness(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeThickness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeDashed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDashed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
{
    HRESULT __stdcall get_PathProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PathProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashedProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrokeDashedProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapRouteView> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapRouteView>
{
    HRESULT __stdcall get_RouteColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RouteColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RouteColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RouteColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutlineColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutlineColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutlineColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutlineColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Route(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Route());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
{
    HRESULT __stdcall CreateInstanceWithMapRoute(::IUnknown* route, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithMapRoute(*reinterpret_cast<Windows::Services::Maps::MapRoute const*>(&route), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapScene> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapScene>
{
    HRESULT __stdcall get_TargetCamera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetCamera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TargetCameraChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TargetCameraChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetCameraChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetCameraChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
{
    HRESULT __stdcall CreateFromBoundingBox(::IUnknown* bounds, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromBoundingBox(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBoundingBoxWithHeadingAndPitch(::IUnknown* bounds, double headingInDegrees, double pitchInDegrees, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromBoundingBox(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds), headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromCamera(::IUnknown* camera, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromCamera(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapCamera const*>(&camera)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromLocation(::IUnknown* location, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromLocationWithHeadingAndPitch(::IUnknown* location, double headingInDegrees, double pitchInDegrees, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromLocation(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromLocationAndRadius(::IUnknown* location, double radiusInMeters, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromLocationAndRadius(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), radiusInMeters));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromLocationAndRadiusWithHeadingAndPitch(::IUnknown* location, double radiusInMeters, double headingInDegrees, double pitchInDegrees, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromLocationAndRadius(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), radiusInMeters, headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromLocations(::IUnknown* locations, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromLocations(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&locations)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromLocationsWithHeadingAndPitch(::IUnknown* locations, double headingInDegrees, double pitchInDegrees, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateFromLocations(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> const*>(&locations), headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheet> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
{
    HRESULT __stdcall Aerial(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Aerial());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AerialWithOverlay(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().AerialWithOverlay());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoadLight(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RoadLight());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoadDark(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RoadDark());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoadHighContrastLight(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RoadHighContrastLight());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoadHighContrastDark(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RoadHighContrastDark());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Combine(::IUnknown* styleSheets, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Combine(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const*>(&styleSheets)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ParseFromJson(HSTRING styleAsJson, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ParseFromJson(*reinterpret_cast<hstring const*>(&styleAsJson)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseFromJson(HSTRING styleAsJson, ::IUnknown** styleSheet, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryParseFromJson(*reinterpret_cast<hstring const*>(&styleAsJson), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapStyleSheet*>(styleSheet)));
            return S_OK;
        }
        catch (...)
        {
            *styleSheet = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
{
    HRESULT __stdcall get_Camera(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Camera());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
{
    HRESULT __stdcall get_ChangeReason(abi_t<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
{
    HRESULT __stdcall get_PixelData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PixelData(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PixelData(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
{
    HRESULT __stdcall get_X(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().X());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Y(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Y());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevel(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource>
{
    HRESULT __stdcall get_DataSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataSource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataSource(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Layer(abi_t<Windows::UI::Xaml::Controls::Maps::MapTileLayer>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Layer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Layer(abi_t<Windows::UI::Xaml::Controls::Maps::MapTileLayer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Layer(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileLayer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevelRange(abi_t<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomLevelRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ZoomLevelRange(abi_t<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomLevelRange(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bounds(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bounds(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowOverstretch(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowOverstretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowOverstretch(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowOverstretch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFadingEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFadingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsFadingEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFadingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTransparencyEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTransparencyEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsTransparencyEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTransparencyEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRetryEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRetryEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsRetryEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRetryEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZIndex(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ZIndex(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TilePixelSize(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TilePixelSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TilePixelSize(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TilePixelSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Visible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithDataSource(::IUnknown* dataSource, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithDataSource(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&dataSource), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithDataSourceAndZoomRange(::IUnknown* dataSource, abi_t<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> zoomLevelRange, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithDataSourceAndZoomRange(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&dataSource), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const*>(&zoomLevelRange), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithDataSourceZoomRangeAndBounds(::IUnknown* dataSource, abi_t<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> zoomLevelRange, ::IUnknown* bounds, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithDataSourceZoomRangeAndBounds(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&dataSource), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const*>(&zoomLevelRange), *reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(::IUnknown* dataSource, abi_t<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> zoomLevelRange, ::IUnknown* bounds, int32_t tileSizeInPixels, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapTileDataSource const*>(&dataSource), *reinterpret_cast<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const*>(&zoomLevelRange), *reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&bounds), tileSizeInPixels, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
{
    HRESULT __stdcall get_DataSourceProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LayerProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LayerProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevelRangeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomLevelRangeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowOverstretchProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowOverstretchProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFadingEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFadingEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTransparencyEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTransparencyEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRetryEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRetryEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZIndexProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TilePixelSizeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TilePixelSizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VisibleProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
{
    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
{
    HRESULT __stdcall get_X(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().X());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Y(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Y());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevel(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
{
    HRESULT __stdcall get_AddressTextVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AddressTextVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AddressTextVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddressTextVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CursorVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CursorVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CursorVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CursorVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverviewMapVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OverviewMapVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OverviewMapVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverviewMapVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreetLabelsVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreetLabelsVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StreetLabelsVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreetLabelsVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitButtonVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitButtonVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitButtonVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitButtonVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomButtonsVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomButtonsVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ZoomButtonsVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomButtonsVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
{
    HRESULT __stdcall CreateInstanceWithPanorama(::IUnknown* panorama, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithPanorama(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const*>(&panorama)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(::IUnknown* panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(*reinterpret_cast<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const*>(&panorama), headingInDegrees, pitchInDegrees, fieldOfViewInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
{
    HRESULT __stdcall FindNearbyWithLocationAsync(::IUnknown* location, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FindNearbyAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindNearbyWithLocationAndRadiusAsync(::IUnknown* location, double radiusInMeters, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FindNearbyAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&location), radiusInMeters));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Maps {

inline CustomMapTileDataSource::CustomMapTileDataSource()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>().CreateInstance(outer, inner));
}

inline HttpMapTileDataSource::HttpMapTileDataSource()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>().CreateInstance(outer, inner));
}

inline HttpMapTileDataSource::HttpMapTileDataSource(param::hstring const& uriFormatString)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>().CreateInstanceWithUriFormatString(uriFormatString, outer, inner));
}

inline LocalMapTileDataSource::LocalMapTileDataSource()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>().CreateInstance(outer, inner));
}

inline LocalMapTileDataSource::LocalMapTileDataSource(param::hstring const& uriFormatString)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>().CreateInstanceWithUriFormatString(uriFormatString, outer, inner));
}

inline MapActualCameraChangedEventArgs::MapActualCameraChangedEventArgs() :
    MapActualCameraChangedEventArgs(activate_instance<MapActualCameraChangedEventArgs>())
{}

inline MapActualCameraChangingEventArgs::MapActualCameraChangingEventArgs() :
    MapActualCameraChangingEventArgs(activate_instance<MapActualCameraChangingEventArgs>())
{}

inline MapBillboard::MapBillboard(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) :
    MapBillboard(get_activation_factory<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>().CreateInstanceFromCamera(camera))
{}

inline Windows::UI::Xaml::DependencyProperty MapBillboard::LocationProperty()
{
    return get_activation_factory<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>().LocationProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapBillboard::NormalizedAnchorPointProperty()
{
    return get_activation_factory<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>().NormalizedAnchorPointProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapBillboard::CollisionBehaviorDesiredProperty()
{
    return get_activation_factory<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>().CollisionBehaviorDesiredProperty();
}

inline MapCamera::MapCamera(Windows::Devices::Geolocation::Geopoint const& location) :
    MapCamera(get_activation_factory<MapCamera, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>().CreateInstanceWithLocation(location))
{}

inline MapCamera::MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees) :
    MapCamera(get_activation_factory<MapCamera, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>().CreateInstanceWithLocationAndHeading(location, headingInDegrees))
{}

inline MapCamera::MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) :
    MapCamera(get_activation_factory<MapCamera, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>().CreateInstanceWithLocationHeadingAndPitch(location, headingInDegrees, pitchInDegrees))
{}

inline MapCamera::MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) :
    MapCamera(get_activation_factory<MapCamera, Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>().CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(location, headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees))
{}

inline MapContextRequestedEventArgs::MapContextRequestedEventArgs() :
    MapContextRequestedEventArgs(activate_instance<MapContextRequestedEventArgs>())
{}

inline MapControl::MapControl() :
    MapControl(activate_instance<MapControl>())
{}

inline Windows::UI::Xaml::DependencyProperty MapControl::CenterProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().CenterProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ChildrenProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().ChildrenProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ColorSchemeProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().ColorSchemeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::DesiredPitchProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().DesiredPitchProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::HeadingProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().HeadingProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::LandmarksVisibleProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().LandmarksVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::LoadingStatusProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().LoadingStatusProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::MapServiceTokenProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().MapServiceTokenProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::PedestrianFeaturesVisibleProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().PedestrianFeaturesVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::PitchProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().PitchProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::StyleProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().StyleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TrafficFlowVisibleProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().TrafficFlowVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TransformOriginProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().TransformOriginProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::WatermarkModeProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().WatermarkModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ZoomLevelProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().ZoomLevelProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::MapElementsProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().MapElementsProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::RoutesProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().RoutesProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TileSourcesProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().TileSourcesProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::LocationProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().LocationProperty();
}

inline Windows::Devices::Geolocation::Geopoint MapControl::GetLocation(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().GetLocation(element);
}

inline void MapControl::SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value)
{
    get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().SetLocation(element, value);
}

inline Windows::UI::Xaml::DependencyProperty MapControl::NormalizedAnchorPointProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().NormalizedAnchorPointProperty();
}

inline Windows::Foundation::Point MapControl::GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().GetNormalizedAnchorPoint(element);
}

inline void MapControl::SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value)
{
    get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics>().SetNormalizedAnchorPoint(element, value);
}

inline Windows::UI::Xaml::DependencyProperty MapControl::BusinessLandmarksVisibleProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().BusinessLandmarksVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TransitFeaturesVisibleProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().TransitFeaturesVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::PanInteractionModeProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().PanInteractionModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::RotateInteractionModeProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().RotateInteractionModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TiltInteractionModeProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().TiltInteractionModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ZoomInteractionModeProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().ZoomInteractionModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::Is3DSupportedProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().Is3DSupportedProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::IsStreetsideSupportedProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().IsStreetsideSupportedProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::SceneProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>().SceneProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::BusinessLandmarksEnabledProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>().BusinessLandmarksEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TransitFeaturesEnabledProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>().TransitFeaturesEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::MapProjectionProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>().MapProjectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::StyleSheetProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>().StyleSheetProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ViewPaddingProperty()
{
    return get_activation_factory<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>().ViewPaddingProperty();
}

inline MapControlBusinessLandmarkClickEventArgs::MapControlBusinessLandmarkClickEventArgs() :
    MapControlBusinessLandmarkClickEventArgs(activate_instance<MapControlBusinessLandmarkClickEventArgs>())
{}

inline MapControlBusinessLandmarkPointerEnteredEventArgs::MapControlBusinessLandmarkPointerEnteredEventArgs() :
    MapControlBusinessLandmarkPointerEnteredEventArgs(activate_instance<MapControlBusinessLandmarkPointerEnteredEventArgs>())
{}

inline MapControlBusinessLandmarkPointerExitedEventArgs::MapControlBusinessLandmarkPointerExitedEventArgs() :
    MapControlBusinessLandmarkPointerExitedEventArgs(activate_instance<MapControlBusinessLandmarkPointerExitedEventArgs>())
{}

inline MapControlBusinessLandmarkRightTappedEventArgs::MapControlBusinessLandmarkRightTappedEventArgs() :
    MapControlBusinessLandmarkRightTappedEventArgs(activate_instance<MapControlBusinessLandmarkRightTappedEventArgs>())
{}

inline MapControlDataHelper::MapControlDataHelper(Windows::UI::Xaml::Controls::Maps::MapControl const& map) :
    MapControlDataHelper(get_activation_factory<MapControlDataHelper, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>().CreateInstance(map))
{}

inline MapControlTransitFeatureClickEventArgs::MapControlTransitFeatureClickEventArgs() :
    MapControlTransitFeatureClickEventArgs(activate_instance<MapControlTransitFeatureClickEventArgs>())
{}

inline MapControlTransitFeaturePointerEnteredEventArgs::MapControlTransitFeaturePointerEnteredEventArgs() :
    MapControlTransitFeaturePointerEnteredEventArgs(activate_instance<MapControlTransitFeaturePointerEnteredEventArgs>())
{}

inline MapControlTransitFeaturePointerExitedEventArgs::MapControlTransitFeaturePointerExitedEventArgs() :
    MapControlTransitFeaturePointerExitedEventArgs(activate_instance<MapControlTransitFeaturePointerExitedEventArgs>())
{}

inline MapControlTransitFeatureRightTappedEventArgs::MapControlTransitFeatureRightTappedEventArgs() :
    MapControlTransitFeatureRightTappedEventArgs(activate_instance<MapControlTransitFeatureRightTappedEventArgs>())
{}

inline MapCustomExperience::MapCustomExperience()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapCustomExperience, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>().CreateInstance(outer, inner));
}

inline MapCustomExperienceChangedEventArgs::MapCustomExperienceChangedEventArgs() :
    MapCustomExperienceChangedEventArgs(activate_instance<MapCustomExperienceChangedEventArgs>())
{}

inline MapElement::MapElement()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty MapElement::ZIndexProperty()
{
    return get_activation_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics>().ZIndexProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapElement::VisibleProperty()
{
    return get_activation_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics>().VisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapElement::MapTabIndexProperty()
{
    return get_activation_factory<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>().MapTabIndexProperty();
}

inline MapElementClickEventArgs::MapElementClickEventArgs() :
    MapElementClickEventArgs(activate_instance<MapElementClickEventArgs>())
{}

inline MapElementPointerEnteredEventArgs::MapElementPointerEnteredEventArgs() :
    MapElementPointerEnteredEventArgs(activate_instance<MapElementPointerEnteredEventArgs>())
{}

inline MapElementPointerExitedEventArgs::MapElementPointerExitedEventArgs() :
    MapElementPointerExitedEventArgs(activate_instance<MapElementPointerExitedEventArgs>())
{}

inline MapIcon::MapIcon() :
    MapIcon(activate_instance<MapIcon>())
{}

inline Windows::UI::Xaml::DependencyProperty MapIcon::LocationProperty()
{
    return get_activation_factory<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIconStatics>().LocationProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapIcon::TitleProperty()
{
    return get_activation_factory<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIconStatics>().TitleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapIcon::NormalizedAnchorPointProperty()
{
    return get_activation_factory<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIconStatics>().NormalizedAnchorPointProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapIcon::CollisionBehaviorDesiredProperty()
{
    return get_activation_factory<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>().CollisionBehaviorDesiredProperty();
}

inline MapInputEventArgs::MapInputEventArgs() :
    MapInputEventArgs(activate_instance<MapInputEventArgs>())
{}

inline MapItemsControl::MapItemsControl() :
    MapItemsControl(activate_instance<MapItemsControl>())
{}

inline Windows::UI::Xaml::DependencyProperty MapItemsControl::ItemsSourceProperty()
{
    return get_activation_factory<MapItemsControl, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>().ItemsSourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapItemsControl::ItemsProperty()
{
    return get_activation_factory<MapItemsControl, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>().ItemsProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapItemsControl::ItemTemplateProperty()
{
    return get_activation_factory<MapItemsControl, Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>().ItemTemplateProperty();
}

inline MapPolygon::MapPolygon() :
    MapPolygon(activate_instance<MapPolygon>())
{}

inline Windows::UI::Xaml::DependencyProperty MapPolygon::PathProperty()
{
    return get_activation_factory<MapPolygon, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>().PathProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapPolygon::StrokeThicknessProperty()
{
    return get_activation_factory<MapPolygon, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>().StrokeThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapPolygon::StrokeDashedProperty()
{
    return get_activation_factory<MapPolygon, Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>().StrokeDashedProperty();
}

inline MapPolyline::MapPolyline() :
    MapPolyline(activate_instance<MapPolyline>())
{}

inline Windows::UI::Xaml::DependencyProperty MapPolyline::PathProperty()
{
    return get_activation_factory<MapPolyline, Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>().PathProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapPolyline::StrokeDashedProperty()
{
    return get_activation_factory<MapPolyline, Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>().StrokeDashedProperty();
}

inline MapRightTappedEventArgs::MapRightTappedEventArgs() :
    MapRightTappedEventArgs(activate_instance<MapRightTappedEventArgs>())
{}

inline MapRouteView::MapRouteView(Windows::Services::Maps::MapRoute const& route)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapRouteView, Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>().CreateInstanceWithMapRoute(route, outer, inner));
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromBoundingBox(bounds);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromBoundingBox(bounds, headingInDegrees, pitchInDegrees);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromCamera(camera);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromLocation(location);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromLocation(location, headingInDegrees, pitchInDegrees);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromLocationAndRadius(location, radiusInMeters);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromLocationAndRadius(location, radiusInMeters, headingInDegrees, pitchInDegrees);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromLocations(locations);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees)
{
    return get_activation_factory<MapScene, Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>().CreateFromLocations(locations, headingInDegrees, pitchInDegrees);
}

inline Windows::UI::Xaml::Controls::Maps::MapStyleSheet MapStyleSheet::Aerial()
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().Aerial();
}

inline Windows::UI::Xaml::Controls::Maps::MapStyleSheet MapStyleSheet::AerialWithOverlay()
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().AerialWithOverlay();
}

inline Windows::UI::Xaml::Controls::Maps::MapStyleSheet MapStyleSheet::RoadLight()
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().RoadLight();
}

inline Windows::UI::Xaml::Controls::Maps::MapStyleSheet MapStyleSheet::RoadDark()
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().RoadDark();
}

inline Windows::UI::Xaml::Controls::Maps::MapStyleSheet MapStyleSheet::RoadHighContrastLight()
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().RoadHighContrastLight();
}

inline Windows::UI::Xaml::Controls::Maps::MapStyleSheet MapStyleSheet::RoadHighContrastDark()
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().RoadHighContrastDark();
}

inline Windows::UI::Xaml::Controls::Maps::MapStyleSheet MapStyleSheet::Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets)
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().Combine(styleSheets);
}

inline Windows::UI::Xaml::Controls::Maps::MapStyleSheet MapStyleSheet::ParseFromJson(param::hstring const& styleAsJson)
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().ParseFromJson(styleAsJson);
}

inline bool MapStyleSheet::TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet)
{
    return get_activation_factory<MapStyleSheet, Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>().TryParseFromJson(styleAsJson, styleSheet);
}

inline MapTargetCameraChangedEventArgs::MapTargetCameraChangedEventArgs() :
    MapTargetCameraChangedEventArgs(activate_instance<MapTargetCameraChangedEventArgs>())
{}

inline MapTileBitmapRequest::MapTileBitmapRequest() :
    MapTileBitmapRequest(activate_instance<MapTileBitmapRequest>())
{}

inline MapTileBitmapRequestDeferral::MapTileBitmapRequestDeferral() :
    MapTileBitmapRequestDeferral(activate_instance<MapTileBitmapRequestDeferral>())
{}

inline MapTileBitmapRequestedEventArgs::MapTileBitmapRequestedEventArgs() :
    MapTileBitmapRequestedEventArgs(activate_instance<MapTileBitmapRequestedEventArgs>())
{}

inline MapTileDataSource::MapTileDataSource()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>().CreateInstance(outer, inner));
}

inline MapTileSource::MapTileSource()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstance(outer, inner));
}

inline MapTileSource::MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstanceWithDataSource(dataSource, outer, inner));
}

inline MapTileSource::MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstanceWithDataSourceAndZoomRange(dataSource, zoomLevelRange, outer, inner));
}

inline MapTileSource::MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstanceWithDataSourceZoomRangeAndBounds(dataSource, zoomLevelRange, bounds, outer, inner));
}

inline MapTileSource::MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(dataSource, zoomLevelRange, bounds, tileSizeInPixels, outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::DataSourceProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().DataSourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::LayerProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().LayerProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::ZoomLevelRangeProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().ZoomLevelRangeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::BoundsProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().BoundsProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::AllowOverstretchProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().AllowOverstretchProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::IsFadingEnabledProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().IsFadingEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::IsTransparencyEnabledProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().IsTransparencyEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::IsRetryEnabledProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().IsRetryEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::ZIndexProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().ZIndexProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::TilePixelSizeProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().TilePixelSizeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::VisibleProperty()
{
    return get_activation_factory<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>().VisibleProperty();
}

inline MapTileUriRequest::MapTileUriRequest() :
    MapTileUriRequest(activate_instance<MapTileUriRequest>())
{}

inline MapTileUriRequestDeferral::MapTileUriRequestDeferral() :
    MapTileUriRequestDeferral(activate_instance<MapTileUriRequestDeferral>())
{}

inline MapTileUriRequestedEventArgs::MapTileUriRequestedEventArgs() :
    MapTileUriRequestedEventArgs(activate_instance<MapTileUriRequestedEventArgs>())
{}

inline StreetsideExperience::StreetsideExperience(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama) :
    StreetsideExperience(get_activation_factory<StreetsideExperience, Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>().CreateInstanceWithPanorama(panorama))
{}

inline StreetsideExperience::StreetsideExperience(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) :
    StreetsideExperience(get_activation_factory<StreetsideExperience, Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>().CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(panorama, headingInDegrees, pitchInDegrees, fieldOfViewInDegrees))
{}

inline Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> StreetsidePanorama::FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location)
{
    return get_activation_factory<StreetsidePanorama, Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>().FindNearbyAsync(location);
}

inline Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> StreetsidePanorama::FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters)
{
    return get_activation_factory<StreetsidePanorama, Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>().FindNearbyAsync(location, radiusInMeters);
}

template <typename D, typename ... Interfaces>
struct CustomMapTileDataSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = CustomMapTileDataSource;

protected:
    CustomMapTileDataSourceT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct HttpMapTileDataSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = HttpMapTileDataSource;

protected:
    HttpMapTileDataSourceT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>().CreateInstance(*this, this->m_inner);
    }
    HttpMapTileDataSourceT(param::hstring const& uriFormatString)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>().CreateInstanceWithUriFormatString(uriFormatString, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct LocalMapTileDataSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = LocalMapTileDataSource;

protected:
    LocalMapTileDataSourceT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>().CreateInstance(*this, this->m_inner);
    }
    LocalMapTileDataSourceT(param::hstring const& uriFormatString)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>().CreateInstanceWithUriFormatString(uriFormatString, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MapCustomExperienceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = MapCustomExperience;

protected:
    MapCustomExperienceT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapCustomExperience, Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MapElementT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = MapElement;

protected:
    MapElementT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::Controls::Maps::IMapElementFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MapRouteViewT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapRouteView, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = MapRouteView;

protected:
    MapRouteViewT(Windows::Services::Maps::MapRoute const& route)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapRouteView, Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>().CreateInstanceWithMapRoute(route, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MapTileDataSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = MapTileDataSource;

protected:
    MapTileDataSourceT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MapTileSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = MapTileSource;

protected:
    MapTileSourceT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstance(*this, this->m_inner);
    }
    MapTileSourceT(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstanceWithDataSource(dataSource, *this, this->m_inner);
    }
    MapTileSourceT(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstanceWithDataSourceAndZoomRange(dataSource, zoomLevelRange, *this, this->m_inner);
    }
    MapTileSourceT(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstanceWithDataSourceZoomRangeAndBounds(dataSource, zoomLevelRange, bounds, *this, this->m_inner);
    }
    MapTileSourceT(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Maps::MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>().CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(dataSource, zoomLevelRange, bounds, tileSizeInPixels, *this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboard> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboard> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCamera> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapCamera> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCameraFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapCameraFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl5> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlStatics5> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapElement2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapElementStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapIcon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapIcon> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapIcon2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapIcon2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapIconStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapIconStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapIconStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapIconStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapItemsControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapItemsControl> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygon> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygon2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygon2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolyline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolyline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapRouteView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapRouteView> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapScene> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapScene> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapSceneStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapSceneStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheet> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapBillboard> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapBillboard> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapCamera> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapCamera> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControl> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlDataHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlDataHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperience> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperience> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElement> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapElement> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapIcon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapIcon> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapItemsControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapItemsControl> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapPolygon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapPolygon> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapPolyline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapPolyline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapRouteView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapRouteView> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapScene> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapScene> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapStyleSheet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapStyleSheet> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileDataSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTileDataSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTileSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequest> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::StreetsideExperience> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::StreetsideExperience> {};

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> {};

}

WINRT_WARNING_POP
