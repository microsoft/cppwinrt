// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Xaml.Controls.Primitives.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Controls.0.h"
#include "Windows.UI.Xaml.Data.0.h"
#include "Windows.UI.Xaml.Input.0.h"
#include "Windows.UI.Xaml.Media.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Controls::Primitives {

struct GeneratorPosition
{
    int32_t Index;
    int32_t Offset;
};

}

namespace Windows::UI::Xaml::Controls::Primitives {

using GeneratorPosition = ABI::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition;

}

namespace ABI::Windows::UI::Xaml::Controls::Primitives {

struct __declspec(uuid("36b28888-19ac-4b4e-9137-a6cf2b023883")) __declspec(novtable) DragCompletedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs * e) = 0;
};

struct __declspec(uuid("4ac24f9f-ac28-49e9-9189-dccffeb66472")) __declspec(novtable) DragDeltaEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs * e) = 0;
};

struct __declspec(uuid("d2eea48a-c65a-495d-a2f1-72c66989142d")) __declspec(novtable) DragStartedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs * e) = 0;
};

struct __declspec(uuid("bcc2a863-eb35-423c-8389-d7827be3bf67")) __declspec(novtable) IAppBarTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClipRect(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_CompactVerticalDelta(double * value) = 0;
    virtual HRESULT __stdcall get_CompactRootMargin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall get_MinimalVerticalDelta(double * value) = 0;
    virtual HRESULT __stdcall get_MinimalRootMargin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall get_HiddenVerticalDelta(double * value) = 0;
    virtual HRESULT __stdcall get_HiddenRootMargin(Windows::UI::Xaml::Thickness * value) = 0;
};

struct __declspec(uuid("fa002c1a-494e-46cf-91d4-e14a8d798674")) __declspec(novtable) IButtonBase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClickMode(winrt::Windows::UI::Xaml::Controls::ClickMode * value) = 0;
    virtual HRESULT __stdcall put_ClickMode(winrt::Windows::UI::Xaml::Controls::ClickMode value) = 0;
    virtual HRESULT __stdcall get_IsPointerOver(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPressed(bool * value) = 0;
    virtual HRESULT __stdcall get_Command(Windows::UI::Xaml::Input::ICommand ** value) = 0;
    virtual HRESULT __stdcall put_Command(Windows::UI::Xaml::Input::ICommand * value) = 0;
    virtual HRESULT __stdcall get_CommandParameter(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_CommandParameter(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall add_Click(Windows::UI::Xaml::RoutedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Click(event_token token) = 0;
};

struct __declspec(uuid("389b7c71-5220-42b2-9992-2690c1a6702f")) __declspec(novtable) IButtonBaseFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IButtonBase ** instance) = 0;
};

struct __declspec(uuid("67ef17e1-fe37-474f-9e97-3b5e0b30f2df")) __declspec(novtable) IButtonBaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClickModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsPointerOverProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsPressedProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CommandProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CommandParameterProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("fcd55a2d-02d3-4ee6-9a90-9df3ead00994")) __declspec(novtable) ICalendarPanel : Windows::IInspectable
{
};

struct __declspec(uuid("56c71483-64e1-477c-8a0b-cb2f3334b9b0")) __declspec(novtable) ICalendarViewTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MinViewWidth(double * value) = 0;
    virtual HRESULT __stdcall get_HeaderText(hstring * value) = 0;
    virtual HRESULT __stdcall get_WeekDay1(hstring * value) = 0;
    virtual HRESULT __stdcall get_WeekDay2(hstring * value) = 0;
    virtual HRESULT __stdcall get_WeekDay3(hstring * value) = 0;
    virtual HRESULT __stdcall get_WeekDay4(hstring * value) = 0;
    virtual HRESULT __stdcall get_WeekDay5(hstring * value) = 0;
    virtual HRESULT __stdcall get_WeekDay6(hstring * value) = 0;
    virtual HRESULT __stdcall get_WeekDay7(hstring * value) = 0;
    virtual HRESULT __stdcall get_HasMoreContentAfter(bool * value) = 0;
    virtual HRESULT __stdcall get_HasMoreContentBefore(bool * value) = 0;
    virtual HRESULT __stdcall get_HasMoreViews(bool * value) = 0;
    virtual HRESULT __stdcall get_ClipRect(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_CenterX(double * value) = 0;
    virtual HRESULT __stdcall get_CenterY(double * value) = 0;
};

struct __declspec(uuid("deab78b2-373b-4151-8785-e544d0d9362b")) __declspec(novtable) ICarouselPanel : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CanVerticallyScroll(bool * value) = 0;
    virtual HRESULT __stdcall put_CanVerticallyScroll(bool value) = 0;
    virtual HRESULT __stdcall get_CanHorizontallyScroll(bool * value) = 0;
    virtual HRESULT __stdcall put_CanHorizontallyScroll(bool value) = 0;
    virtual HRESULT __stdcall get_ExtentWidth(double * value) = 0;
    virtual HRESULT __stdcall get_ExtentHeight(double * value) = 0;
    virtual HRESULT __stdcall get_ViewportWidth(double * value) = 0;
    virtual HRESULT __stdcall get_ViewportHeight(double * value) = 0;
    virtual HRESULT __stdcall get_HorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall get_ScrollOwner(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_ScrollOwner(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall abi_LineUp() = 0;
    virtual HRESULT __stdcall abi_LineDown() = 0;
    virtual HRESULT __stdcall abi_LineLeft() = 0;
    virtual HRESULT __stdcall abi_LineRight() = 0;
    virtual HRESULT __stdcall abi_PageUp() = 0;
    virtual HRESULT __stdcall abi_PageDown() = 0;
    virtual HRESULT __stdcall abi_PageLeft() = 0;
    virtual HRESULT __stdcall abi_PageRight() = 0;
    virtual HRESULT __stdcall abi_MouseWheelUp() = 0;
    virtual HRESULT __stdcall abi_MouseWheelDown() = 0;
    virtual HRESULT __stdcall abi_MouseWheelLeft() = 0;
    virtual HRESULT __stdcall abi_MouseWheelRight() = 0;
    virtual HRESULT __stdcall abi_SetHorizontalOffset(double offset) = 0;
    virtual HRESULT __stdcall abi_SetVerticalOffset(double offset) = 0;
    virtual HRESULT __stdcall abi_MakeVisible(Windows::UI::Xaml::IUIElement * visual, Windows::Foundation::Rect rectangle, Windows::Foundation::Rect * returnValue) = 0;
};

struct __declspec(uuid("c1109404-9ae1-440e-a0dd-bbb6e2293cbe")) __declspec(novtable) ICarouselPanelFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::ICarouselPanel ** instance) = 0;
};

