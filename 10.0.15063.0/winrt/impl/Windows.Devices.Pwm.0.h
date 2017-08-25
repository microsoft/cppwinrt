// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Pwm::Provider {

struct IPwmProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Pwm {

enum class PwmPulsePolarity
{
    ActiveHigh = 0,
    ActiveLow = 1,
};

struct IPwmController;
struct IPwmControllerStatics;
struct IPwmControllerStatics2;
struct IPwmControllerStatics3;
struct IPwmPin;
struct PwmController;
struct PwmPin;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Pwm::IPwmController>{ using type = interface_category; };
template <> struct category<Windows::Devices::Pwm::IPwmControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Pwm::IPwmControllerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Pwm::IPwmControllerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Devices::Pwm::IPwmPin>{ using type = interface_category; };
template <> struct category<Windows::Devices::Pwm::PwmController>{ using type = class_category; };
template <> struct category<Windows::Devices::Pwm::PwmPin>{ using type = class_category; };
template <> struct category<Windows::Devices::Pwm::PwmPulsePolarity>{ using type = enum_category; };
template <> struct name<Windows::Devices::Pwm::IPwmController>{ static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmController" }; };
template <> struct name<Windows::Devices::Pwm::IPwmControllerStatics>{ static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmControllerStatics" }; };
template <> struct name<Windows::Devices::Pwm::IPwmControllerStatics2>{ static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmControllerStatics2" }; };
template <> struct name<Windows::Devices::Pwm::IPwmControllerStatics3>{ static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmControllerStatics3" }; };
template <> struct name<Windows::Devices::Pwm::IPwmPin>{ static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmPin" }; };
template <> struct name<Windows::Devices::Pwm::PwmController>{ static constexpr auto & value{ L"Windows.Devices.Pwm.PwmController" }; };
template <> struct name<Windows::Devices::Pwm::PwmPin>{ static constexpr auto & value{ L"Windows.Devices.Pwm.PwmPin" }; };
template <> struct name<Windows::Devices::Pwm::PwmPulsePolarity>{ static constexpr auto & value{ L"Windows.Devices.Pwm.PwmPulsePolarity" }; };
template <> struct guid<Windows::Devices::Pwm::IPwmController>{ static constexpr GUID value{ 0xC45F5C85,0xD2E8,0x42CF,{ 0x9B,0xD6,0xCF,0x5E,0xD0,0x29,0xE6,0xA7 } }; };
template <> struct guid<Windows::Devices::Pwm::IPwmControllerStatics>{ static constexpr GUID value{ 0x4263BDA1,0x8946,0x4404,{ 0xBD,0x48,0x81,0xDD,0x12,0x4A,0xF4,0xD9 } }; };
template <> struct guid<Windows::Devices::Pwm::IPwmControllerStatics2>{ static constexpr GUID value{ 0x44FC5B1F,0xF119,0x4BDD,{ 0x97,0xAD,0xF7,0x6E,0xF9,0x86,0x73,0x6D } }; };
template <> struct guid<Windows::Devices::Pwm::IPwmControllerStatics3>{ static constexpr GUID value{ 0xB2581871,0x0229,0x4344,{ 0xAE,0x3F,0x9B,0x7C,0xD0,0xE6,0x6B,0x94 } }; };
template <> struct guid<Windows::Devices::Pwm::IPwmPin>{ static constexpr GUID value{ 0x22972DC8,0xC6CF,0x4821,{ 0xB7,0xF9,0xC6,0x45,0x4F,0xB6,0xAF,0x79 } }; };
template <> struct default_interface<Windows::Devices::Pwm::PwmController>{ using type = Windows::Devices::Pwm::IPwmController; };
template <> struct default_interface<Windows::Devices::Pwm::PwmPin>{ using type = Windows::Devices::Pwm::IPwmPin; };

template <typename D>
struct consume_Windows_Devices_Pwm_IPwmController
{
    int32_t PinCount() const;
    double ActualFrequency() const;
    double SetDesiredFrequency(double desiredFrequency) const;
    double MinFrequency() const;
    double MaxFrequency() const;
    Windows::Devices::Pwm::PwmPin OpenPin(int32_t pinNumber) const;
};
template <> struct consume<Windows::Devices::Pwm::IPwmController> { template <typename D> using type = consume_Windows_Devices_Pwm_IPwmController<D>; };

template <typename D>
struct consume_Windows_Devices_Pwm_IPwmControllerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> GetControllersAsync(Windows::Devices::Pwm::Provider::IPwmProvider const& provider) const;
};
template <> struct consume<Windows::Devices::Pwm::IPwmControllerStatics> { template <typename D> using type = consume_Windows_Devices_Pwm_IPwmControllerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Pwm_IPwmControllerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> GetDefaultAsync() const;
};
template <> struct consume<Windows::Devices::Pwm::IPwmControllerStatics2> { template <typename D> using type = consume_Windows_Devices_Pwm_IPwmControllerStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Pwm_IPwmControllerStatics3
{
    hstring GetDeviceSelector() const;
    hstring GetDeviceSelector(param::hstring const& friendlyName) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> FromIdAsync(param::hstring const& deviceId) const;
};
template <> struct consume<Windows::Devices::Pwm::IPwmControllerStatics3> { template <typename D> using type = consume_Windows_Devices_Pwm_IPwmControllerStatics3<D>; };

template <typename D>
struct consume_Windows_Devices_Pwm_IPwmPin
{
    Windows::Devices::Pwm::PwmController Controller() const;
    double GetActiveDutyCyclePercentage() const;
    void SetActiveDutyCyclePercentage(double dutyCyclePercentage) const;
    Windows::Devices::Pwm::PwmPulsePolarity Polarity() const;
    void Polarity(Windows::Devices::Pwm::PwmPulsePolarity const& value) const;
    void Start() const;
    void Stop() const;
    bool IsStarted() const;
};
template <> struct consume<Windows::Devices::Pwm::IPwmPin> { template <typename D> using type = consume_Windows_Devices_Pwm_IPwmPin<D>; };

template <> struct abi<Windows::Devices::Pwm::IPwmController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PinCount(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ActualFrequency(double* value) = 0;
    virtual HRESULT __stdcall SetDesiredFrequency(double desiredFrequency, double* result) = 0;
    virtual HRESULT __stdcall get_MinFrequency(double* value) = 0;
    virtual HRESULT __stdcall get_MaxFrequency(double* value) = 0;
    virtual HRESULT __stdcall OpenPin(int32_t pinNumber, ::IUnknown** pin) = 0;
};};

template <> struct abi<Windows::Devices::Pwm::IPwmControllerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetControllersAsync(::IUnknown* provider, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Pwm::IPwmControllerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Pwm::IPwmControllerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* result) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromFriendlyName(HSTRING friendlyName, HSTRING* result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Pwm::IPwmPin>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Controller(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetActiveDutyCyclePercentage(double* result) = 0;
    virtual HRESULT __stdcall SetActiveDutyCyclePercentage(double dutyCyclePercentage) = 0;
    virtual HRESULT __stdcall get_Polarity(abi_t<Windows::Devices::Pwm::PwmPulsePolarity>* value) = 0;
    virtual HRESULT __stdcall put_Polarity(abi_t<Windows::Devices::Pwm::PwmPulsePolarity> value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall get_IsStarted(bool* value) = 0;
};};

}
