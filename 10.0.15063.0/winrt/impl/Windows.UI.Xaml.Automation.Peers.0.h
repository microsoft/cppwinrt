// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyProperty;
struct FrameworkElement;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation {

enum class AnnotationType;
enum class AutomationTextEditChangeType;
enum class ExpandCollapseState;
enum class ScrollAmount;
enum class ToggleState;
enum class WindowInteractionState;
enum class WindowVisualState;
enum class ZoomUnit;
struct AutomationProperty;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Provider {

struct IRawElementProviderSimple;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls {

struct AppBar;
struct AppBarButton;
struct AppBarToggleButton;
struct AutoSuggestBox;
struct Button;
struct CaptureElement;
struct CheckBox;
struct ComboBox;
struct ComboBoxItem;
struct DatePicker;
struct FlipView;
struct FlipViewItem;
struct FlyoutPresenter;
struct GridView;
struct GridViewHeaderItem;
struct GridViewItem;
struct GroupItem;
struct Hub;
struct HubSection;
struct HyperlinkButton;
struct Image;
struct ItemsControl;
struct ListBox;
struct ListBoxItem;
struct ListView;
struct ListViewBase;
struct ListViewBaseHeaderItem;
struct ListViewHeaderItem;
struct ListViewItem;
struct MediaElement;
struct MediaPlayerElement;
struct MediaTransportControls;
struct MenuFlyoutItem;
struct MenuFlyoutPresenter;
struct PasswordBox;
struct Pivot;
struct PivotItem;
struct ProgressBar;
struct ProgressRing;
struct RadioButton;
struct RichEditBox;
struct RichTextBlock;
struct RichTextBlockOverflow;
struct ScrollViewer;
struct SearchBox;
struct SemanticZoom;
struct SettingsFlyout;
struct Slider;
struct TextBlock;
struct TextBox;
struct TimePicker;
struct ToggleMenuFlyoutItem;
struct ToggleSwitch;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives {

struct ButtonBase;
struct RangeBase;
struct RepeatButton;
struct ScrollBar;
struct Selector;
struct Thumb;
struct ToggleButton;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Peers {

enum class AccessibilityView
{
    Raw = 0,
    Control = 1,
    Content = 2,
};

enum class AutomationControlType
{
    Button = 0,
    Calendar = 1,
    CheckBox = 2,
    ComboBox = 3,
    Edit = 4,
    Hyperlink = 5,
    Image = 6,
    ListItem = 7,
    List = 8,
    Menu = 9,
    MenuBar = 10,
    MenuItem = 11,
    ProgressBar = 12,
    RadioButton = 13,
    ScrollBar = 14,
    Slider = 15,
    Spinner = 16,
    StatusBar = 17,
    Tab = 18,
    TabItem = 19,
    Text = 20,
    ToolBar = 21,
    ToolTip = 22,
    Tree = 23,
    TreeItem = 24,
    Custom = 25,
    Group = 26,
    Thumb = 27,
    DataGrid = 28,
    DataItem = 29,
    Document = 30,
    SplitButton = 31,
    Window = 32,
    Pane = 33,
    Header = 34,
    HeaderItem = 35,
    Table = 36,
    TitleBar = 37,
    Separator = 38,
    SemanticZoom = 39,
    AppBar = 40,
};

enum class AutomationEvents
{
    ToolTipOpened = 0,
    ToolTipClosed = 1,
    MenuOpened = 2,
    MenuClosed = 3,
    AutomationFocusChanged = 4,
    InvokePatternOnInvoked = 5,
    SelectionItemPatternOnElementAddedToSelection = 6,
    SelectionItemPatternOnElementRemovedFromSelection = 7,
    SelectionItemPatternOnElementSelected = 8,
    SelectionPatternOnInvalidated = 9,
    TextPatternOnTextSelectionChanged = 10,
    TextPatternOnTextChanged = 11,
    AsyncContentLoaded = 12,
    PropertyChanged = 13,
    StructureChanged = 14,
    DragStart = 15,
    DragCancel = 16,
    DragComplete = 17,
    DragEnter = 18,
    DragLeave = 19,
    Dropped = 20,
    LiveRegionChanged = 21,
    InputReachedTarget = 22,
    InputReachedOtherElement = 23,
    InputDiscarded = 24,
    WindowClosed = 25,
    WindowOpened = 26,
    ConversionTargetChanged = 27,
    TextEditTextChanged = 28,
    LayoutInvalidated = 29,
};

enum class AutomationLandmarkType
{
    None = 0,
    Custom = 1,
    Form = 2,
    Main = 3,
    Navigation = 4,
    Search = 5,
};

enum class AutomationLiveSetting
{
    Off = 0,
    Polite = 1,
    Assertive = 2,
};

enum class AutomationNavigationDirection
{
    Parent = 0,
    NextSibling = 1,
    PreviousSibling = 2,
    FirstChild = 3,
    LastChild = 4,
};

enum class AutomationOrientation
{
    None = 0,
    Horizontal = 1,
    Vertical = 2,
};

enum class AutomationStructureChangeType
{
    ChildAdded = 0,
    ChildRemoved = 1,
    ChildrenInvalidated = 2,
    ChildrenBulkAdded = 3,
    ChildrenBulkRemoved = 4,
    ChildrenReordered = 5,
};

enum class PatternInterface
{
    Invoke = 0,
    Selection = 1,
    Value = 2,
    RangeValue = 3,
    Scroll = 4,
    ScrollItem = 5,
    ExpandCollapse = 6,
    Grid = 7,
    GridItem = 8,
    MultipleView = 9,
    Window = 10,
    SelectionItem = 11,
    Dock = 12,
    Table = 13,
    TableItem = 14,
    Toggle = 15,
    Transform = 16,
    Text = 17,
    ItemContainer = 18,
    VirtualizedItem = 19,
    Text2 = 20,
    TextChild = 21,
    TextRange = 22,
    Annotation = 23,
    Drag = 24,
    DropTarget = 25,
    ObjectModel = 26,
    Spreadsheet = 27,
    SpreadsheetItem = 28,
    Styles = 29,
    Transform2 = 30,
    SynchronizedInput = 31,
    TextEdit = 32,
    CustomNavigation = 33,
};

struct IAppBarAutomationPeer;
struct IAppBarAutomationPeerFactory;
struct IAppBarButtonAutomationPeer;
struct IAppBarButtonAutomationPeerFactory;
struct IAppBarToggleButtonAutomationPeer;
struct IAppBarToggleButtonAutomationPeerFactory;
struct IAutoSuggestBoxAutomationPeer;
struct IAutoSuggestBoxAutomationPeerFactory;
struct IAutomationPeer;
struct IAutomationPeer2;
struct IAutomationPeer3;
struct IAutomationPeer4;
struct IAutomationPeer5;
struct IAutomationPeer6;
struct IAutomationPeerAnnotation;
struct IAutomationPeerAnnotationFactory;
struct IAutomationPeerAnnotationStatics;
struct IAutomationPeerFactory;
struct IAutomationPeerOverrides;
struct IAutomationPeerOverrides2;
struct IAutomationPeerOverrides3;
struct IAutomationPeerOverrides4;
struct IAutomationPeerOverrides5;
struct IAutomationPeerOverrides6;
struct IAutomationPeerProtected;
struct IAutomationPeerStatics;
struct IAutomationPeerStatics3;
struct IButtonAutomationPeer;
struct IButtonAutomationPeerFactory;
struct IButtonBaseAutomationPeer;
struct IButtonBaseAutomationPeerFactory;
struct ICaptureElementAutomationPeer;
struct ICaptureElementAutomationPeerFactory;
struct ICheckBoxAutomationPeer;
struct ICheckBoxAutomationPeerFactory;
struct IComboBoxAutomationPeer;
struct IComboBoxAutomationPeerFactory;
struct IComboBoxItemAutomationPeer;
struct IComboBoxItemAutomationPeerFactory;
struct IComboBoxItemDataAutomationPeer;
struct IComboBoxItemDataAutomationPeerFactory;
struct IDatePickerAutomationPeer;
struct IDatePickerAutomationPeerFactory;
struct IDatePickerFlyoutPresenterAutomationPeer;
struct IFlipViewAutomationPeer;
struct IFlipViewAutomationPeerFactory;
struct IFlipViewItemAutomationPeer;
struct IFlipViewItemAutomationPeerFactory;
struct IFlipViewItemDataAutomationPeer;
struct IFlipViewItemDataAutomationPeerFactory;
struct IFlyoutPresenterAutomationPeer;
struct IFlyoutPresenterAutomationPeerFactory;
struct IFrameworkElementAutomationPeer;
struct IFrameworkElementAutomationPeerFactory;
struct IFrameworkElementAutomationPeerStatics;
struct IGridViewAutomationPeer;
struct IGridViewAutomationPeerFactory;
struct IGridViewHeaderItemAutomationPeer;
struct IGridViewHeaderItemAutomationPeerFactory;
struct IGridViewItemAutomationPeer;
struct IGridViewItemAutomationPeerFactory;
struct IGridViewItemDataAutomationPeer;
struct IGridViewItemDataAutomationPeerFactory;
struct IGroupItemAutomationPeer;
struct IGroupItemAutomationPeerFactory;
struct IHubAutomationPeer;
struct IHubAutomationPeerFactory;
struct IHubSectionAutomationPeer;
struct IHubSectionAutomationPeerFactory;
struct IHyperlinkButtonAutomationPeer;
struct IHyperlinkButtonAutomationPeerFactory;
struct IImageAutomationPeer;
struct IImageAutomationPeerFactory;
struct IInkToolbarAutomationPeer;
struct IItemAutomationPeer;
struct IItemAutomationPeerFactory;
struct IItemsControlAutomationPeer;
struct IItemsControlAutomationPeer2;
struct IItemsControlAutomationPeerFactory;
struct IItemsControlAutomationPeerOverrides2;
struct IListBoxAutomationPeer;
struct IListBoxAutomationPeerFactory;
struct IListBoxItemAutomationPeer;
struct IListBoxItemAutomationPeerFactory;
struct IListBoxItemDataAutomationPeer;
struct IListBoxItemDataAutomationPeerFactory;
struct IListPickerFlyoutPresenterAutomationPeer;
struct IListViewAutomationPeer;
struct IListViewAutomationPeerFactory;
struct IListViewBaseAutomationPeer;
struct IListViewBaseAutomationPeerFactory;
struct IListViewBaseHeaderItemAutomationPeer;
struct IListViewBaseHeaderItemAutomationPeerFactory;
struct IListViewHeaderItemAutomationPeer;
struct IListViewHeaderItemAutomationPeerFactory;
struct IListViewItemAutomationPeer;
struct IListViewItemAutomationPeerFactory;
struct IListViewItemDataAutomationPeer;
struct IListViewItemDataAutomationPeerFactory;
struct ILoopingSelectorAutomationPeer;
struct ILoopingSelectorItemAutomationPeer;
struct ILoopingSelectorItemDataAutomationPeer;
struct IMapControlAutomationPeer;
struct IMediaElementAutomationPeer;
struct IMediaElementAutomationPeerFactory;
struct IMediaPlayerElementAutomationPeer;
struct IMediaPlayerElementAutomationPeerFactory;
struct IMediaTransportControlsAutomationPeer;
struct IMediaTransportControlsAutomationPeerFactory;
struct IMenuFlyoutItemAutomationPeer;
struct IMenuFlyoutItemAutomationPeerFactory;
struct IMenuFlyoutPresenterAutomationPeer;
struct IMenuFlyoutPresenterAutomationPeerFactory;
struct IPasswordBoxAutomationPeer;
struct IPasswordBoxAutomationPeerFactory;
struct IPickerFlyoutPresenterAutomationPeer;
struct IPivotAutomationPeer;
struct IPivotAutomationPeerFactory;
struct IPivotItemAutomationPeer;
struct IPivotItemAutomationPeerFactory;
struct IPivotItemDataAutomationPeer;
struct IPivotItemDataAutomationPeerFactory;
struct IProgressBarAutomationPeer;
struct IProgressBarAutomationPeerFactory;
struct IProgressRingAutomationPeer;
struct IProgressRingAutomationPeerFactory;
struct IRadioButtonAutomationPeer;
struct IRadioButtonAutomationPeerFactory;
struct IRangeBaseAutomationPeer;
struct IRangeBaseAutomationPeerFactory;
struct IRepeatButtonAutomationPeer;
struct IRepeatButtonAutomationPeerFactory;
struct IRichEditBoxAutomationPeer;
struct IRichEditBoxAutomationPeerFactory;
struct IRichTextBlockAutomationPeer;
struct IRichTextBlockAutomationPeerFactory;
struct IRichTextBlockOverflowAutomationPeer;
struct IRichTextBlockOverflowAutomationPeerFactory;
struct IScrollBarAutomationPeer;
struct IScrollBarAutomationPeerFactory;
struct IScrollViewerAutomationPeer;
struct IScrollViewerAutomationPeerFactory;
struct ISearchBoxAutomationPeer;
struct ISearchBoxAutomationPeerFactory;
struct ISelectorAutomationPeer;
struct ISelectorAutomationPeerFactory;
struct ISelectorItemAutomationPeer;
struct ISelectorItemAutomationPeerFactory;
struct ISemanticZoomAutomationPeer;
struct ISemanticZoomAutomationPeerFactory;
struct ISettingsFlyoutAutomationPeer;
struct ISettingsFlyoutAutomationPeerFactory;
struct ISliderAutomationPeer;
struct ISliderAutomationPeerFactory;
struct ITextBlockAutomationPeer;
struct ITextBlockAutomationPeerFactory;
struct ITextBoxAutomationPeer;
struct ITextBoxAutomationPeerFactory;
struct IThumbAutomationPeer;
struct IThumbAutomationPeerFactory;
struct ITimePickerAutomationPeer;
struct ITimePickerAutomationPeerFactory;
struct ITimePickerFlyoutPresenterAutomationPeer;
struct IToggleButtonAutomationPeer;
struct IToggleButtonAutomationPeerFactory;
struct IToggleMenuFlyoutItemAutomationPeer;
struct IToggleMenuFlyoutItemAutomationPeerFactory;
struct IToggleSwitchAutomationPeer;
struct IToggleSwitchAutomationPeerFactory;
struct AppBarAutomationPeer;
struct AppBarButtonAutomationPeer;
struct AppBarToggleButtonAutomationPeer;
struct AutoSuggestBoxAutomationPeer;
struct AutomationPeer;
struct AutomationPeerAnnotation;
struct ButtonAutomationPeer;
struct ButtonBaseAutomationPeer;
struct CaptureElementAutomationPeer;
struct CheckBoxAutomationPeer;
struct ComboBoxAutomationPeer;
struct ComboBoxItemAutomationPeer;
struct ComboBoxItemDataAutomationPeer;
struct DatePickerAutomationPeer;
struct DatePickerFlyoutPresenterAutomationPeer;
struct FlipViewAutomationPeer;
struct FlipViewItemAutomationPeer;
struct FlipViewItemDataAutomationPeer;
struct FlyoutPresenterAutomationPeer;
struct FrameworkElementAutomationPeer;
struct GridViewAutomationPeer;
struct GridViewHeaderItemAutomationPeer;
struct GridViewItemAutomationPeer;
struct GridViewItemDataAutomationPeer;
struct GroupItemAutomationPeer;
struct HubAutomationPeer;
struct HubSectionAutomationPeer;
struct HyperlinkButtonAutomationPeer;
struct ImageAutomationPeer;
struct InkToolbarAutomationPeer;
struct ItemAutomationPeer;
struct ItemsControlAutomationPeer;
struct ListBoxAutomationPeer;
struct ListBoxItemAutomationPeer;
struct ListBoxItemDataAutomationPeer;
struct ListPickerFlyoutPresenterAutomationPeer;
struct ListViewAutomationPeer;
struct ListViewBaseAutomationPeer;
struct ListViewBaseHeaderItemAutomationPeer;
struct ListViewHeaderItemAutomationPeer;
struct ListViewItemAutomationPeer;
struct ListViewItemDataAutomationPeer;
struct LoopingSelectorAutomationPeer;
struct LoopingSelectorItemAutomationPeer;
struct LoopingSelectorItemDataAutomationPeer;
struct MapControlAutomationPeer;
struct MediaElementAutomationPeer;
struct MediaPlayerElementAutomationPeer;
struct MediaTransportControlsAutomationPeer;
struct MenuFlyoutItemAutomationPeer;
struct MenuFlyoutPresenterAutomationPeer;
struct PasswordBoxAutomationPeer;
struct PickerFlyoutPresenterAutomationPeer;
struct PivotAutomationPeer;
struct PivotItemAutomationPeer;
struct PivotItemDataAutomationPeer;
struct ProgressBarAutomationPeer;
struct ProgressRingAutomationPeer;
struct RadioButtonAutomationPeer;
struct RangeBaseAutomationPeer;
struct RepeatButtonAutomationPeer;
struct RichEditBoxAutomationPeer;
struct RichTextBlockAutomationPeer;
struct RichTextBlockOverflowAutomationPeer;
struct ScrollBarAutomationPeer;
struct ScrollViewerAutomationPeer;
struct SearchBoxAutomationPeer;
struct SelectorAutomationPeer;
struct SelectorItemAutomationPeer;
struct SemanticZoomAutomationPeer;
struct SettingsFlyoutAutomationPeer;
struct SliderAutomationPeer;
struct TextBlockAutomationPeer;
struct TextBoxAutomationPeer;
struct ThumbAutomationPeer;
struct TimePickerAutomationPeer;
struct TimePickerFlyoutPresenterAutomationPeer;
struct ToggleButtonAutomationPeer;
struct ToggleMenuFlyoutItemAutomationPeer;
struct ToggleSwitchAutomationPeer;
struct RawElementProviderRuntimeId;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::DatePickerFlyoutPresenterAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::HubAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::InkToolbarAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListPickerFlyoutPresenterAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::LoopingSelectorAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemDataAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::MapControlAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::PickerFlyoutPresenterAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::TimePickerFlyoutPresenterAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AccessibilityView>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationControlType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationEvents>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationOrientation>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::PatternInterface>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId>{ using type = struct_category<uint32_t,uint32_t>; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAppBarAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAppBarAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAppBarButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAppBarButtonAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAppBarToggleButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAppBarToggleButtonAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutoSuggestBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutoSuggestBoxAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer2" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer3" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer4" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer5" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer6" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerAnnotation" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerAnnotationFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerAnnotationStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides2" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides3" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides4" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides5" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides6" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerProtected" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerStatics3" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IButtonAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IButtonBaseAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IButtonBaseAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ICaptureElementAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ICaptureElementAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ICheckBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ICheckBoxAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IComboBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IComboBoxAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IComboBoxItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IComboBoxItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IComboBoxItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IComboBoxItemDataAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IDatePickerAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IDatePickerAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IDatePickerFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFlipViewAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFlipViewAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFlipViewItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFlipViewItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFlipViewItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFlipViewItemDataAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFlyoutPresenterAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFrameworkElementAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFrameworkElementAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IFrameworkElementAutomationPeerStatics" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGridViewAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGridViewAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGridViewHeaderItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGridViewHeaderItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGridViewItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGridViewItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGridViewItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGridViewItemDataAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGroupItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IGroupItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IHubAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IHubAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IHubSectionAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IHubSectionAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IHyperlinkButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IHyperlinkButtonAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IImageAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IImageAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IInkToolbarAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeer2" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeerOverrides2" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListBoxAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListBoxItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListBoxItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListBoxItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListBoxItemDataAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListPickerFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewBaseAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewBaseAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewBaseHeaderItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewBaseHeaderItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewHeaderItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewHeaderItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IListViewItemDataAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ILoopingSelectorAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ILoopingSelectorItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ILoopingSelectorItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMapControlAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMediaElementAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMediaElementAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMediaPlayerElementAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMediaPlayerElementAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMediaTransportControlsAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMediaTransportControlsAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMenuFlyoutItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMenuFlyoutItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMenuFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IMenuFlyoutPresenterAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPasswordBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPasswordBoxAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPickerFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPivotAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPivotAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPivotItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPivotItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPivotItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IPivotItemDataAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IProgressBarAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IProgressBarAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IProgressRingAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IProgressRingAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRadioButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRadioButtonAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRangeBaseAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRangeBaseAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRepeatButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRepeatButtonAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRichEditBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRichEditBoxAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRichTextBlockAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRichTextBlockAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRichTextBlockOverflowAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IRichTextBlockOverflowAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IScrollBarAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IScrollBarAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IScrollViewerAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IScrollViewerAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISearchBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISearchBoxAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISelectorAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISelectorAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISelectorItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISelectorItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISemanticZoomAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISemanticZoomAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISettingsFlyoutAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISettingsFlyoutAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISliderAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ISliderAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ITextBlockAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ITextBlockAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ITextBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ITextBoxAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IThumbAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IThumbAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ITimePickerAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ITimePickerAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ITimePickerFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IToggleButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IToggleButtonAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IToggleMenuFlyoutItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IToggleMenuFlyoutItemAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IToggleSwitchAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.IToggleSwitchAutomationPeerFactory" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AppBarAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AppBarButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AppBarToggleButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutoSuggestBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationPeerAnnotation" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ButtonBaseAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.CaptureElementAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.CheckBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ComboBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ComboBoxItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ComboBoxItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.DatePickerAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::DatePickerFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.DatePickerFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.FlipViewAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.FlipViewItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.FlipViewItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.FlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.FrameworkElementAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.GridViewAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.GridViewHeaderItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.GridViewItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.GridViewItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.GroupItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::HubAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.HubAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.HubSectionAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.HyperlinkButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ImageAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::InkToolbarAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.InkToolbarAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ItemsControlAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListBoxItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListBoxItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListPickerFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListPickerFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListViewAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListViewBaseAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListViewBaseHeaderItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListViewHeaderItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListViewItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ListViewItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::LoopingSelectorAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.LoopingSelectorAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.LoopingSelectorItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.LoopingSelectorItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::MapControlAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.MapControlAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.MediaElementAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.MediaPlayerElementAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.MediaTransportControlsAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.MenuFlyoutItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.MenuFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.PasswordBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::PickerFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.PickerFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.PivotAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.PivotItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.PivotItemDataAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ProgressBarAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ProgressRingAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.RadioButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.RangeBaseAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.RepeatButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.RichEditBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.RichTextBlockAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.RichTextBlockOverflowAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ScrollBarAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ScrollViewerAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.SearchBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.SelectorAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.SelectorItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.SemanticZoomAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.SettingsFlyoutAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.SliderAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.TextBlockAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.TextBoxAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ThumbAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.TimePickerAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::TimePickerFlyoutPresenterAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.TimePickerFlyoutPresenterAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ToggleButtonAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ToggleMenuFlyoutItemAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.ToggleSwitchAutomationPeer" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AccessibilityView>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AccessibilityView" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationControlType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationControlType" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationEvents>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationEvents" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationLandmarkType" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationLiveSetting" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationNavigationDirection" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationOrientation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationOrientation" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.AutomationStructureChangeType" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::PatternInterface>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.PatternInterface" }; };
template <> struct name<Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId>{ static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Peers.RawElementProviderRuntimeId" }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>{ static constexpr GUID value{ 0x8B4ACFEB,0x89FA,0x4F13,{ 0x84,0xBE,0x35,0xCA,0x5B,0x7C,0x95,0x90 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>{ static constexpr GUID value{ 0x8360F4E2,0xE396,0x4517,{ 0xAF,0x5D,0xF4,0xCF,0x34,0xC5,0x4E,0xDF } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>{ static constexpr GUID value{ 0x443262B2,0x4F6D,0x4B76,{ 0x9D,0x2E,0x3E,0xFF,0x77,0x7E,0x88,0x64 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>{ static constexpr GUID value{ 0xAEF0342A,0xACB7,0x42DC,{ 0x97,0xE3,0x84,0x70,0x71,0x86,0x5F,0xD6 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>{ static constexpr GUID value{ 0x8464EFAD,0x9655,0x4AFF,{ 0x95,0x50,0x63,0xAE,0x9E,0xC8,0xFE,0x9C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>{ static constexpr GUID value{ 0xD6F9139D,0x02C1,0x4221,{ 0x95,0x91,0x7D,0x4E,0xFE,0xB7,0x47,0x01 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>{ static constexpr GUID value{ 0x2F32C302,0xF99B,0x491D,{ 0x97,0x26,0xA5,0xE1,0x81,0x64,0x3E,0xFA } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>{ static constexpr GUID value{ 0x80046849,0x18E7,0x4475,{ 0xB3,0x62,0x4B,0xBD,0x53,0xD2,0x45,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeer>{ static constexpr GUID value{ 0x35AAC87A,0x62EE,0x4D3E,{ 0xA2,0x4C,0x2B,0xC8,0x43,0x2D,0x68,0xB7 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>{ static constexpr GUID value{ 0xEA1F89C7,0xEBF5,0x4AB8,{ 0x88,0xF7,0x68,0x0D,0x82,0x1D,0xAC,0x61 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>{ static constexpr GUID value{ 0xD3CFB977,0x0084,0x41D7,{ 0xA2,0x21,0x28,0x15,0x8D,0x3B,0xC3,0x2C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>{ static constexpr GUID value{ 0x761CE752,0x73C1,0x4F44,{ 0xBE,0x75,0x43,0xC4,0x9E,0xC0,0xD4,0xD5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>{ static constexpr GUID value{ 0xF632E1C6,0x0A3F,0x4574,{ 0x9F,0xEF,0xCD,0xC1,0x51,0x76,0x56,0x74 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>{ static constexpr GUID value{ 0xCAF8608F,0x13FF,0x42FB,{ 0x86,0x6D,0x22,0x20,0x64,0x34,0xCC,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>{ static constexpr GUID value{ 0x0C456061,0x52CF,0x43FA,{ 0x82,0xF8,0x07,0xF1,0x37,0x35,0x1E,0x5A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>{ static constexpr GUID value{ 0xF59C439E,0xC65B,0x43CD,{ 0x90,0x09,0x03,0xFC,0x02,0x33,0x63,0xA7 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>{ static constexpr GUID value{ 0x8809A87D,0x09B2,0x4D45,{ 0xB7,0x8B,0x1D,0x3B,0x3B,0x09,0xF6,0x61 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>{ static constexpr GUID value{ 0x20C27545,0xA88B,0x43C8,{ 0xBC,0x24,0xCE,0xA9,0xDA,0xFD,0x04,0xA3 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>{ static constexpr GUID value{ 0xBEA93E67,0xDBEE,0x4F7B,{ 0xAF,0x0D,0xA7,0x9A,0xAE,0x53,0x33,0xBF } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>{ static constexpr GUID value{ 0x2603682A,0x9DA6,0x4023,{ 0xB4,0x96,0x49,0x6E,0x5E,0xF2,0x28,0xD2 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>{ static constexpr GUID value{ 0xB6F0C4AD,0x4D39,0x49E6,{ 0xBB,0x91,0xD9,0x24,0xEE,0xFD,0x85,0x38 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>{ static constexpr GUID value{ 0xB186CDA2,0x5D46,0x4BCD,{ 0xA8,0x11,0x26,0x9A,0xD1,0x5B,0x3A,0xEE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>{ static constexpr GUID value{ 0x2C847C85,0x781E,0x49F7,{ 0x9F,0xEF,0xB9,0xE1,0x4D,0x01,0x47,0x07 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>{ static constexpr GUID value{ 0xE98BABE7,0xF6FF,0x444C,{ 0x9C,0x0D,0x27,0x7E,0xAF,0x0A,0xD9,0xC0 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>{ static constexpr GUID value{ 0xF4B40E52,0x642F,0x4629,{ 0xA5,0x4A,0xEA,0x5D,0x23,0x49,0xC4,0x48 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>{ static constexpr GUID value{ 0x562F7FB0,0xA331,0x4A9C,{ 0x9D,0xEC,0xBF,0xB7,0x58,0x6F,0xFF,0xFF } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>{ static constexpr GUID value{ 0x572C5714,0x7F87,0x4271,{ 0x81,0x9F,0x6C,0xF4,0xC4,0xD0,0x22,0xD0 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>{ static constexpr GUID value{ 0xFB77EFBE,0x39EC,0x4508,{ 0x8A,0xC3,0x51,0xA1,0x42,0x40,0x27,0xD7 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>{ static constexpr GUID value{ 0x3FDB9F49,0xF4AB,0x4780,{ 0x86,0x44,0x03,0x37,0x62,0x99,0xA1,0x75 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>{ static constexpr GUID value{ 0xA4F3B5B6,0x7585,0x4E0B,{ 0x96,0xD2,0x08,0xCF,0x6F,0x28,0xBE,0xFA } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>{ static constexpr GUID value{ 0x8A04091E,0xE6B2,0x4C60,{ 0xA7,0x59,0xC1,0x3C,0xA4,0x51,0x65,0xED } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>{ static constexpr GUID value{ 0xDCC44EE0,0xFA45,0x45C6,{ 0x8B,0xB7,0x32,0x0D,0x80,0x8F,0x59,0x58 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>{ static constexpr GUID value{ 0x9B92EF48,0x85E9,0x4869,{ 0xB1,0x75,0x8F,0x7C,0xF4,0x5A,0x6D,0x9F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>{ static constexpr GUID value{ 0xEB15BC42,0xC0A9,0x46C6,{ 0xAC,0x24,0xB8,0x3D,0xE4,0x29,0xC7,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>{ static constexpr GUID value{ 0xB75C775D,0xEB8F,0x44EF,{ 0xA2,0x7C,0xE2,0x6A,0xC7,0xDE,0x83,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>{ static constexpr GUID value{ 0x7EB40D0B,0x75C5,0x4263,{ 0xBA,0x6A,0xD4,0xA5,0x4F,0xB0,0xF2,0x39 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>{ static constexpr GUID value{ 0x098E5B0D,0x1B90,0x40B9,{ 0x9B,0xE3,0xB2,0x32,0x67,0xEB,0x13,0xCF } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>{ static constexpr GUID value{ 0x12DDC76E,0x9552,0x446A,{ 0x82,0xEE,0x93,0x8C,0xC3,0x71,0x80,0x0F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>{ static constexpr GUID value{ 0x134AC7FC,0x397A,0x403F,{ 0xA6,0xEC,0x1C,0xE8,0xBE,0xDA,0x15,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>{ static constexpr GUID value{ 0x4FEF6DF2,0x289C,0x4C04,{ 0x83,0x1B,0x5A,0x66,0x8C,0x6D,0x71,0x04 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>{ static constexpr GUID value{ 0x14A8D4F6,0x469A,0x41BA,{ 0x9D,0x93,0x44,0xA1,0xA5,0x5D,0xA8,0x72 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>{ static constexpr GUID value{ 0xD07D357F,0xA0B9,0x45DC,{ 0x99,0x1A,0x76,0xC5,0x05,0xE7,0xD0,0xF5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>{ static constexpr GUID value{ 0xE5667D19,0x9157,0x4436,{ 0x9F,0x4D,0x7F,0xB9,0x91,0x74,0xB4,0x8E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>{ static constexpr GUID value{ 0x752AED38,0xC2BF,0x4880,{ 0x82,0xB2,0xA6,0xC0,0x5E,0x90,0xC1,0x35 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>{ static constexpr GUID value{ 0x8EC0353A,0x4284,0x4B00,{ 0xAE,0xF8,0xA2,0x68,0x8E,0xA5,0xE3,0xC4 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>{ static constexpr GUID value{ 0x4395AB0D,0x8D83,0x483C,{ 0x88,0xEB,0xE2,0x61,0x7B,0x0D,0x29,0x3F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>{ static constexpr GUID value{ 0xC83034DE,0xFA08,0x4BD3,{ 0xAE,0xB2,0xD2,0xE5,0xBF,0xA0,0x4D,0xF9 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>{ static constexpr GUID value{ 0x69109356,0xD0E5,0x4C10,{ 0xA0,0x9C,0xAD,0x0B,0xF1,0xB0,0xCB,0x01 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>{ static constexpr GUID value{ 0xB0986175,0x00BC,0x4118,{ 0x8A,0x6F,0x16,0xEE,0x9C,0x15,0xD9,0x68 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>{ static constexpr GUID value{ 0x3C864393,0x0AEA,0x4E78,{ 0xBC,0x11,0xB7,0x75,0xCA,0xC4,0x11,0x4C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>{ static constexpr GUID value{ 0xA01840B4,0x5FCA,0x456F,{ 0x98,0xEA,0x30,0x0E,0xB4,0x0B,0x58,0x5E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>{ static constexpr GUID value{ 0xF350155F,0x8924,0x44C0,{ 0xBA,0x44,0x65,0x3F,0xE7,0x9F,0x1E,0xFB } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>{ static constexpr GUID value{ 0xB90AD781,0xBFEB,0x4451,{ 0xBD,0x47,0x9F,0x3A,0x63,0xEB,0xD2,0x4A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>{ static constexpr GUID value{ 0x0DB9B8BC,0xB812,0x48E3,{ 0xAF,0x1F,0xDB,0xC5,0x76,0x00,0xC3,0x25 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>{ static constexpr GUID value{ 0xB9C0B997,0x2820,0x44A1,{ 0xA5,0xA8,0x9B,0x80,0x1E,0xDC,0x26,0x9E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>{ static constexpr GUID value{ 0x1C4401A4,0xD951,0x49CA,{ 0x8F,0x82,0xC7,0xF3,0xC6,0x06,0x81,0xB0 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>{ static constexpr GUID value{ 0x8ACA59DD,0x22A7,0x4800,{ 0x89,0x4B,0xC1,0xF4,0x85,0xF3,0x89,0x53 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>{ static constexpr GUID value{ 0xE3DCEF3A,0xE08A,0x48E7,{ 0xB2,0x3A,0x2B,0xE5,0xB6,0x6E,0x47,0x4E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>{ static constexpr GUID value{ 0x2C80B4D2,0xFFC2,0x4157,{ 0x88,0xDD,0x59,0xCD,0x92,0xE3,0x97,0x15 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>{ static constexpr GUID value{ 0x93EF2D07,0x346C,0x4166,{ 0xA4,0xBA,0xBC,0x6A,0x18,0x1E,0x7F,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>{ static constexpr GUID value{ 0xFAFEC376,0xF22E,0x466D,{ 0x91,0x3C,0xAE,0x24,0xCC,0xDB,0x16,0x0F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>{ static constexpr GUID value{ 0xF3F4868F,0x29D4,0x4094,{ 0x8C,0x54,0xEA,0x61,0xA8,0x82,0x94,0xA4 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>{ static constexpr GUID value{ 0xA65E7A88,0x770D,0x402C,{ 0x99,0x6F,0x67,0x50,0x6A,0xF2,0xA4,0xAF } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>{ static constexpr GUID value{ 0x1914FE6D,0x0740,0x4236,{ 0x9E,0xE1,0x38,0xCF,0x19,0xC1,0xC3,0x88 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>{ static constexpr GUID value{ 0x56A64567,0xF21C,0x4C90,{ 0xB3,0x79,0x15,0xA2,0x7C,0x7F,0x84,0x09 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>{ static constexpr GUID value{ 0x4DDEE056,0x4EBC,0x4620,{ 0xA0,0x5D,0x90,0x3E,0x3C,0x9A,0x4E,0xAD } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>{ static constexpr GUID value{ 0xC762D43F,0x79DD,0x43EE,{ 0x87,0x77,0x8D,0x08,0xB3,0x9A,0xA0,0x65 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>{ static constexpr GUID value{ 0x16D91FF7,0x7431,0x4D82,{ 0x83,0xCE,0xCF,0xA3,0x19,0x2B,0x0F,0x18 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>{ static constexpr GUID value{ 0xC68E27E8,0x17EC,0x4329,{ 0x91,0xAE,0x2D,0x0B,0x23,0x39,0xD4,0x98 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>{ static constexpr GUID value{ 0xAA7AFCB1,0x0EDF,0x46D9,{ 0xAA,0x9E,0x0E,0xB2,0x1D,0x14,0x00,0x97 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>{ static constexpr GUID value{ 0x59BC1661,0xC182,0x49AF,{ 0x95,0x26,0x44,0xB8,0x8E,0x62,0x84,0x55 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>{ static constexpr GUID value{ 0x9B0BBF8C,0x60A2,0x48BF,{ 0xAB,0x2C,0x1A,0x52,0xA4,0x51,0xD2,0xD4 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>{ static constexpr GUID value{ 0x90304003,0x687D,0x47BF,{ 0xB3,0xA2,0x4B,0xAB,0xCA,0xD8,0xEF,0x50 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>{ static constexpr GUID value{ 0x123BAAA4,0xF2E8,0x4BCB,{ 0x93,0x82,0x5D,0xFD,0xD1,0x1F,0xE4,0x5F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>{ static constexpr GUID value{ 0x953C34F6,0x3B31,0x47A7,{ 0xB3,0xBF,0x25,0xD3,0xAE,0x99,0xC3,0x17 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>{ static constexpr GUID value{ 0x29065073,0xDE3D,0x4D3F,{ 0x97,0xB4,0x4D,0x6F,0x9D,0x53,0x44,0x4D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>{ static constexpr GUID value{ 0x96E76BF1,0x37F7,0x4088,{ 0x92,0x5D,0x65,0x26,0x8E,0x83,0xE3,0x4D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>{ static constexpr GUID value{ 0xC48D8917,0x95A8,0x47B8,{ 0xA5,0x17,0xBF,0x89,0x1A,0x6C,0x03,0x9B } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>{ static constexpr GUID value{ 0x4038A259,0x2E1A,0x49CA,{ 0xA5,0x33,0xC6,0x4F,0x18,0x15,0x77,0xE6 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>{ static constexpr GUID value{ 0x361DC0E8,0xB56F,0x45E9,{ 0x80,0xFE,0x10,0xA0,0xFB,0x0F,0xE1,0x77 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>{ static constexpr GUID value{ 0x8CD0D608,0xB402,0x4A6E,{ 0xBD,0x9A,0x34,0x3F,0x88,0x45,0xEB,0x32 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>{ static constexpr GUID value{ 0xE2362185,0x7DF6,0x49F7,{ 0x8A,0xBC,0x4C,0x33,0xF1,0xA3,0xD4,0x6E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>{ static constexpr GUID value{ 0x1BC6E1C6,0x2997,0x42DF,{ 0x99,0xEB,0x92,0xBC,0x1D,0xD1,0x49,0xFB } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>{ static constexpr GUID value{ 0x509F9DD8,0xB0AA,0x443F,{ 0xA1,0x10,0x41,0x20,0x9A,0xF4,0x4F,0x1C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>{ static constexpr GUID value{ 0xFD7D5FEE,0xFDE0,0x482A,{ 0x80,0x84,0xDC,0xEB,0xBA,0x5B,0x98,0x06 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>{ static constexpr GUID value{ 0xD7924E16,0xBD8D,0x4662,{ 0xA9,0x95,0x20,0xFF,0x9A,0x05,0x60,0x93 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>{ static constexpr GUID value{ 0x56DFDC58,0x2395,0x4060,{ 0x80,0x47,0x8E,0xA4,0x63,0x69,0x8A,0x24 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>{ static constexpr GUID value{ 0x73CECC87,0xC0DC,0x4260,{ 0x91,0x48,0x75,0xE9,0x86,0x4A,0x72,0x30 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>{ static constexpr GUID value{ 0x65F39174,0xEAA2,0x4E44,{ 0x8B,0xE6,0x4C,0xCA,0x28,0xCD,0x02,0x88 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>{ static constexpr GUID value{ 0x87EC7649,0xB83D,0x4E55,{ 0x9A,0xFD,0xBD,0x83,0x5E,0x74,0x8F,0x5C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>{ static constexpr GUID value{ 0x70D3C2BE,0x8950,0x4647,{ 0x93,0x62,0xFD,0x00,0x2F,0x8F,0xF8,0x2E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>{ static constexpr GUID value{ 0x7CB8B732,0xC1F0,0x4A3C,{ 0xBC,0x14,0x85,0xDD,0x48,0xDE,0xDB,0x85 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>{ static constexpr GUID value{ 0x40EC995F,0xD631,0x4004,{ 0x83,0x2E,0x6D,0x86,0x43,0xE5,0x15,0x61 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>{ static constexpr GUID value{ 0x67AB1E4B,0xAD61,0x4C88,{ 0xBA,0x45,0x0F,0x3A,0x8D,0x06,0x1F,0x8F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>{ static constexpr GUID value{ 0x07668694,0x2CA5,0x4BE4,{ 0xA8,0xB9,0x59,0x2D,0x48,0xF7,0x60,0x87 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>{ static constexpr GUID value{ 0xCA114E70,0xA16D,0x4D09,{ 0xA1,0xCF,0x18,0x56,0xEF,0x98,0xA9,0xEC } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>{ static constexpr GUID value{ 0xC47DFBC0,0xFACC,0x4024,{ 0xA7,0x3B,0x17,0xEC,0x4E,0x66,0x26,0x54 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>{ static constexpr GUID value{ 0x15A8D7FD,0xD7A5,0x4A6C,{ 0x96,0x3C,0x6F,0x7C,0xE4,0x64,0x67,0x1A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>{ static constexpr GUID value{ 0xD0DB12BB,0xD715,0x4523,{ 0xAC,0xC0,0x1E,0x10,0x72,0xD8,0xE3,0x2B } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>{ static constexpr GUID value{ 0x50B406CA,0xBAE9,0x4816,{ 0x8A,0x3A,0x0C,0xB4,0xF9,0x64,0x78,0xA2 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>{ static constexpr GUID value{ 0xD3FA68BF,0x04CF,0x4F4C,{ 0x8D,0x3E,0x47,0x80,0xA1,0x9D,0x47,0x88 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>{ static constexpr GUID value{ 0xEF567E32,0x7CD2,0x4D32,{ 0x95,0x90,0x1F,0x58,0x8D,0x5E,0xF3,0x8D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>{ static constexpr GUID value{ 0x425BEEE4,0xF2E8,0x4BCB,{ 0x93,0x82,0x5D,0xFD,0xD1,0x1F,0xE4,0x5F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>{ static constexpr GUID value{ 0xBA0B9FC2,0xA6E2,0x41A5,{ 0xB1,0x7A,0xD1,0x59,0x46,0x13,0xEF,0xBA } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>{ static constexpr GUID value{ 0xB2AD3B28,0x7575,0x4173,{ 0x9B,0xC7,0x80,0x36,0x7A,0x16,0x4E,0xD2 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>{ static constexpr GUID value{ 0x02BED209,0x3F65,0x4FDD,{ 0xB5,0xCA,0xC4,0x75,0x0D,0x4E,0x6E,0xA4 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>{ static constexpr GUID value{ 0x08848077,0x82AF,0x4D19,{ 0xB1,0x70,0x28,0x2A,0x9E,0x0E,0x7F,0x37 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>{ static constexpr GUID value{ 0xA3AD8D93,0x79F8,0x4958,{ 0xA3,0xC8,0x98,0x0D,0xEF,0xB8,0x3D,0x15 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>{ static constexpr GUID value{ 0xF41CB003,0xE103,0x4AB0,{ 0x81,0x2A,0xA0,0x8F,0xBD,0xB5,0x70,0xCE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>{ static constexpr GUID value{ 0x1FC19462,0x21DF,0x456E,{ 0xAA,0x11,0x8F,0xAC,0x6B,0x4B,0x2A,0xF6 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>{ static constexpr GUID value{ 0xD08BFCB8,0x20D1,0x45D8,{ 0xA2,0xC2,0x2F,0x13,0x0D,0xF7,0x14,0xE0 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>{ static constexpr GUID value{ 0xE244A871,0xFCBB,0x48FC,{ 0x8A,0x93,0x41,0xEA,0x13,0x4B,0x53,0xCE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>{ static constexpr GUID value{ 0x07B5172D,0x761D,0x452B,{ 0x9E,0x6D,0xFA,0x2A,0x8B,0xE0,0xAD,0x26 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>{ static constexpr GUID value{ 0x684F065E,0x3DF3,0x4B9F,{ 0x82,0xAD,0x88,0x19,0xDB,0x3B,0x21,0x8A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>{ static constexpr GUID value{ 0xAC3D7EDE,0xDCA4,0x481C,{ 0xB5,0x20,0x4A,0x9B,0x3F,0x3B,0x17,0x9C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>{ static constexpr GUID value{ 0x28414BF7,0x8382,0x4EAE,{ 0x93,0xC1,0xD6,0xF0,0x35,0xAA,0x81,0x55 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>{ static constexpr GUID value{ 0xE715A8F8,0x3B9D,0x402C,{ 0x81,0xE2,0x6E,0x91,0x2E,0xF5,0x89,0x81 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>{ static constexpr GUID value{ 0x3EFE0F94,0x0C91,0x4341,{ 0xB9,0xAC,0x1B,0x56,0xB4,0xE6,0xB8,0x4F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>{ static constexpr GUID value{ 0x1A4241AD,0x5D55,0x4D27,{ 0xB4,0x0F,0x2D,0x37,0x50,0x6F,0xBE,0x78 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>{ static constexpr GUID value{ 0xF2810471,0x183F,0x416B,{ 0xB4,0x1A,0x1E,0x5A,0x95,0x8A,0x91,0xF4 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>{ static constexpr GUID value{ 0xA2A3B788,0xEA1D,0x48B7,{ 0x88,0xEE,0xF0,0x8B,0x6A,0xA0,0x7F,0xEE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>{ static constexpr GUID value{ 0x517A2480,0xD3B6,0x412E,{ 0x82,0xB6,0x94,0xA0,0xA8,0x4C,0x13,0xB0 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>{ static constexpr GUID value{ 0x93F48F86,0xD840,0x4FB6,{ 0xAC,0x2F,0x5F,0x77,0x9B,0x85,0x4B,0x0D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>{ static constexpr GUID value{ 0x364679AB,0xB80F,0x41B4,{ 0x8E,0xEA,0x2F,0x52,0x51,0xBC,0x73,0x9C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>{ static constexpr GUID value{ 0xBC305EEE,0x39D3,0x4EEB,{ 0xAC,0x33,0x23,0x94,0xDE,0x12,0x3E,0x2E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>{ static constexpr GUID value{ 0xF3DB204B,0x157E,0x40BC,{ 0x95,0x93,0x55,0xBC,0x5C,0x71,0xA4,0xF6 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>{ static constexpr GUID value{ 0x7E6A5ED8,0x0B30,0x4743,{ 0xB1,0x02,0xDC,0xDF,0x54,0x8E,0x31,0x31 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>{ static constexpr GUID value{ 0x4940C4FD,0x3D88,0x49CA,{ 0x8F,0x31,0x92,0x41,0x87,0xAF,0x0B,0xFE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>{ static constexpr GUID value{ 0xE454B549,0x4B2C,0x42AD,{ 0xB0,0x4B,0xD3,0x59,0x47,0xD1,0xEE,0x50 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>{ static constexpr GUID value{ 0x827C7601,0x3078,0x4479,{ 0x95,0xEA,0x91,0x37,0x4C,0xA0,0x62,0x07 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>{ static constexpr GUID value{ 0x29E41AD5,0xA8AC,0x4E8A,{ 0x83,0xD8,0x09,0xE3,0x7E,0x05,0x42,0x57 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>{ static constexpr GUID value{ 0x6A6FF9D4,0x575E,0x4E60,{ 0xBD,0xD6,0xEC,0x14,0x41,0x9B,0x4F,0xF6 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>{ static constexpr GUID value{ 0xC69F5C04,0x16EE,0x467A,{ 0xA8,0x33,0xC3,0xDA,0x84,0x58,0xAD,0x64 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>{ static constexpr GUID value{ 0x752C8399,0xD296,0x4D87,{ 0x90,0x20,0xA4,0x75,0x0E,0x88,0x5B,0x3C } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>{ static constexpr GUID value{ 0x93A01A9C,0x9609,0x41FA,{ 0x82,0xF3,0x90,0x9C,0x09,0xF4,0x9A,0x72 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>{ static constexpr GUID value{ 0x2038AE61,0x1389,0x467A,{ 0xAE,0xD6,0x37,0x33,0x4D,0xA9,0x62,0x2B } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>{ static constexpr GUID value{ 0x8C9A409A,0x2736,0x437B,{ 0xAB,0x36,0xA1,0x6A,0x20,0x2F,0x10,0x5D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>{ static constexpr GUID value{ 0xBD5EB663,0x2C14,0x4665,{ 0xAD,0xEF,0xF2,0xB0,0x33,0x94,0x7B,0xEB } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>{ static constexpr GUID value{ 0x69E0C369,0xBBE7,0x41F2,{ 0x87,0xCA,0xAA,0xD8,0x13,0xFE,0x55,0x0E } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>{ static constexpr GUID value{ 0xE1302110,0xAFEB,0x4595,{ 0x8E,0x3D,0xED,0xC0,0x84,0x4A,0x2B,0x21 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>{ static constexpr GUID value{ 0xD985F259,0x1B09,0x4E88,{ 0x88,0xFD,0x42,0x17,0x50,0xDC,0x6B,0x45 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>{ static constexpr GUID value{ 0x270DFF7D,0xD96D,0x48F9,{ 0xA3,0x6A,0xC2,0x52,0xAA,0x9C,0x46,0x70 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>{ static constexpr GUID value{ 0x854011A4,0x18A6,0x4F30,{ 0x93,0x9B,0x88,0x71,0xAF,0xA3,0xF5,0xE9 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>{ static constexpr GUID value{ 0xB3C01430,0x7FAA,0x41BB,{ 0x8E,0x91,0x7C,0x76,0x1C,0x52,0x67,0xF1 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>{ static constexpr GUID value{ 0x162AC829,0x7115,0x43EC,{ 0xB3,0x83,0xA7,0xB7,0x16,0x44,0x06,0x9D } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>{ static constexpr GUID value{ 0x7B525646,0x829B,0x4DCC,{ 0xBD,0x52,0x5A,0x8D,0x03,0x99,0x38,0x7A } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>{ static constexpr GUID value{ 0xAE8B3477,0x860A,0x45BB,{ 0xBF,0x7C,0xE1,0xB2,0x74,0x19,0xD1,0xDD } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>{ static constexpr GUID value{ 0x66D7EDFB,0x786D,0x4362,{ 0xA9,0x64,0xEB,0xFB,0x21,0x77,0x6C,0x30 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>{ static constexpr GUID value{ 0x3C2FAC6C,0xA977,0x47FC,{ 0xB4,0x4E,0x27,0x54,0xC0,0xB2,0xBE,0xA9 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>{ static constexpr GUID value{ 0xF518D44D,0xA493,0x4496,{ 0xB0,0x77,0x96,0x74,0xC7,0xF4,0xC5,0xFA } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>{ static constexpr GUID value{ 0xD0DE0CDB,0x30CF,0x47A6,{ 0xA5,0xEB,0x9C,0x77,0xF0,0xB0,0xD6,0xDD } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>{ static constexpr GUID value{ 0xF94762BD,0x8A14,0x40E4,{ 0x94,0xA7,0x3F,0x33,0xC9,0x22,0xE9,0x45 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>{ static constexpr GUID value{ 0xEC30015A,0xD611,0x46D0,{ 0xAE,0x4F,0x6E,0xCF,0x27,0xDF,0xBA,0xA5 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>{ static constexpr GUID value{ 0x971B8056,0x9A7A,0x4DF9,{ 0x95,0xFA,0x6F,0x5C,0x04,0xC9,0x1C,0xAC } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>{ static constexpr GUID value{ 0xBE2057F5,0x6715,0x4E69,{ 0xA0,0x50,0x92,0xBD,0x0C,0xE2,0x32,0xA9 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>{ static constexpr GUID value{ 0x76BF924B,0x7CA0,0x4B01,{ 0xBC,0x5C,0xA8,0xCF,0x4D,0x36,0x91,0xDE } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>{ static constexpr GUID value{ 0x3A4F1CA0,0x5E5D,0x4D26,{ 0x90,0x67,0xE7,0x40,0xBF,0x65,0x7A,0x9F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>{ static constexpr GUID value{ 0x01F0C067,0x966B,0x4130,{ 0xB8,0x72,0x46,0x9E,0x42,0xBD,0x4A,0x7F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>{ static constexpr GUID value{ 0xDC2949B5,0xB45E,0x4D6D,{ 0x89,0x2F,0xD9,0x42,0x2C,0x95,0x0E,0xFB } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>{ static constexpr GUID value{ 0x970743FF,0xAF41,0x4600,{ 0xB5,0x5D,0x26,0xD4,0x3D,0xF8,0x60,0xE1 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>{ static constexpr GUID value{ 0xA43D44EF,0x3285,0x4DF7,{ 0xB4,0xA4,0xE4,0xCD,0xF3,0x6A,0x3A,0x17 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>{ static constexpr GUID value{ 0x978F6671,0x47F8,0x40A7,{ 0x9E,0x21,0x68,0x12,0x8B,0x16,0xB4,0xFD } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>{ static constexpr GUID value{ 0xDA93EE27,0x82F1,0x4701,{ 0x87,0x06,0xBE,0x29,0x7B,0xF0,0x60,0x43 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>{ static constexpr GUID value{ 0x62DBE6C5,0xBC0A,0x45BB,{ 0xBF,0x77,0xEA,0x0F,0x15,0x02,0x89,0x1F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>{ static constexpr GUID value{ 0xC9218CC4,0xAD4B,0x4D03,{ 0xA6,0xA4,0x7D,0x59,0xE6,0x36,0x00,0x04 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>{ static constexpr GUID value{ 0x6B57EAFE,0x6AF1,0x4903,{ 0x83,0x73,0x34,0x37,0xBF,0x35,0x23,0x45 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>{ static constexpr GUID value{ 0x94364B77,0x8F6C,0x4837,{ 0xAA,0xE3,0x94,0xD0,0x10,0xD8,0xD1,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>{ static constexpr GUID value{ 0xC011F174,0xE89E,0x4790,{ 0xBF,0x9A,0x78,0xEB,0xB5,0xF5,0x9E,0x9F } }; };
template <> struct guid<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>{ static constexpr GUID value{ 0x31F933E3,0xFEF8,0x4419,{ 0x9D,0xF5,0xD9,0xEF,0x71,0x96,0xEA,0x34 } }; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation>{ using type = Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::DatePickerFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::HubAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::InkToolbarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListPickerFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::LoopingSelectorAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MapControlAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PickerFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TimePickerFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer; };
template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBar const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBarButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBarToggleButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AutoSuggestBox const& owner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer EventsSource() const;
    void EventsSource(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& value) const;
    Windows::Foundation::IInspectable GetPattern(Windows::UI::Xaml::Automation::Peers::PatternInterface const& patternInterface) const;
    void RaiseAutomationEvent(Windows::UI::Xaml::Automation::Peers::AutomationEvents const& eventId) const;
    void RaisePropertyChangedEvent(Windows::UI::Xaml::Automation::AutomationProperty const& automationProperty, Windows::Foundation::IInspectable const& oldValue, Windows::Foundation::IInspectable const& newValue) const;
    hstring GetAcceleratorKey() const;
    hstring GetAccessKey() const;
    Windows::UI::Xaml::Automation::Peers::AutomationControlType GetAutomationControlType() const;
    hstring GetAutomationId() const;
    Windows::Foundation::Rect GetBoundingRectangle() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetChildren() const;
    hstring GetClassName() const;
    Windows::Foundation::Point GetClickablePoint() const;
    hstring GetHelpText() const;
    hstring GetItemStatus() const;
    hstring GetItemType() const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetLabeledBy() const;
    hstring GetLocalizedControlType() const;
    hstring GetName() const;
    Windows::UI::Xaml::Automation::Peers::AutomationOrientation GetOrientation() const;
    bool HasKeyboardFocus() const;
    bool IsContentElement() const;
    bool IsControlElement() const;
    bool IsEnabled() const;
    bool IsKeyboardFocusable() const;
    bool IsOffscreen() const;
    bool IsPassword() const;
    bool IsRequiredForForm() const;
    void SetFocus() const;
    [[deprecated("Consider using Navigate with AutomationNavigationDirection::Parent, which is an improved version of GetParent. For more info, see MSDN.")]] Windows::UI::Xaml::Automation::Peers::AutomationPeer GetParent() const;
    void InvalidatePeer() const;
    [[deprecated("Consider using GetElementFromPoint, which is an improved version of GetPeerFromPoint. For more info, see MSDN.")]] Windows::UI::Xaml::Automation::Peers::AutomationPeer GetPeerFromPoint(Windows::Foundation::Point const& point) const;
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting GetLiveSetting() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer2
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3
{
    Windows::Foundation::IInspectable Navigate(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const;
    Windows::Foundation::IInspectable GetElementFromPoint(Windows::Foundation::Point const& pointInWindowCoordinates) const;
    Windows::Foundation::IInspectable GetFocusedElement() const;
    void ShowContextMenu() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetControlledPeers() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> GetAnnotations() const;
    void SetParent(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const;
    void RaiseTextEditTextChangedEvent(Windows::UI::Xaml::Automation::AutomationTextEditChangeType const& automationTextEditChangeType, param::vector_view<hstring> const& changedData) const;
    int32_t GetPositionInSet() const;
    int32_t GetSizeOfSet() const;
    int32_t GetLevel() const;
    void RaiseStructureChangedEvent(Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType const& structureChangeType, Windows::UI::Xaml::Automation::Peers::AutomationPeer const& child) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer4
{
    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType GetLandmarkType() const;
    hstring GetLocalizedLandmarkType() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer5
{
    bool IsPeripheral() const;
    bool IsDataValidForForm() const;
    hstring GetFullDescription() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer6
{
    int32_t GetCulture() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer6<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotation
{
    Windows::UI::Xaml::Automation::AnnotationType Type() const;
    void Type(Windows::UI::Xaml::Automation::AnnotationType const& value) const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer Peer() const;
    void Peer(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationFactory
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation CreateInstance(Windows::UI::Xaml::Automation::AnnotationType const& type) const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation CreateWithPeerParameter(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationStatics
{
    Windows::UI::Xaml::DependencyProperty TypeProperty() const;
    Windows::UI::Xaml::DependencyProperty PeerProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides
{
    Windows::Foundation::IInspectable GetPatternCore(Windows::UI::Xaml::Automation::Peers::PatternInterface const& patternInterface) const;
    hstring GetAcceleratorKeyCore() const;
    hstring GetAccessKeyCore() const;
    Windows::UI::Xaml::Automation::Peers::AutomationControlType GetAutomationControlTypeCore() const;
    hstring GetAutomationIdCore() const;
    Windows::Foundation::Rect GetBoundingRectangleCore() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetChildrenCore() const;
    hstring GetClassNameCore() const;
    Windows::Foundation::Point GetClickablePointCore() const;
    hstring GetHelpTextCore() const;
    hstring GetItemStatusCore() const;
    hstring GetItemTypeCore() const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetLabeledByCore() const;
    hstring GetLocalizedControlTypeCore() const;
    hstring GetNameCore() const;
    Windows::UI::Xaml::Automation::Peers::AutomationOrientation GetOrientationCore() const;
    bool HasKeyboardFocusCore() const;
    bool IsContentElementCore() const;
    bool IsControlElementCore() const;
    bool IsEnabledCore() const;
    bool IsKeyboardFocusableCore() const;
    bool IsOffscreenCore() const;
    bool IsPasswordCore() const;
    bool IsRequiredForFormCore() const;
    void SetFocusCore() const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetPeerFromPointCore(Windows::Foundation::Point const& point) const;
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting GetLiveSettingCore() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides2
{
    void ShowContextMenuCore() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetControlledPeersCore() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3
{
    Windows::Foundation::IInspectable NavigateCore(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const;
    Windows::Foundation::IInspectable GetElementFromPointCore(Windows::Foundation::Point const& pointInWindowCoordinates) const;
    Windows::Foundation::IInspectable GetFocusedElementCore() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> GetAnnotationsCore() const;
    int32_t GetPositionInSetCore() const;
    int32_t GetSizeOfSetCore() const;
    int32_t GetLevelCore() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides4
{
    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType GetLandmarkTypeCore() const;
    hstring GetLocalizedLandmarkTypeCore() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5
{
    bool IsPeripheralCore() const;
    bool IsDataValidForFormCore() const;
    hstring GetFullDescriptionCore() const;
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetDescribedByCore() const;
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetFlowsToCore() const;
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetFlowsFromCore() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides6
{
    int32_t GetCultureCore() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides6<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerProtected
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer PeerFromProvider(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& provider) const;
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple ProviderFromPeer(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerProtected<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics
{
    bool ListenerExists(Windows::UI::Xaml::Automation::Peers::AutomationEvents const& eventId) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics3
{
    Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId GenerateRawElementProviderRuntimeId() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Button const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ButtonBase const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::CaptureElement const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::CheckBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ComboBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ComboBoxItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::DatePicker const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IDatePickerFlyoutPresenterAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IDatePickerFlyoutPresenterAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlipView const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlipViewItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlyoutPresenter const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeer
{
    Windows::UI::Xaml::UIElement Owner() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::FrameworkElement const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerStatics
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer FromElement(Windows::UI::Xaml::UIElement const& element) const;
    Windows::UI::Xaml::Automation::Peers::AutomationPeer CreatePeerForElement(Windows::UI::Xaml::UIElement const& element) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridView const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridViewHeaderItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridViewItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GroupItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::HubAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Hub const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::HubSection const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::HyperlinkButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Image const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IInkToolbarAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IInkToolbarAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeer
{
    Windows::Foundation::IInspectable Item() const;
    Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer ItemsControlAutomationPeer() const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer2
{
    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer CreateItemAutomationPeer(Windows::Foundation::IInspectable const& item) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ItemsControl const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerOverrides2
{
    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer OnCreateItemAutomationPeer(Windows::Foundation::IInspectable const& item) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerOverrides2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListBoxItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListPickerFlyoutPresenterAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListPickerFlyoutPresenterAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListView const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewBase const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewBaseHeaderItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewHeaderItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorItemDataAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorItemDataAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMapControlAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMapControlAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaElement const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaPlayerElement const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaTransportControls const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MenuFlyoutItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MenuFlyoutPresenter const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::PasswordBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPickerFlyoutPresenterAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPickerFlyoutPresenterAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Pivot const& owner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::PivotItem const& owner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer const& parent) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ProgressBar const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ProgressRing const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RadioButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::RangeBase const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::RepeatButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichEditBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichTextBlock const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichTextBlockOverflow const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ScrollBar const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ScrollViewer const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SearchBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::Selector const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SemanticZoom const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SettingsFlyout const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Slider const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TextBlock const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TextBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::Thumb const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TimePicker const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_ITimePickerFlyoutPresenterAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITimePickerFlyoutPresenterAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ToggleButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeer
{
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeerFactory
{
    Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ToggleSwitch const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeerFactory<D>; };

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EventsSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EventsSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall GetPattern(abi_t<Windows::UI::Xaml::Automation::Peers::PatternInterface> patternInterface, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RaiseAutomationEvent(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationEvents> eventId) = 0;
    virtual HRESULT __stdcall RaisePropertyChangedEvent(::IUnknown* automationProperty, ::IUnknown* oldValue, ::IUnknown* newValue) = 0;
    virtual HRESULT __stdcall GetAcceleratorKey(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetAccessKey(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetAutomationControlType(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationControlType>* returnValue) = 0;
    virtual HRESULT __stdcall GetAutomationId(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetBoundingRectangle(abi_t<Windows::Foundation::Rect>* returnValue) = 0;
    virtual HRESULT __stdcall GetChildren(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetClassName(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetClickablePoint(abi_t<Windows::Foundation::Point>* returnValue) = 0;
    virtual HRESULT __stdcall GetHelpText(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetItemStatus(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetItemType(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetLabeledBy(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetLocalizedControlType(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetName(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetOrientation(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationOrientation>* returnValue) = 0;
    virtual HRESULT __stdcall HasKeyboardFocus(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsContentElement(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsControlElement(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsEnabled(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsKeyboardFocusable(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsOffscreen(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsPassword(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsRequiredForForm(bool* returnValue) = 0;
    virtual HRESULT __stdcall SetFocus() = 0;
    virtual HRESULT __stdcall GetParent(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall InvalidatePeer() = 0;
    virtual HRESULT __stdcall GetPeerFromPoint(abi_t<Windows::Foundation::Point> point, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetLiveSetting(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Navigate(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection> direction, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetElementFromPoint(abi_t<Windows::Foundation::Point> pointInWindowCoordinates, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetFocusedElement(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall ShowContextMenu() = 0;
    virtual HRESULT __stdcall GetControlledPeers(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetAnnotations(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall SetParent(::IUnknown* peer) = 0;
    virtual HRESULT __stdcall RaiseTextEditTextChangedEvent(abi_t<Windows::UI::Xaml::Automation::AutomationTextEditChangeType> automationTextEditChangeType, ::IUnknown* changedData) = 0;
    virtual HRESULT __stdcall GetPositionInSet(int32_t* returnValue) = 0;
    virtual HRESULT __stdcall GetSizeOfSet(int32_t* returnValue) = 0;
    virtual HRESULT __stdcall GetLevel(int32_t* returnValue) = 0;
    virtual HRESULT __stdcall RaiseStructureChangedEvent(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType> structureChangeType, ::IUnknown* child) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetLandmarkType(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>* returnValue) = 0;
    virtual HRESULT __stdcall GetLocalizedLandmarkType(HSTRING* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsPeripheral(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsDataValidForForm(bool* returnValue) = 0;
    virtual HRESULT __stdcall GetFullDescription(HSTRING* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCulture(int32_t* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::UI::Xaml::Automation::AnnotationType>* value) = 0;
    virtual HRESULT __stdcall put_Type(abi_t<Windows::UI::Xaml::Automation::AnnotationType> value) = 0;
    virtual HRESULT __stdcall get_Peer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Peer(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Xaml::Automation::AnnotationType> type, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateWithPeerParameter(abi_t<Windows::UI::Xaml::Automation::AnnotationType> type, ::IUnknown* peer, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TypeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PeerProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPatternCore(abi_t<Windows::UI::Xaml::Automation::Peers::PatternInterface> patternInterface, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetAcceleratorKeyCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetAccessKeyCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetAutomationControlTypeCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationControlType>* returnValue) = 0;
    virtual HRESULT __stdcall GetAutomationIdCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetBoundingRectangleCore(abi_t<Windows::Foundation::Rect>* returnValue) = 0;
    virtual HRESULT __stdcall GetChildrenCore(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetClassNameCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetClickablePointCore(abi_t<Windows::Foundation::Point>* returnValue) = 0;
    virtual HRESULT __stdcall GetHelpTextCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetItemStatusCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetItemTypeCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetLabeledByCore(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetLocalizedControlTypeCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetNameCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetOrientationCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationOrientation>* returnValue) = 0;
    virtual HRESULT __stdcall HasKeyboardFocusCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsContentElementCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsControlElementCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsEnabledCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsKeyboardFocusableCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsOffscreenCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsPasswordCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsRequiredForFormCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall SetFocusCore() = 0;
    virtual HRESULT __stdcall GetPeerFromPointCore(abi_t<Windows::Foundation::Point> point, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetLiveSettingCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowContextMenuCore() = 0;
    virtual HRESULT __stdcall GetControlledPeersCore(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall NavigateCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection> direction, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetElementFromPointCore(abi_t<Windows::Foundation::Point> pointInWindowCoordinates, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetFocusedElementCore(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetAnnotationsCore(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetPositionInSetCore(int32_t* returnValue) = 0;
    virtual HRESULT __stdcall GetSizeOfSetCore(int32_t* returnValue) = 0;
    virtual HRESULT __stdcall GetLevelCore(int32_t* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetLandmarkTypeCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>* returnValue) = 0;
    virtual HRESULT __stdcall GetLocalizedLandmarkTypeCore(HSTRING* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsPeripheralCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall IsDataValidForFormCore(bool* returnValue) = 0;
    virtual HRESULT __stdcall GetFullDescriptionCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall GetDescribedByCore(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetFlowsToCore(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetFlowsFromCore(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCultureCore(int32_t* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PeerFromProvider(::IUnknown* provider, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall ProviderFromPeer(::IUnknown* peer, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ListenerExists(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationEvents> eventId, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GenerateRawElementProviderRuntimeId(abi_t<Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Owner(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromElement(::IUnknown* element, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreatePeerForElement(::IUnknown* element, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Item(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ItemsControlAutomationPeer(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateItemAutomationPeer(::IUnknown* item, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnCreateItemAutomationPeer(::IUnknown* item, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

}
