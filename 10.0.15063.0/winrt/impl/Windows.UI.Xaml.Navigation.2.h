// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.1.h"
#include "winrt/impl/Windows.UI.Xaml.Navigation.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Navigation {

struct LoadCompletedEventHandler : Windows::Foundation::IUnknown
{
    LoadCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> LoadCompletedEventHandler(L lambda);
    template <typename F> LoadCompletedEventHandler(F* function);
    template <typename O, typename M> LoadCompletedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
};

struct NavigatedEventHandler : Windows::Foundation::IUnknown
{
    NavigatedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> NavigatedEventHandler(L lambda);
    template <typename F> NavigatedEventHandler(F* function);
    template <typename O, typename M> NavigatedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
};

struct NavigatingCancelEventHandler : Windows::Foundation::IUnknown
{
    NavigatingCancelEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> NavigatingCancelEventHandler(L lambda);
    template <typename F> NavigatingCancelEventHandler(F* function);
    template <typename O, typename M> NavigatingCancelEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const& e) const;
};

struct NavigationFailedEventHandler : Windows::Foundation::IUnknown
{
    NavigationFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> NavigationFailedEventHandler(L lambda);
    template <typename F> NavigationFailedEventHandler(F* function);
    template <typename O, typename M> NavigationFailedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const& e) const;
};

struct NavigationStoppedEventHandler : Windows::Foundation::IUnknown
{
    NavigationStoppedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> NavigationStoppedEventHandler(L lambda);
    template <typename F> NavigationStoppedEventHandler(F* function);
    template <typename O, typename M> NavigationStoppedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
};

struct WINRT_EBO NavigatingCancelEventArgs :
    Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs,
    impl::require<NavigatingCancelEventArgs, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
{
    NavigatingCancelEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO NavigationEventArgs :
    Windows::UI::Xaml::Navigation::INavigationEventArgs,
    impl::require<NavigationEventArgs, Windows::UI::Xaml::Navigation::INavigationEventArgs2>
{
    NavigationEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO NavigationFailedEventArgs :
    Windows::UI::Xaml::Navigation::INavigationFailedEventArgs
{
    NavigationFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PageStackEntry :
    Windows::UI::Xaml::Navigation::IPageStackEntry,
    impl::base<PageStackEntry, Windows::UI::Xaml::DependencyObject>,
    impl::require<PageStackEntry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    PageStackEntry(std::nullptr_t) noexcept {}
    PageStackEntry(Windows::UI::Xaml::Interop::TypeName const& sourcePageType, Windows::Foundation::IInspectable const& parameter, Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo);
    static Windows::UI::Xaml::DependencyProperty SourcePageTypeProperty();
};

}
