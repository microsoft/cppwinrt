// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Controls.Primitives.1.h"
#include "Windows.UI.Xaml.2.h"
#include "Windows.UI.Xaml.Controls.2.h"
#include "Windows.UI.Xaml.Data.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_a6487363_b074_5c60_ab16_866dce4ee54d
#define WINRT_GENERIC_a6487363_b074_5c60_ab16_866dce4ee54d
template <> struct __declspec(uuid("a6487363-b074-5c60-ab16-866dce4ee54d")) __declspec(novtable) IVectorView<Windows::IInspectable> : impl_IVectorView<Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3c00fd60_2950_5939_a21a_2d12c5a01b8a
#define WINRT_GENERIC_3c00fd60_2950_5939_a21a_2d12c5a01b8a
template <> struct __declspec(uuid("3c00fd60-2950-5939-a21a-2d12c5a01b8a")) __declspec(novtable) IReference<bool> : impl_IReference<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_b32bdca4_5e52_5b27_bc5d_d66a1a268c2a
#define WINRT_GENERIC_b32bdca4_5e52_5b27_bc5d_d66a1a268c2a
template <> struct __declspec(uuid("b32bdca4-5e52-5b27-bc5d-d66a1a268c2a")) __declspec(novtable) IVector<Windows::IInspectable> : impl_IVector<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_092b849b_60b1_52be_a44a_6fe8e933cbe4
#define WINRT_GENERIC_092b849b_60b1_52be_a44a_6fe8e933cbe4
template <> struct __declspec(uuid("092b849b-60b1-52be-a44a-6fe8e933cbe4")) __declspec(novtable) IIterable<Windows::IInspectable> : impl_IIterable<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_7bca64fd_150c_5d50_b56b_9f4f474c5930
#define WINRT_GENERIC_7bca64fd_150c_5d50_b56b_9f4f474c5930
template <> struct __declspec(uuid("7bca64fd-150c-5d50-b56b-9f4f474c5930")) __declspec(novtable) IVectorView<float> : impl_IVectorView<float> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_96e17fbc_78c7_5560_ac3a_587f46db70d6
#define WINRT_GENERIC_96e17fbc_78c7_5560_ac3a_587f46db70d6
template <> struct __declspec(uuid("96e17fbc-78c7-5560-ac3a-587f46db70d6")) __declspec(novtable) TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> : impl_TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_44a94f2d_04f8_5091_b336_be7892dd10be
#define WINRT_GENERIC_44a94f2d_04f8_5091_b336_be7892dd10be
template <> struct __declspec(uuid("44a94f2d-04f8-5091-b336-be7892dd10be")) __declspec(novtable) IIterator<Windows::IInspectable> : impl_IIterator<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_42614e61_b0aa_5e72_9354_2771db20b7a8
#define WINRT_GENERIC_42614e61_b0aa_5e72_9354_2771db20b7a8
template <> struct __declspec(uuid("42614e61-b0aa-5e72-9354-2771db20b7a8")) __declspec(novtable) IIterator<float> : impl_IIterator<float> {};
#endif

#ifndef WINRT_GENERIC_b01bee51_063a_5fda_bd72_d76637bb8cb8
#define WINRT_GENERIC_b01bee51_063a_5fda_bd72_d76637bb8cb8
template <> struct __declspec(uuid("b01bee51-063a-5fda-bd72-d76637bb8cb8")) __declspec(novtable) IIterable<float> : impl_IIterable<float> {};
#endif


}

