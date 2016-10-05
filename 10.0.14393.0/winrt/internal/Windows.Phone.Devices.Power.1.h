// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Phone.Devices.Power.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::Devices::Power {

struct __declspec(uuid("972adbdd-6720-4702-a476-b9d38a0070e3")) __declspec(novtable) IBattery : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RemainingChargePercent(int32_t * value) = 0;
    virtual HRESULT __stdcall get_RemainingDischargeTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall add_RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::IInspectable> * changeHandler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RemainingChargePercentChanged(event_token token) = 0;
};

struct __declspec(uuid("faf5bc70-6369-11e1-b86c-0800200c9a66")) __declspec(novtable) IBatteryStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Phone::Devices::Power::IBattery ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Phone::Devices::Power::Battery> { using default_interface = Windows::Phone::Devices::Power::IBattery; };

}

namespace Windows::Phone::Devices::Power {

template <typename T> struct impl_IBattery;
template <typename T> struct impl_IBatteryStatics;

}

namespace impl {

template <> struct traits<Windows::Phone::Devices::Power::IBattery>
{
    using abi = ABI::Windows::Phone::Devices::Power::IBattery;
    template <typename D> using consume = Windows::Phone::Devices::Power::impl_IBattery<D>;
};

template <> struct traits<Windows::Phone::Devices::Power::IBatteryStatics>
{
    using abi = ABI::Windows::Phone::Devices::Power::IBatteryStatics;
    template <typename D> using consume = Windows::Phone::Devices::Power::impl_IBatteryStatics<D>;
};

template <> struct traits<Windows::Phone::Devices::Power::Battery>
{
    using abi = ABI::Windows::Phone::Devices::Power::Battery;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Devices.Power.Battery"; }
};

}

}
