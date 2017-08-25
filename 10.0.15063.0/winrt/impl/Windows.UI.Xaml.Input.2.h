// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Input.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Input.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input {

struct DoubleTappedEventHandler : Windows::Foundation::IUnknown
{
    DoubleTappedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DoubleTappedEventHandler(L lambda);
    template <typename F> DoubleTappedEventHandler(F* function);
    template <typename O, typename M> DoubleTappedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs const& e) const;
};

struct HoldingEventHandler : Windows::Foundation::IUnknown
{
    HoldingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> HoldingEventHandler(L lambda);
    template <typename F> HoldingEventHandler(F* function);
    template <typename O, typename M> HoldingEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::HoldingRoutedEventArgs const& e) const;
};

struct KeyEventHandler : Windows::Foundation::IUnknown
{
    KeyEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> KeyEventHandler(L lambda);
    template <typename F> KeyEventHandler(F* function);
    template <typename O, typename M> KeyEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs const& e) const;
};

struct ManipulationCompletedEventHandler : Windows::Foundation::IUnknown
{
    ManipulationCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ManipulationCompletedEventHandler(L lambda);
    template <typename F> ManipulationCompletedEventHandler(F* function);
    template <typename O, typename M> ManipulationCompletedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs const& e) const;
};

struct ManipulationDeltaEventHandler : Windows::Foundation::IUnknown
{
    ManipulationDeltaEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ManipulationDeltaEventHandler(L lambda);
    template <typename F> ManipulationDeltaEventHandler(F* function);
    template <typename O, typename M> ManipulationDeltaEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs const& e) const;
};

struct ManipulationInertiaStartingEventHandler : Windows::Foundation::IUnknown
{
    ManipulationInertiaStartingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ManipulationInertiaStartingEventHandler(L lambda);
    template <typename F> ManipulationInertiaStartingEventHandler(F* function);
    template <typename O, typename M> ManipulationInertiaStartingEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs const& e) const;
};

struct ManipulationStartedEventHandler : Windows::Foundation::IUnknown
{
    ManipulationStartedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ManipulationStartedEventHandler(L lambda);
    template <typename F> ManipulationStartedEventHandler(F* function);
    template <typename O, typename M> ManipulationStartedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs const& e) const;
};

struct ManipulationStartingEventHandler : Windows::Foundation::IUnknown
{
    ManipulationStartingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ManipulationStartingEventHandler(L lambda);
    template <typename F> ManipulationStartingEventHandler(F* function);
    template <typename O, typename M> ManipulationStartingEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs const& e) const;
};

struct PointerEventHandler : Windows::Foundation::IUnknown
{
    PointerEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PointerEventHandler(L lambda);
    template <typename F> PointerEventHandler(F* function);
    template <typename O, typename M> PointerEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
};

struct RightTappedEventHandler : Windows::Foundation::IUnknown
{
    RightTappedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> RightTappedEventHandler(L lambda);
    template <typename F> RightTappedEventHandler(F* function);
    template <typename O, typename M> RightTappedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::RightTappedRoutedEventArgs const& e) const;
};

struct TappedEventHandler : Windows::Foundation::IUnknown
{
    TappedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> TappedEventHandler(L lambda);
    template <typename F> TappedEventHandler(F* function);
    template <typename O, typename M> TappedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e) const;
};

struct WINRT_EBO AccessKeyDisplayDismissedEventArgs :
    Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs
{
    AccessKeyDisplayDismissedEventArgs(std::nullptr_t) noexcept {}
    AccessKeyDisplayDismissedEventArgs();
};

struct WINRT_EBO AccessKeyDisplayRequestedEventArgs :
    Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs
{
    AccessKeyDisplayRequestedEventArgs(std::nullptr_t) noexcept {}
    AccessKeyDisplayRequestedEventArgs();
};

struct WINRT_EBO AccessKeyInvokedEventArgs :
    Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs
{
    AccessKeyInvokedEventArgs(std::nullptr_t) noexcept {}
    AccessKeyInvokedEventArgs();
};

struct WINRT_EBO AccessKeyManager :
    Windows::UI::Xaml::Input::IAccessKeyManager
{
    AccessKeyManager(std::nullptr_t) noexcept {}
    static bool IsDisplayModeEnabled();
    static event_token IsDisplayModeEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& value);
    using IsDisplayModeEnabledChanged_revoker = factory_event_revoker<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>;
    static IsDisplayModeEnabledChanged_revoker IsDisplayModeEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& value);
    static void IsDisplayModeEnabledChanged(event_token const& token);
    static void ExitDisplayMode();
    static bool AreKeyTipsEnabled();
    static void AreKeyTipsEnabled(bool value);
};

struct WINRT_EBO ContextRequestedEventArgs :
    Windows::UI::Xaml::Input::IContextRequestedEventArgs,
    impl::base<ContextRequestedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ContextRequestedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ContextRequestedEventArgs(std::nullptr_t) noexcept {}
    ContextRequestedEventArgs();
};

struct WINRT_EBO DoubleTappedRoutedEventArgs :
    Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs,
    impl::base<DoubleTappedRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<DoubleTappedRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    DoubleTappedRoutedEventArgs(std::nullptr_t) noexcept {}
    DoubleTappedRoutedEventArgs();
};

struct WINRT_EBO FindNextElementOptions :
    Windows::UI::Xaml::Input::IFindNextElementOptions
{
    FindNextElementOptions(std::nullptr_t) noexcept {}
    FindNextElementOptions();
};

