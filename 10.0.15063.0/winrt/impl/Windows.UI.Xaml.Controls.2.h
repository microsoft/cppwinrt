// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.1.h"
#include "winrt/impl/Windows.ApplicationModel.Search.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Casting.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Media.PlayTo.1.h"
#include "winrt/impl/Windows.Media.Playback.1.h"
#include "winrt/impl/Windows.Media.Protection.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.1.h"
#include "winrt/impl/Windows.UI.Text.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Windows.UI.Xaml.Documents.1.h"
#include "winrt/impl/Windows.UI.Xaml.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.1.h"
#include "winrt/impl/Windows.UI.Xaml.Navigation.1.h"
#include "winrt/impl/Windows.Web.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls {

struct BackClickEventHandler : Windows::Foundation::IUnknown
{
    BackClickEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BackClickEventHandler(L lambda);
    template <typename F> BackClickEventHandler(F* function);
    template <typename O, typename M> BackClickEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::BackClickEventArgs const& e) const;
};

struct CalendarViewDayItemChangingEventHandler : Windows::Foundation::IUnknown
{
    CalendarViewDayItemChangingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> CalendarViewDayItemChangingEventHandler(L lambda);
    template <typename F> CalendarViewDayItemChangingEventHandler(F* function);
    template <typename O, typename M> CalendarViewDayItemChangingEventHandler(O* object, M method);
    void operator()(Windows::UI::Xaml::Controls::CalendarView const& sender, Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs const& e) const;
};

struct CleanUpVirtualizedItemEventHandler : Windows::Foundation::IUnknown
{
    CleanUpVirtualizedItemEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> CleanUpVirtualizedItemEventHandler(L lambda);
    template <typename F> CleanUpVirtualizedItemEventHandler(F* function);
    template <typename O, typename M> CleanUpVirtualizedItemEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs const& e) const;
};

struct ContextMenuOpeningEventHandler : Windows::Foundation::IUnknown
{
    ContextMenuOpeningEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ContextMenuOpeningEventHandler(L lambda);
    template <typename F> ContextMenuOpeningEventHandler(F* function);
    template <typename O, typename M> ContextMenuOpeningEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::ContextMenuEventArgs const& e) const;
};

struct DragItemsStartingEventHandler : Windows::Foundation::IUnknown
{
    DragItemsStartingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DragItemsStartingEventHandler(L lambda);
    template <typename F> DragItemsStartingEventHandler(F* function);
    template <typename O, typename M> DragItemsStartingEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::DragItemsStartingEventArgs const& e) const;
};

struct HubSectionHeaderClickEventHandler : Windows::Foundation::IUnknown
{
    HubSectionHeaderClickEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> HubSectionHeaderClickEventHandler(L lambda);
    template <typename F> HubSectionHeaderClickEventHandler(F* function);
    template <typename O, typename M> HubSectionHeaderClickEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs const& e) const;
};

struct ItemClickEventHandler : Windows::Foundation::IUnknown
{
    ItemClickEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ItemClickEventHandler(L lambda);
    template <typename F> ItemClickEventHandler(F* function);
    template <typename O, typename M> ItemClickEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::ItemClickEventArgs const& e) const;
};

struct ListViewItemToKeyHandler : Windows::Foundation::IUnknown
{
    ListViewItemToKeyHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ListViewItemToKeyHandler(L lambda);
    template <typename F> ListViewItemToKeyHandler(F* function);
    template <typename O, typename M> ListViewItemToKeyHandler(O* object, M method);
    hstring operator()(Windows::Foundation::IInspectable const& item) const;
};

struct ListViewKeyToItemHandler : Windows::Foundation::IUnknown
{
    ListViewKeyToItemHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ListViewKeyToItemHandler(L lambda);
    template <typename F> ListViewKeyToItemHandler(F* function);
    template <typename O, typename M> ListViewKeyToItemHandler(O* object, M method);
    Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> operator()(param::hstring const& key) const;
};

struct NotifyEventHandler : Windows::Foundation::IUnknown
{
    NotifyEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> NotifyEventHandler(L lambda);
    template <typename F> NotifyEventHandler(F* function);
    template <typename O, typename M> NotifyEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::NotifyEventArgs const& e) const;
};

struct SectionsInViewChangedEventHandler : Windows::Foundation::IUnknown
{
    SectionsInViewChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SectionsInViewChangedEventHandler(L lambda);
    template <typename F> SectionsInViewChangedEventHandler(F* function);
    template <typename O, typename M> SectionsInViewChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs const& e) const;
};

struct SelectionChangedEventHandler : Windows::Foundation::IUnknown
{
    SelectionChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SelectionChangedEventHandler(L lambda);
    template <typename F> SelectionChangedEventHandler(F* function);
    template <typename O, typename M> SelectionChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs const& e) const;
};

struct SemanticZoomViewChangedEventHandler : Windows::Foundation::IUnknown
{
    SemanticZoomViewChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SemanticZoomViewChangedEventHandler(L lambda);
    template <typename F> SemanticZoomViewChangedEventHandler(F* function);
    template <typename O, typename M> SemanticZoomViewChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs const& e) const;
};

struct TextChangedEventHandler : Windows::Foundation::IUnknown
{
    TextChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> TextChangedEventHandler(L lambda);
    template <typename F> TextChangedEventHandler(F* function);
    template <typename O, typename M> TextChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::TextChangedEventArgs const& e) const;
};

struct TextControlPasteEventHandler : Windows::Foundation::IUnknown
{
    TextControlPasteEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> TextControlPasteEventHandler(L lambda);
    template <typename F> TextControlPasteEventHandler(F* function);
    template <typename O, typename M> TextControlPasteEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::TextControlPasteEventArgs const& e) const;
};

struct WebViewNavigationFailedEventHandler : Windows::Foundation::IUnknown
{
    WebViewNavigationFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WebViewNavigationFailedEventHandler(L lambda);
    template <typename F> WebViewNavigationFailedEventHandler(F* function);
    template <typename O, typename M> WebViewNavigationFailedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs const& e) const;
};

struct WINRT_EBO AppBar :
    Windows::UI::Xaml::Controls::IAppBar,
    impl::base<AppBar, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<AppBar, Windows::UI::Xaml::Controls::IAppBar2, Windows::UI::Xaml::Controls::IAppBar3, Windows::UI::Xaml::Controls::IAppBar4, Windows::UI::Xaml::Controls::IAppBarOverrides, Windows::UI::Xaml::Controls::IAppBarOverrides3, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    AppBar(std::nullptr_t) noexcept {}
    AppBar();
    static Windows::UI::Xaml::DependencyProperty IsOpenProperty();
    static Windows::UI::Xaml::DependencyProperty IsStickyProperty();
    static Windows::UI::Xaml::DependencyProperty ClosedDisplayModeProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
};

struct WINRT_EBO AppBarButton :
    Windows::UI::Xaml::Controls::IAppBarButton,
    impl::base<AppBarButton, Windows::UI::Xaml::Controls::Button, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<AppBarButton, Windows::UI::Xaml::Controls::IAppBarButton3, Windows::UI::Xaml::Controls::IButton, Windows::UI::Xaml::Controls::IButtonWithFlyout, Windows::UI::Xaml::Controls::ICommandBarElement, Windows::UI::Xaml::Controls::ICommandBarElement2, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    AppBarButton(std::nullptr_t) noexcept {}
    AppBarButton();
    static Windows::UI::Xaml::DependencyProperty LabelProperty();
    static Windows::UI::Xaml::DependencyProperty IconProperty();
    static Windows::UI::Xaml::DependencyProperty IsCompactProperty();
    static Windows::UI::Xaml::DependencyProperty LabelPositionProperty();
    static Windows::UI::Xaml::DependencyProperty IsInOverflowProperty();
    static Windows::UI::Xaml::DependencyProperty DynamicOverflowOrderProperty();
};

struct WINRT_EBO AppBarSeparator :
    Windows::UI::Xaml::Controls::IAppBarSeparator,
    impl::base<AppBarSeparator, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<AppBarSeparator, Windows::UI::Xaml::Controls::ICommandBarElement, Windows::UI::Xaml::Controls::ICommandBarElement2, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    AppBarSeparator(std::nullptr_t) noexcept {}
    AppBarSeparator();
    static Windows::UI::Xaml::DependencyProperty IsCompactProperty();
    static Windows::UI::Xaml::DependencyProperty IsInOverflowProperty();
    static Windows::UI::Xaml::DependencyProperty DynamicOverflowOrderProperty();
};

struct WINRT_EBO AppBarToggleButton :
    Windows::UI::Xaml::Controls::IAppBarToggleButton,
    impl::base<AppBarToggleButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<AppBarToggleButton, Windows::UI::Xaml::Controls::IAppBarToggleButton3, Windows::UI::Xaml::Controls::ICommandBarElement, Windows::UI::Xaml::Controls::ICommandBarElement2, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    AppBarToggleButton(std::nullptr_t) noexcept {}
    AppBarToggleButton();
    static Windows::UI::Xaml::DependencyProperty LabelProperty();
    static Windows::UI::Xaml::DependencyProperty IconProperty();
    static Windows::UI::Xaml::DependencyProperty IsCompactProperty();
    static Windows::UI::Xaml::DependencyProperty LabelPositionProperty();
    static Windows::UI::Xaml::DependencyProperty IsInOverflowProperty();
    static Windows::UI::Xaml::DependencyProperty DynamicOverflowOrderProperty();
};

struct WINRT_EBO AutoSuggestBox :
    Windows::UI::Xaml::Controls::IAutoSuggestBox,
    impl::base<AutoSuggestBox, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<AutoSuggestBox, Windows::UI::Xaml::Controls::IAutoSuggestBox2, Windows::UI::Xaml::Controls::IAutoSuggestBox3, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    AutoSuggestBox(std::nullptr_t) noexcept {}
    AutoSuggestBox();
    static Windows::UI::Xaml::DependencyProperty MaxSuggestionListHeightProperty();
    static Windows::UI::Xaml::DependencyProperty IsSuggestionListOpenProperty();
    static Windows::UI::Xaml::DependencyProperty TextMemberPathProperty();
    static Windows::UI::Xaml::DependencyProperty TextProperty();
    static Windows::UI::Xaml::DependencyProperty UpdateTextOnSelectProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderTextProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty AutoMaximizeSuggestionAreaProperty();
    static Windows::UI::Xaml::DependencyProperty TextBoxStyleProperty();
    static Windows::UI::Xaml::DependencyProperty QueryIconProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
};

struct WINRT_EBO AutoSuggestBoxQuerySubmittedEventArgs :
    Windows::UI::Xaml::Controls::IAutoSuggestBoxQuerySubmittedEventArgs,
    impl::base<AutoSuggestBoxQuerySubmittedEventArgs, Windows::UI::Xaml::DependencyObject>,
    impl::require<AutoSuggestBoxQuerySubmittedEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    AutoSuggestBoxQuerySubmittedEventArgs(std::nullptr_t) noexcept {}
    AutoSuggestBoxQuerySubmittedEventArgs();
};

struct WINRT_EBO AutoSuggestBoxSuggestionChosenEventArgs :
    Windows::UI::Xaml::Controls::IAutoSuggestBoxSuggestionChosenEventArgs,
    impl::base<AutoSuggestBoxSuggestionChosenEventArgs, Windows::UI::Xaml::DependencyObject>,
    impl::require<AutoSuggestBoxSuggestionChosenEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    AutoSuggestBoxSuggestionChosenEventArgs(std::nullptr_t) noexcept {}
    AutoSuggestBoxSuggestionChosenEventArgs();
};

struct WINRT_EBO AutoSuggestBoxTextChangedEventArgs :
    Windows::UI::Xaml::Controls::IAutoSuggestBoxTextChangedEventArgs,
    impl::base<AutoSuggestBoxTextChangedEventArgs, Windows::UI::Xaml::DependencyObject>,
    impl::require<AutoSuggestBoxTextChangedEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    AutoSuggestBoxTextChangedEventArgs(std::nullptr_t) noexcept {}
    AutoSuggestBoxTextChangedEventArgs();
    static Windows::UI::Xaml::DependencyProperty ReasonProperty();
};

struct WINRT_EBO BackClickEventArgs :
    Windows::UI::Xaml::Controls::IBackClickEventArgs
{
    BackClickEventArgs(std::nullptr_t) noexcept {}
    BackClickEventArgs();
};

struct WINRT_EBO BitmapIcon :
    Windows::UI::Xaml::Controls::IBitmapIcon,
    impl::base<BitmapIcon, Windows::UI::Xaml::Controls::IconElement, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<BitmapIcon, Windows::UI::Xaml::Controls::IBitmapIcon2, Windows::UI::Xaml::Controls::IIconElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    BitmapIcon(std::nullptr_t) noexcept {}
    BitmapIcon();
    static Windows::UI::Xaml::DependencyProperty UriSourceProperty();
    static Windows::UI::Xaml::DependencyProperty ShowAsMonochromeProperty();
};

struct WINRT_EBO Border :
    Windows::UI::Xaml::Controls::IBorder,
    impl::base<Border, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Border, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Border(std::nullptr_t) noexcept {}
    Border();
    static Windows::UI::Xaml::DependencyProperty BorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty BorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty BackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty CornerRadiusProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
    static Windows::UI::Xaml::DependencyProperty ChildTransitionsProperty();
};

struct WINRT_EBO Button :
    Windows::UI::Xaml::Controls::IButton,
    impl::base<Button, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Button, Windows::UI::Xaml::Controls::IButtonWithFlyout, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Button(std::nullptr_t) noexcept {}
    Button();
    static Windows::UI::Xaml::DependencyProperty FlyoutProperty();
};

struct WINRT_EBO CalendarDatePicker :
    Windows::UI::Xaml::Controls::ICalendarDatePicker,
    impl::base<CalendarDatePicker, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CalendarDatePicker, Windows::UI::Xaml::Controls::ICalendarDatePicker2, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CalendarDatePicker(std::nullptr_t) noexcept {}
    CalendarDatePicker();
    static Windows::UI::Xaml::DependencyProperty DateProperty();
    static Windows::UI::Xaml::DependencyProperty IsCalendarOpenProperty();
    static Windows::UI::Xaml::DependencyProperty DateFormatProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderTextProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty CalendarViewStyleProperty();
    static Windows::UI::Xaml::DependencyProperty MinDateProperty();
    static Windows::UI::Xaml::DependencyProperty MaxDateProperty();
    static Windows::UI::Xaml::DependencyProperty IsTodayHighlightedProperty();
    static Windows::UI::Xaml::DependencyProperty DisplayModeProperty();
    static Windows::UI::Xaml::DependencyProperty FirstDayOfWeekProperty();
    static Windows::UI::Xaml::DependencyProperty DayOfWeekFormatProperty();
    static Windows::UI::Xaml::DependencyProperty CalendarIdentifierProperty();
    static Windows::UI::Xaml::DependencyProperty IsOutOfScopeEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsGroupLabelVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
};

struct WINRT_EBO CalendarDatePickerDateChangedEventArgs :
    Windows::UI::Xaml::Controls::ICalendarDatePickerDateChangedEventArgs
{
    CalendarDatePickerDateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CalendarView :
    Windows::UI::Xaml::Controls::ICalendarView,
    impl::base<CalendarView, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CalendarView, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CalendarView(std::nullptr_t) noexcept {}
    CalendarView();
    static Windows::UI::Xaml::DependencyProperty CalendarIdentifierProperty();
    static Windows::UI::Xaml::DependencyProperty DayOfWeekFormatProperty();
    static Windows::UI::Xaml::DependencyProperty IsGroupLabelVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty DisplayModeProperty();
    static Windows::UI::Xaml::DependencyProperty FirstDayOfWeekProperty();
    static Windows::UI::Xaml::DependencyProperty IsOutOfScopeEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsTodayHighlightedProperty();
    static Windows::UI::Xaml::DependencyProperty MaxDateProperty();
    static Windows::UI::Xaml::DependencyProperty MinDateProperty();
    static Windows::UI::Xaml::DependencyProperty NumberOfWeeksInViewProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedDatesProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionModeProperty();
    static Windows::UI::Xaml::DependencyProperty TemplateSettingsProperty();
    static Windows::UI::Xaml::DependencyProperty FocusBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedHoverBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedPressedBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty HoverBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty PressedBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty CalendarItemBorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty OutOfScopeBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty CalendarItemBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty PressedForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty TodayForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty BlackoutForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty OutOfScopeForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty CalendarItemForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty DayItemFontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty DayItemFontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty DayItemFontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty DayItemFontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty TodayFontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty FirstOfMonthLabelFontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty FirstOfMonthLabelFontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty FirstOfMonthLabelFontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty FirstOfMonthLabelFontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty MonthYearItemFontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty MonthYearItemFontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty MonthYearItemFontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty MonthYearItemFontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty FirstOfYearDecadeLabelFontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty FirstOfYearDecadeLabelFontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty FirstOfYearDecadeLabelFontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty FirstOfYearDecadeLabelFontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalDayItemAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalDayItemAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalFirstOfMonthLabelAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalFirstOfMonthLabelAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty CalendarItemBorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty CalendarViewDayItemStyleProperty();
};

