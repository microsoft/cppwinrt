// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation {

enum class AnnotationType;
enum class DockPosition;
enum class ExpandCollapseState;
enum class RowOrColumnMajor;
enum class ScrollAmount;
enum class SupportedTextSelection;
enum class SynchronizedInputType;
enum class ToggleState;
enum class WindowInteractionState;
enum class WindowVisualState;
enum class ZoomUnit;
struct AutomationProperty;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Peers {

enum class AutomationNavigationDirection;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Text {

enum class TextPatternRangeEndpoint;
enum class TextUnit;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Provider {

struct IAnnotationProvider;
struct ICustomNavigationProvider;
struct IDockProvider;
struct IDragProvider;
struct IDropTargetProvider;
struct IExpandCollapseProvider;
struct IGridItemProvider;
struct IGridProvider;
struct IIRawElementProviderSimple;
struct IInvokeProvider;
struct IItemContainerProvider;
struct IMultipleViewProvider;
struct IObjectModelProvider;
struct IRangeValueProvider;
struct IScrollItemProvider;
struct IScrollProvider;
struct ISelectionItemProvider;
struct ISelectionProvider;
struct ISpreadsheetItemProvider;
struct ISpreadsheetProvider;
struct IStylesProvider;
struct ISynchronizedInputProvider;
struct ITableItemProvider;
struct ITableProvider;
struct ITextChildProvider;
struct ITextEditProvider;
struct ITextProvider;
struct ITextProvider2;
struct ITextRangeProvider;
struct ITextRangeProvider2;
struct IToggleProvider;
struct ITransformProvider;
struct ITransformProvider2;
struct IValueProvider;
struct IVirtualizedItemProvider;
struct IWindowProvider;
struct IRawElementProviderSimple;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IDockProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IDragProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IGridItemProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IGridProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IInvokeProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IScrollProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ISelectionProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IStylesProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITableItemProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITableProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextChildProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextEditProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextProvider2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IToggleProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITransformProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::ITransformProvider2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IValueProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IWindowProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>{ using type = class_category; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IAnnotationProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ICustomNavigationProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IDockProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IDockProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IDragProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IDragProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IDropTargetProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IExpandCollapseProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IGridItemProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IGridItemProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IGridProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IGridProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IInvokeProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IInvokeProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IItemContainerProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IMultipleViewProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IObjectModelProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IRangeValueProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IScrollItemProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IScrollProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IScrollProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ISelectionItemProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ISelectionProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ISelectionProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetItemProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IStylesProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IStylesProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ISynchronizedInputProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITableItemProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITableItemProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITableProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITableProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITextChildProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITextChildProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITextEditProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITextEditProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITextProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITextProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITextProvider2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITextProvider2" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider2" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IToggleProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IToggleProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITransformProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITransformProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::ITransformProvider2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.ITransformProvider2" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IValueProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IValueProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IVirtualizedItemProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IWindowProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IWindowProvider" }; };
template <> struct name<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple" }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>{ static constexpr GUID value{ 0x95BA1417,0x4437,0x451B,{ 0x94,0x61,0x05,0x0A,0x49,0xB5,0x9D,0x06 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>{ static constexpr GUID value{ 0x2BD8A6D0,0x2FA3,0x4717,{ 0xB2,0x8C,0x49,0x17,0xCE,0x54,0x92,0x8D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IDockProvider>{ static constexpr GUID value{ 0x48C243F8,0x78B1,0x44A0,{ 0xAC,0x5F,0x75,0x07,0x57,0xBC,0xDE,0x3C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IDragProvider>{ static constexpr GUID value{ 0x2E7786A9,0x7FFC,0x4F57,{ 0xB9,0x65,0x1E,0xF1,0xF3,0x73,0xF5,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>{ static constexpr GUID value{ 0x7A245BDD,0xB458,0x4FE0,{ 0x98,0xC8,0xAA,0xC8,0x9D,0xF5,0x6D,0x61 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>{ static constexpr GUID value{ 0x49AC8399,0xD626,0x4543,{ 0x94,0xB9,0xA6,0xD9,0xA9,0x59,0x3A,0xF6 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IGridItemProvider>{ static constexpr GUID value{ 0xFFF3683C,0x7407,0x45BB,{ 0xA9,0x36,0xDF,0x3E,0xD6,0xD3,0x83,0x7D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IGridProvider>{ static constexpr GUID value{ 0x8B62B7A0,0x932C,0x4490,{ 0x9A,0x13,0x02,0xFD,0xB3,0x9A,0x8F,0x5B } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>{ static constexpr GUID value{ 0xEC752224,0x9B77,0x4720,{ 0xBB,0x21,0x4A,0xC8,0x9F,0xDB,0x1A,0xFD } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IInvokeProvider>{ static constexpr GUID value{ 0xF7D1A187,0xB13C,0x4540,{ 0xB0,0x9E,0x67,0x78,0xE2,0xDC,0x9B,0xA5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>{ static constexpr GUID value{ 0xEF5CD845,0xE1D4,0x40F4,{ 0xBA,0xD5,0xC7,0xFA,0xD4,0x4A,0x70,0x3E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>{ static constexpr GUID value{ 0xD014E196,0x0E50,0x4843,{ 0xA5,0xD2,0xC2,0x28,0x97,0xC8,0x84,0x5A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>{ static constexpr GUID value{ 0xC3CA36B9,0x0793,0x4ED0,{ 0xBB,0xF4,0x9F,0xF4,0xE0,0xF9,0x8F,0x80 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>{ static constexpr GUID value{ 0x838A34A8,0x7D5F,0x4079,{ 0xAF,0x03,0xC3,0xD0,0x15,0xE9,0x34,0x13 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>{ static constexpr GUID value{ 0x9A3EC090,0x5D2C,0x4E42,{ 0x9E,0xE6,0x9D,0x58,0xDB,0x10,0x0B,0x55 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IScrollProvider>{ static constexpr GUID value{ 0x374BF581,0x7716,0x4BBC,{ 0x82,0xEB,0xD9,0x97,0x00,0x6E,0xA9,0x99 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>{ static constexpr GUID value{ 0x6A4977C1,0x830D,0x42D2,{ 0xBF,0x62,0x04,0x2E,0xBD,0xDE,0xCC,0x19 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ISelectionProvider>{ static constexpr GUID value{ 0x1F018FCA,0xB944,0x4395,{ 0x8D,0xE1,0x88,0xF6,0x74,0xAF,0x51,0xD3 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>{ static constexpr GUID value{ 0xEBDE8F92,0x6015,0x4826,{ 0xB7,0x19,0x47,0x52,0x1A,0x81,0xC6,0x7E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>{ static constexpr GUID value{ 0x15359093,0xBD99,0x4CFD,{ 0x9F,0x07,0x3B,0x14,0xB3,0x15,0xE2,0x3D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IStylesProvider>{ static constexpr GUID value{ 0x1A5B7A17,0x7C01,0x4BEC,{ 0x9C,0xD4,0x2D,0xFA,0x7D,0xC2,0x46,0xCD } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>{ static constexpr GUID value{ 0x3D60CECB,0xDA54,0x4AA3,{ 0xB9,0x15,0xE3,0x24,0x44,0x27,0xD4,0xAC } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITableItemProvider>{ static constexpr GUID value{ 0x3B2C49CD,0x1DE2,0x4EE2,{ 0xA3,0xE1,0xFB,0x55,0x35,0x59,0xD1,0x5D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITableProvider>{ static constexpr GUID value{ 0x7A8ED399,0x6824,0x4595,{ 0xBA,0xB3,0x46,0x4B,0xC9,0xA0,0x44,0x17 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITextChildProvider>{ static constexpr GUID value{ 0x1133C336,0xA89B,0x4130,{ 0x9B,0xE6,0x55,0xE3,0x33,0x34,0xF5,0x57 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITextEditProvider>{ static constexpr GUID value{ 0xEA3605B4,0x3A05,0x400E,{ 0xB5,0xF9,0x4E,0x91,0xB4,0x0F,0x61,0x76 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITextProvider>{ static constexpr GUID value{ 0xDB5BBC9F,0x4807,0x4F2A,{ 0x86,0x78,0x1B,0x13,0xF3,0xC6,0x0E,0x22 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITextProvider2>{ static constexpr GUID value{ 0xDF1D48BC,0x0487,0x4E7F,{ 0x9D,0x5E,0xF0,0x9E,0x77,0xE4,0x12,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>{ static constexpr GUID value{ 0x0274688D,0x06E9,0x4F66,{ 0x94,0x46,0x28,0xA5,0xBE,0x98,0xFB,0xD0 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>{ static constexpr GUID value{ 0xD3BE3DFB,0x9F54,0x4642,{ 0xA7,0xA5,0x5C,0x18,0xD5,0xEE,0x2A,0x3F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IToggleProvider>{ static constexpr GUID value{ 0x93B88290,0x656F,0x44F7,{ 0xAE,0xAF,0x78,0xB8,0xF9,0x44,0xD0,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITransformProvider>{ static constexpr GUID value{ 0x79670FDD,0xF6A9,0x4A65,{ 0xAF,0x17,0x86,0x1D,0xB7,0x99,0xA2,0xDA } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::ITransformProvider2>{ static constexpr GUID value{ 0xA8B11756,0xA39F,0x4E97,{ 0x8C,0x7D,0xC1,0xEA,0x8D,0xD6,0x33,0xC5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IValueProvider>{ static constexpr GUID value{ 0x2086B7A7,0xAC0E,0x47D1,{ 0xAB,0x9B,0x2A,0x64,0x29,0x2A,0xFD,0xF8 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>{ static constexpr GUID value{ 0x17D4A04B,0xD658,0x48E0,{ 0xA5,0x74,0x5A,0x51,0x6C,0x58,0xDF,0xA7 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Provider::IWindowProvider>{ static constexpr GUID value{ 0x1BAA8B3D,0x38CF,0x415A,{ 0x85,0xD3,0x20,0xE4,0x3A,0x0E,0xC1,0xB1 } }; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>{ using type = Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider
{
    int32_t AnnotationTypeId() const;
    hstring AnnotationTypeName() const;
    hstring Author() const;
    hstring DateTime() const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple Target() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ICustomNavigationProvider
{
    Windows::Foundation::IInspectable NavigateCustom(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ICustomNavigationProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IDockProvider
{
    Windows::UI::Xaml::Automation::DockPosition DockPosition() const;
    void SetDockPosition(Windows::UI::Xaml::Automation::DockPosition const& dockPosition) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IDockProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IDockProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IDragProvider
{
    bool IsGrabbed() const;
    hstring DropEffect() const;
    com_array<hstring> DropEffects() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetGrabbedItems() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IDragProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IDragProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider
{
    hstring DropEffect() const;
    com_array<hstring> DropEffects() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider
{
    Windows::UI::Xaml::Automation::ExpandCollapseState ExpandCollapseState() const;
    void Collapse() const;
    void Expand() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider
{
    int32_t Column() const;
    int32_t ColumnSpan() const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple ContainingGrid() const;
    int32_t Row() const;
    int32_t RowSpan() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IGridItemProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IGridProvider
{
    int32_t ColumnCount() const;
    int32_t RowCount() const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple GetItem(int32_t row, int32_t column) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IGridProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IGridProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IIRawElementProviderSimple
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IIRawElementProviderSimple<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IInvokeProvider
{
    void Invoke() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IInvokeProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IInvokeProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IItemContainerProvider
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple FindItemByProperty(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& startAfter, Windows::UI::Xaml::Automation::AutomationProperty const& automationProperty, Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IItemContainerProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider
{
    int32_t CurrentView() const;
    com_array<int32_t> GetSupportedViews() const;
    hstring GetViewName(int32_t viewId) const;
    void SetCurrentView(int32_t viewId) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IObjectModelProvider
{
    Windows::Foundation::IInspectable GetUnderlyingObjectModel() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IObjectModelProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider
{
    bool IsReadOnly() const;
    double LargeChange() const;
    double Maximum() const;
    double Minimum() const;
    double SmallChange() const;
    double Value() const;
    void SetValue(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IScrollItemProvider
{
    void ScrollIntoView() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IScrollItemProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider
{
    bool HorizontallyScrollable() const;
    double HorizontalScrollPercent() const;
    double HorizontalViewSize() const;
    bool VerticallyScrollable() const;
    double VerticalScrollPercent() const;
    double VerticalViewSize() const;
    void Scroll(Windows::UI::Xaml::Automation::ScrollAmount const& horizontalAmount, Windows::UI::Xaml::Automation::ScrollAmount const& verticalAmount) const;
    void SetScrollPercent(double horizontalPercent, double verticalPercent) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IScrollProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider
{
    bool IsSelected() const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple SelectionContainer() const;
    void AddToSelection() const;
    void RemoveFromSelection() const;
    void Select() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ISelectionProvider
{
    bool CanSelectMultiple() const;
    bool IsSelectionRequired() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetSelection() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISelectionProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISelectionProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider
{
    hstring Formula() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetAnnotationObjects() const;
    com_array<Windows::UI::Xaml::Automation::AnnotationType> GetAnnotationTypes() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetProvider
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple GetItemByName(param::hstring const& name) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider
{
    hstring ExtendedProperties() const;
    Windows::UI::Color FillColor() const;
    Windows::UI::Color FillPatternColor() const;
    hstring FillPatternStyle() const;
    hstring Shape() const;
    int32_t StyleId() const;
    hstring StyleName() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IStylesProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider
{
    void Cancel() const;
    void StartListening(Windows::UI::Xaml::Automation::SynchronizedInputType const& inputType) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITableItemProvider
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetColumnHeaderItems() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetRowHeaderItems() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITableItemProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITableItemProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITableProvider
{
    Windows::UI::Xaml::Automation::RowOrColumnMajor RowOrColumnMajor() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetColumnHeaders() const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetRowHeaders() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITableProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITableProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITextChildProvider
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple TextContainer() const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider TextRange() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextChildProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextChildProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITextEditProvider
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider GetActiveComposition() const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider GetConversionTarget() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextEditProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextEditProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITextProvider
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider DocumentRange() const;
    Windows::UI::Xaml::Automation::SupportedTextSelection SupportedTextSelection() const;
    com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> GetSelection() const;
    com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> GetVisibleRanges() const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider RangeFromChild(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& childElement) const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider RangeFromPoint(Windows::Foundation::Point const& screenLocation) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITextProvider2
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider RangeFromAnnotation(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& annotationElement) const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider GetCaretRange(bool& isActive) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextProvider2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextProvider2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider Clone() const;
    bool Compare(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider) const;
    int32_t CompareEndpoints(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider, Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& targetEndpoint) const;
    void ExpandToEnclosingUnit(Windows::UI::Xaml::Automation::Text::TextUnit const& unit) const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider FindAttribute(int32_t attributeId, Windows::Foundation::IInspectable const& value, bool backward) const;
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider FindText(param::hstring const& text, bool backward, bool ignoreCase) const;
    Windows::Foundation::IInspectable GetAttributeValue(int32_t attributeId) const;
    void GetBoundingRectangles(com_array<double>& returnValue) const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple GetEnclosingElement() const;
    hstring GetText(int32_t maxLength) const;
    int32_t Move(Windows::UI::Xaml::Automation::Text::TextUnit const& unit, int32_t count) const;
    int32_t MoveEndpointByUnit(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Text::TextUnit const& unit, int32_t count) const;
    void MoveEndpointByRange(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider, Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& targetEndpoint) const;
    void Select() const;
    void AddToSelection() const;
    void RemoveFromSelection() const;
    void ScrollIntoView(bool alignToTop) const;
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> GetChildren() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider2
{
    void ShowContextMenu() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IToggleProvider
{
    Windows::UI::Xaml::Automation::ToggleState ToggleState() const;
    void Toggle() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IToggleProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IToggleProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider
{
    bool CanMove() const;
    bool CanResize() const;
    bool CanRotate() const;
    void Move(double x, double y) const;
    void Resize(double width, double height) const;
    void Rotate(double degrees) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITransformProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2
{
    bool CanZoom() const;
    double ZoomLevel() const;
    double MaxZoom() const;
    double MinZoom() const;
    void Zoom(double zoom) const;
    void ZoomByUnit(Windows::UI::Xaml::Automation::ZoomUnit const& zoomUnit) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITransformProvider2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IValueProvider
{
    bool IsReadOnly() const;
    hstring Value() const;
    void SetValue(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IValueProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IValueProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IVirtualizedItemProvider
{
    void Realize() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IVirtualizedItemProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider
{
    bool IsModal() const;
    bool IsTopmost() const;
    bool Maximizable() const;
    bool Minimizable() const;
    Windows::UI::Xaml::Automation::WindowInteractionState InteractionState() const;
    Windows::UI::Xaml::Automation::WindowVisualState VisualState() const;
    void Close() const;
    void SetVisualState(Windows::UI::Xaml::Automation::WindowVisualState const& state) const;
    bool WaitForInputIdle(int32_t milliseconds) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Provider::IWindowProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>; };

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnnotationTypeId(int32_t* value) = 0;
    virtual HRESULT __stdcall get_AnnotationTypeName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Author(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DateTime(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Target(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall NavigateCustom(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection> direction, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IDockProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DockPosition(abi_t<Windows::UI::Xaml::Automation::DockPosition>* value) = 0;
    virtual HRESULT __stdcall SetDockPosition(abi_t<Windows::UI::Xaml::Automation::DockPosition> dockPosition) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IDragProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsGrabbed(bool* value) = 0;
    virtual HRESULT __stdcall get_DropEffect(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DropEffects(uint32_t* __valueSize, HSTRING** value) = 0;
    virtual HRESULT __stdcall GetGrabbedItems(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DropEffect(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DropEffects(uint32_t* __valueSize, HSTRING** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExpandCollapseState(abi_t<Windows::UI::Xaml::Automation::ExpandCollapseState>* value) = 0;
    virtual HRESULT __stdcall Collapse() = 0;
    virtual HRESULT __stdcall Expand() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IGridItemProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Column(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ColumnSpan(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ContainingGrid(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Row(int32_t* value) = 0;
    virtual HRESULT __stdcall get_RowSpan(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IGridProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ColumnCount(int32_t* value) = 0;
    virtual HRESULT __stdcall get_RowCount(int32_t* value) = 0;
    virtual HRESULT __stdcall GetItem(int32_t row, int32_t column, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IInvokeProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Invoke() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindItemByProperty(::IUnknown* startAfter, ::IUnknown* automationProperty, ::IUnknown* value, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentView(int32_t* value) = 0;
    virtual HRESULT __stdcall GetSupportedViews(uint32_t* __returnValueSize, int32_t** returnValue) = 0;
    virtual HRESULT __stdcall GetViewName(int32_t viewId, HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall SetCurrentView(int32_t viewId) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetUnderlyingObjectModel(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsReadOnly(bool* value) = 0;
    virtual HRESULT __stdcall get_LargeChange(double* value) = 0;
    virtual HRESULT __stdcall get_Maximum(double* value) = 0;
    virtual HRESULT __stdcall get_Minimum(double* value) = 0;
    virtual HRESULT __stdcall get_SmallChange(double* value) = 0;
    virtual HRESULT __stdcall get_Value(double* value) = 0;
    virtual HRESULT __stdcall SetValue(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ScrollIntoView() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IScrollProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HorizontallyScrollable(bool* value) = 0;
    virtual HRESULT __stdcall get_HorizontalScrollPercent(double* value) = 0;
    virtual HRESULT __stdcall get_HorizontalViewSize(double* value) = 0;
    virtual HRESULT __stdcall get_VerticallyScrollable(bool* value) = 0;
    virtual HRESULT __stdcall get_VerticalScrollPercent(double* value) = 0;
    virtual HRESULT __stdcall get_VerticalViewSize(double* value) = 0;
    virtual HRESULT __stdcall Scroll(abi_t<Windows::UI::Xaml::Automation::ScrollAmount> horizontalAmount, abi_t<Windows::UI::Xaml::Automation::ScrollAmount> verticalAmount) = 0;
    virtual HRESULT __stdcall SetScrollPercent(double horizontalPercent, double verticalPercent) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSelected(bool* value) = 0;
    virtual HRESULT __stdcall get_SelectionContainer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall AddToSelection() = 0;
    virtual HRESULT __stdcall RemoveFromSelection() = 0;
    virtual HRESULT __stdcall Select() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISelectionProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanSelectMultiple(bool* value) = 0;
    virtual HRESULT __stdcall get_IsSelectionRequired(bool* value) = 0;
    virtual HRESULT __stdcall GetSelection(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Formula(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetAnnotationObjects(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
    virtual HRESULT __stdcall GetAnnotationTypes(uint32_t* __returnValueSize, abi_t<Windows::UI::Xaml::Automation::AnnotationType>** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetItemByName(HSTRING name, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IStylesProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExtendedProperties(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FillColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_FillPatternColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_FillPatternStyle(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Shape(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StyleId(int32_t* value) = 0;
    virtual HRESULT __stdcall get_StyleName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Cancel() = 0;
    virtual HRESULT __stdcall StartListening(abi_t<Windows::UI::Xaml::Automation::SynchronizedInputType> inputType) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITableItemProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetColumnHeaderItems(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
    virtual HRESULT __stdcall GetRowHeaderItems(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITableProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RowOrColumnMajor(abi_t<Windows::UI::Xaml::Automation::RowOrColumnMajor>* value) = 0;
    virtual HRESULT __stdcall GetColumnHeaders(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
    virtual HRESULT __stdcall GetRowHeaders(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextChildProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextContainer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TextRange(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextEditProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetActiveComposition(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetConversionTarget(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DocumentRange(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedTextSelection(abi_t<Windows::UI::Xaml::Automation::SupportedTextSelection>* value) = 0;
    virtual HRESULT __stdcall GetSelection(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
    virtual HRESULT __stdcall GetVisibleRanges(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
    virtual HRESULT __stdcall RangeFromChild(::IUnknown* childElement, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RangeFromPoint(abi_t<Windows::Foundation::Point> screenLocation, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextProvider2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RangeFromAnnotation(::IUnknown* annotationElement, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetCaretRange(bool* isActive, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Clone(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall Compare(::IUnknown* textRangeProvider, bool* returnValue) = 0;
    virtual HRESULT __stdcall CompareEndpoints(abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> endpoint, ::IUnknown* textRangeProvider, abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> targetEndpoint, int32_t* returnValue) = 0;
    virtual HRESULT __stdcall ExpandToEnclosingUnit(abi_t<Windows::UI::Xaml::Automation::Text::TextUnit> unit) = 0;
    virtual HRESULT __stdcall FindAttribute(int32_t attributeId, ::IUnknown* value, bool backward, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall FindText(HSTRING text, bool backward, bool ignoreCase, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetAttributeValue(int32_t attributeId, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetBoundingRectangles(uint32_t* __returnValueSize, double** returnValue) = 0;
    virtual HRESULT __stdcall GetEnclosingElement(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetText(int32_t maxLength, HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall Move(abi_t<Windows::UI::Xaml::Automation::Text::TextUnit> unit, int32_t count, int32_t* returnValue) = 0;
    virtual HRESULT __stdcall MoveEndpointByUnit(abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> endpoint, abi_t<Windows::UI::Xaml::Automation::Text::TextUnit> unit, int32_t count, int32_t* returnValue) = 0;
    virtual HRESULT __stdcall MoveEndpointByRange(abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> endpoint, ::IUnknown* textRangeProvider, abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> targetEndpoint) = 0;
    virtual HRESULT __stdcall Select() = 0;
    virtual HRESULT __stdcall AddToSelection() = 0;
    virtual HRESULT __stdcall RemoveFromSelection() = 0;
    virtual HRESULT __stdcall ScrollIntoView(bool alignToTop) = 0;
    virtual HRESULT __stdcall GetChildren(uint32_t* __returnValueSize, ::IUnknown*** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowContextMenu() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IToggleProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ToggleState(abi_t<Windows::UI::Xaml::Automation::ToggleState>* value) = 0;
    virtual HRESULT __stdcall Toggle() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITransformProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanMove(bool* value) = 0;
    virtual HRESULT __stdcall get_CanResize(bool* value) = 0;
    virtual HRESULT __stdcall get_CanRotate(bool* value) = 0;
    virtual HRESULT __stdcall Move(double x, double y) = 0;
    virtual HRESULT __stdcall Resize(double width, double height) = 0;
    virtual HRESULT __stdcall Rotate(double degrees) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITransformProvider2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanZoom(bool* value) = 0;
    virtual HRESULT __stdcall get_ZoomLevel(double* value) = 0;
    virtual HRESULT __stdcall get_MaxZoom(double* value) = 0;
    virtual HRESULT __stdcall get_MinZoom(double* value) = 0;
    virtual HRESULT __stdcall Zoom(double zoom) = 0;
    virtual HRESULT __stdcall ZoomByUnit(abi_t<Windows::UI::Xaml::Automation::ZoomUnit> zoomUnit) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IValueProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsReadOnly(bool* value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
    virtual HRESULT __stdcall SetValue(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Realize() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Provider::IWindowProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsModal(bool* value) = 0;
    virtual HRESULT __stdcall get_IsTopmost(bool* value) = 0;
    virtual HRESULT __stdcall get_Maximizable(bool* value) = 0;
    virtual HRESULT __stdcall get_Minimizable(bool* value) = 0;
    virtual HRESULT __stdcall get_InteractionState(abi_t<Windows::UI::Xaml::Automation::WindowInteractionState>* value) = 0;
    virtual HRESULT __stdcall get_VisualState(abi_t<Windows::UI::Xaml::Automation::WindowVisualState>* value) = 0;
    virtual HRESULT __stdcall Close() = 0;
    virtual HRESULT __stdcall SetVisualState(abi_t<Windows::UI::Xaml::Automation::WindowVisualState> state) = 0;
    virtual HRESULT __stdcall WaitForInputIdle(int32_t milliseconds, bool* returnValue) = 0;
};};

}