namespace Windows::UI::Xaml::Controls::Primitives {

template <typename D>
struct WINRT_EBO impl_IAppBarTemplateSettings
{
    Windows::Foundation::Rect ClipRect() const;
    double CompactVerticalDelta() const;
    Windows::UI::Xaml::Thickness CompactRootMargin() const;
    double MinimalVerticalDelta() const;
    Windows::UI::Xaml::Thickness MinimalRootMargin() const;
    double HiddenVerticalDelta() const;
    Windows::UI::Xaml::Thickness HiddenRootMargin() const;
};

template <typename D>
struct WINRT_EBO impl_IButtonBase
{
    Windows::UI::Xaml::Controls::ClickMode ClickMode() const;
    void ClickMode(Windows::UI::Xaml::Controls::ClickMode value) const;
    bool IsPointerOver() const;
    bool IsPressed() const;
    Windows::UI::Xaml::Input::ICommand Command() const;
    void Command(const Windows::UI::Xaml::Input::ICommand & value) const;
    Windows::IInspectable CommandParameter() const;
    void CommandParameter(const Windows::IInspectable & value) const;
    event_token Click(const Windows::UI::Xaml::RoutedEventHandler & value) const;
    using Click_revoker = event_revoker<IButtonBase>;
    Click_revoker Click(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const;
    void Click(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IButtonBaseFactory
{
    Windows::UI::Xaml::Controls::Primitives::ButtonBase CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IButtonBaseStatics
{
    Windows::UI::Xaml::DependencyProperty ClickModeProperty() const;
    Windows::UI::Xaml::DependencyProperty IsPointerOverProperty() const;
    Windows::UI::Xaml::DependencyProperty IsPressedProperty() const;
    Windows::UI::Xaml::DependencyProperty CommandProperty() const;
    Windows::UI::Xaml::DependencyProperty CommandParameterProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ICalendarPanel
{
};

template <typename D>
struct WINRT_EBO impl_ICalendarViewTemplateSettings
{
    double MinViewWidth() const;
    hstring HeaderText() const;
    hstring WeekDay1() const;
    hstring WeekDay2() const;
    hstring WeekDay3() const;
    hstring WeekDay4() const;
    hstring WeekDay5() const;
    hstring WeekDay6() const;
    hstring WeekDay7() const;
    bool HasMoreContentAfter() const;
    bool HasMoreContentBefore() const;
    bool HasMoreViews() const;
    Windows::Foundation::Rect ClipRect() const;
    double CenterX() const;
    double CenterY() const;
};

template <typename D>
struct WINRT_EBO impl_ICarouselPanel
{
    bool CanVerticallyScroll() const;
    void CanVerticallyScroll(bool value) const;
    bool CanHorizontallyScroll() const;
    void CanHorizontallyScroll(bool value) const;
    double ExtentWidth() const;
    double ExtentHeight() const;
    double ViewportWidth() const;
    double ViewportHeight() const;
    double HorizontalOffset() const;
    double VerticalOffset() const;
    Windows::IInspectable ScrollOwner() const;
    void ScrollOwner(const Windows::IInspectable & value) const;
    void LineUp() const;
    void LineDown() const;
    void LineLeft() const;
    void LineRight() const;
    void PageUp() const;
    void PageDown() const;
    void PageLeft() const;
    void PageRight() const;
    void MouseWheelUp() const;
    void MouseWheelDown() const;
    void MouseWheelLeft() const;
    void MouseWheelRight() const;
    void SetHorizontalOffset(double offset) const;
    void SetVerticalOffset(double offset) const;
    Windows::Foundation::Rect MakeVisible(const Windows::UI::Xaml::UIElement & visual, const Windows::Foundation::Rect & rectangle) const;
};

template <typename D>
struct WINRT_EBO impl_ICarouselPanelFactory
{
    Windows::UI::Xaml::Controls::Primitives::CarouselPanel CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IComboBoxTemplateSettings
{
    double DropDownOpenedHeight() const;
    double DropDownClosedHeight() const;
    double DropDownOffset() const;
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection SelectedItemDirection() const;
};

template <typename D>
struct WINRT_EBO impl_IComboBoxTemplateSettings2
{
    double DropDownContentMinWidth() const;
};

template <typename D>
struct WINRT_EBO impl_ICommandBarTemplateSettings
{
    double ContentHeight() const;
    Windows::Foundation::Rect OverflowContentClipRect() const;
    double OverflowContentMinWidth() const;
    double OverflowContentMaxHeight() const;
    double OverflowContentHorizontalOffset() const;
    double OverflowContentHeight() const;
    double NegativeOverflowContentHeight() const;
};

template <typename D>
struct WINRT_EBO impl_ICommandBarTemplateSettings2
{
    double OverflowContentMaxWidth() const;
};

template <typename D>
struct WINRT_EBO impl_ICommandBarTemplateSettings3
{
    Windows::UI::Xaml::Visibility EffectiveOverflowButtonVisibility() const;
};

template <typename D>
struct WINRT_EBO impl_IDragCompletedEventArgs
{
    double HorizontalChange() const;
    double VerticalChange() const;
    bool Canceled() const;
};

template <typename D>
struct WINRT_EBO impl_IDragCompletedEventArgsFactory
{
    Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IDragDeltaEventArgs
{
    double HorizontalChange() const;
    double VerticalChange() const;
};

template <typename D>
struct WINRT_EBO impl_IDragDeltaEventArgsFactory
{
    Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IDragStartedEventArgs
{
    double HorizontalOffset() const;
    double VerticalOffset() const;
};

template <typename D>
struct WINRT_EBO impl_IDragStartedEventArgsFactory
{
    Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IFlyoutBase
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode Placement() const;
    void Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode value) const;
    event_token Opened(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using Opened_revoker = event_revoker<IFlyoutBase>;
    Opened_revoker Opened(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void Opened(event_token token) const;
    event_token Closed(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using Closed_revoker = event_revoker<IFlyoutBase>;
    Closed_revoker Closed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void Closed(event_token token) const;
    event_token Opening(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using Opening_revoker = event_revoker<IFlyoutBase>;
    Opening_revoker Opening(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void Opening(event_token token) const;
    void ShowAt(const Windows::UI::Xaml::FrameworkElement & placementTarget) const;
    void Hide() const;
};

template <typename D>
struct WINRT_EBO impl_IFlyoutBase2
{
    Windows::UI::Xaml::FrameworkElement Target() const;
    bool AllowFocusOnInteraction() const;
    void AllowFocusOnInteraction(bool value) const;
    Windows::UI::Xaml::Controls::LightDismissOverlayMode LightDismissOverlayMode() const;
    void LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) const;
    bool AllowFocusWhenDisabled() const;
    void AllowFocusWhenDisabled(bool value) const;
    Windows::UI::Xaml::ElementSoundMode ElementSoundMode() const;
    void ElementSoundMode(Windows::UI::Xaml::ElementSoundMode value) const;
    event_token Closing(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> & value) const;
    using Closing_revoker = event_revoker<IFlyoutBase2>;
    Closing_revoker Closing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> & value) const;
    void Closing(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IFlyoutBaseClosingEventArgs
{
    bool Cancel() const;
    void Cancel(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IFlyoutBaseFactory
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IFlyoutBaseOverrides
{
    Windows::UI::Xaml::Controls::Control CreatePresenter() const;
};

template <typename D>
struct WINRT_EBO impl_IFlyoutBaseStatics
{
    Windows::UI::Xaml::DependencyProperty PlacementProperty() const;
    Windows::UI::Xaml::DependencyProperty AttachedFlyoutProperty() const;
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase GetAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & element) const;
    void SetAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & element, const Windows::UI::Xaml::Controls::Primitives::FlyoutBase & value) const;
    void ShowAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & flyoutOwner) const;
};

template <typename D>
struct WINRT_EBO impl_IFlyoutBaseStatics2
{
    Windows::UI::Xaml::DependencyProperty AllowFocusOnInteractionProperty() const;
    Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty() const;
    Windows::UI::Xaml::DependencyProperty AllowFocusWhenDisabledProperty() const;
    Windows::UI::Xaml::DependencyProperty ElementSoundModeProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IGeneratorPositionHelper
{
};

template <typename D>
struct WINRT_EBO impl_IGeneratorPositionHelperStatics
{
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition FromIndexAndOffset(int32_t index, int32_t offset) const;
};

template <typename D>
struct WINRT_EBO impl_IGridViewItemPresenter
{
    bool SelectionCheckMarkVisualEnabled() const;
    void SelectionCheckMarkVisualEnabled(bool value) const;
    Windows::UI::Xaml::Media::Brush CheckHintBrush() const;
    void CheckHintBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush CheckSelectingBrush() const;
    void CheckSelectingBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush CheckBrush() const;
    void CheckBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush DragBackground() const;
    void DragBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush DragForeground() const;
    void DragForeground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush FocusBorderBrush() const;
    void FocusBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush PlaceholderBackground() const;
    void PlaceholderBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush PointerOverBackground() const;
    void PointerOverBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush SelectedBackground() const;
    void SelectedBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush SelectedForeground() const;
    void SelectedForeground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush SelectedPointerOverBackground() const;
    void SelectedPointerOverBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush SelectedPointerOverBorderBrush() const;
    void SelectedPointerOverBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Thickness SelectedBorderThickness() const;
    void SelectedBorderThickness(const Windows::UI::Xaml::Thickness & value) const;
    double DisabledOpacity() const;
    void DisabledOpacity(double value) const;
    double DragOpacity() const;
    void DragOpacity(double value) const;
    double ReorderHintOffset() const;
    void ReorderHintOffset(double value) const;
    Windows::UI::Xaml::HorizontalAlignment GridViewItemPresenterHorizontalContentAlignment() const;
    void GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) const;
    Windows::UI::Xaml::VerticalAlignment GridViewItemPresenterVerticalContentAlignment() const;
    void GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) const;
    Windows::UI::Xaml::Thickness GridViewItemPresenterPadding() const;
    void GridViewItemPresenterPadding(const Windows::UI::Xaml::Thickness & value) const;
    Windows::UI::Xaml::Thickness PointerOverBackgroundMargin() const;
    void PointerOverBackgroundMargin(const Windows::UI::Xaml::Thickness & value) const;
    Windows::UI::Xaml::Thickness ContentMargin() const;
    void ContentMargin(const Windows::UI::Xaml::Thickness & value) const;
};

template <typename D>
struct WINRT_EBO impl_IGridViewItemPresenterFactory
{
    Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IGridViewItemPresenterStatics
{
    Windows::UI::Xaml::DependencyProperty SelectionCheckMarkVisualEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckHintBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckSelectingBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty DragBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty DragForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty PlaceholderBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedPointerOverBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedPointerOverBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedBorderThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty DisabledOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty DragOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty ReorderHintOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty GridViewItemPresenterHorizontalContentAlignmentProperty() const;
    Windows::UI::Xaml::DependencyProperty GridViewItemPresenterVerticalContentAlignmentProperty() const;
    Windows::UI::Xaml::DependencyProperty GridViewItemPresenterPaddingProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverBackgroundMarginProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentMarginProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IGridViewItemTemplateSettings
{
    int32_t DragItemsCount() const;
};

template <typename D>
struct WINRT_EBO impl_IItemsChangedEventArgs
{
    int32_t Action() const;
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition Position() const;
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition OldPosition() const;
    int32_t ItemCount() const;
    int32_t ItemUICount() const;
};

template <typename D>
struct WINRT_EBO impl_IJumpListItemBackgroundConverter
{
    Windows::UI::Xaml::Media::Brush Enabled() const;
    void Enabled(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush Disabled() const;
    void Disabled(const Windows::UI::Xaml::Media::Brush & value) const;
};

template <typename D>
struct WINRT_EBO impl_IJumpListItemBackgroundConverterStatics
{
    Windows::UI::Xaml::DependencyProperty EnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty DisabledProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IJumpListItemForegroundConverter
{
    Windows::UI::Xaml::Media::Brush Enabled() const;
    void Enabled(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush Disabled() const;
    void Disabled(const Windows::UI::Xaml::Media::Brush & value) const;
};

template <typename D>
struct WINRT_EBO impl_IJumpListItemForegroundConverterStatics
{
    Windows::UI::Xaml::DependencyProperty EnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty DisabledProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ILayoutInformation
{
};

template <typename D>
struct WINRT_EBO impl_ILayoutInformationStatics
{
    Windows::UI::Xaml::UIElement GetLayoutExceptionElement(const Windows::IInspectable & dispatcher) const;
    Windows::Foundation::Rect GetLayoutSlot(const Windows::UI::Xaml::FrameworkElement & element) const;
};

template <typename D>
struct WINRT_EBO impl_IListViewItemPresenter
{
    bool SelectionCheckMarkVisualEnabled() const;
    void SelectionCheckMarkVisualEnabled(bool value) const;
    Windows::UI::Xaml::Media::Brush CheckHintBrush() const;
    void CheckHintBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush CheckSelectingBrush() const;
    void CheckSelectingBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush CheckBrush() const;
    void CheckBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush DragBackground() const;
    void DragBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush DragForeground() const;
    void DragForeground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush FocusBorderBrush() const;
    void FocusBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush PlaceholderBackground() const;
    void PlaceholderBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush PointerOverBackground() const;
    void PointerOverBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush SelectedBackground() const;
    void SelectedBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush SelectedForeground() const;
    void SelectedForeground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush SelectedPointerOverBackground() const;
    void SelectedPointerOverBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush SelectedPointerOverBorderBrush() const;
    void SelectedPointerOverBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Thickness SelectedBorderThickness() const;
    void SelectedBorderThickness(const Windows::UI::Xaml::Thickness & value) const;
    double DisabledOpacity() const;
    void DisabledOpacity(double value) const;
    double DragOpacity() const;
    void DragOpacity(double value) const;
    double ReorderHintOffset() const;
    void ReorderHintOffset(double value) const;
    Windows::UI::Xaml::HorizontalAlignment ListViewItemPresenterHorizontalContentAlignment() const;
    void ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) const;
    Windows::UI::Xaml::VerticalAlignment ListViewItemPresenterVerticalContentAlignment() const;
    void ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) const;
    Windows::UI::Xaml::Thickness ListViewItemPresenterPadding() const;
    void ListViewItemPresenterPadding(const Windows::UI::Xaml::Thickness & value) const;
    Windows::UI::Xaml::Thickness PointerOverBackgroundMargin() const;
    void PointerOverBackgroundMargin(const Windows::UI::Xaml::Thickness & value) const;
    Windows::UI::Xaml::Thickness ContentMargin() const;
    void ContentMargin(const Windows::UI::Xaml::Thickness & value) const;
};

template <typename D>
struct WINRT_EBO impl_IListViewItemPresenter2
{
    Windows::UI::Xaml::Media::Brush SelectedPressedBackground() const;
    void SelectedPressedBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush PressedBackground() const;
    void PressedBackground(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush CheckBoxBrush() const;
    void CheckBoxBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush FocusSecondaryBorderBrush() const;
    void FocusSecondaryBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode CheckMode() const;
    void CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode value) const;
    Windows::UI::Xaml::Media::Brush PointerOverForeground() const;
    void PointerOverForeground(const Windows::UI::Xaml::Media::Brush & value) const;
};

template <typename D>
struct WINRT_EBO impl_IListViewItemPresenterFactory
{
    Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IListViewItemPresenterStatics
{
    Windows::UI::Xaml::DependencyProperty SelectionCheckMarkVisualEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckHintBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckSelectingBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty DragBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty DragForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty PlaceholderBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedPointerOverBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedPointerOverBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedBorderThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty DisabledOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty DragOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty ReorderHintOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty ListViewItemPresenterHorizontalContentAlignmentProperty() const;
    Windows::UI::Xaml::DependencyProperty ListViewItemPresenterVerticalContentAlignmentProperty() const;
    Windows::UI::Xaml::DependencyProperty ListViewItemPresenterPaddingProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverBackgroundMarginProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentMarginProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IListViewItemPresenterStatics2
{
    Windows::UI::Xaml::DependencyProperty SelectedPressedBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty PressedBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckBoxBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusSecondaryBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckModeProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverForegroundProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IListViewItemTemplateSettings
{
    int32_t DragItemsCount() const;
};

template <typename D>
struct WINRT_EBO impl_ILoopingSelector
{
    bool ShouldLoop() const;
    void ShouldLoop(bool value) const;
    Windows::Foundation::Collections::IVector<Windows::IInspectable> Items() const;
    void Items(const Windows::Foundation::Collections::IVector<Windows::IInspectable> & value) const;
    int32_t SelectedIndex() const;
    void SelectedIndex(int32_t value) const;
    Windows::IInspectable SelectedItem() const;
    void SelectedItem(const Windows::IInspectable & value) const;
    int32_t ItemWidth() const;
    void ItemWidth(int32_t value) const;
    int32_t ItemHeight() const;
    void ItemHeight(int32_t value) const;
    Windows::UI::Xaml::DataTemplate ItemTemplate() const;
    void ItemTemplate(const Windows::UI::Xaml::DataTemplate & value) const;
    event_token SelectionChanged(const Windows::UI::Xaml::Controls::SelectionChangedEventHandler & value) const;
    using SelectionChanged_revoker = event_revoker<ILoopingSelector>;
    SelectionChanged_revoker SelectionChanged(auto_revoke_t, const Windows::UI::Xaml::Controls::SelectionChangedEventHandler & value) const;
    void SelectionChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ILoopingSelectorItem
{
};

template <typename D>
struct WINRT_EBO impl_ILoopingSelectorPanel
{
};

template <typename D>
struct WINRT_EBO impl_ILoopingSelectorStatics
{
    Windows::UI::Xaml::DependencyProperty ShouldLoopProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemsProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedIndexProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedItemProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemHeightProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemTemplateProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IMenuFlyoutPresenterTemplateSettings
{
    double FlyoutContentMinWidth() const;
};

template <typename D>
struct WINRT_EBO impl_IOrientedVirtualizingPanel
{
    bool CanVerticallyScroll() const;
    void CanVerticallyScroll(bool value) const;
    bool CanHorizontallyScroll() const;
    void CanHorizontallyScroll(bool value) const;
    double ExtentWidth() const;
    double ExtentHeight() const;
    double ViewportWidth() const;
    double ViewportHeight() const;
    double HorizontalOffset() const;
    double VerticalOffset() const;
    Windows::IInspectable ScrollOwner() const;
    void ScrollOwner(const Windows::IInspectable & value) const;
    void LineUp() const;
    void LineDown() const;
    void LineLeft() const;
    void LineRight() const;
    void PageUp() const;
    void PageDown() const;
    void PageLeft() const;
    void PageRight() const;
    void MouseWheelUp() const;
    void MouseWheelDown() const;
    void MouseWheelLeft() const;
    void MouseWheelRight() const;
    void SetHorizontalOffset(double offset) const;
    void SetVerticalOffset(double offset) const;
    Windows::Foundation::Rect MakeVisible(const Windows::UI::Xaml::UIElement & visual, const Windows::Foundation::Rect & rectangle) const;
};

template <typename D>
struct WINRT_EBO impl_IOrientedVirtualizingPanelFactory
{
};

template <typename D>
struct WINRT_EBO impl_IPickerFlyoutBase
{
};

template <typename D>
struct WINRT_EBO impl_IPickerFlyoutBaseFactory
{
    Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IPickerFlyoutBaseOverrides
{
    void OnConfirmed() const;
    bool ShouldShowConfirmationButtons() const;
};

template <typename D>
struct WINRT_EBO impl_IPickerFlyoutBaseStatics
{
    Windows::UI::Xaml::DependencyProperty TitleProperty() const;
    hstring GetTitle(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetTitle(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IPivotHeaderItem
{
};

template <typename D>
struct WINRT_EBO impl_IPivotHeaderItemFactory
{
    Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IPivotHeaderPanel
{
};

template <typename D>
struct WINRT_EBO impl_IPivotPanel
{
};

template <typename D>
struct WINRT_EBO impl_IPopup
{
    Windows::UI::Xaml::UIElement Child() const;
    void Child(const Windows::UI::Xaml::UIElement & value) const;
    bool IsOpen() const;
    void IsOpen(bool value) const;
    double HorizontalOffset() const;
    void HorizontalOffset(double value) const;
    double VerticalOffset() const;
    void VerticalOffset(double value) const;
    Windows::UI::Xaml::Media::Animation::TransitionCollection ChildTransitions() const;
    void ChildTransitions(const Windows::UI::Xaml::Media::Animation::TransitionCollection & value) const;
    bool IsLightDismissEnabled() const;
    void IsLightDismissEnabled(bool value) const;
    event_token Opened(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using Opened_revoker = event_revoker<IPopup>;
    Opened_revoker Opened(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void Opened(event_token token) const;
    event_token Closed(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using Closed_revoker = event_revoker<IPopup>;
    Closed_revoker Closed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void Closed(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IPopup2
{
    Windows::UI::Xaml::Controls::LightDismissOverlayMode LightDismissOverlayMode() const;
    void LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) const;
};

template <typename D>
struct WINRT_EBO impl_IPopupStatics
{
    Windows::UI::Xaml::DependencyProperty ChildProperty() const;
    Windows::UI::Xaml::DependencyProperty IsOpenProperty() const;
    Windows::UI::Xaml::DependencyProperty HorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty VerticalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty ChildTransitionsProperty() const;
    Windows::UI::Xaml::DependencyProperty IsLightDismissEnabledProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IPopupStatics2
{
    Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IProgressBarTemplateSettings
{
    double EllipseDiameter() const;
    double EllipseOffset() const;
    double EllipseAnimationWellPosition() const;
    double EllipseAnimationEndPosition() const;
    double ContainerAnimationStartPosition() const;
    double ContainerAnimationEndPosition() const;
    double IndicatorLengthDelta() const;
};

template <typename D>
struct WINRT_EBO impl_IProgressRingTemplateSettings
{
    double EllipseDiameter() const;
    Windows::UI::Xaml::Thickness EllipseOffset() const;
    double MaxSideLength() const;
};

template <typename D>
struct WINRT_EBO impl_IRangeBase
{
    double Minimum() const;
    void Minimum(double value) const;
    double Maximum() const;
    void Maximum(double value) const;
    double SmallChange() const;
    void SmallChange(double value) const;
    double LargeChange() const;
    void LargeChange(double value) const;
    double Value() const;
    void Value(double value) const;
    event_token ValueChanged(const Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler & value) const;
    using ValueChanged_revoker = event_revoker<IRangeBase>;
    ValueChanged_revoker ValueChanged(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler & value) const;
    void ValueChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IRangeBaseFactory
{
    Windows::UI::Xaml::Controls::Primitives::RangeBase CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IRangeBaseOverrides
{
    void OnMinimumChanged(double oldMinimum, double newMinimum) const;
    void OnMaximumChanged(double oldMaximum, double newMaximum) const;
    void OnValueChanged(double oldValue, double newValue) const;
};

template <typename D>
struct WINRT_EBO impl_IRangeBaseStatics
{
    Windows::UI::Xaml::DependencyProperty MinimumProperty() const;
    Windows::UI::Xaml::DependencyProperty MaximumProperty() const;
    Windows::UI::Xaml::DependencyProperty SmallChangeProperty() const;
    Windows::UI::Xaml::DependencyProperty LargeChangeProperty() const;
    Windows::UI::Xaml::DependencyProperty ValueProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IRangeBaseValueChangedEventArgs
{
    double OldValue() const;
    double NewValue() const;
};

template <typename D>
struct WINRT_EBO impl_IRepeatButton
{
    int32_t Delay() const;
    void Delay(int32_t value) const;
    int32_t Interval() const;
    void Interval(int32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IRepeatButtonStatics
{
    Windows::UI::Xaml::DependencyProperty DelayProperty() const;
    Windows::UI::Xaml::DependencyProperty IntervalProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IScrollBar
{
    Windows::UI::Xaml::Controls::Orientation Orientation() const;
    void Orientation(Windows::UI::Xaml::Controls::Orientation value) const;
    double ViewportSize() const;
    void ViewportSize(double value) const;
    Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode IndicatorMode() const;
    void IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode value) const;
    event_token Scroll(const Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler & value) const;
    using Scroll_revoker = event_revoker<IScrollBar>;
    Scroll_revoker Scroll(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler & value) const;
    void Scroll(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IScrollBarStatics
{
    Windows::UI::Xaml::DependencyProperty OrientationProperty() const;
    Windows::UI::Xaml::DependencyProperty ViewportSizeProperty() const;
    Windows::UI::Xaml::DependencyProperty IndicatorModeProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IScrollEventArgs
{
    double NewValue() const;
    Windows::UI::Xaml::Controls::Primitives::ScrollEventType ScrollEventType() const;
};

template <typename D>
struct WINRT_EBO impl_IScrollSnapPointsInfo
{
    bool AreHorizontalSnapPointsRegular() const;
    bool AreVerticalSnapPointsRegular() const;
    event_token HorizontalSnapPointsChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using HorizontalSnapPointsChanged_revoker = event_revoker<IScrollSnapPointsInfo>;
    HorizontalSnapPointsChanged_revoker HorizontalSnapPointsChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void HorizontalSnapPointsChanged(event_token token) const;
    event_token VerticalSnapPointsChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using VerticalSnapPointsChanged_revoker = event_revoker<IScrollSnapPointsInfo>;
    VerticalSnapPointsChanged_revoker VerticalSnapPointsChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void VerticalSnapPointsChanged(event_token token) const;
    Windows::Foundation::Collections::IVectorView<float> GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment) const;
    float GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, float & offset) const;
};

template <typename D>
struct WINRT_EBO impl_ISelector
{
    int32_t SelectedIndex() const;
    void SelectedIndex(int32_t value) const;
    Windows::IInspectable SelectedItem() const;
    void SelectedItem(const Windows::IInspectable & value) const;
    Windows::IInspectable SelectedValue() const;
    void SelectedValue(const Windows::IInspectable & value) const;
    hstring SelectedValuePath() const;
    void SelectedValuePath(hstring_ref value) const;
    Windows::Foundation::IReference<bool> IsSynchronizedWithCurrentItem() const;
    void IsSynchronizedWithCurrentItem(const Windows::Foundation::IReference<bool> & value) const;
    event_token SelectionChanged(const Windows::UI::Xaml::Controls::SelectionChangedEventHandler & value) const;
    using SelectionChanged_revoker = event_revoker<ISelector>;
    SelectionChanged_revoker SelectionChanged(auto_revoke_t, const Windows::UI::Xaml::Controls::SelectionChangedEventHandler & value) const;
    void SelectionChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ISelectorFactory
{
};

template <typename D>
struct WINRT_EBO impl_ISelectorItem
{
    bool IsSelected() const;
    void IsSelected(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ISelectorItemFactory
{
    Windows::UI::Xaml::Controls::Primitives::SelectorItem CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_ISelectorItemStatics
{
    Windows::UI::Xaml::DependencyProperty IsSelectedProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ISelectorStatics
{
    Windows::UI::Xaml::DependencyProperty SelectedIndexProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedItemProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedValueProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedValuePathProperty() const;
    Windows::UI::Xaml::DependencyProperty IsSynchronizedWithCurrentItemProperty() const;
    bool GetIsSelectionActive(const Windows::UI::Xaml::DependencyObject & element) const;
};

template <typename D>
struct WINRT_EBO impl_ISettingsFlyoutTemplateSettings
{
    Windows::UI::Xaml::Media::Brush HeaderBackground() const;
    Windows::UI::Xaml::Media::Brush HeaderForeground() const;
    Windows::UI::Xaml::Media::Brush BorderBrush() const;
    Windows::UI::Xaml::Thickness BorderThickness() const;
    Windows::UI::Xaml::Media::ImageSource IconSource() const;
    Windows::UI::Xaml::Media::Animation::TransitionCollection ContentTransitions() const;
};

template <typename D>
struct WINRT_EBO impl_ISplitViewTemplateSettings
{
    double OpenPaneLength() const;
    double NegativeOpenPaneLength() const;
    double OpenPaneLengthMinusCompactLength() const;
    double NegativeOpenPaneLengthMinusCompactLength() const;
    Windows::UI::Xaml::GridLength OpenPaneGridLength() const;
    Windows::UI::Xaml::GridLength CompactPaneGridLength() const;
};

template <typename D>
struct WINRT_EBO impl_IThumb
{
    bool IsDragging() const;
    event_token DragStarted(const Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler & value) const;
    using DragStarted_revoker = event_revoker<IThumb>;
    DragStarted_revoker DragStarted(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler & value) const;
    void DragStarted(event_token token) const;
    event_token DragDelta(const Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler & value) const;
    using DragDelta_revoker = event_revoker<IThumb>;
    DragDelta_revoker DragDelta(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler & value) const;
    void DragDelta(event_token token) const;
    event_token DragCompleted(const Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler & value) const;
    using DragCompleted_revoker = event_revoker<IThumb>;
    DragCompleted_revoker DragCompleted(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler & value) const;
    void DragCompleted(event_token token) const;
    void CancelDrag() const;
};

template <typename D>
struct WINRT_EBO impl_IThumbStatics
{
    Windows::UI::Xaml::DependencyProperty IsDraggingProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITickBar
{
    Windows::UI::Xaml::Media::Brush Fill() const;
    void Fill(const Windows::UI::Xaml::Media::Brush & value) const;
};

template <typename D>
struct WINRT_EBO impl_ITickBarStatics
{
    Windows::UI::Xaml::DependencyProperty FillProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IToggleButton
{
    Windows::Foundation::IReference<bool> IsChecked() const;
    void IsChecked(const Windows::Foundation::IReference<bool> & value) const;
    bool IsThreeState() const;
    void IsThreeState(bool value) const;
    event_token Checked(const Windows::UI::Xaml::RoutedEventHandler & value) const;
    using Checked_revoker = event_revoker<IToggleButton>;
    Checked_revoker Checked(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const;
    void Checked(event_token token) const;
    event_token Unchecked(const Windows::UI::Xaml::RoutedEventHandler & value) const;
    using Unchecked_revoker = event_revoker<IToggleButton>;
    Unchecked_revoker Unchecked(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const;
    void Unchecked(event_token token) const;
    event_token Indeterminate(const Windows::UI::Xaml::RoutedEventHandler & value) const;
    using Indeterminate_revoker = event_revoker<IToggleButton>;
    Indeterminate_revoker Indeterminate(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const;
    void Indeterminate(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IToggleButtonFactory
{
    Windows::UI::Xaml::Controls::Primitives::ToggleButton CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IToggleButtonOverrides
{
    void OnToggle() const;
};

template <typename D>
struct WINRT_EBO impl_IToggleButtonStatics
{
    Windows::UI::Xaml::DependencyProperty IsCheckedProperty() const;
    Windows::UI::Xaml::DependencyProperty IsThreeStateProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IToggleSwitchTemplateSettings
{
    double KnobCurrentToOnOffset() const;
    double KnobCurrentToOffOffset() const;
    double KnobOnToOffOffset() const;
    double KnobOffToOnOffset() const;
    double CurtainCurrentToOnOffset() const;
    double CurtainCurrentToOffOffset() const;
    double CurtainOnToOffOffset() const;
    double CurtainOffToOnOffset() const;
};

template <typename D>
struct WINRT_EBO impl_IToolTipTemplateSettings
{
    double FromHorizontalOffset() const;
    double FromVerticalOffset() const;
};

struct DragCompletedEventHandler : Windows::IUnknown
{
    DragCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<DragCompletedEventHandler>(m_ptr); }
    template <typename L> DragCompletedEventHandler(L lambda);
    template <typename F> DragCompletedEventHandler (F * function);
    template <typename O, typename M> DragCompletedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs & e) const;
};

struct DragDeltaEventHandler : Windows::IUnknown
{
    DragDeltaEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<DragDeltaEventHandler>(m_ptr); }
    template <typename L> DragDeltaEventHandler(L lambda);
    template <typename F> DragDeltaEventHandler (F * function);
    template <typename O, typename M> DragDeltaEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs & e) const;
};

struct DragStartedEventHandler : Windows::IUnknown
{
    DragStartedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<DragStartedEventHandler>(m_ptr); }
    template <typename L> DragStartedEventHandler(L lambda);
    template <typename F> DragStartedEventHandler (F * function);
    template <typename O, typename M> DragStartedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs & e) const;
};

struct ItemsChangedEventHandler : Windows::IUnknown
{
    ItemsChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ItemsChangedEventHandler>(m_ptr); }
    template <typename L> ItemsChangedEventHandler(L lambda);
    template <typename F> ItemsChangedEventHandler (F * function);
    template <typename O, typename M> ItemsChangedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs & e) const;
};

struct RangeBaseValueChangedEventHandler : Windows::IUnknown
{
    RangeBaseValueChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<RangeBaseValueChangedEventHandler>(m_ptr); }
    template <typename L> RangeBaseValueChangedEventHandler(L lambda);
    template <typename F> RangeBaseValueChangedEventHandler (F * function);
    template <typename O, typename M> RangeBaseValueChangedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs & e) const;
};

struct ScrollEventHandler : Windows::IUnknown
{
    ScrollEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ScrollEventHandler>(m_ptr); }
    template <typename L> ScrollEventHandler(L lambda);
    template <typename F> ScrollEventHandler (F * function);
    template <typename O, typename M> ScrollEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs & e) const;
};

struct IAppBarTemplateSettings :
    Windows::IInspectable,
    impl::consume<IAppBarTemplateSettings>
{
    IAppBarTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppBarTemplateSettings>(m_ptr); }
};

struct IButtonBase :
    Windows::IInspectable,
    impl::consume<IButtonBase>
{
    IButtonBase(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IButtonBase>(m_ptr); }
};

struct IButtonBaseFactory :
    Windows::IInspectable,
    impl::consume<IButtonBaseFactory>
{
    IButtonBaseFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IButtonBaseFactory>(m_ptr); }
};

struct IButtonBaseStatics :
    Windows::IInspectable,
    impl::consume<IButtonBaseStatics>
{
    IButtonBaseStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IButtonBaseStatics>(m_ptr); }
};

struct ICalendarPanel :
    Windows::IInspectable,
    impl::consume<ICalendarPanel>
{
    ICalendarPanel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICalendarPanel>(m_ptr); }
};

struct ICalendarViewTemplateSettings :
    Windows::IInspectable,
    impl::consume<ICalendarViewTemplateSettings>
{
    ICalendarViewTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICalendarViewTemplateSettings>(m_ptr); }
};

struct ICarouselPanel :
    Windows::IInspectable,
    impl::consume<ICarouselPanel>
{
    ICarouselPanel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICarouselPanel>(m_ptr); }
};

struct ICarouselPanelFactory :
    Windows::IInspectable,
    impl::consume<ICarouselPanelFactory>
{
    ICarouselPanelFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICarouselPanelFactory>(m_ptr); }
};

struct IComboBoxTemplateSettings :
    Windows::IInspectable,
    impl::consume<IComboBoxTemplateSettings>
{
    IComboBoxTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComboBoxTemplateSettings>(m_ptr); }
};

struct IComboBoxTemplateSettings2 :
    Windows::IInspectable,
    impl::consume<IComboBoxTemplateSettings2>
{
    IComboBoxTemplateSettings2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComboBoxTemplateSettings2>(m_ptr); }
};

struct ICommandBarTemplateSettings :
    Windows::IInspectable,
    impl::consume<ICommandBarTemplateSettings>
{
    ICommandBarTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICommandBarTemplateSettings>(m_ptr); }
};

struct ICommandBarTemplateSettings2 :
    Windows::IInspectable,
    impl::consume<ICommandBarTemplateSettings2>
{
    ICommandBarTemplateSettings2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICommandBarTemplateSettings2>(m_ptr); }
};

struct ICommandBarTemplateSettings3 :
    Windows::IInspectable,
    impl::consume<ICommandBarTemplateSettings3>
{
    ICommandBarTemplateSettings3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICommandBarTemplateSettings3>(m_ptr); }
};

struct IDragCompletedEventArgs :
    Windows::IInspectable,
    impl::consume<IDragCompletedEventArgs>
{
    IDragCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragCompletedEventArgs>(m_ptr); }
};

struct IDragCompletedEventArgsFactory :
    Windows::IInspectable,
    impl::consume<IDragCompletedEventArgsFactory>
{
    IDragCompletedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragCompletedEventArgsFactory>(m_ptr); }
};

struct IDragDeltaEventArgs :
    Windows::IInspectable,
    impl::consume<IDragDeltaEventArgs>
{
    IDragDeltaEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragDeltaEventArgs>(m_ptr); }
};

struct IDragDeltaEventArgsFactory :
    Windows::IInspectable,
    impl::consume<IDragDeltaEventArgsFactory>
{
    IDragDeltaEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragDeltaEventArgsFactory>(m_ptr); }
};

struct IDragStartedEventArgs :
    Windows::IInspectable,
    impl::consume<IDragStartedEventArgs>
{
    IDragStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragStartedEventArgs>(m_ptr); }
};

struct IDragStartedEventArgsFactory :
    Windows::IInspectable,
    impl::consume<IDragStartedEventArgsFactory>
{
    IDragStartedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDragStartedEventArgsFactory>(m_ptr); }
};

struct IFlyoutBase :
    Windows::IInspectable,
    impl::consume<IFlyoutBase>
{
    IFlyoutBase(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutBase>(m_ptr); }
};

struct IFlyoutBase2 :
    Windows::IInspectable,
    impl::consume<IFlyoutBase2>
{
    IFlyoutBase2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutBase2>(m_ptr); }
};

struct IFlyoutBaseClosingEventArgs :
    Windows::IInspectable,
    impl::consume<IFlyoutBaseClosingEventArgs>
{
    IFlyoutBaseClosingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutBaseClosingEventArgs>(m_ptr); }
};

struct IFlyoutBaseFactory :
    Windows::IInspectable,
    impl::consume<IFlyoutBaseFactory>
{
    IFlyoutBaseFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutBaseFactory>(m_ptr); }
};

struct IFlyoutBaseOverrides :
    Windows::IInspectable,
    impl::consume<IFlyoutBaseOverrides>
{
    IFlyoutBaseOverrides(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutBaseOverrides>(m_ptr); }
};

struct IFlyoutBaseStatics :
    Windows::IInspectable,
    impl::consume<IFlyoutBaseStatics>
{
    IFlyoutBaseStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutBaseStatics>(m_ptr); }
};

struct IFlyoutBaseStatics2 :
    Windows::IInspectable,
    impl::consume<IFlyoutBaseStatics2>
{
    IFlyoutBaseStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFlyoutBaseStatics2>(m_ptr); }
};

struct IGeneratorPositionHelper :
    Windows::IInspectable,
    impl::consume<IGeneratorPositionHelper>
{
    IGeneratorPositionHelper(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeneratorPositionHelper>(m_ptr); }
};

struct IGeneratorPositionHelperStatics :
    Windows::IInspectable,
    impl::consume<IGeneratorPositionHelperStatics>
{
    IGeneratorPositionHelperStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeneratorPositionHelperStatics>(m_ptr); }
};

struct IGridViewItemPresenter :
    Windows::IInspectable,
    impl::consume<IGridViewItemPresenter>
{
    IGridViewItemPresenter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewItemPresenter>(m_ptr); }
};

struct IGridViewItemPresenterFactory :
    Windows::IInspectable,
    impl::consume<IGridViewItemPresenterFactory>
{
    IGridViewItemPresenterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewItemPresenterFactory>(m_ptr); }
};

struct IGridViewItemPresenterStatics :
    Windows::IInspectable,
    impl::consume<IGridViewItemPresenterStatics>
{
    IGridViewItemPresenterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewItemPresenterStatics>(m_ptr); }
};

struct IGridViewItemTemplateSettings :
    Windows::IInspectable,
    impl::consume<IGridViewItemTemplateSettings>
{
    IGridViewItemTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGridViewItemTemplateSettings>(m_ptr); }
};

struct IItemsChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IItemsChangedEventArgs>
{
    IItemsChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemsChangedEventArgs>(m_ptr); }
};

struct IJumpListItemBackgroundConverter :
    Windows::IInspectable,
    impl::consume<IJumpListItemBackgroundConverter>
{
    IJumpListItemBackgroundConverter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJumpListItemBackgroundConverter>(m_ptr); }
};

struct IJumpListItemBackgroundConverterStatics :
    Windows::IInspectable,
    impl::consume<IJumpListItemBackgroundConverterStatics>
{
    IJumpListItemBackgroundConverterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJumpListItemBackgroundConverterStatics>(m_ptr); }
};

struct IJumpListItemForegroundConverter :
    Windows::IInspectable,
    impl::consume<IJumpListItemForegroundConverter>
{
    IJumpListItemForegroundConverter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJumpListItemForegroundConverter>(m_ptr); }
};

struct IJumpListItemForegroundConverterStatics :
    Windows::IInspectable,
    impl::consume<IJumpListItemForegroundConverterStatics>
{
    IJumpListItemForegroundConverterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJumpListItemForegroundConverterStatics>(m_ptr); }
};

struct ILayoutInformation :
    Windows::IInspectable,
    impl::consume<ILayoutInformation>
{
    ILayoutInformation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILayoutInformation>(m_ptr); }
};

struct ILayoutInformationStatics :
    Windows::IInspectable,
    impl::consume<ILayoutInformationStatics>
{
    ILayoutInformationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILayoutInformationStatics>(m_ptr); }
};

struct IListViewItemPresenter :
    Windows::IInspectable,
    impl::consume<IListViewItemPresenter>
{
    IListViewItemPresenter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemPresenter>(m_ptr); }
};

struct IListViewItemPresenter2 :
    Windows::IInspectable,
    impl::consume<IListViewItemPresenter2>
{
    IListViewItemPresenter2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemPresenter2>(m_ptr); }
};

struct IListViewItemPresenterFactory :
    Windows::IInspectable,
    impl::consume<IListViewItemPresenterFactory>
{
    IListViewItemPresenterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemPresenterFactory>(m_ptr); }
};

struct IListViewItemPresenterStatics :
    Windows::IInspectable,
    impl::consume<IListViewItemPresenterStatics>
{
    IListViewItemPresenterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemPresenterStatics>(m_ptr); }
};

