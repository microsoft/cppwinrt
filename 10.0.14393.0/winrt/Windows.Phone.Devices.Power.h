// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Phone.Devices.Power.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::Devices::Power::IBattery> : produce_base<D, Windows::Phone::Devices::Power::IBattery>
{
    HRESULT __stdcall get_RemainingChargePercent(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemainingChargePercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemainingDischargeTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemainingDischargeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemainingChargePercentChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> changeHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RemainingChargePercentChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemainingChargePercentChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().RemainingChargePercentChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Devices::Power::IBatteryStatics> : produce_base<D, Windows::Phone::Devices::Power::IBatteryStatics>
{
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Phone::Devices::Power::IBattery> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDefault());
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

namespace Windows::Phone::Devices::Power {

template <typename D> Windows::Phone::Devices::Power::Battery impl_IBatteryStatics<D>::GetDefault() const
{
    Windows::Phone::Devices::Power::Battery result { nullptr };
    check_hresult(static_cast<const IBatteryStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(result)));
    return result;
}

template <typename D> int32_t impl_IBattery<D>::RemainingChargePercent() const
{
    int32_t value {};
    check_hresult(static_cast<const IBattery &>(static_cast<const D &>(*this))->get_RemainingChargePercent(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IBattery<D>::RemainingDischargeTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IBattery &>(static_cast<const D &>(*this))->get_RemainingDischargeTime(put(value)));
    return value;
}

template <typename D> event_token impl_IBattery<D>::RemainingChargePercentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const
{
    event_token token {};
    check_hresult(static_cast<const IBattery &>(static_cast<const D &>(*this))->add_RemainingChargePercentChanged(get(changeHandler), &token));
    return token;
}

template <typename D> event_revoker<IBattery> impl_IBattery<D>::RemainingChargePercentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const
{
    return impl::make_event_revoker<D, IBattery>(this, &ABI::Windows::Phone::Devices::Power::IBattery::remove_RemainingChargePercentChanged, RemainingChargePercentChanged(changeHandler));
}

template <typename D> void impl_IBattery<D>::RemainingChargePercentChanged(event_token token) const
{
    check_hresult(static_cast<const IBattery &>(static_cast<const D &>(*this))->remove_RemainingChargePercentChanged(token));
}

inline Windows::Phone::Devices::Power::Battery Battery::GetDefault()
{
    return get_activation_factory<Battery, IBatteryStatics>().GetDefault();
}

}

}
