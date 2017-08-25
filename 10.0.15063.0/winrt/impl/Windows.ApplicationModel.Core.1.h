// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.ApplicationModel.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core {

struct WINRT_EBO IAppListEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppListEntry>
{
    IAppListEntry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplication :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplication>
{
    ICoreApplication(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplication2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplication2>
{
    ICoreApplication2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplicationExit :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationExit>
{
    ICoreApplicationExit(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplicationUnhandledError :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationUnhandledError>
{
    ICoreApplicationUnhandledError(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplicationUseCount :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationUseCount>
{
    ICoreApplicationUseCount(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplicationView :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationView>
{
    ICoreApplicationView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplicationView2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationView2>
{
    ICoreApplicationView2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplicationView3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationView3>
{
    ICoreApplicationView3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplicationView5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationView5>
{
    ICoreApplicationView5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreApplicationViewTitleBar :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreApplicationViewTitleBar>
{
    ICoreApplicationViewTitleBar(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreImmersiveApplication :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreImmersiveApplication>
{
    ICoreImmersiveApplication(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreImmersiveApplication2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreImmersiveApplication2>
{
    ICoreImmersiveApplication2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreImmersiveApplication3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreImmersiveApplication3>
{
    ICoreImmersiveApplication3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameworkView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkView>
{
    IFrameworkView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameworkViewSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkViewSource>
{
    IFrameworkViewSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHostedViewClosingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHostedViewClosingEventArgs>
{
    IHostedViewClosingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUnhandledError :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnhandledError>
{
    IUnhandledError(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUnhandledErrorDetectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnhandledErrorDetectedEventArgs>
{
    IUnhandledErrorDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
