// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Input.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct DispatchedHandler : Windows::Foundation::IUnknown
{
    DispatchedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DispatchedHandler(L lambda);
    template <typename F> DispatchedHandler(F* function);
    template <typename O, typename M> DispatchedHandler(O* object, M method);
    void operator()() const;
};

struct IdleDispatchedHandler : Windows::Foundation::IUnknown
{
    IdleDispatchedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> IdleDispatchedHandler(L lambda);
    template <typename F> IdleDispatchedHandler(F* function);
    template <typename O, typename M> IdleDispatchedHandler(O* object, M method);
    void operator()(Windows::UI::Core::IdleDispatchedHandlerArgs const& e) const;
};

struct CorePhysicalKeyStatus
{
    uint32_t RepeatCount;
    uint32_t ScanCode;
    bool IsExtendedKey;
    bool IsMenuKeyDown;
    bool WasKeyDown;
    bool IsKeyReleased;
};

struct CoreProximityEvaluation
{
    int32_t Score;
    Windows::Foundation::Point AdjustedPoint;
};

struct WINRT_EBO AcceleratorKeyEventArgs :
    Windows::UI::Core::IAcceleratorKeyEventArgs,
    impl::require<AcceleratorKeyEventArgs, Windows::UI::Core::IAcceleratorKeyEventArgs2>
{
    AcceleratorKeyEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AutomationProviderRequestedEventArgs :
    Windows::UI::Core::IAutomationProviderRequestedEventArgs
{
    AutomationProviderRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BackRequestedEventArgs :
    Windows::UI::Core::IBackRequestedEventArgs
{
    BackRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CharacterReceivedEventArgs :
    Windows::UI::Core::ICharacterReceivedEventArgs
{
    CharacterReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ClosestInteractiveBoundsRequestedEventArgs :
    Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs
{
    ClosestInteractiveBoundsRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreAcceleratorKeys :
    Windows::UI::Core::ICoreAcceleratorKeys
{
    CoreAcceleratorKeys(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreComponentInputSource :
    Windows::UI::Core::ICoreInputSourceBase,
    impl::require<CoreComponentInputSource, Windows::UI::Core::ICoreClosestInteractiveBoundsRequested, Windows::UI::Core::ICoreComponentFocusable, Windows::UI::Core::ICoreKeyboardInputSource, Windows::UI::Core::ICoreKeyboardInputSource2, Windows::UI::Core::ICorePointerInputSource, Windows::UI::Core::ICoreTouchHitTesting>
{
    CoreComponentInputSource(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreCursor :
    Windows::UI::Core::ICoreCursor
{
    CoreCursor(std::nullptr_t) noexcept {}
    CoreCursor(Windows::UI::Core::CoreCursorType const& type, uint32_t id);
};

struct WINRT_EBO CoreDispatcher :
    Windows::UI::Core::ICoreDispatcher,
    impl::require<CoreDispatcher, Windows::UI::Core::ICoreDispatcher2, Windows::UI::Core::ICoreDispatcherWithTaskPriority>
{
    CoreDispatcher(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreIndependentInputSource :
    Windows::UI::Core::ICoreInputSourceBase,
    impl::require<CoreIndependentInputSource, Windows::UI::Core::ICorePointerInputSource>
{
    CoreIndependentInputSource(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreWindow :
    Windows::UI::Core::ICoreWindow,
    impl::require<CoreWindow, Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::ICoreWindow2, Windows::UI::Core::ICoreWindow3, Windows::UI::Core::ICoreWindow4>
{
    CoreWindow(std::nullptr_t) noexcept {}
    using impl::consume_t<CoreWindow, Windows::UI::Core::ICoreWindow2>::PointerPosition;
    using Windows::UI::Core::ICoreWindow::PointerPosition;
    static Windows::UI::Core::CoreWindow GetForCurrentThread();
};

struct WINRT_EBO CoreWindowDialog :
    Windows::UI::Core::ICoreWindowDialog
{
    CoreWindowDialog(std::nullptr_t) noexcept {}
    CoreWindowDialog();
    CoreWindowDialog(param::hstring const& title);
};

struct WINRT_EBO CoreWindowEventArgs :
    Windows::UI::Core::ICoreWindowEventArgs
{
    CoreWindowEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreWindowFlyout :
    Windows::UI::Core::ICoreWindowFlyout
{
    CoreWindowFlyout(std::nullptr_t) noexcept {}
    CoreWindowFlyout(Windows::Foundation::Point const& position);
    CoreWindowFlyout(Windows::Foundation::Point const& position, param::hstring const& title);
};

struct WINRT_EBO CoreWindowPopupShowingEventArgs :
    Windows::UI::Core::ICoreWindowPopupShowingEventArgs
{
    CoreWindowPopupShowingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreWindowResizeManager :
    Windows::UI::Core::ICoreWindowResizeManager,
    impl::require<CoreWindowResizeManager, Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>
{
    CoreWindowResizeManager(std::nullptr_t) noexcept {}
    static Windows::UI::Core::CoreWindowResizeManager GetForCurrentView();
};

struct WINRT_EBO IdleDispatchedHandlerArgs :
    Windows::UI::Core::IIdleDispatchedHandlerArgs
{
    IdleDispatchedHandlerArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InputEnabledEventArgs :
    Windows::UI::Core::IInputEnabledEventArgs
{
    InputEnabledEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO KeyEventArgs :
    Windows::UI::Core::IKeyEventArgs,
    impl::require<KeyEventArgs, Windows::UI::Core::IKeyEventArgs2>
{
    KeyEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PointerEventArgs :
    Windows::UI::Core::IPointerEventArgs
{
    PointerEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemNavigationManager :
    Windows::UI::Core::ISystemNavigationManager,
    impl::require<SystemNavigationManager, Windows::UI::Core::ISystemNavigationManager2>
{
    SystemNavigationManager(std::nullptr_t) noexcept {}
    static Windows::UI::Core::SystemNavigationManager GetForCurrentView();
};

struct WINRT_EBO TouchHitTestingEventArgs :
    Windows::UI::Core::ITouchHitTestingEventArgs
{
    TouchHitTestingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VisibilityChangedEventArgs :
    Windows::UI::Core::IVisibilityChangedEventArgs
{
    VisibilityChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WindowActivatedEventArgs :
    Windows::UI::Core::IWindowActivatedEventArgs
{
    WindowActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WindowSizeChangedEventArgs :
    Windows::UI::Core::IWindowSizeChangedEventArgs
{
    WindowSizeChangedEventArgs(std::nullptr_t) noexcept {}
};

}
