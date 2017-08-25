// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives {

struct DragCompletedEventHandler : Windows::Foundation::IUnknown
{
    DragCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DragCompletedEventHandler(L lambda);
    template <typename F> DragCompletedEventHandler(F* function);
    template <typename O, typename M> DragCompletedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs const& e) const;
};

struct DragDeltaEventHandler : Windows::Foundation::IUnknown
{
    DragDeltaEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DragDeltaEventHandler(L lambda);
    template <typename F> DragDeltaEventHandler(F* function);
    template <typename O, typename M> DragDeltaEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs const& e) const;
};

struct DragStartedEventHandler : Windows::Foundation::IUnknown
{
    DragStartedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DragStartedEventHandler(L lambda);
    template <typename F> DragStartedEventHandler(F* function);
    template <typename O, typename M> DragStartedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs const& e) const;
};

struct ItemsChangedEventHandler : Windows::Foundation::IUnknown
{
    ItemsChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ItemsChangedEventHandler(L lambda);
    template <typename F> ItemsChangedEventHandler(F* function);
    template <typename O, typename M> ItemsChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs const& e) const;
};

struct RangeBaseValueChangedEventHandler : Windows::Foundation::IUnknown
{
    RangeBaseValueChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> RangeBaseValueChangedEventHandler(L lambda);
    template <typename F> RangeBaseValueChangedEventHandler(F* function);
    template <typename O, typename M> RangeBaseValueChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const& e) const;
};

struct ScrollEventHandler : Windows::Foundation::IUnknown
{
    ScrollEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ScrollEventHandler(L lambda);
    template <typename F> ScrollEventHandler(F* function);
    template <typename O, typename M> ScrollEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs const& e) const;
};

struct GeneratorPosition
{
    int32_t Index;
    int32_t Offset;
};

struct WINRT_EBO AppBarTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings,
    impl::base<AppBarTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<AppBarTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    AppBarTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ButtonBase :
    Windows::UI::Xaml::Controls::Primitives::IButtonBase,
    impl::base<ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ButtonBase, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ButtonBase(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty ClickModeProperty();
    static Windows::UI::Xaml::DependencyProperty IsPointerOverProperty();
    static Windows::UI::Xaml::DependencyProperty IsPressedProperty();
    static Windows::UI::Xaml::DependencyProperty CommandProperty();
    static Windows::UI::Xaml::DependencyProperty CommandParameterProperty();
};

struct WINRT_EBO CalendarPanel :
    Windows::UI::Xaml::Controls::Primitives::ICalendarPanel,
    impl::base<CalendarPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CalendarPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CalendarPanel(std::nullptr_t) noexcept {}
    CalendarPanel();
};

struct WINRT_EBO CalendarViewTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings,
    impl::base<CalendarViewTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<CalendarViewTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    CalendarViewTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CarouselPanel :
    Windows::UI::Xaml::Controls::Primitives::ICarouselPanel,
    impl::base<CarouselPanel, Windows::UI::Xaml::Controls::VirtualizingPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CarouselPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IVirtualizingPanel, Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CarouselPanel(std::nullptr_t) noexcept {}
    CarouselPanel();
};

struct WINRT_EBO ComboBoxTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings,
    impl::base<ComboBoxTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<ComboBoxTemplateSettings, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ComboBoxTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CommandBarTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings,
    impl::base<CommandBarTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<CommandBarTemplateSettings, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    CommandBarTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DragCompletedEventArgs :
    Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs,
    impl::base<DragCompletedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<DragCompletedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    DragCompletedEventArgs(std::nullptr_t) noexcept {}
    DragCompletedEventArgs(double horizontalChange, double verticalChange, bool canceled);
};

struct WINRT_EBO DragDeltaEventArgs :
    Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs,
    impl::base<DragDeltaEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<DragDeltaEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    DragDeltaEventArgs(std::nullptr_t) noexcept {}
    DragDeltaEventArgs(double horizontalChange, double verticalChange);
};

struct WINRT_EBO DragStartedEventArgs :
    Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs,
    impl::base<DragStartedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<DragStartedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    DragStartedEventArgs(std::nullptr_t) noexcept {}
    DragStartedEventArgs(double horizontalOffset, double verticalOffset);
};

struct WINRT_EBO FlyoutBase :
    Windows::UI::Xaml::Controls::Primitives::IFlyoutBase,
    impl::base<FlyoutBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    FlyoutBase(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty PlacementProperty();
    static Windows::UI::Xaml::DependencyProperty AttachedFlyoutProperty();
    static Windows::UI::Xaml::Controls::Primitives::FlyoutBase GetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element);
    static void SetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value);
    static void ShowAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& flyoutOwner);
    static Windows::UI::Xaml::DependencyProperty AllowFocusOnInteractionProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
    static Windows::UI::Xaml::DependencyProperty AllowFocusWhenDisabledProperty();
    static Windows::UI::Xaml::DependencyProperty ElementSoundModeProperty();
    static Windows::UI::Xaml::DependencyProperty OverlayInputPassThroughElementProperty();
};

