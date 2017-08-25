// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Radios {

enum class RadioAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    DeniedByUser = 2,
    DeniedBySystem = 3,
};

enum class RadioKind
{
    Other = 0,
    WiFi = 1,
    MobileBroadband = 2,
    Bluetooth = 3,
    FM = 4,
};

enum class RadioState
{
    Unknown = 0,
    On = 1,
    Off = 2,
    Disabled = 3,
};

struct IRadio;
struct IRadioStatics;
struct Radio;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Radios::IRadio>{ using type = interface_category; };
template <> struct category<Windows::Devices::Radios::IRadioStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Radios::Radio>{ using type = class_category; };
template <> struct category<Windows::Devices::Radios::RadioAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Radios::RadioKind>{ using type = enum_category; };
template <> struct category<Windows::Devices::Radios::RadioState>{ using type = enum_category; };
template <> struct name<Windows::Devices::Radios::IRadio>{ static constexpr auto & value{ L"Windows.Devices.Radios.IRadio" }; };
template <> struct name<Windows::Devices::Radios::IRadioStatics>{ static constexpr auto & value{ L"Windows.Devices.Radios.IRadioStatics" }; };
template <> struct name<Windows::Devices::Radios::Radio>{ static constexpr auto & value{ L"Windows.Devices.Radios.Radio" }; };
template <> struct name<Windows::Devices::Radios::RadioAccessStatus>{ static constexpr auto & value{ L"Windows.Devices.Radios.RadioAccessStatus" }; };
template <> struct name<Windows::Devices::Radios::RadioKind>{ static constexpr auto & value{ L"Windows.Devices.Radios.RadioKind" }; };
template <> struct name<Windows::Devices::Radios::RadioState>{ static constexpr auto & value{ L"Windows.Devices.Radios.RadioState" }; };
template <> struct guid<Windows::Devices::Radios::IRadio>{ static constexpr GUID value{ 0x252118DF,0xB33E,0x416A,{ 0x87,0x5F,0x1C,0xF3,0x8A,0xE2,0xD8,0x3E } }; };
template <> struct guid<Windows::Devices::Radios::IRadioStatics>{ static constexpr GUID value{ 0x5FB6A12E,0x67CB,0x46AE,{ 0xAA,0xE9,0x65,0x91,0x9F,0x86,0xEF,0xF4 } }; };
template <> struct default_interface<Windows::Devices::Radios::Radio>{ using type = Windows::Devices::Radios::IRadio; };

template <typename D>
struct consume_Windows_Devices_Radios_IRadio
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> SetStateAsync(Windows::Devices::Radios::RadioState const& value) const;
    event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const& handler) const;
    using StateChanged_revoker = event_revoker<Windows::Devices::Radios::IRadio>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const& handler) const;
    void StateChanged(event_token const& eventCookie) const;
    Windows::Devices::Radios::RadioState State() const;
    hstring Name() const;
    Windows::Devices::Radios::RadioKind Kind() const;
};
template <> struct consume<Windows::Devices::Radios::IRadio> { template <typename D> using type = consume_Windows_Devices_Radios_IRadio<D>; };

template <typename D>
struct consume_Windows_Devices_Radios_IRadioStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>> GetRadiosAsync() const;
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> RequestAccessAsync() const;
};
template <> struct consume<Windows::Devices::Radios::IRadioStatics> { template <typename D> using type = consume_Windows_Devices_Radios_IRadioStatics<D>; };

template <> struct abi<Windows::Devices::Radios::IRadio>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetStateAsync(abi_t<Windows::Devices::Radios::RadioState> value, ::IUnknown** retval) = 0;
    virtual HRESULT __stdcall add_StateChanged(::IUnknown* handler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_StateChanged(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Devices::Radios::RadioState>* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Devices::Radios::RadioKind>* value) = 0;
};};

template <> struct abi<Windows::Devices::Radios::IRadioStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetRadiosAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** value) = 0;
};};

}
