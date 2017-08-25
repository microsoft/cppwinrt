// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Power.1.h"
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Gaming.Input.1.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Input {

struct ArcadeStickReading
{
    uint64_t Timestamp;
    Windows::Gaming::Input::ArcadeStickButtons Buttons;
};

struct FlightStickReading
{
    uint64_t Timestamp;
    Windows::Gaming::Input::FlightStickButtons Buttons;
    Windows::Gaming::Input::GameControllerSwitchPosition HatSwitch;
    double Roll;
    double Pitch;
    double Yaw;
    double Throttle;
};

struct GamepadReading
{
    uint64_t Timestamp;
    Windows::Gaming::Input::GamepadButtons Buttons;
    double LeftTrigger;
    double RightTrigger;
    double LeftThumbstickX;
    double LeftThumbstickY;
    double RightThumbstickX;
    double RightThumbstickY;
};

struct GamepadVibration
{
    double LeftMotor;
    double RightMotor;
    double LeftTrigger;
    double RightTrigger;
};

struct RacingWheelReading
{
    uint64_t Timestamp;
    Windows::Gaming::Input::RacingWheelButtons Buttons;
    int32_t PatternShifterGear;
    double Wheel;
    double Throttle;
    double Brake;
    double Clutch;
    double Handbrake;
};

struct UINavigationReading
{
    uint64_t Timestamp;
    Windows::Gaming::Input::RequiredUINavigationButtons RequiredButtons;
    Windows::Gaming::Input::OptionalUINavigationButtons OptionalButtons;
};

struct WINRT_EBO ArcadeStick :
    Windows::Gaming::Input::IArcadeStick,
    impl::require<ArcadeStick, Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    ArcadeStick(std::nullptr_t) noexcept {}
    static event_token ArcadeStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value);
    using ArcadeStickAdded_revoker = factory_event_revoker<Windows::Gaming::Input::IArcadeStickStatics>;
    static ArcadeStickAdded_revoker ArcadeStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value);
    static void ArcadeStickAdded(event_token const& token);
    static event_token ArcadeStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value);
    using ArcadeStickRemoved_revoker = factory_event_revoker<Windows::Gaming::Input::IArcadeStickStatics>;
    static ArcadeStickRemoved_revoker ArcadeStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value);
    static void ArcadeStickRemoved(event_token const& token);
    static Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick> ArcadeSticks();
    static Windows::Gaming::Input::ArcadeStick FromGameController(Windows::Gaming::Input::IGameController const& gameController);
};

struct WINRT_EBO FlightStick :
    Windows::Gaming::Input::IFlightStick,
    impl::require<FlightStick, Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    FlightStick(std::nullptr_t) noexcept {}
    static event_token FlightStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value);
    using FlightStickAdded_revoker = factory_event_revoker<Windows::Gaming::Input::IFlightStickStatics>;
    static FlightStickAdded_revoker FlightStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value);
    static void FlightStickAdded(event_token const& token);
    static event_token FlightStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value);
    using FlightStickRemoved_revoker = factory_event_revoker<Windows::Gaming::Input::IFlightStickStatics>;
    static FlightStickRemoved_revoker FlightStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value);
    static void FlightStickRemoved(event_token const& token);
    static Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick> FlightSticks();
    static Windows::Gaming::Input::FlightStick FromGameController(Windows::Gaming::Input::IGameController const& gameController);
};

struct WINRT_EBO Gamepad :
    Windows::Gaming::Input::IGamepad,
    impl::require<Gamepad, Windows::Gaming::Input::IGameControllerBatteryInfo, Windows::Gaming::Input::IGamepad2>
{
    Gamepad(std::nullptr_t) noexcept {}
    static event_token GamepadAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value);
    using GamepadAdded_revoker = factory_event_revoker<Windows::Gaming::Input::IGamepadStatics>;
    static GamepadAdded_revoker GamepadAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value);
    static void GamepadAdded(event_token const& token);
    static event_token GamepadRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value);
    using GamepadRemoved_revoker = factory_event_revoker<Windows::Gaming::Input::IGamepadStatics>;
    static GamepadRemoved_revoker GamepadRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value);
    static void GamepadRemoved(event_token const& token);
    static Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad> Gamepads();
    static Windows::Gaming::Input::Gamepad FromGameController(Windows::Gaming::Input::IGameController const& gameController);
};

struct WINRT_EBO Headset :
    Windows::Gaming::Input::IHeadset,
    impl::require<Headset, Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    Headset(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RacingWheel :
    Windows::Gaming::Input::IRacingWheel,
    impl::require<RacingWheel, Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    RacingWheel(std::nullptr_t) noexcept {}
    static event_token RacingWheelAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value);
    using RacingWheelAdded_revoker = factory_event_revoker<Windows::Gaming::Input::IRacingWheelStatics>;
    static RacingWheelAdded_revoker RacingWheelAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value);
    static void RacingWheelAdded(event_token const& token);
    static event_token RacingWheelRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value);
    using RacingWheelRemoved_revoker = factory_event_revoker<Windows::Gaming::Input::IRacingWheelStatics>;
    static RacingWheelRemoved_revoker RacingWheelRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value);
    static void RacingWheelRemoved(event_token const& token);
    static Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel> RacingWheels();
    static Windows::Gaming::Input::RacingWheel FromGameController(Windows::Gaming::Input::IGameController const& gameController);
};

struct WINRT_EBO RawGameController :
    Windows::Gaming::Input::IRawGameController,
    impl::require<RawGameController, Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    RawGameController(std::nullptr_t) noexcept {}
    static event_token RawGameControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value);
    using RawGameControllerAdded_revoker = factory_event_revoker<Windows::Gaming::Input::IRawGameControllerStatics>;
    static RawGameControllerAdded_revoker RawGameControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value);
    static void RawGameControllerAdded(event_token const& token);
    static event_token RawGameControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value);
    using RawGameControllerRemoved_revoker = factory_event_revoker<Windows::Gaming::Input::IRawGameControllerStatics>;
    static RawGameControllerRemoved_revoker RawGameControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value);
    static void RawGameControllerRemoved(event_token const& token);
    static Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController> RawGameControllers();
    static Windows::Gaming::Input::RawGameController FromGameController(Windows::Gaming::Input::IGameController const& gameController);
};

struct WINRT_EBO UINavigationController :
    Windows::Gaming::Input::IUINavigationController,
    impl::require<UINavigationController, Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    UINavigationController(std::nullptr_t) noexcept {}
    static event_token UINavigationControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value);
    using UINavigationControllerAdded_revoker = factory_event_revoker<Windows::Gaming::Input::IUINavigationControllerStatics>;
    static UINavigationControllerAdded_revoker UINavigationControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value);
    static void UINavigationControllerAdded(event_token const& token);
    static event_token UINavigationControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value);
    using UINavigationControllerRemoved_revoker = factory_event_revoker<Windows::Gaming::Input::IUINavigationControllerStatics>;
    static UINavigationControllerRemoved_revoker UINavigationControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value);
    static void UINavigationControllerRemoved(event_token const& token);
    static Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController> UINavigationControllers();
    static Windows::Gaming::Input::UINavigationController FromGameController(Windows::Gaming::Input::IGameController const& gameController);
};

}
