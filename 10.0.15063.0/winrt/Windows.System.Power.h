// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Power.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> uint32_t consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::LowUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->get_LowUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::NearMaxAcceptableUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->get_NearMaxAcceptableUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::MaxAcceptableUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->get_MaxAcceptableUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::ExcessiveUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->get_ExcessiveUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::NearTerminationUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->get_NearTerminationUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::TerminationUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->get_TerminationUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsage() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->get_RecentEnergyUsage(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->get_RecentEnergyUsageLevel(&value));
    return value;
}

template <typename D> event_token consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->add_RecentEnergyUsageIncreased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics> consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IBackgroundEnergyManagerStatics>(this, &abi_t<Windows::System::Power::IBackgroundEnergyManagerStatics>::remove_RecentEnergyUsageIncreased, RecentEnergyUsageIncreased(handler));
}

template <typename D> void consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->remove_RecentEnergyUsageIncreased(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->add_RecentEnergyUsageReturnedToLow(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics> consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IBackgroundEnergyManagerStatics>(this, &abi_t<Windows::System::Power::IBackgroundEnergyManagerStatics>::remove_RecentEnergyUsageReturnedToLow, RecentEnergyUsageReturnedToLow(handler));
}

template <typename D> void consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IBackgroundEnergyManagerStatics)->remove_RecentEnergyUsageReturnedToLow(get_abi(token)));
}

template <typename D> uint32_t consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::LowUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->get_LowUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::NearMaxAcceptableUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->get_NearMaxAcceptableUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::MaxAcceptableUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->get_MaxAcceptableUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::ExcessiveUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->get_ExcessiveUsageLevel(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::RecentEnergyUsage() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->get_RecentEnergyUsage(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->get_RecentEnergyUsageLevel(&value));
    return value;
}

template <typename D> event_token consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->add_RecentEnergyUsageIncreased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics> consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IForegroundEnergyManagerStatics>(this, &abi_t<Windows::System::Power::IForegroundEnergyManagerStatics>::remove_RecentEnergyUsageIncreased, RecentEnergyUsageIncreased(handler));
}

template <typename D> void consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->remove_RecentEnergyUsageIncreased(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->add_RecentEnergyUsageReturnedToLow(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics> consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IForegroundEnergyManagerStatics>(this, &abi_t<Windows::System::Power::IForegroundEnergyManagerStatics>::remove_RecentEnergyUsageReturnedToLow, RecentEnergyUsageReturnedToLow(handler));
}

template <typename D> void consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IForegroundEnergyManagerStatics)->remove_RecentEnergyUsageReturnedToLow(get_abi(token)));
}

template <typename D> Windows::System::Power::EnergySaverStatus consume_Windows_System_Power_IPowerManagerStatics<D>::EnergySaverStatus() const
{
    Windows::System::Power::EnergySaverStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->get_EnergySaverStatus(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_Power_IPowerManagerStatics<D>::EnergySaverStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->add_EnergySaverStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IPowerManagerStatics> consume_Windows_System_Power_IPowerManagerStatics<D>::EnergySaverStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IPowerManagerStatics>(this, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_EnergySaverStatusChanged, EnergySaverStatusChanged(handler));
}

template <typename D> void consume_Windows_System_Power_IPowerManagerStatics<D>::EnergySaverStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->remove_EnergySaverStatusChanged(get_abi(token)));
}

template <typename D> Windows::System::Power::BatteryStatus consume_Windows_System_Power_IPowerManagerStatics<D>::BatteryStatus() const
{
    Windows::System::Power::BatteryStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->get_BatteryStatus(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_Power_IPowerManagerStatics<D>::BatteryStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->add_BatteryStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IPowerManagerStatics> consume_Windows_System_Power_IPowerManagerStatics<D>::BatteryStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IPowerManagerStatics>(this, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_BatteryStatusChanged, BatteryStatusChanged(handler));
}

template <typename D> void consume_Windows_System_Power_IPowerManagerStatics<D>::BatteryStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->remove_BatteryStatusChanged(get_abi(token)));
}

