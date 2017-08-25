// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Text.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Provider {

struct WINRT_EBO IRawElementProviderSimple :
    Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple,
    impl::base<IRawElementProviderSimple, Windows::UI::Xaml::DependencyObject>,
    impl::require<IRawElementProviderSimple, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    IRawElementProviderSimple(std::nullptr_t) noexcept {}
};

}
