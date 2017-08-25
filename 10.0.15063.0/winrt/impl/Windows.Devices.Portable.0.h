// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Portable {

enum class ServiceDeviceType
{
    CalendarService = 0,
    ContactsService = 1,
    DeviceStatusService = 2,
    NotesService = 3,
    RingtonesService = 4,
    SmsService = 5,
    TasksService = 6,
};

struct IServiceDeviceStatics;
struct IStorageDeviceStatics;
struct ServiceDevice;
struct StorageDevice;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Portable::IServiceDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Portable::IStorageDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Portable::ServiceDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Portable::StorageDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Portable::ServiceDeviceType>{ using type = enum_category; };
template <> struct name<Windows::Devices::Portable::IServiceDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Portable.IServiceDeviceStatics" }; };
template <> struct name<Windows::Devices::Portable::IStorageDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Portable.IStorageDeviceStatics" }; };
template <> struct name<Windows::Devices::Portable::ServiceDevice>{ static constexpr auto & value{ L"Windows.Devices.Portable.ServiceDevice" }; };
template <> struct name<Windows::Devices::Portable::StorageDevice>{ static constexpr auto & value{ L"Windows.Devices.Portable.StorageDevice" }; };
template <> struct name<Windows::Devices::Portable::ServiceDeviceType>{ static constexpr auto & value{ L"Windows.Devices.Portable.ServiceDeviceType" }; };
template <> struct guid<Windows::Devices::Portable::IServiceDeviceStatics>{ static constexpr GUID value{ 0xA88214E1,0x59C7,0x4A20,{ 0xAB,0xA6,0x9F,0x67,0x07,0x93,0x72,0x30 } }; };
template <> struct guid<Windows::Devices::Portable::IStorageDeviceStatics>{ static constexpr GUID value{ 0x5ECE44EE,0x1B23,0x4DD2,{ 0x86,0x52,0xBC,0x16,0x4F,0x00,0x31,0x28 } }; };

template <typename D>
struct consume_Windows_Devices_Portable_IServiceDeviceStatics
{
    hstring GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType const& serviceType) const;
    hstring GetDeviceSelectorFromServiceId(GUID const& serviceId) const;
};
template <> struct consume<Windows::Devices::Portable::IServiceDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Portable_IServiceDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Portable_IStorageDeviceStatics
{
    Windows::Storage::StorageFolder FromId(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::Portable::IStorageDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Portable_IStorageDeviceStatics<D>; };

template <> struct abi<Windows::Devices::Portable::IServiceDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(abi_t<Windows::Devices::Portable::ServiceDeviceType> serviceType, HSTRING* selector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromServiceId(abi_t<GUID> serviceId, HSTRING* selector) = 0;
};};

template <> struct abi<Windows::Devices::Portable::IStorageDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** deviceRoot) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* selector) = 0;
};};

}
