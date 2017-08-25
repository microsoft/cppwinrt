// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Power.Diagnostics.2.h"
#include "winrt/Windows.System.Power.h"

namespace winrt::impl {

template <typename D> double consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics<D>::DeviceSpecificConversionFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics)->get_DeviceSpecificConversionFactor(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics<D>::ComputeTotalEnergyUsage() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics)->ComputeTotalEnergyUsage(&value));
    return value;
}

template <typename D> void consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics<D>::ResetTotalEnergyUsage() const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics)->ResetTotalEnergyUsage());
}

template <typename D> double consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics<D>::DeviceSpecificConversionFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics)->get_DeviceSpecificConversionFactor(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics<D>::ComputeTotalEnergyUsage() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics)->ComputeTotalEnergyUsage(&value));
    return value;
}

template <typename D> void consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics<D>::ResetTotalEnergyUsage() const
{
    check_hresult(WINRT_SHIM(Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics)->ResetTotalEnergyUsage());
}

template <typename D>
struct produce<D, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics> : produce_base<D, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>
{
    HRESULT __stdcall get_DeviceSpecificConversionFactor(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceSpecificConversionFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeTotalEnergyUsage(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ComputeTotalEnergyUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetTotalEnergyUsage() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetTotalEnergyUsage();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics> : produce_base<D, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>
{
    HRESULT __stdcall get_DeviceSpecificConversionFactor(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceSpecificConversionFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeTotalEnergyUsage(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ComputeTotalEnergyUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetTotalEnergyUsage() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetTotalEnergyUsage();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics {

inline double BackgroundEnergyDiagnostics::DeviceSpecificConversionFactor()
{
    return get_activation_factory<BackgroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>().DeviceSpecificConversionFactor();
}

inline uint64_t BackgroundEnergyDiagnostics::ComputeTotalEnergyUsage()
{
    return get_activation_factory<BackgroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>().ComputeTotalEnergyUsage();
}

inline void BackgroundEnergyDiagnostics::ResetTotalEnergyUsage()
{
    get_activation_factory<BackgroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>().ResetTotalEnergyUsage();
}

inline double ForegroundEnergyDiagnostics::DeviceSpecificConversionFactor()
{
    return get_activation_factory<ForegroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>().DeviceSpecificConversionFactor();
}

inline uint64_t ForegroundEnergyDiagnostics::ComputeTotalEnergyUsage()
{
    return get_activation_factory<ForegroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>().ComputeTotalEnergyUsage();
}

inline void ForegroundEnergyDiagnostics::ResetTotalEnergyUsage()
{
    get_activation_factory<ForegroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>().ResetTotalEnergyUsage();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics> {};

template<> struct hash<winrt::Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics> {};

template<> struct hash<winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics> {};

template<> struct hash<winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics> {};

}

WINRT_WARNING_POP
