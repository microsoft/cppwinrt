// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.0.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.0.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Text.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Provider {

struct WINRT_EBO IAnnotationProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAnnotationProvider>
{
    IAnnotationProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomNavigationProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomNavigationProvider>
{
    ICustomNavigationProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDockProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDockProvider>
{
    IDockProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDragProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDragProvider>
{
    IDragProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDropTargetProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDropTargetProvider>
{
    IDropTargetProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IExpandCollapseProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExpandCollapseProvider>
{
    IExpandCollapseProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridItemProvider>
{
    IGridItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridProvider>
{
    IGridProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IIRawElementProviderSimple :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIRawElementProviderSimple>
{
    IIRawElementProviderSimple(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInvokeProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInvokeProvider>
{
    IInvokeProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemContainerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemContainerProvider>
{
    IItemContainerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMultipleViewProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMultipleViewProvider>
{
    IMultipleViewProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IObjectModelProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IObjectModelProvider>
{
    IObjectModelProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRangeValueProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRangeValueProvider>
{
    IRangeValueProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScrollItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollItemProvider>
{
    IScrollItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScrollProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollProvider>
{
    IScrollProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectionItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectionItemProvider>
{
    ISelectionItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectionProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectionProvider>
{
    ISelectionProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpreadsheetItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpreadsheetItemProvider>
{
    ISpreadsheetItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpreadsheetProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpreadsheetProvider>
{
    ISpreadsheetProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStylesProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStylesProvider>
{
    IStylesProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISynchronizedInputProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISynchronizedInputProvider>
{
    ISynchronizedInputProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITableItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITableItemProvider>
{
    ITableItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITableProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITableProvider>
{
    ITableProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextChildProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextChildProvider>
{
    ITextChildProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextEditProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextEditProvider>,
    impl::require<ITextEditProvider, Windows::UI::Xaml::Automation::Provider::ITextProvider>
{
    ITextEditProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextProvider>
{
    ITextProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextProvider2>,
    impl::require<ITextProvider2, Windows::UI::Xaml::Automation::Provider::ITextProvider>
{
    ITextProvider2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextRangeProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextRangeProvider>
{
    ITextRangeProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextRangeProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextRangeProvider2>,
    impl::require<ITextRangeProvider2, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>
{
    ITextRangeProvider2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToggleProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleProvider>
{
    IToggleProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransformProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformProvider>
{
    ITransformProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransformProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformProvider2>,
    impl::require<ITransformProvider2, Windows::UI::Xaml::Automation::Provider::ITransformProvider>
{
    ITransformProvider2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IValueProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IValueProvider>
{
    IValueProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVirtualizedItemProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVirtualizedItemProvider>
{
    IVirtualizedItemProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWindowProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWindowProvider>
{
    IWindowProvider(std::nullptr_t = nullptr) noexcept {}
};

}
