// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Power.Diagnostics.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Power::Diagnostics {

template <typename D>
struct WINRT_EBO impl_IBackgroundEnergyDiagnosticsStatics
{
    double DeviceSpecificConversionFactor() const;
    uint64_t ComputeTotalEnergyUsage() const;
    void ResetTotalEnergyUsage() const;
};

template <typename D>
struct WINRT_EBO impl_IForegroundEnergyDiagnosticsStatics
{
    double DeviceSpecificConversionFactor() const;
    uint64_t ComputeTotalEnergyUsage() const;
    void ResetTotalEnergyUsage() const;
};

struct IBackgroundEnergyDiagnosticsStatics :
    Windows::IInspectable,
    impl::consume<IBackgroundEnergyDiagnosticsStatics>
{
    IBackgroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundEnergyDiagnosticsStatics>(m_ptr); }
};

struct IForegroundEnergyDiagnosticsStatics :
    Windows::IInspectable,
    impl::consume<IForegroundEnergyDiagnosticsStatics>
{
    IForegroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IForegroundEnergyDiagnosticsStatics>(m_ptr); }
};

}

}
