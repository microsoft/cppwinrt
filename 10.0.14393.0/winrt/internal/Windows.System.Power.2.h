// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Power.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif


}

namespace Windows::System::Power {

template <typename D>
struct WINRT_EBO impl_IBackgroundEnergyManagerStatics
{
    uint32_t LowUsageLevel() const;
    uint32_t NearMaxAcceptableUsageLevel() const;
    uint32_t MaxAcceptableUsageLevel() const;
    uint32_t ExcessiveUsageLevel() const;
    uint32_t NearTerminationUsageLevel() const;
    uint32_t TerminationUsageLevel() const;
    uint32_t RecentEnergyUsage() const;
    uint32_t RecentEnergyUsageLevel() const;
    event_token RecentEnergyUsageIncreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using RecentEnergyUsageIncreased_revoker = event_revoker<IBackgroundEnergyManagerStatics>;
    RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void RecentEnergyUsageIncreased(event_token token) const;
    event_token RecentEnergyUsageReturnedToLow(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using RecentEnergyUsageReturnedToLow_revoker = event_revoker<IBackgroundEnergyManagerStatics>;
    RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void RecentEnergyUsageReturnedToLow(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IForegroundEnergyManagerStatics
{
    uint32_t LowUsageLevel() const;
    uint32_t NearMaxAcceptableUsageLevel() const;
    uint32_t MaxAcceptableUsageLevel() const;
    uint32_t ExcessiveUsageLevel() const;
    uint32_t RecentEnergyUsage() const;
    uint32_t RecentEnergyUsageLevel() const;
    event_token RecentEnergyUsageIncreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using RecentEnergyUsageIncreased_revoker = event_revoker<IForegroundEnergyManagerStatics>;
    RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void RecentEnergyUsageIncreased(event_token token) const;
    event_token RecentEnergyUsageReturnedToLow(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using RecentEnergyUsageReturnedToLow_revoker = event_revoker<IForegroundEnergyManagerStatics>;
    RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void RecentEnergyUsageReturnedToLow(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IPowerManagerStatics
{
    Windows::System::Power::EnergySaverStatus EnergySaverStatus() const;
    event_token EnergySaverStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using EnergySaverStatusChanged_revoker = event_revoker<IPowerManagerStatics>;
    EnergySaverStatusChanged_revoker EnergySaverStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void EnergySaverStatusChanged(event_token token) const;
    Windows::System::Power::BatteryStatus BatteryStatus() const;
    event_token BatteryStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using BatteryStatusChanged_revoker = event_revoker<IPowerManagerStatics>;
    BatteryStatusChanged_revoker BatteryStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void BatteryStatusChanged(event_token token) const;
    Windows::System::Power::PowerSupplyStatus PowerSupplyStatus() const;
    event_token PowerSupplyStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using PowerSupplyStatusChanged_revoker = event_revoker<IPowerManagerStatics>;
    PowerSupplyStatusChanged_revoker PowerSupplyStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void PowerSupplyStatusChanged(event_token token) const;
    int32_t RemainingChargePercent() const;
    event_token RemainingChargePercentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using RemainingChargePercentChanged_revoker = event_revoker<IPowerManagerStatics>;
    RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void RemainingChargePercentChanged(event_token token) const;
    Windows::Foundation::TimeSpan RemainingDischargeTime() const;
    event_token RemainingDischargeTimeChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using RemainingDischargeTimeChanged_revoker = event_revoker<IPowerManagerStatics>;
    RemainingDischargeTimeChanged_revoker RemainingDischargeTimeChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void RemainingDischargeTimeChanged(event_token token) const;
};

struct IBackgroundEnergyManagerStatics :
    Windows::IInspectable,
    impl::consume<IBackgroundEnergyManagerStatics>
{
    IBackgroundEnergyManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundEnergyManagerStatics>(m_ptr); }
};

struct IForegroundEnergyManagerStatics :
    Windows::IInspectable,
    impl::consume<IForegroundEnergyManagerStatics>
{
    IForegroundEnergyManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IForegroundEnergyManagerStatics>(m_ptr); }
};

struct IPowerManagerStatics :
    Windows::IInspectable,
    impl::consume<IPowerManagerStatics>
{
    IPowerManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPowerManagerStatics>(m_ptr); }
};

}

}
