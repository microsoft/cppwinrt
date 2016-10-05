// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Gpio.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_af259d89_9e01_529e_a879_c6763142d160
#define WINRT_GENERIC_af259d89_9e01_529e_a879_c6763142d160
template <> struct __declspec(uuid("af259d89-9e01-529e-a879-c6763142d160")) __declspec(novtable) TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> : impl_TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f429355f_7a16_5dcf_a575_db7d2a20eced
#define WINRT_GENERIC_f429355f_7a16_5dcf_a575_db7d2a20eced
template <> struct __declspec(uuid("f429355f-7a16-5dcf-a575-db7d2a20eced")) __declspec(novtable) IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> : impl_IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> {};
#endif

#ifndef WINRT_GENERIC_6ac0edb9_e3c9_5840_8aa8_1bc45366f6ca
#define WINRT_GENERIC_6ac0edb9_e3c9_5840_8aa8_1bc45366f6ca
template <> struct __declspec(uuid("6ac0edb9-e3c9-5840-8aa8-1bc45366f6ca")) __declspec(novtable) IIterator<Windows::Devices::Gpio::Provider::IGpioControllerProvider> : impl_IIterator<Windows::Devices::Gpio::Provider::IGpioControllerProvider> {};
#endif

#ifndef WINRT_GENERIC_09212bd4_851b_52bd_b82c_421bf3d6f511
#define WINRT_GENERIC_09212bd4_851b_52bd_b82c_421bf3d6f511
template <> struct __declspec(uuid("09212bd4-851b-52bd-b82c-421bf3d6f511")) __declspec(novtable) IIterable<Windows::Devices::Gpio::Provider::IGpioControllerProvider> : impl_IIterable<Windows::Devices::Gpio::Provider::IGpioControllerProvider> {};
#endif


}

namespace Windows::Devices::Gpio::Provider {

template <typename D>
struct WINRT_EBO impl_IGpioControllerProvider
{
    int32_t PinCount() const;
    Windows::Devices::Gpio::Provider::IGpioPinProvider OpenPinProvider(int32_t pin, Windows::Devices::Gpio::Provider::ProviderGpioSharingMode sharingMode) const;
};

template <typename D>
struct WINRT_EBO impl_IGpioPinProvider
{
    event_token ValueChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> & handler) const;
    using ValueChanged_revoker = event_revoker<IGpioPinProvider>;
    ValueChanged_revoker ValueChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> & handler) const;
    void ValueChanged(event_token token) const;
    Windows::Foundation::TimeSpan DebounceTimeout() const;
    void DebounceTimeout(const Windows::Foundation::TimeSpan & value) const;
    int32_t PinNumber() const;
    Windows::Devices::Gpio::Provider::ProviderGpioSharingMode SharingMode() const;
    bool IsDriveModeSupported(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode driveMode) const;
    Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode GetDriveMode() const;
    void SetDriveMode(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode value) const;
    void Write(Windows::Devices::Gpio::Provider::ProviderGpioPinValue value) const;
    Windows::Devices::Gpio::Provider::ProviderGpioPinValue Read() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioPinProviderValueChangedEventArgs
{
    Windows::Devices::Gpio::Provider::ProviderGpioPinEdge Edge() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioPinProviderValueChangedEventArgsFactory
{
    Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs Create(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge edge) const;
};

template <typename D>
struct WINRT_EBO impl_IGpioProvider
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> GetControllers() const;
};

struct IGpioControllerProvider :
    Windows::IInspectable,
    impl::consume<IGpioControllerProvider>
{
    IGpioControllerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioControllerProvider>(m_ptr); }
};

struct IGpioPinProvider :
    Windows::IInspectable,
    impl::consume<IGpioPinProvider>
{
    IGpioPinProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioPinProvider>(m_ptr); }
};

struct IGpioPinProviderValueChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IGpioPinProviderValueChangedEventArgs>
{
    IGpioPinProviderValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioPinProviderValueChangedEventArgs>(m_ptr); }
};

struct IGpioPinProviderValueChangedEventArgsFactory :
    Windows::IInspectable,
    impl::consume<IGpioPinProviderValueChangedEventArgsFactory>
{
    IGpioPinProviderValueChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioPinProviderValueChangedEventArgsFactory>(m_ptr); }
};

struct IGpioProvider :
    Windows::IInspectable,
    impl::consume<IGpioProvider>
{
    IGpioProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGpioProvider>(m_ptr); }
};

}

}
