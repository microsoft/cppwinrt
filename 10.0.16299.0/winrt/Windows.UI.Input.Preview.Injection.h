// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Gaming.Input.2.h"
#include "winrt/impl/Windows.UI.Input.Preview.Injection.2.h"

namespace winrt::impl {

template <typename D> Windows::Gaming::Input::GamepadButtons consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::Buttons() const noexcept
{
    Windows::Gaming::Input::GamepadButtons value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_Buttons(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::Buttons(Windows::Gaming::Input::GamepadButtons const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_Buttons(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftThumbstickX() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_LeftThumbstickX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftThumbstickX(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_LeftThumbstickX(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftThumbstickY() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_LeftThumbstickY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftThumbstickY(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_LeftThumbstickY(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftTrigger() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_LeftTrigger(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftTrigger(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_LeftTrigger(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightThumbstickX() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_RightThumbstickX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightThumbstickX(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_RightThumbstickX(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightThumbstickY() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_RightThumbstickY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightThumbstickY(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_RightThumbstickY(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightTrigger() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_RightTrigger(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightTrigger(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_RightTrigger(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory<D>::CreateInstance(Windows::Gaming::Input::GamepadReading const& reading) const
{
    Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory)->CreateInstanceFromGamepadReading(get_abi(reading), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::KeyOptions() const noexcept
{
    Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->get_KeyOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->put_KeyOptions(get_abi(value)));
}

template <typename D> uint16_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::ScanCode() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->get_ScanCode(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::ScanCode(uint16_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->put_ScanCode(value));
}

template <typename D> uint16_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::VirtualKey() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->get_VirtualKey(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::VirtualKey(uint16_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->put_VirtualKey(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::MouseOptions() const noexcept
{
    Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_MouseOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_MouseOptions(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::MouseData() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_MouseData(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::MouseData(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_MouseData(value));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::DeltaY() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_DeltaY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::DeltaY(int32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_DeltaY(value));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::DeltaX() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_DeltaX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::DeltaX(int32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_DeltaX(value));
}

template <typename D> uint32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::TimeOffsetInMilliseconds() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_TimeOffsetInMilliseconds(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::TimeOffsetInMilliseconds(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_TimeOffsetInMilliseconds(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PointerInfo() const noexcept
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_PointerInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_PointerInfo(get_abi(value)));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPenButtons consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PenButtons() const noexcept
{
    Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_PenButtons(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_PenButtons(get_abi(value)));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPenParameters consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PenParameters() const noexcept
{
    Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_PenParameters(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_PenParameters(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::Pressure() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_Pressure(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::Pressure(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_Pressure(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::Rotation() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_Rotation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::Rotation(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_Rotation(value));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::TiltX() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_TiltX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::TiltX(int32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_TiltX(value));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::TiltY() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_TiltY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::TiltY(int32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_TiltY(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputRectangle consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Contact() const noexcept
{
    Windows::UI::Input::Preview::Injection::InjectedInputRectangle value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Contact(Windows::UI::Input::Preview::Injection::InjectedInputRectangle const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_Contact(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Orientation() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_Orientation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Orientation(int32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_Orientation(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::PointerInfo() const noexcept
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_PointerInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_PointerInfo(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Pressure() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_Pressure(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Pressure(double value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_Pressure(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::TouchParameters() const noexcept
{
    Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value{};
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_TouchParameters(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_TouchParameters(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectKeyboardInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectKeyboardInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectMouseInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectMouseInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InitializeTouchInjection(get_abi(visualMode)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectTouchInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectTouchInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::UninitializeTouchInjection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->UninitializeTouchInjection());
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InitializePenInjection(get_abi(visualMode)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectPenInput(Windows::UI::Input::Preview::Injection::InjectedInputPenInfo const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectPenInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::UninitializePenInjection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->UninitializePenInjection());
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut const& shortcut) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectShortcut(get_abi(shortcut)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>::InitializeGamepadInjection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector2)->InitializeGamepadInjection());
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>::InjectGamepadInput(Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector2)->InjectGamepadInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>::UninitializeGamepadInjection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector2)->UninitializeGamepadInjection());
}

template <typename D> Windows::UI::Input::Preview::Injection::InputInjector consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics<D>::TryCreate() const
{
    Windows::UI::Input::Preview::Injection::InputInjector instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjectorStatics)->TryCreate(put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Input::Preview::Injection::InputInjector consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2<D>::TryCreateForAppBroadcastOnly() const
{
    Windows::UI::Input::Preview::Injection::InputInjector instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjectorStatics2)->TryCreateForAppBroadcastOnly(put_abi(instance)));
    return instance;
}

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
{
    HRESULT __stdcall get_Buttons(Windows::Gaming::Input::GamepadButtons* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Buttons());
        return S_OK;
    }

    HRESULT __stdcall put_Buttons(Windows::Gaming::Input::GamepadButtons value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Buttons(*reinterpret_cast<Windows::Gaming::Input::GamepadButtons const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_LeftThumbstickX(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LeftThumbstickX());
        return S_OK;
    }

    HRESULT __stdcall put_LeftThumbstickX(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().LeftThumbstickX(value);
        return S_OK;
    }

    HRESULT __stdcall get_LeftThumbstickY(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LeftThumbstickY());
        return S_OK;
    }

    HRESULT __stdcall put_LeftThumbstickY(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().LeftThumbstickY(value);
        return S_OK;
    }

    HRESULT __stdcall get_LeftTrigger(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LeftTrigger());
        return S_OK;
    }

    HRESULT __stdcall put_LeftTrigger(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().LeftTrigger(value);
        return S_OK;
    }

    HRESULT __stdcall get_RightThumbstickX(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RightThumbstickX());
        return S_OK;
    }

    HRESULT __stdcall put_RightThumbstickX(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().RightThumbstickX(value);
        return S_OK;
    }

    HRESULT __stdcall get_RightThumbstickY(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RightThumbstickY());
        return S_OK;
    }

    HRESULT __stdcall put_RightThumbstickY(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().RightThumbstickY(value);
        return S_OK;
    }

    HRESULT __stdcall get_RightTrigger(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RightTrigger());
        return S_OK;
    }

    HRESULT __stdcall put_RightTrigger(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().RightTrigger(value);
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
{
    HRESULT __stdcall CreateInstanceFromGamepadReading(struct_of<64> reading, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Gaming::Input::GamepadReading const*>(&reading)));
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
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
{
    HRESULT __stdcall get_KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().KeyOptions());
        return S_OK;
    }

    HRESULT __stdcall put_KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().KeyOptions(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ScanCode(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ScanCode());
        return S_OK;
    }

    HRESULT __stdcall put_ScanCode(uint16_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ScanCode(value);
        return S_OK;
    }

    HRESULT __stdcall get_VirtualKey(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VirtualKey());
        return S_OK;
    }

    HRESULT __stdcall put_VirtualKey(uint16_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().VirtualKey(value);
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
{
    HRESULT __stdcall get_MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MouseOptions());
        return S_OK;
    }

    HRESULT __stdcall put_MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().MouseOptions(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_MouseData(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MouseData());
        return S_OK;
    }

    HRESULT __stdcall put_MouseData(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().MouseData(value);
        return S_OK;
    }

    HRESULT __stdcall get_DeltaY(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeltaY());
        return S_OK;
    }

    HRESULT __stdcall put_DeltaY(int32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().DeltaY(value);
        return S_OK;
    }

    HRESULT __stdcall get_DeltaX(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeltaX());
        return S_OK;
    }

    HRESULT __stdcall put_DeltaX(int32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().DeltaX(value);
        return S_OK;
    }

    HRESULT __stdcall get_TimeOffsetInMilliseconds(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TimeOffsetInMilliseconds());
        return S_OK;
    }

    HRESULT __stdcall put_TimeOffsetInMilliseconds(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().TimeOffsetInMilliseconds(value);
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
{
    HRESULT __stdcall get_PointerInfo(struct_of<32>* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PointerInfo());
        return S_OK;
    }

    HRESULT __stdcall put_PointerInfo(struct_of<32> value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().PointerInfo(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PenButtons());
        return S_OK;
    }

    HRESULT __stdcall put_PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().PenButtons(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PenParameters());
        return S_OK;
    }

    HRESULT __stdcall put_PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().PenParameters(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_Pressure(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Pressure());
        return S_OK;
    }

    HRESULT __stdcall put_Pressure(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Pressure(value);
        return S_OK;
    }

    HRESULT __stdcall get_Rotation(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Rotation());
        return S_OK;
    }

    HRESULT __stdcall put_Rotation(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Rotation(value);
        return S_OK;
    }

    HRESULT __stdcall get_TiltX(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TiltX());
        return S_OK;
    }

    HRESULT __stdcall put_TiltX(int32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().TiltX(value);
        return S_OK;
    }

    HRESULT __stdcall get_TiltY(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TiltY());
        return S_OK;
    }

    HRESULT __stdcall put_TiltY(int32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().TiltY(value);
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
{
    HRESULT __stdcall get_Contact(struct_of<16>* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Contact());
        return S_OK;
    }

    HRESULT __stdcall put_Contact(struct_of<16> value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Contact(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputRectangle const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_Orientation(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Orientation());
        return S_OK;
    }

    HRESULT __stdcall put_Orientation(int32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Orientation(value);
        return S_OK;
    }

    HRESULT __stdcall get_PointerInfo(struct_of<32>* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PointerInfo());
        return S_OK;
    }

    HRESULT __stdcall put_PointerInfo(struct_of<32> value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().PointerInfo(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_Pressure(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Pressure());
        return S_OK;
    }

    HRESULT __stdcall put_Pressure(double value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Pressure(value);
        return S_OK;
    }

    HRESULT __stdcall get_TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TouchParameters());
        return S_OK;
    }

    HRESULT __stdcall put_TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().TouchParameters(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters const*>(&value));
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjector> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjector>
{
    HRESULT __stdcall InjectKeyboardInput(::IUnknown* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectKeyboardInput(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InjectMouseInput(::IUnknown* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectMouseInput(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitializeTouchInjection(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const*>(&visualMode));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InjectTouchInput(::IUnknown* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectTouchInput(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UninitializeTouchInjection() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UninitializeTouchInjection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitializePenInjection(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const*>(&visualMode));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InjectPenInput(::IUnknown* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectPenInput(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UninitializePenInjection() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UninitializePenInjection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut shortcut) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectShortcut(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputShortcut const*>(&shortcut));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjector2> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjector2>
{
    HRESULT __stdcall InitializeGamepadInjection() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitializeGamepadInjection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InjectGamepadInput(::IUnknown* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectGamepadInput(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UninitializeGamepadInjection() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UninitializeGamepadInjection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
{
    HRESULT __stdcall TryCreate(::IUnknown** instance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().TryCreate());
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics2> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
{
    HRESULT __stdcall TryCreateForAppBroadcastOnly(::IUnknown** instance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().TryCreateForAppBroadcastOnly());
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection {

inline InjectedInputGamepadInfo::InjectedInputGamepadInfo() :
    InjectedInputGamepadInfo(activate_instance<InjectedInputGamepadInfo>())
{}

inline InjectedInputGamepadInfo::InjectedInputGamepadInfo(Windows::Gaming::Input::GamepadReading const& reading) :
    InjectedInputGamepadInfo(get_activation_factory<InjectedInputGamepadInfo, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>().CreateInstance(reading))
{}

inline InjectedInputKeyboardInfo::InjectedInputKeyboardInfo() :
    InjectedInputKeyboardInfo(activate_instance<InjectedInputKeyboardInfo>())
{}

inline InjectedInputMouseInfo::InjectedInputMouseInfo() :
    InjectedInputMouseInfo(activate_instance<InjectedInputMouseInfo>())
{}

inline InjectedInputPenInfo::InjectedInputPenInfo() :
    InjectedInputPenInfo(activate_instance<InjectedInputPenInfo>())
{}

inline InjectedInputTouchInfo::InjectedInputTouchInfo() :
    InjectedInputTouchInfo(activate_instance<InjectedInputTouchInfo>())
{}

inline Windows::UI::Input::Preview::Injection::InputInjector InputInjector::TryCreate()
{
    return get_activation_factory<InputInjector, Windows::UI::Input::Preview::Injection::IInputInjectorStatics>().TryCreate();
}

inline Windows::UI::Input::Preview::Injection::InputInjector InputInjector::TryCreateForAppBroadcastOnly()
{
    return get_activation_factory<InputInjector, Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>().TryCreateForAppBroadcastOnly();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInputInjector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInputInjector> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInputInjector2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInputInjector2> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics2> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> {};

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InputInjector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Preview::Injection::InputInjector> {};

}

WINRT_WARNING_POP
