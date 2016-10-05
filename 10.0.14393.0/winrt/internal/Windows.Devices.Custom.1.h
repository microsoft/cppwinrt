// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Custom.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Custom {

struct __declspec(uuid("dd30251f-c48b-43bd-bcb1-dec88f15143e")) __declspec(novtable) ICustomDevice : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InputStream(Windows::Storage::Streams::IInputStream ** value) = 0;
    virtual HRESULT __stdcall get_OutputStream(Windows::Storage::Streams::IOutputStream ** value) = 0;
    virtual HRESULT __stdcall abi_SendIOControlAsync(Windows::Devices::Custom::IIOControlCode * ioControlCode, Windows::Storage::Streams::IBuffer * inputBuffer, Windows::Storage::Streams::IBuffer * outputBuffer, Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_TrySendIOControlAsync(Windows::Devices::Custom::IIOControlCode * ioControlCode, Windows::Storage::Streams::IBuffer * inputBuffer, Windows::Storage::Streams::IBuffer * outputBuffer, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("c8220312-ef4c-46b1-a58e-eeb308dc8917")) __declspec(novtable) ICustomDeviceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceSelector(GUID classGuid, hstring * value) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, winrt::Windows::Devices::Custom::DeviceAccessMode desiredAccess, winrt::Windows::Devices::Custom::DeviceSharingMode sharingMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> ** operation) = 0;
};

struct __declspec(uuid("0e9559e7-60c8-4375-a761-7f8808066c60")) __declspec(novtable) IIOControlCode : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AccessMode(winrt::Windows::Devices::Custom::IOControlAccessMode * value) = 0;
    virtual HRESULT __stdcall get_BufferingMethod(winrt::Windows::Devices::Custom::IOControlBufferingMethod * value) = 0;
    virtual HRESULT __stdcall get_Function(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_DeviceType(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_ControlCode(uint32_t * value) = 0;
};

struct __declspec(uuid("856a7cf0-4c11-44ae-afc6-b8d4a212788f")) __declspec(novtable) IIOControlCodeFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateIOControlCode(uint16_t deviceType, uint16_t function, winrt::Windows::Devices::Custom::IOControlAccessMode accessMode, winrt::Windows::Devices::Custom::IOControlBufferingMethod bufferingMethod, Windows::Devices::Custom::IIOControlCode ** instance) = 0;
};

struct __declspec(uuid("ee5479c2-5448-45da-ad1b-24948c239094")) __declspec(novtable) IKnownDeviceTypesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Unknown(uint16_t * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Custom::CustomDevice> { using default_interface = Windows::Devices::Custom::ICustomDevice; };
template <> struct traits<Windows::Devices::Custom::IOControlCode> { using default_interface = Windows::Devices::Custom::IIOControlCode; };

}

namespace Windows::Devices::Custom {

template <typename T> struct impl_ICustomDevice;
template <typename T> struct impl_ICustomDeviceStatics;
template <typename T> struct impl_IIOControlCode;
template <typename T> struct impl_IIOControlCodeFactory;
template <typename T> struct impl_IKnownDeviceTypesStatics;

}

namespace impl {

template <> struct traits<Windows::Devices::Custom::ICustomDevice>
{
    using abi = ABI::Windows::Devices::Custom::ICustomDevice;
    template <typename D> using consume = Windows::Devices::Custom::impl_ICustomDevice<D>;
};

template <> struct traits<Windows::Devices::Custom::ICustomDeviceStatics>
{
    using abi = ABI::Windows::Devices::Custom::ICustomDeviceStatics;
    template <typename D> using consume = Windows::Devices::Custom::impl_ICustomDeviceStatics<D>;
};

template <> struct traits<Windows::Devices::Custom::IIOControlCode>
{
    using abi = ABI::Windows::Devices::Custom::IIOControlCode;
    template <typename D> using consume = Windows::Devices::Custom::impl_IIOControlCode<D>;
};

template <> struct traits<Windows::Devices::Custom::IIOControlCodeFactory>
{
    using abi = ABI::Windows::Devices::Custom::IIOControlCodeFactory;
    template <typename D> using consume = Windows::Devices::Custom::impl_IIOControlCodeFactory<D>;
};

template <> struct traits<Windows::Devices::Custom::IKnownDeviceTypesStatics>
{
    using abi = ABI::Windows::Devices::Custom::IKnownDeviceTypesStatics;
    template <typename D> using consume = Windows::Devices::Custom::impl_IKnownDeviceTypesStatics<D>;
};

template <> struct traits<Windows::Devices::Custom::CustomDevice>
{
    using abi = ABI::Windows::Devices::Custom::CustomDevice;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Custom.CustomDevice"; }
};

template <> struct traits<Windows::Devices::Custom::IOControlCode>
{
    using abi = ABI::Windows::Devices::Custom::IOControlCode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Custom.IOControlCode"; }
};

template <> struct traits<Windows::Devices::Custom::KnownDeviceTypes>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Custom.KnownDeviceTypes"; }
};

}

}
