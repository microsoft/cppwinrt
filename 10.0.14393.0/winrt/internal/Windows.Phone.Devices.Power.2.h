// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.Devices.Power.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif


}

namespace Windows::Phone::Devices::Power {

template <typename D>
struct WINRT_EBO impl_IBattery
{
    int32_t RemainingChargePercent() const;
    Windows::Foundation::TimeSpan RemainingDischargeTime() const;
    event_token RemainingChargePercentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const;
    using RemainingChargePercentChanged_revoker = event_revoker<IBattery>;
    RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const;
    void RemainingChargePercentChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IBatteryStatics
{
    Windows::Phone::Devices::Power::Battery GetDefault() const;
};

struct IBattery :
    Windows::IInspectable,
    impl::consume<IBattery>
{
    IBattery(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBattery>(m_ptr); }
};

struct IBatteryStatics :
    Windows::IInspectable,
    impl::consume<IBatteryStatics>
{
    IBatteryStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBatteryStatics>(m_ptr); }
};

}

}