struct IListViewItemPresenterStatics2 :
    Windows::IInspectable,
    impl::consume<IListViewItemPresenterStatics2>
{
    IListViewItemPresenterStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemPresenterStatics2>(m_ptr); }
};

struct IListViewItemTemplateSettings :
    Windows::IInspectable,
    impl::consume<IListViewItemTemplateSettings>
{
    IListViewItemTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IListViewItemTemplateSettings>(m_ptr); }
};

struct ILoopingSelector :
    Windows::IInspectable,
    impl::consume<ILoopingSelector>
{
    ILoopingSelector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoopingSelector>(m_ptr); }
};

struct ILoopingSelectorItem :
    Windows::IInspectable,
    impl::consume<ILoopingSelectorItem>
{
    ILoopingSelectorItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoopingSelectorItem>(m_ptr); }
};

struct ILoopingSelectorPanel :
    Windows::IInspectable,
    impl::consume<ILoopingSelectorPanel>
{
    ILoopingSelectorPanel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoopingSelectorPanel>(m_ptr); }
};

struct ILoopingSelectorStatics :
    Windows::IInspectable,
    impl::consume<ILoopingSelectorStatics>
{
    ILoopingSelectorStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoopingSelectorStatics>(m_ptr); }
};

struct IMenuFlyoutPresenterTemplateSettings :
    Windows::IInspectable,
    impl::consume<IMenuFlyoutPresenterTemplateSettings>
{
    IMenuFlyoutPresenterTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMenuFlyoutPresenterTemplateSettings>(m_ptr); }
};

