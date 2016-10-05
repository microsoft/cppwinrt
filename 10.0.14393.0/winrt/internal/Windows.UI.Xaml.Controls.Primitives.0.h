// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Controls::Primitives {

struct GeneratorPosition;

}

namespace Windows::UI::Xaml::Controls::Primitives {

using GeneratorPosition = ABI::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition;

}

namespace ABI::Windows::UI::Xaml::Controls::Primitives {

struct DragCompletedEventHandler;
struct DragDeltaEventHandler;
struct DragStartedEventHandler;
struct IAppBarTemplateSettings;
struct IButtonBase;
struct IButtonBaseFactory;
struct IButtonBaseStatics;
struct ICalendarPanel;
struct ICalendarViewTemplateSettings;
struct ICarouselPanel;
struct ICarouselPanelFactory;
struct IComboBoxTemplateSettings;
struct IComboBoxTemplateSettings2;
struct ICommandBarTemplateSettings;
struct ICommandBarTemplateSettings2;
struct ICommandBarTemplateSettings3;
struct IDragCompletedEventArgs;
struct IDragCompletedEventArgsFactory;
struct IDragDeltaEventArgs;
struct IDragDeltaEventArgsFactory;
struct IDragStartedEventArgs;
struct IDragStartedEventArgsFactory;
struct IFlyoutBase;
struct IFlyoutBase2;
struct IFlyoutBaseClosingEventArgs;
struct IFlyoutBaseFactory;
struct IFlyoutBaseOverrides;
struct IFlyoutBaseStatics;
struct IFlyoutBaseStatics2;
struct IGeneratorPositionHelper;
struct IGeneratorPositionHelperStatics;
struct IGridViewItemPresenter;
struct IGridViewItemPresenterFactory;
struct IGridViewItemPresenterStatics;
struct IGridViewItemTemplateSettings;
struct IItemsChangedEventArgs;
struct IJumpListItemBackgroundConverter;
struct IJumpListItemBackgroundConverterStatics;
struct IJumpListItemForegroundConverter;
struct IJumpListItemForegroundConverterStatics;
struct ILayoutInformation;
struct ILayoutInformationStatics;
struct IListViewItemPresenter;
struct IListViewItemPresenter2;
struct IListViewItemPresenterFactory;
struct IListViewItemPresenterStatics;
struct IListViewItemPresenterStatics2;
struct IListViewItemTemplateSettings;
struct ILoopingSelector;
struct ILoopingSelectorItem;
struct ILoopingSelectorPanel;
struct ILoopingSelectorStatics;
struct IMenuFlyoutPresenterTemplateSettings;
struct IOrientedVirtualizingPanel;
struct IOrientedVirtualizingPanelFactory;
struct IPickerFlyoutBase;
struct IPickerFlyoutBaseFactory;
struct IPickerFlyoutBaseOverrides;
struct IPickerFlyoutBaseStatics;
struct IPivotHeaderItem;
struct IPivotHeaderItemFactory;
struct IPivotHeaderPanel;
struct IPivotPanel;
struct IPopup;
struct IPopup2;
struct IPopupStatics;
struct IPopupStatics2;
struct IProgressBarTemplateSettings;
struct IProgressRingTemplateSettings;
struct IRangeBase;
struct IRangeBaseFactory;
struct IRangeBaseOverrides;
struct IRangeBaseStatics;
struct IRangeBaseValueChangedEventArgs;
struct IRepeatButton;
struct IRepeatButtonStatics;
struct IScrollBar;
struct IScrollBarStatics;
struct IScrollEventArgs;
struct IScrollSnapPointsInfo;
struct ISelector;
struct ISelectorFactory;
struct ISelectorItem;
struct ISelectorItemFactory;
struct ISelectorItemStatics;
struct ISelectorStatics;
struct ISettingsFlyoutTemplateSettings;
struct ISplitViewTemplateSettings;
struct IThumb;
struct IThumbStatics;
struct ITickBar;
struct ITickBarStatics;
struct IToggleButton;
struct IToggleButtonFactory;
struct IToggleButtonOverrides;
struct IToggleButtonStatics;
struct IToggleSwitchTemplateSettings;
struct IToolTipTemplateSettings;
struct ItemsChangedEventHandler;
struct RangeBaseValueChangedEventHandler;
struct ScrollEventHandler;
struct AppBarTemplateSettings;
struct ButtonBase;
struct CalendarPanel;
struct CalendarViewTemplateSettings;
struct CarouselPanel;
struct ComboBoxTemplateSettings;
struct CommandBarTemplateSettings;
struct DragCompletedEventArgs;
struct DragDeltaEventArgs;
struct DragStartedEventArgs;
struct FlyoutBase;
struct FlyoutBaseClosingEventArgs;
struct GeneratorPositionHelper;
struct GridViewItemPresenter;
struct GridViewItemTemplateSettings;
struct ItemsChangedEventArgs;
struct JumpListItemBackgroundConverter;
struct JumpListItemForegroundConverter;
struct LayoutInformation;
struct ListViewItemPresenter;
struct ListViewItemTemplateSettings;
struct LoopingSelector;
struct LoopingSelectorItem;
struct LoopingSelectorPanel;
struct MenuFlyoutPresenterTemplateSettings;
struct OrientedVirtualizingPanel;
struct PickerFlyoutBase;
struct PivotHeaderItem;
struct PivotHeaderPanel;
struct PivotPanel;
struct Popup;
struct ProgressBarTemplateSettings;
struct ProgressRingTemplateSettings;
struct RangeBase;
struct RangeBaseValueChangedEventArgs;
struct RepeatButton;
struct ScrollBar;
struct ScrollEventArgs;
struct Selector;
struct SelectorItem;
struct SettingsFlyoutTemplateSettings;
struct SplitViewTemplateSettings;
struct Thumb;
struct TickBar;
struct ToggleButton;
struct ToggleSwitchTemplateSettings;
struct ToolTipTemplateSettings;

}

