// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Automation {

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
struct IAutomationProperties;
struct IAutomationPropertiesStatics;
struct IAutomationPropertiesStatics2;
struct IAutomationPropertiesStatics3;
struct IAutomationPropertiesStatics4;
struct IAutomationPropertiesStatics5;
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

namespace Windows::UI::Xaml::Automation {

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
struct IAutomationProperties;
struct IAutomationPropertiesStatics;
struct IAutomationPropertiesStatics2;
struct IAutomationPropertiesStatics3;
struct IAutomationPropertiesStatics4;
struct IAutomationPropertiesStatics5;
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

namespace Windows::UI::Xaml::Automation {

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

}

}
