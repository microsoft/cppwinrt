// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Gpio.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_7fc72a82_2c57_5c01_a652_a8bdac685d30
#define WINRT_GENERIC_7fc72a82_2c57_5c01_a652_a8bdac685d30
template <> struct __declspec(uuid("7fc72a82-2c57-5c01-a652-a8bdac685d30")) __declspec(novtable) IVectorView<Windows::Devices::Gpio::GpioController> : impl_IVectorView<Windows::Devices::Gpio::GpioController> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ed045917_96c7_5735_b4be_d79619d4835e
#define WINRT_GENERIC_ed045917_96c7_5735_b4be_d79619d4835e
template <> struct __declspec(uuid("ed045917-96c7-5735-b4be-d79619d4835e")) __declspec(novtable) IAsyncOperation<Windows::Devices::Gpio::GpioController> : impl_IAsyncOperation<Windows::Devices::Gpio::GpioController> {};
#endif

#ifndef WINRT_GENERIC_44ba689b_7d42_5374_add9_ab41e877a34b
#define WINRT_GENERIC_44ba689b_7d42_5374_add9_ab41e877a34b
template <> struct __declspec(uuid("44ba689b-7d42-5374-add9-ab41e877a34b")) __declspec(novtable) TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> : impl_TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_67944db0_6c56_5a2f_9e7b_63ca1aa8c411
#define WINRT_GENERIC_67944db0_6c56_5a2f_9e7b_63ca1aa8c411
template <> struct __declspec(uuid("67944db0-6c56-5a2f-9e7b-63ca1aa8c411")) __declspec(novtable) IIterator<Windows::Devices::Gpio::GpioController> : impl_IIterator<Windows::Devices::Gpio::GpioController> {};
#endif

#ifndef WINRT_GENERIC_415c3794_b2b6_5f5c_9a05_ae9268514726
#define WINRT_GENERIC_415c3794_b2b6_5f5c_9a05_ae9268514726
template <> struct __declspec(uuid("415c3794-b2b6-5f5c-9a05-ae9268514726")) __declspec(novtable) IIterable<Windows::Devices::Gpio::GpioController> : impl_IIterable<Windows::Devices::Gpio::GpioController> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_370167c0_0f7b_5e77_9bae_d35089a3db75
#define WINRT_GENERIC_370167c0_0f7b_5e77_9bae_d35089a3db75
template <> struct __declspec(uuid("370167c0-0f7b-5e77-9bae-d35089a3db75")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Gpio::GpioController> : impl_AsyncOperationCompletedHandler<Windows::Devices::Gpio::GpioController> {};
#endif

#ifndef WINRT_GENERIC_5da3faf4_60a7_5a14_9319_3941dfb13fed
#define WINRT_GENERIC_5da3faf4_60a7_5a14_9319_3941dfb13fed
template <> struct __declspec(uuid("5da3faf4-60a7-5a14-9319-3941dfb13fed")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> {};
#endif

#ifndef WINRT_GENERIC_ee427f2e_7d37_558f_9718_9cbcbff40c94
#define WINRT_GENERIC_ee427f2e_7d37_558f_9718_9cbcbff40c94
template <> struct __declspec(uuid("ee427f2e-7d37-558f-9718-9cbcbff40c94")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> {};
#endif


}

namespace Windows::Devices::Gpio {

template <typename D>
struct WINRT_EBO impl_IGpioController
{
    int32_t PinCount() const;
    Windows::Devices::Gpio::GpioPin OpenPin(int32_t pinNumber) const;
    Windows::Devices::Gpio::GpioPin OpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode) const;
    bool TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode, Windows::Devices::Gpio::GpioPin & pin, Windows::Devices::Gpio::GpioOpenStatus & openStatus) const;
};

template <typename D>
struct WINRT_EBO impl_IGpioControllerStatics
{
    Windows::Devices::Gpio::GpioController GetDefault() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioControllerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> GetControllersAsync(const Windows::Devices::Gpio::Provider::IGpioProvider & provider) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> GetDefaultAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioPin
{
    event_token ValueChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> & handler) const;
    using ValueChanged_revoker = event_revoker<IGpioPin>;
    ValueChanged_revoker ValueChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> & handler) const;
    void ValueChanged(event_token token) const;
    Windows::Foundation::TimeSpan DebounceTimeout() const;
    void DebounceTimeout(const Windows::Foundation::TimeSpan & value) const;
    int32_t PinNumber() const;
    Windows::Devices::Gpio::GpioSharingMode SharingMode() const;
    bool IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode driveMode) const;
    Windows::Devices::Gpio::GpioPinDriveMode GetDriveMode() const;
    void SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode value) const;
    void Write(Windows::Devices::Gpio::GpioPinValue value) const;
    Windows::Devices::Gpio::GpioPinValue Read() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioPinValueChangedEventArgs
{
    Windows::Devices::Gpio::GpioPinEdge Edge() const;
};

struct IGpioController :
    Windows::IInspectable,
    impl::consume<IGpioController>
{
    IGpioController(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioController>(m_ptr); }
};

struct IGpioControllerStatics :
    Windows::IInspectable,
    impl::consume<IGpioControllerStatics>
{
    IGpioControllerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioControllerStatics>(m_ptr); }
};

struct IGpioControllerStatics2 :
    Windows::IInspectable,
    impl::consume<IGpioControllerStatics2>
{
    IGpioControllerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioControllerStatics2>(m_ptr); }
};

struct IGpioPin :
    Windows::IInspectable,
    impl::consume<IGpioPin>,
    impl::require<IGpioPin, Windows::Foundation::IClosable>
{
    IGpioPin(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioPin>(m_ptr); }
};

struct IGpioPinValueChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IGpioPinValueChangedEventArgs>
{
    IGpioPinValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioPinValueChangedEventArgs>(m_ptr); }
};

}

}
