// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.I2c.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.I2c.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Devices_I2c_II2cConnectionSettings<D>::SlaveAddress() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cConnectionSettings)->get_SlaveAddress(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_I2c_II2cConnectionSettings<D>::SlaveAddress(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cConnectionSettings)->put_SlaveAddress(value));
}

template <typename D> Windows::Devices::I2c::I2cBusSpeed consume_Windows_Devices_I2c_II2cConnectionSettings<D>::BusSpeed() const
{
    Windows::Devices::I2c::I2cBusSpeed value{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cConnectionSettings)->get_BusSpeed(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_I2c_II2cConnectionSettings<D>::BusSpeed(Windows::Devices::I2c::I2cBusSpeed const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cConnectionSettings)->put_BusSpeed(get_abi(value)));
}

template <typename D> Windows::Devices::I2c::I2cSharingMode consume_Windows_Devices_I2c_II2cConnectionSettings<D>::SharingMode() const
{
    Windows::Devices::I2c::I2cSharingMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cConnectionSettings)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_I2c_II2cConnectionSettings<D>::SharingMode(Windows::Devices::I2c::I2cSharingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cConnectionSettings)->put_SharingMode(get_abi(value)));
}

template <typename D> Windows::Devices::I2c::I2cConnectionSettings consume_Windows_Devices_I2c_II2cConnectionSettingsFactory<D>::Create(int32_t slaveAddress) const
{
    Windows::Devices::I2c::I2cConnectionSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cConnectionSettingsFactory)->Create(slaveAddress, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::I2c::I2cDevice consume_Windows_Devices_I2c_II2cController<D>::GetDevice(Windows::Devices::I2c::I2cConnectionSettings const& settings) const
{
    Windows::Devices::I2c::I2cDevice device{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cController)->GetDevice(get_abi(settings), put_abi(device)));
    return device;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::I2cController>> consume_Windows_Devices_I2c_II2cControllerStatics<D>::GetControllersAsync(Windows::Devices::I2c::Provider::II2cProvider const& provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::I2cController>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cControllerStatics)->GetControllersAsync(get_abi(provider), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::I2c::I2cController> consume_Windows_Devices_I2c_II2cControllerStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::I2c::I2cController> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cControllerStatics)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_I2c_II2cDevice<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDevice)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::I2c::I2cConnectionSettings consume_Windows_Devices_I2c_II2cDevice<D>::ConnectionSettings() const
{
    Windows::Devices::I2c::I2cConnectionSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDevice)->get_ConnectionSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_I2c_II2cDevice<D>::Write(array_view<uint8_t const> buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDevice)->Write(buffer.size(), get_abi(buffer)));
}

template <typename D> Windows::Devices::I2c::I2cTransferResult consume_Windows_Devices_I2c_II2cDevice<D>::WritePartial(array_view<uint8_t const> buffer) const
{
    Windows::Devices::I2c::I2cTransferResult result{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDevice)->WritePartial(buffer.size(), get_abi(buffer), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_I2c_II2cDevice<D>::Read(array_view<uint8_t> buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDevice)->Read(buffer.size(), get_abi(buffer)));
}

template <typename D> Windows::Devices::I2c::I2cTransferResult consume_Windows_Devices_I2c_II2cDevice<D>::ReadPartial(array_view<uint8_t> buffer) const
{
    Windows::Devices::I2c::I2cTransferResult result{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDevice)->ReadPartial(buffer.size(), get_abi(buffer), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_I2c_II2cDevice<D>::WriteRead(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDevice)->WriteRead(writeBuffer.size(), get_abi(writeBuffer), readBuffer.size(), get_abi(readBuffer)));
}