template <typename D> Windows::System::Power::PowerSupplyStatus consume_Windows_System_Power_IPowerManagerStatics<D>::PowerSupplyStatus() const
{
    Windows::System::Power::PowerSupplyStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->get_PowerSupplyStatus(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_Power_IPowerManagerStatics<D>::PowerSupplyStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->add_PowerSupplyStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IPowerManagerStatics> consume_Windows_System_Power_IPowerManagerStatics<D>::PowerSupplyStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IPowerManagerStatics>(this, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_PowerSupplyStatusChanged, PowerSupplyStatusChanged(handler));
}

template <typename D> void consume_Windows_System_Power_IPowerManagerStatics<D>::PowerSupplyStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->remove_PowerSupplyStatusChanged(get_abi(token)));
}

template <typename D> int32_t consume_Windows_System_Power_IPowerManagerStatics<D>::RemainingChargePercent() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->get_RemainingChargePercent(&value));
    return value;
}

template <typename D> event_token consume_Windows_System_Power_IPowerManagerStatics<D>::RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->add_RemainingChargePercentChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IPowerManagerStatics> consume_Windows_System_Power_IPowerManagerStatics<D>::RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IPowerManagerStatics>(this, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_RemainingChargePercentChanged, RemainingChargePercentChanged(handler));
}

template <typename D> void consume_Windows_System_Power_IPowerManagerStatics<D>::RemainingChargePercentChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->remove_RemainingChargePercentChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_System_Power_IPowerManagerStatics<D>::RemainingDischargeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->get_RemainingDischargeTime(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_Power_IPowerManagerStatics<D>::RemainingDischargeTimeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->add_RemainingDischargeTimeChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Power::IPowerManagerStatics> consume_Windows_System_Power_IPowerManagerStatics<D>::RemainingDischargeTimeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Power::IPowerManagerStatics>(this, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_RemainingDischargeTimeChanged, RemainingDischargeTimeChanged(handler));
}

template <typename D> void consume_Windows_System_Power_IPowerManagerStatics<D>::RemainingDischargeTimeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::IPowerManagerStatics)->remove_RemainingDischargeTimeChanged(get_abi(token)));
}

