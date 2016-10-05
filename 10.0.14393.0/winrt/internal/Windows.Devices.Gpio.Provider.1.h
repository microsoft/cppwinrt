// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Gpio.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Gpio::Provider {

struct __declspec(uuid("ad11cec7-19ea-4b21-874f-b91aed4a25db")) __declspec(novtable) IGpioControllerProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PinCount(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_OpenPinProvider(int32_t pin, winrt::Windows::Devices::Gpio::Provider::ProviderGpioSharingMode sharingMode, Windows::Devices::Gpio::Provider::IGpioPinProvider ** gpioPinProvider) = 0;
};

struct __declspec(uuid("42344cb7-6abc-40ff-9ce7-73b85301b900")) __declspec(novtable) IGpioPinProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall add_ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ValueChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_DebounceTimeout(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_DebounceTimeout(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_PinNumber(int32_t * value) = 0;
    virtual HRESULT __stdcall get_SharingMode(winrt::Windows::Devices::Gpio::Provider::ProviderGpioSharingMode * value) = 0;
    virtual HRESULT __stdcall abi_IsDriveModeSupported(winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode driveMode, bool * supported) = 0;
    virtual HRESULT __stdcall abi_GetDriveMode(winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode * value) = 0;
    virtual HRESULT __stdcall abi_SetDriveMode(winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode value) = 0;
    virtual HRESULT __stdcall abi_Write(winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinValue value) = 0;
    virtual HRESULT __stdcall abi_Read(winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinValue * value) = 0;
};

struct __declspec(uuid("32a6d6f2-3d5b-44cd-8fbe-13a69f2edb24")) __declspec(novtable) IGpioPinProviderValueChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Edge(winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinEdge * value) = 0;
};

struct __declspec(uuid("3ecb0b59-568c-4392-b24a-8a59a902b1f1")) __declspec(novtable) IGpioPinProviderValueChangedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinEdge edge, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs ** value) = 0;
};

struct __declspec(uuid("44e82707-08ca-434a-afe0-d61580446f7e")) __declspec(novtable) IGpioProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetControllers(Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> { using default_interface = Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs; };

}

namespace Windows::Devices::Gpio::Provider {

template <typename T> struct impl_IGpioControllerProvider;
template <typename T> struct impl_IGpioPinProvider;
template <typename T> struct impl_IGpioPinProviderValueChangedEventArgs;
template <typename T> struct impl_IGpioPinProviderValueChangedEventArgsFactory;
template <typename T> struct impl_IGpioProvider;

}

namespace impl {

template <> struct traits<Windows::Devices::Gpio::Provider::IGpioControllerProvider>
{
    using abi = ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider;
    template <typename D> using consume = Windows::Devices::Gpio::Provider::impl_IGpioControllerProvider<D>;
};

template <> struct traits<Windows::Devices::Gpio::Provider::IGpioPinProvider>
{
    using abi = ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider;
    template <typename D> using consume = Windows::Devices::Gpio::Provider::impl_IGpioPinProvider<D>;
};

template <> struct traits<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Gpio::Provider::impl_IGpioPinProviderValueChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>
{
    using abi = ABI::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory;
    template <typename D> using consume = Windows::Devices::Gpio::Provider::impl_IGpioPinProviderValueChangedEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::Gpio::Provider::IGpioProvider>
{
    using abi = ABI::Windows::Devices::Gpio::Provider::IGpioProvider;
    template <typename D> using consume = Windows::Devices::Gpio::Provider::impl_IGpioProvider<D>;
};

template <> struct traits<Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs"; }
};

}

}
