// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.WebUI.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::WebUI::Core {

struct WINRT_EBO IWebUICommandBar :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBar>
{
    IWebUICommandBar(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarBitmapIcon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarBitmapIcon>,
    impl::require<IWebUICommandBarBitmapIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
{
    IWebUICommandBarBitmapIcon(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarBitmapIconFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarBitmapIconFactory>
{
    IWebUICommandBarBitmapIconFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarConfirmationButton :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarConfirmationButton>,
    impl::require<IWebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
{
    IWebUICommandBarConfirmationButton(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarElement>
{
    IWebUICommandBarElement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarIcon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarIcon>
{
    IWebUICommandBarIcon(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarIconButton :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarIconButton>,
    impl::require<IWebUICommandBarIconButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
{
    IWebUICommandBarIconButton(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarItemInvokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarItemInvokedEventArgs>
{
    IWebUICommandBarItemInvokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarSizeChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarSizeChangedEventArgs>
{
    IWebUICommandBarSizeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarStatics>
{
    IWebUICommandBarStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarSymbolIcon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarSymbolIcon>,
    impl::require<IWebUICommandBarSymbolIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
{
    IWebUICommandBarSymbolIcon(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUICommandBarSymbolIconFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUICommandBarSymbolIconFactory>
{
    IWebUICommandBarSymbolIconFactory(std::nullptr_t = nullptr) noexcept {}
};

}
