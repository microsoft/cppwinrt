// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> Windows::UI::Core::CoreAcceleratorKeyEventType consume_Windows_UI_Core_IAcceleratorKeyEventArgs<D>::EventType() const
{
    Windows::UI::Core::CoreAcceleratorKeyEventType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IAcceleratorKeyEventArgs)->get_EventType(put_abi(value)));
    return value;
}

template <typename D> Windows::System::VirtualKey consume_Windows_UI_Core_IAcceleratorKeyEventArgs<D>::VirtualKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IAcceleratorKeyEventArgs)->get_VirtualKey(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus consume_Windows_UI_Core_IAcceleratorKeyEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IAcceleratorKeyEventArgs)->get_KeyStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Core_IAcceleratorKeyEventArgs2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IAcceleratorKeyEventArgs2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Core_IAutomationProviderRequestedEventArgs<D>::AutomationProvider() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::IAutomationProviderRequestedEventArgs)->get_AutomationProvider(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_IAutomationProviderRequestedEventArgs<D>::AutomationProvider(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::IAutomationProviderRequestedEventArgs)->put_AutomationProvider(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Core_IBackRequestedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IBackRequestedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_IBackRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::IBackRequestedEventArgs)->put_Handled(value));
}

template <typename D> uint32_t consume_Windows_UI_Core_ICharacterReceivedEventArgs<D>::KeyCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICharacterReceivedEventArgs)->get_KeyCode(&value));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus consume_Windows_UI_Core_ICharacterReceivedEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICharacterReceivedEventArgs)->get_KeyStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs<D>::PointerPosition() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs)->get_PointerPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs<D>::SearchBounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs)->get_SearchBounds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs<D>::ClosestInteractiveBounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs)->get_ClosestInteractiveBounds(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs<D>::ClosestInteractiveBounds(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs)->put_ClosestInteractiveBounds(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreAcceleratorKeys<D>::AcceleratorKeyActivated(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreAcceleratorKeys)->add_AcceleratorKeyActivated(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreAcceleratorKeys> consume_Windows_UI_Core_ICoreAcceleratorKeys<D>::AcceleratorKeyActivated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreAcceleratorKeys>(this, &abi_t<Windows::UI::Core::ICoreAcceleratorKeys>::remove_AcceleratorKeyActivated, AcceleratorKeyActivated(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreAcceleratorKeys<D>::AcceleratorKeyActivated(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreAcceleratorKeys)->remove_AcceleratorKeyActivated(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested<D>::ClosestInteractiveBoundsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreClosestInteractiveBoundsRequested)->add_ClosestInteractiveBoundsRequested(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreClosestInteractiveBoundsRequested> consume_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested<D>::ClosestInteractiveBoundsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>(this, &abi_t<Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>::remove_ClosestInteractiveBoundsRequested, ClosestInteractiveBoundsRequested(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested<D>::ClosestInteractiveBoundsRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreClosestInteractiveBoundsRequested)->remove_ClosestInteractiveBoundsRequested(get_abi(cookie)));
}

template <typename D> bool consume_Windows_UI_Core_ICoreComponentFocusable<D>::HasFocus() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreComponentFocusable)->get_HasFocus(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Core_ICoreComponentFocusable<D>::GotFocus(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreComponentFocusable)->add_GotFocus(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreComponentFocusable> consume_Windows_UI_Core_ICoreComponentFocusable<D>::GotFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreComponentFocusable>(this, &abi_t<Windows::UI::Core::ICoreComponentFocusable>::remove_GotFocus, GotFocus(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreComponentFocusable<D>::GotFocus(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreComponentFocusable)->remove_GotFocus(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreComponentFocusable<D>::LostFocus(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreComponentFocusable)->add_LostFocus(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreComponentFocusable> consume_Windows_UI_Core_ICoreComponentFocusable<D>::LostFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreComponentFocusable>(this, &abi_t<Windows::UI::Core::ICoreComponentFocusable>::remove_LostFocus, LostFocus(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreComponentFocusable<D>::LostFocus(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreComponentFocusable)->remove_LostFocus(get_abi(cookie)));
}

template <typename D> uint32_t consume_Windows_UI_Core_ICoreCursor<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreCursor)->get_Id(&value));
    return value;
}

template <typename D> Windows::UI::Core::CoreCursorType consume_Windows_UI_Core_ICoreCursor<D>::Type() const
{
    Windows::UI::Core::CoreCursorType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreCursor)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreCursor consume_Windows_UI_Core_ICoreCursorFactory<D>::CreateCursor(Windows::UI::Core::CoreCursorType const& type, uint32_t id) const
{
    Windows::UI::Core::CoreCursor cursor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreCursorFactory)->CreateCursor(get_abi(type), id, put_abi(cursor)));
    return cursor;
}

template <typename D> bool consume_Windows_UI_Core_ICoreDispatcher<D>::HasThreadAccess() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcher)->get_HasThreadAccess(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreDispatcher<D>::ProcessEvents(Windows::UI::Core::CoreProcessEventsOption const& options) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcher)->ProcessEvents(get_abi(options)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Core_ICoreDispatcher<D>::RunAsync(Windows::UI::Core::CoreDispatcherPriority const& priority, Windows::UI::Core::DispatchedHandler const& agileCallback) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcher)->RunAsync(get_abi(priority), get_abi(agileCallback), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Core_ICoreDispatcher<D>::RunIdleAsync(Windows::UI::Core::IdleDispatchedHandler const& agileCallback) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcher)->RunIdleAsync(get_abi(agileCallback), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Core_ICoreDispatcher2<D>::TryRunAsync(Windows::UI::Core::CoreDispatcherPriority const& priority, Windows::UI::Core::DispatchedHandler const& agileCallback) const
{
    Windows::Foundation::IAsyncOperation<bool> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcher2)->TryRunAsync(get_abi(priority), get_abi(agileCallback), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Core_ICoreDispatcher2<D>::TryRunIdleAsync(Windows::UI::Core::IdleDispatchedHandler const& agileCallback) const
{
    Windows::Foundation::IAsyncOperation<bool> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcher2)->TryRunIdleAsync(get_abi(agileCallback), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::UI::Core::CoreDispatcherPriority consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority<D>::CurrentPriority() const
{
    Windows::UI::Core::CoreDispatcherPriority value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcherWithTaskPriority)->get_CurrentPriority(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority<D>::CurrentPriority(Windows::UI::Core::CoreDispatcherPriority const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcherWithTaskPriority)->put_CurrentPriority(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority<D>::ShouldYield() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcherWithTaskPriority)->ShouldYield(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority<D>::ShouldYield(Windows::UI::Core::CoreDispatcherPriority const& priority) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcherWithTaskPriority)->ShouldYieldToPriority(get_abi(priority), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority<D>::StopProcessEvents() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreDispatcherWithTaskPriority)->StopProcessEvents());
}

template <typename D> Windows::UI::Core::CoreDispatcher consume_Windows_UI_Core_ICoreInputSourceBase<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreInputSourceBase)->get_Dispatcher(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Core_ICoreInputSourceBase<D>::IsInputEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreInputSourceBase)->get_IsInputEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreInputSourceBase<D>::IsInputEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreInputSourceBase)->put_IsInputEnabled(value));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreInputSourceBase<D>::InputEnabled(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::InputEnabledEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreInputSourceBase)->add_InputEnabled(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreInputSourceBase> consume_Windows_UI_Core_ICoreInputSourceBase<D>::InputEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::InputEnabledEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreInputSourceBase>(this, &abi_t<Windows::UI::Core::ICoreInputSourceBase>::remove_InputEnabled, InputEnabled(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreInputSourceBase<D>::InputEnabled(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreInputSourceBase)->remove_InputEnabled(get_abi(cookie)));
}

template <typename D> Windows::UI::Core::CoreVirtualKeyStates consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::GetCurrentKeyState(Windows::System::VirtualKey const& virtualKey) const
{
    Windows::UI::Core::CoreVirtualKeyStates KeyState{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreKeyboardInputSource)->GetCurrentKeyState(get_abi(virtualKey), put_abi(KeyState)));
    return KeyState;
}

template <typename D> event_token consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::CharacterReceived(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreKeyboardInputSource)->add_CharacterReceived(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreKeyboardInputSource> consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::CharacterReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreKeyboardInputSource>(this, &abi_t<Windows::UI::Core::ICoreKeyboardInputSource>::remove_CharacterReceived, CharacterReceived(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::CharacterReceived(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreKeyboardInputSource)->remove_CharacterReceived(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::KeyDown(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreKeyboardInputSource)->add_KeyDown(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreKeyboardInputSource> consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::KeyDown(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreKeyboardInputSource>(this, &abi_t<Windows::UI::Core::ICoreKeyboardInputSource>::remove_KeyDown, KeyDown(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::KeyDown(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreKeyboardInputSource)->remove_KeyDown(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::KeyUp(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreKeyboardInputSource)->add_KeyUp(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreKeyboardInputSource> consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::KeyUp(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreKeyboardInputSource>(this, &abi_t<Windows::UI::Core::ICoreKeyboardInputSource>::remove_KeyUp, KeyUp(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreKeyboardInputSource<D>::KeyUp(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreKeyboardInputSource)->remove_KeyUp(get_abi(cookie)));
}

template <typename D> hstring consume_Windows_UI_Core_ICoreKeyboardInputSource2<D>::GetCurrentKeyEventDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreKeyboardInputSource2)->GetCurrentKeyEventDeviceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::ReleasePointerCapture() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->ReleasePointerCapture());
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::SetPointerCapture() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->SetPointerCapture());
}

template <typename D> bool consume_Windows_UI_Core_ICorePointerInputSource<D>::HasCapture() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->get_HasCapture(&value));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerPosition() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->get_PointerPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreCursor consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerCursor() const
{
    Windows::UI::Core::CoreCursor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->get_PointerCursor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerCursor(Windows::UI::Core::CoreCursor const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->put_PointerCursor(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerCaptureLost(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->add_PointerCaptureLost(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerInputSource> consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerCaptureLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerInputSource>(this, &abi_t<Windows::UI::Core::ICorePointerInputSource>::remove_PointerCaptureLost, PointerCaptureLost(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerCaptureLost(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->remove_PointerCaptureLost(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerEntered(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->add_PointerEntered(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerInputSource> consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerInputSource>(this, &abi_t<Windows::UI::Core::ICorePointerInputSource>::remove_PointerEntered, PointerEntered(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerEntered(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->remove_PointerEntered(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerExited(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->add_PointerExited(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerInputSource> consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerInputSource>(this, &abi_t<Windows::UI::Core::ICorePointerInputSource>::remove_PointerExited, PointerExited(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerExited(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->remove_PointerExited(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerMoved(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->add_PointerMoved(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerInputSource> consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerInputSource>(this, &abi_t<Windows::UI::Core::ICorePointerInputSource>::remove_PointerMoved, PointerMoved(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerMoved(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->remove_PointerMoved(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerPressed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->add_PointerPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerInputSource> consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerInputSource>(this, &abi_t<Windows::UI::Core::ICorePointerInputSource>::remove_PointerPressed, PointerPressed(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->remove_PointerPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerReleased(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->add_PointerReleased(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerInputSource> consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerInputSource>(this, &abi_t<Windows::UI::Core::ICorePointerInputSource>::remove_PointerReleased, PointerReleased(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerReleased(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->remove_PointerReleased(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerWheelChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->add_PointerWheelChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerInputSource> consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerWheelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerInputSource>(this, &abi_t<Windows::UI::Core::ICorePointerInputSource>::remove_PointerWheelChanged, PointerWheelChanged(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerInputSource<D>::PointerWheelChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerInputSource)->remove_PointerWheelChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedAway(Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerRedirector)->add_PointerRoutedAway(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerRedirector> consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedAway(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerRedirector>(this, &abi_t<Windows::UI::Core::ICorePointerRedirector>::remove_PointerRoutedAway, PointerRoutedAway(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedAway(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerRedirector)->remove_PointerRoutedAway(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedTo(Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerRedirector)->add_PointerRoutedTo(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerRedirector> consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedTo(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerRedirector>(this, &abi_t<Windows::UI::Core::ICorePointerRedirector>::remove_PointerRoutedTo, PointerRoutedTo(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedTo(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerRedirector)->remove_PointerRoutedTo(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerRedirector)->add_PointerRoutedReleased(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICorePointerRedirector> consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICorePointerRedirector>(this, &abi_t<Windows::UI::Core::ICorePointerRedirector>::remove_PointerRoutedReleased, PointerRoutedReleased(handler));
}

template <typename D> void consume_Windows_UI_Core_ICorePointerRedirector<D>::PointerRoutedReleased(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICorePointerRedirector)->remove_PointerRoutedReleased(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreTouchHitTesting<D>::TouchHitTesting(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreTouchHitTesting)->add_TouchHitTesting(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreTouchHitTesting> consume_Windows_UI_Core_ICoreTouchHitTesting<D>::TouchHitTesting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreTouchHitTesting>(this, &abi_t<Windows::UI::Core::ICoreTouchHitTesting>::remove_TouchHitTesting, TouchHitTesting(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreTouchHitTesting<D>::TouchHitTesting(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreTouchHitTesting)->remove_TouchHitTesting(get_abi(cookie)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Core_ICoreWindow<D>::AutomationHostProvider() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_AutomationHostProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Core_ICoreWindow<D>::Bounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_UI_Core_ICoreWindow<D>::CustomProperties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_CustomProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher consume_Windows_UI_Core_ICoreWindow<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_Dispatcher(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreWindowFlowDirection consume_Windows_UI_Core_ICoreWindow<D>::FlowDirection() const
{
    Windows::UI::Core::CoreWindowFlowDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_FlowDirection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::FlowDirection(Windows::UI::Core::CoreWindowFlowDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->put_FlowDirection(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Core_ICoreWindow<D>::IsInputEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_IsInputEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::IsInputEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->put_IsInputEnabled(value));
}

template <typename D> Windows::UI::Core::CoreCursor consume_Windows_UI_Core_ICoreWindow<D>::PointerCursor() const
{
    Windows::UI::Core::CoreCursor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_PointerCursor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::PointerCursor(Windows::UI::Core::CoreCursor const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->put_PointerCursor(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Core_ICoreWindow<D>::PointerPosition() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_PointerPosition(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Core_ICoreWindow<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->get_Visible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::Activate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->Activate());
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->Close());
}

template <typename D> Windows::UI::Core::CoreVirtualKeyStates consume_Windows_UI_Core_ICoreWindow<D>::GetAsyncKeyState(Windows::System::VirtualKey const& virtualKey) const
{
    Windows::UI::Core::CoreVirtualKeyStates KeyState{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->GetAsyncKeyState(get_abi(virtualKey), put_abi(KeyState)));
    return KeyState;
}

template <typename D> Windows::UI::Core::CoreVirtualKeyStates consume_Windows_UI_Core_ICoreWindow<D>::GetKeyState(Windows::System::VirtualKey const& virtualKey) const
{
    Windows::UI::Core::CoreVirtualKeyStates KeyState{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->GetKeyState(get_abi(virtualKey), put_abi(KeyState)));
    return KeyState;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::ReleasePointerCapture() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->ReleasePointerCapture());
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::SetPointerCapture() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->SetPointerCapture());
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::Activated(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_Activated(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::Activated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_Activated, Activated(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::Activated(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_Activated(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::AutomationProviderRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_AutomationProviderRequested(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::AutomationProviderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_AutomationProviderRequested, AutomationProviderRequested(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::AutomationProviderRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_AutomationProviderRequested(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::CharacterReceived(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_CharacterReceived(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::CharacterReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_CharacterReceived, CharacterReceived(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::CharacterReceived(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_CharacterReceived(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_Closed(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_Closed, Closed(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::Closed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_Closed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::InputEnabled(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_InputEnabled(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::InputEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_InputEnabled, InputEnabled(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::InputEnabled(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_InputEnabled(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::KeyDown(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_KeyDown(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::KeyDown(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_KeyDown, KeyDown(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::KeyDown(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_KeyDown(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::KeyUp(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_KeyUp(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::KeyUp(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_KeyUp, KeyUp(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::KeyUp(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_KeyUp(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::PointerCaptureLost(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_PointerCaptureLost(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::PointerCaptureLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_PointerCaptureLost, PointerCaptureLost(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::PointerCaptureLost(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_PointerCaptureLost(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::PointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_PointerEntered(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::PointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_PointerEntered, PointerEntered(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::PointerEntered(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_PointerEntered(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::PointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_PointerExited(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::PointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_PointerExited, PointerExited(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::PointerExited(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_PointerExited(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::PointerMoved(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_PointerMoved(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::PointerMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_PointerMoved, PointerMoved(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::PointerMoved(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_PointerMoved(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::PointerPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_PointerPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::PointerPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_PointerPressed, PointerPressed(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::PointerPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_PointerPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::PointerReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_PointerReleased(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::PointerReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_PointerReleased, PointerReleased(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::PointerReleased(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_PointerReleased(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::TouchHitTesting(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_TouchHitTesting(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::TouchHitTesting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_TouchHitTesting, TouchHitTesting(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::TouchHitTesting(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_TouchHitTesting(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::PointerWheelChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_PointerWheelChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::PointerWheelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_PointerWheelChanged, PointerWheelChanged(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::PointerWheelChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_PointerWheelChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::SizeChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_SizeChanged(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::SizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_SizeChanged, SizeChanged(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::SizeChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_SizeChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow<D>::VisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->add_VisibilityChanged(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow> consume_Windows_UI_Core_ICoreWindow<D>::VisibilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow>(this, &abi_t<Windows::UI::Core::ICoreWindow>::remove_VisibilityChanged, VisibilityChanged(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow<D>::VisibilityChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow)->remove_VisibilityChanged(get_abi(cookie)));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow2<D>::PointerPosition(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow2)->put_PointerPosition(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow3<D>::ClosestInteractiveBoundsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow3)->add_ClosestInteractiveBoundsRequested(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow3> consume_Windows_UI_Core_ICoreWindow3<D>::ClosestInteractiveBoundsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow3>(this, &abi_t<Windows::UI::Core::ICoreWindow3>::remove_ClosestInteractiveBoundsRequested, ClosestInteractiveBoundsRequested(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow3<D>::ClosestInteractiveBoundsRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow3)->remove_ClosestInteractiveBoundsRequested(get_abi(cookie)));
}

template <typename D> hstring consume_Windows_UI_Core_ICoreWindow3<D>::GetCurrentKeyEventDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow3)->GetCurrentKeyEventDeviceId(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow4<D>::ResizeStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow4)->add_ResizeStarted(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow4> consume_Windows_UI_Core_ICoreWindow4<D>::ResizeStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow4>(this, &abi_t<Windows::UI::Core::ICoreWindow4>::remove_ResizeStarted, ResizeStarted(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow4<D>::ResizeStarted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow4)->remove_ResizeStarted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindow4<D>::ResizeCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow4)->add_ResizeCompleted(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindow4> consume_Windows_UI_Core_ICoreWindow4<D>::ResizeCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindow4>(this, &abi_t<Windows::UI::Core::ICoreWindow4>::remove_ResizeCompleted, ResizeCompleted(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindow4<D>::ResizeCompleted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindow4)->remove_ResizeCompleted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindowDialog<D>::Showing(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->add_Showing(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindowDialog> consume_Windows_UI_Core_ICoreWindowDialog<D>::Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindowDialog>(this, &abi_t<Windows::UI::Core::ICoreWindowDialog>::remove_Showing, Showing(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowDialog<D>::Showing(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->remove_Showing(get_abi(cookie)));
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Core_ICoreWindowDialog<D>::MaxSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->get_MaxSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Core_ICoreWindowDialog<D>::MinSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->get_MinSize(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Core_ICoreWindowDialog<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowDialog<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->put_Title(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Core_ICoreWindowDialog<D>::IsInteractionDelayed() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->get_IsInteractionDelayed(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowDialog<D>::IsInteractionDelayed(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->put_IsInteractionDelayed(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> consume_Windows_UI_Core_ICoreWindowDialog<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->get_Commands(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Core_ICoreWindowDialog<D>::DefaultCommandIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->get_DefaultCommandIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowDialog<D>::DefaultCommandIndex(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->put_DefaultCommandIndex(value));
}

template <typename D> uint32_t consume_Windows_UI_Core_ICoreWindowDialog<D>::CancelCommandIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->get_CancelCommandIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowDialog<D>::CancelCommandIndex(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->put_CancelCommandIndex(value));
}

template <typename D> Windows::UI::Popups::UICommandInvokedHandler consume_Windows_UI_Core_ICoreWindowDialog<D>::BackButtonCommand() const
{
    Windows::UI::Popups::UICommandInvokedHandler value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->get_BackButtonCommand(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowDialog<D>::BackButtonCommand(Windows::UI::Popups::UICommandInvokedHandler const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->put_BackButtonCommand(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> consume_Windows_UI_Core_ICoreWindowDialog<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialog)->ShowAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::UI::Core::CoreWindowDialog consume_Windows_UI_Core_ICoreWindowDialogFactory<D>::CreateWithTitle(param::hstring const& title) const
{
    Windows::UI::Core::CoreWindowDialog coreWindowDialog{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowDialogFactory)->CreateWithTitle(get_abi(title), put_abi(coreWindowDialog)));
    return coreWindowDialog;
}

template <typename D> bool consume_Windows_UI_Core_ICoreWindowEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowEventArgs)->put_Handled(value));
}

template <typename D> event_token consume_Windows_UI_Core_ICoreWindowFlyout<D>::Showing(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->add_Showing(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Core::ICoreWindowFlyout> consume_Windows_UI_Core_ICoreWindowFlyout<D>::Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ICoreWindowFlyout>(this, &abi_t<Windows::UI::Core::ICoreWindowFlyout>::remove_Showing, Showing(handler));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowFlyout<D>::Showing(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->remove_Showing(get_abi(cookie)));
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Core_ICoreWindowFlyout<D>::MaxSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->get_MaxSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Core_ICoreWindowFlyout<D>::MinSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->get_MinSize(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Core_ICoreWindowFlyout<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowFlyout<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->put_Title(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Core_ICoreWindowFlyout<D>::IsInteractionDelayed() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->get_IsInteractionDelayed(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowFlyout<D>::IsInteractionDelayed(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->put_IsInteractionDelayed(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> consume_Windows_UI_Core_ICoreWindowFlyout<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->get_Commands(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Core_ICoreWindowFlyout<D>::DefaultCommandIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->get_DefaultCommandIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowFlyout<D>::DefaultCommandIndex(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->put_DefaultCommandIndex(value));
}

template <typename D> Windows::UI::Popups::UICommandInvokedHandler consume_Windows_UI_Core_ICoreWindowFlyout<D>::BackButtonCommand() const
{
    Windows::UI::Popups::UICommandInvokedHandler value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->get_BackButtonCommand(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowFlyout<D>::BackButtonCommand(Windows::UI::Popups::UICommandInvokedHandler const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->put_BackButtonCommand(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> consume_Windows_UI_Core_ICoreWindowFlyout<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyout)->ShowAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::UI::Core::CoreWindowFlyout consume_Windows_UI_Core_ICoreWindowFlyoutFactory<D>::Create(Windows::Foundation::Point const& position) const
{
    Windows::UI::Core::CoreWindowFlyout coreWindowFlyout{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyoutFactory)->Create(get_abi(position), put_abi(coreWindowFlyout)));
    return coreWindowFlyout;
}

template <typename D> Windows::UI::Core::CoreWindowFlyout consume_Windows_UI_Core_ICoreWindowFlyoutFactory<D>::CreateWithTitle(Windows::Foundation::Point const& position, param::hstring const& title) const
{
    Windows::UI::Core::CoreWindowFlyout coreWindowFlyout{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowFlyoutFactory)->CreateWithTitle(get_abi(position), get_abi(title), put_abi(coreWindowFlyout)));
    return coreWindowFlyout;
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowPopupShowingEventArgs<D>::SetDesiredSize(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowPopupShowingEventArgs)->SetDesiredSize(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowResizeManager<D>::NotifyLayoutCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowResizeManager)->NotifyLayoutCompleted());
}

template <typename D> void consume_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability<D>::ShouldWaitForLayoutCompletion(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability)->put_ShouldWaitForLayoutCompletion(value));
}

template <typename D> bool consume_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability<D>::ShouldWaitForLayoutCompletion() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability)->get_ShouldWaitForLayoutCompletion(&value));
    return value;
}

template <typename D> Windows::UI::Core::CoreWindowResizeManager consume_Windows_UI_Core_ICoreWindowResizeManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Core::CoreWindowResizeManager CoreWindowResizeManager{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowResizeManagerStatics)->GetForCurrentView(put_abi(CoreWindowResizeManager)));
    return CoreWindowResizeManager;
}

template <typename D> Windows::UI::Core::CoreWindow consume_Windows_UI_Core_ICoreWindowStatic<D>::GetForCurrentThread() const
{
    Windows::UI::Core::CoreWindow ppWindow{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ICoreWindowStatic)->GetForCurrentThread(put_abi(ppWindow)));
    return ppWindow;
}

template <typename D> bool consume_Windows_UI_Core_IIdleDispatchedHandlerArgs<D>::IsDispatcherIdle() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IIdleDispatchedHandlerArgs)->get_IsDispatcherIdle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_IInitializeWithCoreWindow<D>::Initialize(Windows::UI::Core::CoreWindow const& window) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::IInitializeWithCoreWindow)->Initialize(get_abi(window)));
}

template <typename D> bool consume_Windows_UI_Core_IInputEnabledEventArgs<D>::InputEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IInputEnabledEventArgs)->get_InputEnabled(&value));
    return value;
}

template <typename D> Windows::System::VirtualKey consume_Windows_UI_Core_IKeyEventArgs<D>::VirtualKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IKeyEventArgs)->get_VirtualKey(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus consume_Windows_UI_Core_IKeyEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IKeyEventArgs)->get_KeyStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Core_IKeyEventArgs2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IKeyEventArgs2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::PointerPoint consume_Windows_UI_Core_IPointerEventArgs<D>::CurrentPoint() const
{
    Windows::UI::Input::PointerPoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::IPointerEventArgs)->get_CurrentPoint(put_abi(value)));
    return value;
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_UI_Core_IPointerEventArgs<D>::KeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IPointerEventArgs)->get_KeyModifiers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> consume_Windows_UI_Core_IPointerEventArgs<D>::GetIntermediatePoints() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::IPointerEventArgs)->GetIntermediatePoints(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Core_ISystemNavigationManager<D>::BackRequested(Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ISystemNavigationManager)->add_BackRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Core::ISystemNavigationManager> consume_Windows_UI_Core_ISystemNavigationManager<D>::BackRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::ISystemNavigationManager>(this, &abi_t<Windows::UI::Core::ISystemNavigationManager>::remove_BackRequested, BackRequested(handler));
}

template <typename D> void consume_Windows_UI_Core_ISystemNavigationManager<D>::BackRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ISystemNavigationManager)->remove_BackRequested(get_abi(token)));
}

template <typename D> Windows::UI::Core::AppViewBackButtonVisibility consume_Windows_UI_Core_ISystemNavigationManager2<D>::AppViewBackButtonVisibility() const
{
    Windows::UI::Core::AppViewBackButtonVisibility value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ISystemNavigationManager2)->get_AppViewBackButtonVisibility(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ISystemNavigationManager2<D>::AppViewBackButtonVisibility(Windows::UI::Core::AppViewBackButtonVisibility const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ISystemNavigationManager2)->put_AppViewBackButtonVisibility(get_abi(value)));
}

template <typename D> Windows::UI::Core::SystemNavigationManager consume_Windows_UI_Core_ISystemNavigationManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Core::SystemNavigationManager loader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::ISystemNavigationManagerStatics)->GetForCurrentView(put_abi(loader)));
    return loader;
}

template <typename D> Windows::UI::Core::CoreProximityEvaluation consume_Windows_UI_Core_ITouchHitTestingEventArgs<D>::ProximityEvaluation() const
{
    Windows::UI::Core::CoreProximityEvaluation value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ITouchHitTestingEventArgs)->get_ProximityEvaluation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Core_ITouchHitTestingEventArgs<D>::ProximityEvaluation(Windows::UI::Core::CoreProximityEvaluation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::ITouchHitTestingEventArgs)->put_ProximityEvaluation(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Core_ITouchHitTestingEventArgs<D>::Point() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ITouchHitTestingEventArgs)->get_Point(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Core_ITouchHitTestingEventArgs<D>::BoundingBox() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ITouchHitTestingEventArgs)->get_BoundingBox(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreProximityEvaluation consume_Windows_UI_Core_ITouchHitTestingEventArgs<D>::EvaluateProximity(Windows::Foundation::Rect const& controlBoundingBox) const
{
    Windows::UI::Core::CoreProximityEvaluation proximityEvaluation{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ITouchHitTestingEventArgs)->EvaluateProximityToRect(get_abi(controlBoundingBox), put_abi(proximityEvaluation)));
    return proximityEvaluation;
}

template <typename D> Windows::UI::Core::CoreProximityEvaluation consume_Windows_UI_Core_ITouchHitTestingEventArgs<D>::EvaluateProximity(array_view<Windows::Foundation::Point const> controlVertices) const
{
    Windows::UI::Core::CoreProximityEvaluation proximityEvaluation{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::ITouchHitTestingEventArgs)->EvaluateProximityToPolygon(controlVertices.size(), get_abi(controlVertices), put_abi(proximityEvaluation)));
    return proximityEvaluation;
}

template <typename D> bool consume_Windows_UI_Core_IVisibilityChangedEventArgs<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IVisibilityChangedEventArgs)->get_Visible(&value));
    return value;
}

template <typename D> Windows::UI::Core::CoreWindowActivationState consume_Windows_UI_Core_IWindowActivatedEventArgs<D>::WindowActivationState() const
{
    Windows::UI::Core::CoreWindowActivationState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IWindowActivatedEventArgs)->get_WindowActivationState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Core_IWindowSizeChangedEventArgs<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::IWindowSizeChangedEventArgs)->get_Size(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::UI::Core::DispatchedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Core::DispatchedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Core::DispatchedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke() noexcept final
        {
            try
            {
                (*this)();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Core::IdleDispatchedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Core::IdleDispatchedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Core::IdleDispatchedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::Core::IdleDispatchedHandlerArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::UI::Core::IAcceleratorKeyEventArgs> : produce_base<D, Windows::UI::Core::IAcceleratorKeyEventArgs>
{
    HRESULT __stdcall get_EventType(abi_t<Windows::UI::Core::CoreAcceleratorKeyEventType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EventType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VirtualKey(abi_t<Windows::System::VirtualKey>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VirtualKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(abi_t<Windows::UI::Core::CorePhysicalKeyStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IAcceleratorKeyEventArgs2> : produce_base<D, Windows::UI::Core::IAcceleratorKeyEventArgs2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IAutomationProviderRequestedEventArgs> : produce_base<D, Windows::UI::Core::IAutomationProviderRequestedEventArgs>
{
    HRESULT __stdcall get_AutomationProvider(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutomationProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutomationProvider(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutomationProvider(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IBackRequestedEventArgs> : produce_base<D, Windows::UI::Core::IBackRequestedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICharacterReceivedEventArgs> : produce_base<D, Windows::UI::Core::ICharacterReceivedEventArgs>
{
    HRESULT __stdcall get_KeyCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(abi_t<Windows::UI::Core::CorePhysicalKeyStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs> : produce_base<D, Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>
{
    HRESULT __stdcall get_PointerPosition(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchBounds(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SearchBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosestInteractiveBounds(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosestInteractiveBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosestInteractiveBounds(abi_t<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosestInteractiveBounds(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreAcceleratorKeys> : produce_base<D, Windows::UI::Core::ICoreAcceleratorKeys>
{
    HRESULT __stdcall add_AcceleratorKeyActivated(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().AcceleratorKeyActivated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AcceleratorKeyActivated(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceleratorKeyActivated(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreClosestInteractiveBoundsRequested> : produce_base<D, Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>
{
    HRESULT __stdcall add_ClosestInteractiveBoundsRequested(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().ClosestInteractiveBoundsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ClosestInteractiveBoundsRequested(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosestInteractiveBoundsRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreComponentFocusable> : produce_base<D, Windows::UI::Core::ICoreComponentFocusable>
{
    HRESULT __stdcall get_HasFocus(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasFocus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GotFocus(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().GotFocus(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GotFocus(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GotFocus(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LostFocus(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().LostFocus(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LostFocus(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LostFocus(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreCursor> : produce_base<D, Windows::UI::Core::ICoreCursor>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<Windows::UI::Core::CoreCursorType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreCursorFactory> : produce_base<D, Windows::UI::Core::ICoreCursorFactory>
{
    HRESULT __stdcall CreateCursor(abi_t<Windows::UI::Core::CoreCursorType> type, uint32_t id, ::IUnknown** cursor) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cursor = detach_abi(this->shim().CreateCursor(*reinterpret_cast<Windows::UI::Core::CoreCursorType const*>(&type), id));
            return S_OK;
        }
        catch (...)
        {
            *cursor = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreDispatcher> : produce_base<D, Windows::UI::Core::ICoreDispatcher>
{
    HRESULT __stdcall get_HasThreadAccess(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasThreadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessEvents(abi_t<Windows::UI::Core::CoreProcessEventsOption> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessEvents(*reinterpret_cast<Windows::UI::Core::CoreProcessEventsOption const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RunAsync(abi_t<Windows::UI::Core::CoreDispatcherPriority> priority, ::IUnknown* agileCallback, ::IUnknown** asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().RunAsync(*reinterpret_cast<Windows::UI::Core::CoreDispatcherPriority const*>(&priority), *reinterpret_cast<Windows::UI::Core::DispatchedHandler const*>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RunIdleAsync(::IUnknown* agileCallback, ::IUnknown** asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().RunIdleAsync(*reinterpret_cast<Windows::UI::Core::IdleDispatchedHandler const*>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreDispatcher2> : produce_base<D, Windows::UI::Core::ICoreDispatcher2>
{
    HRESULT __stdcall TryRunAsync(abi_t<Windows::UI::Core::CoreDispatcherPriority> priority, ::IUnknown* agileCallback, ::IUnknown** asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().TryRunAsync(*reinterpret_cast<Windows::UI::Core::CoreDispatcherPriority const*>(&priority), *reinterpret_cast<Windows::UI::Core::DispatchedHandler const*>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryRunIdleAsync(::IUnknown* agileCallback, ::IUnknown** asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().TryRunIdleAsync(*reinterpret_cast<Windows::UI::Core::IdleDispatchedHandler const*>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreDispatcherWithTaskPriority> : produce_base<D, Windows::UI::Core::ICoreDispatcherWithTaskPriority>
{
    HRESULT __stdcall get_CurrentPriority(abi_t<Windows::UI::Core::CoreDispatcherPriority>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentPriority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CurrentPriority(abi_t<Windows::UI::Core::CoreDispatcherPriority> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentPriority(*reinterpret_cast<Windows::UI::Core::CoreDispatcherPriority const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShouldYield(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldYield());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShouldYieldToPriority(abi_t<Windows::UI::Core::CoreDispatcherPriority> priority, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldYield(*reinterpret_cast<Windows::UI::Core::CoreDispatcherPriority const*>(&priority)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopProcessEvents() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopProcessEvents();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreInputSourceBase> : produce_base<D, Windows::UI::Core::ICoreInputSourceBase>
{
    HRESULT __stdcall get_Dispatcher(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInputEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInputEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInputEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_InputEnabled(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().InputEnabled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::InputEnabledEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InputEnabled(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputEnabled(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreKeyboardInputSource> : produce_base<D, Windows::UI::Core::ICoreKeyboardInputSource>
{
    HRESULT __stdcall GetCurrentKeyState(abi_t<Windows::System::VirtualKey> virtualKey, abi_t<Windows::UI::Core::CoreVirtualKeyStates>* KeyState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *KeyState = detach_abi(this->shim().GetCurrentKeyState(*reinterpret_cast<Windows::System::VirtualKey const*>(&virtualKey)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CharacterReceived(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().CharacterReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CharacterReceived(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacterReceived(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyDown(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().KeyDown(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyDown(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyDown(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyUp(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().KeyUp(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyUp(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyUp(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreKeyboardInputSource2> : produce_base<D, Windows::UI::Core::ICoreKeyboardInputSource2>
{
    HRESULT __stdcall GetCurrentKeyEventDeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentKeyEventDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICorePointerInputSource> : produce_base<D, Windows::UI::Core::ICorePointerInputSource>
{
    HRESULT __stdcall ReleasePointerCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleasePointerCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPointerCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPointerCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasCapture(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasCapture());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerPosition(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCursor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerCursor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerCursor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerCursor(*reinterpret_cast<Windows::UI::Core::CoreCursor const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerCaptureLost(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerCaptureLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerCaptureLost(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerCaptureLost(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerEntered(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntered(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerEntered(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExited(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExited(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerExited(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoved(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerMoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoved(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerMoved(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressed(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerPressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressed(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleased(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerReleased(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleased(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerReleased(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerWheelChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerWheelChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerWheelChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerWheelChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICorePointerRedirector> : produce_base<D, Windows::UI::Core::ICorePointerRedirector>
{
    HRESULT __stdcall add_PointerRoutedAway(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerRoutedAway(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerRoutedAway(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerRoutedAway(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerRoutedTo(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerRoutedTo(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerRoutedTo(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerRoutedTo(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerRoutedReleased(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerRoutedReleased(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerRoutedReleased(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerRoutedReleased(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreTouchHitTesting> : produce_base<D, Windows::UI::Core::ICoreTouchHitTesting>
{
    HRESULT __stdcall add_TouchHitTesting(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().TouchHitTesting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TouchHitTesting(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TouchHitTesting(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindow> : produce_base<D, Windows::UI::Core::ICoreWindow>
{
    HRESULT __stdcall get_AutomationHostProvider(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutomationHostProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowDirection(abi_t<Windows::UI::Core::CoreWindowFlowDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlowDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FlowDirection(abi_t<Windows::UI::Core::CoreWindowFlowDirection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlowDirection(*reinterpret_cast<Windows::UI::Core::CoreWindowFlowDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInputEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInputEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInputEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCursor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerCursor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerCursor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerCursor(*reinterpret_cast<Windows::UI::Core::CoreCursor const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerPosition(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Activate() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Close() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAsyncKeyState(abi_t<Windows::System::VirtualKey> virtualKey, abi_t<Windows::UI::Core::CoreVirtualKeyStates>* KeyState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *KeyState = detach_abi(this->shim().GetAsyncKeyState(*reinterpret_cast<Windows::System::VirtualKey const*>(&virtualKey)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetKeyState(abi_t<Windows::System::VirtualKey> virtualKey, abi_t<Windows::UI::Core::CoreVirtualKeyStates>* KeyState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *KeyState = detach_abi(this->shim().GetKeyState(*reinterpret_cast<Windows::System::VirtualKey const*>(&virtualKey)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReleasePointerCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleasePointerCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPointerCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPointerCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Activated(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().Activated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AutomationProviderRequested(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().AutomationProviderRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AutomationProviderRequested(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutomationProviderRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CharacterReceived(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().CharacterReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CharacterReceived(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacterReceived(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_InputEnabled(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().InputEnabled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InputEnabled(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputEnabled(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyDown(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().KeyDown(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyDown(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyDown(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyUp(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().KeyUp(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyUp(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyUp(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerCaptureLost(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerCaptureLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerCaptureLost(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerCaptureLost(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerEntered(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntered(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerEntered(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExited(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExited(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerExited(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoved(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerMoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoved(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerMoved(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressed(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerPressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressed(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleased(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerReleased(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleased(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerReleased(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TouchHitTesting(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().TouchHitTesting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TouchHitTesting(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TouchHitTesting(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerWheelChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerWheelChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerWheelChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerWheelChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SizeChanged(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().SizeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SizeChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SizeChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisibilityChanged(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().VisibilityChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisibilityChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindow2> : produce_base<D, Windows::UI::Core::ICoreWindow2>
{
    HRESULT __stdcall put_PointerPosition(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerPosition(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindow3> : produce_base<D, Windows::UI::Core::ICoreWindow3>
{
    HRESULT __stdcall add_ClosestInteractiveBoundsRequested(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().ClosestInteractiveBoundsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ClosestInteractiveBoundsRequested(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosestInteractiveBoundsRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentKeyEventDeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentKeyEventDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindow4> : produce_base<D, Windows::UI::Core::ICoreWindow4>
{
    HRESULT __stdcall add_ResizeStarted(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().ResizeStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResizeStarted(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResizeStarted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ResizeCompleted(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().ResizeCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResizeCompleted(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResizeCompleted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowDialog> : produce_base<D, Windows::UI::Core::ICoreWindowDialog>
{
    HRESULT __stdcall add_Showing(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Showing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Showing(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Showing(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInteractionDelayed(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInteractionDelayed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInteractionDelayed(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInteractionDelayed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Commands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultCommandIndex(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CancelCommandIndex(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CancelCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CancelCommandIndex(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackButtonCommand(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackButtonCommand());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackButtonCommand(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackButtonCommand(*reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowDialogFactory> : produce_base<D, Windows::UI::Core::ICoreWindowDialogFactory>
{
    HRESULT __stdcall CreateWithTitle(HSTRING title, ::IUnknown** coreWindowDialog) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *coreWindowDialog = detach_abi(this->shim().CreateWithTitle(*reinterpret_cast<hstring const*>(&title)));
            return S_OK;
        }
        catch (...)
        {
            *coreWindowDialog = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowEventArgs> : produce_base<D, Windows::UI::Core::ICoreWindowEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowFlyout> : produce_base<D, Windows::UI::Core::ICoreWindowFlyout>
{
    HRESULT __stdcall add_Showing(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Showing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Showing(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Showing(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInteractionDelayed(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInteractionDelayed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInteractionDelayed(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInteractionDelayed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Commands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultCommandIndex(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackButtonCommand(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackButtonCommand());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackButtonCommand(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackButtonCommand(*reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowFlyoutFactory> : produce_base<D, Windows::UI::Core::ICoreWindowFlyoutFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Foundation::Point> position, ::IUnknown** coreWindowFlyout) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *coreWindowFlyout = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Point const*>(&position)));
            return S_OK;
        }
        catch (...)
        {
            *coreWindowFlyout = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTitle(abi_t<Windows::Foundation::Point> position, HSTRING title, ::IUnknown** coreWindowFlyout) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *coreWindowFlyout = detach_abi(this->shim().CreateWithTitle(*reinterpret_cast<Windows::Foundation::Point const*>(&position), *reinterpret_cast<hstring const*>(&title)));
            return S_OK;
        }
        catch (...)
        {
            *coreWindowFlyout = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowPopupShowingEventArgs> : produce_base<D, Windows::UI::Core::ICoreWindowPopupShowingEventArgs>
{
    HRESULT __stdcall SetDesiredSize(abi_t<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDesiredSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowResizeManager> : produce_base<D, Windows::UI::Core::ICoreWindowResizeManager>
{
    HRESULT __stdcall NotifyLayoutCompleted() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyLayoutCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability> : produce_base<D, Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>
{
    HRESULT __stdcall put_ShouldWaitForLayoutCompletion(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldWaitForLayoutCompletion(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldWaitForLayoutCompletion(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldWaitForLayoutCompletion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowResizeManagerStatics> : produce_base<D, Windows::UI::Core::ICoreWindowResizeManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** CoreWindowResizeManager) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *CoreWindowResizeManager = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *CoreWindowResizeManager = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowStatic> : produce_base<D, Windows::UI::Core::ICoreWindowStatic>
{
    HRESULT __stdcall GetForCurrentThread(::IUnknown** ppWindow) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppWindow = detach_abi(this->shim().GetForCurrentThread());
            return S_OK;
        }
        catch (...)
        {
            *ppWindow = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IIdleDispatchedHandlerArgs> : produce_base<D, Windows::UI::Core::IIdleDispatchedHandlerArgs>
{
    HRESULT __stdcall get_IsDispatcherIdle(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDispatcherIdle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IInitializeWithCoreWindow> : produce_base<D, Windows::UI::Core::IInitializeWithCoreWindow>
{
    HRESULT __stdcall Initialize(::IUnknown* window) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Initialize(*reinterpret_cast<Windows::UI::Core::CoreWindow const*>(&window));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IInputEnabledEventArgs> : produce_base<D, Windows::UI::Core::IInputEnabledEventArgs>
{
    HRESULT __stdcall get_InputEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IKeyEventArgs> : produce_base<D, Windows::UI::Core::IKeyEventArgs>
{
    HRESULT __stdcall get_VirtualKey(abi_t<Windows::System::VirtualKey>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VirtualKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(abi_t<Windows::UI::Core::CorePhysicalKeyStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IKeyEventArgs2> : produce_base<D, Windows::UI::Core::IKeyEventArgs2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IPointerEventArgs> : produce_base<D, Windows::UI::Core::IPointerEventArgs>
{
    HRESULT __stdcall get_CurrentPoint(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIntermediatePoints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIntermediatePoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ISystemNavigationManager> : produce_base<D, Windows::UI::Core::ISystemNavigationManager>
{
    HRESULT __stdcall add_BackRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BackRequested(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BackRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ISystemNavigationManager2> : produce_base<D, Windows::UI::Core::ISystemNavigationManager2>
{
    HRESULT __stdcall get_AppViewBackButtonVisibility(abi_t<Windows::UI::Core::AppViewBackButtonVisibility>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppViewBackButtonVisibility());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppViewBackButtonVisibility(abi_t<Windows::UI::Core::AppViewBackButtonVisibility> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppViewBackButtonVisibility(*reinterpret_cast<Windows::UI::Core::AppViewBackButtonVisibility const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ISystemNavigationManagerStatics> : produce_base<D, Windows::UI::Core::ISystemNavigationManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** loader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loader = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ITouchHitTestingEventArgs> : produce_base<D, Windows::UI::Core::ITouchHitTestingEventArgs>
{
    HRESULT __stdcall get_ProximityEvaluation(abi_t<Windows::UI::Core::CoreProximityEvaluation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProximityEvaluation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProximityEvaluation(abi_t<Windows::UI::Core::CoreProximityEvaluation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProximityEvaluation(*reinterpret_cast<Windows::UI::Core::CoreProximityEvaluation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Point(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Point());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingBox(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EvaluateProximityToRect(abi_t<Windows::Foundation::Rect> controlBoundingBox, abi_t<Windows::UI::Core::CoreProximityEvaluation>* proximityEvaluation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *proximityEvaluation = detach_abi(this->shim().EvaluateProximity(*reinterpret_cast<Windows::Foundation::Rect const*>(&controlBoundingBox)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EvaluateProximityToPolygon(uint32_t __controlVerticesSize, abi_t<Windows::Foundation::Point>* controlVertices, abi_t<Windows::UI::Core::CoreProximityEvaluation>* proximityEvaluation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *proximityEvaluation = detach_abi(this->shim().EvaluateProximity(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(controlVertices), reinterpret_cast<Windows::Foundation::Point const *>(controlVertices) + __controlVerticesSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IVisibilityChangedEventArgs> : produce_base<D, Windows::UI::Core::IVisibilityChangedEventArgs>
{
    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IWindowActivatedEventArgs> : produce_base<D, Windows::UI::Core::IWindowActivatedEventArgs>
{
    HRESULT __stdcall get_WindowActivationState(abi_t<Windows::UI::Core::CoreWindowActivationState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WindowActivationState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IWindowSizeChangedEventArgs> : produce_base<D, Windows::UI::Core::IWindowSizeChangedEventArgs>
{
    HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

inline CoreCursor::CoreCursor(Windows::UI::Core::CoreCursorType const& type, uint32_t id) :
    CoreCursor(get_activation_factory<CoreCursor, Windows::UI::Core::ICoreCursorFactory>().CreateCursor(type, id))
{}

inline Windows::UI::Core::CoreWindow CoreWindow::GetForCurrentThread()
{
    return get_activation_factory<CoreWindow, Windows::UI::Core::ICoreWindowStatic>().GetForCurrentThread();
}

inline CoreWindowDialog::CoreWindowDialog() :
    CoreWindowDialog(activate_instance<CoreWindowDialog>())
{}

inline CoreWindowDialog::CoreWindowDialog(param::hstring const& title) :
    CoreWindowDialog(get_activation_factory<CoreWindowDialog, Windows::UI::Core::ICoreWindowDialogFactory>().CreateWithTitle(title))
{}

inline CoreWindowFlyout::CoreWindowFlyout(Windows::Foundation::Point const& position) :
    CoreWindowFlyout(get_activation_factory<CoreWindowFlyout, Windows::UI::Core::ICoreWindowFlyoutFactory>().Create(position))
{}

inline CoreWindowFlyout::CoreWindowFlyout(Windows::Foundation::Point const& position, param::hstring const& title) :
    CoreWindowFlyout(get_activation_factory<CoreWindowFlyout, Windows::UI::Core::ICoreWindowFlyoutFactory>().CreateWithTitle(position, title))
{}

inline Windows::UI::Core::CoreWindowResizeManager CoreWindowResizeManager::GetForCurrentView()
{
    return get_activation_factory<CoreWindowResizeManager, Windows::UI::Core::ICoreWindowResizeManagerStatics>().GetForCurrentView();
}

inline Windows::UI::Core::SystemNavigationManager SystemNavigationManager::GetForCurrentView()
{
    return get_activation_factory<SystemNavigationManager, Windows::UI::Core::ISystemNavigationManagerStatics>().GetForCurrentView();
}

template <typename L> DispatchedHandler::DispatchedHandler(L handler) :
    DispatchedHandler(impl::make_delegate<DispatchedHandler>(std::forward<L>(handler)))
{}

template <typename F> DispatchedHandler::DispatchedHandler(F* handler) :
    DispatchedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> DispatchedHandler::DispatchedHandler(O* object, M method) :
    DispatchedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void DispatchedHandler::operator()() const
{
    check_hresult((*(abi_t<DispatchedHandler>**)this)->Invoke());
}

template <typename L> IdleDispatchedHandler::IdleDispatchedHandler(L handler) :
    IdleDispatchedHandler(impl::make_delegate<IdleDispatchedHandler>(std::forward<L>(handler)))
{}

template <typename F> IdleDispatchedHandler::IdleDispatchedHandler(F* handler) :
    IdleDispatchedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> IdleDispatchedHandler::IdleDispatchedHandler(O* object, M method) :
    IdleDispatchedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void IdleDispatchedHandler::operator()(Windows::UI::Core::IdleDispatchedHandlerArgs const& e) const
{
    check_hresult((*(abi_t<IdleDispatchedHandler>**)this)->Invoke(get_abi(e)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IAcceleratorKeyEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IBackRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IBackRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::ICharacterReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICharacterReceivedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreAcceleratorKeys> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreAcceleratorKeys> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreComponentFocusable> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreComponentFocusable> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreCursor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreCursor> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreCursorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreCursorFactory> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreDispatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreDispatcher> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreDispatcher2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreDispatcher2> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreDispatcherWithTaskPriority> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreDispatcherWithTaskPriority> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreInputSourceBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreInputSourceBase> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreKeyboardInputSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreKeyboardInputSource> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreKeyboardInputSource2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreKeyboardInputSource2> {};

template<> struct hash<winrt::Windows::UI::Core::ICorePointerInputSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICorePointerInputSource> {};

template<> struct hash<winrt::Windows::UI::Core::ICorePointerRedirector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICorePointerRedirector> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreTouchHitTesting> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreTouchHitTesting> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindow> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindow2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindow2> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindow3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindow3> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindow4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindow4> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowDialog> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowDialog> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowDialogFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowDialogFactory> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowFlyout> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowFlyout> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowFlyoutFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowFlyoutFactory> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowResizeManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowResizeManager> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowResizeManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowResizeManagerStatics> {};

template<> struct hash<winrt::Windows::UI::Core::ICoreWindowStatic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ICoreWindowStatic> {};

template<> struct hash<winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IInitializeWithCoreWindow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IInitializeWithCoreWindow> {};

template<> struct hash<winrt::Windows::UI::Core::IInputEnabledEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IInputEnabledEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IKeyEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IKeyEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IKeyEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IKeyEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Core::IPointerEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IPointerEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::ISystemNavigationManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ISystemNavigationManager> {};

template<> struct hash<winrt::Windows::UI::Core::ISystemNavigationManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ISystemNavigationManager2> {};

template<> struct hash<winrt::Windows::UI::Core::ISystemNavigationManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ISystemNavigationManagerStatics> {};

template<> struct hash<winrt::Windows::UI::Core::ITouchHitTestingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ITouchHitTestingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IVisibilityChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IVisibilityChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IWindowActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IWindowActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::IWindowSizeChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IWindowSizeChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::AcceleratorKeyEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AcceleratorKeyEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::BackRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::BackRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::CharacterReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CharacterReceivedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::CoreAcceleratorKeys> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreAcceleratorKeys> {};

template<> struct hash<winrt::Windows::UI::Core::CoreComponentInputSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreComponentInputSource> {};

template<> struct hash<winrt::Windows::UI::Core::CoreCursor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreCursor> {};

template<> struct hash<winrt::Windows::UI::Core::CoreDispatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreDispatcher> {};

template<> struct hash<winrt::Windows::UI::Core::CoreIndependentInputSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreIndependentInputSource> {};

template<> struct hash<winrt::Windows::UI::Core::CoreWindow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreWindow> {};

template<> struct hash<winrt::Windows::UI::Core::CoreWindowDialog> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreWindowDialog> {};

template<> struct hash<winrt::Windows::UI::Core::CoreWindowEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreWindowEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::CoreWindowFlyout> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreWindowFlyout> {};

template<> struct hash<winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreWindowPopupShowingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::CoreWindowResizeManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::CoreWindowResizeManager> {};

template<> struct hash<winrt::Windows::UI::Core::IdleDispatchedHandlerArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::IdleDispatchedHandlerArgs> {};

template<> struct hash<winrt::Windows::UI::Core::InputEnabledEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::InputEnabledEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::KeyEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::KeyEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::PointerEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::PointerEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::SystemNavigationManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::SystemNavigationManager> {};

template<> struct hash<winrt::Windows::UI::Core::TouchHitTestingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::TouchHitTestingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::VisibilityChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::VisibilityChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::WindowActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::WindowActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Core::WindowSizeChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::WindowSizeChangedEventArgs> {};

}

WINRT_WARNING_POP
