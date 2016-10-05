// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.Power.3.h"
#include "Windows.System.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Power::IBackgroundEnergyManagerStatics> : produce_base<D, Windows::System::Power::IBackgroundEnergyManagerStatics>
{
    HRESULT __stdcall get_LowUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LowUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NearMaxAcceptableUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NearMaxAcceptableUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAcceptableUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxAcceptableUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExcessiveUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExcessiveUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NearTerminationUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NearTerminationUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TerminationUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TerminationUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecentEnergyUsage(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecentEnergyUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecentEnergyUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecentEnergyUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecentEnergyUsageIncreased(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RecentEnergyUsageIncreased(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecentEnergyUsageIncreased(event_token token) noexcept override
    {
        try
        {
            this->shim().RecentEnergyUsageIncreased(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecentEnergyUsageReturnedToLow(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RecentEnergyUsageReturnedToLow(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecentEnergyUsageReturnedToLow(event_token token) noexcept override
    {
        try
        {
            this->shim().RecentEnergyUsageReturnedToLow(token);
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
    HRESULT __stdcall get_LowUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LowUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NearMaxAcceptableUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NearMaxAcceptableUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAcceptableUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxAcceptableUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExcessiveUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExcessiveUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecentEnergyUsage(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecentEnergyUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecentEnergyUsageLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecentEnergyUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecentEnergyUsageIncreased(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RecentEnergyUsageIncreased(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecentEnergyUsageIncreased(event_token token) noexcept override
    {
        try
        {
            this->shim().RecentEnergyUsageIncreased(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecentEnergyUsageReturnedToLow(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RecentEnergyUsageReturnedToLow(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecentEnergyUsageReturnedToLow(event_token token) noexcept override
    {
        try
        {
            this->shim().RecentEnergyUsageReturnedToLow(token);
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
    HRESULT __stdcall get_EnergySaverStatus(Windows::System::Power::EnergySaverStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnergySaverStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnergySaverStatusChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnergySaverStatusChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnergySaverStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().EnergySaverStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BatteryStatus(Windows::System::Power::BatteryStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BatteryStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BatteryStatusChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BatteryStatusChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BatteryStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().BatteryStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerSupplyStatus(Windows::System::Power::PowerSupplyStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PowerSupplyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PowerSupplyStatusChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PowerSupplyStatusChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PowerSupplyStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PowerSupplyStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall add_RemainingChargePercentChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RemainingChargePercentChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
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

    HRESULT __stdcall add_RemainingDischargeTimeChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RemainingDischargeTimeChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemainingDischargeTimeChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().RemainingDischargeTimeChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::Power {

template <typename D> Windows::System::Power::EnergySaverStatus impl_IPowerManagerStatics<D>::EnergySaverStatus() const
{
    Windows::System::Power::EnergySaverStatus value {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->get_EnergySaverStatus(&value));
    return value;
}

template <typename D> event_token impl_IPowerManagerStatics<D>::EnergySaverStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->add_EnergySaverStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPowerManagerStatics> impl_IPowerManagerStatics<D>::EnergySaverStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPowerManagerStatics>(this, &ABI::Windows::System::Power::IPowerManagerStatics::remove_EnergySaverStatusChanged, EnergySaverStatusChanged(handler));
}

template <typename D> void impl_IPowerManagerStatics<D>::EnergySaverStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->remove_EnergySaverStatusChanged(token));
}

template <typename D> Windows::System::Power::BatteryStatus impl_IPowerManagerStatics<D>::BatteryStatus() const
{
    Windows::System::Power::BatteryStatus value {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->get_BatteryStatus(&value));
    return value;
}

template <typename D> event_token impl_IPowerManagerStatics<D>::BatteryStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->add_BatteryStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPowerManagerStatics> impl_IPowerManagerStatics<D>::BatteryStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPowerManagerStatics>(this, &ABI::Windows::System::Power::IPowerManagerStatics::remove_BatteryStatusChanged, BatteryStatusChanged(handler));
}

template <typename D> void impl_IPowerManagerStatics<D>::BatteryStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->remove_BatteryStatusChanged(token));
}

template <typename D> Windows::System::Power::PowerSupplyStatus impl_IPowerManagerStatics<D>::PowerSupplyStatus() const
{
    Windows::System::Power::PowerSupplyStatus value {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->get_PowerSupplyStatus(&value));
    return value;
}

template <typename D> event_token impl_IPowerManagerStatics<D>::PowerSupplyStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->add_PowerSupplyStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPowerManagerStatics> impl_IPowerManagerStatics<D>::PowerSupplyStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPowerManagerStatics>(this, &ABI::Windows::System::Power::IPowerManagerStatics::remove_PowerSupplyStatusChanged, PowerSupplyStatusChanged(handler));
}

template <typename D> void impl_IPowerManagerStatics<D>::PowerSupplyStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->remove_PowerSupplyStatusChanged(token));
}

template <typename D> int32_t impl_IPowerManagerStatics<D>::RemainingChargePercent() const
{
    int32_t value {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->get_RemainingChargePercent(&value));
    return value;
}

template <typename D> event_token impl_IPowerManagerStatics<D>::RemainingChargePercentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->add_RemainingChargePercentChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPowerManagerStatics> impl_IPowerManagerStatics<D>::RemainingChargePercentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPowerManagerStatics>(this, &ABI::Windows::System::Power::IPowerManagerStatics::remove_RemainingChargePercentChanged, RemainingChargePercentChanged(handler));
}

template <typename D> void impl_IPowerManagerStatics<D>::RemainingChargePercentChanged(event_token token) const
{
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->remove_RemainingChargePercentChanged(token));
}

template <typename D> Windows::Foundation::TimeSpan impl_IPowerManagerStatics<D>::RemainingDischargeTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->get_RemainingDischargeTime(put(value)));
    return value;
}

template <typename D> event_token impl_IPowerManagerStatics<D>::RemainingDischargeTimeChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->add_RemainingDischargeTimeChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPowerManagerStatics> impl_IPowerManagerStatics<D>::RemainingDischargeTimeChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPowerManagerStatics>(this, &ABI::Windows::System::Power::IPowerManagerStatics::remove_RemainingDischargeTimeChanged, RemainingDischargeTimeChanged(handler));
}

template <typename D> void impl_IPowerManagerStatics<D>::RemainingDischargeTimeChanged(event_token token) const
{
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->remove_RemainingDischargeTimeChanged(token));
}

template <typename D> uint32_t impl_IBackgroundEnergyManagerStatics<D>::LowUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_LowUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IBackgroundEnergyManagerStatics<D>::NearMaxAcceptableUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_NearMaxAcceptableUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IBackgroundEnergyManagerStatics<D>::MaxAcceptableUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_MaxAcceptableUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IBackgroundEnergyManagerStatics<D>::ExcessiveUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_ExcessiveUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IBackgroundEnergyManagerStatics<D>::NearTerminationUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_NearTerminationUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IBackgroundEnergyManagerStatics<D>::TerminationUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_TerminationUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsage() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_RecentEnergyUsage(&value));
    return value;
}

template <typename D> uint32_t impl_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_RecentEnergyUsageLevel(&value));
    return value;
}

template <typename D> event_token impl_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->add_RecentEnergyUsageIncreased(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IBackgroundEnergyManagerStatics> impl_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IBackgroundEnergyManagerStatics>(this, &ABI::Windows::System::Power::IBackgroundEnergyManagerStatics::remove_RecentEnergyUsageIncreased, RecentEnergyUsageIncreased(handler));
}

template <typename D> void impl_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(event_token token) const
{
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->remove_RecentEnergyUsageIncreased(token));
}

template <typename D> event_token impl_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->add_RecentEnergyUsageReturnedToLow(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IBackgroundEnergyManagerStatics> impl_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IBackgroundEnergyManagerStatics>(this, &ABI::Windows::System::Power::IBackgroundEnergyManagerStatics::remove_RecentEnergyUsageReturnedToLow, RecentEnergyUsageReturnedToLow(handler));
}

template <typename D> void impl_IBackgroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(event_token token) const
{
    check_hresult(static_cast<const IBackgroundEnergyManagerStatics &>(static_cast<const D &>(*this))->remove_RecentEnergyUsageReturnedToLow(token));
}

template <typename D> uint32_t impl_IForegroundEnergyManagerStatics<D>::LowUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_LowUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IForegroundEnergyManagerStatics<D>::NearMaxAcceptableUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_NearMaxAcceptableUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IForegroundEnergyManagerStatics<D>::MaxAcceptableUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_MaxAcceptableUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IForegroundEnergyManagerStatics<D>::ExcessiveUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_ExcessiveUsageLevel(&value));
    return value;
}

template <typename D> uint32_t impl_IForegroundEnergyManagerStatics<D>::RecentEnergyUsage() const
{
    uint32_t value {};
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_RecentEnergyUsage(&value));
    return value;
}

template <typename D> uint32_t impl_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->get_RecentEnergyUsageLevel(&value));
    return value;
}

