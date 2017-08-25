// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation {

struct WINRT_EBO AnnotationPatternIdentifiers :
    Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers
{
    AnnotationPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty AnnotationTypeIdProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty AnnotationTypeNameProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty AuthorProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty DateTimeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty TargetProperty();
};

struct WINRT_EBO AutomationAnnotation :
    Windows::UI::Xaml::Automation::IAutomationAnnotation,
    impl::base<AutomationAnnotation, Windows::UI::Xaml::DependencyObject>,
    impl::require<AutomationAnnotation, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    AutomationAnnotation(std::nullptr_t) noexcept {}
    AutomationAnnotation();
    AutomationAnnotation(Windows::UI::Xaml::Automation::AnnotationType const& type);
    AutomationAnnotation(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::UIElement const& element);
    static Windows::UI::Xaml::DependencyProperty TypeProperty();
    static Windows::UI::Xaml::DependencyProperty ElementProperty();
};

struct WINRT_EBO AutomationElementIdentifiers :
    Windows::UI::Xaml::Automation::IAutomationElementIdentifiers
{
    AutomationElementIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty AcceleratorKeyProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty AccessKeyProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty AutomationIdProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty BoundingRectangleProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ClassNameProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ClickablePointProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ControlTypeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty HasKeyboardFocusProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty HelpTextProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsContentElementProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsControlElementProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsEnabledProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsKeyboardFocusableProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsOffscreenProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsPasswordProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsRequiredForFormProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ItemStatusProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ItemTypeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty LabeledByProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty LocalizedControlTypeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty NameProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty OrientationProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty LiveSettingProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ControlledPeersProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty PositionInSetProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty SizeOfSetProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty LevelProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty AnnotationsProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty LandmarkTypeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty LocalizedLandmarkTypeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsPeripheralProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsDataValidForFormProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty FullDescriptionProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty DescribedByProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty FlowsToProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty FlowsFromProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty CultureProperty();
};

