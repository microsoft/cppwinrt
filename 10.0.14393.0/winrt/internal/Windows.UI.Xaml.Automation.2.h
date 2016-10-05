// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Automation.1.h"
#include "Windows.UI.Xaml.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_42e26ae1_d357_57e8_bb48_f75c9ff69d91
#define WINRT_GENERIC_42e26ae1_d357_57e8_bb48_f75c9ff69d91
template <> struct __declspec(uuid("42e26ae1-d357-57e8-bb48-f75c9ff69d91")) __declspec(novtable) IIterable<Windows::UI::Xaml::UIElement> : impl_IIterable<Windows::UI::Xaml::UIElement> {};
#endif

#ifndef WINRT_GENERIC_b4c1e3ac_8768_5b9d_a661_f63330b8507b
#define WINRT_GENERIC_b4c1e3ac_8768_5b9d_a661_f63330b8507b
template <> struct __declspec(uuid("b4c1e3ac-8768-5b9d-a661-f63330b8507b")) __declspec(novtable) IVector<Windows::UI::Xaml::UIElement> : impl_IVector<Windows::UI::Xaml::UIElement> {};
#endif

#ifndef WINRT_GENERIC_771b857e_ab5c_5db8_a021_397c92cdc44c
#define WINRT_GENERIC_771b857e_ab5c_5db8_a021_397c92cdc44c
template <> struct __declspec(uuid("771b857e-ab5c-5db8-a021-397c92cdc44c")) __declspec(novtable) IVector<Windows::UI::Xaml::DependencyObject> : impl_IVector<Windows::UI::Xaml::DependencyObject> {};
#endif

#ifndef WINRT_GENERIC_f66c6bd3_55b4_5bbb_b82a_6d9ce383091a
#define WINRT_GENERIC_f66c6bd3_55b4_5bbb_b82a_6d9ce383091a
template <> struct __declspec(uuid("f66c6bd3-55b4-5bbb-b82a-6d9ce383091a")) __declspec(novtable) IIterable<Windows::UI::Xaml::DependencyObject> : impl_IIterable<Windows::UI::Xaml::DependencyObject> {};
#endif

#ifndef WINRT_GENERIC_73596c82_f6e5_5b57_8dc5_556cb7a8fbe6
#define WINRT_GENERIC_73596c82_f6e5_5b57_8dc5_556cb7a8fbe6
template <> struct __declspec(uuid("73596c82-f6e5-5b57-8dc5-556cb7a8fbe6")) __declspec(novtable) IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> : impl_IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> {};
#endif

#ifndef WINRT_GENERIC_1d1f9d60_d53b_57f7_b144_8f7c487846e8
#define WINRT_GENERIC_1d1f9d60_d53b_57f7_b144_8f7c487846e8
template <> struct __declspec(uuid("1d1f9d60-d53b-57f7-b144-8f7c487846e8")) __declspec(novtable) IIterator<Windows::UI::Xaml::UIElement> : impl_IIterator<Windows::UI::Xaml::UIElement> {};
#endif

#ifndef WINRT_GENERIC_f3864c10_14a4_5516_b1d9_63b6579429b1
#define WINRT_GENERIC_f3864c10_14a4_5516_b1d9_63b6579429b1
template <> struct __declspec(uuid("f3864c10-14a4-5516-b1d9-63b6579429b1")) __declspec(novtable) IVectorView<Windows::UI::Xaml::UIElement> : impl_IVectorView<Windows::UI::Xaml::UIElement> {};
#endif

#ifndef WINRT_GENERIC_29f8d454_905d_587e_b9d8_bfd418805a65
#define WINRT_GENERIC_29f8d454_905d_587e_b9d8_bfd418805a65
template <> struct __declspec(uuid("29f8d454-905d-587e-b9d8-bfd418805a65")) __declspec(novtable) IIterator<Windows::UI::Xaml::DependencyObject> : impl_IIterator<Windows::UI::Xaml::DependencyObject> {};
#endif

#ifndef WINRT_GENERIC_fe750d77_1307_5df2_a021_1c7a8d6b80ad
#define WINRT_GENERIC_fe750d77_1307_5df2_a021_1c7a8d6b80ad
template <> struct __declspec(uuid("fe750d77-1307-5df2-a021-1c7a8d6b80ad")) __declspec(novtable) IVectorView<Windows::UI::Xaml::DependencyObject> : impl_IVectorView<Windows::UI::Xaml::DependencyObject> {};
#endif

