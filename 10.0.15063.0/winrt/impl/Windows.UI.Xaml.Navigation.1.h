// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.0.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.0.h"
#include "winrt/impl/Windows.UI.Xaml.Navigation.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Navigation {

struct WINRT_EBO INavigatingCancelEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigatingCancelEventArgs>
{
    INavigatingCancelEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INavigatingCancelEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigatingCancelEventArgs2>
{
    INavigatingCancelEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INavigationEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigationEventArgs>
{
    INavigationEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INavigationEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigationEventArgs2>
{
    INavigationEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INavigationFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INavigationFailedEventArgs>
{
    INavigationFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPageStackEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPageStackEntry>
{
    IPageStackEntry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPageStackEntryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPageStackEntryFactory>
{
    IPageStackEntryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPageStackEntryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPageStackEntryStatics>
{
    IPageStackEntryStatics(std::nullptr_t = nullptr) noexcept {}
};

}
