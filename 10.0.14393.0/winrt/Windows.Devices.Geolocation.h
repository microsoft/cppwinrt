// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Geolocation.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Geolocation::ICivicAddress> : produce_base<D, Windows::Devices::Geolocation::ICivicAddress>
{
    HRESULT __stdcall get_Country(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Country());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_City(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().City());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PostalCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeoboundingBox> : produce_base<D, Windows::Devices::Geolocation::IGeoboundingBox>
{
    HRESULT __stdcall get_NorthwestCorner(abi_arg_out<Windows::Devices::Geolocation::BasicGeoposition> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NorthwestCorner());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoutheastCorner(abi_arg_out<Windows::Devices::Geolocation::BasicGeoposition> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoutheastCorner());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Center(abi_arg_out<Windows::Devices::Geolocation::BasicGeoposition> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinAltitude(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinAltitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAltitude(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxAltitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeoboundingBoxFactory> : produce_base<D, Windows::Devices::Geolocation::IGeoboundingBoxFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&northwestCorner), *reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&southeastCorner)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAltitudeReference(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAltitudeReference(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&northwestCorner), *reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&southeastCorner), altitudeReferenceSystem));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAltitudeReferenceAndSpatialReference(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> northwestCorner, abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId, abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAltitudeReferenceAndSpatialReference(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&northwestCorner), *reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&southeastCorner), altitudeReferenceSystem, spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeoboundingBoxStatics> : produce_base<D, Windows::Devices::Geolocation::IGeoboundingBoxStatics>
{
    HRESULT __stdcall abi_TryCompute(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition>> positions, abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryCompute(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> *>(&positions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryComputeWithAltitudeReference(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition>> positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem, abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryCompute(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> *>(&positions), altitudeRefSystem));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryComputeWithAltitudeReferenceAndSpatialReference(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition>> positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem, uint32_t spatialReferenceId, abi_arg_out<Windows::Devices::Geolocation::IGeoboundingBox> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryCompute(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> *>(&positions), altitudeRefSystem, spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeocircle> : produce_base<D, Windows::Devices::Geolocation::IGeocircle>
{
    HRESULT __stdcall get_Center(abi_arg_out<Windows::Devices::Geolocation::BasicGeoposition> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Radius(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Radius());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeocircleFactory> : produce_base<D, Windows::Devices::Geolocation::IGeocircleFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, abi_arg_out<Windows::Devices::Geolocation::IGeocircle> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&position), radius));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAltitudeReferenceSystem(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, abi_arg_out<Windows::Devices::Geolocation::IGeocircle> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAltitudeReferenceSystem(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&position), radius, altitudeReferenceSystem));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAltitudeReferenceSystemAndSpatialReferenceId(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId, abi_arg_out<Windows::Devices::Geolocation::IGeocircle> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAltitudeReferenceSystemAndSpatialReferenceId(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&position), radius, altitudeReferenceSystem, spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeocoordinate> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinate>
{
    HRESULT __stdcall get_Latitude(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Latitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Longitude(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Longitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Altitude(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Altitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Accuracy(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Accuracy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AltitudeAccuracy(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AltitudeAccuracy());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Heading(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Heading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Speed(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Speed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeocoordinateSatelliteData> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinateSatelliteData>
{
    HRESULT __stdcall get_PositionDilutionOfPrecision(abi_arg_out<Windows::Foundation::IReference<double>> ppValue) noexcept override
    {
        try
        {
            *ppValue = detach(this->shim().PositionDilutionOfPrecision());
            return S_OK;
        }
        catch (...)
        {
            *ppValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalDilutionOfPrecision(abi_arg_out<Windows::Foundation::IReference<double>> ppValue) noexcept override
    {
        try
        {
            *ppValue = detach(this->shim().HorizontalDilutionOfPrecision());
            return S_OK;
        }
        catch (...)
        {
            *ppValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalDilutionOfPrecision(abi_arg_out<Windows::Foundation::IReference<double>> ppValue) noexcept override
    {
        try
        {
            *ppValue = detach(this->shim().VerticalDilutionOfPrecision());
            return S_OK;
        }
        catch (...)
        {
            *ppValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeocoordinateWithPoint> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinateWithPoint>
{
    HRESULT __stdcall get_Point(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Point());
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
struct produce<D, Windows::Devices::Geolocation::IGeocoordinateWithPositionData> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinateWithPositionData>
{
    HRESULT __stdcall get_PositionSource(Windows::Devices::Geolocation::PositionSource * pValue) noexcept override
    {
        try
        {
            *pValue = detach(this->shim().PositionSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SatelliteData(abi_arg_out<Windows::Devices::Geolocation::IGeocoordinateSatelliteData> ppValue) noexcept override
    {
        try
        {
            *ppValue = detach(this->shim().SatelliteData());
            return S_OK;
        }
        catch (...)
        {
            *ppValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp> : produce_base<D, Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
{
    HRESULT __stdcall get_PositionSourceTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PositionSourceTimestamp());
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
struct produce<D, Windows::Devices::Geolocation::IGeolocator> : produce_base<D, Windows::Devices::Geolocation::IGeolocator>
{
    HRESULT __stdcall get_DesiredAccuracy(Windows::Devices::Geolocation::PositionAccuracy * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredAccuracy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredAccuracy(Windows::Devices::Geolocation::PositionAccuracy value) noexcept override
    {
        try
        {
            this->shim().DesiredAccuracy(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MovementThreshold(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MovementThreshold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MovementThreshold(double value) noexcept override
    {
        try
        {
            this->shim().MovementThreshold(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportInterval(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReportInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept override
    {
        try
        {
            this->shim().ReportInterval(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocationStatus(Windows::Devices::Geolocation::PositionStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocationStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGeopositionAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetGeopositionAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGeopositionAsyncWithAgeAndTimeout(abi_arg_in<Windows::Foundation::TimeSpan> maximumAge, abi_arg_in<Windows::Foundation::TimeSpan> timeout, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetGeopositionAsync(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&maximumAge), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&timeout)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PositionChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PositionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PositionChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().StatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeolocator2> : produce_base<D, Windows::Devices::Geolocation::IGeolocator2>
{
    HRESULT __stdcall abi_AllowFallbackToConsentlessPositions() noexcept override
    {
        try
        {
            this->shim().AllowFallbackToConsentlessPositions();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeolocatorStatics> : produce_base<D, Windows::Devices::Geolocation::IGeolocatorStatics>
{
    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGeopositionHistoryAsync(abi_arg_in<Windows::Foundation::DateTime> startTime, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetGeopositionHistoryAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGeopositionHistoryWithDurationAsync(abi_arg_in<Windows::Foundation::DateTime> startTime, abi_arg_in<Windows::Foundation::TimeSpan> duration, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetGeopositionHistoryAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&duration)));
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
struct produce<D, Windows::Devices::Geolocation::IGeolocatorStatics2> : produce_base<D, Windows::Devices::Geolocation::IGeolocatorStatics2>
{
    HRESULT __stdcall get_IsDefaultGeopositionRecommended(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDefaultGeopositionRecommended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultGeoposition(abi_arg_in<Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition>> value) noexcept override
    {
        try
        {
            this->shim().DefaultGeoposition(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultGeoposition(abi_arg_out<Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultGeoposition());
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
struct produce<D, Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy> : produce_base<D, Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>
{
    HRESULT __stdcall get_DesiredAccuracyInMeters(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredAccuracyInMeters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredAccuracyInMeters(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            this->shim().DesiredAccuracyInMeters(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeopath> : produce_base<D, Windows::Devices::Geolocation::IGeopath>
{
    HRESULT __stdcall get_Positions(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::BasicGeoposition>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Positions());
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
struct produce<D, Windows::Devices::Geolocation::IGeopathFactory> : produce_base<D, Windows::Devices::Geolocation::IGeopathFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition>> positions, abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> *>(&positions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAltitudeReference(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition>> positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAltitudeReference(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> *>(&positions), altitudeReferenceSystem));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAltitudeReferenceAndSpatialReference(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition>> positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId, abi_arg_out<Windows::Devices::Geolocation::IGeopath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAltitudeReferenceAndSpatialReference(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> *>(&positions), altitudeReferenceSystem, spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeopoint> : produce_base<D, Windows::Devices::Geolocation::IGeopoint>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Devices::Geolocation::BasicGeoposition> value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IGeopointFactory> : produce_base<D, Windows::Devices::Geolocation::IGeopointFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> position, abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&position)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAltitudeReferenceSystem(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> position, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAltitudeReferenceSystem(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&position), altitudeReferenceSystem));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAltitudeReferenceSystemAndSpatialReferenceId(abi_arg_in<Windows::Devices::Geolocation::BasicGeoposition> position, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId, abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAltitudeReferenceSystemAndSpatialReferenceId(*reinterpret_cast<const Windows::Devices::Geolocation::BasicGeoposition *>(&position), altitudeReferenceSystem, spatialReferenceId));
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
struct produce<D, Windows::Devices::Geolocation::IGeoposition> : produce_base<D, Windows::Devices::Geolocation::IGeoposition>
{
    HRESULT __stdcall get_Coordinate(abi_arg_out<Windows::Devices::Geolocation::IGeocoordinate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Coordinate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CivicAddress(abi_arg_out<Windows::Devices::Geolocation::ICivicAddress> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CivicAddress());
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
struct produce<D, Windows::Devices::Geolocation::IGeoposition2> : produce_base<D, Windows::Devices::Geolocation::IGeoposition2>
{
    HRESULT __stdcall get_VenueData(abi_arg_out<Windows::Devices::Geolocation::IVenueData> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VenueData());
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
struct produce<D, Windows::Devices::Geolocation::IGeoshape> : produce_base<D, Windows::Devices::Geolocation::IGeoshape>
{
    HRESULT __stdcall get_GeoshapeType(Windows::Devices::Geolocation::GeoshapeType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GeoshapeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpatialReferenceId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpatialReferenceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AltitudeReferenceSystem(Windows::Devices::Geolocation::AltitudeReferenceSystem * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AltitudeReferenceSystem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IPositionChangedEventArgs> : produce_base<D, Windows::Devices::Geolocation::IPositionChangedEventArgs>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Devices::Geolocation::IGeoposition> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
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
struct produce<D, Windows::Devices::Geolocation::IStatusChangedEventArgs> : produce_base<D, Windows::Devices::Geolocation::IStatusChangedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::Devices::Geolocation::PositionStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::IVenueData> : produce_base<D, Windows::Devices::Geolocation::IVenueData>
{
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Level(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Level());
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

namespace Windows::Devices::Geolocation {

template <typename D> Windows::Devices::Geolocation::GeoshapeType impl_IGeoshape<D>::GeoshapeType() const
{
    Windows::Devices::Geolocation::GeoshapeType value {};
    check_hresult(static_cast<const IGeoshape &>(static_cast<const D &>(*this))->get_GeoshapeType(&value));
    return value;
}

template <typename D> uint32_t impl_IGeoshape<D>::SpatialReferenceId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IGeoshape &>(static_cast<const D &>(*this))->get_SpatialReferenceId(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::AltitudeReferenceSystem impl_IGeoshape<D>::AltitudeReferenceSystem() const
{
    Windows::Devices::Geolocation::AltitudeReferenceSystem value {};
    check_hresult(static_cast<const IGeoshape &>(static_cast<const D &>(*this))->get_AltitudeReferenceSystem(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition impl_IGeopoint<D>::Position() const
{
    Windows::Devices::Geolocation::BasicGeoposition value {};
    check_hresult(static_cast<const IGeopoint &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IGeopointFactory<D>::Create(const Windows::Devices::Geolocation::BasicGeoposition & position) const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IGeopointFactory &>(static_cast<const D &>(*this))->abi_Create(get(position), put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IGeopointFactory<D>::CreateWithAltitudeReferenceSystem(const Windows::Devices::Geolocation::BasicGeoposition & position, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IGeopointFactory &>(static_cast<const D &>(*this))->abi_CreateWithAltitudeReferenceSystem(get(position), altitudeReferenceSystem, put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IGeopointFactory<D>::CreateWithAltitudeReferenceSystemAndSpatialReferenceId(const Windows::Devices::Geolocation::BasicGeoposition & position, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IGeopointFactory &>(static_cast<const D &>(*this))->abi_CreateWithAltitudeReferenceSystemAndSpatialReferenceId(get(position), altitudeReferenceSystem, spatialReferenceId, put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::BasicGeoposition> impl_IGeopath<D>::Positions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::BasicGeoposition> value;
    check_hresult(static_cast<const IGeopath &>(static_cast<const D &>(*this))->get_Positions(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IGeopathFactory<D>::Create(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions) const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(static_cast<const IGeopathFactory &>(static_cast<const D &>(*this))->abi_Create(get(positions), put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IGeopathFactory<D>::CreateWithAltitudeReference(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(static_cast<const IGeopathFactory &>(static_cast<const D &>(*this))->abi_CreateWithAltitudeReference(get(positions), altitudeReferenceSystem, put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopath impl_IGeopathFactory<D>::CreateWithAltitudeReferenceAndSpatialReference(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::Geopath value { nullptr };
    check_hresult(static_cast<const IGeopathFactory &>(static_cast<const D &>(*this))->abi_CreateWithAltitudeReferenceAndSpatialReference(get(positions), altitudeReferenceSystem, spatialReferenceId, put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition impl_IGeoboundingBox<D>::NorthwestCorner() const
{
    Windows::Devices::Geolocation::BasicGeoposition value {};
    check_hresult(static_cast<const IGeoboundingBox &>(static_cast<const D &>(*this))->get_NorthwestCorner(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition impl_IGeoboundingBox<D>::SoutheastCorner() const
{
    Windows::Devices::Geolocation::BasicGeoposition value {};
    check_hresult(static_cast<const IGeoboundingBox &>(static_cast<const D &>(*this))->get_SoutheastCorner(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition impl_IGeoboundingBox<D>::Center() const
{
    Windows::Devices::Geolocation::BasicGeoposition value {};
    check_hresult(static_cast<const IGeoboundingBox &>(static_cast<const D &>(*this))->get_Center(put(value)));
    return value;
}

template <typename D> double impl_IGeoboundingBox<D>::MinAltitude() const
{
    double value {};
    check_hresult(static_cast<const IGeoboundingBox &>(static_cast<const D &>(*this))->get_MinAltitude(&value));
    return value;
}

template <typename D> double impl_IGeoboundingBox<D>::MaxAltitude() const
{
    double value {};
    check_hresult(static_cast<const IGeoboundingBox &>(static_cast<const D &>(*this))->get_MaxAltitude(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IGeoboundingBoxFactory<D>::Create(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner) const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IGeoboundingBoxFactory &>(static_cast<const D &>(*this))->abi_Create(get(northwestCorner), get(southeastCorner), put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IGeoboundingBoxFactory<D>::CreateWithAltitudeReference(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IGeoboundingBoxFactory &>(static_cast<const D &>(*this))->abi_CreateWithAltitudeReference(get(northwestCorner), get(southeastCorner), altitudeReferenceSystem, put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IGeoboundingBoxFactory<D>::CreateWithAltitudeReferenceAndSpatialReference(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IGeoboundingBoxFactory &>(static_cast<const D &>(*this))->abi_CreateWithAltitudeReferenceAndSpatialReference(get(northwestCorner), get(southeastCorner), altitudeReferenceSystem, spatialReferenceId, put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IGeoboundingBoxStatics<D>::TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions) const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IGeoboundingBoxStatics &>(static_cast<const D &>(*this))->abi_TryCompute(get(positions), put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IGeoboundingBoxStatics<D>::TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem) const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IGeoboundingBoxStatics &>(static_cast<const D &>(*this))->abi_TryComputeWithAltitudeReference(get(positions), altitudeRefSystem, put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::GeoboundingBox impl_IGeoboundingBoxStatics<D>::TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::GeoboundingBox value { nullptr };
    check_hresult(static_cast<const IGeoboundingBoxStatics &>(static_cast<const D &>(*this))->abi_TryComputeWithAltitudeReferenceAndSpatialReference(get(positions), altitudeRefSystem, spatialReferenceId, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IGeocoordinateSatelliteData<D>::PositionDilutionOfPrecision() const
{
    Windows::Foundation::IReference<double> ppValue;
    check_hresult(static_cast<const IGeocoordinateSatelliteData &>(static_cast<const D &>(*this))->get_PositionDilutionOfPrecision(put(ppValue)));
    return ppValue;
}

template <typename D> Windows::Foundation::IReference<double> impl_IGeocoordinateSatelliteData<D>::HorizontalDilutionOfPrecision() const
{
    Windows::Foundation::IReference<double> ppValue;
    check_hresult(static_cast<const IGeocoordinateSatelliteData &>(static_cast<const D &>(*this))->get_HorizontalDilutionOfPrecision(put(ppValue)));
    return ppValue;
}

template <typename D> Windows::Foundation::IReference<double> impl_IGeocoordinateSatelliteData<D>::VerticalDilutionOfPrecision() const
{
    Windows::Foundation::IReference<double> ppValue;
    check_hresult(static_cast<const IGeocoordinateSatelliteData &>(static_cast<const D &>(*this))->get_VerticalDilutionOfPrecision(put(ppValue)));
    return ppValue;
}

template <typename D> hstring impl_IVenueData<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IVenueData &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IVenueData<D>::Level() const
{
    hstring value;
    check_hresult(static_cast<const IVenueData &>(static_cast<const D &>(*this))->get_Level(put(value)));
    return value;
}

template <typename D> double impl_IGeocoordinate<D>::Latitude() const
{
    double value {};
    check_hresult(static_cast<const IGeocoordinate &>(static_cast<const D &>(*this))->get_Latitude(&value));
    return value;
}

template <typename D> double impl_IGeocoordinate<D>::Longitude() const
{
    double value {};
    check_hresult(static_cast<const IGeocoordinate &>(static_cast<const D &>(*this))->get_Longitude(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IGeocoordinate<D>::Altitude() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IGeocoordinate &>(static_cast<const D &>(*this))->get_Altitude(put(value)));
    return value;
}

template <typename D> double impl_IGeocoordinate<D>::Accuracy() const
{
    double value {};
    check_hresult(static_cast<const IGeocoordinate &>(static_cast<const D &>(*this))->get_Accuracy(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IGeocoordinate<D>::AltitudeAccuracy() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IGeocoordinate &>(static_cast<const D &>(*this))->get_AltitudeAccuracy(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IGeocoordinate<D>::Heading() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IGeocoordinate &>(static_cast<const D &>(*this))->get_Heading(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IGeocoordinate<D>::Speed() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IGeocoordinate &>(static_cast<const D &>(*this))->get_Speed(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IGeocoordinate<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IGeocoordinate &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::PositionSource impl_IGeocoordinateWithPositionData<D>::PositionSource() const
{
    Windows::Devices::Geolocation::PositionSource pValue {};
    check_hresult(static_cast<const IGeocoordinateWithPositionData &>(static_cast<const D &>(*this))->get_PositionSource(&pValue));
    return pValue;
}

template <typename D> Windows::Devices::Geolocation::GeocoordinateSatelliteData impl_IGeocoordinateWithPositionData<D>::SatelliteData() const
{
    Windows::Devices::Geolocation::GeocoordinateSatelliteData ppValue { nullptr };
    check_hresult(static_cast<const IGeocoordinateWithPositionData &>(static_cast<const D &>(*this))->get_SatelliteData(put(ppValue)));
    return ppValue;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_IGeocoordinateWithPoint<D>::Point() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const IGeocoordinateWithPoint &>(static_cast<const D &>(*this))->get_Point(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IGeocoordinateWithPositionSourceTimestamp<D>::PositionSourceTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IGeocoordinateWithPositionSourceTimestamp &>(static_cast<const D &>(*this))->get_PositionSourceTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geocoordinate impl_IGeoposition<D>::Coordinate() const
{
    Windows::Devices::Geolocation::Geocoordinate value { nullptr };
    check_hresult(static_cast<const IGeoposition &>(static_cast<const D &>(*this))->get_Coordinate(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::CivicAddress impl_IGeoposition<D>::CivicAddress() const
{
    Windows::Devices::Geolocation::CivicAddress value { nullptr };
    check_hresult(static_cast<const IGeoposition &>(static_cast<const D &>(*this))->get_CivicAddress(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::VenueData impl_IGeoposition2<D>::VenueData() const
{
    Windows::Devices::Geolocation::VenueData value { nullptr };
    check_hresult(static_cast<const IGeoposition2 &>(static_cast<const D &>(*this))->get_VenueData(put(value)));
    return value;
}

template <typename D> hstring impl_ICivicAddress<D>::Country() const
{
    hstring value;
    check_hresult(static_cast<const ICivicAddress &>(static_cast<const D &>(*this))->get_Country(put(value)));
    return value;
}

template <typename D> hstring impl_ICivicAddress<D>::State() const
{
    hstring value;
    check_hresult(static_cast<const ICivicAddress &>(static_cast<const D &>(*this))->get_State(put(value)));
    return value;
}

template <typename D> hstring impl_ICivicAddress<D>::City() const
{
    hstring value;
    check_hresult(static_cast<const ICivicAddress &>(static_cast<const D &>(*this))->get_City(put(value)));
    return value;
}

template <typename D> hstring impl_ICivicAddress<D>::PostalCode() const
{
    hstring value;
    check_hresult(static_cast<const ICivicAddress &>(static_cast<const D &>(*this))->get_PostalCode(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_ICivicAddress<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const ICivicAddress &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geoposition impl_IPositionChangedEventArgs<D>::Position() const
{
    Windows::Devices::Geolocation::Geoposition value { nullptr };
    check_hresult(static_cast<const IPositionChangedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::PositionStatus impl_IStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::Geolocation::PositionStatus value {};
    check_hresult(static_cast<const IStatusChangedEventArgs &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::PositionAccuracy impl_IGeolocator<D>::DesiredAccuracy() const
{
    Windows::Devices::Geolocation::PositionAccuracy value {};
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->get_DesiredAccuracy(&value));
    return value;
}

template <typename D> void impl_IGeolocator<D>::DesiredAccuracy(Windows::Devices::Geolocation::PositionAccuracy value) const
{
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->put_DesiredAccuracy(value));
}

template <typename D> double impl_IGeolocator<D>::MovementThreshold() const
{
    double value {};
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->get_MovementThreshold(&value));
    return value;
}

template <typename D> void impl_IGeolocator<D>::MovementThreshold(double value) const
{
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->put_MovementThreshold(value));
}

template <typename D> uint32_t impl_IGeolocator<D>::ReportInterval() const
{
    uint32_t value {};
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->get_ReportInterval(&value));
    return value;
}

template <typename D> void impl_IGeolocator<D>::ReportInterval(uint32_t value) const
{
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->put_ReportInterval(value));
}

template <typename D> Windows::Devices::Geolocation::PositionStatus impl_IGeolocator<D>::LocationStatus() const
{
    Windows::Devices::Geolocation::PositionStatus value {};
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->get_LocationStatus(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> impl_IGeolocator<D>::GetGeopositionAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> value;
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->abi_GetGeopositionAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> impl_IGeolocator<D>::GetGeopositionAsync(const Windows::Foundation::TimeSpan & maximumAge, const Windows::Foundation::TimeSpan & timeout) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geoposition> value;
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->abi_GetGeopositionAsyncWithAgeAndTimeout(get(maximumAge), get(timeout), put(value)));
    return value;
}

template <typename D> event_token impl_IGeolocator<D>::PositionChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->add_PositionChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGeolocator> impl_IGeolocator<D>::PositionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGeolocator>(this, &ABI::Windows::Devices::Geolocation::IGeolocator::remove_PositionChanged, PositionChanged(handler));
}

template <typename D> void impl_IGeolocator<D>::PositionChanged(event_token token) const
{
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->remove_PositionChanged(token));
}

template <typename D> event_token impl_IGeolocator<D>::StatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->add_StatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGeolocator> impl_IGeolocator<D>::StatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGeolocator>(this, &ABI::Windows::Devices::Geolocation::IGeolocator::remove_StatusChanged, StatusChanged(handler));
}

template <typename D> void impl_IGeolocator<D>::StatusChanged(event_token token) const
{
    check_hresult(static_cast<const IGeolocator &>(static_cast<const D &>(*this))->remove_StatusChanged(token));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IGeolocatorWithScalarAccuracy<D>::DesiredAccuracyInMeters() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IGeolocatorWithScalarAccuracy &>(static_cast<const D &>(*this))->get_DesiredAccuracyInMeters(put(value)));
    return value;
}

template <typename D> void impl_IGeolocatorWithScalarAccuracy<D>::DesiredAccuracyInMeters(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(static_cast<const IGeolocatorWithScalarAccuracy &>(static_cast<const D &>(*this))->put_DesiredAccuracyInMeters(get(value)));
}

template <typename D> void impl_IGeolocator2<D>::AllowFallbackToConsentlessPositions() const
{
    check_hresult(static_cast<const IGeolocator2 &>(static_cast<const D &>(*this))->abi_AllowFallbackToConsentlessPositions());
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus> impl_IGeolocatorStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus> result;
    check_hresult(static_cast<const IGeolocatorStatics &>(static_cast<const D &>(*this))->abi_RequestAccessAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> impl_IGeolocatorStatics<D>::GetGeopositionHistoryAsync(const Windows::Foundation::DateTime & startTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> result;
    check_hresult(static_cast<const IGeolocatorStatics &>(static_cast<const D &>(*this))->abi_GetGeopositionHistoryAsync(get(startTime), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> impl_IGeolocatorStatics<D>::GetGeopositionHistoryAsync(const Windows::Foundation::DateTime & startTime, const Windows::Foundation::TimeSpan & duration) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> result;
    check_hresult(static_cast<const IGeolocatorStatics &>(static_cast<const D &>(*this))->abi_GetGeopositionHistoryWithDurationAsync(get(startTime), get(duration), put(result)));
    return result;
}

template <typename D> bool impl_IGeolocatorStatics2<D>::IsDefaultGeopositionRecommended() const
{
    bool value {};
    check_hresult(static_cast<const IGeolocatorStatics2 &>(static_cast<const D &>(*this))->get_IsDefaultGeopositionRecommended(&value));
    return value;
}

template <typename D> void impl_IGeolocatorStatics2<D>::DefaultGeoposition(const Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> & value) const
{
    check_hresult(static_cast<const IGeolocatorStatics2 &>(static_cast<const D &>(*this))->put_DefaultGeoposition(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> impl_IGeolocatorStatics2<D>::DefaultGeoposition() const
{
    Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> value;
    check_hresult(static_cast<const IGeolocatorStatics2 &>(static_cast<const D &>(*this))->get_DefaultGeoposition(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition impl_IGeocircle<D>::Center() const
{
    Windows::Devices::Geolocation::BasicGeoposition value {};
    check_hresult(static_cast<const IGeocircle &>(static_cast<const D &>(*this))->get_Center(put(value)));
    return value;
}

template <typename D> double impl_IGeocircle<D>::Radius() const
{
    double value {};
    check_hresult(static_cast<const IGeocircle &>(static_cast<const D &>(*this))->get_Radius(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geocircle impl_IGeocircleFactory<D>::Create(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius) const
{
    Windows::Devices::Geolocation::Geocircle value { nullptr };
    check_hresult(static_cast<const IGeocircleFactory &>(static_cast<const D &>(*this))->abi_Create(get(position), radius, put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geocircle impl_IGeocircleFactory<D>::CreateWithAltitudeReferenceSystem(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) const
{
    Windows::Devices::Geolocation::Geocircle value { nullptr };
    check_hresult(static_cast<const IGeocircleFactory &>(static_cast<const D &>(*this))->abi_CreateWithAltitudeReferenceSystem(get(position), radius, altitudeReferenceSystem, put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geocircle impl_IGeocircleFactory<D>::CreateWithAltitudeReferenceSystemAndSpatialReferenceId(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) const
{
    Windows::Devices::Geolocation::Geocircle value { nullptr };
    check_hresult(static_cast<const IGeocircleFactory &>(static_cast<const D &>(*this))->abi_CreateWithAltitudeReferenceSystemAndSpatialReferenceId(get(position), radius, altitudeReferenceSystem, spatialReferenceId, put(value)));
    return value;
}

inline GeoboundingBox::GeoboundingBox(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner) :
    GeoboundingBox(get_activation_factory<GeoboundingBox, IGeoboundingBoxFactory>().Create(northwestCorner, southeastCorner))
{}

inline GeoboundingBox::GeoboundingBox(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) :
    GeoboundingBox(get_activation_factory<GeoboundingBox, IGeoboundingBoxFactory>().CreateWithAltitudeReference(northwestCorner, southeastCorner, altitudeReferenceSystem))
{}

inline GeoboundingBox::GeoboundingBox(const Windows::Devices::Geolocation::BasicGeoposition & northwestCorner, const Windows::Devices::Geolocation::BasicGeoposition & southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) :
    GeoboundingBox(get_activation_factory<GeoboundingBox, IGeoboundingBoxFactory>().CreateWithAltitudeReferenceAndSpatialReference(northwestCorner, southeastCorner, altitudeReferenceSystem, spatialReferenceId))
{}

inline Windows::Devices::Geolocation::GeoboundingBox GeoboundingBox::TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions)
{
    return get_activation_factory<GeoboundingBox, IGeoboundingBoxStatics>().TryCompute(positions);
}

inline Windows::Devices::Geolocation::GeoboundingBox GeoboundingBox::TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem)
{
    return get_activation_factory<GeoboundingBox, IGeoboundingBoxStatics>().TryCompute(positions, altitudeRefSystem);
}

inline Windows::Devices::Geolocation::GeoboundingBox GeoboundingBox::TryCompute(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem, uint32_t spatialReferenceId)
{
    return get_activation_factory<GeoboundingBox, IGeoboundingBoxStatics>().TryCompute(positions, altitudeRefSystem, spatialReferenceId);
}

inline Geocircle::Geocircle(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius) :
    Geocircle(get_activation_factory<Geocircle, IGeocircleFactory>().Create(position, radius))
{}

inline Geocircle::Geocircle(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) :
    Geocircle(get_activation_factory<Geocircle, IGeocircleFactory>().CreateWithAltitudeReferenceSystem(position, radius, altitudeReferenceSystem))
{}

inline Geocircle::Geocircle(const Windows::Devices::Geolocation::BasicGeoposition & position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) :
    Geocircle(get_activation_factory<Geocircle, IGeocircleFactory>().CreateWithAltitudeReferenceSystemAndSpatialReferenceId(position, radius, altitudeReferenceSystem, spatialReferenceId))
{}

inline Geolocator::Geolocator() :
    Geolocator(activate_instance<Geolocator>())
{}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Geolocation::GeolocationAccessStatus> Geolocator::RequestAccessAsync()
{
    return get_activation_factory<Geolocator, IGeolocatorStatics>().RequestAccessAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> Geolocator::GetGeopositionHistoryAsync(const Windows::Foundation::DateTime & startTime)
{
    return get_activation_factory<Geolocator, IGeolocatorStatics>().GetGeopositionHistoryAsync(startTime);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geoposition>> Geolocator::GetGeopositionHistoryAsync(const Windows::Foundation::DateTime & startTime, const Windows::Foundation::TimeSpan & duration)
{
    return get_activation_factory<Geolocator, IGeolocatorStatics>().GetGeopositionHistoryAsync(startTime, duration);
}

inline bool Geolocator::IsDefaultGeopositionRecommended()
{
    return get_activation_factory<Geolocator, IGeolocatorStatics2>().IsDefaultGeopositionRecommended();
}

inline void Geolocator::DefaultGeoposition(const Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> & value)
{
    get_activation_factory<Geolocator, IGeolocatorStatics2>().DefaultGeoposition(value);
}

inline Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> Geolocator::DefaultGeoposition()
{
    return get_activation_factory<Geolocator, IGeolocatorStatics2>().DefaultGeoposition();
}

inline Geopath::Geopath(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions) :
    Geopath(get_activation_factory<Geopath, IGeopathFactory>().Create(positions))
{}

inline Geopath::Geopath(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) :
    Geopath(get_activation_factory<Geopath, IGeopathFactory>().CreateWithAltitudeReference(positions, altitudeReferenceSystem))
{}

inline Geopath::Geopath(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::BasicGeoposition> & positions, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) :
    Geopath(get_activation_factory<Geopath, IGeopathFactory>().CreateWithAltitudeReferenceAndSpatialReference(positions, altitudeReferenceSystem, spatialReferenceId))
{}

inline Geopoint::Geopoint(const Windows::Devices::Geolocation::BasicGeoposition & position) :
    Geopoint(get_activation_factory<Geopoint, IGeopointFactory>().Create(position))
{}

inline Geopoint::Geopoint(const Windows::Devices::Geolocation::BasicGeoposition & position, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem) :
    Geopoint(get_activation_factory<Geopoint, IGeopointFactory>().CreateWithAltitudeReferenceSystem(position, altitudeReferenceSystem))
{}

inline Geopoint::Geopoint(const Windows::Devices::Geolocation::BasicGeoposition & position, Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem, uint32_t spatialReferenceId) :
    Geopoint(get_activation_factory<Geopoint, IGeopointFactory>().CreateWithAltitudeReferenceSystemAndSpatialReferenceId(position, altitudeReferenceSystem, spatialReferenceId))
{}

}

}
