// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.2.h"
#include "winrt/Windows.Devices.Spi.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::ChipSelectLine() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->get_ChipSelectLine(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::ChipSelectLine(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->put_ChipSelectLine(value));
}

template <typename D> Windows::Devices::Spi::Provider::ProviderSpiMode consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::Mode() const
{
    Windows::Devices::Spi::Provider::ProviderSpiMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::Mode(Windows::Devices::Spi::Provider::ProviderSpiMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->put_Mode(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::DataBitLength() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->get_DataBitLength(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::DataBitLength(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->put_DataBitLength(value));
}

template <typename D> int32_t consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::ClockFrequency() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->get_ClockFrequency(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::ClockFrequency(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->put_ClockFrequency(value));
}

template <typename D> Windows::Devices::Spi::Provider::ProviderSpiSharingMode consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::SharingMode() const
{
    Windows::Devices::Spi::Provider::ProviderSpiSharingMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>::SharingMode(Windows::Devices::Spi::Provider::ProviderSpiSharingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings)->put_SharingMode(get_abi(value)));
}

template <typename D> Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettingsFactory<D>::Create(int32_t chipSelectLine) const
{
    Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory)->Create(chipSelectLine, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::Provider::ISpiDeviceProvider consume_Windows_Devices_Spi_Provider_ISpiControllerProvider<D>::GetDeviceProvider(Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings const& settings) const
{
    Windows::Devices::Spi::Provider::ISpiDeviceProvider result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::ISpiControllerProvider)->GetDeviceProvider(get_abi(settings), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::ISpiDeviceProvider)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider<D>::ConnectionSettings() const
{
    Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::ISpiDeviceProvider)->get_ConnectionSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider<D>::Write(array_view<uint8_t const> buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::ISpiDeviceProvider)->Write(buffer.size(), get_abi(buffer)));
}

template <typename D> void consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider<D>::Read(array_view<uint8_t> buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::ISpiDeviceProvider)->Read(buffer.size(), get_abi(buffer)));
}

template <typename D> void consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider<D>::TransferSequential(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::ISpiDeviceProvider)->TransferSequential(writeBuffer.size(), get_abi(writeBuffer), readBuffer.size(), get_abi(readBuffer)));
}

template <typename D> void consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider<D>::TransferFullDuplex(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::ISpiDeviceProvider)->TransferFullDuplex(writeBuffer.size(), get_abi(writeBuffer), readBuffer.size(), get_abi(readBuffer)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> consume_Windows_Devices_Spi_Provider_ISpiProvider<D>::GetControllersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::Provider::ISpiProvider)->GetControllersAsync(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> : produce_base<D, Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>
{
    HRESULT __stdcall get_ChipSelectLine(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChipSelectLine());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ChipSelectLine(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(abi_t<Windows::Devices::Spi::Provider::ProviderSpiMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::Devices::Spi::Provider::ProviderSpiMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Devices::Spi::Provider::ProviderSpiMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataBitLength(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataBitLength());
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
            typename D::abi_guard guard(this->shim());
            this->shim().DataBitLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClockFrequency(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClockFrequency());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ClockFrequency(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::Spi::Provider::ProviderSpiSharingMode>* value) noexcept override
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

    HRESULT __stdcall put_SharingMode(abi_t<Windows::Devices::Spi::Provider::ProviderSpiSharingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharingMode(*reinterpret_cast<Windows::Devices::Spi::Provider::ProviderSpiSharingMode const*>(&value));
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
    HRESULT __stdcall Create(int32_t chipSelectLine, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(chipSelectLine));
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
    HRESULT __stdcall GetDeviceProvider(::IUnknown* settings, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceProvider(*reinterpret_cast<Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings const*>(&settings)));
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

    HRESULT __stdcall TransferSequential(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferSequential(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(writeBuffer), reinterpret_cast<uint8_t const *>(writeBuffer) + __writeBufferSize), array_view<uint8_t>(reinterpret_cast<uint8_t*>(readBuffer), reinterpret_cast<uint8_t*>(readBuffer) + __readBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TransferFullDuplex(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferFullDuplex(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(writeBuffer), reinterpret_cast<uint8_t const *>(writeBuffer) + __writeBufferSize), array_view<uint8_t>(reinterpret_cast<uint8_t*>(readBuffer), reinterpret_cast<uint8_t*>(readBuffer) + __readBufferSize));
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
    HRESULT __stdcall GetControllersAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetControllersAsync());
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

WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider {

inline ProviderSpiConnectionSettings::ProviderSpiConnectionSettings(int32_t chipSelectLine) :
    ProviderSpiConnectionSettings(get_activation_factory<ProviderSpiConnectionSettings, Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>().Create(chipSelectLine))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> {};

template<> struct hash<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory> {};

template<> struct hash<winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider> {};

template<> struct hash<winrt::Windows::Devices::Spi::Provider::ISpiDeviceProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::Provider::ISpiDeviceProvider> {};

template<> struct hash<winrt::Windows::Devices::Spi::Provider::ISpiProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::Provider::ISpiProvider> {};

template<> struct hash<winrt::Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings> {};

}

WINRT_WARNING_POP
