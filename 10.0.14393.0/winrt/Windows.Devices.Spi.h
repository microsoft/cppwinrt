// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Spi.Provider.3.h"
#include "internal/Windows.Devices.Spi.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Spi::ISpiBusInfo> : produce_base<D, Windows::Devices::Spi::ISpiBusInfo>
{
    HRESULT __stdcall get_ChipSelectLineCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChipSelectLineCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinClockFrequency(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinClockFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxClockFrequency(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxClockFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDataBitLengths(abi_arg_out<Windows::Foundation::Collections::IVectorView<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedDataBitLengths());
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
struct produce<D, Windows::Devices::Spi::ISpiConnectionSettings> : produce_base<D, Windows::Devices::Spi::ISpiConnectionSettings>
{
    HRESULT __stdcall get_ChipSelectLine(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChipSelectLine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ChipSelectLine(int32_t value) noexcept override
    {
        try
        {
            this->shim().ChipSelectLine(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Devices::Spi::SpiMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Devices::Spi::SpiMode value) noexcept override
    {
        try
        {
            this->shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataBitLength(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataBitLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataBitLength(int32_t value) noexcept override
    {
        try
        {
            this->shim().DataBitLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClockFrequency(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClockFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClockFrequency(int32_t value) noexcept override
    {
        try
        {
            this->shim().ClockFrequency(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(Windows::Devices::Spi::SpiSharingMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharingMode(Windows::Devices::Spi::SpiSharingMode value) noexcept override
    {
        try
        {
            this->shim().SharingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Spi::ISpiConnectionSettingsFactory> : produce_base<D, Windows::Devices::Spi::ISpiConnectionSettingsFactory>
{
    HRESULT __stdcall abi_Create(int32_t chipSelectLine, abi_arg_out<Windows::Devices::Spi::ISpiConnectionSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(chipSelectLine));
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
struct produce<D, Windows::Devices::Spi::ISpiController> : produce_base<D, Windows::Devices::Spi::ISpiController>
{
    HRESULT __stdcall abi_GetDevice(abi_arg_in<Windows::Devices::Spi::ISpiConnectionSettings> settings, abi_arg_out<Windows::Devices::Spi::ISpiDevice> device) noexcept override
    {
        try
        {
            *device = detach(this->shim().GetDevice(*reinterpret_cast<const Windows::Devices::Spi::SpiConnectionSettings *>(&settings)));
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
struct produce<D, Windows::Devices::Spi::ISpiControllerStatics> : produce_base<D, Windows::Devices::Spi::ISpiControllerStatics>
{
    HRESULT __stdcall abi_GetDefaultAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetControllersAsync(abi_arg_in<Windows::Devices::Spi::Provider::ISpiProvider> provider, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetControllersAsync(*reinterpret_cast<const Windows::Devices::Spi::Provider::ISpiProvider *>(&provider)));
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
struct produce<D, Windows::Devices::Spi::ISpiDevice> : produce_base<D, Windows::Devices::Spi::ISpiDevice>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionSettings(abi_arg_out<Windows::Devices::Spi::ISpiConnectionSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Write(uint32_t __bufferSize, abi_arg_in<uint8_t> * buffer) noexcept override
    {
        try
        {
            this->shim().Write(array_ref<const uint8_t>(buffer, buffer + __bufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Read(uint32_t __bufferSize, abi_arg_out<uint8_t> buffer) noexcept override
    {
        try
        {
            this->shim().Read(*buffer);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferSequential(uint32_t __writeBufferSize, abi_arg_in<uint8_t> * writeBuffer, uint32_t __readBufferSize, abi_arg_out<uint8_t> readBuffer) noexcept override
    {
        try
        {
            this->shim().TransferSequential(array_ref<const uint8_t>(writeBuffer, writeBuffer + __writeBufferSize), *readBuffer);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransferFullDuplex(uint32_t __writeBufferSize, abi_arg_in<uint8_t> * writeBuffer, uint32_t __readBufferSize, abi_arg_out<uint8_t> readBuffer) noexcept override
    {
        try
        {
            this->shim().TransferFullDuplex(array_ref<const uint8_t>(writeBuffer, writeBuffer + __writeBufferSize), *readBuffer);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Spi::ISpiDeviceStatics> : produce_base<D, Windows::Devices::Spi::ISpiDeviceStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromFriendlyName(abi_arg_in<hstring> friendlyName, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector(*reinterpret_cast<const hstring *>(&friendlyName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBusInfo(abi_arg_in<hstring> busId, abi_arg_out<Windows::Devices::Spi::ISpiBusInfo> busInfo) noexcept override
    {
        try
        {
            *busInfo = detach(this->shim().GetBusInfo(*reinterpret_cast<const hstring *>(&busId)));
            return S_OK;
        }
        catch (...)
        {
            *busInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> busId, abi_arg_in<Windows::Devices::Spi::ISpiConnectionSettings> settings, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&busId), *reinterpret_cast<const Windows::Devices::Spi::SpiConnectionSettings *>(&settings)));
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

namespace Windows::Devices::Spi {

template <typename D> Windows::Devices::Spi::SpiConnectionSettings impl_ISpiConnectionSettingsFactory<D>::Create(int32_t chipSelectLine) const
{
    Windows::Devices::Spi::SpiConnectionSettings value { nullptr };
    check_hresult(static_cast<const ISpiConnectionSettingsFactory &>(static_cast<const D &>(*this))->abi_Create(chipSelectLine, put(value)));
    return value;
}

template <typename D> int32_t impl_ISpiConnectionSettings<D>::ChipSelectLine() const
{
    int32_t value {};
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->get_ChipSelectLine(&value));
    return value;
}

template <typename D> void impl_ISpiConnectionSettings<D>::ChipSelectLine(int32_t value) const
{
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->put_ChipSelectLine(value));
}

template <typename D> Windows::Devices::Spi::SpiMode impl_ISpiConnectionSettings<D>::Mode() const
{
    Windows::Devices::Spi::SpiMode value {};
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_ISpiConnectionSettings<D>::Mode(Windows::Devices::Spi::SpiMode value) const
{
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> int32_t impl_ISpiConnectionSettings<D>::DataBitLength() const
{
    int32_t value {};
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->get_DataBitLength(&value));
    return value;
}

template <typename D> void impl_ISpiConnectionSettings<D>::DataBitLength(int32_t value) const
{
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->put_DataBitLength(value));
}

template <typename D> int32_t impl_ISpiConnectionSettings<D>::ClockFrequency() const
{
    int32_t value {};
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->get_ClockFrequency(&value));
    return value;
}

template <typename D> void impl_ISpiConnectionSettings<D>::ClockFrequency(int32_t value) const
{
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->put_ClockFrequency(value));
}

template <typename D> Windows::Devices::Spi::SpiSharingMode impl_ISpiConnectionSettings<D>::SharingMode() const
{
    Windows::Devices::Spi::SpiSharingMode value {};
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->get_SharingMode(&value));
    return value;
}

template <typename D> void impl_ISpiConnectionSettings<D>::SharingMode(Windows::Devices::Spi::SpiSharingMode value) const
{
    check_hresult(static_cast<const ISpiConnectionSettings &>(static_cast<const D &>(*this))->put_SharingMode(value));
}

template <typename D> int32_t impl_ISpiBusInfo<D>::ChipSelectLineCount() const
{
    int32_t value {};
    check_hresult(static_cast<const ISpiBusInfo &>(static_cast<const D &>(*this))->get_ChipSelectLineCount(&value));
    return value;
}

template <typename D> int32_t impl_ISpiBusInfo<D>::MinClockFrequency() const
{
    int32_t value {};
    check_hresult(static_cast<const ISpiBusInfo &>(static_cast<const D &>(*this))->get_MinClockFrequency(&value));
    return value;
}

template <typename D> int32_t impl_ISpiBusInfo<D>::MaxClockFrequency() const
{
    int32_t value {};
    check_hresult(static_cast<const ISpiBusInfo &>(static_cast<const D &>(*this))->get_MaxClockFrequency(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<int32_t> impl_ISpiBusInfo<D>::SupportedDataBitLengths() const
{
    Windows::Foundation::Collections::IVectorView<int32_t> value;
    check_hresult(static_cast<const ISpiBusInfo &>(static_cast<const D &>(*this))->get_SupportedDataBitLengths(put(value)));
    return value;
}

template <typename D> hstring impl_ISpiDeviceStatics<D>::GetDeviceSelector() const
{
    hstring value;
    check_hresult(static_cast<const ISpiDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(value)));
    return value;
}

template <typename D> hstring impl_ISpiDeviceStatics<D>::GetDeviceSelector(hstring_ref friendlyName) const
{
    hstring value;
    check_hresult(static_cast<const ISpiDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorFromFriendlyName(get(friendlyName), put(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::SpiBusInfo impl_ISpiDeviceStatics<D>::GetBusInfo(hstring_ref busId) const
{
    Windows::Devices::Spi::SpiBusInfo busInfo { nullptr };
    check_hresult(static_cast<const ISpiDeviceStatics &>(static_cast<const D &>(*this))->abi_GetBusInfo(get(busId), put(busInfo)));
    return busInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> impl_ISpiDeviceStatics<D>::FromIdAsync(hstring_ref busId, const Windows::Devices::Spi::SpiConnectionSettings & settings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> operation;
    check_hresult(static_cast<const ISpiDeviceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(busId), get(settings), put(operation)));
    return operation;
}

template <typename D> Windows::Devices::Spi::SpiDevice impl_ISpiController<D>::GetDevice(const Windows::Devices::Spi::SpiConnectionSettings & settings) const
{
    Windows::Devices::Spi::SpiDevice device { nullptr };
    check_hresult(static_cast<const ISpiController &>(static_cast<const D &>(*this))->abi_GetDevice(get(settings), put(device)));
    return device;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> impl_ISpiControllerStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> operation;
    check_hresult(static_cast<const ISpiControllerStatics &>(static_cast<const D &>(*this))->abi_GetDefaultAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> impl_ISpiControllerStatics<D>::GetControllersAsync(const Windows::Devices::Spi::Provider::ISpiProvider & provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> operation;
    check_hresult(static_cast<const ISpiControllerStatics &>(static_cast<const D &>(*this))->abi_GetControllersAsync(get(provider), put(operation)));
    return operation;
}

template <typename D> hstring impl_ISpiDevice<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const ISpiDevice &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::SpiConnectionSettings impl_ISpiDevice<D>::ConnectionSettings() const
{
    Windows::Devices::Spi::SpiConnectionSettings value { nullptr };
    check_hresult(static_cast<const ISpiDevice &>(static_cast<const D &>(*this))->get_ConnectionSettings(put(value)));
    return value;
}

template <typename D> void impl_ISpiDevice<D>::Write(array_ref<const uint8_t> buffer) const
{
    check_hresult(static_cast<const ISpiDevice &>(static_cast<const D &>(*this))->abi_Write(buffer.size(), get(buffer)));
}

template <typename D> void impl_ISpiDevice<D>::Read(array_ref<uint8_t> buffer) const
{
    check_hresult(static_cast<const ISpiDevice &>(static_cast<const D &>(*this))->abi_Read(buffer.size(), get(buffer)));
}

template <typename D> void impl_ISpiDevice<D>::TransferSequential(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const
{
    check_hresult(static_cast<const ISpiDevice &>(static_cast<const D &>(*this))->abi_TransferSequential(writeBuffer.size(), get(writeBuffer), readBuffer.size(), get(readBuffer)));
}

template <typename D> void impl_ISpiDevice<D>::TransferFullDuplex(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const
{
    check_hresult(static_cast<const ISpiDevice &>(static_cast<const D &>(*this))->abi_TransferFullDuplex(writeBuffer.size(), get(writeBuffer), readBuffer.size(), get(readBuffer)));
}

inline SpiConnectionSettings::SpiConnectionSettings(int32_t chipSelectLine) :
    SpiConnectionSettings(get_activation_factory<SpiConnectionSettings, ISpiConnectionSettingsFactory>().Create(chipSelectLine))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> SpiController::GetDefaultAsync()
{
    return get_activation_factory<SpiController, ISpiControllerStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> SpiController::GetControllersAsync(const Windows::Devices::Spi::Provider::ISpiProvider & provider)
{
    return get_activation_factory<SpiController, ISpiControllerStatics>().GetControllersAsync(provider);
}

inline hstring SpiDevice::GetDeviceSelector()
{
    return get_activation_factory<SpiDevice, ISpiDeviceStatics>().GetDeviceSelector();
}

inline hstring SpiDevice::GetDeviceSelector(hstring_ref friendlyName)
{
    return get_activation_factory<SpiDevice, ISpiDeviceStatics>().GetDeviceSelector(friendlyName);
}

inline Windows::Devices::Spi::SpiBusInfo SpiDevice::GetBusInfo(hstring_ref busId)
{
    return get_activation_factory<SpiDevice, ISpiDeviceStatics>().GetBusInfo(busId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> SpiDevice::FromIdAsync(hstring_ref busId, const Windows::Devices::Spi::SpiConnectionSettings & settings)
{
    return get_activation_factory<SpiDevice, ISpiDeviceStatics>().FromIdAsync(busId, settings);
}

}

}