struct WINRT_EBO CalendarViewDayItem :
    Windows::UI::Xaml::Controls::ICalendarViewDayItem,
    impl::base<CalendarViewDayItem, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CalendarViewDayItem, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CalendarViewDayItem(std::nullptr_t) noexcept {}
    CalendarViewDayItem();
    static Windows::UI::Xaml::DependencyProperty IsBlackoutProperty();
    static Windows::UI::Xaml::DependencyProperty DateProperty();
};

struct WINRT_EBO CalendarViewDayItemChangingEventArgs :
    Windows::UI::Xaml::Controls::ICalendarViewDayItemChangingEventArgs
{
    CalendarViewDayItemChangingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CalendarViewSelectedDatesChangedEventArgs :
    Windows::UI::Xaml::Controls::ICalendarViewSelectedDatesChangedEventArgs
{
    CalendarViewSelectedDatesChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CandidateWindowBoundsChangedEventArgs :
    Windows::UI::Xaml::Controls::ICandidateWindowBoundsChangedEventArgs
{
    CandidateWindowBoundsChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Canvas :
    Windows::UI::Xaml::Controls::ICanvas,
    impl::base<Canvas, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Canvas, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Canvas(std::nullptr_t) noexcept {}
    Canvas();
    static Windows::UI::Xaml::DependencyProperty LeftProperty();
    static double GetLeft(Windows::UI::Xaml::UIElement const& element);
    static void SetLeft(Windows::UI::Xaml::UIElement const& element, double length);
    static Windows::UI::Xaml::DependencyProperty TopProperty();
    static double GetTop(Windows::UI::Xaml::UIElement const& element);
    static void SetTop(Windows::UI::Xaml::UIElement const& element, double length);
    static Windows::UI::Xaml::DependencyProperty ZIndexProperty();
    static int32_t GetZIndex(Windows::UI::Xaml::UIElement const& element);
    static void SetZIndex(Windows::UI::Xaml::UIElement const& element, int32_t value);
};

struct WINRT_EBO CaptureElement :
    Windows::UI::Xaml::Controls::ICaptureElement,
    impl::base<CaptureElement, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CaptureElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CaptureElement(std::nullptr_t) noexcept {}
    CaptureElement();
    static Windows::UI::Xaml::DependencyProperty SourceProperty();
    static Windows::UI::Xaml::DependencyProperty StretchProperty();
};

struct WINRT_EBO CheckBox :
    Windows::UI::Xaml::Controls::ICheckBox,
    impl::base<CheckBox, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CheckBox, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CheckBox(std::nullptr_t) noexcept {}
    CheckBox();
};

struct WINRT_EBO ChoosingGroupHeaderContainerEventArgs :
    Windows::UI::Xaml::Controls::IChoosingGroupHeaderContainerEventArgs
{
    ChoosingGroupHeaderContainerEventArgs(std::nullptr_t) noexcept {}
    ChoosingGroupHeaderContainerEventArgs();
};

struct WINRT_EBO ChoosingItemContainerEventArgs :
    Windows::UI::Xaml::Controls::IChoosingItemContainerEventArgs
{
    ChoosingItemContainerEventArgs(std::nullptr_t) noexcept {}
    ChoosingItemContainerEventArgs();
};

struct WINRT_EBO CleanUpVirtualizedItemEventArgs :
    Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs,
    impl::base<CleanUpVirtualizedItemEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<CleanUpVirtualizedItemEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    CleanUpVirtualizedItemEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ColumnDefinition :
    Windows::UI::Xaml::Controls::IColumnDefinition,
    impl::base<ColumnDefinition, Windows::UI::Xaml::DependencyObject>,
    impl::require<ColumnDefinition, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ColumnDefinition(std::nullptr_t) noexcept {}
    ColumnDefinition();
    static Windows::UI::Xaml::DependencyProperty WidthProperty();
    static Windows::UI::Xaml::DependencyProperty MaxWidthProperty();
    static Windows::UI::Xaml::DependencyProperty MinWidthProperty();
};

struct WINRT_EBO ColumnDefinitionCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::ColumnDefinition>
{
    ColumnDefinitionCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ComboBox :
    Windows::UI::Xaml::Controls::IComboBox,
    impl::base<ComboBox, Windows::UI::Xaml::Controls::Primitives::Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ComboBox, Windows::UI::Xaml::Controls::IComboBox2, Windows::UI::Xaml::Controls::IComboBox3, Windows::UI::Xaml::Controls::IComboBox4, Windows::UI::Xaml::Controls::IComboBoxOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::Primitives::ISelector, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ComboBox(std::nullptr_t) noexcept {}
    ComboBox();
    static Windows::UI::Xaml::DependencyProperty IsDropDownOpenProperty();
    static Windows::UI::Xaml::DependencyProperty MaxDropDownHeightProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderTextProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextSearchEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionChangedTriggerProperty();
};

struct WINRT_EBO ComboBoxItem :
    Windows::UI::Xaml::Controls::IComboBoxItem,
    impl::base<ComboBoxItem, Windows::UI::Xaml::Controls::Primitives::SelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ComboBoxItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::ISelectorItem, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ComboBoxItem(std::nullptr_t) noexcept {}
    ComboBoxItem();
};

struct WINRT_EBO CommandBar :
    Windows::UI::Xaml::Controls::ICommandBar,
    impl::base<CommandBar, Windows::UI::Xaml::Controls::AppBar, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CommandBar, Windows::UI::Xaml::Controls::IAppBar, Windows::UI::Xaml::Controls::IAppBar2, Windows::UI::Xaml::Controls::IAppBar3, Windows::UI::Xaml::Controls::IAppBar4, Windows::UI::Xaml::Controls::IAppBarOverrides, Windows::UI::Xaml::Controls::IAppBarOverrides3, Windows::UI::Xaml::Controls::ICommandBar2, Windows::UI::Xaml::Controls::ICommandBar3, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CommandBar(std::nullptr_t) noexcept {}
    CommandBar();
    static Windows::UI::Xaml::DependencyProperty PrimaryCommandsProperty();
    static Windows::UI::Xaml::DependencyProperty SecondaryCommandsProperty();
    static Windows::UI::Xaml::DependencyProperty CommandBarOverflowPresenterStyleProperty();
    static Windows::UI::Xaml::DependencyProperty DefaultLabelPositionProperty();
    static Windows::UI::Xaml::DependencyProperty OverflowButtonVisibilityProperty();
    static Windows::UI::Xaml::DependencyProperty IsDynamicOverflowEnabledProperty();
};

struct WINRT_EBO CommandBarOverflowPresenter :
    Windows::UI::Xaml::Controls::ICommandBarOverflowPresenter,
    impl::base<CommandBarOverflowPresenter, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CommandBarOverflowPresenter, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    CommandBarOverflowPresenter(std::nullptr_t) noexcept {}
    CommandBarOverflowPresenter();
};

struct WINRT_EBO ContainerContentChangingEventArgs :
    Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs
{
    ContainerContentChangingEventArgs(std::nullptr_t) noexcept {}
    ContainerContentChangingEventArgs();
};

struct WINRT_EBO ContentControl :
    Windows::UI::Xaml::Controls::IContentControl,
    impl::base<ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ContentControl(std::nullptr_t) noexcept {}
    ContentControl();
    static Windows::UI::Xaml::DependencyProperty ContentProperty();
    static Windows::UI::Xaml::DependencyProperty ContentTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty ContentTemplateSelectorProperty();
    static Windows::UI::Xaml::DependencyProperty ContentTransitionsProperty();
};

struct WINRT_EBO ContentDialog :
    Windows::UI::Xaml::Controls::IContentDialog,
    impl::base<ContentDialog, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ContentDialog, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IContentDialog2, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ContentDialog(std::nullptr_t) noexcept {}
    ContentDialog();
    static Windows::UI::Xaml::DependencyProperty TitleProperty();
    static Windows::UI::Xaml::DependencyProperty TitleTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty FullSizeDesiredProperty();
    static Windows::UI::Xaml::DependencyProperty PrimaryButtonTextProperty();
    static Windows::UI::Xaml::DependencyProperty SecondaryButtonTextProperty();
    static Windows::UI::Xaml::DependencyProperty PrimaryButtonCommandProperty();
    static Windows::UI::Xaml::DependencyProperty SecondaryButtonCommandProperty();
    static Windows::UI::Xaml::DependencyProperty PrimaryButtonCommandParameterProperty();
    static Windows::UI::Xaml::DependencyProperty SecondaryButtonCommandParameterProperty();
    static Windows::UI::Xaml::DependencyProperty IsPrimaryButtonEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsSecondaryButtonEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty CloseButtonTextProperty();
    static Windows::UI::Xaml::DependencyProperty CloseButtonCommandProperty();
    static Windows::UI::Xaml::DependencyProperty CloseButtonCommandParameterProperty();
    static Windows::UI::Xaml::DependencyProperty PrimaryButtonStyleProperty();
    static Windows::UI::Xaml::DependencyProperty SecondaryButtonStyleProperty();
    static Windows::UI::Xaml::DependencyProperty CloseButtonStyleProperty();
    static Windows::UI::Xaml::DependencyProperty DefaultButtonProperty();
};