template <typename D>
struct produce<D, Windows::System::Power::IBackgroundEnergyManagerStatics> : produce_base<D, Windows::System::Power::IBackgroundEnergyManagerStatics>
{
    HRESULT __stdcall get_LowUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LowUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NearMaxAcceptableUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NearMaxAcceptableUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAcceptableUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxAcceptableUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExcessiveUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExcessiveUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NearTerminationUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NearTerminationUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TerminationUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TerminationUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecentEnergyUsage(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecentEnergyUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecentEnergyUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecentEnergyUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecentEnergyUsageIncreased(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RecentEnergyUsageIncreased(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecentEnergyUsageIncreased(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecentEnergyUsageIncreased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecentEnergyUsageReturnedToLow(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RecentEnergyUsageReturnedToLow(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecentEnergyUsageReturnedToLow(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecentEnergyUsageReturnedToLow(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Power::IForegroundEnergyManagerStatics> : produce_base<D, Windows::System::Power::IForegroundEnergyManagerStatics>
{
    HRESULT __stdcall get_LowUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LowUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NearMaxAcceptableUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NearMaxAcceptableUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAcceptableUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxAcceptableUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExcessiveUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExcessiveUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecentEnergyUsage(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecentEnergyUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecentEnergyUsageLevel(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecentEnergyUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecentEnergyUsageIncreased(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RecentEnergyUsageIncreased(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecentEnergyUsageIncreased(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecentEnergyUsageIncreased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecentEnergyUsageReturnedToLow(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RecentEnergyUsageReturnedToLow(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecentEnergyUsageReturnedToLow(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecentEnergyUsageReturnedToLow(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Power::IPowerManagerStatics> : produce_base<D, Windows::System::Power::IPowerManagerStatics>
{
    HRESULT __stdcall get_EnergySaverStatus(abi_t<Windows::System::Power::EnergySaverStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnergySaverStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnergySaverStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnergySaverStatusChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnergySaverStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnergySaverStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BatteryStatus(abi_t<Windows::System::Power::BatteryStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BatteryStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BatteryStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BatteryStatusChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BatteryStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BatteryStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerSupplyStatus(abi_t<Windows::System::Power::PowerSupplyStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerSupplyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PowerSupplyStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PowerSupplyStatusChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PowerSupplyStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PowerSupplyStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall add_RemainingChargePercentChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemainingChargePercentChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
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

    HRESULT __stdcall add_RemainingDischargeTimeChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemainingDischargeTimeChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemainingDischargeTimeChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemainingDischargeTimeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Power {

inline uint32_t BackgroundEnergyManager::LowUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().LowUsageLevel();
}

inline uint32_t BackgroundEnergyManager::NearMaxAcceptableUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().NearMaxAcceptableUsageLevel();
}

inline uint32_t BackgroundEnergyManager::MaxAcceptableUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().MaxAcceptableUsageLevel();
}

inline uint32_t BackgroundEnergyManager::ExcessiveUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().ExcessiveUsageLevel();
}

inline uint32_t BackgroundEnergyManager::NearTerminationUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().NearTerminationUsageLevel();
}

inline uint32_t BackgroundEnergyManager::TerminationUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().TerminationUsageLevel();
}

inline uint32_t BackgroundEnergyManager::RecentEnergyUsage()
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().RecentEnergyUsage();
}

inline uint32_t BackgroundEnergyManager::RecentEnergyUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().RecentEnergyUsageLevel();
}

inline event_token BackgroundEnergyManager::RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().RecentEnergyUsageIncreased(handler);
}

inline factory_event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics> BackgroundEnergyManager::RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IBackgroundEnergyManagerStatics>::remove_RecentEnergyUsageIncreased, factory.RecentEnergyUsageIncreased(handler) };
}

inline void BackgroundEnergyManager::RecentEnergyUsageIncreased(event_token const& token)
{
    get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().RecentEnergyUsageIncreased(token);
}

inline event_token BackgroundEnergyManager::RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().RecentEnergyUsageReturnedToLow(handler);
}

inline factory_event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics> BackgroundEnergyManager::RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IBackgroundEnergyManagerStatics>::remove_RecentEnergyUsageReturnedToLow, factory.RecentEnergyUsageReturnedToLow(handler) };
}

inline void BackgroundEnergyManager::RecentEnergyUsageReturnedToLow(event_token const& token)
{
    get_activation_factory<BackgroundEnergyManager, Windows::System::Power::IBackgroundEnergyManagerStatics>().RecentEnergyUsageReturnedToLow(token);
}

inline uint32_t ForegroundEnergyManager::LowUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().LowUsageLevel();
}

inline uint32_t ForegroundEnergyManager::NearMaxAcceptableUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().NearMaxAcceptableUsageLevel();
}

inline uint32_t ForegroundEnergyManager::MaxAcceptableUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().MaxAcceptableUsageLevel();
}

inline uint32_t ForegroundEnergyManager::ExcessiveUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().ExcessiveUsageLevel();
}

inline uint32_t ForegroundEnergyManager::RecentEnergyUsage()
{
    return get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().RecentEnergyUsage();
}

inline uint32_t ForegroundEnergyManager::RecentEnergyUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().RecentEnergyUsageLevel();
}

inline event_token ForegroundEnergyManager::RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().RecentEnergyUsageIncreased(handler);
}

inline factory_event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics> ForegroundEnergyManager::RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IForegroundEnergyManagerStatics>::remove_RecentEnergyUsageIncreased, factory.RecentEnergyUsageIncreased(handler) };
}

inline void ForegroundEnergyManager::RecentEnergyUsageIncreased(event_token const& token)
{
    get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().RecentEnergyUsageIncreased(token);
}

inline event_token ForegroundEnergyManager::RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().RecentEnergyUsageReturnedToLow(handler);
}

inline factory_event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics> ForegroundEnergyManager::RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IForegroundEnergyManagerStatics>::remove_RecentEnergyUsageReturnedToLow, factory.RecentEnergyUsageReturnedToLow(handler) };
}