template <typename D> Windows::Devices::I2c::I2cTransferResult consume_Windows_Devices_I2c_II2cDevice<D>::WriteReadPartial(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const
{
    Windows::Devices::I2c::I2cTransferResult result{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDevice)->WriteReadPartial(writeBuffer.size(), get_abi(writeBuffer), readBuffer.size(), get_abi(readBuffer), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_I2c_II2cDeviceStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDeviceStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_I2c_II2cDeviceStatics<D>::GetDeviceSelector(param::hstring const& friendlyName) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDeviceStatics)->GetDeviceSelectorFromFriendlyName(get_abi(friendlyName), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::I2c::I2cDevice> consume_Windows_Devices_I2c_II2cDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId, Windows::Devices::I2c::I2cConnectionSettings const& settings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::I2c::I2cDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::I2c::II2cDeviceStatics)->FromIdAsync(get_abi(deviceId), get_abi(settings), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Devices::I2c::II2cConnectionSettings> : produce_base<D, Windows::Devices::I2c::II2cConnectionSettings>
{
    HRESULT __stdcall get_SlaveAddress(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SlaveAddress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SlaveAddress(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SlaveAddress(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BusSpeed(abi_t<Windows::Devices::I2c::I2cBusSpeed>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BusSpeed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BusSpeed(abi_t<Windows::Devices::I2c::I2cBusSpeed> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusSpeed(*reinterpret_cast<Windows::Devices::I2c::I2cBusSpeed const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::I2c::I2cSharingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharingMode(abi_t<Windows::Devices::I2c::I2cSharingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharingMode(*reinterpret_cast<Windows::Devices::I2c::I2cSharingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::I2c::II2cConnectionSettingsFactory> : produce_base<D, Windows::Devices::I2c::II2cConnectionSettingsFactory>
{
    HRESULT __stdcall Create(int32_t slaveAddress, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(slaveAddress));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::I2c::II2cController> : produce_base<D, Windows::Devices::I2c::II2cController>
{
    HRESULT __stdcall GetDevice(::IUnknown* settings, ::IUnknown** device) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *device = detach_abi(this->shim().GetDevice(*reinterpret_cast<Windows::Devices::I2c::I2cConnectionSettings const*>(&settings)));
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
struct produce<D, Windows::Devices::I2c::II2cControllerStatics> : produce_base<D, Windows::Devices::I2c::II2cControllerStatics>
{
    HRESULT __stdcall GetControllersAsync(::IUnknown* provider, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetControllersAsync(*reinterpret_cast<Windows::Devices::I2c::Provider::II2cProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDefaultAsync());
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
struct produce<D, Windows::Devices::I2c::II2cDevice> : produce_base<D, Windows::Devices::I2c::II2cDevice>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionSettings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConnectionSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Write(uint32_t __bufferSize, uint8_t* buffer) noexcept override
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

    HRESULT __stdcall WritePartial(uint32_t __bufferSize, uint8_t* buffer, abi_t<Windows::Devices::I2c::I2cTransferResult>* result) noexcept override
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

    HRESULT __stdcall Read(uint32_t __bufferSize, uint8_t* buffer) noexcept override
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

    HRESULT __stdcall ReadPartial(uint32_t __bufferSize, uint8_t* buffer, abi_t<Windows::Devices::I2c::I2cTransferResult>* result) noexcept override
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

    HRESULT __stdcall WriteRead(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer) noexcept override
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

    HRESULT __stdcall WriteReadPartial(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer, abi_t<Windows::Devices::I2c::I2cTransferResult>* result) noexcept override
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
struct produce<D, Windows::Devices::I2c::II2cDeviceStatics> : produce_base<D, Windows::Devices::I2c::II2cDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromFriendlyName(HSTRING friendlyName, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<hstring const*>(&friendlyName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown* settings, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Devices::I2c::I2cConnectionSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::I2c {

inline I2cConnectionSettings::I2cConnectionSettings(int32_t slaveAddress) :
    I2cConnectionSettings(get_activation_factory<I2cConnectionSettings, Windows::Devices::I2c::II2cConnectionSettingsFactory>().Create(slaveAddress))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::I2cController>> I2cController::GetControllersAsync(Windows::Devices::I2c::Provider::II2cProvider const& provider)
{
    return get_activation_factory<I2cController, Windows::Devices::I2c::II2cControllerStatics>().GetControllersAsync(provider);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::I2c::I2cController> I2cController::GetDefaultAsync()
{
    return get_activation_factory<I2cController, Windows::Devices::I2c::II2cControllerStatics>().GetDefaultAsync();
}

inline hstring I2cDevice::GetDeviceSelector()
{
    return get_activation_factory<I2cDevice, Windows::Devices::I2c::II2cDeviceStatics>().GetDeviceSelector();
}

inline hstring I2cDevice::GetDeviceSelector(param::hstring const& friendlyName)
{
    return get_activation_factory<I2cDevice, Windows::Devices::I2c::II2cDeviceStatics>().GetDeviceSelector(friendlyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::I2c::I2cDevice> I2cDevice::FromIdAsync(param::hstring const& deviceId, Windows::Devices::I2c::I2cConnectionSettings const& settings)
{
    return get_activation_factory<I2cDevice, Windows::Devices::I2c::II2cDeviceStatics>().FromIdAsync(deviceId, settings);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::I2c::II2cConnectionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::II2cConnectionSettings> {};

template<> struct hash<winrt::Windows::Devices::I2c::II2cConnectionSettingsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::II2cConnectionSettingsFactory> {};

template<> struct hash<winrt::Windows::Devices::I2c::II2cController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::II2cController> {};

template<> struct hash<winrt::Windows::Devices::I2c::II2cControllerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::II2cControllerStatics> {};

template<> struct hash<winrt::Windows::Devices::I2c::II2cDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::II2cDevice> {};

template<> struct hash<winrt::Windows::Devices::I2c::II2cDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::II2cDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::I2c::I2cConnectionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::I2cConnectionSettings> {};

template<> struct hash<winrt::Windows::Devices::I2c::I2cController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::I2cController> {};

template<> struct hash<winrt::Windows::Devices::I2c::I2cDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::I2c::I2cDevice> {};

}

WINRT_WARNING_POP