struct IOrientedVirtualizingPanel :
    Windows::IInspectable,
    impl::consume<IOrientedVirtualizingPanel>
{
    IOrientedVirtualizingPanel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IOrientedVirtualizingPanel>(m_ptr); }
};

struct IOrientedVirtualizingPanelFactory :
    Windows::IInspectable,
    impl::consume<IOrientedVirtualizingPanelFactory>
{
    IOrientedVirtualizingPanelFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IOrientedVirtualizingPanelFactory>(m_ptr); }
};

struct IPickerFlyoutBase :
    Windows::IInspectable,
    impl::consume<IPickerFlyoutBase>
{
    IPickerFlyoutBase(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerFlyoutBase>(m_ptr); }
};

struct IPickerFlyoutBaseFactory :
    Windows::IInspectable,
    impl::consume<IPickerFlyoutBaseFactory>
{
    IPickerFlyoutBaseFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerFlyoutBaseFactory>(m_ptr); }
};

struct IPickerFlyoutBaseOverrides :
    Windows::IInspectable,
    impl::consume<IPickerFlyoutBaseOverrides>
{
    IPickerFlyoutBaseOverrides(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerFlyoutBaseOverrides>(m_ptr); }
};

struct IPickerFlyoutBaseStatics :
    Windows::IInspectable,
    impl::consume<IPickerFlyoutBaseStatics>
{
    IPickerFlyoutBaseStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerFlyoutBaseStatics>(m_ptr); }
};