struct WINRT_EBO ContentDialogButtonClickDeferral :
    Windows::UI::Xaml::Controls::IContentDialogButtonClickDeferral
{
    ContentDialogButtonClickDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContentDialogButtonClickEventArgs :
    Windows::UI::Xaml::Controls::IContentDialogButtonClickEventArgs
{
    ContentDialogButtonClickEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContentDialogClosedEventArgs :
    Windows::UI::Xaml::Controls::IContentDialogClosedEventArgs
{
    ContentDialogClosedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContentDialogClosingDeferral :
    Windows::UI::Xaml::Controls::IContentDialogClosingDeferral
{
    ContentDialogClosingDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContentDialogClosingEventArgs :
    Windows::UI::Xaml::Controls::IContentDialogClosingEventArgs
{
    ContentDialogClosingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContentDialogOpenedEventArgs :
    Windows::UI::Xaml::Controls::IContentDialogOpenedEventArgs
{
    ContentDialogOpenedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContentPresenter :
    Windows::UI::Xaml::Controls::IContentPresenter,
    impl::base<ContentPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter2, Windows::UI::Xaml::Controls::IContentPresenter3, Windows::UI::Xaml::Controls::IContentPresenter4, Windows::UI::Xaml::Controls::IContentPresenterOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ContentPresenter(std::nullptr_t) noexcept {}
    ContentPresenter();
    static Windows::UI::Xaml::DependencyProperty ContentProperty();
    static Windows::UI::Xaml::DependencyProperty ContentTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty ContentTemplateSelectorProperty();
    static Windows::UI::Xaml::DependencyProperty ContentTransitionsProperty();
    static Windows::UI::Xaml::DependencyProperty FontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty FontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty FontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty FontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty FontStretchProperty();
    static Windows::UI::Xaml::DependencyProperty CharacterSpacingProperty();
    static Windows::UI::Xaml::DependencyProperty ForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty OpticalMarginAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty TextLineBoundsProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextScaleFactorEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty TextWrappingProperty();
    static Windows::UI::Xaml::DependencyProperty MaxLinesProperty();
    static Windows::UI::Xaml::DependencyProperty LineStackingStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty LineHeightProperty();
    static Windows::UI::Xaml::DependencyProperty BorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty BorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty CornerRadiusProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
    static Windows::UI::Xaml::DependencyProperty BackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalContentAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalContentAlignmentProperty();
};

struct WINRT_EBO ContextMenuEventArgs :
    Windows::UI::Xaml::Controls::IContextMenuEventArgs,
    impl::base<ContextMenuEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ContextMenuEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ContextMenuEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Control :
    Windows::UI::Xaml::Controls::IControl,
    impl::base<Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Control, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Control(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty FontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty FontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty FontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty FontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty FontStretchProperty();
    static Windows::UI::Xaml::DependencyProperty CharacterSpacingProperty();
    static Windows::UI::Xaml::DependencyProperty ForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty IsTabStopProperty();
    static Windows::UI::Xaml::DependencyProperty IsEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty TabIndexProperty();
    static Windows::UI::Xaml::DependencyProperty TabNavigationProperty();
    static Windows::UI::Xaml::DependencyProperty TemplateProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalContentAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalContentAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty BackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty BorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty BorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty DefaultStyleKeyProperty();
    static Windows::UI::Xaml::DependencyProperty FocusStateProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextScaleFactorEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty UseSystemFocusVisualsProperty();
    static Windows::UI::Xaml::DependencyProperty IsTemplateFocusTargetProperty();
    static bool GetIsTemplateFocusTarget(Windows::UI::Xaml::FrameworkElement const& element);
    static void SetIsTemplateFocusTarget(Windows::UI::Xaml::FrameworkElement const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty IsFocusEngagementEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsFocusEngagedProperty();
    static Windows::UI::Xaml::DependencyProperty RequiresPointerProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusLeftProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusRightProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusUpProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusDownProperty();
    static Windows::UI::Xaml::DependencyProperty ElementSoundModeProperty();
    static Windows::UI::Xaml::DependencyProperty DefaultStyleResourceUriProperty();
    static Windows::UI::Xaml::DependencyProperty IsTemplateKeyTipTargetProperty();
    static bool GetIsTemplateKeyTipTarget(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsTemplateKeyTipTarget(Windows::UI::Xaml::DependencyObject const& element, bool value);
};

struct WINRT_EBO ControlTemplate :
    Windows::UI::Xaml::Controls::IControlTemplate,
    impl::base<ControlTemplate, Windows::UI::Xaml::FrameworkTemplate, Windows::UI::Xaml::DependencyObject>,
    impl::require<ControlTemplate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkTemplate>
{
    ControlTemplate(std::nullptr_t) noexcept {}
    ControlTemplate();
};

struct WINRT_EBO DataTemplateSelector :
    Windows::UI::Xaml::Controls::IDataTemplateSelector,
    impl::require<DataTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelector2, Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides, Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides2>
{
    DataTemplateSelector(std::nullptr_t) noexcept {}
    DataTemplateSelector();
    using impl::consume_t<DataTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelector2>::SelectTemplate;
    using Windows::UI::Xaml::Controls::IDataTemplateSelector::SelectTemplate;
    using impl::consume_t<DataTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides>::SelectTemplateCore;
    using impl::consume_t<DataTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides2>::SelectTemplateCore;
};

struct WINRT_EBO DatePickedEventArgs :
    Windows::UI::Xaml::Controls::IDatePickedEventArgs,
    impl::base<DatePickedEventArgs, Windows::UI::Xaml::DependencyObject>,
    impl::require<DatePickedEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    DatePickedEventArgs(std::nullptr_t) noexcept {}
    DatePickedEventArgs();
};

struct WINRT_EBO DatePicker :
    Windows::UI::Xaml::Controls::IDatePicker,
    impl::base<DatePicker, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<DatePicker, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IDatePicker2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    DatePicker(std::nullptr_t) noexcept {}
    DatePicker();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty CalendarIdentifierProperty();
    static Windows::UI::Xaml::DependencyProperty DateProperty();
    static Windows::UI::Xaml::DependencyProperty DayVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty MonthVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty YearVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty DayFormatProperty();
    static Windows::UI::Xaml::DependencyProperty MonthFormatProperty();
    static Windows::UI::Xaml::DependencyProperty YearFormatProperty();
    static Windows::UI::Xaml::DependencyProperty MinYearProperty();
    static Windows::UI::Xaml::DependencyProperty MaxYearProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
};

struct WINRT_EBO DatePickerFlyout :
    Windows::UI::Xaml::Controls::IDatePickerFlyout,
    impl::base<DatePickerFlyout, Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<DatePickerFlyout, Windows::UI::Xaml::Controls::IDatePickerFlyout2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    DatePickerFlyout(std::nullptr_t) noexcept {}
    DatePickerFlyout();
    static Windows::UI::Xaml::DependencyProperty CalendarIdentifierProperty();
    static Windows::UI::Xaml::DependencyProperty DateProperty();
    static Windows::UI::Xaml::DependencyProperty DayVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty MonthVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty YearVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty MinYearProperty();
    static Windows::UI::Xaml::DependencyProperty MaxYearProperty();
    static Windows::UI::Xaml::DependencyProperty DayFormatProperty();
    static Windows::UI::Xaml::DependencyProperty MonthFormatProperty();
    static Windows::UI::Xaml::DependencyProperty YearFormatProperty();
};

struct WINRT_EBO DatePickerFlyoutItem :
    Windows::UI::Xaml::Controls::IDatePickerFlyoutItem,
    impl::base<DatePickerFlyoutItem, Windows::UI::Xaml::DependencyObject>,
    impl::require<DatePickerFlyoutItem, Windows::UI::Xaml::Data::ICustomPropertyProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    DatePickerFlyoutItem(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty PrimaryTextProperty();
    static Windows::UI::Xaml::DependencyProperty SecondaryTextProperty();
};

struct WINRT_EBO DatePickerFlyoutPresenter :
    Windows::UI::Xaml::Controls::IDatePickerFlyoutPresenter,
    impl::base<DatePickerFlyoutPresenter, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<DatePickerFlyoutPresenter, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    DatePickerFlyoutPresenter(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DatePickerValueChangedEventArgs :
    Windows::UI::Xaml::Controls::IDatePickerValueChangedEventArgs
{
    DatePickerValueChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DragItemsCompletedEventArgs :
    Windows::UI::Xaml::Controls::IDragItemsCompletedEventArgs
{
    DragItemsCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DragItemsStartingEventArgs :
    Windows::UI::Xaml::Controls::IDragItemsStartingEventArgs
{
    DragItemsStartingEventArgs(std::nullptr_t) noexcept {}
    DragItemsStartingEventArgs();
};

struct WINRT_EBO DynamicOverflowItemsChangingEventArgs :
    Windows::UI::Xaml::Controls::IDynamicOverflowItemsChangingEventArgs
{
    DynamicOverflowItemsChangingEventArgs(std::nullptr_t) noexcept {}
    DynamicOverflowItemsChangingEventArgs();
};

struct WINRT_EBO FlipView :
    Windows::UI::Xaml::Controls::IFlipView,
    impl::base<FlipView, Windows::UI::Xaml::Controls::Primitives::Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<FlipView, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IFlipView2, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::Primitives::ISelector, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    FlipView(std::nullptr_t) noexcept {}
    FlipView();
    static Windows::UI::Xaml::DependencyProperty UseTouchAnimationsForAllNavigationProperty();
};

struct WINRT_EBO FlipViewItem :
    Windows::UI::Xaml::Controls::IFlipViewItem,
    impl::base<FlipViewItem, Windows::UI::Xaml::Controls::Primitives::SelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<FlipViewItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::ISelectorItem, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    FlipViewItem(std::nullptr_t) noexcept {}
    FlipViewItem();
};

struct WINRT_EBO Flyout :
    Windows::UI::Xaml::Controls::IFlyout,
    impl::base<Flyout, Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<Flyout, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Flyout(std::nullptr_t) noexcept {}
    Flyout();
    static Windows::UI::Xaml::DependencyProperty ContentProperty();
    static Windows::UI::Xaml::DependencyProperty FlyoutPresenterStyleProperty();
};

struct WINRT_EBO FlyoutPresenter :
    Windows::UI::Xaml::Controls::IFlyoutPresenter,
    impl::base<FlyoutPresenter, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<FlyoutPresenter, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    FlyoutPresenter(std::nullptr_t) noexcept {}
    FlyoutPresenter();
};

struct WINRT_EBO FocusDisengagedEventArgs :
    Windows::UI::Xaml::Controls::IFocusDisengagedEventArgs,
    impl::base<FocusDisengagedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<FocusDisengagedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    FocusDisengagedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FocusEngagedEventArgs :
    Windows::UI::Xaml::Controls::IFocusEngagedEventArgs,
    impl::base<FocusEngagedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<FocusEngagedEventArgs, Windows::UI::Xaml::Controls::IFocusEngagedEventArgs2, Windows::UI::Xaml::IRoutedEventArgs>
{
    FocusEngagedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FontIcon :
    Windows::UI::Xaml::Controls::IFontIcon,
    impl::base<FontIcon, Windows::UI::Xaml::Controls::IconElement, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<FontIcon, Windows::UI::Xaml::Controls::IFontIcon2, Windows::UI::Xaml::Controls::IFontIcon3, Windows::UI::Xaml::Controls::IIconElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    FontIcon(std::nullptr_t) noexcept {}
    FontIcon();
    static Windows::UI::Xaml::DependencyProperty GlyphProperty();
    static Windows::UI::Xaml::DependencyProperty FontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty FontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty FontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty FontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextScaleFactorEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty MirroredWhenRightToLeftProperty();
};

struct WINRT_EBO Frame :
    Windows::UI::Xaml::Controls::IFrame,
    impl::base<Frame, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Frame, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IFrame2, Windows::UI::Xaml::Controls::IFrame3, Windows::UI::Xaml::Controls::IFrame4, Windows::UI::Xaml::Controls::INavigate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Frame(std::nullptr_t) noexcept {}
    Frame();
    using impl::consume_t<Frame, Windows::UI::Xaml::Controls::IFrame3>::GoBack;
    using Windows::UI::Xaml::Controls::IFrame::GoBack;
    using impl::consume_t<Frame, Windows::UI::Xaml::Controls::IFrame2>::Navigate;
    using impl::consume_t<Frame, Windows::UI::Xaml::Controls::INavigate>::Navigate;
    using Windows::UI::Xaml::Controls::IFrame::Navigate;
    using impl::consume_t<Frame, Windows::UI::Xaml::Controls::IFrame4>::SetNavigationState;
    using Windows::UI::Xaml::Controls::IFrame::SetNavigationState;
    static Windows::UI::Xaml::DependencyProperty CacheSizeProperty();
    static Windows::UI::Xaml::DependencyProperty CanGoBackProperty();
    static Windows::UI::Xaml::DependencyProperty CanGoForwardProperty();
    static Windows::UI::Xaml::DependencyProperty CurrentSourcePageTypeProperty();
    static Windows::UI::Xaml::DependencyProperty SourcePageTypeProperty();
    static Windows::UI::Xaml::DependencyProperty BackStackDepthProperty();
    static Windows::UI::Xaml::DependencyProperty BackStackProperty();
    static Windows::UI::Xaml::DependencyProperty ForwardStackProperty();
};

struct WINRT_EBO Grid :
    Windows::UI::Xaml::Controls::IGrid,
    impl::base<Grid, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Grid, Windows::UI::Xaml::Controls::IGrid2, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Grid(std::nullptr_t) noexcept {}
    Grid();
    static Windows::UI::Xaml::DependencyProperty RowProperty();
    static int32_t GetRow(Windows::UI::Xaml::FrameworkElement const& element);
    static void SetRow(Windows::UI::Xaml::FrameworkElement const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty ColumnProperty();
    static int32_t GetColumn(Windows::UI::Xaml::FrameworkElement const& element);
    static void SetColumn(Windows::UI::Xaml::FrameworkElement const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty RowSpanProperty();
    static int32_t GetRowSpan(Windows::UI::Xaml::FrameworkElement const& element);
    static void SetRowSpan(Windows::UI::Xaml::FrameworkElement const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty ColumnSpanProperty();
    static int32_t GetColumnSpan(Windows::UI::Xaml::FrameworkElement const& element);
    static void SetColumnSpan(Windows::UI::Xaml::FrameworkElement const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty BorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty BorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty CornerRadiusProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
};

struct WINRT_EBO GridView :
    Windows::UI::Xaml::Controls::IGridView,
    impl::base<GridView, Windows::UI::Xaml::Controls::ListViewBase, Windows::UI::Xaml::Controls::Primitives::Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<GridView, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::IListViewBase, Windows::UI::Xaml::Controls::IListViewBase2, Windows::UI::Xaml::Controls::IListViewBase3, Windows::UI::Xaml::Controls::IListViewBase4, Windows::UI::Xaml::Controls::IListViewBase5, Windows::UI::Xaml::Controls::IListViewBase6, Windows::UI::Xaml::Controls::ISemanticZoomInformation, Windows::UI::Xaml::Controls::Primitives::ISelector, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    GridView(std::nullptr_t) noexcept {}
    GridView();
};

struct WINRT_EBO GridViewHeaderItem :
    Windows::UI::Xaml::Controls::IGridViewHeaderItem,
    impl::base<GridViewHeaderItem, Windows::UI::Xaml::Controls::ListViewBaseHeaderItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<GridViewHeaderItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IListViewBaseHeaderItem, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    GridViewHeaderItem(std::nullptr_t) noexcept {}
    GridViewHeaderItem();
};

struct WINRT_EBO GridViewItem :
    Windows::UI::Xaml::Controls::IGridViewItem,
    impl::base<GridViewItem, Windows::UI::Xaml::Controls::Primitives::SelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<GridViewItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::ISelectorItem, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    GridViewItem(std::nullptr_t) noexcept {}
    GridViewItem();
};

struct WINRT_EBO GroupItem :
    Windows::UI::Xaml::Controls::IGroupItem,
    impl::base<GroupItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<GroupItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    GroupItem(std::nullptr_t) noexcept {}
    GroupItem();
};

struct WINRT_EBO GroupStyle :
    Windows::UI::Xaml::Controls::IGroupStyle,
    impl::require<GroupStyle, Windows::UI::Xaml::Controls::IGroupStyle2, Windows::UI::Xaml::Data::INotifyPropertyChanged>
{
    GroupStyle(std::nullptr_t) noexcept {}
    GroupStyle();
};

struct WINRT_EBO GroupStyleSelector :
    Windows::UI::Xaml::Controls::IGroupStyleSelector,
    impl::require<GroupStyleSelector, Windows::UI::Xaml::Controls::IGroupStyleSelectorOverrides>
{
    GroupStyleSelector(std::nullptr_t) noexcept {}
    GroupStyleSelector();
};

struct WINRT_EBO Hub :
    Windows::UI::Xaml::Controls::IHub,
    impl::base<Hub, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Hub, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::ISemanticZoomInformation, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Hub(std::nullptr_t) noexcept {}
    Hub();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty DefaultSectionIndexProperty();
    static Windows::UI::Xaml::DependencyProperty SemanticZoomOwnerProperty();
    static Windows::UI::Xaml::DependencyProperty IsActiveViewProperty();
    static Windows::UI::Xaml::DependencyProperty IsZoomedInViewProperty();
};

struct WINRT_EBO HubSection :
    Windows::UI::Xaml::Controls::IHubSection,
    impl::base<HubSection, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<HubSection, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    HubSection(std::nullptr_t) noexcept {}
    HubSection();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty ContentTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty IsHeaderInteractiveProperty();
};

struct WINRT_EBO HubSectionCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::HubSection>
{
    HubSectionCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HubSectionHeaderClickEventArgs :
    Windows::UI::Xaml::Controls::IHubSectionHeaderClickEventArgs
{
    HubSectionHeaderClickEventArgs(std::nullptr_t) noexcept {}
    HubSectionHeaderClickEventArgs();
};

struct WINRT_EBO HyperlinkButton :
    Windows::UI::Xaml::Controls::IHyperlinkButton,
    impl::base<HyperlinkButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<HyperlinkButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    HyperlinkButton(std::nullptr_t) noexcept {}
    HyperlinkButton();
    static Windows::UI::Xaml::DependencyProperty NavigateUriProperty();
};

struct WINRT_EBO IconElement :
    Windows::UI::Xaml::Controls::IIconElement,
    impl::base<IconElement, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<IconElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    IconElement(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty ForegroundProperty();
};

struct WINRT_EBO Image :
    Windows::UI::Xaml::Controls::IImage,
    impl::base<Image, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Image, Windows::UI::Xaml::Controls::IImage2, Windows::UI::Xaml::Controls::IImage3, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Image(std::nullptr_t) noexcept {}
    Image();
    static Windows::UI::Xaml::DependencyProperty SourceProperty();
    static Windows::UI::Xaml::DependencyProperty StretchProperty();
    static Windows::UI::Xaml::DependencyProperty NineGridProperty();
    [[deprecated("PlayToSource may be altered or unavailable for releases after Windows 10.0. Instead, use GetAsCastingSource.")]] static Windows::UI::Xaml::DependencyProperty PlayToSourceProperty();
};

struct WINRT_EBO InkCanvas :
    Windows::UI::Xaml::Controls::IInkCanvas,
    impl::base<InkCanvas, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkCanvas, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkCanvas(std::nullptr_t) noexcept {}
    InkCanvas();
};

struct WINRT_EBO InkToolbar :
    Windows::UI::Xaml::Controls::IInkToolbar,
    impl::base<InkToolbar, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbar, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbar2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbar(std::nullptr_t) noexcept {}
    InkToolbar();
    static Windows::UI::Xaml::DependencyProperty InitialControlsProperty();
    static Windows::UI::Xaml::DependencyProperty ChildrenProperty();
    static Windows::UI::Xaml::DependencyProperty ActiveToolProperty();
    static Windows::UI::Xaml::DependencyProperty InkDrawingAttributesProperty();
    static Windows::UI::Xaml::DependencyProperty IsRulerButtonCheckedProperty();
    static Windows::UI::Xaml::DependencyProperty TargetInkCanvasProperty();
    static Windows::UI::Xaml::DependencyProperty IsStencilButtonCheckedProperty();
    static Windows::UI::Xaml::DependencyProperty ButtonFlyoutPlacementProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
};

struct WINRT_EBO InkToolbarBallpointPenButton :
    Windows::UI::Xaml::Controls::IInkToolbarBallpointPenButton,
    impl::base<InkToolbarBallpointPenButton, Windows::UI::Xaml::Controls::InkToolbarPenButton, Windows::UI::Xaml::Controls::InkToolbarToolButton, Windows::UI::Xaml::Controls::RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarBallpointPenButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarPenButton, Windows::UI::Xaml::Controls::IInkToolbarToolButton, Windows::UI::Xaml::Controls::IRadioButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarBallpointPenButton(std::nullptr_t) noexcept {}
    InkToolbarBallpointPenButton();
};

struct WINRT_EBO InkToolbarCustomPen :
    Windows::UI::Xaml::Controls::IInkToolbarCustomPen,
    impl::base<InkToolbarCustomPen, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarCustomPen, Windows::UI::Xaml::Controls::IInkToolbarCustomPenOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    InkToolbarCustomPen(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkToolbarCustomPenButton :
    Windows::UI::Xaml::Controls::IInkToolbarCustomPenButton,
    impl::base<InkToolbarCustomPenButton, Windows::UI::Xaml::Controls::InkToolbarPenButton, Windows::UI::Xaml::Controls::InkToolbarToolButton, Windows::UI::Xaml::Controls::RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarCustomPenButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarPenButton, Windows::UI::Xaml::Controls::IInkToolbarToolButton, Windows::UI::Xaml::Controls::IRadioButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarCustomPenButton(std::nullptr_t) noexcept {}
    InkToolbarCustomPenButton();
    static Windows::UI::Xaml::DependencyProperty CustomPenProperty();
    static Windows::UI::Xaml::DependencyProperty ConfigurationContentProperty();
};

struct WINRT_EBO InkToolbarCustomToggleButton :
    Windows::UI::Xaml::Controls::IInkToolbarCustomToggleButton,
    impl::base<InkToolbarCustomToggleButton, Windows::UI::Xaml::Controls::InkToolbarToggleButton, Windows::UI::Xaml::Controls::CheckBox, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarCustomToggleButton, Windows::UI::Xaml::Controls::ICheckBox, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarToggleButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarCustomToggleButton(std::nullptr_t) noexcept {}
    InkToolbarCustomToggleButton();
};

