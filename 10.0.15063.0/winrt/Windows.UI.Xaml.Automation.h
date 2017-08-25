// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::AnnotationTypeIdProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_AnnotationTypeIdProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::AnnotationTypeNameProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_AnnotationTypeNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::AuthorProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_AuthorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::DateTimeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_DateTimeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::TargetProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_TargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AnnotationType consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>::Type() const
{
    Windows::UI::Xaml::Automation::AnnotationType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotation)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>::Type(Windows::UI::Xaml::Automation::AnnotationType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotation)->put_Type(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>::Element() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotation)->get_Element(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>::Element(Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotation)->put_Element(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Automation::AutomationAnnotation consume_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory<D>::CreateInstance(Windows::UI::Xaml::Automation::AnnotationType const& type) const
{
    Windows::UI::Xaml::Automation::AutomationAnnotation instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotationFactory)->CreateInstance(get_abi(type), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationAnnotation consume_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory<D>::CreateWithElementParameter(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::UIElement const& element) const
{
    Windows::UI::Xaml::Automation::AutomationAnnotation instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotationFactory)->CreateWithElementParameter(get_abi(type), get_abi(element), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics<D>::TypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotationStatics)->get_TypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics<D>::ElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotationStatics)->get_ElementProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::AcceleratorKeyProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_AcceleratorKeyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::AccessKeyProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_AccessKeyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::AutomationIdProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_AutomationIdProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::BoundingRectangleProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_BoundingRectangleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ClassNameProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ClassNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ClickablePointProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ClickablePointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ControlTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ControlTypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::HasKeyboardFocusProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_HasKeyboardFocusProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::HelpTextProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_HelpTextProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsContentElementProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsContentElementProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsControlElementProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsControlElementProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsEnabledProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsKeyboardFocusableProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsKeyboardFocusableProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsOffscreenProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsOffscreenProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsPasswordProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsPasswordProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsRequiredForFormProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsRequiredForFormProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ItemStatusProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ItemStatusProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ItemTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ItemTypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::LabeledByProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_LabeledByProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::LocalizedControlTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_LocalizedControlTypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::NameProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_NameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::OrientationProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_OrientationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::LiveSettingProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_LiveSettingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics2<D>::ControlledPeersProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2)->get_ControlledPeersProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>::PositionInSetProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3)->get_PositionInSetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>::SizeOfSetProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3)->get_SizeOfSetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>::LevelProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3)->get_LevelProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>::AnnotationsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3)->get_AnnotationsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4<D>::LandmarkTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4)->get_LandmarkTypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4<D>::LocalizedLandmarkTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4)->get_LocalizedLandmarkTypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::IsPeripheralProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_IsPeripheralProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::IsDataValidForFormProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_IsDataValidForFormProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::FullDescriptionProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_FullDescriptionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::DescribedByProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_DescribedByProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::FlowsToProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_FlowsToProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::FlowsFromProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_FlowsFromProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics6<D>::CultureProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6)->get_CultureProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::AcceleratorKeyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_AcceleratorKeyProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetAcceleratorKey(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetAcceleratorKey(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::AccessKeyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_AccessKeyProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetAccessKey(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetAccessKey(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetAccessKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetAccessKey(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::AutomationIdProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_AutomationIdProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetAutomationId(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetAutomationId(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetAutomationId(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetAutomationId(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::HelpTextProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_HelpTextProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetHelpText(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetHelpText(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetHelpText(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetHelpText(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::IsRequiredForFormProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_IsRequiredForFormProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetIsRequiredForForm(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetIsRequiredForForm(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::ItemStatusProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_ItemStatusProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetItemStatus(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetItemStatus(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetItemStatus(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetItemStatus(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::ItemTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_ItemTypeProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetItemType(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetItemType(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetItemType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetItemType(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::LabeledByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_LabeledByProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetLabeledBy(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetLabeledBy(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetLabeledBy(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetLabeledBy(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::NameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_NameProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetName(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetName(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetName(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetName(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::LiveSettingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_LiveSettingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetLiveSetting(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetLiveSetting(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetLiveSetting(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetLiveSetting(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::AccessibilityViewProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->get_AccessibilityViewProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AccessibilityView consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::GetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::Automation::Peers::AccessibilityView value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->GetAccessibilityView(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::SetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AccessibilityView const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->SetAccessibilityView(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::ControlledPeersProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->get_ControlledPeersProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::GetControlledPeers(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->GetControlledPeers(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::PositionInSetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->get_PositionInSetProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::GetPositionInSet(Windows::UI::Xaml::DependencyObject const& element) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->GetPositionInSet(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::SetPositionInSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->SetPositionInSet(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::SizeOfSetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->get_SizeOfSetProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::GetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->GetSizeOfSet(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::SetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->SetSizeOfSet(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::LevelProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->get_LevelProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::GetLevel(Windows::UI::Xaml::DependencyObject const& element) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->GetLevel(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::SetLevel(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->SetLevel(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::AnnotationsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->get_AnnotationsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::GetAnnotations(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->GetAnnotations(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::LandmarkTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->get_LandmarkTypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::GetLandmarkType(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->GetLandmarkType(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::SetLandmarkType(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->SetLandmarkType(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::LocalizedLandmarkTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->get_LocalizedLandmarkTypeProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::GetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->GetLocalizedLandmarkType(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::SetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->SetLocalizedLandmarkType(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::IsPeripheralProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_IsPeripheralProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetIsPeripheral(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::SetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->SetIsPeripheral(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::IsDataValidForFormProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_IsDataValidForFormProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetIsDataValidForForm(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::SetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->SetIsDataValidForForm(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::FullDescriptionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_FullDescriptionProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetFullDescription(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetFullDescription(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::SetFullDescription(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->SetFullDescription(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::LocalizedControlTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_LocalizedControlTypeProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetLocalizedControlType(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::SetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->SetLocalizedControlType(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::DescribedByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_DescribedByProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetDescribedBy(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetDescribedBy(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::FlowsToProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_FlowsToProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetFlowsTo(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetFlowsTo(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::FlowsFromProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_FlowsFromProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetFlowsFrom(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetFlowsFrom(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6<D>::CultureProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6)->get_CultureProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6<D>::GetCulture(Windows::UI::Xaml::DependencyObject const& element) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6)->GetCulture(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6<D>::SetCulture(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6)->SetCulture(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IDockPatternIdentifiersStatics<D>::DockPositionProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics)->get_DockPositionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>::DropEffectProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics)->get_DropEffectProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>::DropEffectsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics)->get_DropEffectsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>::GrabbedItemsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics)->get_GrabbedItemsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>::IsGrabbedProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics)->get_IsGrabbedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics<D>::DropTargetEffectProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics)->get_DropTargetEffectProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics<D>::DropTargetEffectsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics)->get_DropTargetEffectsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics<D>::ExpandCollapseStateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics)->get_ExpandCollapseStateProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::ColumnProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_ColumnProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::ColumnSpanProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_ColumnSpanProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::ContainingGridProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_ContainingGridProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::RowProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_RowProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::RowSpanProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_RowSpanProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics<D>::ColumnCountProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics)->get_ColumnCountProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics<D>::RowCountProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics)->get_RowCountProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics<D>::CurrentViewProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics)->get_CurrentViewProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics<D>::SupportedViewsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics)->get_SupportedViewsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::IsReadOnlyProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_IsReadOnlyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::LargeChangeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_LargeChangeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::MaximumProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_MaximumProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::MinimumProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_MinimumProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::SmallChangeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_SmallChangeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_ValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::HorizontallyScrollableProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_HorizontallyScrollableProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::HorizontalScrollPercentProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_HorizontalScrollPercentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::HorizontalViewSizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_HorizontalViewSizeProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::NoScroll() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_NoScroll(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::VerticallyScrollableProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_VerticallyScrollableProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::VerticalScrollPercentProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_VerticalScrollPercentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::VerticalViewSizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_VerticalViewSizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics<D>::IsSelectedProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics)->get_IsSelectedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics<D>::SelectionContainerProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics)->get_SelectionContainerProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics<D>::CanSelectMultipleProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics)->get_CanSelectMultipleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics<D>::IsSelectionRequiredProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics)->get_IsSelectionRequiredProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics<D>::SelectionProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics)->get_SelectionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics<D>::FormulaProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics)->get_FormulaProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::ExtendedPropertiesProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_ExtendedPropertiesProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::FillColorProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_FillColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::FillPatternColorProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_FillPatternColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::FillPatternStyleProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_FillPatternStyleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::ShapeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_ShapeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::StyleIdProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_StyleIdProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::StyleNameProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_StyleNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics<D>::ColumnHeaderItemsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics)->get_ColumnHeaderItemsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics<D>::RowHeaderItemsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics)->get_RowHeaderItemsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics<D>::ColumnHeadersProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics)->get_ColumnHeadersProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics<D>::RowHeadersProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics)->get_RowHeadersProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics<D>::RowOrColumnMajorProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics)->get_RowOrColumnMajorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITogglePatternIdentifiersStatics<D>::ToggleStateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics)->get_ToggleStateProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>::CanZoomProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics)->get_CanZoomProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>::ZoomLevelProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics)->get_ZoomLevelProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>::MaxZoomProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics)->get_MaxZoomProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>::MinZoomProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics)->get_MinZoomProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics<D>::CanMoveProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics)->get_CanMoveProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics<D>::CanResizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics)->get_CanResizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics<D>::CanRotateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics)->get_CanRotateProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics<D>::IsReadOnlyProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics)->get_IsReadOnlyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics)->get_ValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::CanMaximizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_CanMaximizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::CanMinimizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_CanMinimizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::IsModalProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_IsModalProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::IsTopmostProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_IsTopmostProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::WindowInteractionStateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_WindowInteractionStateProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::WindowVisualStateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_WindowVisualStateProperty(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>
{
    HRESULT __stdcall get_AnnotationTypeIdProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationTypeIdProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationTypeNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationTypeNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthorProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTimeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateTimeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotation> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotation>
{
    HRESULT __stdcall get_Type(abi_t<Windows::UI::Xaml::Automation::AnnotationType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(abi_t<Windows::UI::Xaml::Automation::AnnotationType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Element(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Element());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Element(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Element(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotationFactory> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>
{
    HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Xaml::Automation::AnnotationType> type, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithElementParameter(abi_t<Windows::UI::Xaml::Automation::AnnotationType> type, ::IUnknown* element, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateWithElementParameter(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&type), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotationStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>
{
    HRESULT __stdcall get_TypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ElementProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>
{
    HRESULT __stdcall get_AcceleratorKeyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AcceleratorKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutomationIdProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutomationIdProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingRectangleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundingRectangleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClassNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClassNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClickablePointProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClickablePointProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasKeyboardFocusProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasKeyboardFocusProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HelpTextProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HelpTextProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsContentElementProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsContentElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlElementProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsControlElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsKeyboardFocusableProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsKeyboardFocusableProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOffscreenProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOffscreenProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPasswordProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPasswordProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRequiredForFormProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRequiredForFormProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemStatusProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemStatusProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LabeledByProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LabeledByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalizedControlTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalizedControlTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OrientationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OrientationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LiveSettingProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LiveSettingProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2>
{
    HRESULT __stdcall get_ControlledPeersProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlledPeersProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>
{
    HRESULT __stdcall get_PositionInSetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionInSetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeOfSetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeOfSetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LevelProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LevelProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationsProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>
{
    HRESULT __stdcall get_LandmarkTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LandmarkTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalizedLandmarkTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalizedLandmarkTypeProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>
{
    HRESULT __stdcall get_IsPeripheralProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPeripheralProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataValidForFormProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDataValidForFormProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullDescriptionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullDescriptionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DescribedByProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DescribedByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowsToProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlowsToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowsFromProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlowsFromProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6>
{
    HRESULT __stdcall get_CultureProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CultureProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationProperties> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationProperties>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>
{
    HRESULT __stdcall get_AcceleratorKeyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AcceleratorKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAcceleratorKey(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAcceleratorKey(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAcceleratorKey(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAcceleratorKey(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAccessKey(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAccessKey(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAccessKey(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAccessKey(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutomationIdProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutomationIdProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAutomationId(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAutomationId(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAutomationId(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAutomationId(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HelpTextProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HelpTextProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHelpText(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHelpText(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetHelpText(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHelpText(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRequiredForFormProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRequiredForFormProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsRequiredForForm(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIsRequiredForForm(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsRequiredForForm(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsRequiredForForm(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemStatusProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemStatusProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemStatus(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetItemStatus(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetItemStatus(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetItemStatus(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemType(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetItemType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetItemType(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetItemType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LabeledByProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LabeledByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLabeledBy(::IUnknown* element, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLabeledBy(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLabeledBy(::IUnknown* element, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLabeledBy(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetName(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetName(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetName(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetName(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LiveSettingProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LiveSettingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLiveSetting(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLiveSetting(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLiveSetting(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLiveSetting(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>
{
    HRESULT __stdcall get_AccessibilityViewProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessibilityViewProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAccessibilityView(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AccessibilityView>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAccessibilityView(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAccessibilityView(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AccessibilityView> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAccessibilityView(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AccessibilityView const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlledPeersProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlledPeersProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetControlledPeers(::IUnknown* element, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetControlledPeers(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>
{
    HRESULT __stdcall get_PositionInSetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionInSetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPositionInSet(::IUnknown* element, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPositionInSet(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPositionInSet(::IUnknown* element, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPositionInSet(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeOfSetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeOfSetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSizeOfSet(::IUnknown* element, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSizeOfSet(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSizeOfSet(::IUnknown* element, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSizeOfSet(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LevelProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LevelProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLevel(::IUnknown* element, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLevel(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLevel(::IUnknown* element, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLevel(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnnotations(::IUnknown* element, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAnnotations(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>
{
    HRESULT __stdcall get_LandmarkTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LandmarkTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLandmarkType(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLandmarkType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLandmarkType(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLandmarkType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalizedLandmarkTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalizedLandmarkTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocalizedLandmarkType(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLocalizedLandmarkType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLocalizedLandmarkType(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLocalizedLandmarkType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>
{
    HRESULT __stdcall get_IsPeripheralProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPeripheralProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsPeripheral(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIsPeripheral(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsPeripheral(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsPeripheral(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataValidForFormProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDataValidForFormProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsDataValidForForm(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIsDataValidForForm(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsDataValidForForm(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsDataValidForForm(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullDescriptionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullDescriptionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFullDescription(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetFullDescription(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFullDescription(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFullDescription(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalizedControlTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalizedControlTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocalizedControlType(::IUnknown* element, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLocalizedControlType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLocalizedControlType(::IUnknown* element, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLocalizedControlType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DescribedByProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DescribedByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDescribedBy(::IUnknown* element, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDescribedBy(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowsToProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlowsToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFlowsTo(::IUnknown* element, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetFlowsTo(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowsFromProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlowsFromProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFlowsFrom(::IUnknown* element, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetFlowsFrom(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>
{
    HRESULT __stdcall get_CultureProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CultureProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCulture(::IUnknown* element, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCulture(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCulture(::IUnknown* element, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCulture(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationProperty> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationProperty>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics>
{
    HRESULT __stdcall get_DockPositionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DockPositionProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>
{
    HRESULT __stdcall get_DropEffectProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DropEffectProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropEffectsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DropEffectsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GrabbedItemsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GrabbedItemsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGrabbedProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGrabbedProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>
{
    HRESULT __stdcall get_DropTargetEffectProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DropTargetEffectProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropTargetEffectsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DropTargetEffectsProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics>
{
    HRESULT __stdcall get_ExpandCollapseStateProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpandCollapseStateProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>
{
    HRESULT __stdcall get_ColumnProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColumnProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColumnSpanProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColumnSpanProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainingGridProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContainingGridProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowSpanProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowSpanProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>
{
    HRESULT __stdcall get_ColumnCountProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColumnCountProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowCountProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowCountProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>
{
    HRESULT __stdcall get_CurrentViewProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentViewProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedViewsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedViewsProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>
{
    HRESULT __stdcall get_IsReadOnlyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReadOnlyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeChangeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LargeChangeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaximumProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinimumProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallChangeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmallChangeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValueProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>
{
    HRESULT __stdcall get_HorizontallyScrollableProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontallyScrollableProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalScrollPercentProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalScrollPercentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalViewSizeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalViewSizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NoScroll(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NoScroll());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticallyScrollableProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticallyScrollableProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalScrollPercentProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalScrollPercentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalViewSizeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalViewSizeProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>
{
    HRESULT __stdcall get_IsSelectedProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSelectedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionContainerProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectionContainerProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>
{
    HRESULT __stdcall get_CanSelectMultipleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanSelectMultipleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSelectionRequiredProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSelectionRequiredProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectionProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics>
{
    HRESULT __stdcall get_FormulaProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormulaProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>
{
    HRESULT __stdcall get_ExtendedPropertiesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedPropertiesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillColorProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillColorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillPatternColorProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillPatternColorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillPatternStyleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillPatternStyleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShapeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShapeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleIdProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleIdProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleNameProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>
{
    HRESULT __stdcall get_ColumnHeaderItemsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColumnHeaderItemsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowHeaderItemsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowHeaderItemsProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>
{
    HRESULT __stdcall get_ColumnHeadersProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColumnHeadersProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowHeadersProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowHeadersProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowOrColumnMajorProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RowOrColumnMajorProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics>
{
    HRESULT __stdcall get_ToggleStateProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleStateProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITransformPattern2Identifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPattern2Identifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>
{
    HRESULT __stdcall get_CanZoomProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanZoomProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevelProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomLevelProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxZoomProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxZoomProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinZoomProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinZoomProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>
{
    HRESULT __stdcall get_CanMoveProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanMoveProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanResizeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanResizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRotateProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanRotateProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>
{
    HRESULT __stdcall get_IsReadOnlyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReadOnlyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValueProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>
{
    HRESULT __stdcall get_CanMaximizeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanMaximizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanMinimizeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanMinimizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsModalProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsModalProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTopmostProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTopmostProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WindowInteractionStateProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WindowInteractionStateProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WindowVisualStateProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WindowVisualStateProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation {

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::AnnotationTypeIdProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>().AnnotationTypeIdProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::AnnotationTypeNameProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>().AnnotationTypeNameProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::AuthorProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>().AuthorProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::DateTimeProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>().DateTimeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::TargetProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>().TargetProperty();
}

inline AutomationAnnotation::AutomationAnnotation() :
    AutomationAnnotation(activate_instance<AutomationAnnotation>())
{}

inline AutomationAnnotation::AutomationAnnotation(Windows::UI::Xaml::Automation::AnnotationType const& type) :
    AutomationAnnotation(get_activation_factory<AutomationAnnotation, Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>().CreateInstance(type))
{}

inline AutomationAnnotation::AutomationAnnotation(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::UIElement const& element) :
    AutomationAnnotation(get_activation_factory<AutomationAnnotation, Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>().CreateWithElementParameter(type, element))
{}

inline Windows::UI::Xaml::DependencyProperty AutomationAnnotation::TypeProperty()
{
    return get_activation_factory<AutomationAnnotation, Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>().TypeProperty();
}

inline Windows::UI::Xaml::DependencyProperty AutomationAnnotation::ElementProperty()
{
    return get_activation_factory<AutomationAnnotation, Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>().ElementProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::AcceleratorKeyProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().AcceleratorKeyProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::AccessKeyProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().AccessKeyProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::AutomationIdProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().AutomationIdProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::BoundingRectangleProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().BoundingRectangleProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ClassNameProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().ClassNameProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ClickablePointProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().ClickablePointProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ControlTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().ControlTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::HasKeyboardFocusProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().HasKeyboardFocusProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::HelpTextProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().HelpTextProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsContentElementProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().IsContentElementProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsControlElementProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().IsControlElementProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsEnabledProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().IsEnabledProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsKeyboardFocusableProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().IsKeyboardFocusableProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsOffscreenProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().IsOffscreenProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsPasswordProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().IsPasswordProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsRequiredForFormProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().IsRequiredForFormProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ItemStatusProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().ItemStatusProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ItemTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().ItemTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LabeledByProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().LabeledByProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LocalizedControlTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().LocalizedControlTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::NameProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().NameProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::OrientationProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().OrientationProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LiveSettingProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>().LiveSettingProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ControlledPeersProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2>().ControlledPeersProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::PositionInSetProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>().PositionInSetProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::SizeOfSetProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>().SizeOfSetProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LevelProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>().LevelProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::AnnotationsProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>().AnnotationsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LandmarkTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>().LandmarkTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LocalizedLandmarkTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>().LocalizedLandmarkTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsPeripheralProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>().IsPeripheralProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsDataValidForFormProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>().IsDataValidForFormProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::FullDescriptionProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>().FullDescriptionProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::DescribedByProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>().DescribedByProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::FlowsToProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>().FlowsToProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::FlowsFromProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>().FlowsFromProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::CultureProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6>().CultureProperty();
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AcceleratorKeyProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().AcceleratorKeyProperty();
}

inline hstring AutomationProperties::GetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetAcceleratorKey(element);
}

inline void AutomationProperties::SetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetAcceleratorKey(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AccessKeyProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().AccessKeyProperty();
}

inline hstring AutomationProperties::GetAccessKey(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetAccessKey(element);
}

inline void AutomationProperties::SetAccessKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetAccessKey(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AutomationIdProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().AutomationIdProperty();
}

inline hstring AutomationProperties::GetAutomationId(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetAutomationId(element);
}

inline void AutomationProperties::SetAutomationId(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetAutomationId(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::HelpTextProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().HelpTextProperty();
}

inline hstring AutomationProperties::GetHelpText(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetHelpText(element);
}

inline void AutomationProperties::SetHelpText(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetHelpText(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::IsRequiredForFormProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().IsRequiredForFormProperty();
}

inline bool AutomationProperties::GetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetIsRequiredForForm(element);
}

inline void AutomationProperties::SetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetIsRequiredForForm(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::ItemStatusProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().ItemStatusProperty();
}

inline hstring AutomationProperties::GetItemStatus(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetItemStatus(element);
}

inline void AutomationProperties::SetItemStatus(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetItemStatus(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::ItemTypeProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().ItemTypeProperty();
}

inline hstring AutomationProperties::GetItemType(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetItemType(element);
}

inline void AutomationProperties::SetItemType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetItemType(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LabeledByProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().LabeledByProperty();
}

inline Windows::UI::Xaml::UIElement AutomationProperties::GetLabeledBy(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetLabeledBy(element);
}

inline void AutomationProperties::SetLabeledBy(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::UIElement const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetLabeledBy(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::NameProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().NameProperty();
}

inline hstring AutomationProperties::GetName(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetName(element);
}

inline void AutomationProperties::SetName(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetName(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LiveSettingProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().LiveSettingProperty();
}

inline Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting AutomationProperties::GetLiveSetting(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().GetLiveSetting(element);
}

inline void AutomationProperties::SetLiveSetting(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>().SetLiveSetting(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AccessibilityViewProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>().AccessibilityViewProperty();
}

inline Windows::UI::Xaml::Automation::Peers::AccessibilityView AutomationProperties::GetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>().GetAccessibilityView(element);
}

inline void AutomationProperties::SetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AccessibilityView const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>().SetAccessibilityView(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::ControlledPeersProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>().ControlledPeersProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> AutomationProperties::GetControlledPeers(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>().GetControlledPeers(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::PositionInSetProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().PositionInSetProperty();
}

inline int32_t AutomationProperties::GetPositionInSet(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().GetPositionInSet(element);
}

inline void AutomationProperties::SetPositionInSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().SetPositionInSet(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::SizeOfSetProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().SizeOfSetProperty();
}

inline int32_t AutomationProperties::GetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().GetSizeOfSet(element);
}

inline void AutomationProperties::SetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().SetSizeOfSet(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LevelProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().LevelProperty();
}

inline int32_t AutomationProperties::GetLevel(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().GetLevel(element);
}

inline void AutomationProperties::SetLevel(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().SetLevel(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AnnotationsProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().AnnotationsProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> AutomationProperties::GetAnnotations(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>().GetAnnotations(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LandmarkTypeProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>().LandmarkTypeProperty();
}

inline Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType AutomationProperties::GetLandmarkType(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>().GetLandmarkType(element);
}

inline void AutomationProperties::SetLandmarkType(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>().SetLandmarkType(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LocalizedLandmarkTypeProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>().LocalizedLandmarkTypeProperty();
}

inline hstring AutomationProperties::GetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>().GetLocalizedLandmarkType(element);
}

inline void AutomationProperties::SetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>().SetLocalizedLandmarkType(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::IsPeripheralProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().IsPeripheralProperty();
}

inline bool AutomationProperties::GetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().GetIsPeripheral(element);
}

inline void AutomationProperties::SetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().SetIsPeripheral(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::IsDataValidForFormProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().IsDataValidForFormProperty();
}

inline bool AutomationProperties::GetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().GetIsDataValidForForm(element);
}

inline void AutomationProperties::SetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().SetIsDataValidForForm(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::FullDescriptionProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().FullDescriptionProperty();
}

inline hstring AutomationProperties::GetFullDescription(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().GetFullDescription(element);
}

inline void AutomationProperties::SetFullDescription(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().SetFullDescription(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LocalizedControlTypeProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().LocalizedControlTypeProperty();
}

inline hstring AutomationProperties::GetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().GetLocalizedControlType(element);
}

inline void AutomationProperties::SetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().SetLocalizedControlType(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::DescribedByProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().DescribedByProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> AutomationProperties::GetDescribedBy(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().GetDescribedBy(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::FlowsToProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().FlowsToProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> AutomationProperties::GetFlowsTo(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().GetFlowsTo(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::FlowsFromProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().FlowsFromProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> AutomationProperties::GetFlowsFrom(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>().GetFlowsFrom(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::CultureProperty()
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>().CultureProperty();
}

inline int32_t AutomationProperties::GetCulture(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>().GetCulture(element);
}

inline void AutomationProperties::SetCulture(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
{
    get_activation_factory<AutomationProperties, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>().SetCulture(element, value);
}

inline Windows::UI::Xaml::Automation::AutomationProperty DockPatternIdentifiers::DockPositionProperty()
{
    return get_activation_factory<DockPatternIdentifiers, Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics>().DockPositionProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DragPatternIdentifiers::DropEffectProperty()
{
    return get_activation_factory<DragPatternIdentifiers, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>().DropEffectProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DragPatternIdentifiers::DropEffectsProperty()
{
    return get_activation_factory<DragPatternIdentifiers, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>().DropEffectsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DragPatternIdentifiers::GrabbedItemsProperty()
{
    return get_activation_factory<DragPatternIdentifiers, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>().GrabbedItemsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DragPatternIdentifiers::IsGrabbedProperty()
{
    return get_activation_factory<DragPatternIdentifiers, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>().IsGrabbedProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DropTargetPatternIdentifiers::DropTargetEffectProperty()
{
    return get_activation_factory<DropTargetPatternIdentifiers, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>().DropTargetEffectProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DropTargetPatternIdentifiers::DropTargetEffectsProperty()
{
    return get_activation_factory<DropTargetPatternIdentifiers, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>().DropTargetEffectsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ExpandCollapsePatternIdentifiers::ExpandCollapseStateProperty()
{
    return get_activation_factory<ExpandCollapsePatternIdentifiers, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics>().ExpandCollapseStateProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::ColumnProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>().ColumnProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::ColumnSpanProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>().ColumnSpanProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::ContainingGridProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>().ContainingGridProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::RowProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>().RowProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::RowSpanProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>().RowSpanProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridPatternIdentifiers::ColumnCountProperty()
{
    return get_activation_factory<GridPatternIdentifiers, Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>().ColumnCountProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridPatternIdentifiers::RowCountProperty()
{
    return get_activation_factory<GridPatternIdentifiers, Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>().RowCountProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty MultipleViewPatternIdentifiers::CurrentViewProperty()
{
    return get_activation_factory<MultipleViewPatternIdentifiers, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>().CurrentViewProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty MultipleViewPatternIdentifiers::SupportedViewsProperty()
{
    return get_activation_factory<MultipleViewPatternIdentifiers, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>().SupportedViewsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::IsReadOnlyProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>().IsReadOnlyProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::LargeChangeProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>().LargeChangeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::MaximumProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>().MaximumProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::MinimumProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>().MinimumProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::SmallChangeProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>().SmallChangeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::ValueProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>().ValueProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::HorizontallyScrollableProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>().HorizontallyScrollableProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::HorizontalScrollPercentProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>().HorizontalScrollPercentProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::HorizontalViewSizeProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>().HorizontalViewSizeProperty();
}

inline double ScrollPatternIdentifiers::NoScroll()
{
    return get_activation_factory<ScrollPatternIdentifiers, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>().NoScroll();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::VerticallyScrollableProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>().VerticallyScrollableProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::VerticalScrollPercentProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>().VerticalScrollPercentProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::VerticalViewSizeProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>().VerticalViewSizeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionItemPatternIdentifiers::IsSelectedProperty()
{
    return get_activation_factory<SelectionItemPatternIdentifiers, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>().IsSelectedProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionItemPatternIdentifiers::SelectionContainerProperty()
{
    return get_activation_factory<SelectionItemPatternIdentifiers, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>().SelectionContainerProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionPatternIdentifiers::CanSelectMultipleProperty()
{
    return get_activation_factory<SelectionPatternIdentifiers, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>().CanSelectMultipleProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionPatternIdentifiers::IsSelectionRequiredProperty()
{
    return get_activation_factory<SelectionPatternIdentifiers, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>().IsSelectionRequiredProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionPatternIdentifiers::SelectionProperty()
{
    return get_activation_factory<SelectionPatternIdentifiers, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>().SelectionProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SpreadsheetItemPatternIdentifiers::FormulaProperty()
{
    return get_activation_factory<SpreadsheetItemPatternIdentifiers, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics>().FormulaProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::ExtendedPropertiesProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>().ExtendedPropertiesProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::FillColorProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>().FillColorProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::FillPatternColorProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>().FillPatternColorProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::FillPatternStyleProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>().FillPatternStyleProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::ShapeProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>().ShapeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::StyleIdProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>().StyleIdProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::StyleNameProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>().StyleNameProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TableItemPatternIdentifiers::ColumnHeaderItemsProperty()
{
    return get_activation_factory<TableItemPatternIdentifiers, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>().ColumnHeaderItemsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TableItemPatternIdentifiers::RowHeaderItemsProperty()
{
    return get_activation_factory<TableItemPatternIdentifiers, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>().RowHeaderItemsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TablePatternIdentifiers::ColumnHeadersProperty()
{
    return get_activation_factory<TablePatternIdentifiers, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>().ColumnHeadersProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TablePatternIdentifiers::RowHeadersProperty()
{
    return get_activation_factory<TablePatternIdentifiers, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>().RowHeadersProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TablePatternIdentifiers::RowOrColumnMajorProperty()
{
    return get_activation_factory<TablePatternIdentifiers, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>().RowOrColumnMajorProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TogglePatternIdentifiers::ToggleStateProperty()
{
    return get_activation_factory<TogglePatternIdentifiers, Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics>().ToggleStateProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPattern2Identifiers::CanZoomProperty()
{
    return get_activation_factory<TransformPattern2Identifiers, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>().CanZoomProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPattern2Identifiers::ZoomLevelProperty()
{
    return get_activation_factory<TransformPattern2Identifiers, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>().ZoomLevelProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPattern2Identifiers::MaxZoomProperty()
{
    return get_activation_factory<TransformPattern2Identifiers, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>().MaxZoomProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPattern2Identifiers::MinZoomProperty()
{
    return get_activation_factory<TransformPattern2Identifiers, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>().MinZoomProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPatternIdentifiers::CanMoveProperty()
{
    return get_activation_factory<TransformPatternIdentifiers, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>().CanMoveProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPatternIdentifiers::CanResizeProperty()
{
    return get_activation_factory<TransformPatternIdentifiers, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>().CanResizeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPatternIdentifiers::CanRotateProperty()
{
    return get_activation_factory<TransformPatternIdentifiers, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>().CanRotateProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ValuePatternIdentifiers::IsReadOnlyProperty()
{
    return get_activation_factory<ValuePatternIdentifiers, Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>().IsReadOnlyProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ValuePatternIdentifiers::ValueProperty()
{
    return get_activation_factory<ValuePatternIdentifiers, Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>().ValueProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::CanMaximizeProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>().CanMaximizeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::CanMinimizeProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>().CanMinimizeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::IsModalProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>().IsModalProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::IsTopmostProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>().IsTopmostProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::WindowInteractionStateProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>().WindowInteractionStateProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::WindowVisualStateProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>().WindowVisualStateProperty();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotationFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationProperties> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationProperty> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IAutomationProperty> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDockPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IDockPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDragPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IDragPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IGridPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IGridPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IScrollPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IScrollPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IStylesPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IStylesPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITablePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITablePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITogglePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITogglePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITransformPattern2Identifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITransformPattern2Identifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITransformPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITransformPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IValuePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IValuePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IWindowPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IWindowPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::AnnotationPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::AnnotationPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::AutomationAnnotation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::AutomationAnnotation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::AutomationElementIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::AutomationElementIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::AutomationProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::AutomationProperties> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::AutomationProperty> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::AutomationProperty> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::DockPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::DockPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::DragPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::DragPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::DropTargetPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::DropTargetPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ExpandCollapsePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ExpandCollapsePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::GridItemPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::GridItemPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::GridPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::GridPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::MultipleViewPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::MultipleViewPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::RangeValuePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::RangeValuePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ScrollPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ScrollPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::SelectionItemPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::SelectionItemPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::SelectionPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::SelectionPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::SpreadsheetItemPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::SpreadsheetItemPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::StylesPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::StylesPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::TableItemPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::TableItemPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::TablePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::TablePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::TogglePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::TogglePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::TransformPattern2Identifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::TransformPattern2Identifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::TransformPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::TransformPatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::ValuePatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::ValuePatternIdentifiers> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::WindowPatternIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::WindowPatternIdentifiers> {};

}

WINRT_WARNING_POP