struct WINRT_EBO FocusManager :
    Windows::UI::Xaml::Input::IFocusManager
{
    FocusManager(std::nullptr_t) noexcept {}
    static Windows::Foundation::IInspectable GetFocusedElement();
    static bool TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection);
    static Windows::UI::Xaml::UIElement FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection);
    static Windows::UI::Xaml::UIElement FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::Foundation::Rect const& hintRect);
    static bool TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions);
    static Windows::UI::Xaml::DependencyObject FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection);
    static Windows::UI::Xaml::DependencyObject FindFirstFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope);
    static Windows::UI::Xaml::DependencyObject FindLastFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope);
    static Windows::UI::Xaml::DependencyObject FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions);
};

struct WINRT_EBO GettingFocusEventArgs :
    Windows::UI::Xaml::Input::IGettingFocusEventArgs,
    impl::base<GettingFocusEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<GettingFocusEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    GettingFocusEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HoldingRoutedEventArgs :
    Windows::UI::Xaml::Input::IHoldingRoutedEventArgs,
    impl::base<HoldingRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<HoldingRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    HoldingRoutedEventArgs(std::nullptr_t) noexcept {}
    HoldingRoutedEventArgs();
};

struct WINRT_EBO InertiaExpansionBehavior :
    Windows::UI::Xaml::Input::IInertiaExpansionBehavior
{
    InertiaExpansionBehavior(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InertiaRotationBehavior :
    Windows::UI::Xaml::Input::IInertiaRotationBehavior
{
    InertiaRotationBehavior(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InertiaTranslationBehavior :
    Windows::UI::Xaml::Input::IInertiaTranslationBehavior
{
    InertiaTranslationBehavior(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InputScope :
    Windows::UI::Xaml::Input::IInputScope,
    impl::base<InputScope, Windows::UI::Xaml::DependencyObject>,
    impl::require<InputScope, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    InputScope(std::nullptr_t) noexcept {}
    InputScope();
};

struct WINRT_EBO InputScopeName :
    Windows::UI::Xaml::Input::IInputScopeName,
    impl::base<InputScopeName, Windows::UI::Xaml::DependencyObject>,
    impl::require<InputScopeName, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    InputScopeName(std::nullptr_t) noexcept {}
    InputScopeName();
    InputScopeName(Windows::UI::Xaml::Input::InputScopeNameValue const& nameValue);
};

struct WINRT_EBO KeyRoutedEventArgs :
    Windows::UI::Xaml::Input::IKeyRoutedEventArgs,
    impl::base<KeyRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<KeyRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs, Windows::UI::Xaml::Input::IKeyRoutedEventArgs2, Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>
{
    KeyRoutedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LosingFocusEventArgs :
    Windows::UI::Xaml::Input::ILosingFocusEventArgs,
    impl::base<LosingFocusEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<LosingFocusEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    LosingFocusEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ManipulationCompletedRoutedEventArgs :
    Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs,
    impl::base<ManipulationCompletedRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ManipulationCompletedRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ManipulationCompletedRoutedEventArgs(std::nullptr_t) noexcept {}
    ManipulationCompletedRoutedEventArgs();
};

struct WINRT_EBO ManipulationDeltaRoutedEventArgs :
    Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs,
    impl::base<ManipulationDeltaRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ManipulationDeltaRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ManipulationDeltaRoutedEventArgs(std::nullptr_t) noexcept {}
    ManipulationDeltaRoutedEventArgs();
};

struct WINRT_EBO ManipulationInertiaStartingRoutedEventArgs :
    Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs,
    impl::base<ManipulationInertiaStartingRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ManipulationInertiaStartingRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ManipulationInertiaStartingRoutedEventArgs(std::nullptr_t) noexcept {}
    ManipulationInertiaStartingRoutedEventArgs();
};

struct WINRT_EBO ManipulationPivot :
    Windows::UI::Xaml::Input::IManipulationPivot
{
    ManipulationPivot(std::nullptr_t) noexcept {}
    ManipulationPivot();
    ManipulationPivot(Windows::Foundation::Point const& center, double radius);
};

struct WINRT_EBO ManipulationStartedRoutedEventArgs :
    Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs,
    impl::base<ManipulationStartedRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ManipulationStartedRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ManipulationStartedRoutedEventArgs(std::nullptr_t) noexcept {}
    ManipulationStartedRoutedEventArgs();
};

struct WINRT_EBO ManipulationStartingRoutedEventArgs :
    Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs,
    impl::base<ManipulationStartingRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ManipulationStartingRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ManipulationStartingRoutedEventArgs(std::nullptr_t) noexcept {}
    ManipulationStartingRoutedEventArgs();
};

struct WINRT_EBO NoFocusCandidateFoundEventArgs :
    Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs,
    impl::base<NoFocusCandidateFoundEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<NoFocusCandidateFoundEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    NoFocusCandidateFoundEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Pointer :
    Windows::UI::Xaml::Input::IPointer
{
    Pointer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PointerRoutedEventArgs :
    Windows::UI::Xaml::Input::IPointerRoutedEventArgs,
    impl::base<PointerRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<PointerRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    PointerRoutedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RightTappedRoutedEventArgs :
    Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs,
    impl::base<RightTappedRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<RightTappedRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    RightTappedRoutedEventArgs(std::nullptr_t) noexcept {}
    RightTappedRoutedEventArgs();
};

struct WINRT_EBO TappedRoutedEventArgs :
    Windows::UI::Xaml::Input::ITappedRoutedEventArgs,
    impl::base<TappedRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<TappedRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    TappedRoutedEventArgs(std::nullptr_t) noexcept {}
    TappedRoutedEventArgs();
};

}
