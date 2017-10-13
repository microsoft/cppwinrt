// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.2.h"
#include "winrt/Windows.Devices.I2c.h"

namespace winrt::impl {

template <typename D> Windows::Devices::I2c::Provider::II2cDeviceProvider consume_Windows_Devices_I2c_Provider_II2cControllerProvider<D>::GetDeviceProvider(Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings const& settings) const
{
    Windows::Devices::I2c::Provider::II2cDeviceProvider device{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cControllerProvider)->GetDeviceProvider(get_abi(settings), put_abi(device)));
    return device;
}

template <typename D> hstring consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cDeviceProvider)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>::Write(array_view<uint8_t const> buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cDeviceProvider)->Write(buffer.size(), get_abi(buffer)));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cTransferResult consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>::WritePartial(array_view<uint8_t const> buffer) const
{
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult result{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cDeviceProvider)->WritePartial(buffer.size(), get_abi(buffer), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>::Read(array_view<uint8_t> buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cDeviceProvider)->Read(buffer.size(), get_abi(buffer)));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cTransferResult consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>::ReadPartial(array_view<uint8_t> buffer) const
{
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult result{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cDeviceProvider)->ReadPartial(buffer.size(), get_abi(buffer), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>::WriteRead(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cDeviceProvider)->WriteRead(writeBuffer.size(), get_abi(writeBuffer), readBuffer.size(), get_abi(readBuffer)));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cTransferResult consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>::WriteReadPartial(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const
{
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult result{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cDeviceProvider)->WriteReadPartial(writeBuffer.size(), get_abi(writeBuffer), readBuffer.size(), get_abi(readBuffer), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> consume_Windows_Devices_I2c_Provider_II2cProvider<D>::GetControllersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::Provider::II2cProvider)->GetControllersAsync(put_abi(operation)));
    return operation;
}

template <typename D> int32_t consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings<D>::SlaveAddress() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings)->get_SlaveAddress(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings<D>::SlaveAddress(int32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings)->put_SlaveAddress(value));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cBusSpeed consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings<D>::BusSpeed() const noexcept
{
    Windows::Devices::I2c::Provider::ProviderI2cBusSpeed value{};
    check_terminate(WINRT_SHIM(Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings)->get_BusSpeed(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings<D>::BusSpeed(Windows::Devices::I2c::Provider::ProviderI2cBusSpeed const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings)->put_BusSpeed(get_abi(value)));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cSharingMode consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings<D>::SharingMode() const noexcept
{
    Windows::Devices::I2c::Provider::ProviderI2cSharingMode value{};
    check_terminate(WINRT_SHIM(Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings<D>::SharingMode(Windows::Devices::I2c::Provider::ProviderI2cSharingMode const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings)->put_SharingMode(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::Devices::I2c::Provider::II2cControllerProvider> : produce_base<D, Windows::Devices::I2c::Provider::II2cControllerProvider>
{
    HRESULT __stdcall GetDeviceProvider(::IUnknown* settings, ::IUnknown** device) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *device = detach_abi(this->shim().GetDeviceProvider(*reinterpret_cast<Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            *device = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::I2c::Provider::II2cDeviceProvider> : produce_base<D, Windows::Devices::I2c::Provider::II2cDeviceProvider>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall Write(uint32_t __bufferSize, uint8_t* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Write(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(buffer), reinterpret_cast<uint8_t const *>(buffer) + __bufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WritePartial(uint32_t __bufferSize, uint8_t* buffer, struct_of<8>* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().WritePartial(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(buffer), reinterpret_cast<uint8_t const *>(buffer) + __bufferSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Read(uint32_t __bufferSize, uint8_t* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Read(array_view<uint8_t>(reinterpret_cast<uint8_t*>(buffer), reinterpret_cast<uint8_t*>(buffer) + __bufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadPartial(uint32_t __bufferSize, uint8_t* buffer, struct_of<8>* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadPartial(array_view<uint8_t>(reinterpret_cast<uint8_t*>(buffer), reinterpret_cast<uint8_t*>(buffer) + __bufferSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteRead(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteRead(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(writeBuffer), reinterpret_cast<uint8_t const *>(writeBuffer) + __writeBufferSize), array_view<uint8_t>(reinterpret_cast<uint8_t*>(readBuffer), reinterpret_cast<uint8_t*>(readBuffer) + __readBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteReadPartial(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer, struct_of<8>* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().WriteReadPartial(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(writeBuffer), reinterpret_cast<uint8_t const *>(writeBuffer) + __writeBufferSize), array_view<uint8_t>(reinterpret_cast<uint8_t*>(readBuffer), reinterpret_cast<uint8_t*>(readBuffer) + __readBufferSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::I2c::Provider::II2cProvider> : produce_base<D, Windows::Devices::I2c::Provider::II2cProvider>
{
    HRESULT __stdcall GetControllersAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetControllersAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings> : produce_base<D, Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>
{
    HRESULT __stdcall get_SlaveAddress(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SlaveAddress());
        return S_OK;
    }

    HRESULT __stdcall put_SlaveAddress(int32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().SlaveAddress(value);
        return S_OK;
    }

    HRESULT __stdcall get_BusSpeed(Windows::Devices::I2c::Provider::ProviderI2cBusSpeed* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BusSpeed());
        return S_OK;
    }

    HRESULT __stdcall put_BusSpeed(Windows::Devices::I2c::Provider::ProviderI2cBusSpeed value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().BusSpeed(*reinterpret_cast<Windows::Devices::I2c::Provider::ProviderI2cBusSpeed const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_SharingMode(Windows::Devices::I2c::Provider::ProviderI2cSharingMode* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SharingMode());
        return S_OK;
    }

    HRESULT __stdcall put_SharingMode(Windows::Devices::I2c::Provider::ProviderI2cSharingMode value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().SharingMode(*reinterpret_cast<Windows::Devices::I2c::Provider::ProviderI2cSharingMode const*>(&value));
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::I2c::Provider::II2cControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::Provider::II2cControllerProvider> {};

template<> struct hash<winrt::Windows::Devices::I2c::Provider::II2cDeviceProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::Provider::II2cDeviceProvider> {};

template<> struct hash<winrt::Windows::Devices::I2c::Provider::II2cProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::Provider::II2cProvider> {};

template<> struct hash<winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings> {};

template<> struct hash<winrt::Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings> {};

}

WINRT_WARNING_POP
