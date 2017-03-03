// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Devices.Power.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Gaming.Input.ForceFeedback.3.h"
#include "internal/Windows.Gaming.Input.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Gaming::Input::IArcadeStick> : produce_base<D, Windows::Gaming::Input::IArcadeStick>
{
    HRESULT __stdcall abi_GetButtonLabel(Windows::Gaming::Input::ArcadeStickButtons button, Windows::Gaming::Input::GameControllerButtonLabel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(button));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentReading(impl::abi_arg_out<Windows::Gaming::Input::ArcadeStickReading> value) noexcept override
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
    HRESULT __stdcall add_ArcadeStickAdded(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ArcadeStickAdded(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ArcadeStickAdded(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArcadeStickAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ArcadeStickRemoved(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ArcadeStickRemoved(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ArcadeStickRemoved(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArcadeStickRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ArcadeSticks(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ArcadeSticks());
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
struct produce<D, Windows::Gaming::Input::IArcadeStickStatics2> : produce_base<D, Windows::Gaming::Input::IArcadeStickStatics2>
{
    HRESULT __stdcall abi_FromGameController(impl::abi_arg_in<Windows::Gaming::Input::IGameController> gameController, impl::abi_arg_out<Windows::Gaming::Input::IArcadeStick> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&gameController)));
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
    HRESULT __stdcall get_HatSwitchKind(Windows::Gaming::Input::GameControllerSwitchKind * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HatSwitchKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetButtonLabel(Windows::Gaming::Input::FlightStickButtons button, Windows::Gaming::Input::GameControllerButtonLabel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(button));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentReading(impl::abi_arg_out<Windows::Gaming::Input::FlightStickReading> value) noexcept override
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
    HRESULT __stdcall add_FlightStickAdded(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FlightStickAdded(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FlightStickAdded(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlightStickAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FlightStickRemoved(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FlightStickRemoved(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FlightStickRemoved(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlightStickRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlightSticks(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlightSticks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromGameController(impl::abi_arg_in<Windows::Gaming::Input::IGameController> gameController, impl::abi_arg_out<Windows::Gaming::Input::IFlightStick> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&gameController)));
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
    HRESULT __stdcall add_HeadsetConnected(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HeadsetConnected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HeadsetConnected(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeadsetConnected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HeadsetDisconnected(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HeadsetDisconnected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HeadsetDisconnected(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeadsetDisconnected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UserChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UserChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UserChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Headset(impl::abi_arg_out<Windows::Gaming::Input::IHeadset> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Headset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsWireless(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsWireless());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(impl::abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::Gaming::Input::IGameControllerBatteryInfo> : produce_base<D, Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    HRESULT __stdcall abi_TryGetBatteryReport(impl::abi_arg_out<Windows::Devices::Power::IBatteryReport> value) noexcept override
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
    HRESULT __stdcall get_Vibration(impl::abi_arg_out<Windows::Gaming::Input::GamepadVibration> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Vibration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Vibration(impl::abi_arg_in<Windows::Gaming::Input::GamepadVibration> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Vibration(*reinterpret_cast<const Windows::Gaming::Input::GamepadVibration *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentReading(impl::abi_arg_out<Windows::Gaming::Input::GamepadReading> value) noexcept override
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
    HRESULT __stdcall abi_GetButtonLabel(Windows::Gaming::Input::GamepadButtons button, Windows::Gaming::Input::GameControllerButtonLabel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(button));
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
    HRESULT __stdcall add_GamepadAdded(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GamepadAdded(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GamepadAdded(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GamepadAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GamepadRemoved(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GamepadRemoved(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GamepadRemoved(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GamepadRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gamepads(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gamepads());
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
struct produce<D, Windows::Gaming::Input::IGamepadStatics2> : produce_base<D, Windows::Gaming::Input::IGamepadStatics2>
{
    HRESULT __stdcall abi_FromGameController(impl::abi_arg_in<Windows::Gaming::Input::IGameController> gameController, impl::abi_arg_out<Windows::Gaming::Input::IGamepad> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&gameController)));
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
    HRESULT __stdcall get_CaptureDeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaptureDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenderDeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RenderDeviceId());
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
struct produce<D, Windows::Gaming::Input::IRacingWheel> : produce_base<D, Windows::Gaming::Input::IRacingWheel>
{
    HRESULT __stdcall get_HasClutch(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasClutch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasHandbrake(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasHandbrake());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasPatternShifter(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasPatternShifter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPatternShifterGear(int32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPatternShifterGear());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWheelAngle(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxWheelAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WheelMotor(impl::abi_arg_out<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WheelMotor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetButtonLabel(Windows::Gaming::Input::RacingWheelButtons button, Windows::Gaming::Input::GameControllerButtonLabel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetButtonLabel(button));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentReading(impl::abi_arg_out<Windows::Gaming::Input::RacingWheelReading> value) noexcept override
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
    HRESULT __stdcall add_RacingWheelAdded(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RacingWheelAdded(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RacingWheelAdded(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RacingWheelAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RacingWheelRemoved(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RacingWheelRemoved(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RacingWheelRemoved(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RacingWheelRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RacingWheels(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RacingWheels());
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
struct produce<D, Windows::Gaming::Input::IRacingWheelStatics2> : produce_base<D, Windows::Gaming::Input::IRacingWheelStatics2>
{
    HRESULT __stdcall abi_FromGameController(impl::abi_arg_in<Windows::Gaming::Input::IGameController> gameController, impl::abi_arg_out<Windows::Gaming::Input::IRacingWheel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&gameController)));
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
    HRESULT __stdcall get_AxisCount(int32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AxisCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonCount(int32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForceFeedbackMotors(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForceFeedbackMotors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareProductId(uint16_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareProductId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareVendorId(uint16_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareVendorId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SwitchCount(int32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SwitchCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetButtonLabel(int32_t buttonIndex, Windows::Gaming::Input::GameControllerButtonLabel * value) noexcept override
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

    HRESULT __stdcall abi_GetCurrentReading(uint32_t __buttonArraySize, impl::abi_arg_out<bool> buttonArray, uint32_t __switchArraySize, impl::abi_arg_out<Windows::Gaming::Input::GameControllerSwitchPosition> switchArray, uint32_t __axisArraySize, impl::abi_arg_out<double> axisArray, uint64_t * timestamp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *timestamp = detach_abi(this->shim().GetCurrentReading(*buttonArray, *switchArray, *axisArray));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSwitchKind(int32_t switchIndex, Windows::Gaming::Input::GameControllerSwitchKind * value) noexcept override
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
struct produce<D, Windows::Gaming::Input::IRawGameControllerStatics> : produce_base<D, Windows::Gaming::Input::IRawGameControllerStatics>
{
    HRESULT __stdcall add_RawGameControllerAdded(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RawGameControllerAdded(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RawGameControllerAdded(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RawGameControllerAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RawGameControllerRemoved(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RawGameControllerRemoved(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RawGameControllerRemoved(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RawGameControllerRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawGameControllers(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawGameControllers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromGameController(impl::abi_arg_in<Windows::Gaming::Input::IGameController> gameController, impl::abi_arg_out<Windows::Gaming::Input::IRawGameController> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&gameController)));
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
    HRESULT __stdcall abi_GetCurrentReading(impl::abi_arg_out<Windows::Gaming::Input::UINavigationReading> value) noexcept override
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

    HRESULT __stdcall abi_GetOptionalButtonLabel(Windows::Gaming::Input::OptionalUINavigationButtons button, Windows::Gaming::Input::GameControllerButtonLabel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetOptionalButtonLabel(button));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRequiredButtonLabel(Windows::Gaming::Input::RequiredUINavigationButtons button, Windows::Gaming::Input::GameControllerButtonLabel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRequiredButtonLabel(button));
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
    HRESULT __stdcall add_UINavigationControllerAdded(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UINavigationControllerAdded(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UINavigationControllerAdded(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UINavigationControllerAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UINavigationControllerRemoved(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UINavigationControllerRemoved(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UINavigationControllerRemoved(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UINavigationControllerRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UINavigationControllers(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UINavigationControllers());
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
struct produce<D, Windows::Gaming::Input::IUINavigationControllerStatics2> : produce_base<D, Windows::Gaming::Input::IUINavigationControllerStatics2>
{
    HRESULT __stdcall abi_FromGameController(impl::abi_arg_in<Windows::Gaming::Input::IGameController> gameController, impl::abi_arg_out<Windows::Gaming::Input::IUINavigationController> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromGameController(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&gameController)));
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

namespace Windows::Gaming::Input {

template <typename D> event_token impl_IGameController<D>::HeadsetConnected(const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGameController)->add_HeadsetConnected(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IGameController> impl_IGameController<D>::HeadsetConnected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> & value) const
{
    return impl::make_event_revoker<D, IGameController>(this, &ABI::Windows::Gaming::Input::IGameController::remove_HeadsetConnected, HeadsetConnected(value));
}

template <typename D> void impl_IGameController<D>::HeadsetConnected(event_token token) const
{
    check_hresult(WINRT_SHIM(IGameController)->remove_HeadsetConnected(token));
}

template <typename D> event_token impl_IGameController<D>::HeadsetDisconnected(const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGameController)->add_HeadsetDisconnected(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IGameController> impl_IGameController<D>::HeadsetDisconnected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> & value) const
{
    return impl::make_event_revoker<D, IGameController>(this, &ABI::Windows::Gaming::Input::IGameController::remove_HeadsetDisconnected, HeadsetDisconnected(value));
}

template <typename D> void impl_IGameController<D>::HeadsetDisconnected(event_token token) const
{
    check_hresult(WINRT_SHIM(IGameController)->remove_HeadsetDisconnected(token));
}

template <typename D> event_token impl_IGameController<D>::UserChanged(const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGameController)->add_UserChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IGameController> impl_IGameController<D>::UserChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IGameController>(this, &ABI::Windows::Gaming::Input::IGameController::remove_UserChanged, UserChanged(value));
}

template <typename D> void impl_IGameController<D>::UserChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGameController)->remove_UserChanged(token));
}

template <typename D> Windows::Gaming::Input::Headset impl_IGameController<D>::Headset() const
{
    Windows::Gaming::Input::Headset value { nullptr };
    check_hresult(WINRT_SHIM(IGameController)->get_Headset(put_abi(value)));
    return value;
}

template <typename D> bool impl_IGameController<D>::IsWireless() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IGameController)->get_IsWireless(&value));
    return value;
}

template <typename D> Windows::System::User impl_IGameController<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(WINRT_SHIM(IGameController)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Power::BatteryReport impl_IGameControllerBatteryInfo<D>::TryGetBatteryReport() const
{
    Windows::Devices::Power::BatteryReport value { nullptr };
    check_hresult(WINRT_SHIM(IGameControllerBatteryInfo)->abi_TryGetBatteryReport(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel impl_IArcadeStick<D>::GetButtonLabel(Windows::Gaming::Input::ArcadeStickButtons button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value {};
    check_hresult(WINRT_SHIM(IArcadeStick)->abi_GetButtonLabel(button, &value));
    return value;
}

template <typename D> Windows::Gaming::Input::ArcadeStickReading impl_IArcadeStick<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::ArcadeStickReading value {};
    check_hresult(WINRT_SHIM(IArcadeStick)->abi_GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IArcadeStickStatics<D>::ArcadeStickAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IArcadeStickStatics)->add_ArcadeStickAdded(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IArcadeStickStatics> impl_IArcadeStickStatics<D>::ArcadeStickAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> & value) const
{
    return impl::make_event_revoker<D, IArcadeStickStatics>(this, &ABI::Windows::Gaming::Input::IArcadeStickStatics::remove_ArcadeStickAdded, ArcadeStickAdded(value));
}

template <typename D> void impl_IArcadeStickStatics<D>::ArcadeStickAdded(event_token token) const
{
    check_hresult(WINRT_SHIM(IArcadeStickStatics)->remove_ArcadeStickAdded(token));
}

template <typename D> event_token impl_IArcadeStickStatics<D>::ArcadeStickRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IArcadeStickStatics)->add_ArcadeStickRemoved(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IArcadeStickStatics> impl_IArcadeStickStatics<D>::ArcadeStickRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> & value) const
{
    return impl::make_event_revoker<D, IArcadeStickStatics>(this, &ABI::Windows::Gaming::Input::IArcadeStickStatics::remove_ArcadeStickRemoved, ArcadeStickRemoved(value));
}

template <typename D> void impl_IArcadeStickStatics<D>::ArcadeStickRemoved(event_token token) const
{
    check_hresult(WINRT_SHIM(IArcadeStickStatics)->remove_ArcadeStickRemoved(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick> impl_IArcadeStickStatics<D>::ArcadeSticks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick> value;
    check_hresult(WINRT_SHIM(IArcadeStickStatics)->get_ArcadeSticks(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::ArcadeStick impl_IArcadeStickStatics2<D>::FromGameController(const Windows::Gaming::Input::IGameController & gameController) const
{
    Windows::Gaming::Input::ArcadeStick value { nullptr };
    check_hresult(WINRT_SHIM(IArcadeStickStatics2)->abi_FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerSwitchKind impl_IFlightStick<D>::HatSwitchKind() const
{
    Windows::Gaming::Input::GameControllerSwitchKind value {};
    check_hresult(WINRT_SHIM(IFlightStick)->get_HatSwitchKind(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel impl_IFlightStick<D>::GetButtonLabel(Windows::Gaming::Input::FlightStickButtons button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value {};
    check_hresult(WINRT_SHIM(IFlightStick)->abi_GetButtonLabel(button, &value));
    return value;
}

template <typename D> Windows::Gaming::Input::FlightStickReading impl_IFlightStick<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::FlightStickReading value {};
    check_hresult(WINRT_SHIM(IFlightStick)->abi_GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IFlightStickStatics<D>::FlightStickAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IFlightStickStatics)->add_FlightStickAdded(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IFlightStickStatics> impl_IFlightStickStatics<D>::FlightStickAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> & value) const
{
    return impl::make_event_revoker<D, IFlightStickStatics>(this, &ABI::Windows::Gaming::Input::IFlightStickStatics::remove_FlightStickAdded, FlightStickAdded(value));
}

template <typename D> void impl_IFlightStickStatics<D>::FlightStickAdded(event_token token) const
{
    check_hresult(WINRT_SHIM(IFlightStickStatics)->remove_FlightStickAdded(token));
}

template <typename D> event_token impl_IFlightStickStatics<D>::FlightStickRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IFlightStickStatics)->add_FlightStickRemoved(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IFlightStickStatics> impl_IFlightStickStatics<D>::FlightStickRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> & value) const
{
    return impl::make_event_revoker<D, IFlightStickStatics>(this, &ABI::Windows::Gaming::Input::IFlightStickStatics::remove_FlightStickRemoved, FlightStickRemoved(value));
}

template <typename D> void impl_IFlightStickStatics<D>::FlightStickRemoved(event_token token) const
{
    check_hresult(WINRT_SHIM(IFlightStickStatics)->remove_FlightStickRemoved(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick> impl_IFlightStickStatics<D>::FlightSticks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick> value;
    check_hresult(WINRT_SHIM(IFlightStickStatics)->get_FlightSticks(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::FlightStick impl_IFlightStickStatics<D>::FromGameController(const Windows::Gaming::Input::IGameController & gameController) const
{
    Windows::Gaming::Input::FlightStick value { nullptr };
    check_hresult(WINRT_SHIM(IFlightStickStatics)->abi_FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GamepadVibration impl_IGamepad<D>::Vibration() const
{
    Windows::Gaming::Input::GamepadVibration value {};
    check_hresult(WINRT_SHIM(IGamepad)->get_Vibration(put_abi(value)));
    return value;
}

template <typename D> void impl_IGamepad<D>::Vibration(const Windows::Gaming::Input::GamepadVibration & value) const
{
    check_hresult(WINRT_SHIM(IGamepad)->put_Vibration(get_abi(value)));
}

template <typename D> Windows::Gaming::Input::GamepadReading impl_IGamepad<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::GamepadReading value {};
    check_hresult(WINRT_SHIM(IGamepad)->abi_GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel impl_IGamepad2<D>::GetButtonLabel(Windows::Gaming::Input::GamepadButtons button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value {};
    check_hresult(WINRT_SHIM(IGamepad2)->abi_GetButtonLabel(button, &value));
    return value;
}

template <typename D> event_token impl_IGamepadStatics<D>::GamepadAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGamepadStatics)->add_GamepadAdded(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IGamepadStatics> impl_IGamepadStatics<D>::GamepadAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> & value) const
{
    return impl::make_event_revoker<D, IGamepadStatics>(this, &ABI::Windows::Gaming::Input::IGamepadStatics::remove_GamepadAdded, GamepadAdded(value));
}

template <typename D> void impl_IGamepadStatics<D>::GamepadAdded(event_token token) const
{
    check_hresult(WINRT_SHIM(IGamepadStatics)->remove_GamepadAdded(token));
}

template <typename D> event_token impl_IGamepadStatics<D>::GamepadRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGamepadStatics)->add_GamepadRemoved(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IGamepadStatics> impl_IGamepadStatics<D>::GamepadRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> & value) const
{
    return impl::make_event_revoker<D, IGamepadStatics>(this, &ABI::Windows::Gaming::Input::IGamepadStatics::remove_GamepadRemoved, GamepadRemoved(value));
}

template <typename D> void impl_IGamepadStatics<D>::GamepadRemoved(event_token token) const
{
    check_hresult(WINRT_SHIM(IGamepadStatics)->remove_GamepadRemoved(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad> impl_IGamepadStatics<D>::Gamepads() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad> value;
    check_hresult(WINRT_SHIM(IGamepadStatics)->get_Gamepads(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::Gamepad impl_IGamepadStatics2<D>::FromGameController(const Windows::Gaming::Input::IGameController & gameController) const
{
    Windows::Gaming::Input::Gamepad value { nullptr };
    check_hresult(WINRT_SHIM(IGamepadStatics2)->abi_FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> hstring impl_IHeadset<D>::CaptureDeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IHeadset)->get_CaptureDeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IHeadset<D>::RenderDeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IHeadset)->get_RenderDeviceId(put_abi(value)));
    return value;
}

template <typename D> bool impl_IRacingWheel<D>::HasClutch() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IRacingWheel)->get_HasClutch(&value));
    return value;
}

template <typename D> bool impl_IRacingWheel<D>::HasHandbrake() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IRacingWheel)->get_HasHandbrake(&value));
    return value;
}

template <typename D> bool impl_IRacingWheel<D>::HasPatternShifter() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IRacingWheel)->get_HasPatternShifter(&value));
    return value;
}

template <typename D> int32_t impl_IRacingWheel<D>::MaxPatternShifterGear() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IRacingWheel)->get_MaxPatternShifterGear(&value));
    return value;
}

template <typename D> double impl_IRacingWheel<D>::MaxWheelAngle() const
{
    double value {};
    check_hresult(WINRT_SHIM(IRacingWheel)->get_MaxWheelAngle(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor impl_IRacingWheel<D>::WheelMotor() const
{
    Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor value { nullptr };
    check_hresult(WINRT_SHIM(IRacingWheel)->get_WheelMotor(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel impl_IRacingWheel<D>::GetButtonLabel(Windows::Gaming::Input::RacingWheelButtons button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value {};
    check_hresult(WINRT_SHIM(IRacingWheel)->abi_GetButtonLabel(button, &value));
    return value;
}

template <typename D> Windows::Gaming::Input::RacingWheelReading impl_IRacingWheel<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::RacingWheelReading value {};
    check_hresult(WINRT_SHIM(IRacingWheel)->abi_GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IRacingWheelStatics<D>::RacingWheelAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRacingWheelStatics)->add_RacingWheelAdded(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IRacingWheelStatics> impl_IRacingWheelStatics<D>::RacingWheelAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> & value) const
{
    return impl::make_event_revoker<D, IRacingWheelStatics>(this, &ABI::Windows::Gaming::Input::IRacingWheelStatics::remove_RacingWheelAdded, RacingWheelAdded(value));
}

template <typename D> void impl_IRacingWheelStatics<D>::RacingWheelAdded(event_token token) const
{
    check_hresult(WINRT_SHIM(IRacingWheelStatics)->remove_RacingWheelAdded(token));
}

template <typename D> event_token impl_IRacingWheelStatics<D>::RacingWheelRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRacingWheelStatics)->add_RacingWheelRemoved(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IRacingWheelStatics> impl_IRacingWheelStatics<D>::RacingWheelRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> & value) const
{
    return impl::make_event_revoker<D, IRacingWheelStatics>(this, &ABI::Windows::Gaming::Input::IRacingWheelStatics::remove_RacingWheelRemoved, RacingWheelRemoved(value));
}

template <typename D> void impl_IRacingWheelStatics<D>::RacingWheelRemoved(event_token token) const
{
    check_hresult(WINRT_SHIM(IRacingWheelStatics)->remove_RacingWheelRemoved(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel> impl_IRacingWheelStatics<D>::RacingWheels() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel> value;
    check_hresult(WINRT_SHIM(IRacingWheelStatics)->get_RacingWheels(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::RacingWheel impl_IRacingWheelStatics2<D>::FromGameController(const Windows::Gaming::Input::IGameController & gameController) const
{
    Windows::Gaming::Input::RacingWheel value { nullptr };
    check_hresult(WINRT_SHIM(IRacingWheelStatics2)->abi_FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> int32_t impl_IRawGameController<D>::AxisCount() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IRawGameController)->get_AxisCount(&value));
    return value;
}

template <typename D> int32_t impl_IRawGameController<D>::ButtonCount() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IRawGameController)->get_ButtonCount(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor> impl_IRawGameController<D>::ForceFeedbackMotors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor> value;
    check_hresult(WINRT_SHIM(IRawGameController)->get_ForceFeedbackMotors(put_abi(value)));
    return value;
}

template <typename D> uint16_t impl_IRawGameController<D>::HardwareProductId() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IRawGameController)->get_HardwareProductId(&value));
    return value;
}

template <typename D> uint16_t impl_IRawGameController<D>::HardwareVendorId() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IRawGameController)->get_HardwareVendorId(&value));
    return value;
}

template <typename D> int32_t impl_IRawGameController<D>::SwitchCount() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IRawGameController)->get_SwitchCount(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel impl_IRawGameController<D>::GetButtonLabel(int32_t buttonIndex) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value {};
    check_hresult(WINRT_SHIM(IRawGameController)->abi_GetButtonLabel(buttonIndex, &value));
    return value;
}

template <typename D> uint64_t impl_IRawGameController<D>::GetCurrentReading(array_view<bool> buttonArray, array_view<Windows::Gaming::Input::GameControllerSwitchPosition> switchArray, array_view<double> axisArray) const
{
    uint64_t timestamp {};
    check_hresult(WINRT_SHIM(IRawGameController)->abi_GetCurrentReading(buttonArray.size(), get_abi(buttonArray), switchArray.size(), get_abi(switchArray), axisArray.size(), get_abi(axisArray), &timestamp));
    return timestamp;
}

template <typename D> Windows::Gaming::Input::GameControllerSwitchKind impl_IRawGameController<D>::GetSwitchKind(int32_t switchIndex) const
{
    Windows::Gaming::Input::GameControllerSwitchKind value {};
    check_hresult(WINRT_SHIM(IRawGameController)->abi_GetSwitchKind(switchIndex, &value));
    return value;
}

template <typename D> event_token impl_IRawGameControllerStatics<D>::RawGameControllerAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRawGameControllerStatics)->add_RawGameControllerAdded(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IRawGameControllerStatics> impl_IRawGameControllerStatics<D>::RawGameControllerAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> & value) const
{
    return impl::make_event_revoker<D, IRawGameControllerStatics>(this, &ABI::Windows::Gaming::Input::IRawGameControllerStatics::remove_RawGameControllerAdded, RawGameControllerAdded(value));
}

template <typename D> void impl_IRawGameControllerStatics<D>::RawGameControllerAdded(event_token token) const
{
    check_hresult(WINRT_SHIM(IRawGameControllerStatics)->remove_RawGameControllerAdded(token));
}

template <typename D> event_token impl_IRawGameControllerStatics<D>::RawGameControllerRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRawGameControllerStatics)->add_RawGameControllerRemoved(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IRawGameControllerStatics> impl_IRawGameControllerStatics<D>::RawGameControllerRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> & value) const
{
    return impl::make_event_revoker<D, IRawGameControllerStatics>(this, &ABI::Windows::Gaming::Input::IRawGameControllerStatics::remove_RawGameControllerRemoved, RawGameControllerRemoved(value));
}

template <typename D> void impl_IRawGameControllerStatics<D>::RawGameControllerRemoved(event_token token) const
{
    check_hresult(WINRT_SHIM(IRawGameControllerStatics)->remove_RawGameControllerRemoved(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController> impl_IRawGameControllerStatics<D>::RawGameControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController> value;
    check_hresult(WINRT_SHIM(IRawGameControllerStatics)->get_RawGameControllers(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::RawGameController impl_IRawGameControllerStatics<D>::FromGameController(const Windows::Gaming::Input::IGameController & gameController) const
{
    Windows::Gaming::Input::RawGameController value { nullptr };
    check_hresult(WINRT_SHIM(IRawGameControllerStatics)->abi_FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::UINavigationReading impl_IUINavigationController<D>::GetCurrentReading() const
{
    Windows::Gaming::Input::UINavigationReading value {};
    check_hresult(WINRT_SHIM(IUINavigationController)->abi_GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel impl_IUINavigationController<D>::GetOptionalButtonLabel(Windows::Gaming::Input::OptionalUINavigationButtons button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value {};
    check_hresult(WINRT_SHIM(IUINavigationController)->abi_GetOptionalButtonLabel(button, &value));
    return value;
}

template <typename D> Windows::Gaming::Input::GameControllerButtonLabel impl_IUINavigationController<D>::GetRequiredButtonLabel(Windows::Gaming::Input::RequiredUINavigationButtons button) const
{
    Windows::Gaming::Input::GameControllerButtonLabel value {};
    check_hresult(WINRT_SHIM(IUINavigationController)->abi_GetRequiredButtonLabel(button, &value));
    return value;
}

template <typename D> event_token impl_IUINavigationControllerStatics<D>::UINavigationControllerAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUINavigationControllerStatics)->add_UINavigationControllerAdded(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IUINavigationControllerStatics> impl_IUINavigationControllerStatics<D>::UINavigationControllerAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> & value) const
{
    return impl::make_event_revoker<D, IUINavigationControllerStatics>(this, &ABI::Windows::Gaming::Input::IUINavigationControllerStatics::remove_UINavigationControllerAdded, UINavigationControllerAdded(value));
}

template <typename D> void impl_IUINavigationControllerStatics<D>::UINavigationControllerAdded(event_token token) const
{
    check_hresult(WINRT_SHIM(IUINavigationControllerStatics)->remove_UINavigationControllerAdded(token));
}

template <typename D> event_token impl_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUINavigationControllerStatics)->add_UINavigationControllerRemoved(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IUINavigationControllerStatics> impl_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> & value) const
{
    return impl::make_event_revoker<D, IUINavigationControllerStatics>(this, &ABI::Windows::Gaming::Input::IUINavigationControllerStatics::remove_UINavigationControllerRemoved, UINavigationControllerRemoved(value));
}

template <typename D> void impl_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(event_token token) const
{
    check_hresult(WINRT_SHIM(IUINavigationControllerStatics)->remove_UINavigationControllerRemoved(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController> impl_IUINavigationControllerStatics<D>::UINavigationControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController> value;
    check_hresult(WINRT_SHIM(IUINavigationControllerStatics)->get_UINavigationControllers(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::Input::UINavigationController impl_IUINavigationControllerStatics2<D>::FromGameController(const Windows::Gaming::Input::IGameController & gameController) const
{
    Windows::Gaming::Input::UINavigationController value { nullptr };
    check_hresult(WINRT_SHIM(IUINavigationControllerStatics2)->abi_FromGameController(get_abi(gameController), put_abi(value)));
    return value;
}

inline event_token ArcadeStick::ArcadeStickAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> & value)
{
    return get_activation_factory<ArcadeStick, IArcadeStickStatics>().ArcadeStickAdded(value);
}

inline factory_event_revoker<IArcadeStickStatics> ArcadeStick::ArcadeStickAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> & value)
{
    auto factory = get_activation_factory<ArcadeStick, IArcadeStickStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IArcadeStickStatics::remove_ArcadeStickAdded, factory.ArcadeStickAdded(value) };
}

inline void ArcadeStick::ArcadeStickAdded(event_token token)
{
    get_activation_factory<ArcadeStick, IArcadeStickStatics>().ArcadeStickAdded(token);
}

inline event_token ArcadeStick::ArcadeStickRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> & value)
{
    return get_activation_factory<ArcadeStick, IArcadeStickStatics>().ArcadeStickRemoved(value);
}

inline factory_event_revoker<IArcadeStickStatics> ArcadeStick::ArcadeStickRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> & value)
{
    auto factory = get_activation_factory<ArcadeStick, IArcadeStickStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IArcadeStickStatics::remove_ArcadeStickRemoved, factory.ArcadeStickRemoved(value) };
}

inline void ArcadeStick::ArcadeStickRemoved(event_token token)
{
    get_activation_factory<ArcadeStick, IArcadeStickStatics>().ArcadeStickRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick> ArcadeStick::ArcadeSticks()
{
    return get_activation_factory<ArcadeStick, IArcadeStickStatics>().ArcadeSticks();
}

inline Windows::Gaming::Input::ArcadeStick ArcadeStick::FromGameController(const Windows::Gaming::Input::IGameController & gameController)
{
    return get_activation_factory<ArcadeStick, IArcadeStickStatics2>().FromGameController(gameController);
}

inline event_token FlightStick::FlightStickAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> & value)
{
    return get_activation_factory<FlightStick, IFlightStickStatics>().FlightStickAdded(value);
}

inline factory_event_revoker<IFlightStickStatics> FlightStick::FlightStickAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> & value)
{
    auto factory = get_activation_factory<FlightStick, IFlightStickStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IFlightStickStatics::remove_FlightStickAdded, factory.FlightStickAdded(value) };
}

inline void FlightStick::FlightStickAdded(event_token token)
{
    get_activation_factory<FlightStick, IFlightStickStatics>().FlightStickAdded(token);
}

inline event_token FlightStick::FlightStickRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> & value)
{
    return get_activation_factory<FlightStick, IFlightStickStatics>().FlightStickRemoved(value);
}

inline factory_event_revoker<IFlightStickStatics> FlightStick::FlightStickRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> & value)
{
    auto factory = get_activation_factory<FlightStick, IFlightStickStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IFlightStickStatics::remove_FlightStickRemoved, factory.FlightStickRemoved(value) };
}

inline void FlightStick::FlightStickRemoved(event_token token)
{
    get_activation_factory<FlightStick, IFlightStickStatics>().FlightStickRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick> FlightStick::FlightSticks()
{
    return get_activation_factory<FlightStick, IFlightStickStatics>().FlightSticks();
}

inline Windows::Gaming::Input::FlightStick FlightStick::FromGameController(const Windows::Gaming::Input::IGameController & gameController)
{
    return get_activation_factory<FlightStick, IFlightStickStatics>().FromGameController(gameController);
}

inline event_token Gamepad::GamepadAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> & value)
{
    return get_activation_factory<Gamepad, IGamepadStatics>().GamepadAdded(value);
}

inline factory_event_revoker<IGamepadStatics> Gamepad::GamepadAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> & value)
{
    auto factory = get_activation_factory<Gamepad, IGamepadStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IGamepadStatics::remove_GamepadAdded, factory.GamepadAdded(value) };
}

inline void Gamepad::GamepadAdded(event_token token)
{
    get_activation_factory<Gamepad, IGamepadStatics>().GamepadAdded(token);
}

inline event_token Gamepad::GamepadRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> & value)
{
    return get_activation_factory<Gamepad, IGamepadStatics>().GamepadRemoved(value);
}

inline factory_event_revoker<IGamepadStatics> Gamepad::GamepadRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> & value)
{
    auto factory = get_activation_factory<Gamepad, IGamepadStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IGamepadStatics::remove_GamepadRemoved, factory.GamepadRemoved(value) };
}

inline void Gamepad::GamepadRemoved(event_token token)
{
    get_activation_factory<Gamepad, IGamepadStatics>().GamepadRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad> Gamepad::Gamepads()
{
    return get_activation_factory<Gamepad, IGamepadStatics>().Gamepads();
}

inline Windows::Gaming::Input::Gamepad Gamepad::FromGameController(const Windows::Gaming::Input::IGameController & gameController)
{
    return get_activation_factory<Gamepad, IGamepadStatics2>().FromGameController(gameController);
}

inline event_token RacingWheel::RacingWheelAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> & value)
{
    return get_activation_factory<RacingWheel, IRacingWheelStatics>().RacingWheelAdded(value);
}

inline factory_event_revoker<IRacingWheelStatics> RacingWheel::RacingWheelAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> & value)
{
    auto factory = get_activation_factory<RacingWheel, IRacingWheelStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IRacingWheelStatics::remove_RacingWheelAdded, factory.RacingWheelAdded(value) };
}

inline void RacingWheel::RacingWheelAdded(event_token token)
{
    get_activation_factory<RacingWheel, IRacingWheelStatics>().RacingWheelAdded(token);
}

inline event_token RacingWheel::RacingWheelRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> & value)
{
    return get_activation_factory<RacingWheel, IRacingWheelStatics>().RacingWheelRemoved(value);
}

inline factory_event_revoker<IRacingWheelStatics> RacingWheel::RacingWheelRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> & value)
{
    auto factory = get_activation_factory<RacingWheel, IRacingWheelStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IRacingWheelStatics::remove_RacingWheelRemoved, factory.RacingWheelRemoved(value) };
}

inline void RacingWheel::RacingWheelRemoved(event_token token)
{
    get_activation_factory<RacingWheel, IRacingWheelStatics>().RacingWheelRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel> RacingWheel::RacingWheels()
{
    return get_activation_factory<RacingWheel, IRacingWheelStatics>().RacingWheels();
}

inline Windows::Gaming::Input::RacingWheel RacingWheel::FromGameController(const Windows::Gaming::Input::IGameController & gameController)
{
    return get_activation_factory<RacingWheel, IRacingWheelStatics2>().FromGameController(gameController);
}

inline event_token RawGameController::RawGameControllerAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> & value)
{
    return get_activation_factory<RawGameController, IRawGameControllerStatics>().RawGameControllerAdded(value);
}

inline factory_event_revoker<IRawGameControllerStatics> RawGameController::RawGameControllerAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> & value)
{
    auto factory = get_activation_factory<RawGameController, IRawGameControllerStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IRawGameControllerStatics::remove_RawGameControllerAdded, factory.RawGameControllerAdded(value) };
}

inline void RawGameController::RawGameControllerAdded(event_token token)
{
    get_activation_factory<RawGameController, IRawGameControllerStatics>().RawGameControllerAdded(token);
}

inline event_token RawGameController::RawGameControllerRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> & value)
{
    return get_activation_factory<RawGameController, IRawGameControllerStatics>().RawGameControllerRemoved(value);
}

inline factory_event_revoker<IRawGameControllerStatics> RawGameController::RawGameControllerRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> & value)
{
    auto factory = get_activation_factory<RawGameController, IRawGameControllerStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IRawGameControllerStatics::remove_RawGameControllerRemoved, factory.RawGameControllerRemoved(value) };
}

inline void RawGameController::RawGameControllerRemoved(event_token token)
{
    get_activation_factory<RawGameController, IRawGameControllerStatics>().RawGameControllerRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController> RawGameController::RawGameControllers()
{
    return get_activation_factory<RawGameController, IRawGameControllerStatics>().RawGameControllers();
}

inline Windows::Gaming::Input::RawGameController RawGameController::FromGameController(const Windows::Gaming::Input::IGameController & gameController)
{
    return get_activation_factory<RawGameController, IRawGameControllerStatics>().FromGameController(gameController);
}

inline event_token UINavigationController::UINavigationControllerAdded(const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> & value)
{
    return get_activation_factory<UINavigationController, IUINavigationControllerStatics>().UINavigationControllerAdded(value);
}

inline factory_event_revoker<IUINavigationControllerStatics> UINavigationController::UINavigationControllerAdded(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> & value)
{
    auto factory = get_activation_factory<UINavigationController, IUINavigationControllerStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IUINavigationControllerStatics::remove_UINavigationControllerAdded, factory.UINavigationControllerAdded(value) };
}

inline void UINavigationController::UINavigationControllerAdded(event_token token)
{
    get_activation_factory<UINavigationController, IUINavigationControllerStatics>().UINavigationControllerAdded(token);
}

inline event_token UINavigationController::UINavigationControllerRemoved(const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> & value)
{
    return get_activation_factory<UINavigationController, IUINavigationControllerStatics>().UINavigationControllerRemoved(value);
}

inline factory_event_revoker<IUINavigationControllerStatics> UINavigationController::UINavigationControllerRemoved(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> & value)
{
    auto factory = get_activation_factory<UINavigationController, IUINavigationControllerStatics>();
    return { factory, &ABI::Windows::Gaming::Input::IUINavigationControllerStatics::remove_UINavigationControllerRemoved, factory.UINavigationControllerRemoved(value) };
}

inline void UINavigationController::UINavigationControllerRemoved(event_token token)
{
    get_activation_factory<UINavigationController, IUINavigationControllerStatics>().UINavigationControllerRemoved(token);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController> UINavigationController::UINavigationControllers()
{
    return get_activation_factory<UINavigationController, IUINavigationControllerStatics>().UINavigationControllers();
}

inline Windows::Gaming::Input::UINavigationController UINavigationController::FromGameController(const Windows::Gaming::Input::IGameController & gameController)
{
    return get_activation_factory<UINavigationController, IUINavigationControllerStatics2>().FromGameController(gameController);
}

}

}

template<>
struct std::hash<winrt::Windows::Gaming::Input::IArcadeStick>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IArcadeStick & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IArcadeStickStatics>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IArcadeStickStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IArcadeStickStatics2>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IArcadeStickStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IFlightStick>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IFlightStick & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IFlightStickStatics>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IFlightStickStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IGameController>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IGameController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IGameControllerBatteryInfo>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IGameControllerBatteryInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IGamepad>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IGamepad & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IGamepad2>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IGamepad2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IGamepadStatics>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IGamepadStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IGamepadStatics2>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IGamepadStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IHeadset>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IHeadset & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IRacingWheel>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IRacingWheel & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IRacingWheelStatics>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IRacingWheelStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IRacingWheelStatics2>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IRacingWheelStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IRawGameController>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IRawGameController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IRawGameControllerStatics>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IRawGameControllerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IUINavigationController>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IUINavigationController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IUINavigationControllerStatics>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IUINavigationControllerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::IUINavigationControllerStatics2>
{
    size_t operator()(const winrt::Windows::Gaming::Input::IUINavigationControllerStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::ArcadeStick>
{
    size_t operator()(const winrt::Windows::Gaming::Input::ArcadeStick & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::FlightStick>
{
    size_t operator()(const winrt::Windows::Gaming::Input::FlightStick & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Gamepad>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Gamepad & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Headset>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Headset & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::RacingWheel>
{
    size_t operator()(const winrt::Windows::Gaming::Input::RacingWheel & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::RawGameController>
{
    size_t operator()(const winrt::Windows::Gaming::Input::RawGameController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::UINavigationController>
{
    size_t operator()(const winrt::Windows::Gaming::Input::UINavigationController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
