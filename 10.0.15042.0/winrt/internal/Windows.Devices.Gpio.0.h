// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Gpio {

struct GpioChangeRecord;
struct GpioChangeCount;

}

namespace Windows::Devices::Gpio {

using GpioChangeRecord = ABI::Windows::Devices::Gpio::GpioChangeRecord;
using GpioChangeCount = ABI::Windows::Devices::Gpio::GpioChangeCount;

}

namespace ABI::Windows::Devices::Gpio {

struct IGpioChangeCounter;
struct IGpioChangeCounterFactory;
struct IGpioChangeReader;
struct IGpioChangeReaderFactory;
struct IGpioController;
struct IGpioControllerStatics;
struct IGpioControllerStatics2;
struct IGpioPin;
struct IGpioPinValueChangedEventArgs;
struct GpioChangeCounter;
struct GpioChangeReader;
struct GpioController;
struct GpioPin;
struct GpioPinValueChangedEventArgs;

}

namespace Windows::Devices::Gpio {

struct IGpioChangeCounter;
struct IGpioChangeCounterFactory;
struct IGpioChangeReader;
struct IGpioChangeReaderFactory;
struct IGpioController;
struct IGpioControllerStatics;
struct IGpioControllerStatics2;
struct IGpioPin;
struct IGpioPinValueChangedEventArgs;
struct GpioChangeCounter;
struct GpioChangeReader;
struct GpioController;
struct GpioPin;
struct GpioPinValueChangedEventArgs;

}

namespace Windows::Devices::Gpio {

template <typename T> struct impl_IGpioChangeCounter;
template <typename T> struct impl_IGpioChangeCounterFactory;
template <typename T> struct impl_IGpioChangeReader;
template <typename T> struct impl_IGpioChangeReaderFactory;
template <typename T> struct impl_IGpioController;
template <typename T> struct impl_IGpioControllerStatics;
template <typename T> struct impl_IGpioControllerStatics2;
template <typename T> struct impl_IGpioPin;
template <typename T> struct impl_IGpioPinValueChangedEventArgs;

}

namespace Windows::Devices::Gpio {

enum class GpioChangePolarity
{
    Falling = 0,
    Rising = 1,
    Both = 2,
};

enum class GpioOpenStatus
{
    PinOpened = 0,
    PinUnavailable = 1,
    SharingViolation = 2,
    MuxingConflict = 3,
    UnknownError = 4,
};

enum class GpioPinDriveMode
{
    Input = 0,
    Output = 1,
    InputPullUp = 2,
    InputPullDown = 3,
    OutputOpenDrain = 4,
    OutputOpenDrainPullUp = 5,
    OutputOpenSource = 6,
    OutputOpenSourcePullDown = 7,
};

enum class GpioPinEdge
{
    FallingEdge = 0,
    RisingEdge = 1,
};

enum class GpioPinValue
{
    Low = 0,
    High = 1,
};

enum class GpioSharingMode
{
    Exclusive = 0,
    SharedReadOnly = 1,
};

}

}
