// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Haptics.2.h"
#include "winrt/impl/Windows.Devices.Power.2.h"
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Gaming.Input.2.h"

namespace winrt::impl {

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel consume_Windows_Gaming_Input_IArcadeStick<D>::GetButtonLabel(Windows::Gaming::Input::ArcadeStickButtons const& button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IArcadeStick)->GetButtonLabel(get_abi(button), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::ArcadeStickReading consume_Windows_Gaming_Input_IArcadeStick<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::ArcadeStickReading value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IArcadeStick)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->add_ArcadeStickAdded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IArcadeStickStatics> consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IArcadeStickStatics>(this, &abi_t<Windows::Gaming::Input::IArcadeStickStatics>::remove_ArcadeStickAdded, ArcadeStickAdded(value));
}

template <typename D> void consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->remove_ArcadeStickAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->add_ArcadeStickRemoved(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IArcadeStickStatics> consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IArcadeStickStatics>(this, &abi_t<Windows::Gaming::Input::IArcadeStickStatics>::remove_ArcadeStickRemoved, ArcadeStickRemoved(value));
}

template <typename D> void consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->remove_ArcadeStickRemoved(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick> consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeSticks() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->get_ArcadeSticks(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::ArcadeStick consume_Windows_Gaming_Input_IArcadeStickStatics2<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
{
    Windows::Gaming::Input::ArcadeStick value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IArcadeStickStatics2)->FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerSwitchKind consume_Windows_Gaming_Input_IFlightStick<D>::HatSwitchKind() const noexcept
{
    Windows::Gaming::Input::GameControllerSwitchKind value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IFlightStick)->get_HatSwitchKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel consume_Windows_Gaming_Input_IFlightStick<D>::GetButtonLabel(Windows::Gaming::Input::FlightStickButtons const& button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IFlightStick)->GetButtonLabel(get_abi(button), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::FlightStickReading consume_Windows_Gaming_Input_IFlightStick<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::FlightStickReading value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IFlightStick)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IFlightStickStatics)->add_FlightStickAdded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IFlightStickStatics> consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IFlightStickStatics>(this, &abi_t<Windows::Gaming::Input::IFlightStickStatics>::remove_FlightStickAdded, FlightStickAdded(value));
}

template <typename D> void consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IFlightStickStatics)->remove_FlightStickAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IFlightStickStatics)->add_FlightStickRemoved(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IFlightStickStatics> consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IFlightStickStatics>(this, &abi_t<Windows::Gaming::Input::IFlightStickStatics>::remove_FlightStickRemoved, FlightStickRemoved(value));
}

template <typename D> void consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IFlightStickStatics)->remove_FlightStickRemoved(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick> consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightSticks() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IFlightStickStatics)->get_FlightSticks(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::FlightStick consume_Windows_Gaming_Input_IFlightStickStatics<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
{
    Windows::Gaming::Input::FlightStick value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IFlightStickStatics)->FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Gaming_Input_IGameController<D>::HeadsetConnected(Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGameController)->add_HeadsetConnected(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IGameController> consume_Windows_Gaming_Input_IGameController<D>::HeadsetConnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IGameController>(this, &abi_t<Windows::Gaming::Input::IGameController>::remove_HeadsetConnected, HeadsetConnected(value));
}

template <typename D> void consume_Windows_Gaming_Input_IGameController<D>::HeadsetConnected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGameController)->remove_HeadsetConnected(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Input_IGameController<D>::HeadsetDisconnected(Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGameController)->add_HeadsetDisconnected(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IGameController> consume_Windows_Gaming_Input_IGameController<D>::HeadsetDisconnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IGameController>(this, &abi_t<Windows::Gaming::Input::IGameController>::remove_HeadsetDisconnected, HeadsetDisconnected(value));
}

template <typename D> void consume_Windows_Gaming_Input_IGameController<D>::HeadsetDisconnected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGameController)->remove_HeadsetDisconnected(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Input_IGameController<D>::UserChanged(Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGameController)->add_UserChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IGameController> consume_Windows_Gaming_Input_IGameController<D>::UserChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IGameController>(this, &abi_t<Windows::Gaming::Input::IGameController>::remove_UserChanged, UserChanged(value));
}

