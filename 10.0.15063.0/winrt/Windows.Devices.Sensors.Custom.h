// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Sensors.Custom.2.h"
#include "winrt/Windows.Devices.Sensors.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Sensors::Custom::CustomSensorReading consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::Custom::CustomSensorReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::MinimumReportInterval() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReportInterval(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReportInterval() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->get_ReportInterval(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::Custom::ICustomSensor> consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::Custom::ICustomSensor>(this, &abi_t<Windows::Devices::Sensors::Custom::ICustomSensor>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_Custom_ICustomSensorReading<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_Custom_ICustomSensorReading<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorReading)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Custom::CustomSensorReading consume_Windows_Devices_Sensors_Custom_ICustomSensorReadingChangedEventArgs<D>::Reading() const
{
    Windows::Devices::Sensors::Custom::CustomSensorReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_Custom_ICustomSensorStatics<D>::GetDeviceSelector(GUID const& interfaceId) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorStatics)->GetDeviceSelector(get_abi(interfaceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> consume_Windows_Devices_Sensors_Custom_ICustomSensorStatics<D>::FromIdAsync(param::hstring const& sensorId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorStatics)->FromIdAsync(get_abi(sensorId), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensor> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensor>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinimumReportInterval());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInterval(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReportInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reading());
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
    HRESULT __stdcall GetDeviceSelector(abi_t<GUID> interfaceId, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<GUID const*>(&interfaceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING sensorId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&sensorId)));
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

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom {

inline hstring CustomSensor::GetDeviceSelector(GUID const& interfaceId)
{
    return get_activation_factory<CustomSensor, Windows::Devices::Sensors::Custom::ICustomSensorStatics>().GetDeviceSelector(interfaceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> CustomSensor::FromIdAsync(param::hstring const& sensorId)
{
    return get_activation_factory<CustomSensor, Windows::Devices::Sensors::Custom::ICustomSensorStatics>().FromIdAsync(sensorId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Custom::ICustomSensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Custom::ICustomSensorStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Custom::CustomSensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Custom::CustomSensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Custom::CustomSensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Custom::CustomSensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> {};

}

WINRT_WARNING_POP