struct IPivotHeaderItem :
    Windows::IInspectable,
    impl::consume<IPivotHeaderItem>
{
    IPivotHeaderItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotHeaderItem>(m_ptr); }
};

struct IPivotHeaderItemFactory :
    Windows::IInspectable,
    impl::consume<IPivotHeaderItemFactory>
{
    IPivotHeaderItemFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotHeaderItemFactory>(m_ptr); }
};

struct IPivotHeaderPanel :
    Windows::IInspectable,
    impl::consume<IPivotHeaderPanel>
{
    IPivotHeaderPanel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotHeaderPanel>(m_ptr); }
};

struct IPivotPanel :
    Windows::IInspectable,
    impl::consume<IPivotPanel>
{
    IPivotPanel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPivotPanel>(m_ptr); }
};

struct IPopup :
    Windows::IInspectable,
    impl::consume<IPopup>
{
    IPopup(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPopup>(m_ptr); }
};

struct IPopup2 :
    Windows::IInspectable,
    impl::consume<IPopup2>
{
    IPopup2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPopup2>(m_ptr); }
};

struct IPopupStatics :
    Windows::IInspectable,
    impl::consume<IPopupStatics>
{
    IPopupStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPopupStatics>(m_ptr); }
};

struct IPopupStatics2 :
    Windows::IInspectable,
    impl::consume<IPopupStatics2>
{
    IPopupStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPopupStatics2>(m_ptr); }
};