#ifndef WINRT_GENERIC_7ed32ba3_db0c_5a54_ab43_30628afbc2d8
#define WINRT_GENERIC_7ed32ba3_db0c_5a54_ab43_30628afbc2d8
template <> struct __declspec(uuid("7ed32ba3-db0c-5a54-ab43-30628afbc2d8")) __declspec(novtable) IIterator<Windows::UI::Xaml::Automation::AutomationAnnotation> : impl_IIterator<Windows::UI::Xaml::Automation::AutomationAnnotation> {};
#endif

#ifndef WINRT_GENERIC_c6e210cb_1c7b_5e6a_936b_61d4e536a291
#define WINRT_GENERIC_c6e210cb_1c7b_5e6a_936b_61d4e536a291
template <> struct __declspec(uuid("c6e210cb-1c7b-5e6a-936b-61d4e536a291")) __declspec(novtable) IIterable<Windows::UI::Xaml::Automation::AutomationAnnotation> : impl_IIterable<Windows::UI::Xaml::Automation::AutomationAnnotation> {};
#endif

#ifndef WINRT_GENERIC_a4b8a26c_9009_5394_98c8_98107e80db61
#define WINRT_GENERIC_a4b8a26c_9009_5394_98c8_98107e80db61
template <> struct __declspec(uuid("a4b8a26c-9009-5394-98c8-98107e80db61")) __declspec(novtable) IVectorView<Windows::UI::Xaml::Automation::AutomationAnnotation> : impl_IVectorView<Windows::UI::Xaml::Automation::AutomationAnnotation> {};
#endif


}