template <typename D> event_token impl_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->add_RecentEnergyUsageIncreased(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IForegroundEnergyManagerStatics> impl_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IForegroundEnergyManagerStatics>(this, &ABI::Windows::System::Power::IForegroundEnergyManagerStatics::remove_RecentEnergyUsageIncreased, RecentEnergyUsageIncreased(handler));
}

template <typename D> void impl_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageIncreased(event_token token) const
{
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->remove_RecentEnergyUsageIncreased(token));
}

template <typename D> event_token impl_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->add_RecentEnergyUsageReturnedToLow(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IForegroundEnergyManagerStatics> impl_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IForegroundEnergyManagerStatics>(this, &ABI::Windows::System::Power::IForegroundEnergyManagerStatics::remove_RecentEnergyUsageReturnedToLow, RecentEnergyUsageReturnedToLow(handler));
}

template <typename D> void impl_IForegroundEnergyManagerStatics<D>::RecentEnergyUsageReturnedToLow(event_token token) const
{
    check_hresult(static_cast<const IForegroundEnergyManagerStatics &>(static_cast<const D &>(*this))->remove_RecentEnergyUsageReturnedToLow(token));
}

inline uint32_t BackgroundEnergyManager::LowUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().LowUsageLevel();
}

inline uint32_t BackgroundEnergyManager::NearMaxAcceptableUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().NearMaxAcceptableUsageLevel();
}