struct IProgressBarTemplateSettings :
    Windows::IInspectable,
    impl::consume<IProgressBarTemplateSettings>
{
    IProgressBarTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProgressBarTemplateSettings>(m_ptr); }
};

struct IProgressRingTemplateSettings :
    Windows::IInspectable,
    impl::consume<IProgressRingTemplateSettings>
{
    IProgressRingTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProgressRingTemplateSettings>(m_ptr); }
};

struct IRangeBase :
    Windows::IInspectable,
    impl::consume<IRangeBase>
{
    IRangeBase(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeBase>(m_ptr); }
};

struct IRangeBaseFactory :
    Windows::IInspectable,
    impl::consume<IRangeBaseFactory>
{
    IRangeBaseFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeBaseFactory>(m_ptr); }
};

struct IRangeBaseOverrides :
    Windows::IInspectable,
    impl::consume<IRangeBaseOverrides>
{
    IRangeBaseOverrides(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeBaseOverrides>(m_ptr); }
};

struct IRangeBaseStatics :
    Windows::IInspectable,
    impl::consume<IRangeBaseStatics>
{
    IRangeBaseStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeBaseStatics>(m_ptr); }
};

struct IRangeBaseValueChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IRangeBaseValueChangedEventArgs>
{
    IRangeBaseValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRangeBaseValueChangedEventArgs>(m_ptr); }
};