namespace Windows::UI::Xaml::Automation {

template <typename D>
struct WINRT_EBO impl_IAnnotationPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IAnnotationPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty AnnotationTypeIdProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty AnnotationTypeNameProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty AuthorProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty DateTimeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty TargetProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationAnnotation
{
    Windows::UI::Xaml::Automation::AnnotationType Type() const;
    void Type(Windows::UI::Xaml::Automation::AnnotationType value) const;
    Windows::UI::Xaml::UIElement Element() const;
    void Element(const Windows::UI::Xaml::UIElement & value) const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationAnnotationFactory
{
    Windows::UI::Xaml::Automation::AutomationAnnotation CreateInstance(Windows::UI::Xaml::Automation::AnnotationType type) const;
    Windows::UI::Xaml::Automation::AutomationAnnotation CreateWithElementParameter(Windows::UI::Xaml::Automation::AnnotationType type, const Windows::UI::Xaml::UIElement & element) const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationAnnotationStatics
{
    Windows::UI::Xaml::DependencyProperty TypeProperty() const;
    Windows::UI::Xaml::DependencyProperty ElementProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationElementIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IAutomationElementIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty AcceleratorKeyProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty AccessKeyProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty AutomationIdProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty BoundingRectangleProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ClassNameProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ClickablePointProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ControlTypeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty HasKeyboardFocusProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty HelpTextProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsContentElementProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsControlElementProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsEnabledProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsKeyboardFocusableProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsOffscreenProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsPasswordProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsRequiredForFormProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ItemStatusProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ItemTypeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LabeledByProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LocalizedControlTypeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty NameProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty OrientationProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LiveSettingProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationElementIdentifiersStatics2
{
    Windows::UI::Xaml::Automation::AutomationProperty ControlledPeersProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationElementIdentifiersStatics3
{
    Windows::UI::Xaml::Automation::AutomationProperty PositionInSetProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SizeOfSetProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LevelProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty AnnotationsProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationElementIdentifiersStatics4
{
    Windows::UI::Xaml::Automation::AutomationProperty LandmarkTypeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LocalizedLandmarkTypeProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationElementIdentifiersStatics5
{
    Windows::UI::Xaml::Automation::AutomationProperty IsPeripheralProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsDataValidForFormProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FullDescriptionProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty DescribedByProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FlowsToProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FlowsFromProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationProperties
{
};

template <typename D>
struct WINRT_EBO impl_IAutomationPropertiesStatics
{
    Windows::UI::Xaml::DependencyProperty AcceleratorKeyProperty() const;
    hstring GetAcceleratorKey(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetAcceleratorKey(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty AccessKeyProperty() const;
    hstring GetAccessKey(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetAccessKey(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty AutomationIdProperty() const;
    hstring GetAutomationId(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetAutomationId(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty HelpTextProperty() const;
    hstring GetHelpText(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetHelpText(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty IsRequiredForFormProperty() const;
    bool GetIsRequiredForForm(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetIsRequiredForForm(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty ItemStatusProperty() const;
    hstring GetItemStatus(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetItemStatus(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty ItemTypeProperty() const;
    hstring GetItemType(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetItemType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty LabeledByProperty() const;
    Windows::UI::Xaml::UIElement GetLabeledBy(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetLabeledBy(const Windows::UI::Xaml::DependencyObject & element, const Windows::UI::Xaml::UIElement & value) const;
    Windows::UI::Xaml::DependencyProperty NameProperty() const;
    hstring GetName(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetName(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty LiveSettingProperty() const;
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting GetLiveSetting(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetLiveSetting(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting value) const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationPropertiesStatics2
{
    Windows::UI::Xaml::DependencyProperty AccessibilityViewProperty() const;
    Windows::UI::Xaml::Automation::Peers::AccessibilityView GetAccessibilityView(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetAccessibilityView(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AccessibilityView value) const;
    Windows::UI::Xaml::DependencyProperty ControlledPeersProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> GetControlledPeers(const Windows::UI::Xaml::DependencyObject & element) const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationPropertiesStatics3
{
    Windows::UI::Xaml::DependencyProperty PositionInSetProperty() const;
    int32_t GetPositionInSet(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetPositionInSet(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty SizeOfSetProperty() const;
    int32_t GetSizeOfSet(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetSizeOfSet(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty LevelProperty() const;
    int32_t GetLevel(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetLevel(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty AnnotationsProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> GetAnnotations(const Windows::UI::Xaml::DependencyObject & element) const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationPropertiesStatics4
{
    Windows::UI::Xaml::DependencyProperty LandmarkTypeProperty() const;
    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType GetLandmarkType(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetLandmarkType(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType value) const;
    Windows::UI::Xaml::DependencyProperty LocalizedLandmarkTypeProperty() const;
    hstring GetLocalizedLandmarkType(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetLocalizedLandmarkType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationPropertiesStatics5
{
    Windows::UI::Xaml::DependencyProperty IsPeripheralProperty() const;
    bool GetIsPeripheral(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetIsPeripheral(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty IsDataValidForFormProperty() const;
    bool GetIsDataValidForForm(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetIsDataValidForForm(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty FullDescriptionProperty() const;
    hstring GetFullDescription(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetFullDescription(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty LocalizedControlTypeProperty() const;
    hstring GetLocalizedControlType(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetLocalizedControlType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
    Windows::UI::Xaml::DependencyProperty DescribedByProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetDescribedBy(const Windows::UI::Xaml::DependencyObject & element) const;
    Windows::UI::Xaml::DependencyProperty FlowsToProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetFlowsTo(const Windows::UI::Xaml::DependencyObject & element) const;
    Windows::UI::Xaml::DependencyProperty FlowsFromProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetFlowsFrom(const Windows::UI::Xaml::DependencyObject & element) const;
};

template <typename D>
struct WINRT_EBO impl_IAutomationProperty
{
};

template <typename D>
struct WINRT_EBO impl_IDockPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IDockPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty DockPositionProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IDragPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IDragPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty DropEffectProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty DropEffectsProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty GrabbedItemsProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsGrabbedProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IDropTargetPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IDropTargetPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty DropTargetEffectProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty DropTargetEffectsProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IExpandCollapsePatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IExpandCollapsePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ExpandCollapseStateProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IGridItemPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IGridItemPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ColumnProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ColumnSpanProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ContainingGridProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowSpanProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IGridPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IGridPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ColumnCountProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowCountProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IMultipleViewPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IMultipleViewPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CurrentViewProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SupportedViewsProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IRangeValuePatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IRangeValuePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty IsReadOnlyProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LargeChangeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty MaximumProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty MinimumProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SmallChangeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ValueProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IScrollPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IScrollPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty HorizontallyScrollableProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty HorizontalScrollPercentProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty HorizontalViewSizeProperty() const;
    double NoScroll() const;
    Windows::UI::Xaml::Automation::AutomationProperty VerticallyScrollableProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty VerticalScrollPercentProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty VerticalViewSizeProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ISelectionItemPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_ISelectionItemPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty IsSelectedProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SelectionContainerProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ISelectionPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_ISelectionPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CanSelectMultipleProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsSelectionRequiredProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SelectionProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ISpreadsheetItemPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_ISpreadsheetItemPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty FormulaProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IStylesPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IStylesPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ExtendedPropertiesProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FillColorProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FillPatternColorProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FillPatternStyleProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ShapeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty StyleIdProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty StyleNameProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITableItemPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_ITableItemPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ColumnHeaderItemsProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowHeaderItemsProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITablePatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_ITablePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ColumnHeadersProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowHeadersProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowOrColumnMajorProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITogglePatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_ITogglePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ToggleStateProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITransformPattern2Identifiers
{
};

template <typename D>
struct WINRT_EBO impl_ITransformPattern2IdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CanZoomProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ZoomLevelProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty MaxZoomProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty MinZoomProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITransformPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_ITransformPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CanMoveProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty CanResizeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty CanRotateProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IValuePatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IValuePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty IsReadOnlyProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ValueProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IWindowPatternIdentifiers
{
};

template <typename D>
struct WINRT_EBO impl_IWindowPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CanMaximizeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty CanMinimizeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsModalProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsTopmostProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty WindowInteractionStateProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty WindowVisualStateProperty() const;
};

struct IAnnotationPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IAnnotationPatternIdentifiers>
{
    IAnnotationPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAnnotationPatternIdentifiers>(m_ptr); }
};

struct IAnnotationPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IAnnotationPatternIdentifiersStatics>
{
    IAnnotationPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAnnotationPatternIdentifiersStatics>(m_ptr); }
};

struct IAutomationAnnotation :
    Windows::IInspectable,
    impl::consume<IAutomationAnnotation>
{
    IAutomationAnnotation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationAnnotation>(m_ptr); }
};

struct IAutomationAnnotationFactory :
    Windows::IInspectable,
    impl::consume<IAutomationAnnotationFactory>
{
    IAutomationAnnotationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationAnnotationFactory>(m_ptr); }
};

struct IAutomationAnnotationStatics :
    Windows::IInspectable,
    impl::consume<IAutomationAnnotationStatics>
{
    IAutomationAnnotationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationAnnotationStatics>(m_ptr); }
};

struct IAutomationElementIdentifiers :
    Windows::IInspectable,
    impl::consume<IAutomationElementIdentifiers>
{
    IAutomationElementIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationElementIdentifiers>(m_ptr); }
};

struct IAutomationElementIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IAutomationElementIdentifiersStatics>
{
    IAutomationElementIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationElementIdentifiersStatics>(m_ptr); }
};

struct IAutomationElementIdentifiersStatics2 :
    Windows::IInspectable,
    impl::consume<IAutomationElementIdentifiersStatics2>
{
    IAutomationElementIdentifiersStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationElementIdentifiersStatics2>(m_ptr); }
};

struct IAutomationElementIdentifiersStatics3 :
    Windows::IInspectable,
    impl::consume<IAutomationElementIdentifiersStatics3>
{
    IAutomationElementIdentifiersStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationElementIdentifiersStatics3>(m_ptr); }
};

struct IAutomationElementIdentifiersStatics4 :
    Windows::IInspectable,
    impl::consume<IAutomationElementIdentifiersStatics4>
{
    IAutomationElementIdentifiersStatics4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationElementIdentifiersStatics4>(m_ptr); }
};

struct IAutomationElementIdentifiersStatics5 :
    Windows::IInspectable,
    impl::consume<IAutomationElementIdentifiersStatics5>
{
    IAutomationElementIdentifiersStatics5(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationElementIdentifiersStatics5>(m_ptr); }
};

struct IAutomationProperties :
    Windows::IInspectable,
    impl::consume<IAutomationProperties>
{
    IAutomationProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationProperties>(m_ptr); }
};

struct IAutomationPropertiesStatics :
    Windows::IInspectable,
    impl::consume<IAutomationPropertiesStatics>
{
    IAutomationPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPropertiesStatics>(m_ptr); }
};

struct IAutomationPropertiesStatics2 :
    Windows::IInspectable,
    impl::consume<IAutomationPropertiesStatics2>
{
    IAutomationPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPropertiesStatics2>(m_ptr); }
};

struct IAutomationPropertiesStatics3 :
    Windows::IInspectable,
    impl::consume<IAutomationPropertiesStatics3>
{
    IAutomationPropertiesStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPropertiesStatics3>(m_ptr); }
};

struct IAutomationPropertiesStatics4 :
    Windows::IInspectable,
    impl::consume<IAutomationPropertiesStatics4>
{
    IAutomationPropertiesStatics4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPropertiesStatics4>(m_ptr); }
};

struct IAutomationPropertiesStatics5 :
    Windows::IInspectable,
    impl::consume<IAutomationPropertiesStatics5>
{
    IAutomationPropertiesStatics5(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationPropertiesStatics5>(m_ptr); }
};

struct IAutomationProperty :
    Windows::IInspectable,
    impl::consume<IAutomationProperty>
{
    IAutomationProperty(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAutomationProperty>(m_ptr); }
};

struct IDockPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IDockPatternIdentifiers>
{
    IDockPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDockPatternIdentifiers>(m_ptr); }
};

struct IDockPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IDockPatternIdentifiersStatics>
{
    IDockPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDockPatternIdentifiersStatics>(m_ptr); }
};

struct IDragPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IDragPatternIdentifiers>
{
    IDragPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragPatternIdentifiers>(m_ptr); }
};

struct IDragPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IDragPatternIdentifiersStatics>
{
    IDragPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragPatternIdentifiersStatics>(m_ptr); }
};

struct IDropTargetPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IDropTargetPatternIdentifiers>
{
    IDropTargetPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDropTargetPatternIdentifiers>(m_ptr); }
};

struct IDropTargetPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IDropTargetPatternIdentifiersStatics>
{
    IDropTargetPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDropTargetPatternIdentifiersStatics>(m_ptr); }
};

struct IExpandCollapsePatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IExpandCollapsePatternIdentifiers>
{
    IExpandCollapsePatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IExpandCollapsePatternIdentifiers>(m_ptr); }
};

struct IExpandCollapsePatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IExpandCollapsePatternIdentifiersStatics>
{
    IExpandCollapsePatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IExpandCollapsePatternIdentifiersStatics>(m_ptr); }
};

struct IGridItemPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IGridItemPatternIdentifiers>
{
    IGridItemPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridItemPatternIdentifiers>(m_ptr); }
};

struct IGridItemPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IGridItemPatternIdentifiersStatics>
{
    IGridItemPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridItemPatternIdentifiersStatics>(m_ptr); }
};

struct IGridPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IGridPatternIdentifiers>
{
    IGridPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridPatternIdentifiers>(m_ptr); }
};

struct IGridPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IGridPatternIdentifiersStatics>
{
    IGridPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridPatternIdentifiersStatics>(m_ptr); }
};

struct IMultipleViewPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IMultipleViewPatternIdentifiers>
{
    IMultipleViewPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMultipleViewPatternIdentifiers>(m_ptr); }
};

struct IMultipleViewPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IMultipleViewPatternIdentifiersStatics>
{
    IMultipleViewPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMultipleViewPatternIdentifiersStatics>(m_ptr); }
};

struct IRangeValuePatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IRangeValuePatternIdentifiers>
{
    IRangeValuePatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeValuePatternIdentifiers>(m_ptr); }
};

struct IRangeValuePatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IRangeValuePatternIdentifiersStatics>
{
    IRangeValuePatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeValuePatternIdentifiersStatics>(m_ptr); }
};

struct IScrollPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IScrollPatternIdentifiers>
{
    IScrollPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollPatternIdentifiers>(m_ptr); }
};

struct IScrollPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IScrollPatternIdentifiersStatics>
{
    IScrollPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollPatternIdentifiersStatics>(m_ptr); }
};

struct ISelectionItemPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<ISelectionItemPatternIdentifiers>
{
    ISelectionItemPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectionItemPatternIdentifiers>(m_ptr); }
};

struct ISelectionItemPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ISelectionItemPatternIdentifiersStatics>
{
    ISelectionItemPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectionItemPatternIdentifiersStatics>(m_ptr); }
};

struct ISelectionPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<ISelectionPatternIdentifiers>
{
    ISelectionPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectionPatternIdentifiers>(m_ptr); }
};

struct ISelectionPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ISelectionPatternIdentifiersStatics>
{
    ISelectionPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectionPatternIdentifiersStatics>(m_ptr); }
};

struct ISpreadsheetItemPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<ISpreadsheetItemPatternIdentifiers>
{
    ISpreadsheetItemPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpreadsheetItemPatternIdentifiers>(m_ptr); }
};

struct ISpreadsheetItemPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ISpreadsheetItemPatternIdentifiersStatics>
{
    ISpreadsheetItemPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpreadsheetItemPatternIdentifiersStatics>(m_ptr); }
};

struct IStylesPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IStylesPatternIdentifiers>
{
    IStylesPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStylesPatternIdentifiers>(m_ptr); }
};

struct IStylesPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IStylesPatternIdentifiersStatics>
{
    IStylesPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStylesPatternIdentifiersStatics>(m_ptr); }
};

struct ITableItemPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<ITableItemPatternIdentifiers>
{
    ITableItemPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITableItemPatternIdentifiers>(m_ptr); }
};

struct ITableItemPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ITableItemPatternIdentifiersStatics>
{
    ITableItemPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITableItemPatternIdentifiersStatics>(m_ptr); }
};

struct ITablePatternIdentifiers :
    Windows::IInspectable,
    impl::consume<ITablePatternIdentifiers>
{
    ITablePatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITablePatternIdentifiers>(m_ptr); }
};

