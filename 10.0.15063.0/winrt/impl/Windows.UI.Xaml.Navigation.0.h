// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyProperty;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

struct TypeName;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Animation {

struct NavigationTransitionInfo;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Navigation {

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
struct LoadCompletedEventHandler;
struct NavigatedEventHandler;
struct NavigatingCancelEventHandler;
struct NavigationFailedEventHandler;
struct NavigationStoppedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Navigation::INavigationEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Navigation::INavigationEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Navigation::IPageStackEntry>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigationEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Navigation::PageStackEntry>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigationCacheMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigationMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigatedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigatingCancelEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigatingCancelEventArgs2" }; };
template <> struct name<Windows::UI::Xaml::Navigation::INavigationEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigationEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Navigation::INavigationEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigationEventArgs2" }; };
template <> struct name<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigationFailedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Navigation::IPageStackEntry>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.IPageStackEntry" }; };
template <> struct name<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.IPageStackEntryFactory" }; };
template <> struct name<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.IPageStackEntryStatics" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigatingCancelEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigationEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationFailedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Navigation::PageStackEntry>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.PageStackEntry" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigationCacheMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationCacheMode" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigationMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationMode" }; };
template <> struct name<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.LoadCompletedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigatedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigatedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigatingCancelEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationFailedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationStoppedEventHandler" }; };
template <> struct guid<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>{ static constexpr GUID value{ 0xFD1D67AE,0xEAFB,0x4079,{ 0xBE,0x80,0x6D,0xC9,0x2A,0x03,0xAE,0xDF } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>{ static constexpr GUID value{ 0x5407B704,0x8147,0x4343,{ 0x83,0x8F,0xDD,0x1E,0xE9,0x08,0xC1,0x37 } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::INavigationEventArgs>{ static constexpr GUID value{ 0xB6AA9834,0x6691,0x44D1,{ 0xBD,0xF7,0x58,0x82,0x0C,0x27,0xB0,0xD0 } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::INavigationEventArgs2>{ static constexpr GUID value{ 0xDBFF71D9,0x979A,0x4B2E,{ 0xA4,0x9B,0x3B,0xB1,0x7F,0xDE,0xF5,0x74 } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>{ static constexpr GUID value{ 0x11C1DFF7,0x36C2,0x4102,{ 0xB2,0xEF,0x02,0x17,0xA9,0x72,0x89,0xB3 } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::IPageStackEntry>{ static constexpr GUID value{ 0xEF8814A6,0x9388,0x4ACA,{ 0x85,0x72,0x40,0x51,0x94,0x06,0x90,0x80 } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>{ static constexpr GUID value{ 0x4454048A,0xA8B9,0x4F78,{ 0x9B,0x84,0x1F,0x51,0xF5,0x88,0x51,0xFF } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>{ static constexpr GUID value{ 0xACEFF8E3,0x246C,0x4033,{ 0x9F,0x01,0x01,0xCB,0x0D,0xA5,0x25,0x4E } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>{ static constexpr GUID value{ 0xAEBAF785,0x43FC,0x4E2C,{ 0x95,0xC3,0x97,0xAE,0x84,0xEA,0xBC,0x8E } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::NavigatedEventHandler>{ static constexpr GUID value{ 0x7BD1CF54,0x23CF,0x4CCE,{ 0xB2,0xF5,0x4C,0xE7,0x8D,0x96,0x89,0x6E } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>{ static constexpr GUID value{ 0x75D6A78F,0xA302,0x4489,{ 0x98,0x98,0x24,0xEA,0x49,0x18,0x29,0x10 } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>{ static constexpr GUID value{ 0x4DAB4671,0x12B2,0x43C7,{ 0xB8,0x92,0x9B,0xE2,0xDC,0xD3,0xE8,0x8D } }; };
template <> struct guid<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>{ static constexpr GUID value{ 0xF0117DDB,0x12FA,0x4D8D,{ 0x8B,0x26,0xB3,0x83,0xD0,0x9C,0x2B,0x3C } }; };
template <> struct default_interface<Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>{ using type = Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Navigation::NavigationEventArgs>{ using type = Windows::UI::Xaml::Navigation::INavigationEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>{ using type = Windows::UI::Xaml::Navigation::INavigationFailedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Navigation::PageStackEntry>{ using type = Windows::UI::Xaml::Navigation::IPageStackEntry; };

template <typename D>
struct consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs
{
    bool Cancel() const;
    void Cancel(bool value) const;
    Windows::UI::Xaml::Navigation::NavigationMode NavigationMode() const;
    Windows::UI::Xaml::Interop::TypeName SourcePageType() const;
};
template <> struct consume<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2
{
    Windows::Foundation::IInspectable Parameter() const;
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo NavigationTransitionInfo() const;
};
template <> struct consume<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2> { template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Navigation_INavigationEventArgs
{
    Windows::Foundation::IInspectable Content() const;
    Windows::Foundation::IInspectable Parameter() const;
    Windows::UI::Xaml::Interop::TypeName SourcePageType() const;
    Windows::UI::Xaml::Navigation::NavigationMode NavigationMode() const;
    Windows::Foundation::Uri Uri() const;
    void Uri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Navigation::INavigationEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Navigation_INavigationEventArgs2
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo NavigationTransitionInfo() const;
};
template <> struct consume<Windows::UI::Xaml::Navigation::INavigationEventArgs2> { template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigationEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs
{
    HRESULT Exception() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::UI::Xaml::Interop::TypeName SourcePageType() const;
};
template <> struct consume<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Navigation_IPageStackEntry
{
    Windows::UI::Xaml::Interop::TypeName SourcePageType() const;
    Windows::Foundation::IInspectable Parameter() const;
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo NavigationTransitionInfo() const;
};
template <> struct consume<Windows::UI::Xaml::Navigation::IPageStackEntry> { template <typename D> using type = consume_Windows_UI_Xaml_Navigation_IPageStackEntry<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Navigation_IPageStackEntryFactory
{
    Windows::UI::Xaml::Navigation::PageStackEntry CreateInstance(Windows::UI::Xaml::Interop::TypeName const& sourcePageType, Windows::Foundation::IInspectable const& parameter, Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo) const;
};
template <> struct consume<Windows::UI::Xaml::Navigation::IPageStackEntryFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Navigation_IPageStackEntryFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Navigation_IPageStackEntryStatics
{
    Windows::UI::Xaml::DependencyProperty SourcePageTypeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Navigation::IPageStackEntryStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Navigation_IPageStackEntryStatics<D>; };

template <> struct abi<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Cancel(bool* value) = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) = 0;
    virtual HRESULT __stdcall get_NavigationMode(abi_t<Windows::UI::Xaml::Navigation::NavigationMode>* value) = 0;
    virtual HRESULT __stdcall get_SourcePageType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Parameter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NavigationTransitionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::INavigationEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Parameter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SourcePageType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) = 0;
    virtual HRESULT __stdcall get_NavigationMode(abi_t<Windows::UI::Xaml::Navigation::NavigationMode>* value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::INavigationEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NavigationTransitionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Exception(abi_t<HRESULT>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_SourcePageType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::IPageStackEntry>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourcePageType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) = 0;
    virtual HRESULT __stdcall get_Parameter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NavigationTransitionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Xaml::Interop::TypeName> sourcePageType, ::IUnknown* parameter, ::IUnknown* navigationTransitionInfo, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourcePageTypeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::NavigatedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

}
