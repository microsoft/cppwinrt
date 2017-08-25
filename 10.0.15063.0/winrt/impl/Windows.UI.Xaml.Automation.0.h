// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyObject;
struct DependencyProperty;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Peers {

enum class AccessibilityView;
enum class AutomationLandmarkType;
enum class AutomationLiveSetting;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation {

enum class AnnotationType
{
    Unknown = 60000,
    SpellingError = 60001,
    GrammarError = 60002,
    Comment = 60003,
    FormulaError = 60004,
    TrackChanges = 60005,
    Header = 60006,
    Footer = 60007,
    Highlighted = 60008,
    Endnote = 60009,
    Footnote = 60010,
    InsertionChange = 60011,
    DeletionChange = 60012,
    MoveChange = 60013,
    FormatChange = 60014,
    UnsyncedChange = 60015,
    EditingLockedChange = 60016,
    ExternalChange = 60017,
    ConflictingChange = 60018,
    Author = 60019,
    AdvancedProofingIssue = 60020,
    DataValidationError = 60021,
    CircularReferenceError = 60022,
};

enum class AutomationActiveEnd
{
    None = 0,
    Start = 1,
    End = 2,
};

enum class AutomationAnimationStyle
{
    None = 0,
    LasVegasLights = 1,
    BlinkingBackground = 2,
    SparkleText = 3,
    MarchingBlackAnts = 4,
    MarchingRedAnts = 5,
    Shimmer = 6,
    Other = 7,
};

enum class AutomationBulletStyle
{
    None = 0,
    HollowRoundBullet = 1,
    FilledRoundBullet = 2,
    HollowSquareBullet = 3,
    FilledSquareBullet = 4,
    DashBullet = 5,
    Other = 6,
};

enum class AutomationCaretBidiMode
{
    LTR = 0,
    RTL = 1,
};

enum class AutomationCaretPosition
{
    Unknown = 0,
    EndOfLine = 1,
    BeginningOfLine = 2,
};

enum class AutomationFlowDirections
{
    Default = 0,
    RightToLeft = 1,
    BottomToTop = 2,
    Vertical = 3,
};

enum class AutomationOutlineStyles
{
    None = 0,
    Outline = 1,
    Shadow = 2,
    Engraved = 3,
    Embossed = 4,
};

enum class AutomationStyleId
{
    Heading1 = 70001,
    Heading2 = 70002,
    Heading3 = 70003,
    Heading4 = 70004,
    Heading5 = 70005,
    Heading6 = 70006,
    Heading7 = 70007,
    Heading8 = 70008,
    Heading9 = 70009,
    Title = 70010,
    Subtitle = 70011,
    Normal = 70012,
    Emphasis = 70013,
    Quote = 70014,
    BulletedList = 70015,
};

enum class AutomationTextDecorationLineStyle
{
    None = 0,
    Single = 1,
    WordsOnly = 2,
    Double = 3,
    Dot = 4,
    Dash = 5,
    DashDot = 6,
    DashDotDot = 7,
    Wavy = 8,
    ThickSingle = 9,
    DoubleWavy = 10,
    ThickWavy = 11,
    LongDash = 12,
    ThickDash = 13,
    ThickDashDot = 14,
    ThickDashDotDot = 15,
    ThickDot = 16,
    ThickLongDash = 17,
    Other = 18,
};

enum class AutomationTextEditChangeType
{
    None = 0,
    AutoCorrect = 1,
    Composition = 2,
    CompositionFinalized = 3,
};

enum class DockPosition
{
    Top = 0,
    Left = 1,
    Bottom = 2,
    Right = 3,
    Fill = 4,
    None = 5,
};

enum class ExpandCollapseState
{
    Collapsed = 0,
    Expanded = 1,
    PartiallyExpanded = 2,
    LeafNode = 3,
};

enum class RowOrColumnMajor
{
    RowMajor = 0,
    ColumnMajor = 1,
    Indeterminate = 2,
};

enum class ScrollAmount
{
    LargeDecrement = 0,
    SmallDecrement = 1,
    NoAmount = 2,
    LargeIncrement = 3,
    SmallIncrement = 4,
};

enum class SupportedTextSelection
{
    None = 0,
    Single = 1,
    Multiple = 2,
};

enum class SynchronizedInputType
{
    KeyUp = 1,
    KeyDown = 2,
    LeftMouseUp = 4,
    LeftMouseDown = 8,
    RightMouseUp = 16,
    RightMouseDown = 32,
};

enum class ToggleState
{
    Off = 0,
    On = 1,
    Indeterminate = 2,
};

enum class WindowInteractionState
{
    Running = 0,
    Closing = 1,
    ReadyForUserInteraction = 2,
    BlockedByModalWindow = 3,
    NotResponding = 4,
};

enum class WindowVisualState
{
    Normal = 0,
    Maximized = 1,
    Minimized = 2,
};

enum class ZoomUnit
{
    NoAmount = 0,
    LargeDecrement = 1,
    SmallDecrement = 2,
    LargeIncrement = 3,
    SmallIncrement = 4,
};

struct IAnnotationPatternIdentifiers;
struct IAnnotationPatternIdentifiersStatics;
struct IAutomationAnnotation;
struct IAutomationAnnotationFactory;
struct IAutomationAnnotationStatics;
struct IAutomationElementIdentifiers;
struct IAutomationElementIdentifiersStatics;
struct IAutomationElementIdentifiersStatics2;
struct IAutomationElementIdentifiersStatics3;
struct IAutomationElementIdentifiersStatics4;
struct IAutomationElementIdentifiersStatics5;
struct IAutomationElementIdentifiersStatics6;
struct IAutomationProperties;
struct IAutomationPropertiesStatics;
struct IAutomationPropertiesStatics2;
struct IAutomationPropertiesStatics3;
struct IAutomationPropertiesStatics4;
struct IAutomationPropertiesStatics5;
struct IAutomationPropertiesStatics6;
struct IAutomationProperty;
struct IDockPatternIdentifiers;
struct IDockPatternIdentifiersStatics;
struct IDragPatternIdentifiers;
struct IDragPatternIdentifiersStatics;
struct IDropTargetPatternIdentifiers;
struct IDropTargetPatternIdentifiersStatics;
struct IExpandCollapsePatternIdentifiers;
struct IExpandCollapsePatternIdentifiersStatics;
struct IGridItemPatternIdentifiers;
struct IGridItemPatternIdentifiersStatics;
struct IGridPatternIdentifiers;
struct IGridPatternIdentifiersStatics;
struct IMultipleViewPatternIdentifiers;
struct IMultipleViewPatternIdentifiersStatics;
struct IRangeValuePatternIdentifiers;
struct IRangeValuePatternIdentifiersStatics;
struct IScrollPatternIdentifiers;
struct IScrollPatternIdentifiersStatics;
struct ISelectionItemPatternIdentifiers;
struct ISelectionItemPatternIdentifiersStatics;
struct ISelectionPatternIdentifiers;
struct ISelectionPatternIdentifiersStatics;
struct ISpreadsheetItemPatternIdentifiers;
struct ISpreadsheetItemPatternIdentifiersStatics;
struct IStylesPatternIdentifiers;
struct IStylesPatternIdentifiersStatics;
struct ITableItemPatternIdentifiers;
struct ITableItemPatternIdentifiersStatics;
struct ITablePatternIdentifiers;
struct ITablePatternIdentifiersStatics;
struct ITogglePatternIdentifiers;
struct ITogglePatternIdentifiersStatics;
struct ITransformPattern2Identifiers;
struct ITransformPattern2IdentifiersStatics;
struct ITransformPatternIdentifiers;
struct ITransformPatternIdentifiersStatics;
struct IValuePatternIdentifiers;
struct IValuePatternIdentifiersStatics;
struct IWindowPatternIdentifiers;
struct IWindowPatternIdentifiersStatics;
struct AnnotationPatternIdentifiers;
struct AutomationAnnotation;
struct AutomationElementIdentifiers;
struct AutomationProperties;
struct AutomationProperty;
struct DockPatternIdentifiers;
struct DragPatternIdentifiers;
struct DropTargetPatternIdentifiers;
struct ExpandCollapsePatternIdentifiers;
struct GridItemPatternIdentifiers;
struct GridPatternIdentifiers;
struct MultipleViewPatternIdentifiers;
struct RangeValuePatternIdentifiers;
struct ScrollPatternIdentifiers;
struct SelectionItemPatternIdentifiers;
struct SelectionPatternIdentifiers;
struct SpreadsheetItemPatternIdentifiers;
struct StylesPatternIdentifiers;
struct TableItemPatternIdentifiers;
struct TablePatternIdentifiers;
struct TogglePatternIdentifiers;
struct TransformPattern2Identifiers;
struct TransformPatternIdentifiers;
struct ValuePatternIdentifiers;
struct WindowPatternIdentifiers;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationAnnotation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationElementIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationProperties>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IAutomationProperty>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IDockPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IDragPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IGridPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IScrollPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IStylesPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITablePatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITogglePatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITransformPattern2Identifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITransformPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IValuePatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IWindowPatternIdentifiers>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::AnnotationPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationAnnotation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationElementIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationProperties>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationProperty>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::DockPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::DragPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::DropTargetPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::ExpandCollapsePatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::GridItemPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::GridPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::MultipleViewPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::RangeValuePatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::ScrollPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::SelectionItemPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::SelectionPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::SpreadsheetItemPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::StylesPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::TableItemPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::TablePatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::TogglePatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::TransformPattern2Identifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::TransformPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::ValuePatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::WindowPatternIdentifiers>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::AnnotationType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationActiveEnd>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationAnimationStyle>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationBulletStyle>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationCaretBidiMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationCaretPosition>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationFlowDirections>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationOutlineStyles>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationStyleId>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationTextDecorationLineStyle>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::AutomationTextEditChangeType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::DockPosition>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::ExpandCollapseState>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::RowOrColumnMajor>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::ScrollAmount>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::SupportedTextSelection>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::SynchronizedInputType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::ToggleState>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::WindowInteractionState>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::WindowVisualState>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::ZoomUnit>{ using type = enum_category; };
template <> struct name<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationAnnotation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationAnnotation" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationAnnotationFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationAnnotationStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationElementIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics2" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics3" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics4" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics5" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics6" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationProperties>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationProperties" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics2" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics3" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics4" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics5" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics6" }; };
template <> struct name<Windows::UI::Xaml::Automation::IAutomationProperty>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IAutomationProperty" }; };
template <> struct name<Windows::UI::Xaml::Automation::IDockPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IDockPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IDockPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IDragPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IDragPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IDragPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IGridItemPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IGridPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IGridPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IGridPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IScrollPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IScrollPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IScrollPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ISelectionPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IStylesPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IStylesPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IStylesPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITableItemPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITablePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITablePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITablePatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITogglePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITogglePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITogglePatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITransformPattern2Identifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITransformPattern2Identifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITransformPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITransformPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ITransformPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IValuePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IValuePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IValuePatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::IWindowPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IWindowPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.IWindowPatternIdentifiersStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::AnnotationPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationAnnotation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationAnnotation" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationElementIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationElementIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationProperties>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationProperties" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationProperty>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationProperty" }; };
template <> struct name<Windows::UI::Xaml::Automation::DockPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.DockPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::DragPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.DragPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::DropTargetPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ExpandCollapsePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::GridItemPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.GridItemPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::GridPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.GridPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::MultipleViewPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::RangeValuePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ScrollPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ScrollPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::SelectionItemPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::SelectionPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.SelectionPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::SpreadsheetItemPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::StylesPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.StylesPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::TableItemPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.TableItemPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::TablePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.TablePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::TogglePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.TogglePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::TransformPattern2Identifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.TransformPattern2Identifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::TransformPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.TransformPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::ValuePatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ValuePatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::WindowPatternIdentifiers>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.WindowPatternIdentifiers" }; };
template <> struct name<Windows::UI::Xaml::Automation::AnnotationType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AnnotationType" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationActiveEnd>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationActiveEnd" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationAnimationStyle>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationAnimationStyle" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationBulletStyle>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationBulletStyle" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationCaretBidiMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationCaretBidiMode" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationCaretPosition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationCaretPosition" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationFlowDirections>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationFlowDirections" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationOutlineStyles>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationOutlineStyles" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationStyleId>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationStyleId" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationTextDecorationLineStyle>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationTextDecorationLineStyle" }; };
template <> struct name<Windows::UI::Xaml::Automation::AutomationTextEditChangeType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.AutomationTextEditChangeType" }; };
template <> struct name<Windows::UI::Xaml::Automation::DockPosition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.DockPosition" }; };
template <> struct name<Windows::UI::Xaml::Automation::ExpandCollapseState>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ExpandCollapseState" }; };
template <> struct name<Windows::UI::Xaml::Automation::RowOrColumnMajor>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.RowOrColumnMajor" }; };
template <> struct name<Windows::UI::Xaml::Automation::ScrollAmount>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ScrollAmount" }; };
template <> struct name<Windows::UI::Xaml::Automation::SupportedTextSelection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.SupportedTextSelection" }; };
template <> struct name<Windows::UI::Xaml::Automation::SynchronizedInputType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.SynchronizedInputType" }; };
template <> struct name<Windows::UI::Xaml::Automation::ToggleState>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ToggleState" }; };
template <> struct name<Windows::UI::Xaml::Automation::WindowInteractionState>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.WindowInteractionState" }; };
template <> struct name<Windows::UI::Xaml::Automation::WindowVisualState>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.WindowVisualState" }; };
template <> struct name<Windows::UI::Xaml::Automation::ZoomUnit>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.ZoomUnit" }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers>{ static constexpr GUID value{ 0xD475A0C1,0x48B2,0x4E40,{ 0xA6,0xCF,0x3D,0xC4,0xB6,0x38,0xC0,0xDE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>{ static constexpr GUID value{ 0xE0E3A35D,0xD167,0x46DC,{ 0x95,0xAB,0x33,0x0A,0xF6,0x1A,0xEB,0xB5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationAnnotation>{ static constexpr GUID value{ 0xFB3C30CA,0x03D8,0x4618,{ 0x91,0xBF,0xE4,0xD8,0x4F,0x4A,0xF3,0x18 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>{ static constexpr GUID value{ 0x4906FA52,0xDDC0,0x4E69,{ 0xB7,0x6B,0x01,0x9D,0x92,0x8D,0x82,0x2F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>{ static constexpr GUID value{ 0xE503EAB7,0x4EE5,0x48CB,{ 0xB5,0xB8,0xBB,0xCD,0x46,0xC9,0xD1,0xDA } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationElementIdentifiers>{ static constexpr GUID value{ 0xE68A63CF,0x4345,0x4E2D,{ 0x8A,0x6A,0x49,0xCC,0xE1,0xFA,0x2D,0xCC } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>{ static constexpr GUID value{ 0x4549399F,0x8340,0x4D67,{ 0xB9,0xBF,0x8C,0x2A,0xC6,0xA0,0x77,0x3A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2>{ static constexpr GUID value{ 0xB5CBB1E2,0xD55F,0x46A9,{ 0x9E,0xDA,0x1A,0x47,0x42,0x51,0x5D,0xC3 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>{ static constexpr GUID value{ 0x0F5CBEBD,0xB3EB,0x4083,{ 0xAD,0xC7,0x0C,0x2F,0x39,0xBB,0x35,0x43 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>{ static constexpr GUID value{ 0x5AF51F75,0x5913,0x4D78,{ 0xB3,0x30,0xA6,0xF5,0x0B,0x73,0xED,0x9B } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>{ static constexpr GUID value{ 0x986A8206,0xDE59,0x42F9,{ 0xA1,0xE7,0x62,0xB8,0xAF,0x9E,0x75,0x6D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6>{ static constexpr GUID value{ 0xDE52B00D,0x8328,0x4EAE,{ 0x80,0x35,0xF8,0xDB,0x99,0xC8,0xBA,0xC4 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationProperties>{ static constexpr GUID value{ 0x68D7232C,0xE622,0x48E9,{ 0xAF,0x0B,0x1F,0xFA,0x33,0xCC,0x5C,0xBA } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>{ static constexpr GUID value{ 0xB618FD7B,0x32D0,0x4970,{ 0x9C,0x42,0x7C,0x03,0x9A,0xC7,0xBE,0x78 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>{ static constexpr GUID value{ 0x3976547F,0x7089,0x4801,{ 0x8F,0x1D,0xAA,0xB7,0x80,0x90,0xD1,0xA0 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>{ static constexpr GUID value{ 0x7B75D735,0x5CB1,0x42AD,{ 0x9B,0x57,0x5F,0xAB,0xA8,0xC1,0x86,0x7F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>{ static constexpr GUID value{ 0xF7D62655,0x311A,0x4B7C,{ 0xA1,0x31,0x52,0x4E,0x89,0xCD,0x3C,0xF9 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>{ static constexpr GUID value{ 0x0BE35B26,0xC8F9,0x41A2,{ 0xB4,0xDB,0xE6,0xA7,0xA3,0x2B,0x0C,0x34 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>{ static constexpr GUID value{ 0xC61E030F,0xEB49,0x4E5D,{ 0xB0,0x12,0x4C,0x1C,0x96,0xC3,0x90,0x1B } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IAutomationProperty>{ static constexpr GUID value{ 0xB627195B,0x3227,0x4E16,{ 0x95,0x34,0xDD,0xEC,0xE3,0x0D,0xDB,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IDockPatternIdentifiers>{ static constexpr GUID value{ 0xCCD7F4E6,0xE4F9,0x47FF,{ 0xBD,0xE7,0x37,0x8B,0x11,0xF7,0x8E,0x09 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics>{ static constexpr GUID value{ 0x2B87245C,0xED80,0x4FE5,{ 0x8E,0xB4,0x70,0x8A,0x39,0xC8,0x41,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IDragPatternIdentifiers>{ static constexpr GUID value{ 0x6266E985,0x4D07,0x4E80,{ 0x82,0xEB,0x8F,0x96,0x69,0x0A,0x1A,0x0C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>{ static constexpr GUID value{ 0x2A05379D,0x1755,0x4082,{ 0x9D,0x90,0x46,0xF1,0x41,0x1D,0x79,0x86 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers>{ static constexpr GUID value{ 0x11865133,0xA6FE,0x4634,{ 0xBD,0x18,0x0E,0xF6,0x12,0xB7,0xB2,0x08 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>{ static constexpr GUID value{ 0x1B693304,0x89FB,0x4B0A,{ 0x94,0x52,0xCA,0x2C,0x66,0xAA,0xF9,0xF3 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers>{ static constexpr GUID value{ 0xB006BAC0,0x751B,0x4D55,{ 0x92,0xCB,0x61,0x3E,0xC1,0xBD,0xF5,0xD0 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics>{ static constexpr GUID value{ 0xD7816FD4,0x6EE0,0x4F38,{ 0x8E,0x14,0x56,0xEF,0x21,0xAD,0xAC,0xFD } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers>{ static constexpr GUID value{ 0x757744F1,0x3285,0x4FB1,{ 0x80,0x3B,0x25,0x45,0xBD,0x43,0x15,0x99 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>{ static constexpr GUID value{ 0x217D2402,0x5E46,0x4D61,{ 0x87,0x94,0xB8,0xEE,0x8E,0x77,0x47,0x14 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IGridPatternIdentifiers>{ static constexpr GUID value{ 0xC902980F,0x96C5,0x450C,{ 0x90,0x44,0x7E,0x52,0xC2,0x4F,0x9E,0x94 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>{ static constexpr GUID value{ 0x7BC452F3,0xA181,0x4137,{ 0x8D,0xE9,0x1F,0x9B,0x1A,0x83,0x20,0xED } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers>{ static constexpr GUID value{ 0x5D5CD3B8,0x1E12,0x488B,{ 0xB0,0xEA,0x5E,0x6C,0xB8,0x98,0x16,0xE1 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>{ static constexpr GUID value{ 0xA9CFA66F,0x6B84,0x4D71,{ 0x9E,0x48,0xD7,0x64,0xD3,0xBC,0xDA,0x8E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers>{ static constexpr GUID value{ 0xF8760F45,0x33C9,0x467D,{ 0xBC,0x9E,0xD1,0x51,0x52,0x63,0xAC,0xE1 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>{ static constexpr GUID value{ 0xCE23450F,0x1C27,0x457F,{ 0xB8,0x15,0x7A,0x5E,0x46,0x86,0x3D,0xBB } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IScrollPatternIdentifiers>{ static constexpr GUID value{ 0x366B1003,0x425C,0x4951,{ 0xAE,0x83,0xD5,0x21,0xE7,0x3B,0xC6,0x96 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>{ static constexpr GUID value{ 0x4BF8E0A1,0xFB7F,0x4FA4,{ 0x83,0xB3,0xCF,0xAE,0xB1,0x03,0xA6,0x85 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers>{ static constexpr GUID value{ 0x2DAFA41A,0x3EF8,0x4BB5,{ 0xA0,0x2B,0x3E,0xE1,0xB2,0x27,0x47,0x40 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>{ static constexpr GUID value{ 0xA918D163,0x487E,0x4E3E,{ 0x9F,0x86,0x7B,0x44,0xAC,0xBE,0x27,0xCE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers>{ static constexpr GUID value{ 0x4AA66FB0,0xE3F7,0x475F,{ 0xB7,0x8D,0xF8,0xA8,0x3B,0xB7,0x30,0xC4 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>{ static constexpr GUID value{ 0x93035B4C,0x6B50,0x40A1,{ 0xB2,0x3F,0x5C,0x78,0xDD,0xBD,0x47,0x9A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers>{ static constexpr GUID value{ 0x84347E19,0xCA4B,0x46A2,{ 0xA7,0x94,0xC8,0x79,0x28,0xA3,0xB1,0xAB } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics>{ static constexpr GUID value{ 0x43658779,0x5380,0x4F12,{ 0xB4,0x68,0xB4,0xF3,0x68,0xAD,0x44,0x99 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IStylesPatternIdentifiers>{ static constexpr GUID value{ 0xB0E4E201,0xE89D,0x436B,{ 0x82,0x87,0x4F,0x79,0x03,0x46,0x68,0x79 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>{ static constexpr GUID value{ 0x528A457A,0xBC3C,0x4D48,{ 0x94,0xAF,0x1F,0x68,0x70,0x3C,0xA2,0x96 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers>{ static constexpr GUID value{ 0xC326E5AD,0x8077,0x4C64,{ 0x98,0xE4,0xE8,0x3B,0xCF,0x1B,0x43,0x89 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>{ static constexpr GUID value{ 0x24C4B923,0xE9A2,0x4DE9,{ 0xB2,0xA4,0xA8,0xB2,0x2D,0x0B,0xE3,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITablePatternIdentifiers>{ static constexpr GUID value{ 0x38D104FE,0x0D0C,0x412A,{ 0xBF,0x8D,0x51,0xED,0xE6,0x83,0xBA,0xF5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>{ static constexpr GUID value{ 0x75073D25,0x32C9,0x4903,{ 0xAE,0xCF,0xDC,0x35,0x04,0xCB,0xD2,0x44 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITogglePatternIdentifiers>{ static constexpr GUID value{ 0x7E191F6B,0x34D4,0x4AE7,{ 0x83,0xAC,0x29,0xF8,0x88,0x82,0xD9,0x85 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics>{ static constexpr GUID value{ 0xC7F75544,0x14A5,0x4F2F,{ 0x92,0xFC,0x76,0x05,0x24,0xDE,0x06,0xEA } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITransformPattern2Identifiers>{ static constexpr GUID value{ 0x08AAA03D,0xDEA7,0x402F,{ 0x80,0x97,0x9A,0x27,0x83,0xD6,0x0E,0x5D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>{ static constexpr GUID value{ 0x78963644,0x11F0,0x467C,{ 0xA7,0x2B,0x5D,0xAC,0x41,0xC1,0xF6,0xFE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITransformPatternIdentifiers>{ static constexpr GUID value{ 0xE4115B8C,0xC3C8,0x4A37,{ 0xB9,0x94,0x27,0x09,0xA7,0x81,0x16,0x65 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>{ static constexpr GUID value{ 0x4570EDAB,0xD705,0x40C4,{ 0xA1,0xDC,0xE9,0xAC,0xFC,0xEF,0x85,0xF6 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IValuePatternIdentifiers>{ static constexpr GUID value{ 0x425BF64C,0x5333,0x4E41,{ 0xB4,0x70,0x2B,0xAD,0x14,0xEC,0xD0,0x85 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>{ static constexpr GUID value{ 0xC247E8F7,0xADCC,0x440F,{ 0xB1,0x23,0x33,0x78,0x8A,0x40,0x52,0x5A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IWindowPatternIdentifiers>{ static constexpr GUID value{ 0x39F78BB4,0x7032,0x41E2,{ 0xB7,0x9E,0x27,0xB7,0x4A,0x86,0x28,0xDE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>{ static constexpr GUID value{ 0x07D0AD06,0x6302,0x4D29,{ 0x87,0x8B,0x19,0xDA,0x03,0xFC,0x22,0x8D } }; };
template <> struct default_interface<Windows::UI::Xaml::Automation::AnnotationPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::AutomationAnnotation>{ using type = Windows::UI::Xaml::Automation::IAutomationAnnotation; };
template <> struct default_interface<Windows::UI::Xaml::Automation::AutomationElementIdentifiers>{ using type = Windows::UI::Xaml::Automation::IAutomationElementIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::AutomationProperties>{ using type = Windows::UI::Xaml::Automation::IAutomationProperties; };
template <> struct default_interface<Windows::UI::Xaml::Automation::AutomationProperty>{ using type = Windows::UI::Xaml::Automation::IAutomationProperty; };
template <> struct default_interface<Windows::UI::Xaml::Automation::DockPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IDockPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::DragPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IDragPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::DropTargetPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::ExpandCollapsePatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::GridItemPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::GridPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IGridPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::MultipleViewPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::RangeValuePatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::ScrollPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IScrollPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::SelectionItemPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::SelectionPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::SpreadsheetItemPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::StylesPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IStylesPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::TableItemPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::TablePatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::ITablePatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::TogglePatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::ITogglePatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::TransformPattern2Identifiers>{ using type = Windows::UI::Xaml::Automation::ITransformPattern2Identifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::TransformPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::ITransformPatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::ValuePatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IValuePatternIdentifiers; };
template <> struct default_interface<Windows::UI::Xaml::Automation::WindowPatternIdentifiers>{ using type = Windows::UI::Xaml::Automation::IWindowPatternIdentifiers; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty AnnotationTypeIdProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty AnnotationTypeNameProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty AuthorProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty DateTimeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty TargetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationAnnotation
{
    Windows::UI::Xaml::Automation::AnnotationType Type() const;
    void Type(Windows::UI::Xaml::Automation::AnnotationType const& value) const;
    Windows::UI::Xaml::UIElement Element() const;
    void Element(Windows::UI::Xaml::UIElement const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationAnnotation> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory
{
    Windows::UI::Xaml::Automation::AutomationAnnotation CreateInstance(Windows::UI::Xaml::Automation::AnnotationType const& type) const;
    Windows::UI::Xaml::Automation::AutomationAnnotation CreateWithElementParameter(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::UIElement const& element) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationAnnotationFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics
{
    Windows::UI::Xaml::DependencyProperty TypeProperty() const;
    Windows::UI::Xaml::DependencyProperty ElementProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationAnnotationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationElementIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics
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
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics2
{
    Windows::UI::Xaml::Automation::AutomationProperty ControlledPeersProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3
{
    Windows::UI::Xaml::Automation::AutomationProperty PositionInSetProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SizeOfSetProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LevelProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty AnnotationsProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4
{
    Windows::UI::Xaml::Automation::AutomationProperty LandmarkTypeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LocalizedLandmarkTypeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5
{
    Windows::UI::Xaml::Automation::AutomationProperty IsPeripheralProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsDataValidForFormProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FullDescriptionProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty DescribedByProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FlowsToProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FlowsFromProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics6
{
    Windows::UI::Xaml::Automation::AutomationProperty CultureProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics6<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationProperties
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationProperties> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationProperties<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics
{
    Windows::UI::Xaml::DependencyProperty AcceleratorKeyProperty() const;
    hstring GetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty AccessKeyProperty() const;
    hstring GetAccessKey(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetAccessKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty AutomationIdProperty() const;
    hstring GetAutomationId(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetAutomationId(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty HelpTextProperty() const;
    hstring GetHelpText(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetHelpText(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty IsRequiredForFormProperty() const;
    bool GetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty ItemStatusProperty() const;
    hstring GetItemStatus(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetItemStatus(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty ItemTypeProperty() const;
    hstring GetItemType(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetItemType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty LabeledByProperty() const;
    Windows::UI::Xaml::UIElement GetLabeledBy(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetLabeledBy(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::UIElement const& value) const;
    Windows::UI::Xaml::DependencyProperty NameProperty() const;
    hstring GetName(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetName(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty LiveSettingProperty() const;
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting GetLiveSetting(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetLiveSetting(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2
{
    Windows::UI::Xaml::DependencyProperty AccessibilityViewProperty() const;
    Windows::UI::Xaml::Automation::Peers::AccessibilityView GetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AccessibilityView const& value) const;
    Windows::UI::Xaml::DependencyProperty ControlledPeersProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> GetControlledPeers(Windows::UI::Xaml::DependencyObject const& element) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3
{
    Windows::UI::Xaml::DependencyProperty PositionInSetProperty() const;
    int32_t GetPositionInSet(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetPositionInSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty SizeOfSetProperty() const;
    int32_t GetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty LevelProperty() const;
    int32_t GetLevel(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetLevel(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty AnnotationsProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> GetAnnotations(Windows::UI::Xaml::DependencyObject const& element) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4
{
    Windows::UI::Xaml::DependencyProperty LandmarkTypeProperty() const;
    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType GetLandmarkType(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetLandmarkType(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const& value) const;
    Windows::UI::Xaml::DependencyProperty LocalizedLandmarkTypeProperty() const;
    hstring GetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5
{
    Windows::UI::Xaml::DependencyProperty IsPeripheralProperty() const;
    bool GetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty IsDataValidForFormProperty() const;
    bool GetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty FullDescriptionProperty() const;
    hstring GetFullDescription(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetFullDescription(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty LocalizedControlTypeProperty() const;
    hstring GetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    Windows::UI::Xaml::DependencyProperty DescribedByProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetDescribedBy(Windows::UI::Xaml::DependencyObject const& element) const;
    Windows::UI::Xaml::DependencyProperty FlowsToProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetFlowsTo(Windows::UI::Xaml::DependencyObject const& element) const;
    Windows::UI::Xaml::DependencyProperty FlowsFromProperty() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> GetFlowsFrom(Windows::UI::Xaml::DependencyObject const& element) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6
{
    Windows::UI::Xaml::DependencyProperty CultureProperty() const;
    int32_t GetCulture(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetCulture(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IAutomationProperty
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IAutomationProperty> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IAutomationProperty<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IDockPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IDockPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IDockPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IDockPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty DockPositionProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IDockPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IDragPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty DropEffectProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty DropEffectsProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty GrabbedItemsProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsGrabbedProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty DropTargetEffectProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty DropTargetEffectsProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ExpandCollapseStateProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ColumnProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ColumnSpanProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ContainingGridProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowSpanProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IGridPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IGridPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IGridPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ColumnCountProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowCountProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CurrentViewProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SupportedViewsProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty IsReadOnlyProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty LargeChangeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty MaximumProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty MinimumProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SmallChangeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ValueProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IScrollPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty HorizontallyScrollableProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty HorizontalScrollPercentProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty HorizontalViewSizeProperty() const;
    double NoScroll() const;
    Windows::UI::Xaml::Automation::AutomationProperty VerticallyScrollableProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty VerticalScrollPercentProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty VerticalViewSizeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty IsSelectedProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SelectionContainerProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CanSelectMultipleProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsSelectionRequiredProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty SelectionProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty FormulaProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IStylesPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ExtendedPropertiesProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FillColorProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FillPatternColorProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty FillPatternStyleProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ShapeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty StyleIdProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty StyleNameProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ColumnHeaderItemsProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowHeaderItemsProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::ITablePatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ColumnHeadersProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowHeadersProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty RowOrColumnMajorProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITogglePatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::ITogglePatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITogglePatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITogglePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty ToggleStateProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITogglePatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITransformPattern2Identifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::ITransformPattern2Identifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITransformPattern2Identifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CanZoomProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ZoomLevelProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty MaxZoomProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty MinZoomProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::ITransformPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CanMoveProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty CanResizeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty CanRotateProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IValuePatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IValuePatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IValuePatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty IsReadOnlyProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty ValueProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiers
{
};
template <> struct consume<Windows::UI::Xaml::Automation::IWindowPatternIdentifiers> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiers<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics
{
    Windows::UI::Xaml::Automation::AutomationProperty CanMaximizeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty CanMinimizeProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsModalProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty IsTopmostProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty WindowInteractionStateProperty() const;
    Windows::UI::Xaml::Automation::AutomationProperty WindowVisualStateProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>; };

template <> struct abi<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnnotationTypeIdProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AnnotationTypeNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AuthorProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DateTimeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TargetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationAnnotation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::UI::Xaml::Automation::AnnotationType>* value) = 0;
    virtual HRESULT __stdcall put_Type(abi_t<Windows::UI::Xaml::Automation::AnnotationType> value) = 0;
    virtual HRESULT __stdcall get_Element(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Element(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Xaml::Automation::AnnotationType> type, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateWithElementParameter(abi_t<Windows::UI::Xaml::Automation::AnnotationType> type, ::IUnknown* element, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ElementProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationElementIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AcceleratorKeyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AccessKeyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AutomationIdProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BoundingRectangleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClassNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClickablePointProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ControlTypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HasKeyboardFocusProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HelpTextProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsContentElementProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsControlElementProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsKeyboardFocusableProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsOffscreenProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsPasswordProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsRequiredForFormProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ItemStatusProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ItemTypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LabeledByProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalizedControlTypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OrientationProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LiveSettingProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ControlledPeersProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PositionInSetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SizeOfSetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LevelProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AnnotationsProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LandmarkTypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalizedLandmarkTypeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsPeripheralProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsDataValidForFormProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FullDescriptionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DescribedByProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlowsToProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlowsFromProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CultureProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationProperties>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AcceleratorKeyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAcceleratorKey(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetAcceleratorKey(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_AccessKeyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAccessKey(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetAccessKey(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_AutomationIdProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAutomationId(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetAutomationId(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_HelpTextProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetHelpText(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetHelpText(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsRequiredForFormProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsRequiredForForm(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetIsRequiredForForm(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_ItemStatusProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetItemStatus(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetItemStatus(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_ItemTypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetItemType(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetItemType(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_LabeledByProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLabeledBy(::IUnknown* element, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetLabeledBy(::IUnknown* element, ::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_NameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetName(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetName(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_LiveSettingProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLiveSetting(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>* value) = 0;
    virtual HRESULT __stdcall SetLiveSetting(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccessibilityViewProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAccessibilityView(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AccessibilityView>* value) = 0;
    virtual HRESULT __stdcall SetAccessibilityView(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AccessibilityView> value) = 0;
    virtual HRESULT __stdcall get_ControlledPeersProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetControlledPeers(::IUnknown* element, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PositionInSetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetPositionInSet(::IUnknown* element, int32_t* value) = 0;
    virtual HRESULT __stdcall SetPositionInSet(::IUnknown* element, int32_t value) = 0;
    virtual HRESULT __stdcall get_SizeOfSetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetSizeOfSet(::IUnknown* element, int32_t* value) = 0;
    virtual HRESULT __stdcall SetSizeOfSet(::IUnknown* element, int32_t value) = 0;
    virtual HRESULT __stdcall get_LevelProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLevel(::IUnknown* element, int32_t* value) = 0;
    virtual HRESULT __stdcall SetLevel(::IUnknown* element, int32_t value) = 0;
    virtual HRESULT __stdcall get_AnnotationsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAnnotations(::IUnknown* element, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LandmarkTypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLandmarkType(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>* value) = 0;
    virtual HRESULT __stdcall SetLandmarkType(::IUnknown* element, abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType> value) = 0;
    virtual HRESULT __stdcall get_LocalizedLandmarkTypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLocalizedLandmarkType(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetLocalizedLandmarkType(::IUnknown* element, HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsPeripheralProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsPeripheral(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetIsPeripheral(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_IsDataValidForFormProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsDataValidForForm(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetIsDataValidForForm(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_FullDescriptionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFullDescription(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetFullDescription(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_LocalizedControlTypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLocalizedControlType(::IUnknown* element, HSTRING* value) = 0;
    virtual HRESULT __stdcall SetLocalizedControlType(::IUnknown* element, HSTRING value) = 0;
    virtual HRESULT __stdcall get_DescribedByProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDescribedBy(::IUnknown* element, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlowsToProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFlowsTo(::IUnknown* element, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlowsFromProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFlowsFrom(::IUnknown* element, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CultureProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCulture(::IUnknown* element, int32_t* value) = 0;
    virtual HRESULT __stdcall SetCulture(::IUnknown* element, int32_t value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IAutomationProperty>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IDockPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DockPositionProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IDragPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DropEffectProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DropEffectsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_GrabbedItemsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsGrabbedProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DropTargetEffectProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DropTargetEffectsProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExpandCollapseStateProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ColumnProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ColumnSpanProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContainingGridProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RowProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RowSpanProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IGridPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ColumnCountProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RowCountProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentViewProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedViewsProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsReadOnlyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LargeChangeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaximumProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SmallChangeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ValueProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IScrollPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HorizontallyScrollableProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HorizontalScrollPercentProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HorizontalViewSizeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NoScroll(double* value) = 0;
    virtual HRESULT __stdcall get_VerticallyScrollableProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VerticalScrollPercentProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VerticalViewSizeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSelectedProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SelectionContainerProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanSelectMultipleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsSelectionRequiredProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SelectionProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FormulaProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IStylesPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExtendedPropertiesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FillColorProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FillPatternColorProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FillPatternStyleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ShapeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StyleIdProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StyleNameProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ColumnHeaderItemsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RowHeaderItemsProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITablePatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ColumnHeadersProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RowHeadersProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RowOrColumnMajorProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITogglePatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ToggleStateProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITransformPattern2Identifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanZoomProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZoomLevelProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaxZoomProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinZoomProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITransformPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanMoveProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanResizeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanRotateProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IValuePatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsReadOnlyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ValueProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::IWindowPatternIdentifiers>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanMaximizeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanMinimizeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsModalProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsTopmostProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WindowInteractionStateProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WindowVisualStateProperty(::IUnknown** value) = 0;
};};

}