struct __declspec(uuid("83285c4e-17f6-4aa3-b61b-e87c718604ea")) __declspec(novtable) IComboBoxTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DropDownOpenedHeight(double * value) = 0;
    virtual HRESULT __stdcall get_DropDownClosedHeight(double * value) = 0;
    virtual HRESULT __stdcall get_DropDownOffset(double * value) = 0;
    virtual HRESULT __stdcall get_SelectedItemDirection(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection * value) = 0;
};

struct __declspec(uuid("00e90cd7-68be-449d-b5a7-76e26f703e9b")) __declspec(novtable) IComboBoxTemplateSettings2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DropDownContentMinWidth(double * value) = 0;
};

struct __declspec(uuid("61c8f92c-05aa-414a-a2ae-482c5a46c08e")) __declspec(novtable) ICommandBarTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContentHeight(double * value) = 0;
    virtual HRESULT __stdcall get_OverflowContentClipRect(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_OverflowContentMinWidth(double * value) = 0;
    virtual HRESULT __stdcall get_OverflowContentMaxHeight(double * value) = 0;
    virtual HRESULT __stdcall get_OverflowContentHorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall get_OverflowContentHeight(double * value) = 0;
    virtual HRESULT __stdcall get_NegativeOverflowContentHeight(double * value) = 0;
};

struct __declspec(uuid("fbb24f93-c2e2-4177-a2b6-3cd705073cf6")) __declspec(novtable) ICommandBarTemplateSettings2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OverflowContentMaxWidth(double * value) = 0;
};

struct __declspec(uuid("3bd71eba-3403-4bfe-842d-2ce8c511d245")) __declspec(novtable) ICommandBarTemplateSettings3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EffectiveOverflowButtonVisibility(winrt::Windows::UI::Xaml::Visibility * value) = 0;
};

struct __declspec(uuid("b04f29a1-bd16-48f6-a511-9c2763641331")) __declspec(novtable) IDragCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalChange(double * value) = 0;
    virtual HRESULT __stdcall get_VerticalChange(double * value) = 0;
    virtual HRESULT __stdcall get_Canceled(bool * value) = 0;
};

struct __declspec(uuid("36a7d99d-148c-495f-a0fc-afc871d62f33")) __declspec(novtable) IDragCompletedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs ** instance) = 0;
};

struct __declspec(uuid("2c2dd73c-2806-49fc-aae9-6d792b572b6a")) __declspec(novtable) IDragDeltaEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalChange(double * value) = 0;
    virtual HRESULT __stdcall get_VerticalChange(double * value) = 0;
};

struct __declspec(uuid("46e7a1ef-ae15-44a6-8a04-95b0bf9ab876")) __declspec(novtable) IDragDeltaEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs ** instance) = 0;
};

struct __declspec(uuid("9f915dd0-a124-4366-bd85-2408214aeed4")) __declspec(novtable) IDragStartedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double * value) = 0;
};

struct __declspec(uuid("5eefe579-c706-4781-a308-c9e7f4c6a1d7")) __declspec(novtable) IDragStartedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs ** instance) = 0;
};

struct __declspec(uuid("723eea0b-d12e-430d-a9f0-9bb32bbf9913")) __declspec(novtable) IFlyoutBase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Placement(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode * value) = 0;
    virtual HRESULT __stdcall put_Placement(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode value) = 0;
    virtual HRESULT __stdcall add_Opened(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Opened(event_token token) = 0;
    virtual HRESULT __stdcall add_Closed(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Closed(event_token token) = 0;
    virtual HRESULT __stdcall add_Opening(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Opening(event_token token) = 0;
    virtual HRESULT __stdcall abi_ShowAt(Windows::UI::Xaml::IFrameworkElement * placementTarget) = 0;
    virtual HRESULT __stdcall abi_Hide() = 0;
};

struct __declspec(uuid("f82b435e-65b3-41c6-a9e2-77b67bc4c00c")) __declspec(novtable) IFlyoutBase2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Target(Windows::UI::Xaml::IFrameworkElement ** value) = 0;
    virtual HRESULT __stdcall get_AllowFocusOnInteraction(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowFocusOnInteraction(bool value) = 0;
    virtual HRESULT __stdcall get_LightDismissOverlayMode(winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode * value) = 0;
    virtual HRESULT __stdcall put_LightDismissOverlayMode(winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode value) = 0;
    virtual HRESULT __stdcall get_AllowFocusWhenDisabled(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowFocusWhenDisabled(bool value) = 0;
    virtual HRESULT __stdcall get_ElementSoundMode(winrt::Windows::UI::Xaml::ElementSoundMode * value) = 0;
    virtual HRESULT __stdcall put_ElementSoundMode(winrt::Windows::UI::Xaml::ElementSoundMode value) = 0;
    virtual HRESULT __stdcall add_Closing(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Closing(event_token token) = 0;
};

struct __declspec(uuid("d075852d-b09a-4fd1-b005-db2ba01206fb")) __declspec(novtable) IFlyoutBaseClosingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Cancel(bool * value) = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) = 0;
};

struct __declspec(uuid("1c3363d7-fca7-407e-920e-70e15e9f0bf1")) __declspec(novtable) IFlyoutBaseFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase ** instance) = 0;
};

struct __declspec(uuid("101dec86-6f4d-45a4-9d0e-3ece6f16977e")) __declspec(novtable) IFlyoutBaseOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreatePresenter(Windows::UI::Xaml::Controls::IControl ** returnValue) = 0;
};

struct __declspec(uuid("e2d795e3-85c0-4de2-bac1-5294ca011a78")) __declspec(novtable) IFlyoutBaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PlacementProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_AttachedFlyoutProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetAttachedFlyout(Windows::UI::Xaml::IFrameworkElement * element, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase ** value) = 0;
    virtual HRESULT __stdcall abi_SetAttachedFlyout(Windows::UI::Xaml::IFrameworkElement * element, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase * value) = 0;
    virtual HRESULT __stdcall abi_ShowAttachedFlyout(Windows::UI::Xaml::IFrameworkElement * flyoutOwner) = 0;
};

struct __declspec(uuid("a8e913fe-2d60-4307-aad9-56b450121b58")) __declspec(novtable) IFlyoutBaseStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteractionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_LightDismissOverlayModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_AllowFocusWhenDisabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ElementSoundModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("cd40318d-7745-40d9-ab9d-abbda4a7ffea")) __declspec(novtable) IGeneratorPositionHelper : Windows::IInspectable
{
};

struct __declspec(uuid("ad4095cd-60ec-4588-8d60-39d29097a4df")) __declspec(novtable) IGeneratorPositionHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromIndexAndOffset(int32_t index, int32_t offset, Windows::UI::Xaml::Controls::Primitives::GeneratorPosition * returnValue) = 0;
};

