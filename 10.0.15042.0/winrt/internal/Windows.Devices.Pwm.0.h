// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Pwm {

struct IPwmController;
struct IPwmControllerStatics;
struct IPwmControllerStatics2;
struct IPwmControllerStatics3;
struct IPwmPin;
struct PwmController;
struct PwmPin;

}

namespace Windows::Devices::Pwm {

struct IPwmController;
struct IPwmControllerStatics;
struct IPwmControllerStatics2;
struct IPwmControllerStatics3;
struct IPwmPin;
struct PwmController;
struct PwmPin;

}

namespace Windows::Devices::Pwm {

template <typename T> struct impl_IPwmController;
template <typename T> struct impl_IPwmControllerStatics;
template <typename T> struct impl_IPwmControllerStatics2;
template <typename T> struct impl_IPwmControllerStatics3;
template <typename T> struct impl_IPwmPin;

}

namespace Windows::Devices::Pwm {

enum class PwmPulsePolarity
{
    ActiveHigh = 0,
    ActiveLow = 1,
};

}

}
