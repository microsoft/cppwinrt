// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Navigation {

struct INavigatingCancelEventArgs;
struct INavigatingCancelEventArgs2;
struct INavigationEventArgs;
struct INavigationEventArgs2;
struct INavigationFailedEventArgs;
struct IPageStackEntry;
struct IPageStackEntryFactory;
struct IPageStackEntryStatics;
struct LoadCompletedEventHandler;
struct NavigatedEventHandler;
struct NavigatingCancelEventHandler;
struct NavigationFailedEventHandler;
struct NavigationStoppedEventHandler;
struct NavigatingCancelEventArgs;
struct NavigationEventArgs;
struct NavigationFailedEventArgs;
struct PageStackEntry;

}

namespace Windows::UI::Xaml::Navigation {

struct LoadCompletedEventHandler;
struct NavigatedEventHandler;
struct NavigatingCancelEventHandler;
struct NavigationFailedEventHandler;
struct NavigationStoppedEventHandler;
struct INavigatingCancelEventArgs;
struct INavigatingCancelEventArgs2;
struct INavigationEventArgs;
struct INavigationEventArgs2;
struct INavigationFailedEventArgs;
struct IPageStackEntry;
struct IPageStackEntryFactory;
struct IPageStackEntryStatics;
struct NavigatingCancelEventArgs;
struct NavigationEventArgs;
struct NavigationFailedEventArgs;
struct PageStackEntry;

}

namespace Windows::UI::Xaml::Navigation {

enum class NavigationCacheMode
{
    Disabled = 0,
    Required = 1,
    Enabled = 2,
};

enum class NavigationMode
{
    New = 0,
    Back = 1,
    Forward = 2,
    Refresh = 3,
};

}

}