struct __declspec(uuid("214f9010-56e2-4821-8a1c-2305709af94b")) __declspec(novtable) IGridViewItemPresenter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectionCheckMarkVisualEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_SelectionCheckMarkVisualEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_CheckHintBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_CheckHintBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_CheckSelectingBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_CheckSelectingBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_CheckBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_CheckBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_DragBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_DragBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_DragForeground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_DragForeground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_FocusBorderBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_FocusBorderBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_PlaceholderBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_PlaceholderBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_PointerOverBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_PointerOverBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedForeground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedForeground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedPointerOverBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedBorderThickness(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_SelectedBorderThickness(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_DisabledOpacity(double * value) = 0;
    virtual HRESULT __stdcall put_DisabledOpacity(double value) = 0;
    virtual HRESULT __stdcall get_DragOpacity(double * value) = 0;
    virtual HRESULT __stdcall put_DragOpacity(double value) = 0;
    virtual HRESULT __stdcall get_ReorderHintOffset(double * value) = 0;
    virtual HRESULT __stdcall put_ReorderHintOffset(double value) = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterHorizontalContentAlignment(winrt::Windows::UI::Xaml::HorizontalAlignment * value) = 0;
    virtual HRESULT __stdcall put_GridViewItemPresenterHorizontalContentAlignment(winrt::Windows::UI::Xaml::HorizontalAlignment value) = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterVerticalContentAlignment(winrt::Windows::UI::Xaml::VerticalAlignment * value) = 0;
    virtual HRESULT __stdcall put_GridViewItemPresenterVerticalContentAlignment(winrt::Windows::UI::Xaml::VerticalAlignment value) = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterPadding(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_GridViewItemPresenterPadding(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_ContentMargin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_ContentMargin(Windows::UI::Xaml::Thickness value) = 0;
};

struct __declspec(uuid("53c12178-63bb-4a65-a3f1-ab114cfc6ffe")) __declspec(novtable) IGridViewItemPresenterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter ** instance) = 0;
};

struct __declspec(uuid("e958f8c4-277e-4a72-a01e-9e1688980178")) __declspec(novtable) IGridViewItemPresenterStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectionCheckMarkVisualEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CheckHintBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CheckSelectingBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CheckBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DragBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DragForegroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FocusBorderBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PlaceholderBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedForegroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBorderBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedBorderThicknessProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DisabledOpacityProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DragOpacityProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ReorderHintOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterHorizontalContentAlignmentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterVerticalContentAlignmentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterPaddingProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundMarginProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentMarginProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("9e30baaf-165d-4267-a45e-1a43a75706ac")) __declspec(novtable) IGridViewItemTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DragItemsCount(int32_t * value) = 0;
};

struct __declspec(uuid("e8b45568-7d10-421e-be29-81839a91de20")) __declspec(novtable) IItemsChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Action(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::UI::Xaml::Controls::Primitives::GeneratorPosition * value) = 0;
    virtual HRESULT __stdcall get_OldPosition(Windows::UI::Xaml::Controls::Primitives::GeneratorPosition * value) = 0;
    virtual HRESULT __stdcall get_ItemCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ItemUICount(int32_t * value) = 0;
};

struct __declspec(uuid("81177858-d224-410c-b16c-c5b6bb6188b2")) __declspec(novtable) IJumpListItemBackgroundConverter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Enabled(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Enabled(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_Disabled(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Disabled(Windows::UI::Xaml::Media::IBrush * value) = 0;
};

struct __declspec(uuid("20e7c3dd-6f27-4808-b0be-83e0e9b5cc45")) __declspec(novtable) IJumpListItemBackgroundConverterStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DisabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("1590ed38-c504-4796-a63a-5bfc9eefaae8")) __declspec(novtable) IJumpListItemForegroundConverter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Enabled(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Enabled(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_Disabled(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Disabled(Windows::UI::Xaml::Media::IBrush * value) = 0;
};

struct __declspec(uuid("474e7352-210c-4673-ac6a-413f0e2c7750")) __declspec(novtable) IJumpListItemForegroundConverterStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DisabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("b5384c9b-c8cf-41b3-bf16-18c8420e72c9")) __declspec(novtable) ILayoutInformation : Windows::IInspectable
{
};

struct __declspec(uuid("cf06cf99-58e9-4682-8326-50caab65ed7c")) __declspec(novtable) ILayoutInformationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetLayoutExceptionElement(Windows::IInspectable * dispatcher, Windows::UI::Xaml::IUIElement ** element) = 0;
    virtual HRESULT __stdcall abi_GetLayoutSlot(Windows::UI::Xaml::IFrameworkElement * element, Windows::Foundation::Rect * slot) = 0;
};

struct __declspec(uuid("fc8946bd-a3a2-4969-8174-25b5d3c28033")) __declspec(novtable) IListViewItemPresenter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectionCheckMarkVisualEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_SelectionCheckMarkVisualEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_CheckHintBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_CheckHintBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_CheckSelectingBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_CheckSelectingBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_CheckBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_CheckBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_DragBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_DragBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_DragForeground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_DragForeground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_FocusBorderBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_FocusBorderBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_PlaceholderBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_PlaceholderBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_PointerOverBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_PointerOverBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedForeground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedForeground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedPointerOverBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_SelectedBorderThickness(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_SelectedBorderThickness(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_DisabledOpacity(double * value) = 0;
    virtual HRESULT __stdcall put_DisabledOpacity(double value) = 0;
    virtual HRESULT __stdcall get_DragOpacity(double * value) = 0;
    virtual HRESULT __stdcall put_DragOpacity(double value) = 0;
    virtual HRESULT __stdcall get_ReorderHintOffset(double * value) = 0;
    virtual HRESULT __stdcall put_ReorderHintOffset(double value) = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterHorizontalContentAlignment(winrt::Windows::UI::Xaml::HorizontalAlignment * value) = 0;
    virtual HRESULT __stdcall put_ListViewItemPresenterHorizontalContentAlignment(winrt::Windows::UI::Xaml::HorizontalAlignment value) = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterVerticalContentAlignment(winrt::Windows::UI::Xaml::VerticalAlignment * value) = 0;
    virtual HRESULT __stdcall put_ListViewItemPresenterVerticalContentAlignment(winrt::Windows::UI::Xaml::VerticalAlignment value) = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterPadding(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_ListViewItemPresenterPadding(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_ContentMargin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_ContentMargin(Windows::UI::Xaml::Thickness value) = 0;
};

struct __declspec(uuid("f5dc5496-e122-4c57-a625-ac4b08fb2d4c")) __declspec(novtable) IListViewItemPresenter2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectedPressedBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_SelectedPressedBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_PressedBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_PressedBackground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_CheckBoxBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_CheckBoxBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_FocusSecondaryBorderBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_FocusSecondaryBorderBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_CheckMode(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode * value) = 0;
    virtual HRESULT __stdcall put_CheckMode(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode value) = 0;
    virtual HRESULT __stdcall get_PointerOverForeground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_PointerOverForeground(Windows::UI::Xaml::Media::IBrush * value) = 0;
};

struct __declspec(uuid("e0777cfd-f7e4-4a67-9ac0-a994fcacd020")) __declspec(novtable) IListViewItemPresenterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter ** instance) = 0;
};

struct __declspec(uuid("6504a55a-15dd-42fb-aa5d-2d8ce2e9c294")) __declspec(novtable) IListViewItemPresenterStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectionCheckMarkVisualEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CheckHintBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CheckSelectingBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CheckBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DragBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DragForegroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FocusBorderBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PlaceholderBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedForegroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBorderBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedBorderThicknessProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DisabledOpacityProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DragOpacityProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ReorderHintOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterHorizontalContentAlignmentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterVerticalContentAlignmentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterPaddingProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundMarginProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentMarginProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("4cb3b945-d24d-42a3-9e83-a86d0618bf1b")) __declspec(novtable) IListViewItemPresenterStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectedPressedBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PressedBackgroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CheckBoxBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FocusSecondaryBorderBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CheckModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PointerOverForegroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("67af84bf-8279-4686-9326-cd189f27575d")) __declspec(novtable) IListViewItemTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DragItemsCount(int32_t * value) = 0;
};

