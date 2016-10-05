// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Pwm {

struct IPwmController;
struct IPwmControllerStatics;
struct IPwmControllerStatics2;
struct IPwmPin;
struct PwmController;
struct PwmPin;

}

namespace Windows::Devices::Pwm {

struct IPwmController;
struct IPwmControllerStatics;
struct IPwmControllerStatics2;
struct IPwmPin;
struct PwmController;
struct PwmPin;

}

namespace Windows::Devices::Pwm {

enum class PwmPulsePolarity
{
    ActiveHigh = 0,
    ActiveLow = 1,
};

}

}
