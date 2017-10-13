// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Devices.Geolocation.Geofencing.2.h"
#include "winrt/Windows.Devices.Geolocation.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::StartTime() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::Duration() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::DwellTime() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_DwellTime(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::Id() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::MonitoredStates() const noexcept
{
    Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_MonitoredStates(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::IGeoshape consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::Geoshape() const noexcept
{
    Windows::Devices::Geolocation::IGeoshape value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_Geoshape(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::SingleUse() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_SingleUse(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>::Create(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape) const
{
    Windows::Devices::Geolocation::Geofencing::Geofence geofence{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceFactory)->Create(get_abi(id), get_abi(geoshape), put_abi(geofence)));
    return geofence;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>::CreateWithMonitorStates(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse) const
{
    Windows::Devices::Geolocation::Geofencing::Geofence geofence{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceFactory)->CreateWithMonitorStates(get_abi(id), get_abi(geoshape), get_abi(monitoredStates), singleUse, put_abi(geofence)));
    return geofence;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>::CreateWithMonitorStatesAndDwellTime(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime) const
{
    Windows::Devices::Geolocation::Geofencing::Geofence geofence{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceFactory)->CreateWithMonitorStatesAndDwellTime(get_abi(id), get_abi(geoshape), get_abi(monitoredStates), singleUse, get_abi(dwellTime), put_abi(geofence)));
    return geofence;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>::CreateWithMonitorStatesDwellTimeStartTimeAndDuration(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime, Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const
{
    Windows::Devices::Geolocation::Geofencing::Geofence geofence{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceFactory)->CreateWithMonitorStatesDwellTimeStartTimeAndDuration(get_abi(id), get_abi(geoshape), get_abi(monitoredStates), singleUse, get_abi(dwellTime), get_abi(startTime), get_abi(duration), put_abi(geofence)));
    return geofence;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::Status() const noexcept
{
    Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence> consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::Geofences() const noexcept
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->get_Geofences(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geoposition consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::LastKnownGeoposition() const noexcept
{
    Windows::Devices::Geolocation::Geoposition value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->get_LastKnownGeoposition(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::GeofenceStateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->add_GeofenceStateChanged(get_abi(eventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::GeofenceStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>(this, &abi_t<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>::remove_GeofenceStateChanged, GeofenceStateChanged(eventHandler));
}

template <typename D> void consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::GeofenceStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->remove_GeofenceStateChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::ReadReports() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->ReadReports(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->add_StatusChanged(get_abi(eventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>(this, &abi_t<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>::remove_StatusChanged, StatusChanged(eventHandler));
}

template <typename D> void consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::StatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->remove_StatusChanged(get_abi(token)));
}

template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceMonitor consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics<D>::Current() const noexcept
{
    Windows::Devices::Geolocation::Geofencing::GeofenceMonitor value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceState consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>::NewState() const noexcept
{
    Windows::Devices::Geolocation::Geofencing::GeofenceState value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport)->get_NewState(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>::Geofence() const noexcept
{
    Windows::Devices::Geolocation::Geofencing::Geofence value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport)->get_Geofence(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geoposition consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>::Geoposition() const noexcept
{
    Windows::Devices::Geolocation::Geoposition value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport)->get_Geoposition(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>::RemovalReason() const noexcept
{
    Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport)->get_RemovalReason(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofence> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofence>
{
    HRESULT __stdcall get_StartTime(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().StartTime());
        return S_OK;
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Duration());
        return S_OK;
    }

    HRESULT __stdcall get_DwellTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DwellTime());
        return S_OK;
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Id());
        return S_OK;
    }

    HRESULT __stdcall get_MonitoredStates(Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MonitoredStates());
        return S_OK;
    }

    HRESULT __stdcall get_Geoshape(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Geoshape());
        return S_OK;
    }

    HRESULT __stdcall get_SingleUse(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SingleUse());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
{
    HRESULT __stdcall Create(HSTRING id, ::IUnknown* geoshape, ::IUnknown** geofence) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geofence = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Geolocation::IGeoshape const*>(&geoshape)));
            return S_OK;
        }
        catch (...)
        {
            *geofence = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithMonitorStates(HSTRING id, ::IUnknown* geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, ::IUnknown** geofence) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geofence = detach_abi(this->shim().CreateWithMonitorStates(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Geolocation::IGeoshape const*>(&geoshape), *reinterpret_cast<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const*>(&monitoredStates), singleUse));
            return S_OK;
        }
        catch (...)
        {
            *geofence = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithMonitorStatesAndDwellTime(HSTRING id, ::IUnknown* geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, Windows::Foundation::TimeSpan dwellTime, ::IUnknown** geofence) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geofence = detach_abi(this->shim().CreateWithMonitorStatesAndDwellTime(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Geolocation::IGeoshape const*>(&geoshape), *reinterpret_cast<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const*>(&monitoredStates), singleUse, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&dwellTime)));
            return S_OK;
        }
        catch (...)
        {
            *geofence = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithMonitorStatesDwellTimeStartTimeAndDuration(HSTRING id, ::IUnknown* geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, Windows::Foundation::TimeSpan dwellTime, Windows::Foundation::DateTime startTime, Windows::Foundation::TimeSpan duration, ::IUnknown** geofence) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geofence = detach_abi(this->shim().CreateWithMonitorStatesDwellTimeStartTimeAndDuration(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Geolocation::IGeoshape const*>(&geoshape), *reinterpret_cast<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const*>(&monitoredStates), singleUse, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&dwellTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            *geofence = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>
{
    HRESULT __stdcall get_Status(Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall get_Geofences(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Geofences());
        return S_OK;
    }

    HRESULT __stdcall get_LastKnownGeoposition(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LastKnownGeoposition());
        return S_OK;
    }

    HRESULT __stdcall add_GeofenceStateChanged(::IUnknown* eventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GeofenceStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GeofenceStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GeofenceStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadReports(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadReports());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(::IUnknown* eventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Current());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
{
    HRESULT __stdcall get_NewState(Windows::Devices::Geolocation::Geofencing::GeofenceState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NewState());
        return S_OK;
    }

    HRESULT __stdcall get_Geofence(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Geofence());
        return S_OK;
    }

    HRESULT __stdcall get_Geoposition(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Geoposition());
        return S_OK;
    }

    HRESULT __stdcall get_RemovalReason(Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RemovalReason());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation::Geofencing {

inline Geofence::Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape) :
    Geofence(get_activation_factory<Geofence, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>().Create(id, geoshape))
{}

inline Geofence::Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse) :
    Geofence(get_activation_factory<Geofence, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>().CreateWithMonitorStates(id, geoshape, monitoredStates, singleUse))
{}

inline Geofence::Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime) :
    Geofence(get_activation_factory<Geofence, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>().CreateWithMonitorStatesAndDwellTime(id, geoshape, monitoredStates, singleUse, dwellTime))
{}

inline Geofence::Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime, Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) :
    Geofence(get_activation_factory<Geofence, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>().CreateWithMonitorStatesDwellTimeStartTimeAndDuration(id, geoshape, monitoredStates, singleUse, dwellTime, startTime, duration))
{}

inline Windows::Devices::Geolocation::Geofencing::GeofenceMonitor GeofenceMonitor::Current()
{
    return get_activation_factory<GeofenceMonitor, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>().Current();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofence> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geofencing::IGeofence> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceFactory> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::Geofence> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geofencing::Geofence> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor> {};

template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> {};

}

WINRT_WARNING_POP