inline void ForegroundEnergyManager::RecentEnergyUsageReturnedToLow(event_token const& token)
{
    get_activation_factory<ForegroundEnergyManager, Windows::System::Power::IForegroundEnergyManagerStatics>().RecentEnergyUsageReturnedToLow(token);
}

inline Windows::System::Power::EnergySaverStatus PowerManager::EnergySaverStatus()
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().EnergySaverStatus();
}

inline event_token PowerManager::EnergySaverStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().EnergySaverStatusChanged(handler);
}

inline factory_event_revoker<Windows::System::Power::IPowerManagerStatics> PowerManager::EnergySaverStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_EnergySaverStatusChanged, factory.EnergySaverStatusChanged(handler) };
}

inline void PowerManager::EnergySaverStatusChanged(event_token const& token)
{
    get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().EnergySaverStatusChanged(token);
}

inline Windows::System::Power::BatteryStatus PowerManager::BatteryStatus()
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().BatteryStatus();
}

inline event_token PowerManager::BatteryStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().BatteryStatusChanged(handler);
}

inline factory_event_revoker<Windows::System::Power::IPowerManagerStatics> PowerManager::BatteryStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_BatteryStatusChanged, factory.BatteryStatusChanged(handler) };
}

inline void PowerManager::BatteryStatusChanged(event_token const& token)
{
    get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().BatteryStatusChanged(token);
}

inline Windows::System::Power::PowerSupplyStatus PowerManager::PowerSupplyStatus()
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().PowerSupplyStatus();
}

inline event_token PowerManager::PowerSupplyStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().PowerSupplyStatusChanged(handler);
}

inline factory_event_revoker<Windows::System::Power::IPowerManagerStatics> PowerManager::PowerSupplyStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_PowerSupplyStatusChanged, factory.PowerSupplyStatusChanged(handler) };
}

inline void PowerManager::PowerSupplyStatusChanged(event_token const& token)
{
    get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().PowerSupplyStatusChanged(token);
}

inline int32_t PowerManager::RemainingChargePercent()
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().RemainingChargePercent();
}

inline event_token PowerManager::RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().RemainingChargePercentChanged(handler);
}

inline factory_event_revoker<Windows::System::Power::IPowerManagerStatics> PowerManager::RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_RemainingChargePercentChanged, factory.RemainingChargePercentChanged(handler) };
}

inline void PowerManager::RemainingChargePercentChanged(event_token const& token)
{
    get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().RemainingChargePercentChanged(token);
}

inline Windows::Foundation::TimeSpan PowerManager::RemainingDischargeTime()
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().RemainingDischargeTime();
}

inline event_token PowerManager::RemainingDischargeTimeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().RemainingDischargeTimeChanged(handler);
}

inline factory_event_revoker<Windows::System::Power::IPowerManagerStatics> PowerManager::RemainingDischargeTimeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>();
    return { factory, &abi_t<Windows::System::Power::IPowerManagerStatics>::remove_RemainingDischargeTimeChanged, factory.RemainingDischargeTimeChanged(handler) };
}

inline void PowerManager::RemainingDischargeTimeChanged(event_token const& token)
{
    get_activation_factory<PowerManager, Windows::System::Power::IPowerManagerStatics>().RemainingDischargeTimeChanged(token);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Power::IBackgroundEnergyManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::IBackgroundEnergyManagerStatics> {};

template<> struct hash<winrt::Windows::System::Power::IForegroundEnergyManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::IForegroundEnergyManagerStatics> {};

template<> struct hash<winrt::Windows::System::Power::IPowerManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::IPowerManagerStatics> {};

template<> struct hash<winrt::Windows::System::Power::BackgroundEnergyManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::BackgroundEnergyManager> {};

template<> struct hash<winrt::Windows::System::Power::ForegroundEnergyManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::ForegroundEnergyManager> {};

template<> struct hash<winrt::Windows::System::Power::PowerManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::PowerManager> {};

}

WINRT_WARNING_POP