inline uint32_t BackgroundEnergyManager::MaxAcceptableUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().MaxAcceptableUsageLevel();
}

inline uint32_t BackgroundEnergyManager::ExcessiveUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().ExcessiveUsageLevel();
}

inline uint32_t BackgroundEnergyManager::NearTerminationUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().NearTerminationUsageLevel();
}

inline uint32_t BackgroundEnergyManager::TerminationUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().TerminationUsageLevel();
}

inline uint32_t BackgroundEnergyManager::RecentEnergyUsage()
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().RecentEnergyUsage();
}

inline uint32_t BackgroundEnergyManager::RecentEnergyUsageLevel()
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().RecentEnergyUsageLevel();
}

inline event_token BackgroundEnergyManager::RecentEnergyUsageIncreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().RecentEnergyUsageIncreased(handler);
}

inline factory_event_revoker<IBackgroundEnergyManagerStatics> BackgroundEnergyManager::RecentEnergyUsageIncreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IBackgroundEnergyManagerStatics::remove_RecentEnergyUsageIncreased, factory.RecentEnergyUsageIncreased(handler) };
}

inline void BackgroundEnergyManager::RecentEnergyUsageIncreased(event_token token)
{
    get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().RecentEnergyUsageIncreased(token);
}

inline event_token BackgroundEnergyManager::RecentEnergyUsageReturnedToLow(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().RecentEnergyUsageReturnedToLow(handler);
}

inline factory_event_revoker<IBackgroundEnergyManagerStatics> BackgroundEnergyManager::RecentEnergyUsageReturnedToLow(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IBackgroundEnergyManagerStatics::remove_RecentEnergyUsageReturnedToLow, factory.RecentEnergyUsageReturnedToLow(handler) };
}

inline void BackgroundEnergyManager::RecentEnergyUsageReturnedToLow(event_token token)
{
    get_activation_factory<BackgroundEnergyManager, IBackgroundEnergyManagerStatics>().RecentEnergyUsageReturnedToLow(token);
}

inline uint32_t ForegroundEnergyManager::LowUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().LowUsageLevel();
}

inline uint32_t ForegroundEnergyManager::NearMaxAcceptableUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().NearMaxAcceptableUsageLevel();
}

inline uint32_t ForegroundEnergyManager::MaxAcceptableUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().MaxAcceptableUsageLevel();
}

inline uint32_t ForegroundEnergyManager::ExcessiveUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().ExcessiveUsageLevel();
}

inline uint32_t ForegroundEnergyManager::RecentEnergyUsage()
{
    return get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().RecentEnergyUsage();
}

inline uint32_t ForegroundEnergyManager::RecentEnergyUsageLevel()
{
    return get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().RecentEnergyUsageLevel();
}

inline event_token ForegroundEnergyManager::RecentEnergyUsageIncreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().RecentEnergyUsageIncreased(handler);
}

