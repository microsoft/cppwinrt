// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamWithContentType;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Printers {

struct IPrint3DDevice;
struct IPrint3DDeviceStatics;
struct IPrintSchema;
struct Print3DDevice;
struct PrintSchema;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Printers::IPrint3DDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Printers::IPrint3DDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Printers::IPrintSchema>{ using type = interface_category; };
template <> struct category<Windows::Devices::Printers::Print3DDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Printers::PrintSchema>{ using type = class_category; };
template <> struct name<Windows::Devices::Printers::IPrint3DDevice>{ static constexpr auto & value{ L"Windows.Devices.Printers.IPrint3DDevice" }; };
template <> struct name<Windows::Devices::Printers::IPrint3DDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Printers.IPrint3DDeviceStatics" }; };
template <> struct name<Windows::Devices::Printers::IPrintSchema>{ static constexpr auto & value{ L"Windows.Devices.Printers.IPrintSchema" }; };
template <> struct name<Windows::Devices::Printers::Print3DDevice>{ static constexpr auto & value{ L"Windows.Devices.Printers.Print3DDevice" }; };
template <> struct name<Windows::Devices::Printers::PrintSchema>{ static constexpr auto & value{ L"Windows.Devices.Printers.PrintSchema" }; };
template <> struct guid<Windows::Devices::Printers::IPrint3DDevice>{ static constexpr GUID value{ 0x041C3D19,0x9713,0x42A2,{ 0x98,0x13,0x7D,0xC3,0x33,0x74,0x28,0xD3 } }; };
template <> struct guid<Windows::Devices::Printers::IPrint3DDeviceStatics>{ static constexpr GUID value{ 0xFDE3620A,0x67CD,0x41B7,{ 0xA3,0x44,0x51,0x50,0xA1,0xFD,0x75,0xB5 } }; };
template <> struct guid<Windows::Devices::Printers::IPrintSchema>{ static constexpr GUID value{ 0xC2B98316,0x26B8,0x4BFB,{ 0x81,0x38,0x9F,0x96,0x2C,0x22,0xA3,0x5B } }; };
template <> struct default_interface<Windows::Devices::Printers::Print3DDevice>{ using type = Windows::Devices::Printers::IPrint3DDevice; };
template <> struct default_interface<Windows::Devices::Printers::PrintSchema>{ using type = Windows::Devices::Printers::IPrintSchema; };

template <typename D>
struct consume_Windows_Devices_Printers_IPrint3DDevice
{
    Windows::Devices::Printers::PrintSchema PrintSchema() const;
};
template <> struct consume<Windows::Devices::Printers::IPrint3DDevice> { template <typename D> using type = consume_Windows_Devices_Printers_IPrint3DDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Printers_IPrint3DDeviceStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::Printers::IPrint3DDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Printers_IPrintSchema
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> GetDefaultPrintTicketAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> GetCapabilitiesAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& constrainTicket) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> MergeAndValidateWithDefaultPrintTicketAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& deltaTicket) const;
};
template <> struct consume<Windows::Devices::Printers::IPrintSchema> { template <typename D> using type = consume_Windows_Devices_Printers_IPrintSchema<D>; };

template <> struct abi<Windows::Devices::Printers::IPrint3DDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrintSchema(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Printers::IPrint3DDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* result) = 0;
};};

template <> struct abi<Windows::Devices::Printers::IPrintSchema>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultPrintTicketAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetCapabilitiesAsync(::IUnknown* constrainTicket, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall MergeAndValidateWithDefaultPrintTicketAsync(::IUnknown* deltaTicket, ::IUnknown** operation) = 0;
};};

}
