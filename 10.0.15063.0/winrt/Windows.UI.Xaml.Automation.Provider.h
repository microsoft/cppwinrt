// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Text.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Provider.2.h"
#include "winrt/Windows.UI.Xaml.Automation.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider<D>::AnnotationTypeId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IAnnotationProvider)->get_AnnotationTypeId(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider<D>::AnnotationTypeName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IAnnotationProvider)->get_AnnotationTypeName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider<D>::Author() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IAnnotationProvider)->get_Author(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider<D>::DateTime() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IAnnotationProvider)->get_DateTime(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider<D>::Target() const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IAnnotationProvider)->get_Target(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Provider_ICustomNavigationProvider<D>::NavigateCustom(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider)->NavigateCustom(get_abi(direction), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::DockPosition consume_Windows_UI_Xaml_Automation_Provider_IDockProvider<D>::DockPosition() const
{
    Windows::UI::Xaml::Automation::DockPosition value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IDockProvider)->get_DockPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IDockProvider<D>::SetDockPosition(Windows::UI::Xaml::Automation::DockPosition const& dockPosition) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IDockProvider)->SetDockPosition(get_abi(dockPosition)));
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IDragProvider<D>::IsGrabbed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IDragProvider)->get_IsGrabbed(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IDragProvider<D>::DropEffect() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IDragProvider)->get_DropEffect(put_abi(value)));
    return value;
}

template <typename D> com_array<hstring> consume_Windows_UI_Xaml_Automation_Provider_IDragProvider<D>::DropEffects() const
{
    com_array<hstring> value;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IDragProvider)->get_DropEffects(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> consume_Windows_UI_Xaml_Automation_Provider_IDragProvider<D>::GetGrabbedItems() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IDragProvider)->GetGrabbedItems(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider<D>::DropEffect() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IDropTargetProvider)->get_DropEffect(put_abi(value)));
    return value;
}

template <typename D> com_array<hstring> consume_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider<D>::DropEffects() const
{
    com_array<hstring> value;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IDropTargetProvider)->get_DropEffects(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::ExpandCollapseState consume_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider<D>::ExpandCollapseState() const
{
    Windows::UI::Xaml::Automation::ExpandCollapseState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider)->get_ExpandCollapseState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider<D>::Collapse() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider)->Collapse());
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider<D>::Expand() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider)->Expand());
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider<D>::Column() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IGridItemProvider)->get_Column(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider<D>::ColumnSpan() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IGridItemProvider)->get_ColumnSpan(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider<D>::ContainingGrid() const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IGridItemProvider)->get_ContainingGrid(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider<D>::Row() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IGridItemProvider)->get_Row(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider<D>::RowSpan() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IGridItemProvider)->get_RowSpan(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IGridProvider<D>::ColumnCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IGridProvider)->get_ColumnCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IGridProvider<D>::RowCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IGridProvider)->get_RowCount(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Provider_IGridProvider<D>::GetItem(int32_t row, int32_t column) const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IGridProvider)->GetItem(row, column, put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IInvokeProvider<D>::Invoke() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IInvokeProvider)->Invoke());
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Provider_IItemContainerProvider<D>::FindItemByProperty(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& startAfter, Windows::UI::Xaml::Automation::AutomationProperty const& automationProperty, Windows::Foundation::IInspectable const& value) const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IItemContainerProvider)->FindItemByProperty(get_abi(startAfter), get_abi(automationProperty), get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider<D>::CurrentView() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider)->get_CurrentView(&value));
    return value;
}

