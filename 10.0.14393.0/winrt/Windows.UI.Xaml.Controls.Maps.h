// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Geolocation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.UI.3.h"
#include "internal/Windows.Services.Maps.3.h"
#include "internal/Windows.UI.Xaml.Controls.Maps.3.h"
#include "Windows.UI.Xaml.Controls.h"
#include "internal/Windows.UI.Xaml.Controls.Maps.5.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
{
    HRESULT __stdcall add_BitmapRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BitmapRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BitmapRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().BitmapRequested(token);
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
{
    HRESULT __stdcall get_UriFormatString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UriFormatString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UriFormatString(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().UriFormatString(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalRequestHeaders(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdditionalRequestHeaders());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowCaching(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowCaching());
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
            this->shim().AllowCaching(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UriRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().UriRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UriRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().UriRequested(token);
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithUriFormatString(abi_arg_in<hstring> uriFormatString, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithUriFormatString(*reinterpret_cast<const hstring *>(&uriFormatString), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
{
    HRESULT __stdcall get_UriFormatString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UriFormatString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UriFormatString(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().UriFormatString(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UriRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().UriRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UriRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().UriRequested(token);
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithUriFormatString(abi_arg_in<hstring> uriFormatString, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithUriFormatString(*reinterpret_cast<const hstring *>(&uriFormatString), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
{
    HRESULT __stdcall get_Camera(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Camera());
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
    HRESULT __stdcall get_ChangeReason(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeReason());
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
    HRESULT __stdcall get_Camera(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Camera());
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
    HRESULT __stdcall get_ChangeReason(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapCamera> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapCamera>
{
    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Location(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            this->shim().Location(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Heading(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Heading());
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
            this->shim().Heading(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pitch(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pitch());
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
            this->shim().Pitch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Roll(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Roll());
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
            this->shim().Roll(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FieldOfView(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FieldOfView());
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
    HRESULT __stdcall abi_CreateInstanceWithLocation(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithLocation(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithLocationAndHeading(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, double headingInDegrees, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithLocationAndHeading(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), headingInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithLocationHeadingAndPitch(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, double headingInDegrees, double pitchInDegrees, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithLocationHeadingAndPitch(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees));
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapControl> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapControl>
{
    HRESULT __stdcall get_Center(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Center(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            this->shim().Center(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Children(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ColorScheme());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme value) noexcept override
    {
        try
        {
            this->shim().ColorScheme(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredPitch(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredPitch());
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
            this->shim().DesiredPitch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Heading(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Heading());
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
            this->shim().Heading(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LandmarksVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LandmarksVisible());
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
            this->shim().LandmarksVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LoadingStatus(Windows::UI::Xaml::Controls::Maps::MapLoadingStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LoadingStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapServiceToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapServiceToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MapServiceToken(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().MapServiceToken(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxZoomLevel(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinZoomLevel(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PedestrianFeaturesVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PedestrianFeaturesVisible());
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
            this->shim().PedestrianFeaturesVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pitch(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pitch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Style(Windows::UI::Xaml::Controls::Maps::MapStyle * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Style(Windows::UI::Xaml::Controls::Maps::MapStyle value) noexcept override
    {
        try
        {
            this->shim().Style(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficFlowVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrafficFlowVisible());
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
            this->shim().TrafficFlowVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformOrigin(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransformOrigin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformOrigin(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().TransformOrigin(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WatermarkMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode value) noexcept override
    {
        try
        {
            this->shim().WatermarkMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevel(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomLevel());
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
            this->shim().ZoomLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapElements(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapElements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Routes(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Routes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileSources(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TileSources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CenterChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CenterChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CenterChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CenterChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HeadingChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().HeadingChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HeadingChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().HeadingChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LoadingStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LoadingStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LoadingStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().LoadingStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapDoubleTapped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MapDoubleTapped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapDoubleTapped(event_token token) noexcept override
    {
        try
        {
            this->shim().MapDoubleTapped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapHolding(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MapHolding(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapHolding(event_token token) noexcept override
    {
        try
        {
            this->shim().MapHolding(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapTapped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MapTapped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapTapped(event_token token) noexcept override
    {
        try
        {
            this->shim().MapTapped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PitchChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PitchChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PitchChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PitchChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransformOriginChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TransformOriginChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransformOriginChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().TransformOriginChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ZoomLevelChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ZoomLevelChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ZoomLevelChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ZoomLevelChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindMapElementsAtOffset(abi_arg_in<Windows::Foundation::Point> offset, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FindMapElementsAtOffset(*reinterpret_cast<const Windows::Foundation::Point *>(&offset)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocationFromOffset(abi_arg_in<Windows::Foundation::Point> offset, abi_arg_out<Windows::Devices::Geolocation::IGeopoint> location) noexcept override
    {
        try
        {
            this->shim().GetLocationFromOffset(*reinterpret_cast<const Windows::Foundation::Point *>(&offset), *location);
            return S_OK;
        }
        catch (...)
        {
            *location = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetOffsetFromLocation(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, abi_arg_out<Windows::Foundation::Point> offset) noexcept override
    {
        try
        {
            this->shim().GetOffsetFromLocation(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), *offset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsLocationInView(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, bool * isInView) noexcept override
    {
        try
        {
            this->shim().IsLocationInView(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), *isInView);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetViewBoundsAsync(abi_arg_in<Windows::Devices::Geolocation::IGeoboundingBox> bounds, abi_arg_in<Windows::Foundation::IReference<Windows::UI::Xaml::Thickness>> margin, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animation, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TrySetViewBoundsAsync(*reinterpret_cast<const Windows::Devices::Geolocation::GeoboundingBox *>(&bounds), *reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Xaml::Thickness> *>(&margin), animation));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetViewWithCenterAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> center, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TrySetViewAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&center)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetViewWithCenterAndZoomAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> center, abi_arg_in<Windows::Foundation::IReference<double>> zoomLevel, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TrySetViewAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&center), *reinterpret_cast<const Windows::Foundation::IReference<double> *>(&zoomLevel)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetViewWithCenterZoomHeadingAndPitchAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> center, abi_arg_in<Windows::Foundation::IReference<double>> zoomLevel, abi_arg_in<Windows::Foundation::IReference<double>> heading, abi_arg_in<Windows::Foundation::IReference<double>> desiredPitch, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TrySetViewAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&center), *reinterpret_cast<const Windows::Foundation::IReference<double> *>(&zoomLevel), *reinterpret_cast<const Windows::Foundation::IReference<double> *>(&heading), *reinterpret_cast<const Windows::Foundation::IReference<double> *>(&desiredPitch)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> center, abi_arg_in<Windows::Foundation::IReference<double>> zoomLevel, abi_arg_in<Windows::Foundation::IReference<double>> heading, abi_arg_in<Windows::Foundation::IReference<double>> desiredPitch, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animation, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TrySetViewAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&center), *reinterpret_cast<const Windows::Foundation::IReference<double> *>(&zoomLevel), *reinterpret_cast<const Windows::Foundation::IReference<double> *>(&heading), *reinterpret_cast<const Windows::Foundation::IReference<double> *>(&desiredPitch), animation));
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
    HRESULT __stdcall get_BusinessLandmarksVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BusinessLandmarksVisible());
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
            this->shim().BusinessLandmarksVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitFeaturesVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitFeaturesVisible());
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
            this->shim().TransitFeaturesVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PanInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode value) noexcept override
    {
        try
        {
            this->shim().PanInteractionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotateInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) noexcept override
    {
        try
        {
            this->shim().RotateInteractionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TiltInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) noexcept override
    {
        try
        {
            this->shim().TiltInteractionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) noexcept override
    {
        try
        {
            this->shim().ZoomInteractionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Is3DSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Is3DSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStreetsideSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStreetsideSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scene(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scene());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scene(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapScene> value) noexcept override
    {
        try
        {
            this->shim().Scene(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapScene *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActualCamera(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActualCamera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetCamera(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetCamera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomExperience(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomExperience());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomExperience(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> value) noexcept override
    {
        try
        {
            this->shim().CustomExperience(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapCustomExperience *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapElementClick(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MapElementClick(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapElementClick(event_token token) noexcept override
    {
        try
        {
            this->shim().MapElementClick(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapElementPointerEntered(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MapElementPointerEntered(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapElementPointerEntered(event_token token) noexcept override
    {
        try
        {
            this->shim().MapElementPointerEntered(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MapElementPointerExited(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MapElementPointerExited(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapElementPointerExited(event_token token) noexcept override
    {
        try
        {
            this->shim().MapElementPointerExited(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActualCameraChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ActualCameraChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActualCameraChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ActualCameraChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActualCameraChanging(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ActualCameraChanging(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActualCameraChanging(event_token token) noexcept override
    {
        try
        {
            this->shim().ActualCameraChanging(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TargetCameraChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TargetCameraChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetCameraChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().TargetCameraChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CustomExperienceChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CustomExperienceChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CustomExperienceChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CustomExperienceChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartContinuousRotate(double rateInDegreesPerSecond) noexcept override
    {
        try
        {
            this->shim().StartContinuousRotate(rateInDegreesPerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopContinuousRotate() noexcept override
    {
        try
        {
            this->shim().StopContinuousRotate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartContinuousTilt(double rateInDegreesPerSecond) noexcept override
    {
        try
        {
            this->shim().StartContinuousTilt(rateInDegreesPerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopContinuousTilt() noexcept override
    {
        try
        {
            this->shim().StopContinuousTilt();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartContinuousZoom(double rateOfChangePerSecond) noexcept override
    {
        try
        {
            this->shim().StartContinuousZoom(rateOfChangePerSecond);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopContinuousZoom() noexcept override
    {
        try
        {
            this->shim().StopContinuousZoom();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryRotateAsync(double degrees, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryRotateAsync(degrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryRotateToAsync(double angleInDegrees, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryRotateToAsync(angleInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryTiltAsync(double degrees, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryTiltAsync(degrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryTiltToAsync(double angleInDegrees, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryTiltToAsync(angleInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryZoomInAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryZoomInAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryZoomOutAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryZoomOutAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryZoomToAsync(double zoomLevel, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryZoomToAsync(zoomLevel));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetSceneAsync(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapScene> scene, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TrySetSceneAsync(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapScene *>(&scene)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetSceneWithAnimationAsync(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapScene> scene, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animationKind, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TrySetSceneAsync(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapScene *>(&scene), animationKind));
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
    HRESULT __stdcall add_MapRightTapped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MapRightTapped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MapRightTapped(event_token token) noexcept override
    {
        try
        {
            this->shim().MapRightTapped(token);
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
    HRESULT __stdcall get_BusinessLandmarksEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BusinessLandmarksEnabled());
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
            this->shim().BusinessLandmarksEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitFeaturesEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitFeaturesEnabled());
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
            this->shim().TransitFeaturesEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVisibleRegion(Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind region, abi_arg_out<Windows::Devices::Geolocation::IGeopath> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetVisibleRegion(region));
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
    HRESULT __stdcall get_LocalLocations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalLocations());
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
    HRESULT __stdcall get_LocalLocations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalLocations());
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
    HRESULT __stdcall get_LocalLocations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalLocations());
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
    HRESULT __stdcall get_LocalLocations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalLocations());
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
    HRESULT __stdcall add_BusinessLandmarkClick(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BusinessLandmarkClick(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BusinessLandmarkClick(event_token token) noexcept override
    {
        try
        {
            this->shim().BusinessLandmarkClick(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransitFeatureClick(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TransitFeatureClick(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransitFeatureClick(event_token token) noexcept override
    {
        try
        {
            this->shim().TransitFeatureClick(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BusinessLandmarkRightTapped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BusinessLandmarkRightTapped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BusinessLandmarkRightTapped(event_token token) noexcept override
    {
        try
        {
            this->shim().BusinessLandmarkRightTapped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransitFeatureRightTapped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TransitFeatureRightTapped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransitFeatureRightTapped(event_token token) noexcept override
    {
        try
        {
            this->shim().TransitFeatureRightTapped(token);
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
    HRESULT __stdcall add_BusinessLandmarkPointerEntered(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BusinessLandmarkPointerEntered(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BusinessLandmarkPointerEntered(event_token token) noexcept override
    {
        try
        {
            this->shim().BusinessLandmarkPointerEntered(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransitFeaturePointerEntered(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TransitFeaturePointerEntered(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransitFeaturePointerEntered(event_token token) noexcept override
    {
        try
        {
            this->shim().TransitFeaturePointerEntered(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BusinessLandmarkPointerExited(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BusinessLandmarkPointerExited(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BusinessLandmarkPointerExited(event_token token) noexcept override
    {
        try
        {
            this->shim().BusinessLandmarkPointerExited(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TransitFeaturePointerExited(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TransitFeaturePointerExited(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransitFeaturePointerExited(event_token token) noexcept override
    {
        try
        {
            this->shim().TransitFeaturePointerExited(token);
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapControl> map, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapControl *>(&map)));
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
    HRESULT __stdcall get_CenterProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChildrenProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChildrenProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorSchemeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ColorSchemeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredPitchProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredPitchProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeadingProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeadingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LandmarksVisibleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LandmarksVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LoadingStatusProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LoadingStatusProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapServiceTokenProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapServiceTokenProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PedestrianFeaturesVisibleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PedestrianFeaturesVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PitchProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PitchProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StyleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficFlowVisibleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrafficFlowVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformOriginProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransformOriginProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WatermarkModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WatermarkModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevelProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomLevelProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapElementsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapElementsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoutesProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoutesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileSourcesProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TileSourcesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocation(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLocation(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLocation(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            this->shim().SetLocation(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedAnchorPointProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizedAnchorPointProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNormalizedAnchorPoint(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetNormalizedAnchorPoint(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetNormalizedAnchorPoint(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().SetNormalizedAnchorPoint(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const Windows::Foundation::Point *>(&value));
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
    HRESULT __stdcall get_BusinessLandmarksVisibleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BusinessLandmarksVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitFeaturesVisibleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitFeaturesVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PanInteractionModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PanInteractionModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotateInteractionModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotateInteractionModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiltInteractionModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TiltInteractionModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomInteractionModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomInteractionModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Is3DSupportedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Is3DSupportedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStreetsideSupportedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStreetsideSupportedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SceneProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SceneProperty());
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
    HRESULT __stdcall get_BusinessLandmarksEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BusinessLandmarksEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitFeaturesEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitFeaturesEnabledProperty());
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
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitProperties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitProperties());
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
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitProperties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitProperties());
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
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitProperties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitProperties());
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
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitProperties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitProperties());
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElement> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElement>
{
    HRESULT __stdcall get_ZIndex(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZIndex());
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
            this->shim().ZIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Visible());
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
    HRESULT __stdcall get_MapTabIndex(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapTabIndex());
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
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapElements(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapElements());
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapElement> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapElement(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapElement());
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
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapElement(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapElement());
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
    HRESULT __stdcall get_ZIndexProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VisibleProperty());
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
    HRESULT __stdcall get_MapTabIndexProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MapTabIndexProperty());
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
    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Location(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            this->shim().Location(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedAnchorPoint(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizedAnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NormalizedAnchorPoint(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().NormalizedAnchorPoint(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Image(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().Image(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
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
    HRESULT __stdcall get_CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CollisionBehaviorDesired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value) noexcept override
    {
        try
        {
            this->shim().CollisionBehaviorDesired(value);
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
    HRESULT __stdcall get_LocationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TitleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedAnchorPointProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizedAnchorPointProperty());
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
    HRESULT __stdcall get_CollisionBehaviorDesiredProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CollisionBehaviorDesiredProperty());
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
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
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
    HRESULT __stdcall get_ItemsSource(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemsSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemsSource(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().ItemsSource(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Items(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTemplate(abi_arg_out<Windows::UI::Xaml::IDataTemplate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemTemplate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemTemplate(abi_arg_in<Windows::UI::Xaml::IDataTemplate> value) noexcept override
    {
        try
        {
            this->shim().ItemTemplate(*reinterpret_cast<const Windows::UI::Xaml::DataTemplate *>(&value));
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
    HRESULT __stdcall get_ItemsSourceProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemsSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTemplateProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemTemplateProperty());
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
    HRESULT __stdcall get_Path(abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Path(abi_arg_in<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            this->shim().Path(*reinterpret_cast<const Windows::Devices::Geolocation::Geopath *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().StrokeColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThickness(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeThickness());
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
            this->shim().StrokeThickness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashed());
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
            this->shim().StrokeDashed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FillColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().FillColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
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
    HRESULT __stdcall get_Paths(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Paths());
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
    HRESULT __stdcall get_PathProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PathProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThicknessProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashedProperty());
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
    HRESULT __stdcall get_Path(abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Path(abi_arg_in<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            this->shim().Path(*reinterpret_cast<const Windows::Devices::Geolocation::Geopath *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().StrokeColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThickness(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeThickness());
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
            this->shim().StrokeThickness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashed());
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
    HRESULT __stdcall get_PathProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PathProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashedProperty());
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
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
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
    HRESULT __stdcall get_RouteColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RouteColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RouteColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().RouteColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutlineColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutlineColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutlineColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().OutlineColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Route(abi_arg_out<Windows::Services::Maps::IMapRoute> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Route());
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
    HRESULT __stdcall abi_CreateInstanceWithMapRoute(abi_arg_in<Windows::Services::Maps::IMapRoute> route, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapRouteView> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithMapRoute(*reinterpret_cast<const Windows::Services::Maps::MapRoute *>(&route), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapScene> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapScene>
{
    HRESULT __stdcall get_TargetCamera(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetCamera());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TargetCameraChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TargetCameraChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetCameraChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().TargetCameraChanged(token);
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
    HRESULT __stdcall abi_CreateFromBoundingBox(abi_arg_in<Windows::Devices::Geolocation::IGeoboundingBox> bounds, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromBoundingBox(*reinterpret_cast<const Windows::Devices::Geolocation::GeoboundingBox *>(&bounds)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromBoundingBoxWithHeadingAndPitch(abi_arg_in<Windows::Devices::Geolocation::IGeoboundingBox> bounds, double headingInDegrees, double pitchInDegrees, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromBoundingBox(*reinterpret_cast<const Windows::Devices::Geolocation::GeoboundingBox *>(&bounds), headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromCamera(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapCamera> camera, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromCamera(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapCamera *>(&camera)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromLocation(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromLocation(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromLocationWithHeadingAndPitch(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, double headingInDegrees, double pitchInDegrees, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromLocation(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromLocationAndRadius(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, double radiusInMeters, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromLocationAndRadius(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), radiusInMeters));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromLocationAndRadiusWithHeadingAndPitch(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, double radiusInMeters, double headingInDegrees, double pitchInDegrees, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromLocationAndRadius(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), radiusInMeters, headingInDegrees, pitchInDegrees));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromLocations(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint>> locations, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromLocations(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> *>(&locations)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromLocationsWithHeadingAndPitch(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint>> locations, double headingInDegrees, double pitchInDegrees, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapScene> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreateFromLocations(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> *>(&locations), headingInDegrees, pitchInDegrees));
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
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
{
    HRESULT __stdcall get_Camera(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapCamera> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Camera());
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
    HRESULT __stdcall get_ChangeReason(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeReason());
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
    HRESULT __stdcall get_PixelData(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PixelData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PixelData(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().PixelData(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_X(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Y(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Y());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevel(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSource>
{
    HRESULT __stdcall get_DataSource(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataSource(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> value) noexcept override
    {
        try
        {
            this->shim().DataSource(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapTileDataSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Layer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer value) noexcept override
    {
        try
        {
            this->shim().Layer(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevelRange(abi_arg_out<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomLevelRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ZoomLevelRange(abi_arg_in<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> value) noexcept override
    {
        try
        {
            this->shim().ZoomLevelRange(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bounds(abi_arg_in<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            this->shim().Bounds(*reinterpret_cast<const Windows::Devices::Geolocation::GeoboundingBox *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowOverstretch(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowOverstretch());
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
            this->shim().AllowOverstretch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFadingEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsFadingEnabled());
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
            this->shim().IsFadingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTransparencyEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTransparencyEnabled());
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
            this->shim().IsTransparencyEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRetryEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRetryEnabled());
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
            this->shim().IsRetryEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZIndex(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZIndex());
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
            this->shim().ZIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TilePixelSize(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TilePixelSize());
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
            this->shim().TilePixelSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Visible());
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithDataSource(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> dataSource, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithDataSource(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapTileDataSource *>(&dataSource), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithDataSourceAndZoomRange(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> dataSource, abi_arg_in<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> zoomLevelRange, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithDataSourceAndZoomRange(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapTileDataSource *>(&dataSource), *reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange *>(&zoomLevelRange), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithDataSourceZoomRangeAndBounds(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> dataSource, abi_arg_in<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> zoomLevelRange, abi_arg_in<Windows::Devices::Geolocation::IGeoboundingBox> bounds, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithDataSourceZoomRangeAndBounds(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapTileDataSource *>(&dataSource), *reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange *>(&zoomLevelRange), *reinterpret_cast<const Windows::Devices::Geolocation::GeoboundingBox *>(&bounds), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> dataSource, abi_arg_in<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> zoomLevelRange, abi_arg_in<Windows::Devices::Geolocation::IGeoboundingBox> bounds, int32_t tileSizeInPixels, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapTileDataSource *>(&dataSource), *reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange *>(&zoomLevelRange), *reinterpret_cast<const Windows::Devices::Geolocation::GeoboundingBox *>(&bounds), tileSizeInPixels, *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> : produce_base<D, Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
{
    HRESULT __stdcall get_DataSourceProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LayerProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LayerProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevelRangeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomLevelRangeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BoundsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowOverstretchProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowOverstretchProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFadingEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsFadingEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTransparencyEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTransparencyEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRetryEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRetryEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZIndexProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TilePixelSizeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TilePixelSizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VisibleProperty());
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
    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Uri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_X(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Y(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Y());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevel(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(abi_arg_out<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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
    HRESULT __stdcall get_AddressTextVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AddressTextVisible());
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
            this->shim().AddressTextVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CursorVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CursorVisible());
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
            this->shim().CursorVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverviewMapVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverviewMapVisible());
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
            this->shim().OverviewMapVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreetLabelsVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StreetLabelsVisible());
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
            this->shim().StreetLabelsVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitButtonVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitButtonVisible());
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
            this->shim().ExitButtonVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomButtonsVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomButtonsVisible());
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
    HRESULT __stdcall abi_CreateInstanceWithPanorama(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> panorama, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithPanorama(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::StreetsidePanorama *>(&panorama)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(abi_arg_in<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees, abi_arg_out<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(*reinterpret_cast<const Windows::UI::Xaml::Controls::Maps::StreetsidePanorama *>(&panorama), headingInDegrees, pitchInDegrees, fieldOfViewInDegrees));
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
    HRESULT __stdcall get_Location(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
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
    HRESULT __stdcall abi_FindNearbyWithLocationAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FindNearbyAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindNearbyWithLocationAndRadiusAsync(abi_arg_in<Windows::Devices::Geolocation::IGeopoint> location, double radiusInMeters, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FindNearbyAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&location), radiusInMeters));
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

namespace Windows::UI::Xaml::Controls::Maps {

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapActualCameraChangedEventArgs<D>::Camera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value { nullptr };
    check_hresult(static_cast<const IMapActualCameraChangedEventArgs &>(static_cast<const D &>(*this))->get_Camera(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason impl_IMapActualCameraChangedEventArgs2<D>::ChangeReason() const
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value {};
    check_hresult(static_cast<const IMapActualCameraChangedEventArgs2 &>(static_cast<const D &>(*this))->get_ChangeReason(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapActualCameraChangingEventArgs<D>::Camera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value { nullptr };
    check_hresult(static_cast<const IMapActualCameraChangingEventArgs &>(static_cast<const D &>(*this))->get_Camera(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason impl_IMapActualCameraChangingEventArgs2<D>::ChangeReason() const
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value {};
    check_hresult(static_cast<const IMapActualCameraChangingEventArgs2 &>(static_cast<const D &>(*this))->get_ChangeReason(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IMapElementClickEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMapElementClickEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapElementClickEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapElementClickEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> impl_IMapElementClickEventArgs<D>::MapElements() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> value;
    check_hresult(static_cast<const IMapElementClickEventArgs &>(static_cast<const D &>(*this))->get_MapElements(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IMapElementPointerEnteredEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMapElementPointerEnteredEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapElementPointerEnteredEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapElementPointerEnteredEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElement impl_IMapElementPointerEnteredEventArgs<D>::MapElement() const
{
    Windows::UI::Xaml::Controls::Maps::MapElement value { nullptr };
    check_hresult(static_cast<const IMapElementPointerEnteredEventArgs &>(static_cast<const D &>(*this))->get_MapElement(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IMapElementPointerExitedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMapElementPointerExitedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapElementPointerExitedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapElementPointerExitedEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElement impl_IMapElementPointerExitedEventArgs<D>::MapElement() const
{
    Windows::UI::Xaml::Controls::Maps::MapElement value { nullptr };
    check_hresult(static_cast<const IMapElementPointerExitedEventArgs &>(static_cast<const D &>(*this))->get_MapElement(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IMapRightTappedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMapRightTappedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapRightTappedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapRightTappedEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapTargetCameraChangedEventArgs<D>::Camera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value { nullptr };
    check_hresult(static_cast<const IMapTargetCameraChangedEventArgs &>(static_cast<const D &>(*this))->get_Camera(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason impl_IMapTargetCameraChangedEventArgs2<D>::ChangeReason() const
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason value {};
    check_hresult(static_cast<const IMapTargetCameraChangedEventArgs2 &>(static_cast<const D &>(*this))->get_ChangeReason(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IMapTileBitmapRequest<D>::PixelData() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IMapTileBitmapRequest &>(static_cast<const D &>(*this))->get_PixelData(put(value)));
    return value;
}

template <typename D> void impl_IMapTileBitmapRequest<D>::PixelData(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IMapTileBitmapRequest &>(static_cast<const D &>(*this))->put_PixelData(get(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral impl_IMapTileBitmapRequest<D>::GetDeferral() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral returnValue { nullptr };
    check_hresult(static_cast<const IMapTileBitmapRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IMapTileBitmapRequestDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IMapTileBitmapRequestDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> int32_t impl_IMapTileBitmapRequestedEventArgs<D>::X() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapTileBitmapRequestedEventArgs &>(static_cast<const D &>(*this))->get_X(&value));
    return value;
}

template <typename D> int32_t impl_IMapTileBitmapRequestedEventArgs<D>::Y() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapTileBitmapRequestedEventArgs &>(static_cast<const D &>(*this))->get_Y(&value));
    return value;
}

template <typename D> int32_t impl_IMapTileBitmapRequestedEventArgs<D>::ZoomLevel() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapTileBitmapRequestedEventArgs &>(static_cast<const D &>(*this))->get_ZoomLevel(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest impl_IMapTileBitmapRequestedEventArgs<D>::Request() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest value { nullptr };
    check_hresult(static_cast<const IMapTileBitmapRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IMapTileUriRequest<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IMapTileUriRequest &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> void impl_IMapTileUriRequest<D>::Uri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IMapTileUriRequest &>(static_cast<const D &>(*this))->put_Uri(get(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral impl_IMapTileUriRequest<D>::GetDeferral() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral returnValue { nullptr };
    check_hresult(static_cast<const IMapTileUriRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IMapTileUriRequestDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IMapTileUriRequestDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> int32_t impl_IMapTileUriRequestedEventArgs<D>::X() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapTileUriRequestedEventArgs &>(static_cast<const D &>(*this))->get_X(&value));
    return value;
}

template <typename D> int32_t impl_IMapTileUriRequestedEventArgs<D>::Y() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapTileUriRequestedEventArgs &>(static_cast<const D &>(*this))->get_Y(&value));
    return value;
}

template <typename D> int32_t impl_IMapTileUriRequestedEventArgs<D>::ZoomLevel() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapTileUriRequestedEventArgs &>(static_cast<const D &>(*this))->get_ZoomLevel(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileUriRequest impl_IMapTileUriRequestedEventArgs<D>::Request() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileUriRequest value { nullptr };
    check_hresult(static_cast<const IMapTileUriRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapCamera<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> void impl_IMapCamera<D>::Location(const Windows::Devices::Geolocation::Geopoint & value) const
{
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->put_Location(get(value)));
}

template <typename D> double impl_IMapCamera<D>::Heading() const
{
    double value {};
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->get_Heading(&value));
    return value;
}

template <typename D> void impl_IMapCamera<D>::Heading(double value) const
{
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->put_Heading(value));
}

template <typename D> double impl_IMapCamera<D>::Pitch() const
{
    double value {};
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->get_Pitch(&value));
    return value;
}

template <typename D> void impl_IMapCamera<D>::Pitch(double value) const
{
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->put_Pitch(value));
}

template <typename D> double impl_IMapCamera<D>::Roll() const
{
    double value {};
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->get_Roll(&value));
    return value;
}

template <typename D> void impl_IMapCamera<D>::Roll(double value) const
{
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->put_Roll(value));
}

template <typename D> double impl_IMapCamera<D>::FieldOfView() const
{
    double value {};
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->get_FieldOfView(&value));
    return value;
}

template <typename D> void impl_IMapCamera<D>::FieldOfView(double value) const
{
    check_hresult(static_cast<const IMapCamera &>(static_cast<const D &>(*this))->put_FieldOfView(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapCameraFactory<D>::CreateInstanceWithLocation(const Windows::Devices::Geolocation::Geopoint & location) const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera instance { nullptr };
    check_hresult(static_cast<const IMapCameraFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithLocation(get(location), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapCameraFactory<D>::CreateInstanceWithLocationAndHeading(const Windows::Devices::Geolocation::Geopoint & location, double headingInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera instance { nullptr };
    check_hresult(static_cast<const IMapCameraFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithLocationAndHeading(get(location), headingInDegrees, put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapCameraFactory<D>::CreateInstanceWithLocationHeadingAndPitch(const Windows::Devices::Geolocation::Geopoint & location, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera instance { nullptr };
    check_hresult(static_cast<const IMapCameraFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithLocationHeadingAndPitch(get(location), headingInDegrees, pitchInDegrees, put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapCameraFactory<D>::CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(const Windows::Devices::Geolocation::Geopoint & location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera instance { nullptr };
    check_hresult(static_cast<const IMapCameraFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(get(location), headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees, put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCustomExperience impl_IMapCustomExperienceFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapCustomExperience instance { nullptr };
    check_hresult(static_cast<const IMapCustomExperienceFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> int32_t impl_IMapElement<D>::ZIndex() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapElement &>(static_cast<const D &>(*this))->get_ZIndex(&value));
    return value;
}

template <typename D> void impl_IMapElement<D>::ZIndex(int32_t value) const
{
    check_hresult(static_cast<const IMapElement &>(static_cast<const D &>(*this))->put_ZIndex(value));
}

template <typename D> bool impl_IMapElement<D>::Visible() const
{
    bool value {};
    check_hresult(static_cast<const IMapElement &>(static_cast<const D &>(*this))->get_Visible(&value));
    return value;
}

template <typename D> void impl_IMapElement<D>::Visible(bool value) const
{
    check_hresult(static_cast<const IMapElement &>(static_cast<const D &>(*this))->put_Visible(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapElementStatics<D>::ZIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapElementStatics &>(static_cast<const D &>(*this))->get_ZIndexProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapElementStatics<D>::VisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapElementStatics &>(static_cast<const D &>(*this))->get_VisibleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElement impl_IMapElementFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapElement instance { nullptr };
    check_hresult(static_cast<const IMapElementFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> int32_t impl_IMapElement2<D>::MapTabIndex() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapElement2 &>(static_cast<const D &>(*this))->get_MapTabIndex(&value));
    return value;
}

template <typename D> void impl_IMapElement2<D>::MapTabIndex(int32_t value) const
{
    check_hresult(static_cast<const IMapElement2 &>(static_cast<const D &>(*this))->put_MapTabIndex(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapElementStatics2<D>::MapTabIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapElementStatics2 &>(static_cast<const D &>(*this))->get_MapTabIndexProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IMapInputEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMapInputEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapInputEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapInputEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IMapItemsControl<D>::ItemsSource() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IMapItemsControl &>(static_cast<const D &>(*this))->get_ItemsSource(put(value)));
    return value;
}

template <typename D> void impl_IMapItemsControl<D>::ItemsSource(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IMapItemsControl &>(static_cast<const D &>(*this))->put_ItemsSource(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> impl_IMapItemsControl<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value;
    check_hresult(static_cast<const IMapItemsControl &>(static_cast<const D &>(*this))->get_Items(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DataTemplate impl_IMapItemsControl<D>::ItemTemplate() const
{
    Windows::UI::Xaml::DataTemplate value { nullptr };
    check_hresult(static_cast<const IMapItemsControl &>(static_cast<const D &>(*this))->get_ItemTemplate(put(value)));
    return value;
}

template <typename D> void impl_IMapItemsControl<D>::ItemTemplate(const Windows::UI::Xaml::DataTemplate & value) const
{
    check_hresult(static_cast<const IMapItemsControl &>(static_cast<const D &>(*this))->put_ItemTemplate(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapItemsControlStatics<D>::ItemsSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapItemsControlStatics &>(static_cast<const D &>(*this))->get_ItemsSourceProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapItemsControlStatics<D>::ItemsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapItemsControlStatics &>(static_cast<const D &>(*this))->get_ItemsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapItemsControlStatics<D>::ItemTemplateProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapItemsControlStatics &>(static_cast<const D &>(*this))->get_ItemTemplateProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IMapRouteView<D>::RouteColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IMapRouteView &>(static_cast<const D &>(*this))->get_RouteColor(put(value)));
    return value;
}

template <typename D> void impl_IMapRouteView<D>::RouteColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IMapRouteView &>(static_cast<const D &>(*this))->put_RouteColor(get(value)));
}

template <typename D> Windows::UI::Color impl_IMapRouteView<D>::OutlineColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IMapRouteView &>(static_cast<const D &>(*this))->get_OutlineColor(put(value)));
    return value;
}

template <typename D> void impl_IMapRouteView<D>::OutlineColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IMapRouteView &>(static_cast<const D &>(*this))->put_OutlineColor(get(value)));
}

template <typename D> Windows::Services::Maps::MapRoute impl_IMapRouteView<D>::Route() const
{
    Windows::Services::Maps::MapRoute value { nullptr };
    check_hresult(static_cast<const IMapRouteView &>(static_cast<const D &>(*this))->get_Route(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapRouteView impl_IMapRouteViewFactory<D>::CreateInstanceWithMapRoute(const Windows::Services::Maps::MapRoute & route, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapRouteView instance { nullptr };
    check_hresult(static_cast<const IMapRouteViewFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithMapRoute(get(route), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapScene<D>::TargetCamera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value { nullptr };
    check_hresult(static_cast<const IMapScene &>(static_cast<const D &>(*this))->get_TargetCamera(put(value)));
    return value;
}

template <typename D> event_token impl_IMapScene<D>::TargetCameraChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapScene &>(static_cast<const D &>(*this))->add_TargetCameraChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapScene> impl_IMapScene<D>::TargetCameraChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapScene>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapScene::remove_TargetCameraChanged, TargetCameraChanged(value));
}

template <typename D> void impl_IMapScene<D>::TargetCameraChanged(event_token token) const
{
    check_hresult(static_cast<const IMapScene &>(static_cast<const D &>(*this))->remove_TargetCameraChanged(token));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromBoundingBox(const Windows::Devices::Geolocation::GeoboundingBox & bounds) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromBoundingBox(get(bounds), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromBoundingBox(const Windows::Devices::Geolocation::GeoboundingBox & bounds, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromBoundingBoxWithHeadingAndPitch(get(bounds), headingInDegrees, pitchInDegrees, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromCamera(const Windows::UI::Xaml::Controls::Maps::MapCamera & camera) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromCamera(get(camera), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromLocation(const Windows::Devices::Geolocation::Geopoint & location) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromLocation(get(location), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromLocation(const Windows::Devices::Geolocation::Geopoint & location, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromLocationWithHeadingAndPitch(get(location), headingInDegrees, pitchInDegrees, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromLocationAndRadius(const Windows::Devices::Geolocation::Geopoint & location, double radiusInMeters) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromLocationAndRadius(get(location), radiusInMeters, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromLocationAndRadius(const Windows::Devices::Geolocation::Geopoint & location, double radiusInMeters, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromLocationAndRadiusWithHeadingAndPitch(get(location), radiusInMeters, headingInDegrees, pitchInDegrees, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromLocations(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & locations) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromLocations(get(locations), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapSceneStatics<D>::CreateFromLocations(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & locations, double headingInDegrees, double pitchInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::MapScene returnValue { nullptr };
    check_hresult(static_cast<const IMapSceneStatics &>(static_cast<const D &>(*this))->abi_CreateFromLocationsWithHeadingAndPitch(get(locations), headingInDegrees, pitchInDegrees, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileDataSource impl_IMapTileDataSourceFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileDataSource instance { nullptr };
    check_hresult(static_cast<const IMapTileDataSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileDataSource impl_IMapTileSource<D>::DataSource() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileDataSource value { nullptr };
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_DataSource(put(value)));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::DataSource(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_DataSource(get(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileLayer impl_IMapTileSource<D>::Layer() const
{
    Windows::UI::Xaml::Controls::Maps::MapTileLayer value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_Layer(&value));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_Layer(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange impl_IMapTileSource<D>::ZoomLevelRange() const
{
    Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_ZoomLevelRange(put(value)));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::ZoomLevelRange(const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_ZoomLevelRange(get(value)));
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IMapTileSource<D>::Bounds() const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_Bounds(put(value)));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::Bounds(const Windows::Devices::Geolocation::GeoboundingBox & value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_Bounds(get(value)));
}

template <typename D> bool impl_IMapTileSource<D>::AllowOverstretch() const
{
    bool value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_AllowOverstretch(&value));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::AllowOverstretch(bool value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_AllowOverstretch(value));
}

template <typename D> bool impl_IMapTileSource<D>::IsFadingEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_IsFadingEnabled(&value));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::IsFadingEnabled(bool value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_IsFadingEnabled(value));
}

template <typename D> bool impl_IMapTileSource<D>::IsTransparencyEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_IsTransparencyEnabled(&value));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::IsTransparencyEnabled(bool value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_IsTransparencyEnabled(value));
}

template <typename D> bool impl_IMapTileSource<D>::IsRetryEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_IsRetryEnabled(&value));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::IsRetryEnabled(bool value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_IsRetryEnabled(value));
}

template <typename D> int32_t impl_IMapTileSource<D>::ZIndex() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_ZIndex(&value));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::ZIndex(int32_t value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_ZIndex(value));
}

template <typename D> int32_t impl_IMapTileSource<D>::TilePixelSize() const
{
    int32_t value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_TilePixelSize(&value));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::TilePixelSize(int32_t value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_TilePixelSize(value));
}

template <typename D> bool impl_IMapTileSource<D>::Visible() const
{
    bool value {};
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->get_Visible(&value));
    return value;
}

template <typename D> void impl_IMapTileSource<D>::Visible(bool value) const
{
    check_hresult(static_cast<const IMapTileSource &>(static_cast<const D &>(*this))->put_Visible(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::DataSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_DataSourceProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::LayerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_LayerProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::ZoomLevelRangeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_ZoomLevelRangeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::BoundsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_BoundsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::AllowOverstretchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_AllowOverstretchProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::IsFadingEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_IsFadingEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::IsTransparencyEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_IsTransparencyEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::IsRetryEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_IsRetryEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::ZIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_ZIndexProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::TilePixelSizeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_TilePixelSizeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapTileSourceStatics<D>::VisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapTileSourceStatics &>(static_cast<const D &>(*this))->get_VisibleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource impl_IMapTileSourceFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance { nullptr };
    check_hresult(static_cast<const IMapTileSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource impl_IMapTileSourceFactory<D>::CreateInstanceWithDataSource(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance { nullptr };
    check_hresult(static_cast<const IMapTileSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithDataSource(get(dataSource), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource impl_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceAndZoomRange(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance { nullptr };
    check_hresult(static_cast<const IMapTileSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithDataSourceAndZoomRange(get(dataSource), get(zoomLevelRange), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource impl_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceZoomRangeAndBounds(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange, const Windows::Devices::Geolocation::GeoboundingBox & bounds, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance { nullptr };
    check_hresult(static_cast<const IMapTileSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithDataSourceZoomRangeAndBounds(get(dataSource), get(zoomLevelRange), get(bounds), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapTileSource impl_IMapTileSourceFactory<D>::CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange, const Windows::Devices::Geolocation::GeoboundingBox & bounds, int32_t tileSizeInPixels, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource instance { nullptr };
    check_hresult(static_cast<const IMapTileSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(get(dataSource), get(zoomLevelRange), get(bounds), tileSizeInPixels, get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IStreetsidePanorama<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IStreetsidePanorama &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> impl_IStreetsidePanoramaStatics<D>::FindNearbyAsync(const Windows::Devices::Geolocation::Geopoint & location) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> returnValue;
    check_hresult(static_cast<const IStreetsidePanoramaStatics &>(static_cast<const D &>(*this))->abi_FindNearbyWithLocationAsync(get(location), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> impl_IStreetsidePanoramaStatics<D>::FindNearbyAsync(const Windows::Devices::Geolocation::Geopoint & location, double radiusInMeters) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> returnValue;
    check_hresult(static_cast<const IStreetsidePanoramaStatics &>(static_cast<const D &>(*this))->abi_FindNearbyWithLocationAndRadiusAsync(get(location), radiusInMeters, put(returnValue)));
    return returnValue;
}

template <typename D> event_token impl_ICustomMapTileDataSource<D>::BitmapRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const ICustomMapTileDataSource &>(static_cast<const D &>(*this))->add_BitmapRequested(get(value), &token));
    return token;
}

template <typename D> event_revoker<ICustomMapTileDataSource> impl_ICustomMapTileDataSource<D>::BitmapRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> & value) const
{
    return impl::make_event_revoker<D, ICustomMapTileDataSource>(this, &ABI::Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource::remove_BitmapRequested, BitmapRequested(value));
}

template <typename D> void impl_ICustomMapTileDataSource<D>::BitmapRequested(event_token token) const
{
    check_hresult(static_cast<const ICustomMapTileDataSource &>(static_cast<const D &>(*this))->remove_BitmapRequested(token));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource impl_ICustomMapTileDataSourceFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource instance { nullptr };
    check_hresult(static_cast<const ICustomMapTileDataSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> hstring impl_IHttpMapTileDataSource<D>::UriFormatString() const
{
    hstring value;
    check_hresult(static_cast<const IHttpMapTileDataSource &>(static_cast<const D &>(*this))->get_UriFormatString(put(value)));
    return value;
}

template <typename D> void impl_IHttpMapTileDataSource<D>::UriFormatString(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpMapTileDataSource &>(static_cast<const D &>(*this))->put_UriFormatString(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IHttpMapTileDataSource<D>::AdditionalRequestHeaders() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IHttpMapTileDataSource &>(static_cast<const D &>(*this))->get_AdditionalRequestHeaders(put(value)));
    return value;
}

template <typename D> bool impl_IHttpMapTileDataSource<D>::AllowCaching() const
{
    bool value {};
    check_hresult(static_cast<const IHttpMapTileDataSource &>(static_cast<const D &>(*this))->get_AllowCaching(&value));
    return value;
}

template <typename D> void impl_IHttpMapTileDataSource<D>::AllowCaching(bool value) const
{
    check_hresult(static_cast<const IHttpMapTileDataSource &>(static_cast<const D &>(*this))->put_AllowCaching(value));
}

template <typename D> event_token impl_IHttpMapTileDataSource<D>::UriRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IHttpMapTileDataSource &>(static_cast<const D &>(*this))->add_UriRequested(get(value), &token));
    return token;
}

template <typename D> event_revoker<IHttpMapTileDataSource> impl_IHttpMapTileDataSource<D>::UriRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IHttpMapTileDataSource>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource::remove_UriRequested, UriRequested(value));
}

template <typename D> void impl_IHttpMapTileDataSource<D>::UriRequested(event_token token) const
{
    check_hresult(static_cast<const IHttpMapTileDataSource &>(static_cast<const D &>(*this))->remove_UriRequested(token));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource impl_IHttpMapTileDataSourceFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource instance { nullptr };
    check_hresult(static_cast<const IHttpMapTileDataSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource impl_IHttpMapTileDataSourceFactory<D>::CreateInstanceWithUriFormatString(hstring_ref uriFormatString, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource instance { nullptr };
    check_hresult(static_cast<const IHttpMapTileDataSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithUriFormatString(get(uriFormatString), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> hstring impl_ILocalMapTileDataSource<D>::UriFormatString() const
{
    hstring value;
    check_hresult(static_cast<const ILocalMapTileDataSource &>(static_cast<const D &>(*this))->get_UriFormatString(put(value)));
    return value;
}

template <typename D> void impl_ILocalMapTileDataSource<D>::UriFormatString(hstring_ref value) const
{
    check_hresult(static_cast<const ILocalMapTileDataSource &>(static_cast<const D &>(*this))->put_UriFormatString(get(value)));
}

template <typename D> event_token impl_ILocalMapTileDataSource<D>::UriRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const ILocalMapTileDataSource &>(static_cast<const D &>(*this))->add_UriRequested(get(value), &token));
    return token;
}

template <typename D> event_revoker<ILocalMapTileDataSource> impl_ILocalMapTileDataSource<D>::UriRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> & value) const
{
    return impl::make_event_revoker<D, ILocalMapTileDataSource>(this, &ABI::Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource::remove_UriRequested, UriRequested(value));
}

template <typename D> void impl_ILocalMapTileDataSource<D>::UriRequested(event_token token) const
{
    check_hresult(static_cast<const ILocalMapTileDataSource &>(static_cast<const D &>(*this))->remove_UriRequested(token));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource impl_ILocalMapTileDataSourceFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource instance { nullptr };
    check_hresult(static_cast<const ILocalMapTileDataSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource impl_ILocalMapTileDataSourceFactory<D>::CreateInstanceWithUriFormatString(hstring_ref uriFormatString, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource instance { nullptr };
    check_hresult(static_cast<const ILocalMapTileDataSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithUriFormatString(get(uriFormatString), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapIcon<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapIcon &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> void impl_IMapIcon<D>::Location(const Windows::Devices::Geolocation::Geopoint & value) const
{
    check_hresult(static_cast<const IMapIcon &>(static_cast<const D &>(*this))->put_Location(get(value)));
}

template <typename D> hstring impl_IMapIcon<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IMapIcon &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IMapIcon<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IMapIcon &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Foundation::Point impl_IMapIcon<D>::NormalizedAnchorPoint() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMapIcon &>(static_cast<const D &>(*this))->get_NormalizedAnchorPoint(put(value)));
    return value;
}

template <typename D> void impl_IMapIcon<D>::NormalizedAnchorPoint(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IMapIcon &>(static_cast<const D &>(*this))->put_NormalizedAnchorPoint(get(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IMapIcon<D>::Image() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IMapIcon &>(static_cast<const D &>(*this))->get_Image(put(value)));
    return value;
}

template <typename D> void impl_IMapIcon<D>::Image(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IMapIcon &>(static_cast<const D &>(*this))->put_Image(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapIconStatics<D>::LocationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapIconStatics &>(static_cast<const D &>(*this))->get_LocationProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapIconStatics<D>::TitleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapIconStatics &>(static_cast<const D &>(*this))->get_TitleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapIconStatics<D>::NormalizedAnchorPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapIconStatics &>(static_cast<const D &>(*this))->get_NormalizedAnchorPointProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior impl_IMapIcon2<D>::CollisionBehaviorDesired() const
{
    Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value {};
    check_hresult(static_cast<const IMapIcon2 &>(static_cast<const D &>(*this))->get_CollisionBehaviorDesired(&value));
    return value;
}

template <typename D> void impl_IMapIcon2<D>::CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value) const
{
    check_hresult(static_cast<const IMapIcon2 &>(static_cast<const D &>(*this))->put_CollisionBehaviorDesired(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapIconStatics2<D>::CollisionBehaviorDesiredProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapIconStatics2 &>(static_cast<const D &>(*this))->get_CollisionBehaviorDesiredProperty(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IMapPolygon<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> void impl_IMapPolygon<D>::Path(const Windows::Devices::Geolocation::Geopath & value) const
{
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->put_Path(get(value)));
}

template <typename D> Windows::UI::Color impl_IMapPolygon<D>::StrokeColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->get_StrokeColor(put(value)));
    return value;
}

template <typename D> void impl_IMapPolygon<D>::StrokeColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->put_StrokeColor(get(value)));
}

template <typename D> double impl_IMapPolygon<D>::StrokeThickness() const
{
    double value {};
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->get_StrokeThickness(&value));
    return value;
}

template <typename D> void impl_IMapPolygon<D>::StrokeThickness(double value) const
{
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->put_StrokeThickness(value));
}

template <typename D> bool impl_IMapPolygon<D>::StrokeDashed() const
{
    bool value {};
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->get_StrokeDashed(&value));
    return value;
}

template <typename D> void impl_IMapPolygon<D>::StrokeDashed(bool value) const
{
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->put_StrokeDashed(value));
}

template <typename D> Windows::UI::Color impl_IMapPolygon<D>::FillColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->get_FillColor(put(value)));
    return value;
}

template <typename D> void impl_IMapPolygon<D>::FillColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IMapPolygon &>(static_cast<const D &>(*this))->put_FillColor(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapPolygonStatics<D>::PathProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapPolygonStatics &>(static_cast<const D &>(*this))->get_PathProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapPolygonStatics<D>::StrokeThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapPolygonStatics &>(static_cast<const D &>(*this))->get_StrokeThicknessProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapPolygonStatics<D>::StrokeDashedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapPolygonStatics &>(static_cast<const D &>(*this))->get_StrokeDashedProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath> impl_IMapPolygon2<D>::Paths() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath> value;
    check_hresult(static_cast<const IMapPolygon2 &>(static_cast<const D &>(*this))->get_Paths(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IMapPolyline<D>::Path() const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(static_cast<const IMapPolyline &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> void impl_IMapPolyline<D>::Path(const Windows::Devices::Geolocation::Geopath & value) const
{
    check_hresult(static_cast<const IMapPolyline &>(static_cast<const D &>(*this))->put_Path(get(value)));
}

template <typename D> Windows::UI::Color impl_IMapPolyline<D>::StrokeColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IMapPolyline &>(static_cast<const D &>(*this))->get_StrokeColor(put(value)));
    return value;
}

template <typename D> void impl_IMapPolyline<D>::StrokeColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IMapPolyline &>(static_cast<const D &>(*this))->put_StrokeColor(get(value)));
}

template <typename D> double impl_IMapPolyline<D>::StrokeThickness() const
{
    double value {};
    check_hresult(static_cast<const IMapPolyline &>(static_cast<const D &>(*this))->get_StrokeThickness(&value));
    return value;
}

template <typename D> void impl_IMapPolyline<D>::StrokeThickness(double value) const
{
    check_hresult(static_cast<const IMapPolyline &>(static_cast<const D &>(*this))->put_StrokeThickness(value));
}

template <typename D> bool impl_IMapPolyline<D>::StrokeDashed() const
{
    bool value {};
    check_hresult(static_cast<const IMapPolyline &>(static_cast<const D &>(*this))->get_StrokeDashed(&value));
    return value;
}

template <typename D> void impl_IMapPolyline<D>::StrokeDashed(bool value) const
{
    check_hresult(static_cast<const IMapPolyline &>(static_cast<const D &>(*this))->put_StrokeDashed(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapPolylineStatics<D>::PathProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapPolylineStatics &>(static_cast<const D &>(*this))->get_PathProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapPolylineStatics<D>::StrokeDashedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapPolylineStatics &>(static_cast<const D &>(*this))->get_StrokeDashedProperty(put(value)));
    return value;
}

template <typename D> bool impl_IStreetsideExperience<D>::AddressTextVisible() const
{
    bool value {};
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->get_AddressTextVisible(&value));
    return value;
}

template <typename D> void impl_IStreetsideExperience<D>::AddressTextVisible(bool value) const
{
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->put_AddressTextVisible(value));
}

template <typename D> bool impl_IStreetsideExperience<D>::CursorVisible() const
{
    bool value {};
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->get_CursorVisible(&value));
    return value;
}

template <typename D> void impl_IStreetsideExperience<D>::CursorVisible(bool value) const
{
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->put_CursorVisible(value));
}

template <typename D> bool impl_IStreetsideExperience<D>::OverviewMapVisible() const
{
    bool value {};
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->get_OverviewMapVisible(&value));
    return value;
}

template <typename D> void impl_IStreetsideExperience<D>::OverviewMapVisible(bool value) const
{
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->put_OverviewMapVisible(value));
}

template <typename D> bool impl_IStreetsideExperience<D>::StreetLabelsVisible() const
{
    bool value {};
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->get_StreetLabelsVisible(&value));
    return value;
}

template <typename D> void impl_IStreetsideExperience<D>::StreetLabelsVisible(bool value) const
{
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->put_StreetLabelsVisible(value));
}

template <typename D> bool impl_IStreetsideExperience<D>::ExitButtonVisible() const
{
    bool value {};
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->get_ExitButtonVisible(&value));
    return value;
}

template <typename D> void impl_IStreetsideExperience<D>::ExitButtonVisible(bool value) const
{
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->put_ExitButtonVisible(value));
}

template <typename D> bool impl_IStreetsideExperience<D>::ZoomButtonsVisible() const
{
    bool value {};
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->get_ZoomButtonsVisible(&value));
    return value;
}

template <typename D> void impl_IStreetsideExperience<D>::ZoomButtonsVisible(bool value) const
{
    check_hresult(static_cast<const IStreetsideExperience &>(static_cast<const D &>(*this))->put_ZoomButtonsVisible(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::StreetsideExperience impl_IStreetsideExperienceFactory<D>::CreateInstanceWithPanorama(const Windows::UI::Xaml::Controls::Maps::StreetsidePanorama & panorama) const
{
    Windows::UI::Xaml::Controls::Maps::StreetsideExperience instance { nullptr };
    check_hresult(static_cast<const IStreetsideExperienceFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithPanorama(get(panorama), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::StreetsideExperience impl_IStreetsideExperienceFactory<D>::CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(const Windows::UI::Xaml::Controls::Maps::StreetsidePanorama & panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) const
{
    Windows::UI::Xaml::Controls::Maps::StreetsideExperience instance { nullptr };
    check_hresult(static_cast<const IStreetsideExperienceFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(get(panorama), headingInDegrees, pitchInDegrees, fieldOfViewInDegrees, put(instance)));
    return instance;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapControl<D>::Center() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_Center(put(value)));
    return value;
}

template <typename D> void impl_IMapControl<D>::Center(const Windows::Devices::Geolocation::Geopoint & value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_Center(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> impl_IMapControl<D>::Children() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_Children(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapColorScheme impl_IMapControl<D>::ColorScheme() const
{
    Windows::UI::Xaml::Controls::Maps::MapColorScheme value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_ColorScheme(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_ColorScheme(value));
}

template <typename D> double impl_IMapControl<D>::DesiredPitch() const
{
    double value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_DesiredPitch(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::DesiredPitch(double value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_DesiredPitch(value));
}

template <typename D> double impl_IMapControl<D>::Heading() const
{
    double value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_Heading(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::Heading(double value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_Heading(value));
}

template <typename D> bool impl_IMapControl<D>::LandmarksVisible() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_LandmarksVisible(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::LandmarksVisible(bool value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_LandmarksVisible(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapLoadingStatus impl_IMapControl<D>::LoadingStatus() const
{
    Windows::UI::Xaml::Controls::Maps::MapLoadingStatus value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_LoadingStatus(&value));
    return value;
}

template <typename D> hstring impl_IMapControl<D>::MapServiceToken() const
{
    hstring value;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_MapServiceToken(put(value)));
    return value;
}

template <typename D> void impl_IMapControl<D>::MapServiceToken(hstring_ref value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_MapServiceToken(get(value)));
}

template <typename D> double impl_IMapControl<D>::MaxZoomLevel() const
{
    double value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_MaxZoomLevel(&value));
    return value;
}

template <typename D> double impl_IMapControl<D>::MinZoomLevel() const
{
    double value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_MinZoomLevel(&value));
    return value;
}

template <typename D> bool impl_IMapControl<D>::PedestrianFeaturesVisible() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_PedestrianFeaturesVisible(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::PedestrianFeaturesVisible(bool value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_PedestrianFeaturesVisible(value));
}

template <typename D> double impl_IMapControl<D>::Pitch() const
{
    double value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_Pitch(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapStyle impl_IMapControl<D>::Style() const
{
    Windows::UI::Xaml::Controls::Maps::MapStyle value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_Style(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::Style(Windows::UI::Xaml::Controls::Maps::MapStyle value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_Style(value));
}

template <typename D> bool impl_IMapControl<D>::TrafficFlowVisible() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_TrafficFlowVisible(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::TrafficFlowVisible(bool value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_TrafficFlowVisible(value));
}

template <typename D> Windows::Foundation::Point impl_IMapControl<D>::TransformOrigin() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_TransformOrigin(put(value)));
    return value;
}

template <typename D> void impl_IMapControl<D>::TransformOrigin(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_TransformOrigin(get(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapWatermarkMode impl_IMapControl<D>::WatermarkMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapWatermarkMode value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_WatermarkMode(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_WatermarkMode(value));
}

template <typename D> double impl_IMapControl<D>::ZoomLevel() const
{
    double value {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_ZoomLevel(&value));
    return value;
}

template <typename D> void impl_IMapControl<D>::ZoomLevel(double value) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->put_ZoomLevel(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> impl_IMapControl<D>::MapElements() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> value;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_MapElements(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView> impl_IMapControl<D>::Routes() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView> value;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_Routes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource> impl_IMapControl<D>::TileSources() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource> value;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->get_TileSources(put(value)));
    return value;
}

template <typename D> event_token impl_IMapControl<D>::CenterChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_CenterChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::CenterChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_CenterChanged, CenterChanged(value));
}

template <typename D> void impl_IMapControl<D>::CenterChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_CenterChanged(token));
}

template <typename D> event_token impl_IMapControl<D>::HeadingChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_HeadingChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::HeadingChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_HeadingChanged, HeadingChanged(value));
}

template <typename D> void impl_IMapControl<D>::HeadingChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_HeadingChanged(token));
}

template <typename D> event_token impl_IMapControl<D>::LoadingStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_LoadingStatusChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::LoadingStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_LoadingStatusChanged, LoadingStatusChanged(value));
}

template <typename D> void impl_IMapControl<D>::LoadingStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_LoadingStatusChanged(token));
}

template <typename D> event_token impl_IMapControl<D>::MapDoubleTapped(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_MapDoubleTapped(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::MapDoubleTapped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_MapDoubleTapped, MapDoubleTapped(value));
}

template <typename D> void impl_IMapControl<D>::MapDoubleTapped(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_MapDoubleTapped(token));
}

template <typename D> event_token impl_IMapControl<D>::MapHolding(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_MapHolding(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::MapHolding(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_MapHolding, MapHolding(value));
}

template <typename D> void impl_IMapControl<D>::MapHolding(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_MapHolding(token));
}

template <typename D> event_token impl_IMapControl<D>::MapTapped(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_MapTapped(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::MapTapped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_MapTapped, MapTapped(value));
}

template <typename D> void impl_IMapControl<D>::MapTapped(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_MapTapped(token));
}

template <typename D> event_token impl_IMapControl<D>::PitchChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_PitchChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::PitchChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_PitchChanged, PitchChanged(value));
}

template <typename D> void impl_IMapControl<D>::PitchChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_PitchChanged(token));
}

template <typename D> event_token impl_IMapControl<D>::TransformOriginChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_TransformOriginChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::TransformOriginChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_TransformOriginChanged, TransformOriginChanged(value));
}

template <typename D> void impl_IMapControl<D>::TransformOriginChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_TransformOriginChanged(token));
}

template <typename D> event_token impl_IMapControl<D>::ZoomLevelChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->add_ZoomLevelChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl> impl_IMapControl<D>::ZoomLevelChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMapControl>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl::remove_ZoomLevelChanged, ZoomLevelChanged(value));
}

template <typename D> void impl_IMapControl<D>::ZoomLevelChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->remove_ZoomLevelChanged(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> impl_IMapControl<D>::FindMapElementsAtOffset(const Windows::Foundation::Point & offset) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> returnValue;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_FindMapElementsAtOffset(get(offset), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IMapControl<D>::GetLocationFromOffset(const Windows::Foundation::Point & offset, Windows::Devices::Geolocation::Geopoint & location) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_GetLocationFromOffset(get(offset), put(location)));
}

template <typename D> void impl_IMapControl<D>::GetOffsetFromLocation(const Windows::Devices::Geolocation::Geopoint & location, Windows::Foundation::Point & offset) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_GetOffsetFromLocation(get(location), put(offset)));
}

template <typename D> void impl_IMapControl<D>::IsLocationInView(const Windows::Devices::Geolocation::Geopoint & location, bool & isInView) const
{
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_IsLocationInView(get(location), &isInView));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl<D>::TrySetViewBoundsAsync(const Windows::Devices::Geolocation::GeoboundingBox & bounds, const Windows::Foundation::IReference<Windows::UI::Xaml::Thickness> & margin, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animation) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_TrySetViewBoundsAsync(get(bounds), get(margin), animation, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl<D>::TrySetViewAsync(const Windows::Devices::Geolocation::Geopoint & center) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_TrySetViewWithCenterAsync(get(center), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl<D>::TrySetViewAsync(const Windows::Devices::Geolocation::Geopoint & center, const Windows::Foundation::IReference<double> & zoomLevel) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_TrySetViewWithCenterAndZoomAsync(get(center), get(zoomLevel), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl<D>::TrySetViewAsync(const Windows::Devices::Geolocation::Geopoint & center, const Windows::Foundation::IReference<double> & zoomLevel, const Windows::Foundation::IReference<double> & heading, const Windows::Foundation::IReference<double> & desiredPitch) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_TrySetViewWithCenterZoomHeadingAndPitchAsync(get(center), get(zoomLevel), get(heading), get(desiredPitch), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl<D>::TrySetViewAsync(const Windows::Devices::Geolocation::Geopoint & center, const Windows::Foundation::IReference<double> & zoomLevel, const Windows::Foundation::IReference<double> & heading, const Windows::Foundation::IReference<double> & desiredPitch, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animation) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl &>(static_cast<const D &>(*this))->abi_TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(get(center), get(zoomLevel), get(heading), get(desiredPitch), animation, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::CenterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_CenterProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::ChildrenProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_ChildrenProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::ColorSchemeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_ColorSchemeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::DesiredPitchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_DesiredPitchProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::HeadingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_HeadingProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::LandmarksVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_LandmarksVisibleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::LoadingStatusProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_LoadingStatusProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::MapServiceTokenProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_MapServiceTokenProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::PedestrianFeaturesVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_PedestrianFeaturesVisibleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::PitchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_PitchProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::StyleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_StyleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::TrafficFlowVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_TrafficFlowVisibleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::TransformOriginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_TransformOriginProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::WatermarkModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_WatermarkModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::ZoomLevelProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_ZoomLevelProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::MapElementsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_MapElementsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::RoutesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_RoutesProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::TileSourcesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_TileSourcesProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::LocationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_LocationProperty(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapControlStatics<D>::GetLocation(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->abi_GetLocation(get(element), put(value)));
    return value;
}

template <typename D> void impl_IMapControlStatics<D>::SetLocation(const Windows::UI::Xaml::DependencyObject & element, const Windows::Devices::Geolocation::Geopoint & value) const
{
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->abi_SetLocation(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics<D>::NormalizedAnchorPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->get_NormalizedAnchorPointProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IMapControlStatics<D>::GetNormalizedAnchorPoint(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->abi_GetNormalizedAnchorPoint(get(element), put(value)));
    return value;
}

template <typename D> void impl_IMapControlStatics<D>::SetNormalizedAnchorPoint(const Windows::UI::Xaml::DependencyObject & element, const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IMapControlStatics &>(static_cast<const D &>(*this))->abi_SetNormalizedAnchorPoint(get(element), get(value)));
}

template <typename D> bool impl_IMapControl2<D>::BusinessLandmarksVisible() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_BusinessLandmarksVisible(&value));
    return value;
}

template <typename D> void impl_IMapControl2<D>::BusinessLandmarksVisible(bool value) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->put_BusinessLandmarksVisible(value));
}

template <typename D> bool impl_IMapControl2<D>::TransitFeaturesVisible() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_TransitFeaturesVisible(&value));
    return value;
}

template <typename D> void impl_IMapControl2<D>::TransitFeaturesVisible(bool value) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->put_TransitFeaturesVisible(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode impl_IMapControl2<D>::PanInteractionMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode value {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_PanInteractionMode(&value));
    return value;
}

template <typename D> void impl_IMapControl2<D>::PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode value) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->put_PanInteractionMode(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapInteractionMode impl_IMapControl2<D>::RotateInteractionMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode value {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_RotateInteractionMode(&value));
    return value;
}

template <typename D> void impl_IMapControl2<D>::RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->put_RotateInteractionMode(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapInteractionMode impl_IMapControl2<D>::TiltInteractionMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode value {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_TiltInteractionMode(&value));
    return value;
}

template <typename D> void impl_IMapControl2<D>::TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->put_TiltInteractionMode(value));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapInteractionMode impl_IMapControl2<D>::ZoomInteractionMode() const
{
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode value {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_ZoomInteractionMode(&value));
    return value;
}

template <typename D> void impl_IMapControl2<D>::ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->put_ZoomInteractionMode(value));
}

template <typename D> bool impl_IMapControl2<D>::Is3DSupported() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_Is3DSupported(&value));
    return value;
}

template <typename D> bool impl_IMapControl2<D>::IsStreetsideSupported() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_IsStreetsideSupported(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapScene impl_IMapControl2<D>::Scene() const
{
    Windows::UI::Xaml::Controls::Maps::MapScene value { nullptr };
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_Scene(put(value)));
    return value;
}

template <typename D> void impl_IMapControl2<D>::Scene(const Windows::UI::Xaml::Controls::Maps::MapScene & value) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->put_Scene(get(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapControl2<D>::ActualCamera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value { nullptr };
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_ActualCamera(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCamera impl_IMapControl2<D>::TargetCamera() const
{
    Windows::UI::Xaml::Controls::Maps::MapCamera value { nullptr };
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_TargetCamera(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapCustomExperience impl_IMapControl2<D>::CustomExperience() const
{
    Windows::UI::Xaml::Controls::Maps::MapCustomExperience value { nullptr };
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->get_CustomExperience(put(value)));
    return value;
}

template <typename D> void impl_IMapControl2<D>::CustomExperience(const Windows::UI::Xaml::Controls::Maps::MapCustomExperience & value) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->put_CustomExperience(get(value)));
}

template <typename D> event_token impl_IMapControl2<D>::MapElementClick(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->add_MapElementClick(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl2> impl_IMapControl2<D>::MapElementClick(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl2::remove_MapElementClick, MapElementClick(value));
}

template <typename D> void impl_IMapControl2<D>::MapElementClick(event_token token) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->remove_MapElementClick(token));
}

template <typename D> event_token impl_IMapControl2<D>::MapElementPointerEntered(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->add_MapElementPointerEntered(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl2> impl_IMapControl2<D>::MapElementPointerEntered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl2::remove_MapElementPointerEntered, MapElementPointerEntered(value));
}

template <typename D> void impl_IMapControl2<D>::MapElementPointerEntered(event_token token) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->remove_MapElementPointerEntered(token));
}

template <typename D> event_token impl_IMapControl2<D>::MapElementPointerExited(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->add_MapElementPointerExited(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl2> impl_IMapControl2<D>::MapElementPointerExited(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl2::remove_MapElementPointerExited, MapElementPointerExited(value));
}

template <typename D> void impl_IMapControl2<D>::MapElementPointerExited(event_token token) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->remove_MapElementPointerExited(token));
}

template <typename D> event_token impl_IMapControl2<D>::ActualCameraChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->add_ActualCameraChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl2> impl_IMapControl2<D>::ActualCameraChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl2::remove_ActualCameraChanged, ActualCameraChanged(value));
}

template <typename D> void impl_IMapControl2<D>::ActualCameraChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->remove_ActualCameraChanged(token));
}

template <typename D> event_token impl_IMapControl2<D>::ActualCameraChanging(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->add_ActualCameraChanging(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl2> impl_IMapControl2<D>::ActualCameraChanging(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl2::remove_ActualCameraChanging, ActualCameraChanging(value));
}

template <typename D> void impl_IMapControl2<D>::ActualCameraChanging(event_token token) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->remove_ActualCameraChanging(token));
}

template <typename D> event_token impl_IMapControl2<D>::TargetCameraChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->add_TargetCameraChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl2> impl_IMapControl2<D>::TargetCameraChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl2::remove_TargetCameraChanged, TargetCameraChanged(value));
}

template <typename D> void impl_IMapControl2<D>::TargetCameraChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->remove_TargetCameraChanged(token));
}

template <typename D> event_token impl_IMapControl2<D>::CustomExperienceChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->add_CustomExperienceChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl2> impl_IMapControl2<D>::CustomExperienceChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl2::remove_CustomExperienceChanged, CustomExperienceChanged(value));
}

template <typename D> void impl_IMapControl2<D>::CustomExperienceChanged(event_token token) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->remove_CustomExperienceChanged(token));
}

template <typename D> void impl_IMapControl2<D>::StartContinuousRotate(double rateInDegreesPerSecond) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_StartContinuousRotate(rateInDegreesPerSecond));
}

template <typename D> void impl_IMapControl2<D>::StopContinuousRotate() const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_StopContinuousRotate());
}

template <typename D> void impl_IMapControl2<D>::StartContinuousTilt(double rateInDegreesPerSecond) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_StartContinuousTilt(rateInDegreesPerSecond));
}

template <typename D> void impl_IMapControl2<D>::StopContinuousTilt() const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_StopContinuousTilt());
}

template <typename D> void impl_IMapControl2<D>::StartContinuousZoom(double rateOfChangePerSecond) const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_StartContinuousZoom(rateOfChangePerSecond));
}

template <typename D> void impl_IMapControl2<D>::StopContinuousZoom() const
{
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_StopContinuousZoom());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TryRotateAsync(double degrees) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TryRotateAsync(degrees, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TryRotateToAsync(double angleInDegrees) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TryRotateToAsync(angleInDegrees, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TryTiltAsync(double degrees) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TryTiltAsync(degrees, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TryTiltToAsync(double angleInDegrees) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TryTiltToAsync(angleInDegrees, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TryZoomInAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TryZoomInAsync(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TryZoomOutAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TryZoomOutAsync(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TryZoomToAsync(double zoomLevel) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TryZoomToAsync(zoomLevel, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TrySetSceneAsync(const Windows::UI::Xaml::Controls::Maps::MapScene & scene) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TrySetSceneAsync(get(scene), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IMapControl2<D>::TrySetSceneAsync(const Windows::UI::Xaml::Controls::Maps::MapScene & scene, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animationKind) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue;
    check_hresult(static_cast<const IMapControl2 &>(static_cast<const D &>(*this))->abi_TrySetSceneWithAnimationAsync(get(scene), animationKind, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::BusinessLandmarksVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_BusinessLandmarksVisibleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::TransitFeaturesVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_TransitFeaturesVisibleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::PanInteractionModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_PanInteractionModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::RotateInteractionModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_RotateInteractionModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::TiltInteractionModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_TiltInteractionModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::ZoomInteractionModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_ZoomInteractionModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::Is3DSupportedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_Is3DSupportedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::IsStreetsideSupportedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_IsStreetsideSupportedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics2<D>::SceneProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics2 &>(static_cast<const D &>(*this))->get_SceneProperty(put(value)));
    return value;
}

template <typename D> event_token impl_IMapControl3<D>::MapRightTapped(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControl3 &>(static_cast<const D &>(*this))->add_MapRightTapped(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControl3> impl_IMapControl3<D>::MapRightTapped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControl3>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControl3::remove_MapRightTapped, MapRightTapped(value));
}

template <typename D> void impl_IMapControl3<D>::MapRightTapped(event_token token) const
{
    check_hresult(static_cast<const IMapControl3 &>(static_cast<const D &>(*this))->remove_MapRightTapped(token));
}

template <typename D> bool impl_IMapControl4<D>::BusinessLandmarksEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl4 &>(static_cast<const D &>(*this))->get_BusinessLandmarksEnabled(&value));
    return value;
}

template <typename D> void impl_IMapControl4<D>::BusinessLandmarksEnabled(bool value) const
{
    check_hresult(static_cast<const IMapControl4 &>(static_cast<const D &>(*this))->put_BusinessLandmarksEnabled(value));
}

template <typename D> bool impl_IMapControl4<D>::TransitFeaturesEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMapControl4 &>(static_cast<const D &>(*this))->get_TransitFeaturesEnabled(&value));
    return value;
}

template <typename D> void impl_IMapControl4<D>::TransitFeaturesEnabled(bool value) const
{
    check_hresult(static_cast<const IMapControl4 &>(static_cast<const D &>(*this))->put_TransitFeaturesEnabled(value));
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IMapControl4<D>::GetVisibleRegion(Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind region) const
{
    Windows::Devices::Geolocation::Geopath returnValue { nullptr };
    check_hresult(static_cast<const IMapControl4 &>(static_cast<const D &>(*this))->abi_GetVisibleRegion(region, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics4<D>::BusinessLandmarksEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics4 &>(static_cast<const D &>(*this))->get_BusinessLandmarksEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IMapControlStatics4<D>::TransitFeaturesEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IMapControlStatics4 &>(static_cast<const D &>(*this))->get_TransitFeaturesEnabledProperty(put(value)));
    return value;
}

template <typename D> event_token impl_IMapControlDataHelper<D>::BusinessLandmarkClick(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControlDataHelper &>(static_cast<const D &>(*this))->add_BusinessLandmarkClick(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControlDataHelper> impl_IMapControlDataHelper<D>::BusinessLandmarkClick(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControlDataHelper>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper::remove_BusinessLandmarkClick, BusinessLandmarkClick(value));
}

template <typename D> void impl_IMapControlDataHelper<D>::BusinessLandmarkClick(event_token token) const
{
    check_hresult(static_cast<const IMapControlDataHelper &>(static_cast<const D &>(*this))->remove_BusinessLandmarkClick(token));
}

template <typename D> event_token impl_IMapControlDataHelper<D>::TransitFeatureClick(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControlDataHelper &>(static_cast<const D &>(*this))->add_TransitFeatureClick(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControlDataHelper> impl_IMapControlDataHelper<D>::TransitFeatureClick(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControlDataHelper>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper::remove_TransitFeatureClick, TransitFeatureClick(value));
}

template <typename D> void impl_IMapControlDataHelper<D>::TransitFeatureClick(event_token token) const
{
    check_hresult(static_cast<const IMapControlDataHelper &>(static_cast<const D &>(*this))->remove_TransitFeatureClick(token));
}

template <typename D> event_token impl_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControlDataHelper &>(static_cast<const D &>(*this))->add_BusinessLandmarkRightTapped(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControlDataHelper> impl_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControlDataHelper>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper::remove_BusinessLandmarkRightTapped, BusinessLandmarkRightTapped(value));
}

template <typename D> void impl_IMapControlDataHelper<D>::BusinessLandmarkRightTapped(event_token token) const
{
    check_hresult(static_cast<const IMapControlDataHelper &>(static_cast<const D &>(*this))->remove_BusinessLandmarkRightTapped(token));
}

template <typename D> event_token impl_IMapControlDataHelper<D>::TransitFeatureRightTapped(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControlDataHelper &>(static_cast<const D &>(*this))->add_TransitFeatureRightTapped(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControlDataHelper> impl_IMapControlDataHelper<D>::TransitFeatureRightTapped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControlDataHelper>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper::remove_TransitFeatureRightTapped, TransitFeatureRightTapped(value));
}

template <typename D> void impl_IMapControlDataHelper<D>::TransitFeatureRightTapped(event_token token) const
{
    check_hresult(static_cast<const IMapControlDataHelper &>(static_cast<const D &>(*this))->remove_TransitFeatureRightTapped(token));
}

template <typename D> event_token impl_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControlDataHelper2 &>(static_cast<const D &>(*this))->add_BusinessLandmarkPointerEntered(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControlDataHelper2> impl_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControlDataHelper2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2::remove_BusinessLandmarkPointerEntered, BusinessLandmarkPointerEntered(value));
}

template <typename D> void impl_IMapControlDataHelper2<D>::BusinessLandmarkPointerEntered(event_token token) const
{
    check_hresult(static_cast<const IMapControlDataHelper2 &>(static_cast<const D &>(*this))->remove_BusinessLandmarkPointerEntered(token));
}

template <typename D> event_token impl_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControlDataHelper2 &>(static_cast<const D &>(*this))->add_TransitFeaturePointerEntered(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControlDataHelper2> impl_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControlDataHelper2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2::remove_TransitFeaturePointerEntered, TransitFeaturePointerEntered(value));
}

template <typename D> void impl_IMapControlDataHelper2<D>::TransitFeaturePointerEntered(event_token token) const
{
    check_hresult(static_cast<const IMapControlDataHelper2 &>(static_cast<const D &>(*this))->remove_TransitFeaturePointerEntered(token));
}

template <typename D> event_token impl_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControlDataHelper2 &>(static_cast<const D &>(*this))->add_BusinessLandmarkPointerExited(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControlDataHelper2> impl_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControlDataHelper2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2::remove_BusinessLandmarkPointerExited, BusinessLandmarkPointerExited(value));
}

template <typename D> void impl_IMapControlDataHelper2<D>::BusinessLandmarkPointerExited(event_token token) const
{
    check_hresult(static_cast<const IMapControlDataHelper2 &>(static_cast<const D &>(*this))->remove_BusinessLandmarkPointerExited(token));
}

template <typename D> event_token impl_IMapControlDataHelper2<D>::TransitFeaturePointerExited(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMapControlDataHelper2 &>(static_cast<const D &>(*this))->add_TransitFeaturePointerExited(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMapControlDataHelper2> impl_IMapControlDataHelper2<D>::TransitFeaturePointerExited(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMapControlDataHelper2>(this, &ABI::Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2::remove_TransitFeaturePointerExited, TransitFeaturePointerExited(value));
}

template <typename D> void impl_IMapControlDataHelper2<D>::TransitFeaturePointerExited(event_token token) const
{
    check_hresult(static_cast<const IMapControlDataHelper2 &>(static_cast<const D &>(*this))->remove_TransitFeaturePointerExited(token));
}

template <typename D> Windows::UI::Xaml::Controls::Maps::MapControlDataHelper impl_IMapControlDataHelperFactory<D>::CreateInstance(const Windows::UI::Xaml::Controls::Maps::MapControl & map) const
{
    Windows::UI::Xaml::Controls::Maps::MapControlDataHelper instance { nullptr };
    check_hresult(static_cast<const IMapControlDataHelperFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(map), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> impl_IMapControlBusinessLandmarkClickEventArgs<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value;
    check_hresult(static_cast<const IMapControlBusinessLandmarkClickEventArgs &>(static_cast<const D &>(*this))->get_LocalLocations(put(value)));
    return value;
}

template <typename D> hstring impl_IMapControlTransitFeatureClickEventArgs<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IMapControlTransitFeatureClickEventArgs &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapControlTransitFeatureClickEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapControlTransitFeatureClickEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IMapControlTransitFeatureClickEventArgs<D>::TransitProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IMapControlTransitFeatureClickEventArgs &>(static_cast<const D &>(*this))->get_TransitProperties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> impl_IMapControlBusinessLandmarkRightTappedEventArgs<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value;
    check_hresult(static_cast<const IMapControlBusinessLandmarkRightTappedEventArgs &>(static_cast<const D &>(*this))->get_LocalLocations(put(value)));
    return value;
}

template <typename D> hstring impl_IMapControlTransitFeatureRightTappedEventArgs<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IMapControlTransitFeatureRightTappedEventArgs &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapControlTransitFeatureRightTappedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapControlTransitFeatureRightTappedEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IMapControlTransitFeatureRightTappedEventArgs<D>::TransitProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IMapControlTransitFeatureRightTappedEventArgs &>(static_cast<const D &>(*this))->get_TransitProperties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> impl_IMapControlBusinessLandmarkPointerEnteredEventArgs<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value;
    check_hresult(static_cast<const IMapControlBusinessLandmarkPointerEnteredEventArgs &>(static_cast<const D &>(*this))->get_LocalLocations(put(value)));
    return value;
}

template <typename D> hstring impl_IMapControlTransitFeaturePointerEnteredEventArgs<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IMapControlTransitFeaturePointerEnteredEventArgs &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapControlTransitFeaturePointerEnteredEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapControlTransitFeaturePointerEnteredEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IMapControlTransitFeaturePointerEnteredEventArgs<D>::TransitProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IMapControlTransitFeaturePointerEnteredEventArgs &>(static_cast<const D &>(*this))->get_TransitProperties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> impl_IMapControlBusinessLandmarkPointerExitedEventArgs<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value;
    check_hresult(static_cast<const IMapControlBusinessLandmarkPointerExitedEventArgs &>(static_cast<const D &>(*this))->get_LocalLocations(put(value)));
    return value;
}

template <typename D> hstring impl_IMapControlTransitFeaturePointerExitedEventArgs<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IMapControlTransitFeaturePointerExitedEventArgs &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IMapControlTransitFeaturePointerExitedEventArgs<D>::Location() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IMapControlTransitFeaturePointerExitedEventArgs &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IMapControlTransitFeaturePointerExitedEventArgs<D>::TransitProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IMapControlTransitFeaturePointerExitedEventArgs &>(static_cast<const D &>(*this))->get_TransitProperties(put(value)));
    return value;
}

inline CustomMapTileDataSource::CustomMapTileDataSource()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<CustomMapTileDataSource, ICustomMapTileDataSourceFactory>().CreateInstance(outer, inner));
}

inline HttpMapTileDataSource::HttpMapTileDataSource()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<HttpMapTileDataSource, IHttpMapTileDataSourceFactory>().CreateInstance(outer, inner));
}

inline HttpMapTileDataSource::HttpMapTileDataSource(hstring_ref uriFormatString)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<HttpMapTileDataSource, IHttpMapTileDataSourceFactory>().CreateInstanceWithUriFormatString(uriFormatString, outer, inner));
}

inline LocalMapTileDataSource::LocalMapTileDataSource()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<LocalMapTileDataSource, ILocalMapTileDataSourceFactory>().CreateInstance(outer, inner));
}

inline LocalMapTileDataSource::LocalMapTileDataSource(hstring_ref uriFormatString)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<LocalMapTileDataSource, ILocalMapTileDataSourceFactory>().CreateInstanceWithUriFormatString(uriFormatString, outer, inner));
}

inline MapActualCameraChangedEventArgs::MapActualCameraChangedEventArgs() :
    MapActualCameraChangedEventArgs(activate_instance<MapActualCameraChangedEventArgs>())
{}

inline MapActualCameraChangingEventArgs::MapActualCameraChangingEventArgs() :
    MapActualCameraChangingEventArgs(activate_instance<MapActualCameraChangingEventArgs>())
{}

inline MapCamera::MapCamera(const Windows::Devices::Geolocation::Geopoint & location) :
    MapCamera(get_activation_factory<MapCamera, IMapCameraFactory>().CreateInstanceWithLocation(location))
{}

inline MapCamera::MapCamera(const Windows::Devices::Geolocation::Geopoint & location, double headingInDegrees) :
    MapCamera(get_activation_factory<MapCamera, IMapCameraFactory>().CreateInstanceWithLocationAndHeading(location, headingInDegrees))
{}

inline MapCamera::MapCamera(const Windows::Devices::Geolocation::Geopoint & location, double headingInDegrees, double pitchInDegrees) :
    MapCamera(get_activation_factory<MapCamera, IMapCameraFactory>().CreateInstanceWithLocationHeadingAndPitch(location, headingInDegrees, pitchInDegrees))
{}

inline MapCamera::MapCamera(const Windows::Devices::Geolocation::Geopoint & location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) :
    MapCamera(get_activation_factory<MapCamera, IMapCameraFactory>().CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(location, headingInDegrees, pitchInDegrees, rollInDegrees, fieldOfViewInDegrees))
{}

inline MapControl::MapControl() :
    MapControl(activate_instance<MapControl>())
{}

inline Windows::UI::Xaml::DependencyProperty MapControl::CenterProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().CenterProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ChildrenProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().ChildrenProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ColorSchemeProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().ColorSchemeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::DesiredPitchProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().DesiredPitchProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::HeadingProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().HeadingProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::LandmarksVisibleProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().LandmarksVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::LoadingStatusProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().LoadingStatusProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::MapServiceTokenProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().MapServiceTokenProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::PedestrianFeaturesVisibleProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().PedestrianFeaturesVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::PitchProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().PitchProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::StyleProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().StyleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TrafficFlowVisibleProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().TrafficFlowVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TransformOriginProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().TransformOriginProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::WatermarkModeProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().WatermarkModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ZoomLevelProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().ZoomLevelProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::MapElementsProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().MapElementsProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::RoutesProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().RoutesProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TileSourcesProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().TileSourcesProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::LocationProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().LocationProperty();
}

inline Windows::Devices::Geolocation::Geopoint MapControl::GetLocation(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<MapControl, IMapControlStatics>().GetLocation(element);
}

inline void MapControl::SetLocation(const Windows::UI::Xaml::DependencyObject & element, const Windows::Devices::Geolocation::Geopoint & value)
{
    get_activation_factory<MapControl, IMapControlStatics>().SetLocation(element, value);
}

inline Windows::UI::Xaml::DependencyProperty MapControl::NormalizedAnchorPointProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics>().NormalizedAnchorPointProperty();
}

inline Windows::Foundation::Point MapControl::GetNormalizedAnchorPoint(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<MapControl, IMapControlStatics>().GetNormalizedAnchorPoint(element);
}

inline void MapControl::SetNormalizedAnchorPoint(const Windows::UI::Xaml::DependencyObject & element, const Windows::Foundation::Point & value)
{
    get_activation_factory<MapControl, IMapControlStatics>().SetNormalizedAnchorPoint(element, value);
}

inline Windows::UI::Xaml::DependencyProperty MapControl::BusinessLandmarksVisibleProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().BusinessLandmarksVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TransitFeaturesVisibleProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().TransitFeaturesVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::PanInteractionModeProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().PanInteractionModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::RotateInteractionModeProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().RotateInteractionModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TiltInteractionModeProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().TiltInteractionModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::ZoomInteractionModeProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().ZoomInteractionModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::Is3DSupportedProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().Is3DSupportedProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::IsStreetsideSupportedProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().IsStreetsideSupportedProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::SceneProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics2>().SceneProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::BusinessLandmarksEnabledProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics4>().BusinessLandmarksEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapControl::TransitFeaturesEnabledProperty()
{
    return get_activation_factory<MapControl, IMapControlStatics4>().TransitFeaturesEnabledProperty();
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

inline MapControlDataHelper::MapControlDataHelper(const Windows::UI::Xaml::Controls::Maps::MapControl & map) :
    MapControlDataHelper(get_activation_factory<MapControlDataHelper, IMapControlDataHelperFactory>().CreateInstance(map))
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
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapCustomExperience, IMapCustomExperienceFactory>().CreateInstance(outer, inner));
}

inline MapCustomExperienceChangedEventArgs::MapCustomExperienceChangedEventArgs() :
    MapCustomExperienceChangedEventArgs(activate_instance<MapCustomExperienceChangedEventArgs>())
{}

inline MapElement::MapElement()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapElement, IMapElementFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty MapElement::ZIndexProperty()
{
    return get_activation_factory<MapElement, IMapElementStatics>().ZIndexProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapElement::VisibleProperty()
{
    return get_activation_factory<MapElement, IMapElementStatics>().VisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapElement::MapTabIndexProperty()
{
    return get_activation_factory<MapElement, IMapElementStatics2>().MapTabIndexProperty();
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
    return get_activation_factory<MapIcon, IMapIconStatics>().LocationProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapIcon::TitleProperty()
{
    return get_activation_factory<MapIcon, IMapIconStatics>().TitleProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapIcon::NormalizedAnchorPointProperty()
{
    return get_activation_factory<MapIcon, IMapIconStatics>().NormalizedAnchorPointProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapIcon::CollisionBehaviorDesiredProperty()
{
    return get_activation_factory<MapIcon, IMapIconStatics2>().CollisionBehaviorDesiredProperty();
}

inline MapInputEventArgs::MapInputEventArgs() :
    MapInputEventArgs(activate_instance<MapInputEventArgs>())
{}

inline MapItemsControl::MapItemsControl() :
    MapItemsControl(activate_instance<MapItemsControl>())
{}

inline Windows::UI::Xaml::DependencyProperty MapItemsControl::ItemsSourceProperty()
{
    return get_activation_factory<MapItemsControl, IMapItemsControlStatics>().ItemsSourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapItemsControl::ItemsProperty()
{
    return get_activation_factory<MapItemsControl, IMapItemsControlStatics>().ItemsProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapItemsControl::ItemTemplateProperty()
{
    return get_activation_factory<MapItemsControl, IMapItemsControlStatics>().ItemTemplateProperty();
}

inline MapPolygon::MapPolygon() :
    MapPolygon(activate_instance<MapPolygon>())
{}

inline Windows::UI::Xaml::DependencyProperty MapPolygon::PathProperty()
{
    return get_activation_factory<MapPolygon, IMapPolygonStatics>().PathProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapPolygon::StrokeThicknessProperty()
{
    return get_activation_factory<MapPolygon, IMapPolygonStatics>().StrokeThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapPolygon::StrokeDashedProperty()
{
    return get_activation_factory<MapPolygon, IMapPolygonStatics>().StrokeDashedProperty();
}

inline MapPolyline::MapPolyline() :
    MapPolyline(activate_instance<MapPolyline>())
{}

inline Windows::UI::Xaml::DependencyProperty MapPolyline::PathProperty()
{
    return get_activation_factory<MapPolyline, IMapPolylineStatics>().PathProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapPolyline::StrokeDashedProperty()
{
    return get_activation_factory<MapPolyline, IMapPolylineStatics>().StrokeDashedProperty();
}

inline MapRightTappedEventArgs::MapRightTappedEventArgs() :
    MapRightTappedEventArgs(activate_instance<MapRightTappedEventArgs>())
{}

inline MapRouteView::MapRouteView(const Windows::Services::Maps::MapRoute & route)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapRouteView, IMapRouteViewFactory>().CreateInstanceWithMapRoute(route, outer, inner));
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromBoundingBox(const Windows::Devices::Geolocation::GeoboundingBox & bounds)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromBoundingBox(bounds);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromBoundingBox(const Windows::Devices::Geolocation::GeoboundingBox & bounds, double headingInDegrees, double pitchInDegrees)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromBoundingBox(bounds, headingInDegrees, pitchInDegrees);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromCamera(const Windows::UI::Xaml::Controls::Maps::MapCamera & camera)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromCamera(camera);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocation(const Windows::Devices::Geolocation::Geopoint & location)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromLocation(location);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocation(const Windows::Devices::Geolocation::Geopoint & location, double headingInDegrees, double pitchInDegrees)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromLocation(location, headingInDegrees, pitchInDegrees);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocationAndRadius(const Windows::Devices::Geolocation::Geopoint & location, double radiusInMeters)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromLocationAndRadius(location, radiusInMeters);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocationAndRadius(const Windows::Devices::Geolocation::Geopoint & location, double radiusInMeters, double headingInDegrees, double pitchInDegrees)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromLocationAndRadius(location, radiusInMeters, headingInDegrees, pitchInDegrees);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocations(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & locations)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromLocations(locations);
}

inline Windows::UI::Xaml::Controls::Maps::MapScene MapScene::CreateFromLocations(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & locations, double headingInDegrees, double pitchInDegrees)
{
    return get_activation_factory<MapScene, IMapSceneStatics>().CreateFromLocations(locations, headingInDegrees, pitchInDegrees);
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
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileDataSource, IMapTileDataSourceFactory>().CreateInstance(outer, inner));
}

inline MapTileSource::MapTileSource()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstance(outer, inner));
}

inline MapTileSource::MapTileSource(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstanceWithDataSource(dataSource, outer, inner));
}

inline MapTileSource::MapTileSource(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstanceWithDataSourceAndZoomRange(dataSource, zoomLevelRange, outer, inner));
}

inline MapTileSource::MapTileSource(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange, const Windows::Devices::Geolocation::GeoboundingBox & bounds)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstanceWithDataSourceZoomRangeAndBounds(dataSource, zoomLevelRange, bounds, outer, inner));
}

inline MapTileSource::MapTileSource(const Windows::UI::Xaml::Controls::Maps::MapTileDataSource & dataSource, const Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange & zoomLevelRange, const Windows::Devices::Geolocation::GeoboundingBox & bounds, int32_t tileSizeInPixels)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<MapTileSource, IMapTileSourceFactory>().CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(dataSource, zoomLevelRange, bounds, tileSizeInPixels, outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::DataSourceProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().DataSourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::LayerProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().LayerProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::ZoomLevelRangeProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().ZoomLevelRangeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::BoundsProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().BoundsProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::AllowOverstretchProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().AllowOverstretchProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::IsFadingEnabledProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().IsFadingEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::IsTransparencyEnabledProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().IsTransparencyEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::IsRetryEnabledProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().IsRetryEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::ZIndexProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().ZIndexProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::TilePixelSizeProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().TilePixelSizeProperty();
}

inline Windows::UI::Xaml::DependencyProperty MapTileSource::VisibleProperty()
{
    return get_activation_factory<MapTileSource, IMapTileSourceStatics>().VisibleProperty();
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

inline StreetsideExperience::StreetsideExperience(const Windows::UI::Xaml::Controls::Maps::StreetsidePanorama & panorama) :
    StreetsideExperience(get_activation_factory<StreetsideExperience, IStreetsideExperienceFactory>().CreateInstanceWithPanorama(panorama))
{}

inline StreetsideExperience::StreetsideExperience(const Windows::UI::Xaml::Controls::Maps::StreetsidePanorama & panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) :
    StreetsideExperience(get_activation_factory<StreetsideExperience, IStreetsideExperienceFactory>().CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(panorama, headingInDegrees, pitchInDegrees, fieldOfViewInDegrees))
{}

inline Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> StreetsidePanorama::FindNearbyAsync(const Windows::Devices::Geolocation::Geopoint & location)
{
    return get_activation_factory<StreetsidePanorama, IStreetsidePanoramaStatics>().FindNearbyAsync(location);
}

inline Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> StreetsidePanorama::FindNearbyAsync(const Windows::Devices::Geolocation::Geopoint & location, double radiusInMeters)
{
    return get_activation_factory<StreetsidePanorama, IStreetsidePanoramaStatics>().FindNearbyAsync(location, radiusInMeters);
}

}

}
