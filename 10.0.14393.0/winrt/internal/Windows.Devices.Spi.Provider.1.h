// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Spi.Provider.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Spi::Provider {

struct __declspec(uuid("f6034550-a542-4ec0-9601-a4dd68f8697b")) __declspec(novtable) IProviderSpiConnectionSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChipSelectLine(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ChipSelectLine(int32_t value) = 0;
    virtual HRESULT __stdcall get_Mode(winrt::Windows::Devices::Spi::Provider::ProviderSpiMode * value) = 0;
    virtual HRESULT __stdcall put_Mode(winrt::Windows::Devices::Spi::Provider::ProviderSpiMode value) = 0;
    virtual HRESULT __stdcall get_DataBitLength(int32_t * value) = 0;
    virtual HRESULT __stdcall put_DataBitLength(int32_t value) = 0;
    virtual HRESULT __stdcall get_ClockFrequency(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ClockFrequency(int32_t value) = 0;
    virtual HRESULT __stdcall get_SharingMode(winrt::Windows::Devices::Spi::Provider::ProviderSpiSharingMode * value) = 0;
    virtual HRESULT __stdcall put_SharingMode(winrt::Windows::Devices::Spi::Provider::ProviderSpiSharingMode value) = 0;
};

struct __declspec(uuid("66456b5a-0c79-43e3-9f3c-e59780ac18fa")) __declspec(novtable) IProviderSpiConnectionSettingsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(int32_t chipSelectLine, Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings ** value) = 0;
};

struct __declspec(uuid("c1686504-02ce-4226-a385-4f11fb04b41b")) __declspec(novtable) ISpiControllerProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceProvider(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings * settings, Windows::Devices::Spi::Provider::ISpiDeviceProvider ** result) = 0;
};

struct __declspec(uuid("0d1c3443-304b-405c-b4f7-f5ab1074461e")) __declspec(novtable) ISpiDeviceProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_ConnectionSettings(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings ** value) = 0;
    virtual HRESULT __stdcall abi_Write(uint32_t __bufferSize, uint8_t * buffer) = 0;
    virtual HRESULT __stdcall abi_Read(uint32_t __bufferSize, uint8_t * buffer) = 0;
    virtual HRESULT __stdcall abi_TransferSequential(uint32_t __writeBufferSize, uint8_t * writeBuffer, uint32_t __readBufferSize, uint8_t * readBuffer) = 0;
    virtual HRESULT __stdcall abi_TransferFullDuplex(uint32_t __writeBufferSize, uint8_t * writeBuffer, uint32_t __readBufferSize, uint8_t * readBuffer) = 0;
};

struct __declspec(uuid("96b461e2-77d4-48ce-aaa0-75715a8362cf")) __declspec(novtable) ISpiProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetControllersAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings> { using default_interface = Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings; };

}

namespace Windows::Devices::Spi::Provider {

template <typename T> struct impl_IProviderSpiConnectionSettings;
template <typename T> struct impl_IProviderSpiConnectionSettingsFactory;
template <typename T> struct impl_ISpiControllerProvider;
template <typename T> struct impl_ISpiDeviceProvider;
template <typename T> struct impl_ISpiProvider;

}

namespace impl {

template <> struct traits<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>
{
    using abi = ABI::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings;
    template <typename D> using consume = Windows::Devices::Spi::Provider::impl_IProviderSpiConnectionSettings<D>;
};

template <> struct traits<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>
{
    using abi = ABI::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory;
    template <typename D> using consume = Windows::Devices::Spi::Provider::impl_IProviderSpiConnectionSettingsFactory<D>;
};

template <> struct traits<Windows::Devices::Spi::Provider::ISpiControllerProvider>
{
    using abi = ABI::Windows::Devices::Spi::Provider::ISpiControllerProvider;
    template <typename D> using consume = Windows::Devices::Spi::Provider::impl_ISpiControllerProvider<D>;
};

template <> struct traits<Windows::Devices::Spi::Provider::ISpiDeviceProvider>
{
    using abi = ABI::Windows::Devices::Spi::Provider::ISpiDeviceProvider;
    template <typename D> using consume = Windows::Devices::Spi::Provider::impl_ISpiDeviceProvider<D>;
};

template <> struct traits<Windows::Devices::Spi::Provider::ISpiProvider>
{
    using abi = ABI::Windows::Devices::Spi::Provider::ISpiProvider;
    template <typename D> using consume = Windows::Devices::Spi::Provider::impl_ISpiProvider<D>;
};

template <> struct traits<Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings>
{
    using abi = ABI::Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Spi.Provider.ProviderSpiConnectionSettings"; }
};

}

}