namespace Windows::UI::Xaml::Controls::Primitives {

struct DragCompletedEventHandler;
struct DragDeltaEventHandler;
struct DragStartedEventHandler;
struct ItemsChangedEventHandler;
struct RangeBaseValueChangedEventHandler;
struct ScrollEventHandler;
struct IAppBarTemplateSettings;
struct IButtonBase;
struct IButtonBaseFactory;
struct IButtonBaseStatics;
struct ICalendarPanel;
struct ICalendarViewTemplateSettings;
struct ICarouselPanel;
struct ICarouselPanelFactory;
struct IComboBoxTemplateSettings;
struct IComboBoxTemplateSettings2;
struct ICommandBarTemplateSettings;
struct ICommandBarTemplateSettings2;
struct ICommandBarTemplateSettings3;
struct IDragCompletedEventArgs;
struct IDragCompletedEventArgsFactory;
struct IDragDeltaEventArgs;
struct IDragDeltaEventArgsFactory;
struct IDragStartedEventArgs;
struct IDragStartedEventArgsFactory;
struct IFlyoutBase;
struct IFlyoutBase2;
struct IFlyoutBaseClosingEventArgs;
struct IFlyoutBaseFactory;
struct IFlyoutBaseOverrides;
struct IFlyoutBaseStatics;
struct IFlyoutBaseStatics2;
struct IGeneratorPositionHelper;
struct IGeneratorPositionHelperStatics;
struct IGridViewItemPresenter;
struct IGridViewItemPresenterFactory;
struct IGridViewItemPresenterStatics;
struct IGridViewItemTemplateSettings;
struct IItemsChangedEventArgs;
struct IJumpListItemBackgroundConverter;
struct IJumpListItemBackgroundConverterStatics;
struct IJumpListItemForegroundConverter;
struct IJumpListItemForegroundConverterStatics;
struct ILayoutInformation;
struct ILayoutInformationStatics;
struct IListViewItemPresenter;
struct IListViewItemPresenter2;
struct IListViewItemPresenterFactory;
struct IListViewItemPresenterStatics;
struct IListViewItemPresenterStatics2;
struct IListViewItemTemplateSettings;
struct ILoopingSelector;
struct ILoopingSelectorItem;
struct ILoopingSelectorPanel;
struct ILoopingSelectorStatics;
struct IMenuFlyoutPresenterTemplateSettings;
struct IOrientedVirtualizingPanel;
struct IOrientedVirtualizingPanelFactory;
struct IPickerFlyoutBase;
struct IPickerFlyoutBaseFactory;
struct IPickerFlyoutBaseOverrides;
struct IPickerFlyoutBaseStatics;
struct IPivotHeaderItem;
struct IPivotHeaderItemFactory;
struct IPivotHeaderPanel;
struct IPivotPanel;
struct IPopup;
struct IPopup2;
struct IPopupStatics;
struct IPopupStatics2;
struct IProgressBarTemplateSettings;
struct IProgressRingTemplateSettings;
struct IRangeBase;
struct IRangeBaseFactory;
struct IRangeBaseOverrides;
struct IRangeBaseStatics;
struct IRangeBaseValueChangedEventArgs;
struct IRepeatButton;
struct IRepeatButtonStatics;
struct IScrollBar;
struct IScrollBarStatics;
struct IScrollEventArgs;
struct IScrollSnapPointsInfo;
struct ISelector;
struct ISelectorFactory;
struct ISelectorItem;
struct ISelectorItemFactory;
struct ISelectorItemStatics;
struct ISelectorStatics;
struct ISettingsFlyoutTemplateSettings;
struct ISplitViewTemplateSettings;
struct IThumb;
struct IThumbStatics;
struct ITickBar;
struct ITickBarStatics;
struct IToggleButton;
struct IToggleButtonFactory;
struct IToggleButtonOverrides;
struct IToggleButtonStatics;
struct IToggleSwitchTemplateSettings;
struct IToolTipTemplateSettings;
struct AppBarTemplateSettings;
struct ButtonBase;
struct CalendarPanel;
struct CalendarViewTemplateSettings;
struct CarouselPanel;
struct ComboBoxTemplateSettings;
struct CommandBarTemplateSettings;
struct DragCompletedEventArgs;
struct DragDeltaEventArgs;
struct DragStartedEventArgs;
struct FlyoutBase;
struct FlyoutBaseClosingEventArgs;
struct GeneratorPositionHelper;
struct GridViewItemPresenter;
struct GridViewItemTemplateSettings;
struct ItemsChangedEventArgs;
struct JumpListItemBackgroundConverter;
struct JumpListItemForegroundConverter;
struct LayoutInformation;
struct ListViewItemPresenter;
struct ListViewItemTemplateSettings;
struct LoopingSelector;
struct LoopingSelectorItem;
struct LoopingSelectorPanel;
struct MenuFlyoutPresenterTemplateSettings;
struct OrientedVirtualizingPanel;
struct PickerFlyoutBase;
struct PivotHeaderItem;
struct PivotHeaderPanel;
struct PivotPanel;
struct Popup;
struct ProgressBarTemplateSettings;
struct ProgressRingTemplateSettings;
struct RangeBase;
struct RangeBaseValueChangedEventArgs;
struct RepeatButton;
struct ScrollBar;
struct ScrollEventArgs;
struct Selector;
struct SelectorItem;
struct SettingsFlyoutTemplateSettings;
struct SplitViewTemplateSettings;
struct Thumb;
struct TickBar;
struct ToggleButton;
struct ToggleSwitchTemplateSettings;
struct ToolTipTemplateSettings;

}