template <typename D> com_array<int32_t> consume_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider<D>::GetSupportedViews() const
{
    com_array<int32_t> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider)->GetSupportedViews(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider<D>::GetViewName(int32_t viewId) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider)->GetViewName(viewId, put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider<D>::SetCurrentView(int32_t viewId) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider)->SetCurrentView(viewId));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Provider_IObjectModelProvider<D>::GetUnderlyingObjectModel() const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IObjectModelProvider)->GetUnderlyingObjectModel(put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>::IsReadOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IRangeValueProvider)->get_IsReadOnly(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>::LargeChange() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IRangeValueProvider)->get_LargeChange(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>::Maximum() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IRangeValueProvider)->get_Maximum(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>::Minimum() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IRangeValueProvider)->get_Minimum(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>::SmallChange() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IRangeValueProvider)->get_SmallChange(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>::Value() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IRangeValueProvider)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>::SetValue(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IRangeValueProvider)->SetValue(value));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IScrollItemProvider<D>::ScrollIntoView() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollItemProvider)->ScrollIntoView());
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>::HorizontallyScrollable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollProvider)->get_HorizontallyScrollable(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>::HorizontalScrollPercent() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollProvider)->get_HorizontalScrollPercent(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>::HorizontalViewSize() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollProvider)->get_HorizontalViewSize(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>::VerticallyScrollable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollProvider)->get_VerticallyScrollable(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>::VerticalScrollPercent() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollProvider)->get_VerticalScrollPercent(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>::VerticalViewSize() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollProvider)->get_VerticalViewSize(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>::Scroll(Windows::UI::Xaml::Automation::ScrollAmount const& horizontalAmount, Windows::UI::Xaml::Automation::ScrollAmount const& verticalAmount) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollProvider)->Scroll(get_abi(horizontalAmount), get_abi(verticalAmount)));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>::SetScrollPercent(double horizontalPercent, double verticalPercent) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IScrollProvider)->SetScrollPercent(horizontalPercent, verticalPercent));
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider<D>::IsSelected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider)->get_IsSelected(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider<D>::SelectionContainer() const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider)->get_SelectionContainer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider<D>::AddToSelection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider)->AddToSelection());
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider<D>::RemoveFromSelection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider)->RemoveFromSelection());
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider<D>::Select() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider)->Select());
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_ISelectionProvider<D>::CanSelectMultiple() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISelectionProvider)->get_CanSelectMultiple(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_ISelectionProvider<D>::IsSelectionRequired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISelectionProvider)->get_IsSelectionRequired(&value));
    return value;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> consume_Windows_UI_Xaml_Automation_Provider_ISelectionProvider<D>::GetSelection() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISelectionProvider)->GetSelection(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider<D>::Formula() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider)->get_Formula(put_abi(value)));
    return value;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider<D>::GetAnnotationObjects() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider)->GetAnnotationObjects(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::AnnotationType> consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider<D>::GetAnnotationTypes() const
{
    com_array<Windows::UI::Xaml::Automation::AnnotationType> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider)->GetAnnotationTypes(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetProvider<D>::GetItemByName(param::hstring const& name) const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider)->GetItemByName(get_abi(name), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>::ExtendedProperties() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IStylesProvider)->get_ExtendedProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>::FillColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IStylesProvider)->get_FillColor(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>::FillPatternColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IStylesProvider)->get_FillPatternColor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>::FillPatternStyle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IStylesProvider)->get_FillPatternStyle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>::Shape() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IStylesProvider)->get_Shape(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>::StyleId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IStylesProvider)->get_StyleId(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>::StyleName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IStylesProvider)->get_StyleName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider<D>::Cancel() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider)->Cancel());
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider<D>::StartListening(Windows::UI::Xaml::Automation::SynchronizedInputType const& inputType) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider)->StartListening(get_abi(inputType)));
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> consume_Windows_UI_Xaml_Automation_Provider_ITableItemProvider<D>::GetColumnHeaderItems() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITableItemProvider)->GetColumnHeaderItems(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> consume_Windows_UI_Xaml_Automation_Provider_ITableItemProvider<D>::GetRowHeaderItems() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITableItemProvider)->GetRowHeaderItems(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::RowOrColumnMajor consume_Windows_UI_Xaml_Automation_Provider_ITableProvider<D>::RowOrColumnMajor() const
{
    Windows::UI::Xaml::Automation::RowOrColumnMajor value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITableProvider)->get_RowOrColumnMajor(put_abi(value)));
    return value;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> consume_Windows_UI_Xaml_Automation_Provider_ITableProvider<D>::GetColumnHeaders() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITableProvider)->GetColumnHeaders(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> consume_Windows_UI_Xaml_Automation_Provider_ITableProvider<D>::GetRowHeaders() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITableProvider)->GetRowHeaders(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Provider_ITextChildProvider<D>::TextContainer() const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextChildProvider)->get_TextContainer(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextChildProvider<D>::TextRange() const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextChildProvider)->get_TextRange(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextEditProvider<D>::GetActiveComposition() const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextEditProvider)->GetActiveComposition(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextEditProvider<D>::GetConversionTarget() const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextEditProvider)->GetConversionTarget(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextProvider<D>::DocumentRange() const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextProvider)->get_DocumentRange(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::SupportedTextSelection consume_Windows_UI_Xaml_Automation_Provider_ITextProvider<D>::SupportedTextSelection() const
{
    Windows::UI::Xaml::Automation::SupportedTextSelection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextProvider)->get_SupportedTextSelection(put_abi(value)));
    return value;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> consume_Windows_UI_Xaml_Automation_Provider_ITextProvider<D>::GetSelection() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextProvider)->GetSelection(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> consume_Windows_UI_Xaml_Automation_Provider_ITextProvider<D>::GetVisibleRanges() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextProvider)->GetVisibleRanges(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextProvider<D>::RangeFromChild(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& childElement) const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextProvider)->RangeFromChild(get_abi(childElement), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextProvider<D>::RangeFromPoint(Windows::Foundation::Point const& screenLocation) const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextProvider)->RangeFromPoint(get_abi(screenLocation), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextProvider2<D>::RangeFromAnnotation(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& annotationElement) const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextProvider2)->RangeFromAnnotation(get_abi(annotationElement), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextProvider2<D>::GetCaretRange(bool& isActive) const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextProvider2)->GetCaretRange(&isActive, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::Clone() const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->Clone(put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::Compare(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->Compare(get_abi(textRangeProvider), &returnValue));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::CompareEndpoints(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider, Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& targetEndpoint) const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->CompareEndpoints(get_abi(endpoint), get_abi(textRangeProvider), get_abi(targetEndpoint), &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::ExpandToEnclosingUnit(Windows::UI::Xaml::Automation::Text::TextUnit const& unit) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->ExpandToEnclosingUnit(get_abi(unit)));
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::FindAttribute(int32_t attributeId, Windows::Foundation::IInspectable const& value, bool backward) const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->FindAttribute(attributeId, get_abi(value), backward, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::ITextRangeProvider consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::FindText(param::hstring const& text, bool backward, bool ignoreCase) const
{
    Windows::UI::Xaml::Automation::Provider::ITextRangeProvider returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->FindText(get_abi(text), backward, ignoreCase, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::GetAttributeValue(int32_t attributeId) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->GetAttributeValue(attributeId, put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::GetBoundingRectangles(com_array<double>& returnValue) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->GetBoundingRectangles(impl::put_size_abi(returnValue), put_abi(returnValue)));
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::GetEnclosingElement() const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->GetEnclosingElement(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::GetText(int32_t maxLength) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->GetText(maxLength, put_abi(returnValue)));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::Move(Windows::UI::Xaml::Automation::Text::TextUnit const& unit, int32_t count) const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->Move(get_abi(unit), count, &returnValue));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::MoveEndpointByUnit(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Text::TextUnit const& unit, int32_t count) const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->MoveEndpointByUnit(get_abi(endpoint), get_abi(unit), count, &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::MoveEndpointByRange(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider, Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& targetEndpoint) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->MoveEndpointByRange(get_abi(endpoint), get_abi(textRangeProvider), get_abi(targetEndpoint)));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::Select() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->Select());
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::AddToSelection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->AddToSelection());
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::RemoveFromSelection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->RemoveFromSelection());
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::ScrollIntoView(bool alignToTop) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->ScrollIntoView(alignToTop));
}

