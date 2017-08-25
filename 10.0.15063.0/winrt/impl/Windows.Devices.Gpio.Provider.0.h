// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider {

enum class ProviderGpioPinDriveMode
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

enum class ProviderGpioPinEdge
{
    FallingEdge = 0,
    RisingEdge = 1,
};

enum class ProviderGpioPinValue
{
    Low = 0,
    High = 1,
};

enum class ProviderGpioSharingMode
{
    Exclusive = 0,
    SharedReadOnly = 1,
};

struct IGpioControllerProvider;
struct IGpioPinProvider;
struct IGpioPinProviderValueChangedEventArgs;
struct IGpioPinProviderValueChangedEventArgsFactory;
struct IGpioProvider;
struct GpioPinProviderValueChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Gpio::Provider::IGpioControllerProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::Provider::IGpioPinProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::Provider::IGpioProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::Provider::ProviderGpioPinValue>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode>{ using type = enum_category; };
template <> struct name<Windows::Devices::Gpio::Provider::IGpioControllerProvider>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.IGpioControllerProvider" }; };
template <> struct name<Windows::Devices::Gpio::Provider::IGpioPinProvider>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.IGpioPinProvider" }; };
template <> struct name<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs" }; };
template <> struct name<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory" }; };
template <> struct name<Windows::Devices::Gpio::Provider::IGpioProvider>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.IGpioProvider" }; };
template <> struct name<Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs" }; };
template <> struct name<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.ProviderGpioPinDriveMode" }; };
template <> struct name<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.ProviderGpioPinEdge" }; };
template <> struct name<Windows::Devices::Gpio::Provider::ProviderGpioPinValue>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.ProviderGpioPinValue" }; };
template <> struct name<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode>{ static constexpr auto & value{ L"Windows.Devices.Gpio.Provider.ProviderGpioSharingMode" }; };
template <> struct guid<Windows::Devices::Gpio::Provider::IGpioControllerProvider>{ static constexpr GUID value{ 0xAD11CEC7,0x19EA,0x4B21,{ 0x87,0x4F,0xB9,0x1A,0xED,0x4A,0x25,0xDB } }; };
template <> struct guid<Windows::Devices::Gpio::Provider::IGpioPinProvider>{ static constexpr GUID value{ 0x42344CB7,0x6ABC,0x40FF,{ 0x9C,0xE7,0x73,0xB8,0x53,0x01,0xB9,0x00 } }; };
template <> struct guid<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>{ static constexpr GUID value{ 0x32A6D6F2,0x3D5B,0x44CD,{ 0x8F,0xBE,0x13,0xA6,0x9F,0x2E,0xDB,0x24 } }; };
template <> struct guid<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>{ static constexpr GUID value{ 0x3ECB0B59,0x568C,0x4392,{ 0xB2,0x4A,0x8A,0x59,0xA9,0x02,0xB1,0xF1 } }; };
template <> struct guid<Windows::Devices::Gpio::Provider::IGpioProvider>{ static constexpr GUID value{ 0x44E82707,0x08CA,0x434A,{ 0xAF,0xE0,0xD6,0x15,0x80,0x44,0x6F,0x7E } }; };
template <> struct default_interface<Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>{ using type = Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs; };

template <typename D>
struct consume_Windows_Devices_Gpio_Provider_IGpioControllerProvider
{
    int32_t PinCount() const;
    Windows::Devices::Gpio::Provider::IGpioPinProvider OpenPinProvider(int32_t pin, Windows::Devices::Gpio::Provider::ProviderGpioSharingMode const& sharingMode) const;
};
template <> struct consume<Windows::Devices::Gpio::Provider::IGpioControllerProvider> { template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioControllerProvider<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_Provider_IGpioPinProvider
{
    event_token ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> const& handler) const;
    using ValueChanged_revoker = event_revoker<Windows::Devices::Gpio::Provider::IGpioPinProvider>;
    ValueChanged_revoker ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> const& handler) const;
    void ValueChanged(event_token const& token) const;
    Windows::Foundation::TimeSpan DebounceTimeout() const;
    void DebounceTimeout(Windows::Foundation::TimeSpan const& value) const;
    int32_t PinNumber() const;
    Windows::Devices::Gpio::Provider::ProviderGpioSharingMode SharingMode() const;
    bool IsDriveModeSupported(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode const& driveMode) const;
    Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode GetDriveMode() const;
    void SetDriveMode(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode const& value) const;
    void Write(Windows::Devices::Gpio::Provider::ProviderGpioPinValue const& value) const;
    Windows::Devices::Gpio::Provider::ProviderGpioPinValue Read() const;
};
template <> struct consume<Windows::Devices::Gpio::Provider::IGpioPinProvider> { template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgs
{
    Windows::Devices::Gpio::Provider::ProviderGpioPinEdge Edge() const;
};
template <> struct consume<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgsFactory
{
    Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs Create(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge const& edge) const;
};
template <> struct consume<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_Provider_IGpioProvider
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> GetControllers() const;
};
template <> struct consume<Windows::Devices::Gpio::Provider::IGpioProvider> { template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioProvider<D>; };

template <> struct abi<Windows::Devices::Gpio::Provider::IGpioControllerProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PinCount(int32_t* value) = 0;
    virtual HRESULT __stdcall OpenPinProvider(int32_t pin, abi_t<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode> sharingMode, ::IUnknown** gpioPinProvider) = 0;
};};

template <> struct abi<Windows::Devices::Gpio::Provider::IGpioPinProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ValueChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ValueChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_DebounceTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_DebounceTimeout(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_PinNumber(int32_t* value) = 0;
    virtual HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode>* value) = 0;
    virtual HRESULT __stdcall IsDriveModeSupported(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode> driveMode, bool* supported) = 0;
    virtual HRESULT __stdcall GetDriveMode(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>* value) = 0;
    virtual HRESULT __stdcall SetDriveMode(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode> value) = 0;
    virtual HRESULT __stdcall Write(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinValue> value) = 0;
    virtual HRESULT __stdcall Read(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinValue>* value) = 0;
};};

template <> struct abi<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Edge(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge>* value) = 0;
};};

template <> struct abi<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge> edge, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Gpio::Provider::IGpioProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetControllers(::IUnknown** result) = 0;
};};

}
