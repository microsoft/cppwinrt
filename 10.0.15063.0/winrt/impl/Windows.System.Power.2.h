// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Power.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Power {

struct BackgroundEnergyManager
{
    BackgroundEnergyManager() = delete;
    static uint32_t LowUsageLevel();
    static uint32_t NearMaxAcceptableUsageLevel();
    static uint32_t MaxAcceptableUsageLevel();
    static uint32_t ExcessiveUsageLevel();
    static uint32_t NearTerminationUsageLevel();
    static uint32_t TerminationUsageLevel();
    static uint32_t RecentEnergyUsage();
    static uint32_t RecentEnergyUsageLevel();
    static event_token RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RecentEnergyUsageIncreased_revoker = factory_event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics>;
    static RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void RecentEnergyUsageIncreased(event_token const& token);
    static event_token RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RecentEnergyUsageReturnedToLow_revoker = factory_event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics>;
    static RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void RecentEnergyUsageReturnedToLow(event_token const& token);
};

struct ForegroundEnergyManager
{
    ForegroundEnergyManager() = delete;
    static uint32_t LowUsageLevel();
    static uint32_t NearMaxAcceptableUsageLevel();
    static uint32_t MaxAcceptableUsageLevel();
    static uint32_t ExcessiveUsageLevel();
    static uint32_t RecentEnergyUsage();
    static uint32_t RecentEnergyUsageLevel();
    static event_token RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RecentEnergyUsageIncreased_revoker = factory_event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics>;
    static RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void RecentEnergyUsageIncreased(event_token const& token);
    static event_token RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RecentEnergyUsageReturnedToLow_revoker = factory_event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics>;
    static RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void RecentEnergyUsageReturnedToLow(event_token const& token);
};

struct PowerManager
{
    PowerManager() = delete;
    static Windows::System::Power::EnergySaverStatus EnergySaverStatus();
    static event_token EnergySaverStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using EnergySaverStatusChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static EnergySaverStatusChanged_revoker EnergySaverStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void EnergySaverStatusChanged(event_token const& token);
    static Windows::System::Power::BatteryStatus BatteryStatus();
    static event_token BatteryStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using BatteryStatusChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static BatteryStatusChanged_revoker BatteryStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void BatteryStatusChanged(event_token const& token);
    static Windows::System::Power::PowerSupplyStatus PowerSupplyStatus();
    static event_token PowerSupplyStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using PowerSupplyStatusChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static PowerSupplyStatusChanged_revoker PowerSupplyStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void PowerSupplyStatusChanged(event_token const& token);
    static int32_t RemainingChargePercent();
    static event_token RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RemainingChargePercentChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void RemainingChargePercentChanged(event_token const& token);
    static Windows::Foundation::TimeSpan RemainingDischargeTime();
    static event_token RemainingDischargeTimeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RemainingDischargeTimeChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static RemainingDischargeTimeChanged_revoker RemainingDischargeTimeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void RemainingDischargeTimeChanged(event_token const& token);
};

}
