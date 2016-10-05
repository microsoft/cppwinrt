// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.Power.3.h"
#include "internal/Windows.Devices.Power.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Power::IBattery> : produce_base<D, Windows::Devices::Power::IBattery>
{
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

    HRESULT __stdcall abi_GetReport(abi_arg_out<Windows::Devices::Power::IBatteryReport> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReportUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ReportUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReportUpdated(event_token token) noexcept override
    {
        try
        {
            this->shim().ReportUpdated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Power::IBatteryReport> : produce_base<D, Windows::Devices::Power::IBatteryReport>
{
    HRESULT __stdcall get_ChargeRateInMilliwatts(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChargeRateInMilliwatts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesignCapacityInMilliwattHours(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesignCapacityInMilliwattHours());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullChargeCapacityInMilliwattHours(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FullChargeCapacityInMilliwattHours());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemainingCapacityInMilliwattHours(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemainingCapacityInMilliwattHours());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::System::Power::BatteryStatus * value) noexcept override
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
struct produce<D, Windows::Devices::Power::IBatteryStatics> : produce_base<D, Windows::Devices::Power::IBatteryStatics>
{
    HRESULT __stdcall get_AggregateBattery(abi_arg_out<Windows::Devices::Power::IBattery> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AggregateBattery());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeviceSelector());
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

namespace Windows::Devices::Power {

template <typename D> hstring impl_IBattery<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IBattery &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Devices::Power::BatteryReport impl_IBattery<D>::GetReport() const
{
    Windows::Devices::Power::BatteryReport result { nullptr };
    check_hresult(static_cast<const IBattery &>(static_cast<const D &>(*this))->abi_GetReport(put(result)));
    return result;
}

template <typename D> event_token impl_IBattery<D>::ReportUpdated(const Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IBattery &>(static_cast<const D &>(*this))->add_ReportUpdated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IBattery> impl_IBattery<D>::ReportUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IBattery>(this, &ABI::Windows::Devices::Power::IBattery::remove_ReportUpdated, ReportUpdated(handler));
}

template <typename D> void impl_IBattery<D>::ReportUpdated(event_token token) const
{
    check_hresult(static_cast<const IBattery &>(static_cast<const D &>(*this))->remove_ReportUpdated(token));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IBatteryReport<D>::ChargeRateInMilliwatts() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IBatteryReport &>(static_cast<const D &>(*this))->get_ChargeRateInMilliwatts(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IBatteryReport<D>::DesignCapacityInMilliwattHours() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IBatteryReport &>(static_cast<const D &>(*this))->get_DesignCapacityInMilliwattHours(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IBatteryReport<D>::FullChargeCapacityInMilliwattHours() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IBatteryReport &>(static_cast<const D &>(*this))->get_FullChargeCapacityInMilliwattHours(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IBatteryReport<D>::RemainingCapacityInMilliwattHours() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IBatteryReport &>(static_cast<const D &>(*this))->get_RemainingCapacityInMilliwattHours(put(value)));
    return value;
}

template <typename D> Windows::System::Power::BatteryStatus impl_IBatteryReport<D>::Status() const
{
    Windows::System::Power::BatteryStatus value {};
    check_hresult(static_cast<const IBatteryReport &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::Power::Battery impl_IBatteryStatics<D>::AggregateBattery() const
{
    Windows::Devices::Power::Battery result { nullptr };
    check_hresult(static_cast<const IBatteryStatics &>(static_cast<const D &>(*this))->get_AggregateBattery(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> impl_IBatteryStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> result;
    check_hresult(static_cast<const IBatteryStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(result)));
    return result;
}

template <typename D> hstring impl_IBatteryStatics<D>::GetDeviceSelector() const
{
    hstring result;
    check_hresult(static_cast<const IBatteryStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(result)));
    return result;
}

inline Windows::Devices::Power::Battery Battery::AggregateBattery()
{
    return get_activation_factory<Battery, IBatteryStatics>().AggregateBattery();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> Battery::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<Battery, IBatteryStatics>().FromIdAsync(deviceId);
}

inline hstring Battery::GetDeviceSelector()
{
    return get_activation_factory<Battery, IBatteryStatics>().GetDeviceSelector();
}

}

}