namespace Windows::UI::Xaml::Controls::Primitives {

enum class AnimationDirection
{
    Left = 0,
    Top = 1,
    Right = 2,
    Bottom = 3,
};

enum class ComponentResourceLocation
{
    Application = 0,
    Nested = 1,
};

enum class EdgeTransitionLocation
{
    Left = 0,
    Top = 1,
    Right = 2,
    Bottom = 3,
};

enum class FlyoutPlacementMode
{
    Top = 0,
    Bottom = 1,
    Left = 2,
    Right = 3,
    Full = 4,
};

enum class GeneratorDirection
{
    Forward = 0,
    Backward = 1,
};

enum class GroupHeaderPlacement
{
    Top = 0,
    Left = 1,
};

enum class ListViewItemPresenterCheckMode
{
    Inline = 0,
    Overlay = 1,
};

enum class PlacementMode
{
    Bottom = 2,
    Left = 9,
    Mouse = 7,
    Right = 4,
    Top = 10,
};

enum class ScrollEventType
{
    SmallDecrement = 0,
    SmallIncrement = 1,
    LargeDecrement = 2,
    LargeIncrement = 3,
    ThumbPosition = 4,
    ThumbTrack = 5,
    First = 6,
    Last = 7,
    EndScroll = 8,
};

enum class ScrollingIndicatorMode
{
    None = 0,
    TouchIndicator = 1,
    MouseIndicator = 2,
};

enum class SliderSnapsTo
{
    StepValues = 0,
    Ticks = 1,
};

enum class SnapPointsAlignment
{
    Near = 0,
    Center = 1,
    Far = 2,
};

enum class TickPlacement
{
    None = 0,
    TopLeft = 1,
    BottomRight = 2,
    Outside = 3,
    Inline = 4,
};

}

}
