// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Spi.Provider.3.h"
#include "Windows.Devices.Spi.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> : produce_base<D, Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>
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

    HRESULT __stdcall get_Mode(Windows::Devices::Spi::Provider::ProviderSpiMode * value) noexcept override
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

    HRESULT __stdcall put_Mode(Windows::Devices::Spi::Provider::ProviderSpiMode value) noexcept override
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

    HRESULT __stdcall get_SharingMode(Windows::Devices::Spi::Provider::ProviderSpiSharingMode * value) noexcept override
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

    HRESULT __stdcall put_SharingMode(Windows::Devices::Spi::Provider::ProviderSpiSharingMode value) noexcept override
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
struct produce<D, Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory> : produce_base<D, Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>
{
    HRESULT __stdcall abi_Create(int32_t chipSelectLine, abi_arg_out<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> value) noexcept override
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
struct produce<D, Windows::Devices::Spi::Provider::ISpiControllerProvider> : produce_base<D, Windows::Devices::Spi::Provider::ISpiControllerProvider>
{
    HRESULT __stdcall abi_GetDeviceProvider(abi_arg_in<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> settings, abi_arg_out<Windows::Devices::Spi::Provider::ISpiDeviceProvider> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeviceProvider(*reinterpret_cast<const Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings *>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Spi::Provider::ISpiDeviceProvider> : produce_base<D, Windows::Devices::Spi::Provider::ISpiDeviceProvider>
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

    HRESULT __stdcall get_ConnectionSettings(abi_arg_out<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> value) noexcept override
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
struct produce<D, Windows::Devices::Spi::Provider::ISpiProvider> : produce_base<D, Windows::Devices::Spi::Provider::ISpiProvider>
{
    HRESULT __stdcall abi_GetControllersAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetControllersAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Spi::Provider {

template <typename D> Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings impl_IProviderSpiConnectionSettingsFactory<D>::Create(int32_t chipSelectLine) const
{
    Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings value { nullptr };
    check_hresult(static_cast<const IProviderSpiConnectionSettingsFactory &>(static_cast<const D &>(*this))->abi_Create(chipSelectLine, put(value)));
    return value;
}

template <typename D> int32_t impl_IProviderSpiConnectionSettings<D>::ChipSelectLine() const
{
    int32_t value {};
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->get_ChipSelectLine(&value));
    return value;
}

template <typename D> void impl_IProviderSpiConnectionSettings<D>::ChipSelectLine(int32_t value) const
{
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->put_ChipSelectLine(value));
}

template <typename D> Windows::Devices::Spi::Provider::ProviderSpiMode impl_IProviderSpiConnectionSettings<D>::Mode() const
{
    Windows::Devices::Spi::Provider::ProviderSpiMode value {};
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_IProviderSpiConnectionSettings<D>::Mode(Windows::Devices::Spi::Provider::ProviderSpiMode value) const
{
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> int32_t impl_IProviderSpiConnectionSettings<D>::DataBitLength() const
{
    int32_t value {};
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->get_DataBitLength(&value));
    return value;
}

template <typename D> void impl_IProviderSpiConnectionSettings<D>::DataBitLength(int32_t value) const
{
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->put_DataBitLength(value));
}

template <typename D> int32_t impl_IProviderSpiConnectionSettings<D>::ClockFrequency() const
{
    int32_t value {};
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->get_ClockFrequency(&value));
    return value;
}

template <typename D> void impl_IProviderSpiConnectionSettings<D>::ClockFrequency(int32_t value) const
{
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->put_ClockFrequency(value));
}

template <typename D> Windows::Devices::Spi::Provider::ProviderSpiSharingMode impl_IProviderSpiConnectionSettings<D>::SharingMode() const
{
    Windows::Devices::Spi::Provider::ProviderSpiSharingMode value {};
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->get_SharingMode(&value));
    return value;
}

template <typename D> void impl_IProviderSpiConnectionSettings<D>::SharingMode(Windows::Devices::Spi::Provider::ProviderSpiSharingMode value) const
{
    check_hresult(static_cast<const IProviderSpiConnectionSettings &>(static_cast<const D &>(*this))->put_SharingMode(value));
}

template <typename D> Windows::Devices::Spi::Provider::ISpiDeviceProvider impl_ISpiControllerProvider<D>::GetDeviceProvider(const Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings & settings) const
{
    Windows::Devices::Spi::Provider::ISpiDeviceProvider result;
    check_hresult(static_cast<const ISpiControllerProvider &>(static_cast<const D &>(*this))->abi_GetDeviceProvider(get(settings), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> impl_ISpiProvider<D>::GetControllersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> result;
    check_hresult(static_cast<const ISpiProvider &>(static_cast<const D &>(*this))->abi_GetControllersAsync(put(result)));
    return result;
}

template <typename D> hstring impl_ISpiDeviceProvider<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const ISpiDeviceProvider &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings impl_ISpiDeviceProvider<D>::ConnectionSettings() const
{
    Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings value { nullptr };
    check_hresult(static_cast<const ISpiDeviceProvider &>(static_cast<const D &>(*this))->get_ConnectionSettings(put(value)));
    return value;
}

template <typename D> void impl_ISpiDeviceProvider<D>::Write(array_ref<const uint8_t> buffer) const
{
    check_hresult(static_cast<const ISpiDeviceProvider &>(static_cast<const D &>(*this))->abi_Write(buffer.size(), get(buffer)));
}

template <typename D> void impl_ISpiDeviceProvider<D>::Read(array_ref<uint8_t> buffer) const
{
    check_hresult(static_cast<const ISpiDeviceProvider &>(static_cast<const D &>(*this))->abi_Read(buffer.size(), get(buffer)));
}

template <typename D> void impl_ISpiDeviceProvider<D>::TransferSequential(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const
{
    check_hresult(static_cast<const ISpiDeviceProvider &>(static_cast<const D &>(*this))->abi_TransferSequential(writeBuffer.size(), get(writeBuffer), readBuffer.size(), get(readBuffer)));
}

template <typename D> void impl_ISpiDeviceProvider<D>::TransferFullDuplex(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const
{
    check_hresult(static_cast<const ISpiDeviceProvider &>(static_cast<const D &>(*this))->abi_TransferFullDuplex(writeBuffer.size(), get(writeBuffer), readBuffer.size(), get(readBuffer)));
}

inline ProviderSpiConnectionSettings::ProviderSpiConnectionSettings(int32_t chipSelectLine) :
    ProviderSpiConnectionSettings(get_activation_factory<ProviderSpiConnectionSettings, IProviderSpiConnectionSettingsFactory>().Create(chipSelectLine))
{}

}

}
