// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Core.0.h"
#include "winrt/impl/Windows.UI.Shell.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Shell {

struct WINRT_EBO IAdaptiveCard :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveCard>
{
    IAdaptiveCard(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveCardBuilderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveCardBuilderStatics>
{
    IAdaptiveCardBuilderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITaskbarManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITaskbarManager>
{
    ITaskbarManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITaskbarManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITaskbarManagerStatics>
{
    ITaskbarManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
