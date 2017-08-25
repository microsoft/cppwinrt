// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Power.0.h"
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Gaming.Input.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Input {

struct WINRT_EBO IArcadeStick :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcadeStick>,
    impl::require<IArcadeStick, Windows::Gaming::Input::IGameController>
{
    IArcadeStick(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IArcadeStickStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcadeStickStatics>
{
    IArcadeStickStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IArcadeStickStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcadeStickStatics2>,
    impl::require<IArcadeStickStatics2, Windows::Gaming::Input::IArcadeStickStatics>
{
    IArcadeStickStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlightStick :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlightStick>,
    impl::require<IFlightStick, Windows::Gaming::Input::IGameController>
{
    IFlightStick(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlightStickStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlightStickStatics>
{
    IFlightStickStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameController>
{
    IGameController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameControllerBatteryInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerBatteryInfo>
{
    IGameControllerBatteryInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGamepad :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGamepad>,
    impl::require<IGamepad, Windows::Gaming::Input::IGameController>
{
    IGamepad(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGamepad2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGamepad2>,
    impl::require<IGamepad2, Windows::Gaming::Input::IGameController, Windows::Gaming::Input::IGamepad>
{
    IGamepad2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGamepadStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGamepadStatics>
{
    IGamepadStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGamepadStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGamepadStatics2>,
    impl::require<IGamepadStatics2, Windows::Gaming::Input::IGamepadStatics>
{
    IGamepadStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHeadset :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHeadset>
{
    IHeadset(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRacingWheel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRacingWheel>,
    impl::require<IRacingWheel, Windows::Gaming::Input::IGameController>
{
    IRacingWheel(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRacingWheelStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRacingWheelStatics>
{
    IRacingWheelStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRacingWheelStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRacingWheelStatics2>,
    impl::require<IRacingWheelStatics2, Windows::Gaming::Input::IRacingWheelStatics>
{
    IRacingWheelStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRawGameController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRawGameController>,
    impl::require<IRawGameController, Windows::Gaming::Input::IGameController>
{
    IRawGameController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRawGameControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRawGameControllerStatics>
{
    IRawGameControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUINavigationController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUINavigationController>,
    impl::require<IUINavigationController, Windows::Gaming::Input::IGameController>
{
    IUINavigationController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUINavigationControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUINavigationControllerStatics>
{
    IUINavigationControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUINavigationControllerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUINavigationControllerStatics2>,
    impl::require<IUINavigationControllerStatics2, Windows::Gaming::Input::IUINavigationControllerStatics>
{
    IUINavigationControllerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
