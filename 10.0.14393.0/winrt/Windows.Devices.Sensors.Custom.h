// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Sensors.Custom.3.h"
#include "Windows.Devices.Sensors.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensor> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensor>
{
    HRESULT __stdcall abi_GetCurrentReading(abi_arg_out<Windows::Devices::Sensors::Custom::ICustomSensorReading> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinimumReportInterval());
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

    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReadingChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ReadingChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ReadingChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensorReading> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensorReading>
{
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

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
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
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(abi_arg_out<Windows::Devices::Sensors::Custom::ICustomSensorReading> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Reading());
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
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensorStatics> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensorStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(GUID interfaceId, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeviceSelector(interfaceId));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> sensorId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&sensorId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Sensors::Custom {

template <typename D> hstring impl_ICustomSensorStatics<D>::GetDeviceSelector(GUID interfaceId) const
{
    hstring result;
    check_hresult(static_cast<const ICustomSensorStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(interfaceId, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> impl_ICustomSensorStatics<D>::FromIdAsync(hstring_ref sensorId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> result;
    check_hresult(static_cast<const ICustomSensorStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(sensorId), put(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::Custom::CustomSensorReading impl_ICustomSensor<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::Custom::CustomSensorReading value { nullptr };
    check_hresult(static_cast<const ICustomSensor &>(static_cast<const D &>(*this))->abi_GetCurrentReading(put(value)));
    return value;
}

template <typename D> uint32_t impl_ICustomSensor<D>::MinimumReportInterval() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICustomSensor &>(static_cast<const D &>(*this))->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void impl_ICustomSensor<D>::ReportInterval(uint32_t value) const
{
    check_hresult(static_cast<const ICustomSensor &>(static_cast<const D &>(*this))->put_ReportInterval(value));
}

template <typename D> uint32_t impl_ICustomSensor<D>::ReportInterval() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICustomSensor &>(static_cast<const D &>(*this))->get_ReportInterval(&value));
    return value;
}

template <typename D> hstring impl_ICustomSensor<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const ICustomSensor &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> event_token impl_ICustomSensor<D>::ReadingChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ICustomSensor &>(static_cast<const D &>(*this))->add_ReadingChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICustomSensor> impl_ICustomSensor<D>::ReadingChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICustomSensor>(this, &ABI::Windows::Devices::Sensors::Custom::ICustomSensor::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void impl_ICustomSensor<D>::ReadingChanged(event_token token) const
{
    check_hresult(static_cast<const ICustomSensor &>(static_cast<const D &>(*this))->remove_ReadingChanged(token));
}

template <typename D> Windows::Foundation::DateTime impl_ICustomSensorReading<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const ICustomSensorReading &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_ICustomSensorReading<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const ICustomSensorReading &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Custom::CustomSensorReading impl_ICustomSensorReadingChangedEventArgs<D>::Reading() const
{
    Windows::Devices::Sensors::Custom::CustomSensorReading value { nullptr };
    check_hresult(static_cast<const ICustomSensorReadingChangedEventArgs &>(static_cast<const D &>(*this))->get_Reading(put(value)));
    return value;
}

inline hstring CustomSensor::GetDeviceSelector(GUID interfaceId)
{
    return get_activation_factory<CustomSensor, ICustomSensorStatics>().GetDeviceSelector(interfaceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> CustomSensor::FromIdAsync(hstring_ref sensorId)
{
    return get_activation_factory<CustomSensor, ICustomSensorStatics>().FromIdAsync(sensorId);
}

}

}