template <typename D> void consume_Windows_Gaming_Input_IGameController<D>::UserChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGameController)->remove_UserChanged(get_abi(token)));
}

template <typename D> Windows::Gaming::Input::Headset consume_Windows_Gaming_Input_IGameController<D>::Headset() const noexcept
{
    Windows::Gaming::Input::Headset value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IGameController)->get_Headset(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Gaming_Input_IGameController<D>::IsWireless() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IGameController)->get_IsWireless(&value));
    return value;
}

template <typename D> Windows::System::User consume_Windows_Gaming_Input_IGameController<D>::User() const noexcept
{
    Windows::System::User value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IGameController)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Power::BatteryReport consume_Windows_Gaming_Input_IGameControllerBatteryInfo<D>::TryGetBatteryReport() const
{
    Windows::Devices::Power::BatteryReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGameControllerBatteryInfo)->TryGetBatteryReport(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GamepadVibration consume_Windows_Gaming_Input_IGamepad<D>::Vibration() const noexcept
{
    Windows::Gaming::Input::GamepadVibration value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IGamepad)->get_Vibration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_IGamepad<D>::Vibration(Windows::Gaming::Input::GamepadVibration const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IGamepad)->put_Vibration(get_abi(value)));
}

template <typename D> Windows::Gaming::Input::GamepadReading consume_Windows_Gaming_Input_IGamepad<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::GamepadReading value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGamepad)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel consume_Windows_Gaming_Input_IGamepad2<D>::GetButtonLabel(Windows::Gaming::Input::GamepadButtons const& button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGamepad2)->GetButtonLabel(get_abi(button), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGamepadStatics)->add_GamepadAdded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IGamepadStatics> consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IGamepadStatics>(this, &abi_t<Windows::Gaming::Input::IGamepadStatics>::remove_GamepadAdded, GamepadAdded(value));
}

template <typename D> void consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGamepadStatics)->remove_GamepadAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGamepadStatics)->add_GamepadRemoved(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IGamepadStatics> consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IGamepadStatics>(this, &abi_t<Windows::Gaming::Input::IGamepadStatics>::remove_GamepadRemoved, GamepadRemoved(value));
}

template <typename D> void consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGamepadStatics)->remove_GamepadRemoved(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad> consume_Windows_Gaming_Input_IGamepadStatics<D>::Gamepads() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IGamepadStatics)->get_Gamepads(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::Gamepad consume_Windows_Gaming_Input_IGamepadStatics2<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
{
    Windows::Gaming::Input::Gamepad value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IGamepadStatics2)->FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_Input_IHeadset<D>::CaptureDeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IHeadset)->get_CaptureDeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_Input_IHeadset<D>::RenderDeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IHeadset)->get_RenderDeviceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Gaming_Input_IRacingWheel<D>::HasClutch() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRacingWheel)->get_HasClutch(&value));
    return value;
}

template <typename D> bool consume_Windows_Gaming_Input_IRacingWheel<D>::HasHandbrake() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRacingWheel)->get_HasHandbrake(&value));
    return value;
}

template <typename D> bool consume_Windows_Gaming_Input_IRacingWheel<D>::HasPatternShifter() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRacingWheel)->get_HasPatternShifter(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Gaming_Input_IRacingWheel<D>::MaxPatternShifterGear() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRacingWheel)->get_MaxPatternShifterGear(&value));
    return value;
}

