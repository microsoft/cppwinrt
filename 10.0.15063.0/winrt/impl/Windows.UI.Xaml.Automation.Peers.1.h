// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.0.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Provider.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.0.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Peers {

struct WINRT_EBO IAppBarAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarAutomationPeer>
{
    IAppBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBarAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarAutomationPeerFactory>
{
    IAppBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBarButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarButtonAutomationPeer>
{
    IAppBarButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBarButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarButtonAutomationPeerFactory>
{
    IAppBarButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBarToggleButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarToggleButtonAutomationPeer>
{
    IAppBarToggleButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBarToggleButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBarToggleButtonAutomationPeerFactory>
{
    IAppBarToggleButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutoSuggestBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutoSuggestBoxAutomationPeer>
{
    IAutoSuggestBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutoSuggestBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutoSuggestBoxAutomationPeerFactory>
{
    IAutoSuggestBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer>
{
    IAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer2>
{
    IAutomationPeer2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeer3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer3>
{
    IAutomationPeer3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeer4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer4>
{
    IAutomationPeer4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeer5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer5>
{
    IAutomationPeer5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeer6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeer6>
{
    IAutomationPeer6(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerAnnotation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerAnnotation>
{
    IAutomationPeerAnnotation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerAnnotationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerAnnotationFactory>
{
    IAutomationPeerAnnotationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerAnnotationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerAnnotationStatics>
{
    IAutomationPeerAnnotationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerFactory>
{
    IAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides>
{
    IAutomationPeerOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerOverrides2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides2>
{
    IAutomationPeerOverrides2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerOverrides3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides3>
{
    IAutomationPeerOverrides3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerOverrides4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides4>
{
    IAutomationPeerOverrides4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerOverrides5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides5>
{
    IAutomationPeerOverrides5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerOverrides6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerOverrides6>
{
    IAutomationPeerOverrides6(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerProtected :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerProtected>
{
    IAutomationPeerProtected(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerStatics>
{
    IAutomationPeerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAutomationPeerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationPeerStatics3>
{
    IAutomationPeerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IButtonAutomationPeer>
{
    IButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IButtonAutomationPeerFactory>
{
    IButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IButtonBaseAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IButtonBaseAutomationPeer>
{
    IButtonBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IButtonBaseAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IButtonBaseAutomationPeerFactory>
{
    IButtonBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICaptureElementAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICaptureElementAutomationPeer>
{
    ICaptureElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICaptureElementAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICaptureElementAutomationPeerFactory>
{
    ICaptureElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICheckBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICheckBoxAutomationPeer>
{
    ICheckBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICheckBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICheckBoxAutomationPeerFactory>
{
    ICheckBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IComboBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxAutomationPeer>
{
    IComboBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IComboBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxAutomationPeerFactory>
{
    IComboBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IComboBoxItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxItemAutomationPeer>
{
    IComboBoxItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IComboBoxItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxItemAutomationPeerFactory>
{
    IComboBoxItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IComboBoxItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxItemDataAutomationPeer>
{
    IComboBoxItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IComboBoxItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComboBoxItemDataAutomationPeerFactory>
{
    IComboBoxItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatePickerAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatePickerAutomationPeer>
{
    IDatePickerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatePickerAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatePickerAutomationPeerFactory>
{
    IDatePickerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatePickerFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatePickerFlyoutPresenterAutomationPeer>
{
    IDatePickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlipViewAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewAutomationPeer>
{
    IFlipViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlipViewAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewAutomationPeerFactory>
{
    IFlipViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlipViewItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewItemAutomationPeer>
{
    IFlipViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlipViewItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewItemAutomationPeerFactory>
{
    IFlipViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlipViewItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewItemDataAutomationPeer>
{
    IFlipViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlipViewItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlipViewItemDataAutomationPeerFactory>
{
    IFlipViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlyoutPresenterAutomationPeer>
{
    IFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlyoutPresenterAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlyoutPresenterAutomationPeerFactory>
{
    IFlyoutPresenterAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameworkElementAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkElementAutomationPeer>
{
    IFrameworkElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameworkElementAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkElementAutomationPeerFactory>
{
    IFrameworkElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameworkElementAutomationPeerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameworkElementAutomationPeerStatics>
{
    IFrameworkElementAutomationPeerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridViewAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewAutomationPeer>
{
    IGridViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridViewAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewAutomationPeerFactory>
{
    IGridViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridViewHeaderItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewHeaderItemAutomationPeer>
{
    IGridViewHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridViewHeaderItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewHeaderItemAutomationPeerFactory>
{
    IGridViewHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridViewItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewItemAutomationPeer>
{
    IGridViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridViewItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewItemAutomationPeerFactory>
{
    IGridViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridViewItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewItemDataAutomationPeer>
{
    IGridViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGridViewItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGridViewItemDataAutomationPeerFactory>
{
    IGridViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGroupItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGroupItemAutomationPeer>
{
    IGroupItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGroupItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGroupItemAutomationPeerFactory>
{
    IGroupItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHubAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHubAutomationPeer>
{
    IHubAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHubAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHubAutomationPeerFactory>
{
    IHubAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHubSectionAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHubSectionAutomationPeer>
{
    IHubSectionAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHubSectionAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHubSectionAutomationPeerFactory>
{
    IHubSectionAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHyperlinkButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHyperlinkButtonAutomationPeer>
{
    IHyperlinkButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHyperlinkButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHyperlinkButtonAutomationPeerFactory>
{
    IHyperlinkButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageAutomationPeer>
{
    IImageAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageAutomationPeerFactory>
{
    IImageAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkToolbarAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkToolbarAutomationPeer>
{
    IInkToolbarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemAutomationPeer>
{
    IItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemAutomationPeerFactory>
{
    IItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemsControlAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsControlAutomationPeer>
{
    IItemsControlAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemsControlAutomationPeer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsControlAutomationPeer2>
{
    IItemsControlAutomationPeer2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemsControlAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsControlAutomationPeerFactory>
{
    IItemsControlAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemsControlAutomationPeerOverrides2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsControlAutomationPeerOverrides2>
{
    IItemsControlAutomationPeerOverrides2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxAutomationPeer>
{
    IListBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxAutomationPeerFactory>
{
    IListBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListBoxItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxItemAutomationPeer>
{
    IListBoxItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListBoxItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxItemAutomationPeerFactory>
{
    IListBoxItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListBoxItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxItemDataAutomationPeer>
{
    IListBoxItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListBoxItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListBoxItemDataAutomationPeerFactory>
{
    IListBoxItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListPickerFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListPickerFlyoutPresenterAutomationPeer>
{
    IListPickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewAutomationPeer>
{
    IListViewAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewAutomationPeerFactory>
{
    IListViewAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewBaseAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewBaseAutomationPeer>
{
    IListViewBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewBaseAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewBaseAutomationPeerFactory>
{
    IListViewBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewBaseHeaderItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewBaseHeaderItemAutomationPeer>
{
    IListViewBaseHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewBaseHeaderItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewBaseHeaderItemAutomationPeerFactory>
{
    IListViewBaseHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewHeaderItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewHeaderItemAutomationPeer>
{
    IListViewHeaderItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewHeaderItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewHeaderItemAutomationPeerFactory>
{
    IListViewHeaderItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewItemAutomationPeer>
{
    IListViewItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewItemAutomationPeerFactory>
{
    IListViewItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewItemDataAutomationPeer>
{
    IListViewItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListViewItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListViewItemDataAutomationPeerFactory>
{
    IListViewItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILoopingSelectorAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoopingSelectorAutomationPeer>
{
    ILoopingSelectorAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILoopingSelectorItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoopingSelectorItemAutomationPeer>
{
    ILoopingSelectorItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILoopingSelectorItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoopingSelectorItemDataAutomationPeer>
{
    ILoopingSelectorItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlAutomationPeer>
{
    IMapControlAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaElementAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaElementAutomationPeer>
{
    IMediaElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaElementAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaElementAutomationPeerFactory>
{
    IMediaElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerElementAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerElementAutomationPeer>
{
    IMediaPlayerElementAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaPlayerElementAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaPlayerElementAutomationPeerFactory>
{
    IMediaPlayerElementAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaTransportControlsAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTransportControlsAutomationPeer>
{
    IMediaTransportControlsAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaTransportControlsAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTransportControlsAutomationPeerFactory>
{
    IMediaTransportControlsAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMenuFlyoutItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMenuFlyoutItemAutomationPeer>
{
    IMenuFlyoutItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMenuFlyoutItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMenuFlyoutItemAutomationPeerFactory>
{
    IMenuFlyoutItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMenuFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMenuFlyoutPresenterAutomationPeer>
{
    IMenuFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMenuFlyoutPresenterAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMenuFlyoutPresenterAutomationPeerFactory>
{
    IMenuFlyoutPresenterAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPasswordBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPasswordBoxAutomationPeer>
{
    IPasswordBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPasswordBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPasswordBoxAutomationPeerFactory>
{
    IPasswordBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPickerFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerFlyoutPresenterAutomationPeer>
{
    IPickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPivotAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotAutomationPeer>
{
    IPivotAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPivotAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotAutomationPeerFactory>
{
    IPivotAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPivotItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotItemAutomationPeer>
{
    IPivotItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPivotItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotItemAutomationPeerFactory>
{
    IPivotItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPivotItemDataAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotItemDataAutomationPeer>
{
    IPivotItemDataAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPivotItemDataAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPivotItemDataAutomationPeerFactory>
{
    IPivotItemDataAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProgressBarAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProgressBarAutomationPeer>
{
    IProgressBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProgressBarAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProgressBarAutomationPeerFactory>
{
    IProgressBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProgressRingAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProgressRingAutomationPeer>
{
    IProgressRingAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProgressRingAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProgressRingAutomationPeerFactory>
{
    IProgressRingAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadioButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadioButtonAutomationPeer>
{
    IRadioButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadioButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadioButtonAutomationPeerFactory>
{
    IRadioButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRangeBaseAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRangeBaseAutomationPeer>
{
    IRangeBaseAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRangeBaseAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRangeBaseAutomationPeerFactory>
{
    IRangeBaseAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRepeatButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRepeatButtonAutomationPeer>
{
    IRepeatButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRepeatButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRepeatButtonAutomationPeerFactory>
{
    IRepeatButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRichEditBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichEditBoxAutomationPeer>
{
    IRichEditBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRichEditBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichEditBoxAutomationPeerFactory>
{
    IRichEditBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRichTextBlockAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichTextBlockAutomationPeer>
{
    IRichTextBlockAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRichTextBlockAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichTextBlockAutomationPeerFactory>
{
    IRichTextBlockAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRichTextBlockOverflowAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichTextBlockOverflowAutomationPeer>
{
    IRichTextBlockOverflowAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRichTextBlockOverflowAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRichTextBlockOverflowAutomationPeerFactory>
{
    IRichTextBlockOverflowAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScrollBarAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollBarAutomationPeer>
{
    IScrollBarAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScrollBarAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollBarAutomationPeerFactory>
{
    IScrollBarAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScrollViewerAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollViewerAutomationPeer>
{
    IScrollViewerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScrollViewerAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScrollViewerAutomationPeerFactory>
{
    IScrollViewerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchBoxAutomationPeer>
{
    ISearchBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchBoxAutomationPeerFactory>
{
    ISearchBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectorAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectorAutomationPeer>
{
    ISelectorAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectorAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectorAutomationPeerFactory>
{
    ISelectorAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectorItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectorItemAutomationPeer>
{
    ISelectorItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectorItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectorItemAutomationPeerFactory>
{
    ISelectorItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISemanticZoomAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISemanticZoomAutomationPeer>
{
    ISemanticZoomAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISemanticZoomAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISemanticZoomAutomationPeerFactory>
{
    ISemanticZoomAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISettingsFlyoutAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsFlyoutAutomationPeer>
{
    ISettingsFlyoutAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISettingsFlyoutAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISettingsFlyoutAutomationPeerFactory>
{
    ISettingsFlyoutAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISliderAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISliderAutomationPeer>
{
    ISliderAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISliderAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISliderAutomationPeerFactory>
{
    ISliderAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextBlockAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextBlockAutomationPeer>
{
    ITextBlockAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextBlockAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextBlockAutomationPeerFactory>
{
    ITextBlockAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextBoxAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextBoxAutomationPeer>
{
    ITextBoxAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextBoxAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextBoxAutomationPeerFactory>
{
    ITextBoxAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IThumbAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThumbAutomationPeer>
{
    IThumbAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IThumbAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThumbAutomationPeerFactory>
{
    IThumbAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimePickerAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimePickerAutomationPeer>
{
    ITimePickerAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimePickerAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimePickerAutomationPeerFactory>
{
    ITimePickerAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimePickerFlyoutPresenterAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimePickerFlyoutPresenterAutomationPeer>
{
    ITimePickerFlyoutPresenterAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToggleButtonAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleButtonAutomationPeer>
{
    IToggleButtonAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToggleButtonAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleButtonAutomationPeerFactory>
{
    IToggleButtonAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToggleMenuFlyoutItemAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleMenuFlyoutItemAutomationPeer>
{
    IToggleMenuFlyoutItemAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToggleMenuFlyoutItemAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleMenuFlyoutItemAutomationPeerFactory>
{
    IToggleMenuFlyoutItemAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToggleSwitchAutomationPeer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleSwitchAutomationPeer>
{
    IToggleSwitchAutomationPeer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToggleSwitchAutomationPeerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToggleSwitchAutomationPeerFactory>
{
    IToggleSwitchAutomationPeerFactory(std::nullptr_t = nullptr) noexcept {}
};

}