struct WINRT_EBO FlyoutBaseClosingEventArgs :
    Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs
{
    FlyoutBaseClosingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GeneratorPositionHelper :
    Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper
{
    GeneratorPositionHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Controls::Primitives::GeneratorPosition FromIndexAndOffset(int32_t index, int32_t offset);
};

struct WINRT_EBO GridViewItemPresenter :
    Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter,
    impl::base<GridViewItemPresenter, Windows::UI::Xaml::Controls::ContentPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<GridViewItemPresenter, Windows::UI::Xaml::Controls::IContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter2, Windows::UI::Xaml::Controls::IContentPresenter3, Windows::UI::Xaml::Controls::IContentPresenter4, Windows::UI::Xaml::Controls::IContentPresenterOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    GridViewItemPresenter(std::nullptr_t) noexcept {}
    GridViewItemPresenter();
    static Windows::UI::Xaml::DependencyProperty SelectionCheckMarkVisualEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty CheckHintBrushProperty();
    static Windows::UI::Xaml::DependencyProperty CheckSelectingBrushProperty();
    static Windows::UI::Xaml::DependencyProperty CheckBrushProperty();
    static Windows::UI::Xaml::DependencyProperty DragBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty DragForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty FocusBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty PointerOverBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedPointerOverBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedPointerOverBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedBorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty DisabledOpacityProperty();
    static Windows::UI::Xaml::DependencyProperty DragOpacityProperty();
    static Windows::UI::Xaml::DependencyProperty ReorderHintOffsetProperty();
    [[deprecated("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")]] static Windows::UI::Xaml::DependencyProperty GridViewItemPresenterHorizontalContentAlignmentProperty();
    [[deprecated("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")]] static Windows::UI::Xaml::DependencyProperty GridViewItemPresenterVerticalContentAlignmentProperty();
    [[deprecated("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")]] static Windows::UI::Xaml::DependencyProperty GridViewItemPresenterPaddingProperty();
    static Windows::UI::Xaml::DependencyProperty PointerOverBackgroundMarginProperty();
    static Windows::UI::Xaml::DependencyProperty ContentMarginProperty();
};

struct WINRT_EBO GridViewItemTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings,
    impl::base<GridViewItemTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<GridViewItemTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    GridViewItemTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ItemsChangedEventArgs :
    Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs
{
    ItemsChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO JumpListItemBackgroundConverter :
    Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter,
    impl::base<JumpListItemBackgroundConverter, Windows::UI::Xaml::DependencyObject>,
    impl::require<JumpListItemBackgroundConverter, Windows::UI::Xaml::Data::IValueConverter, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    JumpListItemBackgroundConverter(std::nullptr_t) noexcept {}
    JumpListItemBackgroundConverter();
    static Windows::UI::Xaml::DependencyProperty EnabledProperty();
    static Windows::UI::Xaml::DependencyProperty DisabledProperty();
};

struct WINRT_EBO JumpListItemForegroundConverter :
    Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter,
    impl::base<JumpListItemForegroundConverter, Windows::UI::Xaml::DependencyObject>,
    impl::require<JumpListItemForegroundConverter, Windows::UI::Xaml::Data::IValueConverter, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    JumpListItemForegroundConverter(std::nullptr_t) noexcept {}
    JumpListItemForegroundConverter();
    static Windows::UI::Xaml::DependencyProperty EnabledProperty();
    static Windows::UI::Xaml::DependencyProperty DisabledProperty();
};