struct ITablePatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ITablePatternIdentifiersStatics>
{
    ITablePatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITablePatternIdentifiersStatics>(m_ptr); }
};

struct ITogglePatternIdentifiers :
    Windows::IInspectable,
    impl::consume<ITogglePatternIdentifiers>
{
    ITogglePatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITogglePatternIdentifiers>(m_ptr); }
};

struct ITogglePatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ITogglePatternIdentifiersStatics>
{
    ITogglePatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITogglePatternIdentifiersStatics>(m_ptr); }
};

struct ITransformPattern2Identifiers :
    Windows::IInspectable,
    impl::consume<ITransformPattern2Identifiers>
{
    ITransformPattern2Identifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITransformPattern2Identifiers>(m_ptr); }
};

struct ITransformPattern2IdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ITransformPattern2IdentifiersStatics>
{
    ITransformPattern2IdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITransformPattern2IdentifiersStatics>(m_ptr); }
};

struct ITransformPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<ITransformPatternIdentifiers>
{
    ITransformPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITransformPatternIdentifiers>(m_ptr); }
};

struct ITransformPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ITransformPatternIdentifiersStatics>
{
    ITransformPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITransformPatternIdentifiersStatics>(m_ptr); }
};

struct IValuePatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IValuePatternIdentifiers>
{
    IValuePatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IValuePatternIdentifiers>(m_ptr); }
};

struct IValuePatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IValuePatternIdentifiersStatics>
{
    IValuePatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IValuePatternIdentifiersStatics>(m_ptr); }
};

struct IWindowPatternIdentifiers :
    Windows::IInspectable,
    impl::consume<IWindowPatternIdentifiers>
{
    IWindowPatternIdentifiers(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWindowPatternIdentifiers>(m_ptr); }
};

struct IWindowPatternIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IWindowPatternIdentifiersStatics>
{
    IWindowPatternIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWindowPatternIdentifiersStatics>(m_ptr); }
};

}

}
