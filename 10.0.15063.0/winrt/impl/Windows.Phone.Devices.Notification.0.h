// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Notification {

struct IVibrationDevice;
struct IVibrationDeviceStatics;
struct VibrationDevice;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::Devices::Notification::IVibrationDevice>{ using type = interface_category; };
template <> struct category<Windows::Phone::Devices::Notification::IVibrationDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::Devices::Notification::VibrationDevice>{ using type = class_category; };
template <> struct name<Windows::Phone::Devices::Notification::IVibrationDevice>{ static constexpr auto & value{ L"Windows.Phone.Devices.Notification.IVibrationDevice" }; };
template <> struct name<Windows::Phone::Devices::Notification::IVibrationDeviceStatics>{ static constexpr auto & value{ L"Windows.Phone.Devices.Notification.IVibrationDeviceStatics" }; };
template <> struct name<Windows::Phone::Devices::Notification::VibrationDevice>{ static constexpr auto & value{ L"Windows.Phone.Devices.Notification.VibrationDevice" }; };
template <> struct guid<Windows::Phone::Devices::Notification::IVibrationDevice>{ static constexpr GUID value{ 0x1B4A6595,0xCFCD,0x4E08,{ 0x92,0xFB,0xC1,0x90,0x6D,0x04,0x49,0x8C } }; };
template <> struct guid<Windows::Phone::Devices::Notification::IVibrationDeviceStatics>{ static constexpr GUID value{ 0x332FD2F1,0x1C69,0x4C91,{ 0x94,0x9E,0x4B,0xB6,0x7A,0x85,0xBD,0xC7 } }; };
template <> struct default_interface<Windows::Phone::Devices::Notification::VibrationDevice>{ using type = Windows::Phone::Devices::Notification::IVibrationDevice; };

template <typename D>
struct consume_Windows_Phone_Devices_Notification_IVibrationDevice
{
    void Vibrate(Windows::Foundation::TimeSpan const& duration) const;
    void Cancel() const;
};
template <> struct consume<Windows::Phone::Devices::Notification::IVibrationDevice> { template <typename D> using type = consume_Windows_Phone_Devices_Notification_IVibrationDevice<D>; };

template <typename D>
struct consume_Windows_Phone_Devices_Notification_IVibrationDeviceStatics
{
    Windows::Phone::Devices::Notification::VibrationDevice GetDefault() const;
};
template <> struct consume<Windows::Phone::Devices::Notification::IVibrationDeviceStatics> { template <typename D> using type = consume_Windows_Phone_Devices_Notification_IVibrationDeviceStatics<D>; };

template <> struct abi<Windows::Phone::Devices::Notification::IVibrationDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Vibrate(abi_t<Windows::Foundation::TimeSpan> duration) = 0;
    virtual HRESULT __stdcall Cancel() = 0;
};};

template <> struct abi<Windows::Phone::Devices::Notification::IVibrationDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

}