struct __declspec(uuid("4c9a3e04-4827-49d9-8806-093957b0fd21")) __declspec(novtable) ILoopingSelector : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ShouldLoop(bool * value) = 0;
    virtual HRESULT __stdcall put_ShouldLoop(bool value) = 0;
    virtual HRESULT __stdcall get_Items(Windows::Foundation::Collections::IVector<Windows::IInspectable> ** value) = 0;
    virtual HRESULT __stdcall put_Items(Windows::Foundation::Collections::IVector<Windows::IInspectable> * value) = 0;
    virtual HRESULT __stdcall get_SelectedIndex(int32_t * value) = 0;
    virtual HRESULT __stdcall put_SelectedIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_SelectedItem(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_SelectedItem(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall get_ItemWidth(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ItemWidth(int32_t value) = 0;
    virtual HRESULT __stdcall get_ItemHeight(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ItemHeight(int32_t value) = 0;
    virtual HRESULT __stdcall get_ItemTemplate(Windows::UI::Xaml::IDataTemplate ** value) = 0;
    virtual HRESULT __stdcall put_ItemTemplate(Windows::UI::Xaml::IDataTemplate * value) = 0;
    virtual HRESULT __stdcall add_SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SelectionChanged(event_token token) = 0;
};

struct __declspec(uuid("c69714b9-27c6-4433-9d7c-0dbfb2f4344f")) __declspec(novtable) ILoopingSelectorItem : Windows::IInspectable
{
};

struct __declspec(uuid("40a9ba70-1011-4778-87f7-6bfd20d6377d")) __declspec(novtable) ILoopingSelectorPanel : Windows::IInspectable
{
};

struct __declspec(uuid("03e8bafa-8c7d-4fc5-b92a-f049fb933cc5")) __declspec(novtable) ILoopingSelectorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ShouldLoopProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ItemsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedIndexProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedItemProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ItemWidthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ItemHeightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ItemTemplateProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("d68fd00d-629d-4349-ac51-b877c80983b8")) __declspec(novtable) IMenuFlyoutPresenterTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FlyoutContentMinWidth(double * value) = 0;
};

struct __declspec(uuid("f077b577-39bd-46ee-bdd7-0826beed71b8")) __declspec(novtable) IOrientedVirtualizingPanel : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CanVerticallyScroll(bool * value) = 0;
    virtual HRESULT __stdcall put_CanVerticallyScroll(bool value) = 0;
    virtual HRESULT __stdcall get_CanHorizontallyScroll(bool * value) = 0;
    virtual HRESULT __stdcall put_CanHorizontallyScroll(bool value) = 0;
    virtual HRESULT __stdcall get_ExtentWidth(double * value) = 0;
    virtual HRESULT __stdcall get_ExtentHeight(double * value) = 0;
    virtual HRESULT __stdcall get_ViewportWidth(double * value) = 0;
    virtual HRESULT __stdcall get_ViewportHeight(double * value) = 0;
    virtual HRESULT __stdcall get_HorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall get_ScrollOwner(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_ScrollOwner(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall abi_LineUp() = 0;
    virtual HRESULT __stdcall abi_LineDown() = 0;
    virtual HRESULT __stdcall abi_LineLeft() = 0;
    virtual HRESULT __stdcall abi_LineRight() = 0;
    virtual HRESULT __stdcall abi_PageUp() = 0;
    virtual HRESULT __stdcall abi_PageDown() = 0;
    virtual HRESULT __stdcall abi_PageLeft() = 0;
    virtual HRESULT __stdcall abi_PageRight() = 0;
    virtual HRESULT __stdcall abi_MouseWheelUp() = 0;
    virtual HRESULT __stdcall abi_MouseWheelDown() = 0;
    virtual HRESULT __stdcall abi_MouseWheelLeft() = 0;
    virtual HRESULT __stdcall abi_MouseWheelRight() = 0;
    virtual HRESULT __stdcall abi_SetHorizontalOffset(double offset) = 0;
    virtual HRESULT __stdcall abi_SetVerticalOffset(double offset) = 0;
    virtual HRESULT __stdcall abi_MakeVisible(Windows::UI::Xaml::IUIElement * visual, Windows::Foundation::Rect rectangle, Windows::Foundation::Rect * returnValue) = 0;
};

struct __declspec(uuid("7b8eaeaf-f92f-439d-9ebf-e9919f56c94d")) __declspec(novtable) IOrientedVirtualizingPanelFactory : Windows::IInspectable
{
};

struct __declspec(uuid("e33574ea-1076-44d1-9383-dc24ac5cff2a")) __declspec(novtable) IPickerFlyoutBase : Windows::IInspectable
{
};

struct __declspec(uuid("7ec27a53-9502-4beb-b342-00566c8f16b0")) __declspec(novtable) IPickerFlyoutBaseFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase ** instance) = 0;
};

struct __declspec(uuid("5bfc4f4a-4822-47b4-a958-77c20ba120d3")) __declspec(novtable) IPickerFlyoutBaseOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnConfirmed() = 0;
    virtual HRESULT __stdcall abi_ShouldShowConfirmationButtons(bool * returnValue) = 0;
};

struct __declspec(uuid("5a4d0ac5-89ae-40e5-a7f1-bb702355adf3")) __declspec(novtable) IPickerFlyoutBaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TitleProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetTitle(Windows::UI::Xaml::IDependencyObject * element, hstring * value) = 0;
    virtual HRESULT __stdcall abi_SetTitle(Windows::UI::Xaml::IDependencyObject * element, hstring value) = 0;
};

