// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Phone.Devices.Power.2.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Phone_Devices_Power_IBattery<D>::RemainingChargePercent() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Devices::Power::IBattery)->get_RemainingChargePercent(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Phone_Devices_Power_IBattery<D>::RemainingDischargeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Devices::Power::IBattery)->get_RemainingDischargeTime(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Phone_Devices_Power_IBattery<D>::RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Phone::Devices::Power::IBattery)->add_RemainingChargePercentChanged(get_abi(changeHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Phone::Devices::Power::IBattery> consume_Windows_Phone_Devices_Power_IBattery<D>::RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    return impl::make_event_revoker<D, Windows::Phone::Devices::Power::IBattery>(this, &abi_t<Windows::Phone::Devices::Power::IBattery>::remove_RemainingChargePercentChanged, RemainingChargePercentChanged(changeHandler));
}

template <typename D> void consume_Windows_Phone_Devices_Power_IBattery<D>::RemainingChargePercentChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Devices::Power::IBattery)->remove_RemainingChargePercentChanged(get_abi(token)));
}

template <typename D> Windows::Phone::Devices::Power::Battery consume_Windows_Phone_Devices_Power_IBatteryStatics<D>::GetDefault() const
{
    Windows::Phone::Devices::Power::Battery result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Devices::Power::IBatteryStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Phone::Devices::Power::IBattery> : produce_base<D, Windows::Phone::Devices::Power::IBattery>
{
    HRESULT __stdcall get_RemainingChargePercent(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemainingChargePercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemainingDischargeTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemainingDischargeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemainingChargePercentChanged(::IUnknown* changeHandler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemainingChargePercentChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemainingChargePercentChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemainingChargePercentChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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

WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Power {

inline Windows::Phone::Devices::Power::Battery Battery::GetDefault()
{
    return get_activation_factory<Battery, Windows::Phone::Devices::Power::IBatteryStatics>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::Devices::Power::IBattery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Devices::Power::IBattery> {};

template<> struct hash<winrt::Windows::Phone::Devices::Power::IBatteryStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Devices::Power::IBatteryStatics> {};

template<> struct hash<winrt::Windows::Phone::Devices::Power::Battery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Devices::Power::Battery> {};

}

WINRT_WARNING_POP