struct IRepeatButton :
    Windows::IInspectable,
    impl::consume<IRepeatButton>
{
    IRepeatButton(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRepeatButton>(m_ptr); }
};

struct IRepeatButtonStatics :
    Windows::IInspectable,
    impl::consume<IRepeatButtonStatics>
{
    IRepeatButtonStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRepeatButtonStatics>(m_ptr); }
};

struct IScrollBar :
    Windows::IInspectable,
    impl::consume<IScrollBar>
{
    IScrollBar(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollBar>(m_ptr); }
};

struct IScrollBarStatics :
    Windows::IInspectable,
    impl::consume<IScrollBarStatics>
{
    IScrollBarStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollBarStatics>(m_ptr); }
};

struct IScrollEventArgs :
    Windows::IInspectable,
    impl::consume<IScrollEventArgs>
{
    IScrollEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollEventArgs>(m_ptr); }
};

struct IScrollSnapPointsInfo :
    Windows::IInspectable,
    impl::consume<IScrollSnapPointsInfo>
{
    IScrollSnapPointsInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScrollSnapPointsInfo>(m_ptr); }
};

struct ISelector :
    Windows::IInspectable,
    impl::consume<ISelector>
{
    ISelector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelector>(m_ptr); }
};

struct ISelectorFactory :
    Windows::IInspectable,
    impl::consume<ISelectorFactory>
{
    ISelectorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorFactory>(m_ptr); }
};