struct __declspec(uuid("594572c2-82aa-410b-9e55-fd8e2c98862d")) __declspec(novtable) IPivotHeaderItem : Windows::IInspectable
{
};

struct __declspec(uuid("14308b37-185b-4117-bc77-dda2eb261b99")) __declspec(novtable) IPivotHeaderItemFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem ** instance) = 0;
};

struct __declspec(uuid("21484ebc-9241-4203-bd37-6c08fb096612")) __declspec(novtable) IPivotHeaderPanel : Windows::IInspectable
{
};

struct __declspec(uuid("ad4ebe80-22a9-4ca3-9212-2773b6359ff3")) __declspec(novtable) IPivotPanel : Windows::IInspectable
{
};

struct __declspec(uuid("62418240-e6d3-4705-a1dc-39156456ee29")) __declspec(novtable) IPopup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Child(Windows::UI::Xaml::IUIElement ** value) = 0;
    virtual HRESULT __stdcall put_Child(Windows::UI::Xaml::IUIElement * value) = 0;
    virtual HRESULT __stdcall get_IsOpen(bool * value) = 0;
    virtual HRESULT __stdcall put_IsOpen(bool value) = 0;
    virtual HRESULT __stdcall get_HorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_HorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_VerticalOffset(double value) = 0;
    virtual HRESULT __stdcall get_ChildTransitions(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition> ** value) = 0;
    virtual HRESULT __stdcall put_ChildTransitions(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition> * value) = 0;
    virtual HRESULT __stdcall get_IsLightDismissEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsLightDismissEnabled(bool value) = 0;
    virtual HRESULT __stdcall add_Opened(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Opened(event_token token) = 0;
    virtual HRESULT __stdcall add_Closed(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Closed(event_token token) = 0;
};

struct __declspec(uuid("376a8c4c-aac0-4b20-966a-0b9364feb4b5")) __declspec(novtable) IPopup2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LightDismissOverlayMode(winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode * value) = 0;
    virtual HRESULT __stdcall put_LightDismissOverlayMode(winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode value) = 0;
};

struct __declspec(uuid("5ae3bf1a-6e34-40d6-8a7f-ca822aaf59e3")) __declspec(novtable) IPopupStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChildProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsOpenProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_HorizontalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_VerticalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ChildTransitionsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsLightDismissEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("2b9ae9ec-55ef-43b6-b459-12e40ffa4302")) __declspec(novtable) IPopupStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LightDismissOverlayModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("3fe2ea2a-e3f2-4c2b-9488-918d77d2bbe4")) __declspec(novtable) IProgressBarTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EllipseDiameter(double * value) = 0;
    virtual HRESULT __stdcall get_EllipseOffset(double * value) = 0;
    virtual HRESULT __stdcall get_EllipseAnimationWellPosition(double * value) = 0;
    virtual HRESULT __stdcall get_EllipseAnimationEndPosition(double * value) = 0;
    virtual HRESULT __stdcall get_ContainerAnimationStartPosition(double * value) = 0;
    virtual HRESULT __stdcall get_ContainerAnimationEndPosition(double * value) = 0;
    virtual HRESULT __stdcall get_IndicatorLengthDelta(double * value) = 0;
};

struct __declspec(uuid("b9b675ec-c723-42e6-83e9-9826272bdc0e")) __declspec(novtable) IProgressRingTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EllipseDiameter(double * value) = 0;
    virtual HRESULT __stdcall get_EllipseOffset(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall get_MaxSideLength(double * value) = 0;
};

struct __declspec(uuid("fa002c1a-494e-46cf-91d4-e14a8d798675")) __declspec(novtable) IRangeBase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Minimum(double * value) = 0;
    virtual HRESULT __stdcall put_Minimum(double value) = 0;
    virtual HRESULT __stdcall get_Maximum(double * value) = 0;
    virtual HRESULT __stdcall put_Maximum(double value) = 0;
    virtual HRESULT __stdcall get_SmallChange(double * value) = 0;
    virtual HRESULT __stdcall put_SmallChange(double value) = 0;
    virtual HRESULT __stdcall get_LargeChange(double * value) = 0;
    virtual HRESULT __stdcall put_LargeChange(double value) = 0;
    virtual HRESULT __stdcall get_Value(double * value) = 0;
    virtual HRESULT __stdcall put_Value(double value) = 0;
    virtual HRESULT __stdcall add_ValueChanged(Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ValueChanged(event_token token) = 0;
};

struct __declspec(uuid("389b7c71-5220-42b2-9992-2690c1a67030")) __declspec(novtable) IRangeBaseFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IRangeBase ** instance) = 0;
};

struct __declspec(uuid("4291af39-7f0b-4bc2-99c4-06e7062682d8")) __declspec(novtable) IRangeBaseOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnMinimumChanged(double oldMinimum, double newMinimum) = 0;
    virtual HRESULT __stdcall abi_OnMaximumChanged(double oldMaximum, double newMaximum) = 0;
    virtual HRESULT __stdcall abi_OnValueChanged(double oldValue, double newValue) = 0;
};

struct __declspec(uuid("67ef17e1-fe37-474f-9e97-3b5e0b30f2e0")) __declspec(novtable) IRangeBaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MinimumProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_MaximumProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SmallChangeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_LargeChangeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ValueProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("a1921777-d5c1-4f9c-a7b0-0401b7e6dc5c")) __declspec(novtable) IRangeBaseValueChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldValue(double * value) = 0;
    virtual HRESULT __stdcall get_NewValue(double * value) = 0;
};

struct __declspec(uuid("02200df9-021a-484a-a93b-0f31020314e5")) __declspec(novtable) IRepeatButton : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Delay(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Delay(int32_t value) = 0;
    virtual HRESULT __stdcall get_Interval(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Interval(int32_t value) = 0;
};

struct __declspec(uuid("3914ac4e-f462-4f73-8197-e8846639c682")) __declspec(novtable) IRepeatButtonStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DelayProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IntervalProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("f57ae6ca-d1a6-4b90-a4e9-54df1ba8d2ec")) __declspec(novtable) IScrollBar : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Orientation(winrt::Windows::UI::Xaml::Controls::Orientation * value) = 0;
    virtual HRESULT __stdcall put_Orientation(winrt::Windows::UI::Xaml::Controls::Orientation value) = 0;
    virtual HRESULT __stdcall get_ViewportSize(double * value) = 0;
    virtual HRESULT __stdcall put_ViewportSize(double value) = 0;
    virtual HRESULT __stdcall get_IndicatorMode(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode * value) = 0;
    virtual HRESULT __stdcall put_IndicatorMode(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode value) = 0;
    virtual HRESULT __stdcall add_Scroll(Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Scroll(event_token token) = 0;
};