template <typename D> com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>::GetChildren() const
{
    com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> returnValue;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider)->GetChildren(impl::put_size_abi(returnValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider2<D>::ShowContextMenu() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2)->ShowContextMenu());
}

template <typename D> Windows::UI::Xaml::Automation::ToggleState consume_Windows_UI_Xaml_Automation_Provider_IToggleProvider<D>::ToggleState() const
{
    Windows::UI::Xaml::Automation::ToggleState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IToggleProvider)->get_ToggleState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IToggleProvider<D>::Toggle() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IToggleProvider)->Toggle());
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider<D>::CanMove() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider)->get_CanMove(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider<D>::CanResize() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider)->get_CanResize(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider<D>::CanRotate() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider)->get_CanRotate(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider<D>::Move(double x, double y) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider)->Move(x, y));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider<D>::Resize(double width, double height) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider)->Resize(width, height));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider<D>::Rotate(double degrees) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider)->Rotate(degrees));
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2<D>::CanZoom() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider2)->get_CanZoom(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2<D>::ZoomLevel() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider2)->get_ZoomLevel(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2<D>::MaxZoom() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider2)->get_MaxZoom(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2<D>::MinZoom() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider2)->get_MinZoom(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2<D>::Zoom(double zoom) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider2)->Zoom(zoom));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2<D>::ZoomByUnit(Windows::UI::Xaml::Automation::ZoomUnit const& zoomUnit) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::ITransformProvider2)->ZoomByUnit(get_abi(zoomUnit)));
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IValueProvider<D>::IsReadOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IValueProvider)->get_IsReadOnly(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Provider_IValueProvider<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IValueProvider)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IValueProvider<D>::SetValue(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IValueProvider)->SetValue(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IVirtualizedItemProvider<D>::Realize() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider)->Realize());
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::IsModal() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->get_IsModal(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::IsTopmost() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->get_IsTopmost(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::Maximizable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->get_Maximizable(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::Minimizable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->get_Minimizable(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::WindowInteractionState consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::InteractionState() const
{
    Windows::UI::Xaml::Automation::WindowInteractionState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->get_InteractionState(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::WindowVisualState consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::VisualState() const
{
    Windows::UI::Xaml::Automation::WindowVisualState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->get_VisualState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->Close());
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::SetVisualState(Windows::UI::Xaml::Automation::WindowVisualState const& state) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->SetVisualState(get_abi(state)));
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>::WaitForInputIdle(int32_t milliseconds) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Provider::IWindowProvider)->WaitForInputIdle(milliseconds, &returnValue));
    return returnValue;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IAnnotationProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>
{
    HRESULT __stdcall get_AnnotationTypeId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationTypeId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationTypeName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationTypeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Author(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTime(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Target(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>
{
    HRESULT __stdcall NavigateCustom(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection> direction, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().NavigateCustom(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const*>(&direction)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IDockProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IDockProvider>
{
    HRESULT __stdcall get_DockPosition(abi_t<Windows::UI::Xaml::Automation::DockPosition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DockPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDockPosition(abi_t<Windows::UI::Xaml::Automation::DockPosition> dockPosition) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDockPosition(*reinterpret_cast<Windows::UI::Xaml::Automation::DockPosition const*>(&dockPosition));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IDragProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IDragProvider>
{
    HRESULT __stdcall get_IsGrabbed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGrabbed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropEffect(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DropEffect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropEffects(uint32_t* __valueSize, HSTRING** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().DropEffects());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGrabbedItems(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetGrabbedItems());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IDropTargetProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>
{
    HRESULT __stdcall get_DropEffect(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DropEffect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropEffects(uint32_t* __valueSize, HSTRING** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().DropEffects());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>
{
    HRESULT __stdcall get_ExpandCollapseState(abi_t<Windows::UI::Xaml::Automation::ExpandCollapseState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpandCollapseState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Collapse() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Collapse();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Expand() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Expand();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IGridItemProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IGridItemProvider>
{
    HRESULT __stdcall get_Column(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Column());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColumnSpan(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColumnSpan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainingGrid(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContainingGrid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Row(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Row());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowSpan(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowSpan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IGridProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IGridProvider>
{
    HRESULT __stdcall get_ColumnCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColumnCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItem(int32_t row, int32_t column, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetItem(row, column));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IInvokeProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IInvokeProvider>
{
    HRESULT __stdcall Invoke() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invoke();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>
{
    HRESULT __stdcall FindItemByProperty(::IUnknown* startAfter, ::IUnknown* automationProperty, ::IUnknown* value, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FindItemByProperty(*reinterpret_cast<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const*>(&startAfter), *reinterpret_cast<Windows::UI::Xaml::Automation::AutomationProperty const*>(&automationProperty), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>
{
    HRESULT __stdcall get_CurrentView(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedViews(uint32_t* __returnValueSize, int32_t** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetSupportedViews());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetViewName(int32_t viewId, HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetViewName(viewId));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCurrentView(int32_t viewId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCurrentView(viewId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IObjectModelProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>
{
    HRESULT __stdcall GetUnderlyingObjectModel(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetUnderlyingObjectModel());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IRangeValueProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>
{
    HRESULT __stdcall get_IsReadOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeChange(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LargeChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maximum(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Maximum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Minimum(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Minimum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallChange(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmallChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValue(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetValue(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IScrollItemProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>
{
    HRESULT __stdcall ScrollIntoView() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollIntoView();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IScrollProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IScrollProvider>
{
    HRESULT __stdcall get_HorizontallyScrollable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontallyScrollable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalScrollPercent(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalScrollPercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalViewSize(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalViewSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticallyScrollable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticallyScrollable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalScrollPercent(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalScrollPercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalViewSize(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalViewSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Scroll(abi_t<Windows::UI::Xaml::Automation::ScrollAmount> horizontalAmount, abi_t<Windows::UI::Xaml::Automation::ScrollAmount> verticalAmount) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scroll(*reinterpret_cast<Windows::UI::Xaml::Automation::ScrollAmount const*>(&horizontalAmount), *reinterpret_cast<Windows::UI::Xaml::Automation::ScrollAmount const*>(&verticalAmount));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetScrollPercent(double horizontalPercent, double verticalPercent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetScrollPercent(horizontalPercent, verticalPercent);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>
{
    HRESULT __stdcall get_IsSelected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSelected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionContainer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectionContainer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddToSelection() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToSelection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFromSelection() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromSelection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Select() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Select();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ISelectionProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ISelectionProvider>
{
    HRESULT __stdcall get_CanSelectMultiple(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanSelectMultiple());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSelectionRequired(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSelectionRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSelection(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetSelection());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>
{
    HRESULT __stdcall get_Formula(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Formula());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnnotationObjects(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetAnnotationObjects());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnnotationTypes(uint32_t* __returnValueSize, abi_t<Windows::UI::Xaml::Automation::AnnotationType>** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetAnnotationTypes());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>
{
    HRESULT __stdcall GetItemByName(HSTRING name, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetItemByName(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IStylesProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IStylesProvider>
{
    HRESULT __stdcall get_ExtendedProperties(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillPatternColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillPatternColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillPatternStyle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillPatternStyle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Shape(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Shape());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>
{
    HRESULT __stdcall Cancel() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartListening(abi_t<Windows::UI::Xaml::Automation::SynchronizedInputType> inputType) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartListening(*reinterpret_cast<Windows::UI::Xaml::Automation::SynchronizedInputType const*>(&inputType));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITableItemProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITableItemProvider>
{
    HRESULT __stdcall GetColumnHeaderItems(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetColumnHeaderItems());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRowHeaderItems(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetRowHeaderItems());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITableProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITableProvider>
{
    HRESULT __stdcall get_RowOrColumnMajor(abi_t<Windows::UI::Xaml::Automation::RowOrColumnMajor>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowOrColumnMajor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetColumnHeaders(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetColumnHeaders());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRowHeaders(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetRowHeaders());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITextChildProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITextChildProvider>
{
    HRESULT __stdcall get_TextContainer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextContainer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextRange(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextRange());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITextEditProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITextEditProvider>
{
    HRESULT __stdcall GetActiveComposition(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetActiveComposition());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConversionTarget(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetConversionTarget());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITextProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITextProvider>
{
    HRESULT __stdcall get_DocumentRange(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DocumentRange());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedTextSelection(abi_t<Windows::UI::Xaml::Automation::SupportedTextSelection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedTextSelection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSelection(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetSelection());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVisibleRanges(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetVisibleRanges());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RangeFromChild(::IUnknown* childElement, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RangeFromChild(*reinterpret_cast<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const*>(&childElement)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RangeFromPoint(abi_t<Windows::Foundation::Point> screenLocation, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RangeFromPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&screenLocation)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITextProvider2> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITextProvider2>
{
    HRESULT __stdcall RangeFromAnnotation(::IUnknown* annotationElement, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RangeFromAnnotation(*reinterpret_cast<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const*>(&annotationElement)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCaretRange(bool* isActive, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetCaretRange(*isActive));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>
{
    HRESULT __stdcall Clone(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Compare(::IUnknown* textRangeProvider, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Compare(*reinterpret_cast<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const*>(&textRangeProvider)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CompareEndpoints(abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> endpoint, ::IUnknown* textRangeProvider, abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> targetEndpoint, int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CompareEndpoints(*reinterpret_cast<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const*>(&endpoint), *reinterpret_cast<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const*>(&textRangeProvider), *reinterpret_cast<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const*>(&targetEndpoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ExpandToEnclosingUnit(abi_t<Windows::UI::Xaml::Automation::Text::TextUnit> unit) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpandToEnclosingUnit(*reinterpret_cast<Windows::UI::Xaml::Automation::Text::TextUnit const*>(&unit));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAttribute(int32_t attributeId, ::IUnknown* value, bool backward, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FindAttribute(attributeId, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), backward));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindText(HSTRING text, bool backward, bool ignoreCase, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FindText(*reinterpret_cast<hstring const*>(&text), backward, ignoreCase));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAttributeValue(int32_t attributeId, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAttributeValue(attributeId));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBoundingRectangles(uint32_t* __returnValueSize, double** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetBoundingRectangles(detach_abi<double>(__returnValueSize, returnValue));
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEnclosingElement(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetEnclosingElement());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetText(int32_t maxLength, HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetText(maxLength));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Move(abi_t<Windows::UI::Xaml::Automation::Text::TextUnit> unit, int32_t count, int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Move(*reinterpret_cast<Windows::UI::Xaml::Automation::Text::TextUnit const*>(&unit), count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveEndpointByUnit(abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> endpoint, abi_t<Windows::UI::Xaml::Automation::Text::TextUnit> unit, int32_t count, int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MoveEndpointByUnit(*reinterpret_cast<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const*>(&endpoint), *reinterpret_cast<Windows::UI::Xaml::Automation::Text::TextUnit const*>(&unit), count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveEndpointByRange(abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> endpoint, ::IUnknown* textRangeProvider, abi_t<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> targetEndpoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MoveEndpointByRange(*reinterpret_cast<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const*>(&endpoint), *reinterpret_cast<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const*>(&textRangeProvider), *reinterpret_cast<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const*>(&targetEndpoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Select() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Select();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddToSelection() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToSelection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFromSelection() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromSelection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ScrollIntoView(bool alignToTop) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollIntoView(alignToTop);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetChildren(uint32_t* __returnValueSize, ::IUnknown*** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__returnValueSize, *returnValue) = detach_abi(this->shim().GetChildren());
            return S_OK;
        }
        catch (...)
        {
            *__returnValueSize = 0;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>
{
    HRESULT __stdcall ShowContextMenu() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowContextMenu();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IToggleProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IToggleProvider>
{
    HRESULT __stdcall get_ToggleState(abi_t<Windows::UI::Xaml::Automation::ToggleState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Toggle() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Toggle();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITransformProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITransformProvider>
{
    HRESULT __stdcall get_CanMove(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanMove());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanResize(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanResize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRotate(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanRotate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Move(double x, double y) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Move(x, y);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Resize(double width, double height) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resize(width, height);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Rotate(double degrees) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rotate(degrees);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::ITransformProvider2> : produce_base<D, Windows::UI::Xaml::Automation::Provider::ITransformProvider2>
{
    HRESULT __stdcall get_CanZoom(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanZoom());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevel(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxZoom(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxZoom());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinZoom(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinZoom());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Zoom(double zoom) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Zoom(zoom);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ZoomByUnit(abi_t<Windows::UI::Xaml::Automation::ZoomUnit> zoomUnit) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZoomByUnit(*reinterpret_cast<Windows::UI::Xaml::Automation::ZoomUnit const*>(&zoomUnit));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IValueProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IValueProvider>
{
    HRESULT __stdcall get_IsReadOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValue(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetValue(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>
{
    HRESULT __stdcall Realize() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Realize();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Provider::IWindowProvider> : produce_base<D, Windows::UI::Xaml::Automation::Provider::IWindowProvider>
{
    HRESULT __stdcall get_IsModal(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsModal());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTopmost(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTopmost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maximizable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Maximizable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Minimizable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Minimizable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InteractionState(abi_t<Windows::UI::Xaml::Automation::WindowInteractionState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisualState(abi_t<Windows::UI::Xaml::Automation::WindowVisualState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VisualState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Close() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetVisualState(abi_t<Windows::UI::Xaml::Automation::WindowVisualState> state) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVisualState(*reinterpret_cast<Windows::UI::Xaml::Automation::WindowVisualState const*>(&state));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WaitForInputIdle(int32_t milliseconds, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().WaitForInputIdle(milliseconds));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Provider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IAnnotationProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IAnnotationProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IDockProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IDockProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IDragProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IDragProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IDropTargetProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IDropTargetProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IGridItemProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IGridItemProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IGridProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IGridProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IInvokeProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IInvokeProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IItemContainerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IItemContainerProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IObjectModelProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IObjectModelProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IRangeValueProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IRangeValueProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IScrollItemProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IScrollItemProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IScrollProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IScrollProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ISelectionProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ISelectionProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IStylesProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IStylesProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITableItemProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITableItemProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITableProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITableProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITextChildProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITextChildProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITextEditProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITextEditProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITextProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITextProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITextProvider2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITextProvider2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IToggleProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IToggleProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITransformProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITransformProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::ITransformProvider2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::ITransformProvider2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IValueProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IValueProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IWindowProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IWindowProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> {};

}

WINRT_WARNING_POP