struct WINRT_EBO InkToolbarCustomToolButton :
    Windows::UI::Xaml::Controls::IInkToolbarCustomToolButton,
    impl::base<InkToolbarCustomToolButton, Windows::UI::Xaml::Controls::InkToolbarToolButton, Windows::UI::Xaml::Controls::RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarCustomToolButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarToolButton, Windows::UI::Xaml::Controls::IRadioButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarCustomToolButton(std::nullptr_t) noexcept {}
    InkToolbarCustomToolButton();
    static Windows::UI::Xaml::DependencyProperty ConfigurationContentProperty();
};

struct WINRT_EBO InkToolbarEraserButton :
    Windows::UI::Xaml::Controls::IInkToolbarEraserButton,
    impl::base<InkToolbarEraserButton, Windows::UI::Xaml::Controls::InkToolbarToolButton, Windows::UI::Xaml::Controls::RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarEraserButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarEraserButton2, Windows::UI::Xaml::Controls::IInkToolbarToolButton, Windows::UI::Xaml::Controls::IRadioButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarEraserButton(std::nullptr_t) noexcept {}
    InkToolbarEraserButton();
    static Windows::UI::Xaml::DependencyProperty IsClearAllVisibleProperty();
};

struct WINRT_EBO InkToolbarFlyoutItem :
    Windows::UI::Xaml::Controls::IInkToolbarFlyoutItem,
    impl::base<InkToolbarFlyoutItem, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarFlyoutItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarFlyoutItem(std::nullptr_t) noexcept {}
    InkToolbarFlyoutItem();
    static Windows::UI::Xaml::DependencyProperty KindProperty();
    static Windows::UI::Xaml::DependencyProperty IsCheckedProperty();
};

struct WINRT_EBO InkToolbarHighlighterButton :
    Windows::UI::Xaml::Controls::IInkToolbarHighlighterButton,
    impl::base<InkToolbarHighlighterButton, Windows::UI::Xaml::Controls::InkToolbarPenButton, Windows::UI::Xaml::Controls::InkToolbarToolButton, Windows::UI::Xaml::Controls::RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarHighlighterButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarPenButton, Windows::UI::Xaml::Controls::IInkToolbarToolButton, Windows::UI::Xaml::Controls::IRadioButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarHighlighterButton(std::nullptr_t) noexcept {}
    InkToolbarHighlighterButton();
};

struct WINRT_EBO InkToolbarIsStencilButtonCheckedChangedEventArgs :
    Windows::UI::Xaml::Controls::IInkToolbarIsStencilButtonCheckedChangedEventArgs
{
    InkToolbarIsStencilButtonCheckedChangedEventArgs(std::nullptr_t) noexcept {}
    InkToolbarIsStencilButtonCheckedChangedEventArgs();
};

struct WINRT_EBO InkToolbarMenuButton :
    Windows::UI::Xaml::Controls::IInkToolbarMenuButton,
    impl::base<InkToolbarMenuButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarMenuButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarMenuButton(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty IsExtensionGlyphShownProperty();
};

struct WINRT_EBO InkToolbarPenButton :
    Windows::UI::Xaml::Controls::IInkToolbarPenButton,
    impl::base<InkToolbarPenButton, Windows::UI::Xaml::Controls::InkToolbarToolButton, Windows::UI::Xaml::Controls::RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarPenButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarToolButton, Windows::UI::Xaml::Controls::IRadioButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarPenButton(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty PaletteProperty();
    static Windows::UI::Xaml::DependencyProperty MinStrokeWidthProperty();
    static Windows::UI::Xaml::DependencyProperty MaxStrokeWidthProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedBrushProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedBrushIndexProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedStrokeWidthProperty();
};

struct WINRT_EBO InkToolbarPenConfigurationControl :
    Windows::UI::Xaml::Controls::IInkToolbarPenConfigurationControl,
    impl::base<InkToolbarPenConfigurationControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarPenConfigurationControl, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarPenConfigurationControl(std::nullptr_t) noexcept {}
    InkToolbarPenConfigurationControl();
    static Windows::UI::Xaml::DependencyProperty PenButtonProperty();
};

struct WINRT_EBO InkToolbarPencilButton :
    Windows::UI::Xaml::Controls::IInkToolbarPencilButton,
    impl::base<InkToolbarPencilButton, Windows::UI::Xaml::Controls::InkToolbarPenButton, Windows::UI::Xaml::Controls::InkToolbarToolButton, Windows::UI::Xaml::Controls::RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarPencilButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarPenButton, Windows::UI::Xaml::Controls::IInkToolbarToolButton, Windows::UI::Xaml::Controls::IRadioButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarPencilButton(std::nullptr_t) noexcept {}
    InkToolbarPencilButton();
};

struct WINRT_EBO [[deprecated("InkToolbarRulerButton is deprecated starting from Windows 10 Creators Update. Please use InkToolbarStencilButton going forward. For more info, see MSDN.")]] InkToolbarRulerButton :
    Windows::UI::Xaml::Controls::IInkToolbarRulerButton,
    impl::base<InkToolbarRulerButton, Windows::UI::Xaml::Controls::InkToolbarToggleButton, Windows::UI::Xaml::Controls::CheckBox, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarRulerButton, Windows::UI::Xaml::Controls::ICheckBox, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarToggleButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarRulerButton(std::nullptr_t) noexcept {}
    [[deprecated("InkToolbarRulerButton is deprecated starting from Windows 10 Creators Update. Please use InkToolbarStencilButton going forward. For more info, see MSDN.")]] InkToolbarRulerButton();
    [[deprecated("InkToolbarRulerButton is deprecated starting from Windows 10 Creators Update. Please use InkToolbarStencilButton going forward. For more info, see MSDN.")]] static Windows::UI::Xaml::DependencyProperty RulerProperty();
};

struct WINRT_EBO InkToolbarStencilButton :
    Windows::UI::Xaml::Controls::IInkToolbarStencilButton,
    impl::base<InkToolbarStencilButton, Windows::UI::Xaml::Controls::InkToolbarMenuButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarStencilButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IInkToolbarMenuButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarStencilButton(std::nullptr_t) noexcept {}
    InkToolbarStencilButton();
    static Windows::UI::Xaml::DependencyProperty RulerProperty();
    static Windows::UI::Xaml::DependencyProperty ProtractorProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedStencilProperty();
    static Windows::UI::Xaml::DependencyProperty IsRulerItemVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsProtractorItemVisibleProperty();
};

struct WINRT_EBO InkToolbarToggleButton :
    Windows::UI::Xaml::Controls::IInkToolbarToggleButton,
    impl::base<InkToolbarToggleButton, Windows::UI::Xaml::Controls::CheckBox, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarToggleButton, Windows::UI::Xaml::Controls::ICheckBox, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarToggleButton(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkToolbarToolButton :
    Windows::UI::Xaml::Controls::IInkToolbarToolButton,
    impl::base<InkToolbarToolButton, Windows::UI::Xaml::Controls::RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InkToolbarToolButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IRadioButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    InkToolbarToolButton(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty IsExtensionGlyphShownProperty();
};

struct WINRT_EBO ItemClickEventArgs :
    Windows::UI::Xaml::Controls::IItemClickEventArgs,
    impl::base<ItemClickEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ItemClickEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ItemClickEventArgs(std::nullptr_t) noexcept {}
    ItemClickEventArgs();
};

struct WINRT_EBO ItemCollection :
    Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable>
{
    ItemCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ItemContainerGenerator :
    Windows::UI::Xaml::Controls::IItemContainerGenerator
{
    ItemContainerGenerator(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ItemsControl :
    Windows::UI::Xaml::Controls::IItemsControl,
    impl::base<ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ItemsControl, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ItemsControl(std::nullptr_t) noexcept {}
    ItemsControl();
    static Windows::UI::Xaml::DependencyProperty ItemsSourceProperty();
    static Windows::UI::Xaml::DependencyProperty ItemTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty ItemTemplateSelectorProperty();
    static Windows::UI::Xaml::DependencyProperty ItemsPanelProperty();
    static Windows::UI::Xaml::DependencyProperty DisplayMemberPathProperty();
    static Windows::UI::Xaml::DependencyProperty ItemContainerStyleProperty();
    static Windows::UI::Xaml::DependencyProperty ItemContainerStyleSelectorProperty();
    static Windows::UI::Xaml::DependencyProperty ItemContainerTransitionsProperty();
    static Windows::UI::Xaml::DependencyProperty GroupStyleSelectorProperty();
    static Windows::UI::Xaml::DependencyProperty IsGroupingProperty();
    static Windows::UI::Xaml::Controls::ItemsControl GetItemsOwner(Windows::UI::Xaml::DependencyObject const& element);
    static Windows::UI::Xaml::Controls::ItemsControl ItemsControlFromItemContainer(Windows::UI::Xaml::DependencyObject const& container);
};

struct WINRT_EBO ItemsPanelTemplate :
    Windows::UI::Xaml::Controls::IItemsPanelTemplate,
    impl::base<ItemsPanelTemplate, Windows::UI::Xaml::FrameworkTemplate, Windows::UI::Xaml::DependencyObject>,
    impl::require<ItemsPanelTemplate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkTemplate>
{
    ItemsPanelTemplate(std::nullptr_t) noexcept {}
    ItemsPanelTemplate();
};

struct WINRT_EBO ItemsPickedEventArgs :
    Windows::UI::Xaml::Controls::IItemsPickedEventArgs,
    impl::base<ItemsPickedEventArgs, Windows::UI::Xaml::DependencyObject>,
    impl::require<ItemsPickedEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ItemsPickedEventArgs(std::nullptr_t) noexcept {}
    ItemsPickedEventArgs();
};

struct WINRT_EBO ItemsPresenter :
    Windows::UI::Xaml::Controls::IItemsPresenter,
    impl::base<ItemsPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ItemsPresenter, Windows::UI::Xaml::Controls::IItemsPresenter2, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ItemsPresenter(std::nullptr_t) noexcept {}
    ItemsPresenter();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTransitionsProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
    static Windows::UI::Xaml::DependencyProperty FooterProperty();
    static Windows::UI::Xaml::DependencyProperty FooterTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty FooterTransitionsProperty();
};

struct WINRT_EBO ItemsStackPanel :
    Windows::UI::Xaml::Controls::IItemsStackPanel,
    impl::base<ItemsStackPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ItemsStackPanel, Windows::UI::Xaml::Controls::IItemsStackPanel2, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ItemsStackPanel(std::nullptr_t) noexcept {}
    ItemsStackPanel();
    static Windows::UI::Xaml::DependencyProperty GroupPaddingProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty GroupHeaderPlacementProperty();
    static Windows::UI::Xaml::DependencyProperty CacheLengthProperty();
    static Windows::UI::Xaml::DependencyProperty AreStickyGroupHeadersEnabledProperty();
};

struct WINRT_EBO ItemsWrapGrid :
    Windows::UI::Xaml::Controls::IItemsWrapGrid,
    impl::base<ItemsWrapGrid, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ItemsWrapGrid, Windows::UI::Xaml::Controls::IItemsWrapGrid2, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ItemsWrapGrid(std::nullptr_t) noexcept {}
    ItemsWrapGrid();
    static Windows::UI::Xaml::DependencyProperty GroupPaddingProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty MaximumRowsOrColumnsProperty();
    static Windows::UI::Xaml::DependencyProperty ItemWidthProperty();
    static Windows::UI::Xaml::DependencyProperty ItemHeightProperty();
    static Windows::UI::Xaml::DependencyProperty GroupHeaderPlacementProperty();
    static Windows::UI::Xaml::DependencyProperty CacheLengthProperty();
    static Windows::UI::Xaml::DependencyProperty AreStickyGroupHeadersEnabledProperty();
};

struct WINRT_EBO ListBox :
    Windows::UI::Xaml::Controls::IListBox,
    impl::base<ListBox, Windows::UI::Xaml::Controls::Primitives::Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListBox, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::IListBox2, Windows::UI::Xaml::Controls::Primitives::ISelector, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListBox(std::nullptr_t) noexcept {}
    ListBox();
    static Windows::UI::Xaml::DependencyProperty SelectionModeProperty();
    static Windows::UI::Xaml::DependencyProperty SingleSelectionFollowsFocusProperty();
};

struct WINRT_EBO ListBoxItem :
    Windows::UI::Xaml::Controls::IListBoxItem,
    impl::base<ListBoxItem, Windows::UI::Xaml::Controls::Primitives::SelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListBoxItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::ISelectorItem, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListBoxItem(std::nullptr_t) noexcept {}
    ListBoxItem();
};

struct WINRT_EBO ListPickerFlyout :
    Windows::UI::Xaml::Controls::IListPickerFlyout,
    impl::base<ListPickerFlyout, Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListPickerFlyout, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ListPickerFlyout(std::nullptr_t) noexcept {}
    ListPickerFlyout();
    static Windows::UI::Xaml::DependencyProperty ItemsSourceProperty();
    static Windows::UI::Xaml::DependencyProperty ItemTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty DisplayMemberPathProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionModeProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedIndexProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedItemProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedValueProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedValuePathProperty();
};

struct WINRT_EBO ListPickerFlyoutPresenter :
    Windows::UI::Xaml::Controls::IListPickerFlyoutPresenter,
    impl::base<ListPickerFlyoutPresenter, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListPickerFlyoutPresenter, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListPickerFlyoutPresenter(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ListView :
    Windows::UI::Xaml::Controls::IListView,
    impl::base<ListView, Windows::UI::Xaml::Controls::ListViewBase, Windows::UI::Xaml::Controls::Primitives::Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListView, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::IListViewBase, Windows::UI::Xaml::Controls::IListViewBase2, Windows::UI::Xaml::Controls::IListViewBase3, Windows::UI::Xaml::Controls::IListViewBase4, Windows::UI::Xaml::Controls::IListViewBase5, Windows::UI::Xaml::Controls::IListViewBase6, Windows::UI::Xaml::Controls::ISemanticZoomInformation, Windows::UI::Xaml::Controls::Primitives::ISelector, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListView(std::nullptr_t) noexcept {}
    ListView();
};

struct WINRT_EBO ListViewBase :
    Windows::UI::Xaml::Controls::IListViewBase,
    impl::base<ListViewBase, Windows::UI::Xaml::Controls::Primitives::Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListViewBase, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::IListViewBase2, Windows::UI::Xaml::Controls::IListViewBase3, Windows::UI::Xaml::Controls::IListViewBase4, Windows::UI::Xaml::Controls::IListViewBase5, Windows::UI::Xaml::Controls::IListViewBase6, Windows::UI::Xaml::Controls::ISemanticZoomInformation, Windows::UI::Xaml::Controls::Primitives::ISelector, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListViewBase(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty SelectionModeProperty();
    static Windows::UI::Xaml::DependencyProperty IsSwipeEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty CanDragItemsProperty();
    static Windows::UI::Xaml::DependencyProperty CanReorderItemsProperty();
    static Windows::UI::Xaml::DependencyProperty IsItemClickEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty DataFetchSizeProperty();
    static Windows::UI::Xaml::DependencyProperty IncrementalLoadingThresholdProperty();
    static Windows::UI::Xaml::DependencyProperty IncrementalLoadingTriggerProperty();
    static Windows::UI::Xaml::DependencyProperty SemanticZoomOwnerProperty();
    static Windows::UI::Xaml::DependencyProperty IsActiveViewProperty();
    static Windows::UI::Xaml::DependencyProperty IsZoomedInViewProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTransitionsProperty();
    static Windows::UI::Xaml::DependencyProperty ShowsScrollingPlaceholdersProperty();
    static Windows::UI::Xaml::DependencyProperty FooterProperty();
    static Windows::UI::Xaml::DependencyProperty FooterTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty FooterTransitionsProperty();
    static Windows::UI::Xaml::DependencyProperty ReorderModeProperty();
    static Windows::UI::Xaml::DependencyProperty IsMultiSelectCheckBoxEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty SingleSelectionFollowsFocusProperty();
};

struct WINRT_EBO ListViewBaseHeaderItem :
    Windows::UI::Xaml::Controls::IListViewBaseHeaderItem,
    impl::base<ListViewBaseHeaderItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListViewBaseHeaderItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListViewBaseHeaderItem(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ListViewHeaderItem :
    Windows::UI::Xaml::Controls::IListViewHeaderItem,
    impl::base<ListViewHeaderItem, Windows::UI::Xaml::Controls::ListViewBaseHeaderItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListViewHeaderItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IListViewBaseHeaderItem, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListViewHeaderItem(std::nullptr_t) noexcept {}
    ListViewHeaderItem();
};