struct __declspec(uuid("45eaf38d-b814-48cf-97f2-539eb16dfd4d")) __declspec(novtable) IScrollBarStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OrientationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ViewportSizeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IndicatorModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("c57e5168-3afe-448d-b752-2f364c75d743")) __declspec(novtable) IScrollEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NewValue(double * value) = 0;
    virtual HRESULT __stdcall get_ScrollEventType(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventType * value) = 0;
};

struct __declspec(uuid("1b5d1336-e61b-4d51-be41-fd8ddc55c58c")) __declspec(novtable) IScrollSnapPointsInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AreHorizontalSnapPointsRegular(bool * value) = 0;
    virtual HRESULT __stdcall get_AreVerticalSnapPointsRegular(bool * value) = 0;
    virtual HRESULT __stdcall add_HorizontalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_HorizontalSnapPointsChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_VerticalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VerticalSnapPointsChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetIrregularSnapPoints(winrt::Windows::UI::Xaml::Controls::Orientation orientation, winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, Windows::Foundation::Collections::IVectorView<float> ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetRegularSnapPoints(winrt::Windows::UI::Xaml::Controls::Orientation orientation, winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, float * offset, float * returnValue) = 0;
};

struct __declspec(uuid("e30eb3a5-b36b-42dc-8527-cd25136c083c")) __declspec(novtable) ISelector : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectedIndex(int32_t * value) = 0;
    virtual HRESULT __stdcall put_SelectedIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_SelectedItem(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_SelectedItem(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall get_SelectedValue(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_SelectedValue(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall get_SelectedValuePath(hstring * value) = 0;
    virtual HRESULT __stdcall put_SelectedValuePath(hstring value) = 0;
    virtual HRESULT __stdcall get_IsSynchronizedWithCurrentItem(Windows::Foundation::IReference<bool> ** value) = 0;
    virtual HRESULT __stdcall put_IsSynchronizedWithCurrentItem(Windows::Foundation::IReference<bool> * value) = 0;
    virtual HRESULT __stdcall add_SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SelectionChanged(event_token token) = 0;
};

struct __declspec(uuid("c9be2995-d136-4600-b187-8ad56079b48a")) __declspec(novtable) ISelectorFactory : Windows::IInspectable
{
};

struct __declspec(uuid("541c8d6c-0283-4581-b945-2a64c28a0646")) __declspec(novtable) ISelectorItem : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsSelected(bool * value) = 0;
    virtual HRESULT __stdcall put_IsSelected(bool value) = 0;
};

struct __declspec(uuid("b9363945-c86a-4b1e-9440-1879378d5313")) __declspec(novtable) ISelectorItemFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::ISelectorItem ** instance) = 0;
};

struct __declspec(uuid("2a353ab8-cbe9-4303-92e7-c8906e218392")) __declspec(novtable) ISelectorItemStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsSelectedProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("13300b06-bd10-4e09-bff7-71efb8bbb42b")) __declspec(novtable) ISelectorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectedIndexProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedItemProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedValueProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SelectedValuePathProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsSynchronizedWithCurrentItemProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetIsSelectionActive(Windows::UI::Xaml::IDependencyObject * element, bool * returnValue) = 0;
};

struct __declspec(uuid("bcf14c10-cea7-43f1-9d68-57605ded69d4")) __declspec(novtable) ISettingsFlyoutTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HeaderBackground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall get_HeaderForeground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall get_BorderBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall get_BorderThickness(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall get_IconSource(Windows::UI::Xaml::Media::IImageSource ** value) = 0;
    virtual HRESULT __stdcall get_ContentTransitions(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition> ** value) = 0;
};

struct __declspec(uuid("c16ab5a7-4996-4443-b199-6b6b89124eab")) __declspec(novtable) ISplitViewTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OpenPaneLength(double * value) = 0;
    virtual HRESULT __stdcall get_NegativeOpenPaneLength(double * value) = 0;
    virtual HRESULT __stdcall get_OpenPaneLengthMinusCompactLength(double * value) = 0;
    virtual HRESULT __stdcall get_NegativeOpenPaneLengthMinusCompactLength(double * value) = 0;
    virtual HRESULT __stdcall get_OpenPaneGridLength(Windows::UI::Xaml::GridLength * value) = 0;
    virtual HRESULT __stdcall get_CompactPaneGridLength(Windows::UI::Xaml::GridLength * value) = 0;
};

struct __declspec(uuid("e8b2b281-0d6a-45cf-b333-2402b037f099")) __declspec(novtable) IThumb : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsDragging(bool * value) = 0;
    virtual HRESULT __stdcall add_DragStarted(Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DragStarted(event_token token) = 0;
    virtual HRESULT __stdcall add_DragDelta(Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DragDelta(event_token token) = 0;
    virtual HRESULT __stdcall add_DragCompleted(Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DragCompleted(event_token token) = 0;
    virtual HRESULT __stdcall abi_CancelDrag() = 0;
};

struct __declspec(uuid("955024eb-36f3-4672-a186-baaf626ac4ad")) __declspec(novtable) IThumbStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsDraggingProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("994683fa-f1f6-487d-a5ac-c15921bfa995")) __declspec(novtable) ITickBar : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Fill(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Fill(Windows::UI::Xaml::Media::IBrush * value) = 0;
};

struct __declspec(uuid("2c6d7e40-799d-4a54-be09-1fefc61d018e")) __declspec(novtable) ITickBarStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FillProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("589877fb-0fc7-4036-9d8b-127dfa75c16d")) __declspec(novtable) IToggleButton : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsChecked(Windows::Foundation::IReference<bool> ** value) = 0;
    virtual HRESULT __stdcall put_IsChecked(Windows::Foundation::IReference<bool> * value) = 0;
    virtual HRESULT __stdcall get_IsThreeState(bool * value) = 0;
    virtual HRESULT __stdcall put_IsThreeState(bool value) = 0;
    virtual HRESULT __stdcall add_Checked(Windows::UI::Xaml::RoutedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Checked(event_token token) = 0;
    virtual HRESULT __stdcall add_Unchecked(Windows::UI::Xaml::RoutedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Unchecked(event_token token) = 0;
    virtual HRESULT __stdcall add_Indeterminate(Windows::UI::Xaml::RoutedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Indeterminate(event_token token) = 0;
};

struct __declspec(uuid("d56aa2fc-fc7f-449c-9855-7a1055d668a8")) __declspec(novtable) IToggleButtonFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Controls::Primitives::IToggleButton ** instance) = 0;
};