struct WINRT_EBO LayoutInformation :
    Windows::UI::Xaml::Controls::Primitives::ILayoutInformation
{
    LayoutInformation(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::UIElement GetLayoutExceptionElement(Windows::Foundation::IInspectable const& dispatcher);
    static Windows::Foundation::Rect GetLayoutSlot(Windows::UI::Xaml::FrameworkElement const& element);
};

struct WINRT_EBO ListViewItemPresenter :
    Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter,
    impl::base<ListViewItemPresenter, Windows::UI::Xaml::Controls::ContentPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListViewItemPresenter, Windows::UI::Xaml::Controls::IContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter2, Windows::UI::Xaml::Controls::IContentPresenter3, Windows::UI::Xaml::Controls::IContentPresenter4, Windows::UI::Xaml::Controls::IContentPresenterOverrides, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListViewItemPresenter(std::nullptr_t) noexcept {}
    ListViewItemPresenter();
    static Windows::UI::Xaml::DependencyProperty SelectionCheckMarkVisualEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty CheckHintBrushProperty();
    static Windows::UI::Xaml::DependencyProperty CheckSelectingBrushProperty();
    static Windows::UI::Xaml::DependencyProperty CheckBrushProperty();
    static Windows::UI::Xaml::DependencyProperty DragBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty DragForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty FocusBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty PointerOverBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedPointerOverBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedPointerOverBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedBorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty DisabledOpacityProperty();
    static Windows::UI::Xaml::DependencyProperty DragOpacityProperty();
    static Windows::UI::Xaml::DependencyProperty ReorderHintOffsetProperty();
    [[deprecated("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")]] static Windows::UI::Xaml::DependencyProperty ListViewItemPresenterHorizontalContentAlignmentProperty();
    [[deprecated("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")]] static Windows::UI::Xaml::DependencyProperty ListViewItemPresenterVerticalContentAlignmentProperty();
    [[deprecated("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")]] static Windows::UI::Xaml::DependencyProperty ListViewItemPresenterPaddingProperty();
    static Windows::UI::Xaml::DependencyProperty PointerOverBackgroundMarginProperty();
    static Windows::UI::Xaml::DependencyProperty ContentMarginProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedPressedBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty PressedBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty CheckBoxBrushProperty();
    static Windows::UI::Xaml::DependencyProperty FocusSecondaryBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty CheckModeProperty();
    static Windows::UI::Xaml::DependencyProperty PointerOverForegroundProperty();
};

struct WINRT_EBO ListViewItemTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings,
    impl::base<ListViewItemTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListViewItemTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ListViewItemTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LoopingSelector :
    Windows::UI::Xaml::Controls::Primitives::ILoopingSelector,
    impl::base<LoopingSelector, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<LoopingSelector, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    LoopingSelector(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty ShouldLoopProperty();
    static Windows::UI::Xaml::DependencyProperty ItemsProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedIndexProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedItemProperty();
    static Windows::UI::Xaml::DependencyProperty ItemWidthProperty();
    static Windows::UI::Xaml::DependencyProperty ItemHeightProperty();
    static Windows::UI::Xaml::DependencyProperty ItemTemplateProperty();
};

struct WINRT_EBO LoopingSelectorItem :
    Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem,
    impl::base<LoopingSelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<LoopingSelectorItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    LoopingSelectorItem(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LoopingSelectorPanel :
    Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel,
    impl::base<LoopingSelectorPanel, Windows::UI::Xaml::Controls::Canvas, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<LoopingSelectorPanel, Windows::UI::Xaml::Controls::ICanvas, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    LoopingSelectorPanel(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MenuFlyoutPresenterTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings,
    impl::base<MenuFlyoutPresenterTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<MenuFlyoutPresenterTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MenuFlyoutPresenterTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OrientedVirtualizingPanel :
    Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel,
    impl::base<OrientedVirtualizingPanel, Windows::UI::Xaml::Controls::VirtualizingPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<OrientedVirtualizingPanel, Windows::UI::Xaml::Controls::IInsertionPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IVirtualizingPanel, Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    OrientedVirtualizingPanel(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PickerFlyoutBase :
    Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase,
    impl::base<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    PickerFlyoutBase(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty TitleProperty();
    static hstring GetTitle(Windows::UI::Xaml::DependencyObject const& element);
    static void SetTitle(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
};

struct WINRT_EBO PivotHeaderItem :
    Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem,
    impl::base<PivotHeaderItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<PivotHeaderItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    PivotHeaderItem(std::nullptr_t) noexcept {}
    PivotHeaderItem();
};

struct WINRT_EBO PivotHeaderPanel :
    Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel,
    impl::base<PivotHeaderPanel, Windows::UI::Xaml::Controls::Canvas, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<PivotHeaderPanel, Windows::UI::Xaml::Controls::ICanvas, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    PivotHeaderPanel(std::nullptr_t) noexcept {}
    PivotHeaderPanel();
};

struct WINRT_EBO PivotPanel :
    Windows::UI::Xaml::Controls::Primitives::IPivotPanel,
    impl::base<PivotPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<PivotPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    PivotPanel(std::nullptr_t) noexcept {}
    PivotPanel();
};

struct WINRT_EBO Popup :
    Windows::UI::Xaml::Controls::Primitives::IPopup,
    impl::base<Popup, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Popup, Windows::UI::Xaml::Controls::Primitives::IPopup2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Popup(std::nullptr_t) noexcept {}
    Popup();
    static Windows::UI::Xaml::DependencyProperty ChildProperty();
    static Windows::UI::Xaml::DependencyProperty IsOpenProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty ChildTransitionsProperty();
    static Windows::UI::Xaml::DependencyProperty IsLightDismissEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
};