struct ISelectorItem :
    Windows::IInspectable,
    impl::consume<ISelectorItem>
{
    ISelectorItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorItem>(m_ptr); }
};

struct ISelectorItemFactory :
    Windows::IInspectable,
    impl::consume<ISelectorItemFactory>
{
    ISelectorItemFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorItemFactory>(m_ptr); }
};

struct ISelectorItemStatics :
    Windows::IInspectable,
    impl::consume<ISelectorItemStatics>
{
    ISelectorItemStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorItemStatics>(m_ptr); }
};

struct ISelectorStatics :
    Windows::IInspectable,
    impl::consume<ISelectorStatics>
{
    ISelectorStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectorStatics>(m_ptr); }
};

struct ISettingsFlyoutTemplateSettings :
    Windows::IInspectable,
    impl::consume<ISettingsFlyoutTemplateSettings>
{
    ISettingsFlyoutTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISettingsFlyoutTemplateSettings>(m_ptr); }
};

struct ISplitViewTemplateSettings :
    Windows::IInspectable,
    impl::consume<ISplitViewTemplateSettings>
{
    ISplitViewTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISplitViewTemplateSettings>(m_ptr); }
};

struct IThumb :
    Windows::IInspectable,
    impl::consume<IThumb>
{
    IThumb(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IThumb>(m_ptr); }
};

struct IThumbStatics :
    Windows::IInspectable,
    impl::consume<IThumbStatics>
{
    IThumbStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IThumbStatics>(m_ptr); }
};

struct ITickBar :
    Windows::IInspectable,
    impl::consume<ITickBar>
{
    ITickBar(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITickBar>(m_ptr); }
};

struct ITickBarStatics :
    Windows::IInspectable,
    impl::consume<ITickBarStatics>
{
    ITickBarStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITickBarStatics>(m_ptr); }
};

struct IToggleButton :
    Windows::IInspectable,
    impl::consume<IToggleButton>
{
    IToggleButton(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleButton>(m_ptr); }
};

struct IToggleButtonFactory :
    Windows::IInspectable,
    impl::consume<IToggleButtonFactory>
{
    IToggleButtonFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleButtonFactory>(m_ptr); }
};

struct IToggleButtonOverrides :
    Windows::IInspectable,
    impl::consume<IToggleButtonOverrides>
{
    IToggleButtonOverrides(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleButtonOverrides>(m_ptr); }
};

struct IToggleButtonStatics :
    Windows::IInspectable,
    impl::consume<IToggleButtonStatics>
{
    IToggleButtonStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleButtonStatics>(m_ptr); }
};

struct IToggleSwitchTemplateSettings :
    Windows::IInspectable,
    impl::consume<IToggleSwitchTemplateSettings>
{
    IToggleSwitchTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToggleSwitchTemplateSettings>(m_ptr); }
};

struct IToolTipTemplateSettings :
    Windows::IInspectable,
    impl::consume<IToolTipTemplateSettings>
{
    IToolTipTemplateSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToolTipTemplateSettings>(m_ptr); }
};

}

}