struct __declspec(uuid("d20e4c28-f18b-491a-9a45-f1a04a9369a4")) __declspec(novtable) IToggleButtonOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnToggle() = 0;
};

struct __declspec(uuid("af1eab12-0128-4f67-9c5a-82320c445d19")) __declspec(novtable) IToggleButtonStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsCheckedProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsThreeStateProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("02b7bdcd-628a-4363-86e0-51d6e2e89e58")) __declspec(novtable) IToggleSwitchTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KnobCurrentToOnOffset(double * value) = 0;
    virtual HRESULT __stdcall get_KnobCurrentToOffOffset(double * value) = 0;
    virtual HRESULT __stdcall get_KnobOnToOffOffset(double * value) = 0;
    virtual HRESULT __stdcall get_KnobOffToOnOffset(double * value) = 0;
    virtual HRESULT __stdcall get_CurtainCurrentToOnOffset(double * value) = 0;
    virtual HRESULT __stdcall get_CurtainCurrentToOffOffset(double * value) = 0;
    virtual HRESULT __stdcall get_CurtainOnToOffOffset(double * value) = 0;
    virtual HRESULT __stdcall get_CurtainOffToOnOffset(double * value) = 0;
};

struct __declspec(uuid("d4388247-0ec4-4506-affd-afac2225b48c")) __declspec(novtable) IToolTipTemplateSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double * value) = 0;
};

struct __declspec(uuid("178257be-a304-482f-8bf0-b9d2e39612a3")) __declspec(novtable) ItemsChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs * e) = 0;
};

struct __declspec(uuid("e3906fd9-4d1b-4ac8-a43c-c3b908742799")) __declspec(novtable) RangeBaseValueChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs * e) = 0;
};

struct __declspec(uuid("8860b0a4-a383-4c83-b306-a1c39d7db87f")) __declspec(novtable) ScrollEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs * e) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ButtonBase> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IButtonBase; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::CalendarPanel> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ICalendarPanel; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::CarouselPanel> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ICarouselPanel; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::FlyoutBase> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IFlyoutBase; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::LayoutInformation> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ILayoutInformation; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::LoopingSelector> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ILoopingSelector; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::PivotPanel> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IPivotPanel; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::Popup> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IPopup; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::RangeBase> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IRangeBase; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::RepeatButton> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IRepeatButton; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ScrollBar> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IScrollBar; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::Selector> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ISelector; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::SelectorItem> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ISelectorItem; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::Thumb> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IThumb; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::TickBar> { using default_interface = Windows::UI::Xaml::Controls::Primitives::ITickBar; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ToggleButton> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IToggleButton; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings; };
template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings> { using default_interface = Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings; };

}

namespace Windows::UI::Xaml::Controls::Primitives {

template <typename T> struct impl_IAppBarTemplateSettings;
template <typename T> struct impl_IButtonBase;
template <typename T> struct impl_IButtonBaseFactory;
template <typename T> struct impl_IButtonBaseStatics;
template <typename T> struct impl_ICalendarPanel;
template <typename T> struct impl_ICalendarViewTemplateSettings;
template <typename T> struct impl_ICarouselPanel;
template <typename T> struct impl_ICarouselPanelFactory;
template <typename T> struct impl_IComboBoxTemplateSettings;
template <typename T> struct impl_IComboBoxTemplateSettings2;
template <typename T> struct impl_ICommandBarTemplateSettings;
template <typename T> struct impl_ICommandBarTemplateSettings2;
template <typename T> struct impl_ICommandBarTemplateSettings3;
template <typename T> struct impl_IDragCompletedEventArgs;
template <typename T> struct impl_IDragCompletedEventArgsFactory;
template <typename T> struct impl_IDragDeltaEventArgs;
template <typename T> struct impl_IDragDeltaEventArgsFactory;
template <typename T> struct impl_IDragStartedEventArgs;
template <typename T> struct impl_IDragStartedEventArgsFactory;
template <typename T> struct impl_IFlyoutBase;
template <typename T> struct impl_IFlyoutBase2;
template <typename T> struct impl_IFlyoutBaseClosingEventArgs;
template <typename T> struct impl_IFlyoutBaseFactory;
template <typename T> struct impl_IFlyoutBaseOverrides;
template <typename T> struct impl_IFlyoutBaseStatics;
template <typename T> struct impl_IFlyoutBaseStatics2;
template <typename T> struct impl_IGeneratorPositionHelper;
template <typename T> struct impl_IGeneratorPositionHelperStatics;
template <typename T> struct impl_IGridViewItemPresenter;
template <typename T> struct impl_IGridViewItemPresenterFactory;
template <typename T> struct impl_IGridViewItemPresenterStatics;
template <typename T> struct impl_IGridViewItemTemplateSettings;
template <typename T> struct impl_IItemsChangedEventArgs;
template <typename T> struct impl_IJumpListItemBackgroundConverter;
template <typename T> struct impl_IJumpListItemBackgroundConverterStatics;
template <typename T> struct impl_IJumpListItemForegroundConverter;
template <typename T> struct impl_IJumpListItemForegroundConverterStatics;
template <typename T> struct impl_ILayoutInformation;
template <typename T> struct impl_ILayoutInformationStatics;
template <typename T> struct impl_IListViewItemPresenter;
template <typename T> struct impl_IListViewItemPresenter2;
template <typename T> struct impl_IListViewItemPresenterFactory;
template <typename T> struct impl_IListViewItemPresenterStatics;
template <typename T> struct impl_IListViewItemPresenterStatics2;
template <typename T> struct impl_IListViewItemTemplateSettings;
template <typename T> struct impl_ILoopingSelector;
template <typename T> struct impl_ILoopingSelectorItem;
template <typename T> struct impl_ILoopingSelectorPanel;
template <typename T> struct impl_ILoopingSelectorStatics;
template <typename T> struct impl_IMenuFlyoutPresenterTemplateSettings;
template <typename T> struct impl_IOrientedVirtualizingPanel;
template <typename T> struct impl_IOrientedVirtualizingPanelFactory;
template <typename T> struct impl_IPickerFlyoutBase;
template <typename T> struct impl_IPickerFlyoutBaseFactory;
template <typename T> struct impl_IPickerFlyoutBaseOverrides;
template <typename T> struct impl_IPickerFlyoutBaseStatics;
template <typename T> struct impl_IPivotHeaderItem;
template <typename T> struct impl_IPivotHeaderItemFactory;
template <typename T> struct impl_IPivotHeaderPanel;
template <typename T> struct impl_IPivotPanel;
template <typename T> struct impl_IPopup;
template <typename T> struct impl_IPopup2;
template <typename T> struct impl_IPopupStatics;
template <typename T> struct impl_IPopupStatics2;
template <typename T> struct impl_IProgressBarTemplateSettings;
template <typename T> struct impl_IProgressRingTemplateSettings;
template <typename T> struct impl_IRangeBase;
template <typename T> struct impl_IRangeBaseFactory;
template <typename T> struct impl_IRangeBaseOverrides;
template <typename T> struct impl_IRangeBaseStatics;
template <typename T> struct impl_IRangeBaseValueChangedEventArgs;
template <typename T> struct impl_IRepeatButton;
template <typename T> struct impl_IRepeatButtonStatics;
template <typename T> struct impl_IScrollBar;
template <typename T> struct impl_IScrollBarStatics;
template <typename T> struct impl_IScrollEventArgs;
template <typename T> struct impl_IScrollSnapPointsInfo;
template <typename T> struct impl_ISelector;
template <typename T> struct impl_ISelectorFactory;
template <typename T> struct impl_ISelectorItem;
template <typename T> struct impl_ISelectorItemFactory;
template <typename T> struct impl_ISelectorItemStatics;
template <typename T> struct impl_ISelectorStatics;
template <typename T> struct impl_ISettingsFlyoutTemplateSettings;
template <typename T> struct impl_ISplitViewTemplateSettings;
template <typename T> struct impl_IThumb;
template <typename T> struct impl_IThumbStatics;
template <typename T> struct impl_ITickBar;
template <typename T> struct impl_ITickBarStatics;
template <typename T> struct impl_IToggleButton;
template <typename T> struct impl_IToggleButtonFactory;
template <typename T> struct impl_IToggleButtonOverrides;
template <typename T> struct impl_IToggleButtonStatics;
template <typename T> struct impl_IToggleSwitchTemplateSettings;
template <typename T> struct impl_IToolTipTemplateSettings;
template <typename T> struct impl_DragCompletedEventHandler;
template <typename T> struct impl_DragDeltaEventHandler;
template <typename T> struct impl_DragStartedEventHandler;
template <typename T> struct impl_ItemsChangedEventHandler;
template <typename T> struct impl_RangeBaseValueChangedEventHandler;
template <typename T> struct impl_ScrollEventHandler;

}