struct WINRT_EBO ListViewItem :
    Windows::UI::Xaml::Controls::IListViewItem,
    impl::base<ListViewItem, Windows::UI::Xaml::Controls::Primitives::SelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ListViewItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::ISelectorItem, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ListViewItem(std::nullptr_t) noexcept {}
    ListViewItem();
};

struct WINRT_EBO ListViewPersistenceHelper :
    Windows::UI::Xaml::Controls::IListViewPersistenceHelper
{
    ListViewPersistenceHelper(std::nullptr_t) noexcept {}
    static hstring GetRelativeScrollPosition(Windows::UI::Xaml::Controls::ListViewBase const& listViewBase, Windows::UI::Xaml::Controls::ListViewItemToKeyHandler const& itemToKeyHandler);
    static Windows::Foundation::IAsyncAction SetRelativeScrollPositionAsync(Windows::UI::Xaml::Controls::ListViewBase const& listViewBase, param::hstring const& relativeScrollPosition, Windows::UI::Xaml::Controls::ListViewKeyToItemHandler const& keyToItemHandler);
};

struct WINRT_EBO MediaElement :
    Windows::UI::Xaml::Controls::IMediaElement,
    impl::base<MediaElement, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MediaElement, Windows::UI::Xaml::Controls::IMediaElement2, Windows::UI::Xaml::Controls::IMediaElement3, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MediaElement(std::nullptr_t) noexcept {}
    MediaElement();
    static Windows::UI::Xaml::DependencyProperty PosterSourceProperty();
    static Windows::UI::Xaml::DependencyProperty SourceProperty();
    static Windows::UI::Xaml::DependencyProperty IsMutedProperty();
    static Windows::UI::Xaml::DependencyProperty IsAudioOnlyProperty();
    static Windows::UI::Xaml::DependencyProperty AutoPlayProperty();
    static Windows::UI::Xaml::DependencyProperty VolumeProperty();
    static Windows::UI::Xaml::DependencyProperty BalanceProperty();
    static Windows::UI::Xaml::DependencyProperty NaturalVideoHeightProperty();
    static Windows::UI::Xaml::DependencyProperty NaturalVideoWidthProperty();
    static Windows::UI::Xaml::DependencyProperty NaturalDurationProperty();
    static Windows::UI::Xaml::DependencyProperty PositionProperty();
    static Windows::UI::Xaml::DependencyProperty DownloadProgressProperty();
    static Windows::UI::Xaml::DependencyProperty BufferingProgressProperty();
    static Windows::UI::Xaml::DependencyProperty DownloadProgressOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty CurrentStateProperty();
    static Windows::UI::Xaml::DependencyProperty CanSeekProperty();
    static Windows::UI::Xaml::DependencyProperty CanPauseProperty();
    static Windows::UI::Xaml::DependencyProperty AudioStreamCountProperty();
    static Windows::UI::Xaml::DependencyProperty AudioStreamIndexProperty();
    static Windows::UI::Xaml::DependencyProperty PlaybackRateProperty();
    static Windows::UI::Xaml::DependencyProperty IsLoopingProperty();
    [[deprecated("PlayToSource may be altered or unavailable for releases after Windows 10.0. Instead, use GetAsCastingSource.")]] static Windows::UI::Xaml::DependencyProperty PlayToSourceProperty();
    static Windows::UI::Xaml::DependencyProperty DefaultPlaybackRateProperty();
    static Windows::UI::Xaml::DependencyProperty AspectRatioWidthProperty();
    static Windows::UI::Xaml::DependencyProperty AspectRatioHeightProperty();
    static Windows::UI::Xaml::DependencyProperty RealTimePlaybackProperty();
    static Windows::UI::Xaml::DependencyProperty AudioCategoryProperty();
    static Windows::UI::Xaml::DependencyProperty AudioDeviceTypeProperty();
    static Windows::UI::Xaml::DependencyProperty ProtectionManagerProperty();
    static Windows::UI::Xaml::DependencyProperty Stereo3DVideoPackingModeProperty();
    static Windows::UI::Xaml::DependencyProperty Stereo3DVideoRenderModeProperty();
    static Windows::UI::Xaml::DependencyProperty IsStereo3DVideoProperty();
    static Windows::UI::Xaml::DependencyProperty ActualStereo3DVideoPackingModeProperty();
    static Windows::UI::Xaml::DependencyProperty AreTransportControlsEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty StretchProperty();
    static Windows::UI::Xaml::DependencyProperty IsFullWindowProperty();
    [[deprecated("PlayToPreferredSourceUri may be altered or unavailable for releases after Windows 10.0. Instead, use GetAsCastingSource().PreferredSourceUri.")]] static Windows::UI::Xaml::DependencyProperty PlayToPreferredSourceUriProperty();
};

struct WINRT_EBO MediaPlayerElement :
    Windows::UI::Xaml::Controls::IMediaPlayerElement,
    impl::base<MediaPlayerElement, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MediaPlayerElement, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MediaPlayerElement(std::nullptr_t) noexcept {}
    MediaPlayerElement();
    static Windows::UI::Xaml::DependencyProperty SourceProperty();
    static Windows::UI::Xaml::DependencyProperty AreTransportControlsEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty PosterSourceProperty();
    static Windows::UI::Xaml::DependencyProperty StretchProperty();
    static Windows::UI::Xaml::DependencyProperty AutoPlayProperty();
    static Windows::UI::Xaml::DependencyProperty IsFullWindowProperty();
    static Windows::UI::Xaml::DependencyProperty MediaPlayerProperty();
};

struct WINRT_EBO MediaPlayerPresenter :
    Windows::UI::Xaml::Controls::IMediaPlayerPresenter,
    impl::base<MediaPlayerPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MediaPlayerPresenter, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MediaPlayerPresenter(std::nullptr_t) noexcept {}
    MediaPlayerPresenter();
    static Windows::UI::Xaml::DependencyProperty MediaPlayerProperty();
    static Windows::UI::Xaml::DependencyProperty StretchProperty();
    static Windows::UI::Xaml::DependencyProperty IsFullWindowProperty();
};

struct WINRT_EBO MediaTransportControls :
    Windows::UI::Xaml::Controls::IMediaTransportControls,
    impl::base<MediaTransportControls, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MediaTransportControls, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IMediaTransportControls2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MediaTransportControls(std::nullptr_t) noexcept {}
    MediaTransportControls();
    static Windows::UI::Xaml::DependencyProperty IsFullWindowButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsFullWindowEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsZoomButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsZoomEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsFastForwardButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsFastForwardEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsFastRewindButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsFastRewindEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsStopButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsStopEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsVolumeButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsVolumeEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsPlaybackRateButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsPlaybackRateEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsSeekBarVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsSeekEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsCompactProperty();
    static Windows::UI::Xaml::DependencyProperty IsSkipForwardButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsSkipForwardEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsSkipBackwardButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsSkipBackwardEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsNextTrackButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty IsPreviousTrackButtonVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty FastPlayFallbackBehaviourProperty();
};

struct WINRT_EBO MediaTransportControlsHelper :
    Windows::UI::Xaml::Controls::IMediaTransportControlsHelper
{
    MediaTransportControlsHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty DropoutOrderProperty();
    static Windows::Foundation::IReference<int32_t> GetDropoutOrder(Windows::UI::Xaml::UIElement const& element);
    static void SetDropoutOrder(Windows::UI::Xaml::UIElement const& element, optional<int32_t> const& value);
};

struct WINRT_EBO MenuFlyout :
    Windows::UI::Xaml::Controls::IMenuFlyout,
    impl::base<MenuFlyout, Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<MenuFlyout, Windows::UI::Xaml::Controls::IMenuFlyout2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MenuFlyout(std::nullptr_t) noexcept {}
    MenuFlyout();
    using impl::consume_t<MenuFlyout, Windows::UI::Xaml::Controls::IMenuFlyout2>::ShowAt;
    using impl::consume_t<MenuFlyout, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
    static Windows::UI::Xaml::DependencyProperty MenuFlyoutPresenterStyleProperty();
};

struct WINRT_EBO MenuFlyoutItem :
    Windows::UI::Xaml::Controls::IMenuFlyoutItem,
    impl::base<MenuFlyoutItem, Windows::UI::Xaml::Controls::MenuFlyoutItemBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MenuFlyoutItem, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IMenuFlyoutItem2, Windows::UI::Xaml::Controls::IMenuFlyoutItemBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MenuFlyoutItem(std::nullptr_t) noexcept {}
    MenuFlyoutItem();
    static Windows::UI::Xaml::DependencyProperty TextProperty();
    static Windows::UI::Xaml::DependencyProperty CommandProperty();
    static Windows::UI::Xaml::DependencyProperty CommandParameterProperty();
    static Windows::UI::Xaml::DependencyProperty IconProperty();
};

struct WINRT_EBO MenuFlyoutItemBase :
    Windows::UI::Xaml::Controls::IMenuFlyoutItemBase,
    impl::base<MenuFlyoutItemBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MenuFlyoutItemBase, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MenuFlyoutItemBase(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MenuFlyoutPresenter :
    Windows::UI::Xaml::Controls::IMenuFlyoutPresenter,
    impl::base<MenuFlyoutPresenter, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MenuFlyoutPresenter, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::IMenuFlyoutPresenter2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MenuFlyoutPresenter(std::nullptr_t) noexcept {}
    MenuFlyoutPresenter();
};

struct WINRT_EBO MenuFlyoutSeparator :
    Windows::UI::Xaml::Controls::IMenuFlyoutSeparator,
    impl::base<MenuFlyoutSeparator, Windows::UI::Xaml::Controls::MenuFlyoutItemBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MenuFlyoutSeparator, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IMenuFlyoutItemBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MenuFlyoutSeparator(std::nullptr_t) noexcept {}
    MenuFlyoutSeparator();
};

struct WINRT_EBO MenuFlyoutSubItem :
    Windows::UI::Xaml::Controls::IMenuFlyoutSubItem,
    impl::base<MenuFlyoutSubItem, Windows::UI::Xaml::Controls::MenuFlyoutItemBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MenuFlyoutSubItem, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IMenuFlyoutItemBase, Windows::UI::Xaml::Controls::IMenuFlyoutSubItem2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MenuFlyoutSubItem(std::nullptr_t) noexcept {}
    MenuFlyoutSubItem();
    static Windows::UI::Xaml::DependencyProperty TextProperty();
    static Windows::UI::Xaml::DependencyProperty IconProperty();
};

struct WINRT_EBO NotifyEventArgs :
    Windows::UI::Xaml::Controls::INotifyEventArgs,
    impl::require<NotifyEventArgs, Windows::UI::Xaml::Controls::INotifyEventArgs2>
{
    NotifyEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Page :
    Windows::UI::Xaml::Controls::IPage,
    impl::base<Page, Windows::UI::Xaml::Controls::UserControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Page, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IPageOverrides, Windows::UI::Xaml::Controls::IUserControl, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Page(std::nullptr_t) noexcept {}
    Page();
    static Windows::UI::Xaml::DependencyProperty FrameProperty();
    static Windows::UI::Xaml::DependencyProperty TopAppBarProperty();
    static Windows::UI::Xaml::DependencyProperty BottomAppBarProperty();
};

struct WINRT_EBO Panel :
    Windows::UI::Xaml::Controls::IPanel,
    impl::base<Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Panel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Panel(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty BackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty IsItemsHostProperty();
    static Windows::UI::Xaml::DependencyProperty ChildrenTransitionsProperty();
};

struct WINRT_EBO PasswordBox :
    Windows::UI::Xaml::Controls::IPasswordBox,
    impl::base<PasswordBox, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<PasswordBox, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IPasswordBox2, Windows::UI::Xaml::Controls::IPasswordBox3, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    PasswordBox(std::nullptr_t) noexcept {}
    PasswordBox();
    static Windows::UI::Xaml::DependencyProperty PasswordProperty();
    static Windows::UI::Xaml::DependencyProperty PasswordCharProperty();
    [[deprecated("IsPasswordRevealButtonEnabledProperty may be altered or unavailable for releases after Windows 10.0. Instead, use PasswordRevealModeProperty.")]] static Windows::UI::Xaml::DependencyProperty IsPasswordRevealButtonEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty MaxLengthProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderTextProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionHighlightColorProperty();
    static Windows::UI::Xaml::DependencyProperty PreventKeyboardDisplayOnProgrammaticFocusProperty();
    static Windows::UI::Xaml::DependencyProperty PasswordRevealModeProperty();
    static Windows::UI::Xaml::DependencyProperty TextReadingOrderProperty();
    static Windows::UI::Xaml::DependencyProperty InputScopeProperty();
};

struct WINRT_EBO PathIcon :
    Windows::UI::Xaml::Controls::IPathIcon,
    impl::base<PathIcon, Windows::UI::Xaml::Controls::IconElement, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<PathIcon, Windows::UI::Xaml::Controls::IIconElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    PathIcon(std::nullptr_t) noexcept {}
    PathIcon();
    static Windows::UI::Xaml::DependencyProperty DataProperty();
};

struct WINRT_EBO PickerConfirmedEventArgs :
    Windows::UI::Xaml::Controls::IPickerConfirmedEventArgs,
    impl::base<PickerConfirmedEventArgs, Windows::UI::Xaml::DependencyObject>,
    impl::require<PickerConfirmedEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    PickerConfirmedEventArgs(std::nullptr_t) noexcept {}
    PickerConfirmedEventArgs();
};

struct WINRT_EBO PickerFlyout :
    Windows::UI::Xaml::Controls::IPickerFlyout,
    impl::base<PickerFlyout, Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<PickerFlyout, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    PickerFlyout(std::nullptr_t) noexcept {}
    PickerFlyout();
    static Windows::UI::Xaml::DependencyProperty ContentProperty();
    static Windows::UI::Xaml::DependencyProperty ConfirmationButtonsVisibleProperty();
};

struct WINRT_EBO PickerFlyoutPresenter :
    Windows::UI::Xaml::Controls::IPickerFlyoutPresenter,
    impl::base<PickerFlyoutPresenter, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<PickerFlyoutPresenter, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    PickerFlyoutPresenter(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Pivot :
    Windows::UI::Xaml::Controls::IPivot,
    impl::base<Pivot, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Pivot, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::IPivot2, Windows::UI::Xaml::Controls::IPivot3, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Pivot(std::nullptr_t) noexcept {}
    Pivot();
    static Windows::UI::Xaml::DependencyProperty TitleProperty();
    static Windows::UI::Xaml::DependencyProperty TitleTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedIndexProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedItemProperty();
    static Windows::UI::Xaml::DependencyProperty IsLockedProperty();
    static Windows::UI::Xaml::DependencyProperty SlideInAnimationGroupProperty();
    static Windows::UI::Xaml::Controls::PivotSlideInAnimationGroup GetSlideInAnimationGroup(Windows::UI::Xaml::FrameworkElement const& element);
    static void SetSlideInAnimationGroup(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::Controls::PivotSlideInAnimationGroup const& value);
    static Windows::UI::Xaml::DependencyProperty LeftHeaderProperty();
    static Windows::UI::Xaml::DependencyProperty LeftHeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty RightHeaderProperty();
    static Windows::UI::Xaml::DependencyProperty RightHeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderFocusVisualPlacementProperty();
    static Windows::UI::Xaml::DependencyProperty IsHeaderItemsCarouselEnabledProperty();
};

struct WINRT_EBO PivotItem :
    Windows::UI::Xaml::Controls::IPivotItem,
    impl::base<PivotItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<PivotItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    PivotItem(std::nullptr_t) noexcept {}
    PivotItem();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
};

struct WINRT_EBO PivotItemEventArgs :
    Windows::UI::Xaml::Controls::IPivotItemEventArgs
{
    PivotItemEventArgs(std::nullptr_t) noexcept {}
    PivotItemEventArgs();
};

struct WINRT_EBO ProgressBar :
    Windows::UI::Xaml::Controls::IProgressBar,
    impl::base<ProgressBar, Windows::UI::Xaml::Controls::Primitives::RangeBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ProgressBar, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IRangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ProgressBar(std::nullptr_t) noexcept {}
    ProgressBar();
    static Windows::UI::Xaml::DependencyProperty IsIndeterminateProperty();
    static Windows::UI::Xaml::DependencyProperty ShowErrorProperty();
    static Windows::UI::Xaml::DependencyProperty ShowPausedProperty();
};