template <typename D> double consume_Windows_Gaming_Input_IRacingWheel<D>::MaxWheelAngle() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRacingWheel)->get_MaxWheelAngle(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor consume_Windows_Gaming_Input_IRacingWheel<D>::WheelMotor() const noexcept
{
    Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRacingWheel)->get_WheelMotor(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel consume_Windows_Gaming_Input_IRacingWheel<D>::GetButtonLabel(Windows::Gaming::Input::RacingWheelButtons const& button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRacingWheel)->GetButtonLabel(get_abi(button), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::RacingWheelReading consume_Windows_Gaming_Input_IRacingWheel<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::RacingWheelReading value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRacingWheel)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->add_RacingWheelAdded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IRacingWheelStatics> consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IRacingWheelStatics>(this, &abi_t<Windows::Gaming::Input::IRacingWheelStatics>::remove_RacingWheelAdded, RacingWheelAdded(value));
}

template <typename D> void consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->remove_RacingWheelAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->add_RacingWheelRemoved(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IRacingWheelStatics> consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IRacingWheelStatics>(this, &abi_t<Windows::Gaming::Input::IRacingWheelStatics>::remove_RacingWheelRemoved, RacingWheelRemoved(value));
}

template <typename D> void consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->remove_RacingWheelRemoved(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel> consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheels() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->get_RacingWheels(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::RacingWheel consume_Windows_Gaming_Input_IRacingWheelStatics2<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
{
    Windows::Gaming::Input::RacingWheel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRacingWheelStatics2)->FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Gaming_Input_IRawGameController<D>::AxisCount() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->get_AxisCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Gaming_Input_IRawGameController<D>::ButtonCount() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->get_ButtonCount(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor> consume_Windows_Gaming_Input_IRawGameController<D>::ForceFeedbackMotors() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->get_ForceFeedbackMotors(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Gaming_Input_IRawGameController<D>::HardwareProductId() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->get_HardwareProductId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Gaming_Input_IRawGameController<D>::HardwareVendorId() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->get_HardwareVendorId(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Gaming_Input_IRawGameController<D>::SwitchCount() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->get_SwitchCount(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel consume_Windows_Gaming_Input_IRawGameController<D>::GetButtonLabel(int32_t buttonIndex) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->GetButtonLabel(buttonIndex, put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Gaming_Input_IRawGameController<D>::GetCurrentReading(array_view<bool> buttonArray, array_view<Windows::Gaming::Input::GameControllerSwitchPosition> switchArray, array_view<double> axisArray) const
{
    uint64_t timestamp{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->GetCurrentReading(buttonArray.size(), get_abi(buttonArray), switchArray.size(), get_abi(switchArray), axisArray.size(), get_abi(axisArray), &timestamp));
    return timestamp;
}

template <typename D> Windows::Gaming::Input::GameControllerSwitchKind consume_Windows_Gaming_Input_IRawGameController<D>::GetSwitchKind(int32_t switchIndex) const
{
    Windows::Gaming::Input::GameControllerSwitchKind value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRawGameController)->GetSwitchKind(switchIndex, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsController> consume_Windows_Gaming_Input_IRawGameController2<D>::SimpleHapticsControllers() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsController> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController2)->get_SimpleHapticsControllers(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_Input_IRawGameController2<D>::NonRoamableId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController2)->get_NonRoamableId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_Input_IRawGameController2<D>::DisplayName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameController2)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->add_RawGameControllerAdded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IRawGameControllerStatics> consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IRawGameControllerStatics>(this, &abi_t<Windows::Gaming::Input::IRawGameControllerStatics>::remove_RawGameControllerAdded, RawGameControllerAdded(value));
}

template <typename D> void consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->remove_RawGameControllerAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->add_RawGameControllerRemoved(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IRawGameControllerStatics> consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IRawGameControllerStatics>(this, &abi_t<Windows::Gaming::Input::IRawGameControllerStatics>::remove_RawGameControllerRemoved, RawGameControllerRemoved(value));
}

template <typename D> void consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->remove_RawGameControllerRemoved(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController> consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllers() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->get_RawGameControllers(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::RawGameController consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
{
    Windows::Gaming::Input::RawGameController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::UINavigationReading consume_Windows_Gaming_Input_IUINavigationController<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::UINavigationReading value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IUINavigationController)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel consume_Windows_Gaming_Input_IUINavigationController<D>::GetOptionalButtonLabel(Windows::Gaming::Input::OptionalUINavigationButtons const& button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IUINavigationController)->GetOptionalButtonLabel(get_abi(button), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel consume_Windows_Gaming_Input_IUINavigationController<D>::GetRequiredButtonLabel(Windows::Gaming::Input::RequiredUINavigationButtons const& button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IUINavigationController)->GetRequiredButtonLabel(get_abi(button), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->add_UINavigationControllerAdded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IUINavigationControllerStatics> consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IUINavigationControllerStatics>(this, &abi_t<Windows::Gaming::Input::IUINavigationControllerStatics>::remove_UINavigationControllerAdded, UINavigationControllerAdded(value));
}

template <typename D> void consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->remove_UINavigationControllerAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->add_UINavigationControllerRemoved(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Input::IUINavigationControllerStatics> consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Input::IUINavigationControllerStatics>(this, &abi_t<Windows::Gaming::Input::IUINavigationControllerStatics>::remove_UINavigationControllerRemoved, UINavigationControllerRemoved(value));
}

template <typename D> void consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->remove_UINavigationControllerRemoved(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController> consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllers() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->get_UINavigationControllers(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::UINavigationController consume_Windows_Gaming_Input_IUINavigationControllerStatics2<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
{
    Windows::Gaming::Input::UINavigationController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics2)->FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Gaming::Input::IArcadeStick> : produce_base<D, Windows::Gaming::Input::IArcadeStick>
{
    HRESULT __stdcall GetButtonLabel(Windows::Gaming::Input::ArcadeStickButtons button, Windows::Gaming::Input::GameControllerButtonLabel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(*reinterpret_cast<Windows::Gaming::Input::ArcadeStickButtons const*>(&button)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentReading(struct_of<16>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IArcadeStickStatics> : produce_base<D, Windows::Gaming::Input::IArcadeStickStatics>
{
    HRESULT __stdcall add_ArcadeStickAdded(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ArcadeStickAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ArcadeStickAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArcadeStickAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ArcadeStickRemoved(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ArcadeStickRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ArcadeStickRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArcadeStickRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ArcadeSticks(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ArcadeSticks());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IArcadeStickStatics2> : produce_base<D, Windows::Gaming::Input::IArcadeStickStatics2>
{
    HRESULT __stdcall FromGameController(::IUnknown* gameController, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
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
struct produce<D, Windows::Gaming::Input::IFlightStick> : produce_base<D, Windows::Gaming::Input::IFlightStick>
{
    HRESULT __stdcall get_HatSwitchKind(Windows::Gaming::Input::GameControllerSwitchKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HatSwitchKind());
        return S_OK;
    }

    HRESULT __stdcall GetButtonLabel(Windows::Gaming::Input::FlightStickButtons button, Windows::Gaming::Input::GameControllerButtonLabel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(*reinterpret_cast<Windows::Gaming::Input::FlightStickButtons const*>(&button)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentReading(struct_of<48>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IFlightStickStatics> : produce_base<D, Windows::Gaming::Input::IFlightStickStatics>
{
    HRESULT __stdcall add_FlightStickAdded(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FlightStickAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FlightStickAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlightStickAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FlightStickRemoved(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FlightStickRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FlightStickRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlightStickRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlightSticks(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FlightSticks());
        return S_OK;
    }

    HRESULT __stdcall FromGameController(::IUnknown* gameController, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
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
struct produce<D, Windows::Gaming::Input::IGameController> : produce_base<D, Windows::Gaming::Input::IGameController>
{
    HRESULT __stdcall add_HeadsetConnected(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HeadsetConnected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HeadsetConnected(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeadsetConnected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HeadsetDisconnected(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HeadsetDisconnected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HeadsetDisconnected(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeadsetDisconnected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UserChanged(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UserChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UserChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Headset(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Headset());
        return S_OK;
    }

    HRESULT __stdcall get_IsWireless(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsWireless());
        return S_OK;
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().User());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IGameControllerBatteryInfo> : produce_base<D, Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    HRESULT __stdcall TryGetBatteryReport(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetBatteryReport());
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
struct produce<D, Windows::Gaming::Input::IGamepad> : produce_base<D, Windows::Gaming::Input::IGamepad>
{
    HRESULT __stdcall get_Vibration(struct_of<32>* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Vibration());
        return S_OK;
    }

    HRESULT __stdcall put_Vibration(struct_of<32> value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Vibration(*reinterpret_cast<Windows::Gaming::Input::GamepadVibration const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall GetCurrentReading(struct_of<64>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IGamepad2> : produce_base<D, Windows::Gaming::Input::IGamepad2>
{
    HRESULT __stdcall GetButtonLabel(Windows::Gaming::Input::GamepadButtons button, Windows::Gaming::Input::GameControllerButtonLabel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(*reinterpret_cast<Windows::Gaming::Input::GamepadButtons const*>(&button)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IGamepadStatics> : produce_base<D, Windows::Gaming::Input::IGamepadStatics>
{
    HRESULT __stdcall add_GamepadAdded(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GamepadAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GamepadAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GamepadAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GamepadRemoved(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GamepadRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GamepadRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GamepadRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gamepads(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gamepads());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IGamepadStatics2> : produce_base<D, Windows::Gaming::Input::IGamepadStatics2>
{
    HRESULT __stdcall FromGameController(::IUnknown* gameController, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
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
struct produce<D, Windows::Gaming::Input::IHeadset> : produce_base<D, Windows::Gaming::Input::IHeadset>
{
    HRESULT __stdcall get_CaptureDeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CaptureDeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_RenderDeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RenderDeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IRacingWheel> : produce_base<D, Windows::Gaming::Input::IRacingWheel>
{
    HRESULT __stdcall get_HasClutch(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HasClutch());
        return S_OK;
    }

    HRESULT __stdcall get_HasHandbrake(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HasHandbrake());
        return S_OK;
    }

    HRESULT __stdcall get_HasPatternShifter(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HasPatternShifter());
        return S_OK;
    }

    HRESULT __stdcall get_MaxPatternShifterGear(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxPatternShifterGear());
        return S_OK;
    }

    HRESULT __stdcall get_MaxWheelAngle(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxWheelAngle());
        return S_OK;
    }

    HRESULT __stdcall get_WheelMotor(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().WheelMotor());
        return S_OK;
    }

    HRESULT __stdcall GetButtonLabel(Windows::Gaming::Input::RacingWheelButtons button, Windows::Gaming::Input::GameControllerButtonLabel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(*reinterpret_cast<Windows::Gaming::Input::RacingWheelButtons const*>(&button)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentReading(struct_of<56>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IRacingWheelStatics> : produce_base<D, Windows::Gaming::Input::IRacingWheelStatics>
{
    HRESULT __stdcall add_RacingWheelAdded(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RacingWheelAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RacingWheelAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RacingWheelAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RacingWheelRemoved(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RacingWheelRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RacingWheelRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RacingWheelRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RacingWheels(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RacingWheels());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IRacingWheelStatics2> : produce_base<D, Windows::Gaming::Input::IRacingWheelStatics2>
{
    HRESULT __stdcall FromGameController(::IUnknown* gameController, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
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
struct produce<D, Windows::Gaming::Input::IRawGameController> : produce_base<D, Windows::Gaming::Input::IRawGameController>
{
    HRESULT __stdcall get_AxisCount(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AxisCount());
        return S_OK;
    }

    HRESULT __stdcall get_ButtonCount(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ButtonCount());
        return S_OK;
    }

    HRESULT __stdcall get_ForceFeedbackMotors(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ForceFeedbackMotors());
        return S_OK;
    }

    HRESULT __stdcall get_HardwareProductId(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HardwareProductId());
        return S_OK;
    }

    HRESULT __stdcall get_HardwareVendorId(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HardwareVendorId());
        return S_OK;
    }

    HRESULT __stdcall get_SwitchCount(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SwitchCount());
        return S_OK;
    }

    HRESULT __stdcall GetButtonLabel(int32_t buttonIndex, Windows::Gaming::Input::GameControllerButtonLabel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(buttonIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentReading(uint32_t __buttonArraySize, bool* buttonArray, uint32_t __switchArraySize, Windows::Gaming::Input::GameControllerSwitchPosition* switchArray, uint32_t __axisArraySize, double* axisArray, uint64_t* timestamp) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *timestamp = detach_abi(this->shim().GetCurrentReading(array_view<bool>(reinterpret_cast<bool*>(buttonArray), reinterpret_cast<bool*>(buttonArray) + __buttonArraySize), array_view<Windows::Gaming::Input::GameControllerSwitchPosition>(reinterpret_cast<Windows::Gaming::Input::GameControllerSwitchPosition*>(switchArray), reinterpret_cast<Windows::Gaming::Input::GameControllerSwitchPosition*>(switchArray) + __switchArraySize), array_view<double>(reinterpret_cast<double*>(axisArray), reinterpret_cast<double*>(axisArray) + __axisArraySize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSwitchKind(int32_t switchIndex, Windows::Gaming::Input::GameControllerSwitchKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSwitchKind(switchIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IRawGameController2> : produce_base<D, Windows::Gaming::Input::IRawGameController2>
{
    HRESULT __stdcall get_SimpleHapticsControllers(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SimpleHapticsControllers());
        return S_OK;
    }

    HRESULT __stdcall get_NonRoamableId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NonRoamableId());
        return S_OK;
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DisplayName());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IRawGameControllerStatics> : produce_base<D, Windows::Gaming::Input::IRawGameControllerStatics>
{
    HRESULT __stdcall add_RawGameControllerAdded(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RawGameControllerAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RawGameControllerAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RawGameControllerAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RawGameControllerRemoved(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RawGameControllerRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RawGameControllerRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RawGameControllerRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawGameControllers(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RawGameControllers());
        return S_OK;
    }

    HRESULT __stdcall FromGameController(::IUnknown* gameController, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
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
struct produce<D, Windows::Gaming::Input::IUINavigationController> : produce_base<D, Windows::Gaming::Input::IUINavigationController>
{
    HRESULT __stdcall GetCurrentReading(struct_of<16>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetOptionalButtonLabel(Windows::Gaming::Input::OptionalUINavigationButtons button, Windows::Gaming::Input::GameControllerButtonLabel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetOptionalButtonLabel(*reinterpret_cast<Windows::Gaming::Input::OptionalUINavigationButtons const*>(&button)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRequiredButtonLabel(Windows::Gaming::Input::RequiredUINavigationButtons button, Windows::Gaming::Input::GameControllerButtonLabel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRequiredButtonLabel(*reinterpret_cast<Windows::Gaming::Input::RequiredUINavigationButtons const*>(&button)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IUINavigationControllerStatics> : produce_base<D, Windows::Gaming::Input::IUINavigationControllerStatics>
{
    HRESULT __stdcall add_UINavigationControllerAdded(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UINavigationControllerAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UINavigationControllerAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UINavigationControllerAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UINavigationControllerRemoved(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UINavigationControllerRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UINavigationControllerRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UINavigationControllerRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UINavigationControllers(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().UINavigationControllers());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::IUINavigationControllerStatics2> : produce_base<D, Windows::Gaming::Input::IUINavigationControllerStatics2>
{
    HRESULT __stdcall FromGameController(::IUnknown* gameController, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Input {

inline event_token ArcadeStick::ArcadeStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value)
{
    return get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>().ArcadeStickAdded(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IArcadeStickStatics> ArcadeStick::ArcadeStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value)
{
    auto factory = get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IArcadeStickStatics>::remove_ArcadeStickAdded, factory.ArcadeStickAdded(value) };
}

inline void ArcadeStick::ArcadeStickAdded(event_token const& token)
{
    get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>().ArcadeStickAdded(token);
}

inline event_token ArcadeStick::ArcadeStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value)
{
    return get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>().ArcadeStickRemoved(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IArcadeStickStatics> ArcadeStick::ArcadeStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value)
{
    auto factory = get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IArcadeStickStatics>::remove_ArcadeStickRemoved, factory.ArcadeStickRemoved(value) };
}

inline void ArcadeStick::ArcadeStickRemoved(event_token const& token)
{
    get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>().ArcadeStickRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick> ArcadeStick::ArcadeSticks()
{
    return get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>().ArcadeSticks();
}

inline Windows::Gaming::Input::ArcadeStick ArcadeStick::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
{
    return get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics2>().FromGameController(gameController);
}

inline event_token FlightStick::FlightStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value)
{
    return get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>().FlightStickAdded(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IFlightStickStatics> FlightStick::FlightStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value)
{
    auto factory = get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IFlightStickStatics>::remove_FlightStickAdded, factory.FlightStickAdded(value) };
}

inline void FlightStick::FlightStickAdded(event_token const& token)
{
    get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>().FlightStickAdded(token);
}

inline event_token FlightStick::FlightStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value)
{
    return get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>().FlightStickRemoved(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IFlightStickStatics> FlightStick::FlightStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value)
{
    auto factory = get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IFlightStickStatics>::remove_FlightStickRemoved, factory.FlightStickRemoved(value) };
}

inline void FlightStick::FlightStickRemoved(event_token const& token)
{
    get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>().FlightStickRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick> FlightStick::FlightSticks()
{
    return get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>().FlightSticks();
}

inline Windows::Gaming::Input::FlightStick FlightStick::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
{
    return get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>().FromGameController(gameController);
}

inline event_token Gamepad::GamepadAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value)
{
    return get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>().GamepadAdded(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IGamepadStatics> Gamepad::GamepadAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value)
{
    auto factory = get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IGamepadStatics>::remove_GamepadAdded, factory.GamepadAdded(value) };
}

inline void Gamepad::GamepadAdded(event_token const& token)
{
    get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>().GamepadAdded(token);
}

inline event_token Gamepad::GamepadRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value)
{
    return get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>().GamepadRemoved(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IGamepadStatics> Gamepad::GamepadRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value)
{
    auto factory = get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IGamepadStatics>::remove_GamepadRemoved, factory.GamepadRemoved(value) };
}

inline void Gamepad::GamepadRemoved(event_token const& token)
{
    get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>().GamepadRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad> Gamepad::Gamepads()
{
    return get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>().Gamepads();
}

inline Windows::Gaming::Input::Gamepad Gamepad::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
{
    return get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics2>().FromGameController(gameController);
}

inline event_token RacingWheel::RacingWheelAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value)
{
    return get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>().RacingWheelAdded(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IRacingWheelStatics> RacingWheel::RacingWheelAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value)
{
    auto factory = get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IRacingWheelStatics>::remove_RacingWheelAdded, factory.RacingWheelAdded(value) };
}

inline void RacingWheel::RacingWheelAdded(event_token const& token)
{
    get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>().RacingWheelAdded(token);
}

inline event_token RacingWheel::RacingWheelRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value)
{
    return get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>().RacingWheelRemoved(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IRacingWheelStatics> RacingWheel::RacingWheelRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value)
{
    auto factory = get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IRacingWheelStatics>::remove_RacingWheelRemoved, factory.RacingWheelRemoved(value) };
}

inline void RacingWheel::RacingWheelRemoved(event_token const& token)
{
    get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>().RacingWheelRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel> RacingWheel::RacingWheels()
{
    return get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>().RacingWheels();
}

inline Windows::Gaming::Input::RacingWheel RacingWheel::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
{
    return get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics2>().FromGameController(gameController);
}

inline event_token RawGameController::RawGameControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value)
{
    return get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>().RawGameControllerAdded(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IRawGameControllerStatics> RawGameController::RawGameControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value)
{
    auto factory = get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IRawGameControllerStatics>::remove_RawGameControllerAdded, factory.RawGameControllerAdded(value) };
}

inline void RawGameController::RawGameControllerAdded(event_token const& token)
{
    get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>().RawGameControllerAdded(token);
}

inline event_token RawGameController::RawGameControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value)
{
    return get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>().RawGameControllerRemoved(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IRawGameControllerStatics> RawGameController::RawGameControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value)
{
    auto factory = get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IRawGameControllerStatics>::remove_RawGameControllerRemoved, factory.RawGameControllerRemoved(value) };
}

inline void RawGameController::RawGameControllerRemoved(event_token const& token)
{
    get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>().RawGameControllerRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController> RawGameController::RawGameControllers()
{
    return get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>().RawGameControllers();
}

inline Windows::Gaming::Input::RawGameController RawGameController::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
{
    return get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>().FromGameController(gameController);
}

inline event_token UINavigationController::UINavigationControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value)
{
    return get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>().UINavigationControllerAdded(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IUINavigationControllerStatics> UINavigationController::UINavigationControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value)
{
    auto factory = get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IUINavigationControllerStatics>::remove_UINavigationControllerAdded, factory.UINavigationControllerAdded(value) };
}

inline void UINavigationController::UINavigationControllerAdded(event_token const& token)
{
    get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>().UINavigationControllerAdded(token);
}

inline event_token UINavigationController::UINavigationControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value)
{
    return get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>().UINavigationControllerRemoved(value);
}

inline factory_event_revoker<Windows::Gaming::Input::IUINavigationControllerStatics> UINavigationController::UINavigationControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value)
{
    auto factory = get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>();
    return { factory, &abi_t<Windows::Gaming::Input::IUINavigationControllerStatics>::remove_UINavigationControllerRemoved, factory.UINavigationControllerRemoved(value) };
}

inline void UINavigationController::UINavigationControllerRemoved(event_token const& token)
{
    get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>().UINavigationControllerRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController> UINavigationController::UINavigationControllers()
{
    return get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>().UINavigationControllers();
}

inline Windows::Gaming::Input::UINavigationController UINavigationController::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
{
    return get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics2>().FromGameController(gameController);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Gaming::Input::IArcadeStick> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IArcadeStick> {};

template<> struct hash<winrt::Windows::Gaming::Input::IArcadeStickStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IArcadeStickStatics> {};

template<> struct hash<winrt::Windows::Gaming::Input::IArcadeStickStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IArcadeStickStatics2> {};

template<> struct hash<winrt::Windows::Gaming::Input::IFlightStick> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IFlightStick> {};

template<> struct hash<winrt::Windows::Gaming::Input::IFlightStickStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IFlightStickStatics> {};

template<> struct hash<winrt::Windows::Gaming::Input::IGameController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IGameController> {};

template<> struct hash<winrt::Windows::Gaming::Input::IGameControllerBatteryInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IGameControllerBatteryInfo> {};

template<> struct hash<winrt::Windows::Gaming::Input::IGamepad> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IGamepad> {};

template<> struct hash<winrt::Windows::Gaming::Input::IGamepad2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IGamepad2> {};

template<> struct hash<winrt::Windows::Gaming::Input::IGamepadStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IGamepadStatics> {};

template<> struct hash<winrt::Windows::Gaming::Input::IGamepadStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IGamepadStatics2> {};

template<> struct hash<winrt::Windows::Gaming::Input::IHeadset> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IHeadset> {};

template<> struct hash<winrt::Windows::Gaming::Input::IRacingWheel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IRacingWheel> {};

template<> struct hash<winrt::Windows::Gaming::Input::IRacingWheelStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IRacingWheelStatics> {};

template<> struct hash<winrt::Windows::Gaming::Input::IRacingWheelStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IRacingWheelStatics2> {};

template<> struct hash<winrt::Windows::Gaming::Input::IRawGameController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IRawGameController> {};

template<> struct hash<winrt::Windows::Gaming::Input::IRawGameController2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IRawGameController2> {};

template<> struct hash<winrt::Windows::Gaming::Input::IRawGameControllerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IRawGameControllerStatics> {};

template<> struct hash<winrt::Windows::Gaming::Input::IUINavigationController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IUINavigationController> {};

template<> struct hash<winrt::Windows::Gaming::Input::IUINavigationControllerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IUINavigationControllerStatics> {};

template<> struct hash<winrt::Windows::Gaming::Input::IUINavigationControllerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::IUINavigationControllerStatics2> {};

template<> struct hash<winrt::Windows::Gaming::Input::ArcadeStick> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ArcadeStick> {};

template<> struct hash<winrt::Windows::Gaming::Input::FlightStick> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::FlightStick> {};

template<> struct hash<winrt::Windows::Gaming::Input::Gamepad> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Gamepad> {};

template<> struct hash<winrt::Windows::Gaming::Input::Headset> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Headset> {};

template<> struct hash<winrt::Windows::Gaming::Input::RacingWheel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::RacingWheel> {};

template<> struct hash<winrt::Windows::Gaming::Input::RawGameController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::RawGameController> {};

template<> struct hash<winrt::Windows::Gaming::Input::UINavigationController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::UINavigationController> {};

}

WINRT_WARNING_POP
