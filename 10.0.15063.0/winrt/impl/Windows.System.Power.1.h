// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Power.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Power {

struct WINRT_EBO IBackgroundEnergyManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundEnergyManagerStatics>
{
    IBackgroundEnergyManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IForegroundEnergyManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForegroundEnergyManagerStatics>
{
    IForegroundEnergyManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPowerManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPowerManagerStatics>
{
    IPowerManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
