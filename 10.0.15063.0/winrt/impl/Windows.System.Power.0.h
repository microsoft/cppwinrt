// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Power {

enum class BatteryStatus
{
    NotPresent = 0,
    Discharging = 1,
    Idle = 2,
    Charging = 3,
};

enum class EnergySaverStatus
{
    Disabled = 0,
    Off = 1,
    On = 2,
};

enum class PowerSupplyStatus
{
    NotPresent = 0,
    Inadequate = 1,
    Adequate = 2,
};

struct IBackgroundEnergyManagerStatics;
struct IForegroundEnergyManagerStatics;
struct IPowerManagerStatics;
struct BackgroundEnergyManager;
struct ForegroundEnergyManager;
struct PowerManager;

}

namespace winrt::impl {

template <> struct category<Windows::System::Power::IBackgroundEnergyManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Power::IForegroundEnergyManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Power::IPowerManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Power::BackgroundEnergyManager>{ using type = class_category; };
template <> struct category<Windows::System::Power::ForegroundEnergyManager>{ using type = class_category; };
template <> struct category<Windows::System::Power::PowerManager>{ using type = class_category; };
template <> struct category<Windows::System::Power::BatteryStatus>{ using type = enum_category; };
template <> struct category<Windows::System::Power::EnergySaverStatus>{ using type = enum_category; };
template <> struct category<Windows::System::Power::PowerSupplyStatus>{ using type = enum_category; };
template <> struct name<Windows::System::Power::IBackgroundEnergyManagerStatics>{ static constexpr auto & value{ L"Windows.System.Power.IBackgroundEnergyManagerStatics" }; };
template <> struct name<Windows::System::Power::IForegroundEnergyManagerStatics>{ static constexpr auto & value{ L"Windows.System.Power.IForegroundEnergyManagerStatics" }; };
template <> struct name<Windows::System::Power::IPowerManagerStatics>{ static constexpr auto & value{ L"Windows.System.Power.IPowerManagerStatics" }; };
template <> struct name<Windows::System::Power::BackgroundEnergyManager>{ static constexpr auto & value{ L"Windows.System.Power.BackgroundEnergyManager" }; };
template <> struct name<Windows::System::Power::ForegroundEnergyManager>{ static constexpr auto & value{ L"Windows.System.Power.ForegroundEnergyManager" }; };
template <> struct name<Windows::System::Power::PowerManager>{ static constexpr auto & value{ L"Windows.System.Power.PowerManager" }; };
template <> struct name<Windows::System::Power::BatteryStatus>{ static constexpr auto & value{ L"Windows.System.Power.BatteryStatus" }; };
template <> struct name<Windows::System::Power::EnergySaverStatus>{ static constexpr auto & value{ L"Windows.System.Power.EnergySaverStatus" }; };
template <> struct name<Windows::System::Power::PowerSupplyStatus>{ static constexpr auto & value{ L"Windows.System.Power.PowerSupplyStatus" }; };
template <> struct guid<Windows::System::Power::IBackgroundEnergyManagerStatics>{ static constexpr GUID value{ 0xB3161D95,0x1180,0x4376,{ 0x96,0xE1,0x40,0x95,0x56,0x81,0x47,0xCE } }; };
template <> struct guid<Windows::System::Power::IForegroundEnergyManagerStatics>{ static constexpr GUID value{ 0x9FF86872,0xE677,0x4814,{ 0x9A,0x20,0x53,0x37,0xCA,0x73,0x2B,0x98 } }; };
template <> struct guid<Windows::System::Power::IPowerManagerStatics>{ static constexpr GUID value{ 0x1394825D,0x62CE,0x4364,{ 0x98,0xD5,0xAA,0x28,0xC7,0xFB,0xD1,0x5B } }; };

template <typename D>
struct consume_Windows_System_Power_IBackgroundEnergyManagerStatics
{
    uint32_t LowUsageLevel() const;
    uint32_t NearMaxAcceptableUsageLevel() const;
    uint32_t MaxAcceptableUsageLevel() const;
    uint32_t ExcessiveUsageLevel() const;
    uint32_t NearTerminationUsageLevel() const;
    uint32_t TerminationUsageLevel() const;
    uint32_t RecentEnergyUsage() const;
    uint32_t RecentEnergyUsageLevel() const;
    event_token RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecentEnergyUsageIncreased_revoker = event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics>;
    RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RecentEnergyUsageIncreased(event_token const& token) const;
    event_token RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecentEnergyUsageReturnedToLow_revoker = event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics>;
    RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RecentEnergyUsageReturnedToLow(event_token const& token) const;
};
template <> struct consume<Windows::System::Power::IBackgroundEnergyManagerStatics> { template <typename D> using type = consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>; };

template <typename D>
struct consume_Windows_System_Power_IForegroundEnergyManagerStatics
{
    uint32_t LowUsageLevel() const;
    uint32_t NearMaxAcceptableUsageLevel() const;
    uint32_t MaxAcceptableUsageLevel() const;
    uint32_t ExcessiveUsageLevel() const;
    uint32_t RecentEnergyUsage() const;
    uint32_t RecentEnergyUsageLevel() const;
    event_token RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecentEnergyUsageIncreased_revoker = event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics>;
    RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RecentEnergyUsageIncreased(event_token const& token) const;
    event_token RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecentEnergyUsageReturnedToLow_revoker = event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics>;
    RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RecentEnergyUsageReturnedToLow(event_token const& token) const;
};
template <> struct consume<Windows::System::Power::IForegroundEnergyManagerStatics> { template <typename D> using type = consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>; };

template <typename D>
struct consume_Windows_System_Power_IPowerManagerStatics
{
    Windows::System::Power::EnergySaverStatus EnergySaverStatus() const;
    event_token EnergySaverStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using EnergySaverStatusChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    EnergySaverStatusChanged_revoker EnergySaverStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void EnergySaverStatusChanged(event_token const& token) const;
    Windows::System::Power::BatteryStatus BatteryStatus() const;
    event_token BatteryStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using BatteryStatusChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    BatteryStatusChanged_revoker BatteryStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void BatteryStatusChanged(event_token const& token) const;
    Windows::System::Power::PowerSupplyStatus PowerSupplyStatus() const;
    event_token PowerSupplyStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using PowerSupplyStatusChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    PowerSupplyStatusChanged_revoker PowerSupplyStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void PowerSupplyStatusChanged(event_token const& token) const;
    int32_t RemainingChargePercent() const;
    event_token RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RemainingChargePercentChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RemainingChargePercentChanged(event_token const& token) const;
    Windows::Foundation::TimeSpan RemainingDischargeTime() const;
    event_token RemainingDischargeTimeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RemainingDischargeTimeChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    RemainingDischargeTimeChanged_revoker RemainingDischargeTimeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RemainingDischargeTimeChanged(event_token const& token) const;
};
template <> struct consume<Windows::System::Power::IPowerManagerStatics> { template <typename D> using type = consume_Windows_System_Power_IPowerManagerStatics<D>; };

template <> struct abi<Windows::System::Power::IBackgroundEnergyManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LowUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_NearMaxAcceptableUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxAcceptableUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ExcessiveUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_NearTerminationUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TerminationUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_RecentEnergyUsage(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_RecentEnergyUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_RecentEnergyUsageIncreased(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RecentEnergyUsageIncreased(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RecentEnergyUsageReturnedToLow(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RecentEnergyUsageReturnedToLow(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::System::Power::IForegroundEnergyManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LowUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_NearMaxAcceptableUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxAcceptableUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ExcessiveUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_RecentEnergyUsage(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_RecentEnergyUsageLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_RecentEnergyUsageIncreased(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RecentEnergyUsageIncreased(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RecentEnergyUsageReturnedToLow(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RecentEnergyUsageReturnedToLow(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::System::Power::IPowerManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnergySaverStatus(abi_t<Windows::System::Power::EnergySaverStatus>* value) = 0;
    virtual HRESULT __stdcall add_EnergySaverStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnergySaverStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_BatteryStatus(abi_t<Windows::System::Power::BatteryStatus>* value) = 0;
    virtual HRESULT __stdcall add_BatteryStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BatteryStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_PowerSupplyStatus(abi_t<Windows::System::Power::PowerSupplyStatus>* value) = 0;
    virtual HRESULT __stdcall add_PowerSupplyStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PowerSupplyStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_RemainingChargePercent(int32_t* value) = 0;
    virtual HRESULT __stdcall add_RemainingChargePercentChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RemainingChargePercentChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_RemainingDischargeTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall add_RemainingDischargeTimeChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RemainingDischargeTimeChanged(abi_t<event_token> token) = 0;
};};

}