struct WINRT_EBO ProgressRing :
    Windows::UI::Xaml::Controls::IProgressRing,
    impl::base<ProgressRing, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ProgressRing, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ProgressRing(std::nullptr_t) noexcept {}
    ProgressRing();
    static Windows::UI::Xaml::DependencyProperty IsActiveProperty();
};

struct WINRT_EBO RadioButton :
    Windows::UI::Xaml::Controls::IRadioButton,
    impl::base<RadioButton, Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<RadioButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    RadioButton(std::nullptr_t) noexcept {}
    RadioButton();
    static Windows::UI::Xaml::DependencyProperty GroupNameProperty();
};

struct WINRT_EBO RelativePanel :
    Windows::UI::Xaml::Controls::IRelativePanel,
    impl::base<RelativePanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<RelativePanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    RelativePanel(std::nullptr_t) noexcept {}
    RelativePanel();
    static Windows::UI::Xaml::DependencyProperty LeftOfProperty();
    static Windows::Foundation::IInspectable GetLeftOf(Windows::UI::Xaml::UIElement const& element);
    static void SetLeftOf(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty AboveProperty();
    static Windows::Foundation::IInspectable GetAbove(Windows::UI::Xaml::UIElement const& element);
    static void SetAbove(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty RightOfProperty();
    static Windows::Foundation::IInspectable GetRightOf(Windows::UI::Xaml::UIElement const& element);
    static void SetRightOf(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty BelowProperty();
    static Windows::Foundation::IInspectable GetBelow(Windows::UI::Xaml::UIElement const& element);
    static void SetBelow(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty AlignHorizontalCenterWithProperty();
    static Windows::Foundation::IInspectable GetAlignHorizontalCenterWith(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignHorizontalCenterWith(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty AlignVerticalCenterWithProperty();
    static Windows::Foundation::IInspectable GetAlignVerticalCenterWith(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignVerticalCenterWith(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty AlignLeftWithProperty();
    static Windows::Foundation::IInspectable GetAlignLeftWith(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignLeftWith(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty AlignTopWithProperty();
    static Windows::Foundation::IInspectable GetAlignTopWith(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignTopWith(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty AlignRightWithProperty();
    static Windows::Foundation::IInspectable GetAlignRightWith(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignRightWith(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty AlignBottomWithProperty();
    static Windows::Foundation::IInspectable GetAlignBottomWith(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignBottomWith(Windows::UI::Xaml::UIElement const& element, Windows::Foundation::IInspectable const& value);
    static Windows::UI::Xaml::DependencyProperty AlignLeftWithPanelProperty();
    static bool GetAlignLeftWithPanel(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignLeftWithPanel(Windows::UI::Xaml::UIElement const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty AlignTopWithPanelProperty();
    static bool GetAlignTopWithPanel(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignTopWithPanel(Windows::UI::Xaml::UIElement const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty AlignRightWithPanelProperty();
    static bool GetAlignRightWithPanel(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignRightWithPanel(Windows::UI::Xaml::UIElement const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty AlignBottomWithPanelProperty();
    static bool GetAlignBottomWithPanel(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignBottomWithPanel(Windows::UI::Xaml::UIElement const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty AlignHorizontalCenterWithPanelProperty();
    static bool GetAlignHorizontalCenterWithPanel(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignHorizontalCenterWithPanel(Windows::UI::Xaml::UIElement const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty AlignVerticalCenterWithPanelProperty();
    static bool GetAlignVerticalCenterWithPanel(Windows::UI::Xaml::UIElement const& element);
    static void SetAlignVerticalCenterWithPanel(Windows::UI::Xaml::UIElement const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty BorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty BorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty CornerRadiusProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
};

struct WINRT_EBO RichEditBox :
    Windows::UI::Xaml::Controls::IRichEditBox,
    impl::base<RichEditBox, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<RichEditBox, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IRichEditBox2, Windows::UI::Xaml::Controls::IRichEditBox3, Windows::UI::Xaml::Controls::IRichEditBox4, Windows::UI::Xaml::Controls::IRichEditBox5, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    RichEditBox(std::nullptr_t) noexcept {}
    RichEditBox();
    static Windows::UI::Xaml::DependencyProperty IsReadOnlyProperty();
    static Windows::UI::Xaml::DependencyProperty AcceptsReturnProperty();
    static Windows::UI::Xaml::DependencyProperty TextAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty TextWrappingProperty();
    static Windows::UI::Xaml::DependencyProperty IsSpellCheckEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextPredictionEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty InputScopeProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderTextProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionHighlightColorProperty();
    static Windows::UI::Xaml::DependencyProperty PreventKeyboardDisplayOnProgrammaticFocusProperty();
    static Windows::UI::Xaml::DependencyProperty IsColorFontEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty DesiredCandidateWindowAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty TextReadingOrderProperty();
    static Windows::UI::Xaml::DependencyProperty ClipboardCopyFormatProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionHighlightColorWhenNotFocusedProperty();
    static Windows::UI::Xaml::DependencyProperty MaxLengthProperty();
};

struct WINRT_EBO RichEditBoxTextChangingEventArgs :
    Windows::UI::Xaml::Controls::IRichEditBoxTextChangingEventArgs,
    impl::require<RichEditBoxTextChangingEventArgs, Windows::UI::Xaml::Controls::IRichEditBoxTextChangingEventArgs2>
{
    RichEditBoxTextChangingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RichTextBlock :
    Windows::UI::Xaml::Controls::IRichTextBlock,
    impl::base<RichTextBlock, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<RichTextBlock, Windows::UI::Xaml::Controls::IRichTextBlock2, Windows::UI::Xaml::Controls::IRichTextBlock3, Windows::UI::Xaml::Controls::IRichTextBlock4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    RichTextBlock(std::nullptr_t) noexcept {}
    RichTextBlock();
    static Windows::UI::Xaml::DependencyProperty FontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty FontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty FontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty FontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty FontStretchProperty();
    static Windows::UI::Xaml::DependencyProperty ForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty TextWrappingProperty();
    static Windows::UI::Xaml::DependencyProperty TextTrimmingProperty();
    static Windows::UI::Xaml::DependencyProperty TextAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
    static Windows::UI::Xaml::DependencyProperty LineHeightProperty();
    static Windows::UI::Xaml::DependencyProperty LineStackingStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty CharacterSpacingProperty();
    static Windows::UI::Xaml::DependencyProperty OverflowContentTargetProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextSelectionEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty HasOverflowContentProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedTextProperty();
    static Windows::UI::Xaml::DependencyProperty TextIndentProperty();
    static Windows::UI::Xaml::DependencyProperty MaxLinesProperty();
    static Windows::UI::Xaml::DependencyProperty TextLineBoundsProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionHighlightColorProperty();
    static Windows::UI::Xaml::DependencyProperty OpticalMarginAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty IsColorFontEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty TextReadingOrderProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextScaleFactorEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty TextDecorationsProperty();
};

struct WINRT_EBO RichTextBlockOverflow :
    Windows::UI::Xaml::Controls::IRichTextBlockOverflow,
    impl::base<RichTextBlockOverflow, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<RichTextBlockOverflow, Windows::UI::Xaml::Controls::IRichTextBlockOverflow2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    RichTextBlockOverflow(std::nullptr_t) noexcept {}
    RichTextBlockOverflow();
    static Windows::UI::Xaml::DependencyProperty OverflowContentTargetProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
    static Windows::UI::Xaml::DependencyProperty HasOverflowContentProperty();
    static Windows::UI::Xaml::DependencyProperty MaxLinesProperty();
};

struct WINRT_EBO RowDefinition :
    Windows::UI::Xaml::Controls::IRowDefinition,
    impl::base<RowDefinition, Windows::UI::Xaml::DependencyObject>,
    impl::require<RowDefinition, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    RowDefinition(std::nullptr_t) noexcept {}
    RowDefinition();
    static Windows::UI::Xaml::DependencyProperty HeightProperty();
    static Windows::UI::Xaml::DependencyProperty MaxHeightProperty();
    static Windows::UI::Xaml::DependencyProperty MinHeightProperty();
};

struct WINRT_EBO RowDefinitionCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::RowDefinition>
{
    RowDefinitionCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ScrollContentPresenter :
    Windows::UI::Xaml::Controls::IScrollContentPresenter,
    impl::base<ScrollContentPresenter, Windows::UI::Xaml::Controls::ContentPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ScrollContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter2, Windows::UI::Xaml::Controls::IContentPresenter3, Windows::UI::Xaml::Controls::IContentPresenter4, Windows::UI::Xaml::Controls::IContentPresenterOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ScrollContentPresenter(std::nullptr_t) noexcept {}
    ScrollContentPresenter();
};

struct WINRT_EBO ScrollViewer :
    Windows::UI::Xaml::Controls::IScrollViewer,
    impl::base<ScrollViewer, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ScrollViewer, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IScrollViewer2, Windows::UI::Xaml::Controls::IScrollViewer3, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ScrollViewer(std::nullptr_t) noexcept {}
    ScrollViewer();
    static Windows::UI::Xaml::DependencyProperty HorizontalSnapPointsAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalSnapPointsAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalSnapPointsTypeProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalSnapPointsTypeProperty();
    static Windows::UI::Xaml::DependencyProperty ZoomSnapPointsTypeProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty ViewportWidthProperty();
    static Windows::UI::Xaml::DependencyProperty ScrollableWidthProperty();
    static Windows::UI::Xaml::DependencyProperty ComputedHorizontalScrollBarVisibilityProperty();
    static Windows::UI::Xaml::DependencyProperty ExtentWidthProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty ViewportHeightProperty();
    static Windows::UI::Xaml::DependencyProperty ScrollableHeightProperty();
    static Windows::UI::Xaml::DependencyProperty ComputedVerticalScrollBarVisibilityProperty();
    static Windows::UI::Xaml::DependencyProperty ExtentHeightProperty();
    static Windows::UI::Xaml::DependencyProperty MinZoomFactorProperty();
    static Windows::UI::Xaml::DependencyProperty MaxZoomFactorProperty();
    static Windows::UI::Xaml::DependencyProperty ZoomFactorProperty();
    static Windows::UI::Xaml::DependencyProperty ZoomSnapPointsProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalScrollBarVisibilityProperty();
    static Windows::UI::Xaml::Controls::ScrollBarVisibility GetHorizontalScrollBarVisibility(Windows::UI::Xaml::DependencyObject const& element);
    static void SetHorizontalScrollBarVisibility(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Controls::ScrollBarVisibility const& horizontalScrollBarVisibility);
    static Windows::UI::Xaml::DependencyProperty VerticalScrollBarVisibilityProperty();
    static Windows::UI::Xaml::Controls::ScrollBarVisibility GetVerticalScrollBarVisibility(Windows::UI::Xaml::DependencyObject const& element);
    static void SetVerticalScrollBarVisibility(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Controls::ScrollBarVisibility const& verticalScrollBarVisibility);
    static Windows::UI::Xaml::DependencyProperty IsHorizontalRailEnabledProperty();
    static bool GetIsHorizontalRailEnabled(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsHorizontalRailEnabled(Windows::UI::Xaml::DependencyObject const& element, bool isHorizontalRailEnabled);
    static Windows::UI::Xaml::DependencyProperty IsVerticalRailEnabledProperty();
    static bool GetIsVerticalRailEnabled(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsVerticalRailEnabled(Windows::UI::Xaml::DependencyObject const& element, bool isVerticalRailEnabled);
    static Windows::UI::Xaml::DependencyProperty IsHorizontalScrollChainingEnabledProperty();
    static bool GetIsHorizontalScrollChainingEnabled(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsHorizontalScrollChainingEnabled(Windows::UI::Xaml::DependencyObject const& element, bool isHorizontalScrollChainingEnabled);
    static Windows::UI::Xaml::DependencyProperty IsVerticalScrollChainingEnabledProperty();
    static bool GetIsVerticalScrollChainingEnabled(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsVerticalScrollChainingEnabled(Windows::UI::Xaml::DependencyObject const& element, bool isVerticalScrollChainingEnabled);
    static Windows::UI::Xaml::DependencyProperty IsZoomChainingEnabledProperty();
    static bool GetIsZoomChainingEnabled(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsZoomChainingEnabled(Windows::UI::Xaml::DependencyObject const& element, bool isZoomChainingEnabled);
    static Windows::UI::Xaml::DependencyProperty IsScrollInertiaEnabledProperty();
    static bool GetIsScrollInertiaEnabled(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsScrollInertiaEnabled(Windows::UI::Xaml::DependencyObject const& element, bool isScrollInertiaEnabled);
    static Windows::UI::Xaml::DependencyProperty IsZoomInertiaEnabledProperty();
    static bool GetIsZoomInertiaEnabled(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsZoomInertiaEnabled(Windows::UI::Xaml::DependencyObject const& element, bool isZoomInertiaEnabled);
    static Windows::UI::Xaml::DependencyProperty HorizontalScrollModeProperty();
    static Windows::UI::Xaml::Controls::ScrollMode GetHorizontalScrollMode(Windows::UI::Xaml::DependencyObject const& element);
    static void SetHorizontalScrollMode(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Controls::ScrollMode const& horizontalScrollMode);
    static Windows::UI::Xaml::DependencyProperty VerticalScrollModeProperty();
    static Windows::UI::Xaml::Controls::ScrollMode GetVerticalScrollMode(Windows::UI::Xaml::DependencyObject const& element);
    static void SetVerticalScrollMode(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Controls::ScrollMode const& verticalScrollMode);
    static Windows::UI::Xaml::DependencyProperty ZoomModeProperty();
    static Windows::UI::Xaml::Controls::ZoomMode GetZoomMode(Windows::UI::Xaml::DependencyObject const& element);
    static void SetZoomMode(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Controls::ZoomMode const& zoomMode);
    static Windows::UI::Xaml::DependencyProperty IsDeferredScrollingEnabledProperty();
    static bool GetIsDeferredScrollingEnabled(Windows::UI::Xaml::DependencyObject const& element);
    static void SetIsDeferredScrollingEnabled(Windows::UI::Xaml::DependencyObject const& element, bool isDeferredScrollingEnabled);
    static Windows::UI::Xaml::DependencyProperty BringIntoViewOnFocusChangeProperty();
    static bool GetBringIntoViewOnFocusChange(Windows::UI::Xaml::DependencyObject const& element);
    static void SetBringIntoViewOnFocusChange(Windows::UI::Xaml::DependencyObject const& element, bool bringIntoViewOnFocusChange);
    static Windows::UI::Xaml::DependencyProperty TopLeftHeaderProperty();
    static Windows::UI::Xaml::DependencyProperty LeftHeaderProperty();
    static Windows::UI::Xaml::DependencyProperty TopHeaderProperty();
};

struct WINRT_EBO ScrollViewerView :
    Windows::UI::Xaml::Controls::IScrollViewerView
{
    ScrollViewerView(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ScrollViewerViewChangedEventArgs :
    Windows::UI::Xaml::Controls::IScrollViewerViewChangedEventArgs
{
    ScrollViewerViewChangedEventArgs(std::nullptr_t) noexcept {}
    ScrollViewerViewChangedEventArgs();
};

struct WINRT_EBO ScrollViewerViewChangingEventArgs :
    Windows::UI::Xaml::Controls::IScrollViewerViewChangingEventArgs
{
    ScrollViewerViewChangingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchBox :
    Windows::UI::Xaml::Controls::ISearchBox,
    impl::base<SearchBox, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<SearchBox, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    SearchBox(std::nullptr_t) noexcept {}
    SearchBox();
    static Windows::UI::Xaml::DependencyProperty SearchHistoryEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty SearchHistoryContextProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderTextProperty();
    static Windows::UI::Xaml::DependencyProperty QueryTextProperty();
    static Windows::UI::Xaml::DependencyProperty FocusOnKeyboardInputProperty();
    static Windows::UI::Xaml::DependencyProperty ChooseSuggestionOnEnterProperty();
};

struct WINRT_EBO SearchBoxQueryChangedEventArgs :
    Windows::UI::Xaml::Controls::ISearchBoxQueryChangedEventArgs
{
    SearchBoxQueryChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchBoxQuerySubmittedEventArgs :
    Windows::UI::Xaml::Controls::ISearchBoxQuerySubmittedEventArgs
{
    SearchBoxQuerySubmittedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchBoxResultSuggestionChosenEventArgs :
    Windows::UI::Xaml::Controls::ISearchBoxResultSuggestionChosenEventArgs
{
    SearchBoxResultSuggestionChosenEventArgs(std::nullptr_t) noexcept {}
    SearchBoxResultSuggestionChosenEventArgs();
};

struct WINRT_EBO SearchBoxSuggestionsRequestedEventArgs :
    Windows::UI::Xaml::Controls::ISearchBoxSuggestionsRequestedEventArgs
{
    SearchBoxSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SectionsInViewChangedEventArgs :
    Windows::UI::Xaml::Controls::ISectionsInViewChangedEventArgs
{
    SectionsInViewChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SelectionChangedEventArgs :
    Windows::UI::Xaml::Controls::ISelectionChangedEventArgs,
    impl::base<SelectionChangedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<SelectionChangedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    SelectionChangedEventArgs(std::nullptr_t) noexcept {}
    SelectionChangedEventArgs(param::vector<Windows::Foundation::IInspectable> const& removedItems, param::vector<Windows::Foundation::IInspectable> const& addedItems);
};

struct WINRT_EBO SemanticZoom :
    Windows::UI::Xaml::Controls::ISemanticZoom,
    impl::base<SemanticZoom, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<SemanticZoom, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    SemanticZoom(std::nullptr_t) noexcept {}
    SemanticZoom();
    static Windows::UI::Xaml::DependencyProperty ZoomedInViewProperty();
    static Windows::UI::Xaml::DependencyProperty ZoomedOutViewProperty();
    static Windows::UI::Xaml::DependencyProperty IsZoomedInViewActiveProperty();
    static Windows::UI::Xaml::DependencyProperty CanChangeViewsProperty();
    static Windows::UI::Xaml::DependencyProperty IsZoomOutButtonEnabledProperty();
};

struct WINRT_EBO SemanticZoomLocation :
    Windows::UI::Xaml::Controls::ISemanticZoomLocation
{
    SemanticZoomLocation(std::nullptr_t) noexcept {}
    SemanticZoomLocation();
};

struct WINRT_EBO SemanticZoomViewChangedEventArgs :
    Windows::UI::Xaml::Controls::ISemanticZoomViewChangedEventArgs
{
    SemanticZoomViewChangedEventArgs(std::nullptr_t) noexcept {}
    SemanticZoomViewChangedEventArgs();
};

struct WINRT_EBO SettingsFlyout :
    Windows::UI::Xaml::Controls::ISettingsFlyout,
    impl::base<SettingsFlyout, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<SettingsFlyout, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    SettingsFlyout(std::nullptr_t) noexcept {}
    SettingsFlyout();
    static Windows::UI::Xaml::DependencyProperty TitleProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty IconSourceProperty();
};

struct WINRT_EBO Slider :
    Windows::UI::Xaml::Controls::ISlider,
    impl::base<Slider, Windows::UI::Xaml::Controls::Primitives::RangeBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Slider, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::ISlider2, Windows::UI::Xaml::Controls::Primitives::IRangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Slider(std::nullptr_t) noexcept {}
    Slider();
    static Windows::UI::Xaml::DependencyProperty IntermediateValueProperty();
    static Windows::UI::Xaml::DependencyProperty StepFrequencyProperty();
    static Windows::UI::Xaml::DependencyProperty SnapsToProperty();
    static Windows::UI::Xaml::DependencyProperty TickFrequencyProperty();
    static Windows::UI::Xaml::DependencyProperty TickPlacementProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty IsDirectionReversedProperty();
    static Windows::UI::Xaml::DependencyProperty IsThumbToolTipEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty ThumbToolTipValueConverterProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
};

struct WINRT_EBO SplitView :
    Windows::UI::Xaml::Controls::ISplitView,
    impl::base<SplitView, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<SplitView, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::ISplitView2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    SplitView(std::nullptr_t) noexcept {}
    SplitView();
    static Windows::UI::Xaml::DependencyProperty ContentProperty();
    static Windows::UI::Xaml::DependencyProperty PaneProperty();
    static Windows::UI::Xaml::DependencyProperty IsPaneOpenProperty();
    static Windows::UI::Xaml::DependencyProperty OpenPaneLengthProperty();
    static Windows::UI::Xaml::DependencyProperty CompactPaneLengthProperty();
    static Windows::UI::Xaml::DependencyProperty PanePlacementProperty();
    static Windows::UI::Xaml::DependencyProperty DisplayModeProperty();
    static Windows::UI::Xaml::DependencyProperty TemplateSettingsProperty();
    static Windows::UI::Xaml::DependencyProperty PaneBackgroundProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
};

struct WINRT_EBO SplitViewPaneClosingEventArgs :
    Windows::UI::Xaml::Controls::ISplitViewPaneClosingEventArgs
{
    SplitViewPaneClosingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StackPanel :
    Windows::UI::Xaml::Controls::IStackPanel,
    impl::base<StackPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<StackPanel, Windows::UI::Xaml::Controls::IInsertionPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IStackPanel2, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    StackPanel(std::nullptr_t) noexcept {}
    StackPanel();
    static Windows::UI::Xaml::DependencyProperty AreScrollSnapPointsRegularProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty BorderBrushProperty();
    static Windows::UI::Xaml::DependencyProperty BorderThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty CornerRadiusProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
};

struct WINRT_EBO StyleSelector :
    Windows::UI::Xaml::Controls::IStyleSelector,
    impl::require<StyleSelector, Windows::UI::Xaml::Controls::IStyleSelectorOverrides>
{
    StyleSelector(std::nullptr_t) noexcept {}
    StyleSelector();
};

struct WINRT_EBO SwapChainBackgroundPanel :
    Windows::UI::Xaml::Controls::ISwapChainBackgroundPanel,
    impl::base<SwapChainBackgroundPanel, Windows::UI::Xaml::Controls::Grid, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<SwapChainBackgroundPanel, Windows::UI::Xaml::Controls::IGrid, Windows::UI::Xaml::Controls::IGrid2, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::ISwapChainBackgroundPanel2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    SwapChainBackgroundPanel(std::nullptr_t) noexcept {}
    SwapChainBackgroundPanel();
};

struct WINRT_EBO SwapChainPanel :
    Windows::UI::Xaml::Controls::ISwapChainPanel,
    impl::base<SwapChainPanel, Windows::UI::Xaml::Controls::Grid, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<SwapChainPanel, Windows::UI::Xaml::Controls::IGrid, Windows::UI::Xaml::Controls::IGrid2, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    SwapChainPanel(std::nullptr_t) noexcept {}
    SwapChainPanel();
    static Windows::UI::Xaml::DependencyProperty CompositionScaleXProperty();
    static Windows::UI::Xaml::DependencyProperty CompositionScaleYProperty();
};

struct WINRT_EBO SymbolIcon :
    Windows::UI::Xaml::Controls::ISymbolIcon,
    impl::base<SymbolIcon, Windows::UI::Xaml::Controls::IconElement, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<SymbolIcon, Windows::UI::Xaml::Controls::IIconElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    SymbolIcon(std::nullptr_t) noexcept {}
    SymbolIcon();
    SymbolIcon(Windows::UI::Xaml::Controls::Symbol const& symbol);
    static Windows::UI::Xaml::DependencyProperty SymbolProperty();
};

struct WINRT_EBO TextBlock :
    Windows::UI::Xaml::Controls::ITextBlock,
    impl::base<TextBlock, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<TextBlock, Windows::UI::Xaml::Controls::ITextBlock2, Windows::UI::Xaml::Controls::ITextBlock3, Windows::UI::Xaml::Controls::ITextBlock4, Windows::UI::Xaml::Controls::ITextBlock5, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    TextBlock(std::nullptr_t) noexcept {}
    TextBlock();
    static Windows::UI::Xaml::DependencyProperty FontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty FontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty FontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty FontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty FontStretchProperty();
    static Windows::UI::Xaml::DependencyProperty CharacterSpacingProperty();
    static Windows::UI::Xaml::DependencyProperty ForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty TextWrappingProperty();
    static Windows::UI::Xaml::DependencyProperty TextTrimmingProperty();
    static Windows::UI::Xaml::DependencyProperty TextAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty TextProperty();
    static Windows::UI::Xaml::DependencyProperty PaddingProperty();
    static Windows::UI::Xaml::DependencyProperty LineHeightProperty();
    static Windows::UI::Xaml::DependencyProperty LineStackingStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextSelectionEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty SelectedTextProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionHighlightColorProperty();
    static Windows::UI::Xaml::DependencyProperty MaxLinesProperty();
    static Windows::UI::Xaml::DependencyProperty TextLineBoundsProperty();
    static Windows::UI::Xaml::DependencyProperty OpticalMarginAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty IsColorFontEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty TextReadingOrderProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextScaleFactorEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty TextDecorationsProperty();
};

struct WINRT_EBO TextBox :
    Windows::UI::Xaml::Controls::ITextBox,
    impl::base<TextBox, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<TextBox, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::ITextBox2, Windows::UI::Xaml::Controls::ITextBox3, Windows::UI::Xaml::Controls::ITextBox4, Windows::UI::Xaml::Controls::ITextBox5, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    TextBox(std::nullptr_t) noexcept {}
    TextBox();
    static Windows::UI::Xaml::DependencyProperty TextProperty();
    static Windows::UI::Xaml::DependencyProperty MaxLengthProperty();
    static Windows::UI::Xaml::DependencyProperty IsReadOnlyProperty();
    static Windows::UI::Xaml::DependencyProperty AcceptsReturnProperty();
    static Windows::UI::Xaml::DependencyProperty TextAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty TextWrappingProperty();
    static Windows::UI::Xaml::DependencyProperty IsSpellCheckEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextPredictionEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty InputScopeProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty PlaceholderTextProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionHighlightColorProperty();
    static Windows::UI::Xaml::DependencyProperty PreventKeyboardDisplayOnProgrammaticFocusProperty();
    static Windows::UI::Xaml::DependencyProperty IsColorFontEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty DesiredCandidateWindowAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty TextReadingOrderProperty();
    static Windows::UI::Xaml::DependencyProperty SelectionHighlightColorWhenNotFocusedProperty();
};

struct WINRT_EBO TextBoxTextChangingEventArgs :
    Windows::UI::Xaml::Controls::ITextBoxTextChangingEventArgs,
    impl::require<TextBoxTextChangingEventArgs, Windows::UI::Xaml::Controls::ITextBoxTextChangingEventArgs2>
{
    TextBoxTextChangingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TextChangedEventArgs :
    Windows::UI::Xaml::Controls::ITextChangedEventArgs,
    impl::base<TextChangedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<TextChangedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    TextChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TextCompositionChangedEventArgs :
    Windows::UI::Xaml::Controls::ITextCompositionChangedEventArgs
{
    TextCompositionChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TextCompositionEndedEventArgs :
    Windows::UI::Xaml::Controls::ITextCompositionEndedEventArgs
{
    TextCompositionEndedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TextCompositionStartedEventArgs :
    Windows::UI::Xaml::Controls::ITextCompositionStartedEventArgs
{
    TextCompositionStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TextControlPasteEventArgs :
    Windows::UI::Xaml::Controls::ITextControlPasteEventArgs
{
    TextControlPasteEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TimePickedEventArgs :
    Windows::UI::Xaml::Controls::ITimePickedEventArgs,
    impl::base<TimePickedEventArgs, Windows::UI::Xaml::DependencyObject>,
    impl::require<TimePickedEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    TimePickedEventArgs(std::nullptr_t) noexcept {}
    TimePickedEventArgs();
};

struct WINRT_EBO TimePicker :
    Windows::UI::Xaml::Controls::ITimePicker,
    impl::base<TimePicker, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<TimePicker, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::ITimePicker2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    TimePicker(std::nullptr_t) noexcept {}
    TimePicker();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty ClockIdentifierProperty();
    static Windows::UI::Xaml::DependencyProperty MinuteIncrementProperty();
    static Windows::UI::Xaml::DependencyProperty TimeProperty();
    static Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty();
};

struct WINRT_EBO TimePickerFlyout :
    Windows::UI::Xaml::Controls::ITimePickerFlyout,
    impl::base<TimePickerFlyout, Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<TimePickerFlyout, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    TimePickerFlyout(std::nullptr_t) noexcept {}
    TimePickerFlyout();
    static Windows::UI::Xaml::DependencyProperty ClockIdentifierProperty();
    static Windows::UI::Xaml::DependencyProperty TimeProperty();
    static Windows::UI::Xaml::DependencyProperty MinuteIncrementProperty();
};

struct WINRT_EBO TimePickerFlyoutPresenter :
    Windows::UI::Xaml::Controls::ITimePickerFlyoutPresenter,
    impl::base<TimePickerFlyoutPresenter, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<TimePickerFlyoutPresenter, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    TimePickerFlyoutPresenter(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TimePickerValueChangedEventArgs :
    Windows::UI::Xaml::Controls::ITimePickerValueChangedEventArgs
{
    TimePickerValueChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ToggleMenuFlyoutItem :
    Windows::UI::Xaml::Controls::IToggleMenuFlyoutItem,
    impl::base<ToggleMenuFlyoutItem, Windows::UI::Xaml::Controls::MenuFlyoutItem, Windows::UI::Xaml::Controls::MenuFlyoutItemBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ToggleMenuFlyoutItem, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IMenuFlyoutItem, Windows::UI::Xaml::Controls::IMenuFlyoutItem2, Windows::UI::Xaml::Controls::IMenuFlyoutItemBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ToggleMenuFlyoutItem(std::nullptr_t) noexcept {}
    ToggleMenuFlyoutItem();
    static Windows::UI::Xaml::DependencyProperty IsCheckedProperty();
};

struct WINRT_EBO ToggleSwitch :
    Windows::UI::Xaml::Controls::IToggleSwitch,
    impl::base<ToggleSwitch, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ToggleSwitch, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IToggleSwitchOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ToggleSwitch(std::nullptr_t) noexcept {}
    ToggleSwitch();
    static Windows::UI::Xaml::DependencyProperty IsOnProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderProperty();
    static Windows::UI::Xaml::DependencyProperty HeaderTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty OnContentProperty();
    static Windows::UI::Xaml::DependencyProperty OnContentTemplateProperty();
    static Windows::UI::Xaml::DependencyProperty OffContentProperty();
    static Windows::UI::Xaml::DependencyProperty OffContentTemplateProperty();
};

struct WINRT_EBO ToolTip :
    Windows::UI::Xaml::Controls::IToolTip,
    impl::base<ToolTip, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<ToolTip, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    ToolTip(std::nullptr_t) noexcept {}
    ToolTip();
    static Windows::UI::Xaml::DependencyProperty HorizontalOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty IsOpenProperty();
    static Windows::UI::Xaml::DependencyProperty PlacementProperty();
    static Windows::UI::Xaml::DependencyProperty PlacementTargetProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalOffsetProperty();
};

struct WINRT_EBO ToolTipService :
    Windows::UI::Xaml::Controls::IToolTipService
{
    ToolTipService(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty PlacementProperty();
    static Windows::UI::Xaml::Controls::Primitives::PlacementMode GetPlacement(Windows::UI::Xaml::DependencyObject const& element);
    static void SetPlacement(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Controls::Primitives::PlacementMode const& value);
    static Windows::UI::Xaml::DependencyProperty PlacementTargetProperty();
    static Windows::UI::Xaml::UIElement GetPlacementTarget(Windows::UI::Xaml::DependencyObject const& element);
    static void SetPlacementTarget(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::UIElement const& value);
    static Windows::UI::Xaml::DependencyProperty ToolTipProperty();
    static Windows::Foundation::IInspectable GetToolTip(Windows::UI::Xaml::DependencyObject const& element);
    static void SetToolTip(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::IInspectable const& value);
};

struct WINRT_EBO UIElementCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement>,
    impl::require<UIElementCollection, Windows::UI::Xaml::Controls::IUIElementCollection>
{
    UIElementCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserControl :
    Windows::UI::Xaml::Controls::IUserControl,
    impl::base<UserControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<UserControl, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    UserControl(std::nullptr_t) noexcept {}
    UserControl();
    static Windows::UI::Xaml::DependencyProperty ContentProperty();
};

struct WINRT_EBO VariableSizedWrapGrid :
    Windows::UI::Xaml::Controls::IVariableSizedWrapGrid,
    impl::base<VariableSizedWrapGrid, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<VariableSizedWrapGrid, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    VariableSizedWrapGrid(std::nullptr_t) noexcept {}
    VariableSizedWrapGrid();
    static Windows::UI::Xaml::DependencyProperty ItemHeightProperty();
    static Windows::UI::Xaml::DependencyProperty ItemWidthProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalChildrenAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalChildrenAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty MaximumRowsOrColumnsProperty();
    static Windows::UI::Xaml::DependencyProperty RowSpanProperty();
    static int32_t GetRowSpan(Windows::UI::Xaml::UIElement const& element);
    static void SetRowSpan(Windows::UI::Xaml::UIElement const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty ColumnSpanProperty();
    static int32_t GetColumnSpan(Windows::UI::Xaml::UIElement const& element);
    static void SetColumnSpan(Windows::UI::Xaml::UIElement const& element, int32_t value);
};

struct WINRT_EBO Viewbox :
    Windows::UI::Xaml::Controls::IViewbox,
    impl::base<Viewbox, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Viewbox, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Viewbox(std::nullptr_t) noexcept {}
    Viewbox();
    static Windows::UI::Xaml::DependencyProperty StretchProperty();
    static Windows::UI::Xaml::DependencyProperty StretchDirectionProperty();
};

struct WINRT_EBO VirtualizingPanel :
    Windows::UI::Xaml::Controls::IVirtualizingPanel,
    impl::base<VirtualizingPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<VirtualizingPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    VirtualizingPanel(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VirtualizingStackPanel :
    Windows::UI::Xaml::Controls::IVirtualizingStackPanel,
    impl::base<VirtualizingStackPanel, Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel, Windows::UI::Xaml::Controls::VirtualizingPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<VirtualizingStackPanel, Windows::UI::Xaml::Controls::IInsertionPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IVirtualizingPanel, Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, Windows::UI::Xaml::Controls::IVirtualizingStackPanelOverrides, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    VirtualizingStackPanel(std::nullptr_t) noexcept {}
    VirtualizingStackPanel();
    static Windows::UI::Xaml::DependencyProperty AreScrollSnapPointsRegularProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty VirtualizationModeProperty();
    static Windows::UI::Xaml::Controls::VirtualizationMode GetVirtualizationMode(Windows::UI::Xaml::DependencyObject const& element);
    static void SetVirtualizationMode(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Controls::VirtualizationMode const& value);
    static Windows::UI::Xaml::DependencyProperty IsVirtualizingProperty();
    static bool GetIsVirtualizing(Windows::UI::Xaml::DependencyObject const& o);
};

struct WINRT_EBO WebView :
    Windows::UI::Xaml::Controls::IWebView,
    impl::base<WebView, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<WebView, Windows::UI::Xaml::Controls::IWebView2, Windows::UI::Xaml::Controls::IWebView3, Windows::UI::Xaml::Controls::IWebView4, Windows::UI::Xaml::Controls::IWebView5, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    WebView(std::nullptr_t) noexcept {}
    WebView();
    WebView(Windows::UI::Xaml::Controls::WebViewExecutionMode const& executionMode);
    [[deprecated("AnyScriptNotifyUri is unavailable for releases beginning with Windows 8.1. Instead, list URIs under ApplicationContentUriRules in the package manifest. For more info, see the AnyScriptNotifyUri documentation.")]] static Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> AnyScriptNotifyUri();
    static Windows::UI::Xaml::DependencyProperty SourceProperty();
    [[deprecated("AllowedScriptNotifyUris is unavailable for releases beginning with Windows 8.1. Instead, list URIs under ApplicationContentUriRules in the package manifest. For more info, see the AllowedScriptNotifyUris documentation.")]] static Windows::UI::Xaml::DependencyProperty AllowedScriptNotifyUrisProperty();
    [[deprecated("Use CaptureSelectedContentToDataPackageAsync instead of DataTransferPackage. For more info, see MSDN.")]] static Windows::UI::Xaml::DependencyProperty DataTransferPackageProperty();
    static Windows::UI::Xaml::DependencyProperty CanGoBackProperty();
    static Windows::UI::Xaml::DependencyProperty CanGoForwardProperty();
    static Windows::UI::Xaml::DependencyProperty DocumentTitleProperty();
    static Windows::UI::Xaml::DependencyProperty DefaultBackgroundColorProperty();
    static Windows::UI::Xaml::DependencyProperty ContainsFullScreenElementProperty();
    static Windows::UI::Xaml::Controls::WebViewExecutionMode DefaultExecutionMode();
    static Windows::Foundation::IAsyncAction ClearTemporaryWebDataAsync();
    static Windows::UI::Xaml::DependencyProperty XYFocusLeftProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusRightProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusUpProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusDownProperty();
};

struct WINRT_EBO WebViewBrush :
    Windows::UI::Xaml::Controls::IWebViewBrush,
    impl::base<WebViewBrush, Windows::UI::Xaml::Media::TileBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
    impl::require<WebViewBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::ITileBrush>
{
    WebViewBrush(std::nullptr_t) noexcept {}
    WebViewBrush();
    static Windows::UI::Xaml::DependencyProperty SourceNameProperty();
};

struct WINRT_EBO WebViewContentLoadingEventArgs :
    Windows::UI::Xaml::Controls::IWebViewContentLoadingEventArgs
{
    WebViewContentLoadingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewDOMContentLoadedEventArgs :
    Windows::UI::Xaml::Controls::IWebViewDOMContentLoadedEventArgs
{
    WebViewDOMContentLoadedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewDeferredPermissionRequest :
    Windows::UI::Xaml::Controls::IWebViewDeferredPermissionRequest
{
    WebViewDeferredPermissionRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewLongRunningScriptDetectedEventArgs :
    Windows::UI::Xaml::Controls::IWebViewLongRunningScriptDetectedEventArgs
{
    WebViewLongRunningScriptDetectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewNavigationCompletedEventArgs :
    Windows::UI::Xaml::Controls::IWebViewNavigationCompletedEventArgs
{
    WebViewNavigationCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewNavigationFailedEventArgs :
    Windows::UI::Xaml::Controls::IWebViewNavigationFailedEventArgs
{
    WebViewNavigationFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewNavigationStartingEventArgs :
    Windows::UI::Xaml::Controls::IWebViewNavigationStartingEventArgs
{
    WebViewNavigationStartingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewNewWindowRequestedEventArgs :
    Windows::UI::Xaml::Controls::IWebViewNewWindowRequestedEventArgs
{
    WebViewNewWindowRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewPermissionRequest :
    Windows::UI::Xaml::Controls::IWebViewPermissionRequest
{
    WebViewPermissionRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewPermissionRequestedEventArgs :
    Windows::UI::Xaml::Controls::IWebViewPermissionRequestedEventArgs
{
    WebViewPermissionRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewSettings :
    Windows::UI::Xaml::Controls::IWebViewSettings
{
    WebViewSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewUnsupportedUriSchemeIdentifiedEventArgs :
    Windows::UI::Xaml::Controls::IWebViewUnsupportedUriSchemeIdentifiedEventArgs
{
    WebViewUnsupportedUriSchemeIdentifiedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebViewUnviewableContentIdentifiedEventArgs :
    Windows::UI::Xaml::Controls::IWebViewUnviewableContentIdentifiedEventArgs,
    impl::require<WebViewUnviewableContentIdentifiedEventArgs, Windows::UI::Xaml::Controls::IWebViewUnviewableContentIdentifiedEventArgs2>
{
    WebViewUnviewableContentIdentifiedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WrapGrid :
    Windows::UI::Xaml::Controls::IWrapGrid,
    impl::base<WrapGrid, Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel, Windows::UI::Xaml::Controls::VirtualizingPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<WrapGrid, Windows::UI::Xaml::Controls::IInsertionPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IVirtualizingPanel, Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    WrapGrid(std::nullptr_t) noexcept {}
    WrapGrid();
    static Windows::UI::Xaml::DependencyProperty ItemWidthProperty();
    static Windows::UI::Xaml::DependencyProperty ItemHeightProperty();
    static Windows::UI::Xaml::DependencyProperty OrientationProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalChildrenAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalChildrenAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty MaximumRowsOrColumnsProperty();
};

template <typename D>
class IAppBarOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IAppBarOverrides = winrt::Windows::UI::Xaml::Controls::IAppBarOverrides;

    void OnClosed(Windows::Foundation::IInspectable const& e) const;
    void OnOpened(Windows::Foundation::IInspectable const& e) const;
};

template <typename D>
class IAppBarOverrides3T
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IAppBarOverrides3 = winrt::Windows::UI::Xaml::Controls::IAppBarOverrides3;

    void OnClosing(Windows::Foundation::IInspectable const& e) const;
    void OnOpening(Windows::Foundation::IInspectable const& e) const;
};

template <typename D>
class IComboBoxOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IComboBoxOverrides = winrt::Windows::UI::Xaml::Controls::IComboBoxOverrides;

    void OnDropDownClosed(Windows::Foundation::IInspectable const& e) const;
    void OnDropDownOpened(Windows::Foundation::IInspectable const& e) const;
};

template <typename D>
class IContentControlOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IContentControlOverrides = winrt::Windows::UI::Xaml::Controls::IContentControlOverrides;

    void OnContentChanged(Windows::Foundation::IInspectable const& oldContent, Windows::Foundation::IInspectable const& newContent) const;
    void OnContentTemplateChanged(Windows::UI::Xaml::DataTemplate const& oldContentTemplate, Windows::UI::Xaml::DataTemplate const& newContentTemplate) const;
    void OnContentTemplateSelectorChanged(Windows::UI::Xaml::Controls::DataTemplateSelector const& oldContentTemplateSelector, Windows::UI::Xaml::Controls::DataTemplateSelector const& newContentTemplateSelector) const;
};

template <typename D>
class IContentPresenterOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IContentPresenterOverrides = winrt::Windows::UI::Xaml::Controls::IContentPresenterOverrides;

    void OnContentTemplateChanged(Windows::UI::Xaml::DataTemplate const& oldContentTemplate, Windows::UI::Xaml::DataTemplate const& newContentTemplate) const;
    void OnContentTemplateSelectorChanged(Windows::UI::Xaml::Controls::DataTemplateSelector const& oldContentTemplateSelector, Windows::UI::Xaml::Controls::DataTemplateSelector const& newContentTemplateSelector) const;
};

template <typename D>
class IControlOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IControlOverrides = winrt::Windows::UI::Xaml::Controls::IControlOverrides;

    void OnPointerEntered(Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    void OnPointerPressed(Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    void OnPointerMoved(Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    void OnPointerReleased(Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    void OnPointerExited(Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    void OnPointerCaptureLost(Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    void OnPointerCanceled(Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    void OnPointerWheelChanged(Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    void OnTapped(Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e) const;
    void OnDoubleTapped(Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs const& e) const;
    void OnHolding(Windows::UI::Xaml::Input::HoldingRoutedEventArgs const& e) const;
    void OnRightTapped(Windows::UI::Xaml::Input::RightTappedRoutedEventArgs const& e) const;
    void OnManipulationStarting(Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs const& e) const;
    void OnManipulationInertiaStarting(Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs const& e) const;
    void OnManipulationStarted(Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs const& e) const;
    void OnManipulationDelta(Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs const& e) const;
    void OnManipulationCompleted(Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs const& e) const;
    void OnKeyUp(Windows::UI::Xaml::Input::KeyRoutedEventArgs const& e) const;
    void OnKeyDown(Windows::UI::Xaml::Input::KeyRoutedEventArgs const& e) const;
    void OnGotFocus(Windows::UI::Xaml::RoutedEventArgs const& e) const;
    void OnLostFocus(Windows::UI::Xaml::RoutedEventArgs const& e) const;
    void OnDragEnter(Windows::UI::Xaml::DragEventArgs const& e) const;
    void OnDragLeave(Windows::UI::Xaml::DragEventArgs const& e) const;
    void OnDragOver(Windows::UI::Xaml::DragEventArgs const& e) const;
    void OnDrop(Windows::UI::Xaml::DragEventArgs const& e) const;
};

template <typename D>
class IDataTemplateSelectorOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IDataTemplateSelectorOverrides = winrt::Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides;

    Windows::UI::Xaml::DataTemplate SelectTemplateCore(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::DependencyObject const& container) const;
};

template <typename D>
class IDataTemplateSelectorOverrides2T
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IDataTemplateSelectorOverrides2 = winrt::Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides2;

    Windows::UI::Xaml::DataTemplate SelectTemplateCore(Windows::Foundation::IInspectable const& item) const;
};

template <typename D>
class IGroupStyleSelectorOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IGroupStyleSelectorOverrides = winrt::Windows::UI::Xaml::Controls::IGroupStyleSelectorOverrides;

    Windows::UI::Xaml::Controls::GroupStyle SelectGroupStyleCore(Windows::Foundation::IInspectable const& group, uint32_t level) const;
};

template <typename D>
class IInkToolbarCustomPenOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IInkToolbarCustomPenOverrides = winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomPenOverrides;

    Windows::UI::Input::Inking::InkDrawingAttributes CreateInkDrawingAttributesCore(Windows::UI::Xaml::Media::Brush const& brush, double strokeWidth) const;
};

template <typename D>
class IItemsControlOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IItemsControlOverrides = winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides;

    bool IsItemItsOwnContainerOverride(Windows::Foundation::IInspectable const& item) const;
    Windows::UI::Xaml::DependencyObject GetContainerForItemOverride() const;
    void ClearContainerForItemOverride(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::IInspectable const& item) const;
    void PrepareContainerForItemOverride(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::IInspectable const& item) const;
    void OnItemsChanged(Windows::Foundation::IInspectable const& e) const;
    void OnItemContainerStyleChanged(Windows::UI::Xaml::Style const& oldItemContainerStyle, Windows::UI::Xaml::Style const& newItemContainerStyle) const;
    void OnItemContainerStyleSelectorChanged(Windows::UI::Xaml::Controls::StyleSelector const& oldItemContainerStyleSelector, Windows::UI::Xaml::Controls::StyleSelector const& newItemContainerStyleSelector) const;
    void OnItemTemplateChanged(Windows::UI::Xaml::DataTemplate const& oldItemTemplate, Windows::UI::Xaml::DataTemplate const& newItemTemplate) const;
    void OnItemTemplateSelectorChanged(Windows::UI::Xaml::Controls::DataTemplateSelector const& oldItemTemplateSelector, Windows::UI::Xaml::Controls::DataTemplateSelector const& newItemTemplateSelector) const;
    void OnGroupStyleSelectorChanged(Windows::UI::Xaml::Controls::GroupStyleSelector const& oldGroupStyleSelector, Windows::UI::Xaml::Controls::GroupStyleSelector const& newGroupStyleSelector) const;
};

template <typename D>
class IPageOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IPageOverrides = winrt::Windows::UI::Xaml::Controls::IPageOverrides;

    void OnNavigatedFrom(Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
    void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
    void OnNavigatingFrom(Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const& e) const;
};

template <typename D>
class IStyleSelectorOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IStyleSelectorOverrides = winrt::Windows::UI::Xaml::Controls::IStyleSelectorOverrides;

    Windows::UI::Xaml::Style SelectStyleCore(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::DependencyObject const& container) const;
};

template <typename D>
class IToggleSwitchOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IToggleSwitchOverrides = winrt::Windows::UI::Xaml::Controls::IToggleSwitchOverrides;

    void OnToggled() const;
    void OnOnContentChanged(Windows::Foundation::IInspectable const& oldContent, Windows::Foundation::IInspectable const& newContent) const;
    void OnOffContentChanged(Windows::Foundation::IInspectable const& oldContent, Windows::Foundation::IInspectable const& newContent) const;
    void OnHeaderChanged(Windows::Foundation::IInspectable const& oldContent, Windows::Foundation::IInspectable const& newContent) const;
};

template <typename D>
class IVirtualizingPanelOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IVirtualizingPanelOverrides = winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides;

    void OnItemsChanged(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs const& args) const;
    void OnClearChildren() const;
    void BringIndexIntoView(int32_t index) const;
};

template <typename D>
class IVirtualizingStackPanelOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IVirtualizingStackPanelOverrides = winrt::Windows::UI::Xaml::Controls::IVirtualizingStackPanelOverrides;

    void OnCleanUpVirtualizedItem(Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs const& e) const;
};

}
