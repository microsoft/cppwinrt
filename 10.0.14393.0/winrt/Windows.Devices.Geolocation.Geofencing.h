// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Devices.Geolocation.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Geolocation.Geofencing.3.h"
#include "Windows.Devices.Geolocation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofence> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofence>
{
    HRESULT __stdcall get_StartTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DwellTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DwellTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_MonitoredStates(Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MonitoredStates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Geoshape(abi_arg_out<Windows::Devices::Geolocation::IGeoshape> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Geoshape());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SingleUse(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SingleUse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> id, abi_arg_in<Windows::Devices::Geolocation::IGeoshape> geoshape, abi_arg_out<Windows::Devices::Geolocation::Geofencing::IGeofence> geofence) noexcept override
    {
        try
        {
            *geofence = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::Devices::Geolocation::IGeoshape *>(&geoshape)));
            return S_OK;
        }
        catch (...)
        {
            *geofence = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithMonitorStates(abi_arg_in<hstring> id, abi_arg_in<Windows::Devices::Geolocation::IGeoshape> geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, abi_arg_out<Windows::Devices::Geolocation::Geofencing::IGeofence> geofence) noexcept override
    {
        try
        {
            *geofence = detach(this->shim().CreateWithMonitorStates(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::Devices::Geolocation::IGeoshape *>(&geoshape), monitoredStates, singleUse));
            return S_OK;
        }
        catch (...)
        {
            *geofence = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithMonitorStatesAndDwellTime(abi_arg_in<hstring> id, abi_arg_in<Windows::Devices::Geolocation::IGeoshape> geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, abi_arg_in<Windows::Foundation::TimeSpan> dwellTime, abi_arg_out<Windows::Devices::Geolocation::Geofencing::IGeofence> geofence) noexcept override
    {
        try
        {
            *geofence = detach(this->shim().CreateWithMonitorStatesAndDwellTime(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::Devices::Geolocation::IGeoshape *>(&geoshape), monitoredStates, singleUse, *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&dwellTime)));
            return S_OK;
        }
        catch (...)
        {
            *geofence = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithMonitorStatesDwellTimeStartTimeAndDuration(abi_arg_in<hstring> id, abi_arg_in<Windows::Devices::Geolocation::IGeoshape> geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, abi_arg_in<Windows::Foundation::TimeSpan> dwellTime, abi_arg_in<Windows::Foundation::DateTime> startTime, abi_arg_in<Windows::Foundation::TimeSpan> duration, abi_arg_out<Windows::Devices::Geolocation::Geofencing::IGeofence> geofence) noexcept override
    {
        try
        {
            *geofence = detach(this->shim().CreateWithMonitorStatesDwellTimeStartTimeAndDuration(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::Devices::Geolocation::IGeoshape *>(&geoshape), monitoredStates, singleUse, *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&dwellTime), *reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&duration)));
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
    HRESULT __stdcall get_Status(Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus * value) noexcept override
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

    HRESULT __stdcall get_Geofences(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Geofences());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastKnownGeoposition(abi_arg_out<Windows::Devices::Geolocation::IGeoposition> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastKnownGeoposition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GeofenceStateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable>> eventHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().GeofenceStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GeofenceStateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().GeofenceStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadReports(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadReports());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable>> eventHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable> *>(&eventHandler)));
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
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Current());
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
struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
{
    HRESULT __stdcall get_NewState(Windows::Devices::Geolocation::Geofencing::GeofenceState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Geofence(abi_arg_out<Windows::Devices::Geolocation::Geofencing::IGeofence> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Geofence());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Geoposition(abi_arg_out<Windows::Devices::Geolocation::IGeoposition> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Geoposition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemovalReason(Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemovalReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Geolocation::Geofencing {

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence impl_IGeofenceFactory<D>::Create(hstring_ref id, const Windows::Devices::Geolocation::IGeoshape & geoshape) const
{
    Windows::Devices::Geolocation::Geofencing::Geofence geofence { nullptr };
    check_hresult(static_cast<const IGeofenceFactory &>(static_cast<const D &>(*this))->abi_Create(get(id), get(geoshape), put(geofence)));
    return geofence;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence impl_IGeofenceFactory<D>::CreateWithMonitorStates(hstring_ref id, const Windows::Devices::Geolocation::IGeoshape & geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse) const
{
    Windows::Devices::Geolocation::Geofencing::Geofence geofence { nullptr };
    check_hresult(static_cast<const IGeofenceFactory &>(static_cast<const D &>(*this))->abi_CreateWithMonitorStates(get(id), get(geoshape), monitoredStates, singleUse, put(geofence)));
    return geofence;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence impl_IGeofenceFactory<D>::CreateWithMonitorStatesAndDwellTime(hstring_ref id, const Windows::Devices::Geolocation::IGeoshape & geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, const Windows::Foundation::TimeSpan & dwellTime) const
{
    Windows::Devices::Geolocation::Geofencing::Geofence geofence { nullptr };
    check_hresult(static_cast<const IGeofenceFactory &>(static_cast<const D &>(*this))->abi_CreateWithMonitorStatesAndDwellTime(get(id), get(geoshape), monitoredStates, singleUse, get(dwellTime), put(geofence)));
    return geofence;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence impl_IGeofenceFactory<D>::CreateWithMonitorStatesDwellTimeStartTimeAndDuration(hstring_ref id, const Windows::Devices::Geolocation::IGeoshape & geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, const Windows::Foundation::TimeSpan & dwellTime, const Windows::Foundation::DateTime & startTime, const Windows::Foundation::TimeSpan & duration) const
{
    Windows::Devices::Geolocation::Geofencing::Geofence geofence { nullptr };
    check_hresult(static_cast<const IGeofenceFactory &>(static_cast<const D &>(*this))->abi_CreateWithMonitorStatesDwellTimeStartTimeAndDuration(get(id), get(geoshape), monitoredStates, singleUse, get(dwellTime), get(startTime), get(duration), put(geofence)));
    return geofence;
}

template <typename D> Windows::Foundation::DateTime impl_IGeofence<D>::StartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IGeofence &>(static_cast<const D &>(*this))->get_StartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IGeofence<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IGeofence &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IGeofence<D>::DwellTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IGeofence &>(static_cast<const D &>(*this))->get_DwellTime(put(value)));
    return value;
}

template <typename D> hstring impl_IGeofence<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IGeofence &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates impl_IGeofence<D>::MonitoredStates() const
{
    Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates value {};
    check_hresult(static_cast<const IGeofence &>(static_cast<const D &>(*this))->get_MonitoredStates(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::IGeoshape impl_IGeofence<D>::Geoshape() const
{
    Windows::Devices::Geolocation::IGeoshape value;
    check_hresult(static_cast<const IGeofence &>(static_cast<const D &>(*this))->get_Geoshape(put(value)));
    return value;
}

template <typename D> bool impl_IGeofence<D>::SingleUse() const
{
    bool value {};
    check_hresult(static_cast<const IGeofence &>(static_cast<const D &>(*this))->get_SingleUse(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceState impl_IGeofenceStateChangeReport<D>::NewState() const
{
    Windows::Devices::Geolocation::Geofencing::GeofenceState value {};
    check_hresult(static_cast<const IGeofenceStateChangeReport &>(static_cast<const D &>(*this))->get_NewState(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence impl_IGeofenceStateChangeReport<D>::Geofence() const
{
    Windows::Devices::Geolocation::Geofencing::Geofence value { nullptr };
    check_hresult(static_cast<const IGeofenceStateChangeReport &>(static_cast<const D &>(*this))->get_Geofence(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geoposition impl_IGeofenceStateChangeReport<D>::Geoposition() const
{
    Windows::Devices::Geolocation::Geoposition value { nullptr };
    check_hresult(static_cast<const IGeofenceStateChangeReport &>(static_cast<const D &>(*this))->get_Geoposition(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason impl_IGeofenceStateChangeReport<D>::RemovalReason() const
{
    Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason value {};
    check_hresult(static_cast<const IGeofenceStateChangeReport &>(static_cast<const D &>(*this))->get_RemovalReason(&value));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceMonitor impl_IGeofenceMonitorStatics<D>::Current() const
{
    Windows::Devices::Geolocation::Geofencing::GeofenceMonitor value { nullptr };
    check_hresult(static_cast<const IGeofenceMonitorStatics &>(static_cast<const D &>(*this))->get_Current(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus impl_IGeofenceMonitor<D>::Status() const
{
    Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus value {};
    check_hresult(static_cast<const IGeofenceMonitor &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence> impl_IGeofenceMonitor<D>::Geofences() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence> value;
    check_hresult(static_cast<const IGeofenceMonitor &>(static_cast<const D &>(*this))->get_Geofences(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geoposition impl_IGeofenceMonitor<D>::LastKnownGeoposition() const
{
    Windows::Devices::Geolocation::Geoposition value { nullptr };
    check_hresult(static_cast<const IGeofenceMonitor &>(static_cast<const D &>(*this))->get_LastKnownGeoposition(put(value)));
    return value;
}

template <typename D> event_token impl_IGeofenceMonitor<D>::GeofenceStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable> & eventHandler) const
{
    event_token token {};
    check_hresult(static_cast<const IGeofenceMonitor &>(static_cast<const D &>(*this))->add_GeofenceStateChanged(get(eventHandler), &token));
    return token;
}

template <typename D> event_revoker<IGeofenceMonitor> impl_IGeofenceMonitor<D>::GeofenceStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable> & eventHandler) const
{
    return impl::make_event_revoker<D, IGeofenceMonitor>(this, &ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor::remove_GeofenceStateChanged, GeofenceStateChanged(eventHandler));
}

template <typename D> void impl_IGeofenceMonitor<D>::GeofenceStateChanged(event_token token) const
{
    check_hresult(static_cast<const IGeofenceMonitor &>(static_cast<const D &>(*this))->remove_GeofenceStateChanged(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> impl_IGeofenceMonitor<D>::ReadReports() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> value;
    check_hresult(static_cast<const IGeofenceMonitor &>(static_cast<const D &>(*this))->abi_ReadReports(put(value)));
    return value;
}

template <typename D> event_token impl_IGeofenceMonitor<D>::StatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable> & eventHandler) const
{
    event_token token {};
    check_hresult(static_cast<const IGeofenceMonitor &>(static_cast<const D &>(*this))->add_StatusChanged(get(eventHandler), &token));
    return token;
}

template <typename D> event_revoker<IGeofenceMonitor> impl_IGeofenceMonitor<D>::StatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable> & eventHandler) const
{
    return impl::make_event_revoker<D, IGeofenceMonitor>(this, &ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor::remove_StatusChanged, StatusChanged(eventHandler));
}

template <typename D> void impl_IGeofenceMonitor<D>::StatusChanged(event_token token) const
{
    check_hresult(static_cast<const IGeofenceMonitor &>(static_cast<const D &>(*this))->remove_StatusChanged(token));
}

inline Geofence::Geofence(hstring_ref id, const Windows::Devices::Geolocation::IGeoshape & geoshape) :
    Geofence(get_activation_factory<Geofence, IGeofenceFactory>().Create(id, geoshape))
{}

inline Geofence::Geofence(hstring_ref id, const Windows::Devices::Geolocation::IGeoshape & geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse) :
    Geofence(get_activation_factory<Geofence, IGeofenceFactory>().CreateWithMonitorStates(id, geoshape, monitoredStates, singleUse))
{}

inline Geofence::Geofence(hstring_ref id, const Windows::Devices::Geolocation::IGeoshape & geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, const Windows::Foundation::TimeSpan & dwellTime) :
    Geofence(get_activation_factory<Geofence, IGeofenceFactory>().CreateWithMonitorStatesAndDwellTime(id, geoshape, monitoredStates, singleUse, dwellTime))
{}

inline Geofence::Geofence(hstring_ref id, const Windows::Devices::Geolocation::IGeoshape & geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, const Windows::Foundation::TimeSpan & dwellTime, const Windows::Foundation::DateTime & startTime, const Windows::Foundation::TimeSpan & duration) :
    Geofence(get_activation_factory<Geofence, IGeofenceFactory>().CreateWithMonitorStatesDwellTimeStartTimeAndDuration(id, geoshape, monitoredStates, singleUse, dwellTime, startTime, duration))
{}

inline Windows::Devices::Geolocation::Geofencing::GeofenceMonitor GeofenceMonitor::Current()
{
    return get_activation_factory<GeofenceMonitor, IGeofenceMonitorStatics>().Current();
}

}

}