struct WINRT_EBO AutomationProperties :
    Windows::UI::Xaml::Automation::IAutomationProperties
{
    AutomationProperties(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty AcceleratorKeyProperty();
    static hstring GetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element);
    static void SetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty AccessKeyProperty();
    static hstring GetAccessKey(Windows::UI::Xaml::DependencyObject const& element);
    static void SetAccessKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty AutomationIdProperty();
    static hstring GetAutomationId(Windows::UI::Xaml::DependencyObject const& element);
    static void SetAutomationId(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty HelpTextProperty();
    static hstring GetHelpText(Windows::UI::Xaml::DependencyObject const& element);
    static void SetHelpText(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty IsRequiredForFormProperty();
    static bool GetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty ItemStatusProperty();
    static hstring GetItemStatus(Windows::UI::Xaml::DependencyObject const& element);
    static void SetItemStatus(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty ItemTypeProperty();
    static hstring GetItemType(Windows::UI::Xaml::DependencyObject const& element);
    static void SetItemType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty LabeledByProperty();
    static Windows::UI::Xaml::UIElement GetLabeledBy(Windows::UI::Xaml::DependencyObject const& element);
    static void SetLabeledBy(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::UIElement const& value);
    static Windows::UI::Xaml::DependencyProperty NameProperty();
    static hstring GetName(Windows::UI::Xaml::DependencyObject const& element);
    static void SetName(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty LiveSettingProperty();
    static Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting GetLiveSetting(Windows::UI::Xaml::DependencyObject const& element);
    static void SetLiveSetting(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const& value);
    static Windows::UI::Xaml::DependencyProperty AccessibilityViewProperty();
    static Windows::UI::Xaml::Automation::Peers::AccessibilityView GetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element);
    static void SetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AccessibilityView const& value);
    static Windows::UI::Xaml::DependencyProperty ControlledPeersProperty();
    static Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> GetControlledPeers(Windows::UI::Xaml::DependencyObject const& element);
    static Windows::UI::Xaml::DependencyProperty PositionInSetProperty();
    static int32_t GetPositionInSet(Windows::UI::Xaml::DependencyObject const& element);
    static void SetPositionInSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty SizeOfSetProperty();
    static int32_t GetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element);
    static void SetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty LevelProperty();
    static int32_t GetLevel(Windows::UI::Xaml::DependencyObject const& element);
    static void SetLevel(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty AnnotationsProperty();
    static Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> GetAnnotations(Windows::UI::Xaml::DependencyObject const& element);
    static Windows::UI::Xaml::DependencyProperty LandmarkTypeProperty();
    static Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType GetLandmarkType(Windows::UI::Xaml::DependencyObject const& element);
    static void SetLandmarkType(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const& value);
    static Windows::UI::Xaml::DependencyProperty LocalizedLandmarkTypeProperty();
    static hstring GetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element);
    static void SetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty IsPeripheralProperty();
    static bool GetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty IsDataValidForFormProperty();
    static bool GetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty FullDescriptionProperty();
    static hstring GetFullDescription(Windows::UI::Xaml::DependencyObject const& element);
    static void SetFullDescription(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty LocalizedControlTypeProperty();
    static hstring GetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element);
    static void SetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    static Windows::UI::Xaml::DependencyProperty DescribedByProperty();
    static Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetDescribedBy(Windows::UI::Xaml::DependencyObject const& element);
    static Windows::UI::Xaml::DependencyProperty FlowsToProperty();
    static Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetFlowsTo(Windows::UI::Xaml::DependencyObject const& element);
    static Windows::UI::Xaml::DependencyProperty FlowsFromProperty();
    static Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetFlowsFrom(Windows::UI::Xaml::DependencyObject const& element);
    static Windows::UI::Xaml::DependencyProperty CultureProperty();
    static int32_t GetCulture(Windows::UI::Xaml::DependencyObject const& element);
    static void SetCulture(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
};

struct WINRT_EBO AutomationProperty :
    Windows::UI::Xaml::Automation::IAutomationProperty
{
    AutomationProperty(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DockPatternIdentifiers :
    Windows::UI::Xaml::Automation::IDockPatternIdentifiers
{
    DockPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty DockPositionProperty();
};

struct WINRT_EBO DragPatternIdentifiers :
    Windows::UI::Xaml::Automation::IDragPatternIdentifiers
{
    DragPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty DropEffectProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty DropEffectsProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty GrabbedItemsProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsGrabbedProperty();
};

struct WINRT_EBO DropTargetPatternIdentifiers :
    Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers
{
    DropTargetPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty DropTargetEffectProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty DropTargetEffectsProperty();
};

struct WINRT_EBO ExpandCollapsePatternIdentifiers :
    Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers
{
    ExpandCollapsePatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty ExpandCollapseStateProperty();
};

struct WINRT_EBO GridItemPatternIdentifiers :
    Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers
{
    GridItemPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty ColumnProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ColumnSpanProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ContainingGridProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty RowProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty RowSpanProperty();
};

struct WINRT_EBO GridPatternIdentifiers :
    Windows::UI::Xaml::Automation::IGridPatternIdentifiers
{
    GridPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty ColumnCountProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty RowCountProperty();
};

struct WINRT_EBO MultipleViewPatternIdentifiers :
    Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers
{
    MultipleViewPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty CurrentViewProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty SupportedViewsProperty();
};

struct WINRT_EBO RangeValuePatternIdentifiers :
    Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers
{
    RangeValuePatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty IsReadOnlyProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty LargeChangeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty MaximumProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty MinimumProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty SmallChangeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ValueProperty();
};

struct WINRT_EBO ScrollPatternIdentifiers :
    Windows::UI::Xaml::Automation::IScrollPatternIdentifiers
{
    ScrollPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty HorizontallyScrollableProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty HorizontalScrollPercentProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty HorizontalViewSizeProperty();
    static double NoScroll();
    static Windows::UI::Xaml::Automation::AutomationProperty VerticallyScrollableProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty VerticalScrollPercentProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty VerticalViewSizeProperty();
};

struct WINRT_EBO SelectionItemPatternIdentifiers :
    Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers
{
    SelectionItemPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty IsSelectedProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty SelectionContainerProperty();
};

struct WINRT_EBO SelectionPatternIdentifiers :
    Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers
{
    SelectionPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty CanSelectMultipleProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsSelectionRequiredProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty SelectionProperty();
};

struct WINRT_EBO SpreadsheetItemPatternIdentifiers :
    Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers
{
    SpreadsheetItemPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty FormulaProperty();
};

struct WINRT_EBO StylesPatternIdentifiers :
    Windows::UI::Xaml::Automation::IStylesPatternIdentifiers
{
    StylesPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty ExtendedPropertiesProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty FillColorProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty FillPatternColorProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty FillPatternStyleProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ShapeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty StyleIdProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty StyleNameProperty();
};

struct WINRT_EBO TableItemPatternIdentifiers :
    Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers
{
    TableItemPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty ColumnHeaderItemsProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty RowHeaderItemsProperty();
};

struct WINRT_EBO TablePatternIdentifiers :
    Windows::UI::Xaml::Automation::ITablePatternIdentifiers
{
    TablePatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty ColumnHeadersProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty RowHeadersProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty RowOrColumnMajorProperty();
};

struct WINRT_EBO TogglePatternIdentifiers :
    Windows::UI::Xaml::Automation::ITogglePatternIdentifiers
{
    TogglePatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty ToggleStateProperty();
};

struct WINRT_EBO TransformPattern2Identifiers :
    Windows::UI::Xaml::Automation::ITransformPattern2Identifiers
{
    TransformPattern2Identifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty CanZoomProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ZoomLevelProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty MaxZoomProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty MinZoomProperty();
};

struct WINRT_EBO TransformPatternIdentifiers :
    Windows::UI::Xaml::Automation::ITransformPatternIdentifiers
{
    TransformPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty CanMoveProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty CanResizeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty CanRotateProperty();
};

struct WINRT_EBO ValuePatternIdentifiers :
    Windows::UI::Xaml::Automation::IValuePatternIdentifiers
{
    ValuePatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty IsReadOnlyProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty ValueProperty();
};

struct WINRT_EBO WindowPatternIdentifiers :
    Windows::UI::Xaml::Automation::IWindowPatternIdentifiers
{
    WindowPatternIdentifiers(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Automation::AutomationProperty CanMaximizeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty CanMinimizeProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsModalProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty IsTopmostProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty WindowInteractionStateProperty();
    static Windows::UI::Xaml::Automation::AutomationProperty WindowVisualStateProperty();
};

}
