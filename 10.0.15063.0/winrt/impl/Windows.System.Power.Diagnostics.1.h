// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Power.Diagnostics.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics {

struct WINRT_EBO IBackgroundEnergyDiagnosticsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundEnergyDiagnosticsStatics>
{
    IBackgroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IForegroundEnergyDiagnosticsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForegroundEnergyDiagnosticsStatics>
{
    IForegroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
};

}