namespace impl {

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IAppBarTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IButtonBase>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IButtonBase;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IButtonBase<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IButtonBaseFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IButtonBaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ICalendarPanel;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ICalendarPanel<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ICalendarViewTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ICarouselPanel;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ICarouselPanel<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ICarouselPanelFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IComboBoxTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IComboBoxTemplateSettings2<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ICommandBarTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ICommandBarTemplateSettings2<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ICommandBarTemplateSettings3<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IDragCompletedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IDragCompletedEventArgsFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IDragDeltaEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IDragDeltaEventArgsFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IDragStartedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IDragStartedEventArgsFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IFlyoutBase<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IFlyoutBase2<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IFlyoutBaseClosingEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IFlyoutBaseFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IFlyoutBaseOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IFlyoutBaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IFlyoutBaseStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IGeneratorPositionHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IGeneratorPositionHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IGridViewItemPresenter<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IGridViewItemPresenterFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IGridViewItemPresenterStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IGridViewItemTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IItemsChangedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IJumpListItemBackgroundConverter<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IJumpListItemBackgroundConverterStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IJumpListItemForegroundConverter<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IJumpListItemForegroundConverterStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ILayoutInformation;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ILayoutInformation<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ILayoutInformationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IListViewItemPresenter<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IListViewItemPresenter2<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IListViewItemPresenterFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IListViewItemPresenterStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IListViewItemPresenterStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IListViewItemTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ILoopingSelector;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ILoopingSelector<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ILoopingSelectorItem<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ILoopingSelectorPanel<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ILoopingSelectorStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IMenuFlyoutPresenterTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IOrientedVirtualizingPanel<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IOrientedVirtualizingPanelFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPickerFlyoutBase<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPickerFlyoutBaseFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPickerFlyoutBaseOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPickerFlyoutBaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPivotHeaderItem<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPivotHeaderItemFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPivotHeaderPanel<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPivotPanel;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPivotPanel<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPopup>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPopup;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPopup<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPopup2>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPopup2;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPopup2<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPopupStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPopupStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IPopupStatics2;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IPopupStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IProgressBarTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IProgressRingTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IRangeBase>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IRangeBase;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IRangeBase<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IRangeBaseFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IRangeBaseOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IRangeBaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IRangeBaseValueChangedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IRepeatButton;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IRepeatButton<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IRepeatButtonStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IScrollBar>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IScrollBar;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IScrollBar<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IScrollBarStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IScrollEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IScrollSnapPointsInfo<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ISelector>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ISelector;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ISelector<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ISelectorFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ISelectorFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ISelectorItem;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ISelectorItem<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ISelectorItemFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ISelectorItemStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ISelectorStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ISelectorStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ISettingsFlyoutTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ISplitViewTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IThumb>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IThumb;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IThumb<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IThumbStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IThumbStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ITickBar>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ITickBar;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ITickBar<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ITickBarStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_ITickBarStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IToggleButton>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IToggleButton;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IToggleButton<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IToggleButtonFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IToggleButtonOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IToggleButtonStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IToggleSwitchTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings;
    template <typename D> using consume = Windows::UI::Xaml::Controls::Primitives::impl_IToolTipTemplateSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.AppBarTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ButtonBase>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ButtonBase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ButtonBase"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::CalendarPanel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.CalendarPanel"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.CalendarViewTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::CarouselPanel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.CarouselPanel"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ComboBoxTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.CommandBarTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.DragCompletedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.DragDeltaEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.DragStartedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::FlyoutBase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.FlyoutBase"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.FlyoutBaseClosingEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.GeneratorPositionHelper"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.GridViewItemTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ItemsChangedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.JumpListItemBackgroundConverter"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.JumpListItemForegroundConverter"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::LayoutInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.LayoutInformation"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ListViewItemTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::LoopingSelector;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.LoopingSelector"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutPresenterTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.PickerFlyoutBase"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::PivotPanel>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::PivotPanel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.PivotPanel"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::Popup>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::Popup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.Popup"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ProgressBarTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ProgressRingTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::RangeBase>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::RangeBase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.RangeBase"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.RangeBaseValueChangedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::RepeatButton>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::RepeatButton;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.RepeatButton"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ScrollBar>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ScrollBar;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ScrollBar"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ScrollEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::Selector>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::Selector;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.Selector"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::SelectorItem>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::SelectorItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.SelectorItem"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.SettingsFlyoutTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.SplitViewTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::Thumb>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::Thumb;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.Thumb"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::TickBar>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::TickBar;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.TickBar"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ToggleButton>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ToggleButton;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ToggleButton"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ToggleSwitchTemplateSettings"; }
};

template <> struct traits<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>
{
    using abi = ABI::Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Controls.Primitives.ToolTipTemplateSettings"; }
};

}

}
