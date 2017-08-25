// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Lights {

struct ILamp;
struct ILampAvailabilityChangedEventArgs;
struct ILampStatics;
struct Lamp;
struct LampAvailabilityChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Lights::ILamp>{ using type = interface_category; };
template <> struct category<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Lights::ILampStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Lights::Lamp>{ using type = class_category; };
template <> struct category<Windows::Devices::Lights::LampAvailabilityChangedEventArgs>{ using type = class_category; };
template <> struct name<Windows::Devices::Lights::ILamp>{ static constexpr auto & value{ L"Windows.Devices.Lights.ILamp" }; };
template <> struct name<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Lights.ILampAvailabilityChangedEventArgs" }; };
template <> struct name<Windows::Devices::Lights::ILampStatics>{ static constexpr auto & value{ L"Windows.Devices.Lights.ILampStatics" }; };
template <> struct name<Windows::Devices::Lights::Lamp>{ static constexpr auto & value{ L"Windows.Devices.Lights.Lamp" }; };
template <> struct name<Windows::Devices::Lights::LampAvailabilityChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Lights.LampAvailabilityChangedEventArgs" }; };
template <> struct guid<Windows::Devices::Lights::ILamp>{ static constexpr GUID value{ 0x047D5B9A,0xEA45,0x4B2B,{ 0xB1,0xA2,0x14,0xDF,0xF0,0x0B,0xDE,0x7B } }; };
template <> struct guid<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>{ static constexpr GUID value{ 0x4F6E3DED,0x07A2,0x499D,{ 0x92,0x60,0x67,0xE3,0x04,0x53,0x2B,0xA4 } }; };
template <> struct guid<Windows::Devices::Lights::ILampStatics>{ static constexpr GUID value{ 0xA822416C,0x8885,0x401E,{ 0xB8,0x21,0x8E,0x8B,0x38,0xA8,0xE8,0xEC } }; };
template <> struct default_interface<Windows::Devices::Lights::Lamp>{ using type = Windows::Devices::Lights::ILamp; };
template <> struct default_interface<Windows::Devices::Lights::LampAvailabilityChangedEventArgs>{ using type = Windows::Devices::Lights::ILampAvailabilityChangedEventArgs; };

template <typename D>
struct consume_Windows_Devices_Lights_ILamp
{
    hstring DeviceId() const;
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    float BrightnessLevel() const;
    void BrightnessLevel(float value) const;
    bool IsColorSettable() const;
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    event_token AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const& handler) const;
    using AvailabilityChanged_revoker = event_revoker<Windows::Devices::Lights::ILamp>;
    AvailabilityChanged_revoker AvailabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const& handler) const;
    void AvailabilityChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Lights::ILamp> { template <typename D> using type = consume_Windows_Devices_Lights_ILamp<D>; };

template <typename D>
struct consume_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs
{
    bool IsAvailable() const;
};
template <> struct consume<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Lights_ILampStatics
{
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> GetDefaultAsync() const;
};
template <> struct consume<Windows::Devices::Lights::ILampStatics> { template <typename D> using type = consume_Windows_Devices_Lights_ILampStatics<D>; };

template <> struct abi<Windows::Devices::Lights::ILamp>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_BrightnessLevel(float* value) = 0;
    virtual HRESULT __stdcall put_BrightnessLevel(float value) = 0;
    virtual HRESULT __stdcall get_IsColorSettable(bool* value) = 0;
    virtual HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall add_AvailabilityChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AvailabilityChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAvailable(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::Lights::ILampStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) = 0;
};};

}