inline factory_event_revoker<IForegroundEnergyManagerStatics> ForegroundEnergyManager::RecentEnergyUsageIncreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IForegroundEnergyManagerStatics::remove_RecentEnergyUsageIncreased, factory.RecentEnergyUsageIncreased(handler) };
}

inline void ForegroundEnergyManager::RecentEnergyUsageIncreased(event_token token)
{
    get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().RecentEnergyUsageIncreased(token);
}

inline event_token ForegroundEnergyManager::RecentEnergyUsageReturnedToLow(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().RecentEnergyUsageReturnedToLow(handler);
}

inline factory_event_revoker<IForegroundEnergyManagerStatics> ForegroundEnergyManager::RecentEnergyUsageReturnedToLow(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IForegroundEnergyManagerStatics::remove_RecentEnergyUsageReturnedToLow, factory.RecentEnergyUsageReturnedToLow(handler) };
}

inline void ForegroundEnergyManager::RecentEnergyUsageReturnedToLow(event_token token)
{
    get_activation_factory<ForegroundEnergyManager, IForegroundEnergyManagerStatics>().RecentEnergyUsageReturnedToLow(token);
}

inline Windows::System::Power::EnergySaverStatus PowerManager::EnergySaverStatus()
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().EnergySaverStatus();
}

inline event_token PowerManager::EnergySaverStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().EnergySaverStatusChanged(handler);
}

inline factory_event_revoker<IPowerManagerStatics> PowerManager::EnergySaverStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<PowerManager, IPowerManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IPowerManagerStatics::remove_EnergySaverStatusChanged, factory.EnergySaverStatusChanged(handler) };
}

inline void PowerManager::EnergySaverStatusChanged(event_token token)
{
    get_activation_factory<PowerManager, IPowerManagerStatics>().EnergySaverStatusChanged(token);
}

inline Windows::System::Power::BatteryStatus PowerManager::BatteryStatus()
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().BatteryStatus();
}

inline event_token PowerManager::BatteryStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().BatteryStatusChanged(handler);
}

inline factory_event_revoker<IPowerManagerStatics> PowerManager::BatteryStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<PowerManager, IPowerManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IPowerManagerStatics::remove_BatteryStatusChanged, factory.BatteryStatusChanged(handler) };
}

inline void PowerManager::BatteryStatusChanged(event_token token)
{
    get_activation_factory<PowerManager, IPowerManagerStatics>().BatteryStatusChanged(token);
}

inline Windows::System::Power::PowerSupplyStatus PowerManager::PowerSupplyStatus()
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().PowerSupplyStatus();
}

inline event_token PowerManager::PowerSupplyStatusChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().PowerSupplyStatusChanged(handler);
}

inline factory_event_revoker<IPowerManagerStatics> PowerManager::PowerSupplyStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<PowerManager, IPowerManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IPowerManagerStatics::remove_PowerSupplyStatusChanged, factory.PowerSupplyStatusChanged(handler) };
}

inline void PowerManager::PowerSupplyStatusChanged(event_token token)
{
    get_activation_factory<PowerManager, IPowerManagerStatics>().PowerSupplyStatusChanged(token);
}

inline int32_t PowerManager::RemainingChargePercent()
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().RemainingChargePercent();
}

inline event_token PowerManager::RemainingChargePercentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().RemainingChargePercentChanged(handler);
}

inline factory_event_revoker<IPowerManagerStatics> PowerManager::RemainingChargePercentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<PowerManager, IPowerManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IPowerManagerStatics::remove_RemainingChargePercentChanged, factory.RemainingChargePercentChanged(handler) };
}

inline void PowerManager::RemainingChargePercentChanged(event_token token)
{
    get_activation_factory<PowerManager, IPowerManagerStatics>().RemainingChargePercentChanged(token);
}

inline Windows::Foundation::TimeSpan PowerManager::RemainingDischargeTime()
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().RemainingDischargeTime();
}

inline event_token PowerManager::RemainingDischargeTimeChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().RemainingDischargeTimeChanged(handler);
}

inline factory_event_revoker<IPowerManagerStatics> PowerManager::RemainingDischargeTimeChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<PowerManager, IPowerManagerStatics>();
    return { factory, &ABI::Windows::System::Power::IPowerManagerStatics::remove_RemainingDischargeTimeChanged, factory.RemainingDischargeTimeChanged(handler) };
}

inline void PowerManager::RemainingDischargeTimeChanged(event_token token)
{
    get_activation_factory<PowerManager, IPowerManagerStatics>().RemainingDischargeTimeChanged(token);
}

}

}
