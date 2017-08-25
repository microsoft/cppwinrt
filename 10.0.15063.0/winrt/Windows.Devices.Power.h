// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Power.2.h"
#include "winrt/impl/Windows.Devices.Power.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Power_IBattery<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBattery)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Power::BatteryReport consume_Windows_Devices_Power_IBattery<D>::GetReport() const
{
    Windows::Devices::Power::BatteryReport result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBattery)->GetReport(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Power_IBattery<D>::ReportUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBattery)->add_ReportUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Power::IBattery> consume_Windows_Devices_Power_IBattery<D>::ReportUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Power::IBattery>(this, &abi_t<Windows::Devices::Power::IBattery>::remove_ReportUpdated, ReportUpdated(handler));
}

template <typename D> void consume_Windows_Devices_Power_IBattery<D>::ReportUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBattery)->remove_ReportUpdated(get_abi(token)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Devices_Power_IBatteryReport<D>::ChargeRateInMilliwatts() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBatteryReport)->get_ChargeRateInMilliwatts(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Devices_Power_IBatteryReport<D>::DesignCapacityInMilliwattHours() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBatteryReport)->get_DesignCapacityInMilliwattHours(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Devices_Power_IBatteryReport<D>::FullChargeCapacityInMilliwattHours() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBatteryReport)->get_FullChargeCapacityInMilliwattHours(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Devices_Power_IBatteryReport<D>::RemainingCapacityInMilliwattHours() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBatteryReport)->get_RemainingCapacityInMilliwattHours(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Power::BatteryStatus consume_Windows_Devices_Power_IBatteryReport<D>::Status() const
{
    Windows::System::Power::BatteryStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBatteryReport)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Power::Battery consume_Windows_Devices_Power_IBatteryStatics<D>::AggregateBattery() const
{
    Windows::Devices::Power::Battery result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBatteryStatics)->get_AggregateBattery(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> consume_Windows_Devices_Power_IBatteryStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBatteryStatics)->FromIdAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Power_IBatteryStatics<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Power::IBatteryStatics)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Power::IBattery> : produce_base<D, Windows::Devices::Power::IBattery>
{
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

    HRESULT __stdcall GetReport(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReportUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReportUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReportUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportUpdated(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall get_ChargeRateInMilliwatts(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChargeRateInMilliwatts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesignCapacityInMilliwattHours(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesignCapacityInMilliwattHours());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullChargeCapacityInMilliwattHours(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullChargeCapacityInMilliwattHours());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemainingCapacityInMilliwattHours(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemainingCapacityInMilliwattHours());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::System::Power::BatteryStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
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
    HRESULT __stdcall get_AggregateBattery(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AggregateBattery());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
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

WINRT_EXPORT namespace winrt::Windows::Devices::Power {

inline Windows::Devices::Power::Battery Battery::AggregateBattery()
{
    return get_activation_factory<Battery, Windows::Devices::Power::IBatteryStatics>().AggregateBattery();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> Battery::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Battery, Windows::Devices::Power::IBatteryStatics>().FromIdAsync(deviceId);
}

inline hstring Battery::GetDeviceSelector()
{
    return get_activation_factory<Battery, Windows::Devices::Power::IBatteryStatics>().GetDeviceSelector();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Power::IBattery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Power::IBattery> {};

template<> struct hash<winrt::Windows::Devices::Power::IBatteryReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Power::IBatteryReport> {};

template<> struct hash<winrt::Windows::Devices::Power::IBatteryStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Power::IBatteryStatics> {};

template<> struct hash<winrt::Windows::Devices::Power::Battery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Power::Battery> {};

template<> struct hash<winrt::Windows::Devices::Power::BatteryReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Power::BatteryReport> {};

}

WINRT_WARNING_POP