struct WINRT_EBO ProgressBarTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings,
    impl::base<ProgressBarTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<ProgressBarTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ProgressBarTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProgressRingTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings,
    impl::base<ProgressRingTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<ProgressRingTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ProgressRingTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RangeBase :
    Windows::UI::Xaml::Controls::Primitives::IRangeBase,
    impl::base<RangeBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<RangeBase, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    RangeBase(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty MinimumProperty();
    static Windows::UI::Xaml::DependencyProperty MaximumProperty();
    static Windows::UI::Xaml::DependencyProperty SmallChangeProperty();
    static Windows::UI::Xaml::DependencyProperty LargeChangeProperty();
    static Windows::UI::Xaml::DependencyProperty ValueProperty();
};

struct WINRT_EBO RangeBaseValueChangedEventArgs :
    Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs,
    impl::base<RangeBaseValueChangedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<RangeBaseValueChangedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    RangeBaseValueChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RepeatButton :
    Windows::UI::Xaml::Controls::Primitives::IRepeatButton,
    impl::base<RepeatButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<RepeatButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    RepeatButton(std::nullptr_t) noexcept {}
    RepeatButton();
    static Windows::UI::Xaml::DependencyProperty DelayProperty();
    static Windows::UI::Xaml::DependencyProperty IntervalProperty();
};

struct WINRT_EBO ScrollBar :
    Windows::UI::Xaml::Controls::Primitives::IScrollBar,
    impl::base<ScrollBar, Windows::UI::Xaml::Controls::Primitives::RangeBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ScrollBar, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IRangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ScrollBar(std::nullptr_t) noexcept {}
    ScrollBar();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty ViewportSizeProperty();
    static Windows::UI::Xaml::DependencyProperty IndicatorModeProperty();
};

struct WINRT_EBO ScrollEventArgs :
    Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs,
    impl::base<ScrollEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ScrollEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ScrollEventArgs(std::nullptr_t) noexcept {}
    ScrollEventArgs();
};

struct WINRT_EBO Selector :
    Windows::UI::Xaml::Controls::Primitives::ISelector,
    impl::base<Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Selector, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Selector(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty SelectedIndexProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedItemProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedValueProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedValuePathProperty();
    static Windows::UI::Xaml::DependencyProperty IsSynchronizedWithCurrentItemProperty();
    static bool GetIsSelectionActive(Windows::UI::Xaml::DependencyObject const& element);
};

struct WINRT_EBO SelectorItem :
    Windows::UI::Xaml::Controls::Primitives::ISelectorItem,
    impl::base<SelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<SelectorItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    SelectorItem(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty IsSelectedProperty();
};

struct WINRT_EBO SettingsFlyoutTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings,
    impl::base<SettingsFlyoutTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<SettingsFlyoutTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    SettingsFlyoutTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SplitViewTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings,
    impl::base<SplitViewTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<SplitViewTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    SplitViewTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Thumb :
    Windows::UI::Xaml::Controls::Primitives::IThumb,
    impl::base<Thumb, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Thumb, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Thumb(std::nullptr_t) noexcept {}
    Thumb();
    static Windows::UI::Xaml::DependencyProperty IsDraggingProperty();
};

struct WINRT_EBO TickBar :
    Windows::UI::Xaml::Controls::Primitives::ITickBar,
    impl::base<TickBar, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<TickBar, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    TickBar(std::nullptr_t) noexcept {}
    TickBar();
    static Windows::UI::Xaml::DependencyProperty FillProperty();
};

struct WINRT_EBO ToggleButton :
    Windows::UI::Xaml::Controls::Primitives::IToggleButton,
    impl::base<ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ToggleButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ToggleButton(std::nullptr_t) noexcept {}
    ToggleButton();
    static Windows::UI::Xaml::DependencyProperty IsCheckedProperty();
    static Windows::UI::Xaml::DependencyProperty IsThreeStateProperty();
};

struct WINRT_EBO ToggleSwitchTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings,
    impl::base<ToggleSwitchTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<ToggleSwitchTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ToggleSwitchTemplateSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ToolTipTemplateSettings :
    Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings,
    impl::base<ToolTipTemplateSettings, Windows::UI::Xaml::DependencyObject>,
    impl::require<ToolTipTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ToolTipTemplateSettings(std::nullptr_t) noexcept {}
};

template <typename D>
class IFlyoutBaseOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IFlyoutBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides;

    Windows::UI::Xaml::Controls::Control CreatePresenter() const;
};

template <typename D>
class IPickerFlyoutBaseOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IPickerFlyoutBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides;

    void OnConfirmed() const;
    bool ShouldShowConfirmationButtons() const;
};

template <typename D>
class IRangeBaseOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IRangeBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides;

    void OnMinimumChanged(double oldMinimum, double newMinimum) const;
    void OnMaximumChanged(double oldMaximum, double newMaximum) const;
    void OnValueChanged(double oldValue, double newValue) const;
};

template <typename D>
class IToggleButtonOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IToggleButtonOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides;

    void OnToggle() const;
};

}
