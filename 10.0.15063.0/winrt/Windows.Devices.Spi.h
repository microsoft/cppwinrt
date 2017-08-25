// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Spi.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Spi.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Devices_Spi_ISpiBusInfo<D>::ChipSelectLineCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiBusInfo)->get_ChipSelectLineCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Spi_ISpiBusInfo<D>::MinClockFrequency() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiBusInfo)->get_MinClockFrequency(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Spi_ISpiBusInfo<D>::MaxClockFrequency() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiBusInfo)->get_MaxClockFrequency(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<int32_t> consume_Windows_Devices_Spi_ISpiBusInfo<D>::SupportedDataBitLengths() const
{
    Windows::Foundation::Collections::IVectorView<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiBusInfo)->get_SupportedDataBitLengths(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::ChipSelectLine() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->get_ChipSelectLine(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::ChipSelectLine(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->put_ChipSelectLine(value));
}

template <typename D> Windows::Devices::Spi::SpiMode consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::Mode() const
{
    Windows::Devices::Spi::SpiMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::Mode(Windows::Devices::Spi::SpiMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->put_Mode(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::DataBitLength() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->get_DataBitLength(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::DataBitLength(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->put_DataBitLength(value));
}

template <typename D> int32_t consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::ClockFrequency() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->get_ClockFrequency(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::ClockFrequency(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->put_ClockFrequency(value));
}

template <typename D> Windows::Devices::Spi::SpiSharingMode consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::SharingMode() const
{
    Windows::Devices::Spi::SpiSharingMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_ISpiConnectionSettings<D>::SharingMode(Windows::Devices::Spi::SpiSharingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettings)->put_SharingMode(get_abi(value)));
}

template <typename D> Windows::Devices::Spi::SpiConnectionSettings consume_Windows_Devices_Spi_ISpiConnectionSettingsFactory<D>::Create(int32_t chipSelectLine) const
{
    Windows::Devices::Spi::SpiConnectionSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiConnectionSettingsFactory)->Create(chipSelectLine, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::SpiDevice consume_Windows_Devices_Spi_ISpiController<D>::GetDevice(Windows::Devices::Spi::SpiConnectionSettings const& settings) const
{
    Windows::Devices::Spi::SpiDevice device{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiController)->GetDevice(get_abi(settings), put_abi(device)));
    return device;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> consume_Windows_Devices_Spi_ISpiControllerStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiControllerStatics)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> consume_Windows_Devices_Spi_ISpiControllerStatics<D>::GetControllersAsync(Windows::Devices::Spi::Provider::ISpiProvider const& provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiControllerStatics)->GetControllersAsync(get_abi(provider), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Spi_ISpiDevice<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDevice)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::SpiConnectionSettings consume_Windows_Devices_Spi_ISpiDevice<D>::ConnectionSettings() const
{
    Windows::Devices::Spi::SpiConnectionSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDevice)->get_ConnectionSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Spi_ISpiDevice<D>::Write(array_view<uint8_t const> buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDevice)->Write(buffer.size(), get_abi(buffer)));
}

template <typename D> void consume_Windows_Devices_Spi_ISpiDevice<D>::Read(array_view<uint8_t> buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDevice)->Read(buffer.size(), get_abi(buffer)));
}

template <typename D> void consume_Windows_Devices_Spi_ISpiDevice<D>::TransferSequential(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDevice)->TransferSequential(writeBuffer.size(), get_abi(writeBuffer), readBuffer.size(), get_abi(readBuffer)));
}

template <typename D> void consume_Windows_Devices_Spi_ISpiDevice<D>::TransferFullDuplex(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDevice)->TransferFullDuplex(writeBuffer.size(), get_abi(writeBuffer), readBuffer.size(), get_abi(readBuffer)));
}

template <typename D> hstring consume_Windows_Devices_Spi_ISpiDeviceStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDeviceStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Spi_ISpiDeviceStatics<D>::GetDeviceSelector(param::hstring const& friendlyName) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDeviceStatics)->GetDeviceSelectorFromFriendlyName(get_abi(friendlyName), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::SpiBusInfo consume_Windows_Devices_Spi_ISpiDeviceStatics<D>::GetBusInfo(param::hstring const& busId) const
{
    Windows::Devices::Spi::SpiBusInfo busInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDeviceStatics)->GetBusInfo(get_abi(busId), put_abi(busInfo)));
    return busInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> consume_Windows_Devices_Spi_ISpiDeviceStatics<D>::FromIdAsync(param::hstring const& busId, Windows::Devices::Spi::SpiConnectionSettings const& settings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Spi::ISpiDeviceStatics)->FromIdAsync(get_abi(busId), get_abi(settings), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Devices::Spi::ISpiBusInfo> : produce_base<D, Windows::Devices::Spi::ISpiBusInfo>
{
    HRESULT __stdcall get_ChipSelectLineCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChipSelectLineCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinClockFrequency(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinClockFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxClockFrequency(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxClockFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDataBitLengths(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedDataBitLengths());
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

    HRESULT __stdcall get_Mode(abi_t<Windows::Devices::Spi::SpiMode>* value) noexcept override
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

    HRESULT __stdcall put_Mode(abi_t<Windows::Devices::Spi::SpiMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Devices::Spi::SpiMode const*>(&value));
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

    HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::Spi::SpiSharingMode>* value) noexcept override
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

    HRESULT __stdcall put_SharingMode(abi_t<Windows::Devices::Spi::SpiSharingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharingMode(*reinterpret_cast<Windows::Devices::Spi::SpiSharingMode const*>(&value));
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
struct produce<D, Windows::Devices::Spi::ISpiController> : produce_base<D, Windows::Devices::Spi::ISpiController>
{
    HRESULT __stdcall GetDevice(::IUnknown* settings, ::IUnknown** device) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *device = detach_abi(this->shim().GetDevice(*reinterpret_cast<Windows::Devices::Spi::SpiConnectionSettings const*>(&settings)));
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

    HRESULT __stdcall GetControllersAsync(::IUnknown* provider, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetControllersAsync(*reinterpret_cast<Windows::Devices::Spi::Provider::ISpiProvider const*>(&provider)));
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
struct produce<D, Windows::Devices::Spi::ISpiDeviceStatics> : produce_base<D, Windows::Devices::Spi::ISpiDeviceStatics>
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

    HRESULT __stdcall GetBusInfo(HSTRING busId, ::IUnknown** busInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *busInfo = detach_abi(this->shim().GetBusInfo(*reinterpret_cast<hstring const*>(&busId)));
            return S_OK;
        }
        catch (...)
        {
            *busInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING busId, ::IUnknown* settings, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&busId), *reinterpret_cast<Windows::Devices::Spi::SpiConnectionSettings const*>(&settings)));
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

WINRT_EXPORT namespace winrt::Windows::Devices::Spi {

inline SpiConnectionSettings::SpiConnectionSettings(int32_t chipSelectLine) :
    SpiConnectionSettings(get_activation_factory<SpiConnectionSettings, Windows::Devices::Spi::ISpiConnectionSettingsFactory>().Create(chipSelectLine))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> SpiController::GetDefaultAsync()
{
    return get_activation_factory<SpiController, Windows::Devices::Spi::ISpiControllerStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> SpiController::GetControllersAsync(Windows::Devices::Spi::Provider::ISpiProvider const& provider)
{
    return get_activation_factory<SpiController, Windows::Devices::Spi::ISpiControllerStatics>().GetControllersAsync(provider);
}

inline hstring SpiDevice::GetDeviceSelector()
{
    return get_activation_factory<SpiDevice, Windows::Devices::Spi::ISpiDeviceStatics>().GetDeviceSelector();
}

inline hstring SpiDevice::GetDeviceSelector(param::hstring const& friendlyName)
{
    return get_activation_factory<SpiDevice, Windows::Devices::Spi::ISpiDeviceStatics>().GetDeviceSelector(friendlyName);
}

inline Windows::Devices::Spi::SpiBusInfo SpiDevice::GetBusInfo(param::hstring const& busId)
{
    return get_activation_factory<SpiDevice, Windows::Devices::Spi::ISpiDeviceStatics>().GetBusInfo(busId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> SpiDevice::FromIdAsync(param::hstring const& busId, Windows::Devices::Spi::SpiConnectionSettings const& settings)
{
    return get_activation_factory<SpiDevice, Windows::Devices::Spi::ISpiDeviceStatics>().FromIdAsync(busId, settings);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Spi::ISpiBusInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::ISpiBusInfo> {};

template<> struct hash<winrt::Windows::Devices::Spi::ISpiConnectionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::ISpiConnectionSettings> {};

template<> struct hash<winrt::Windows::Devices::Spi::ISpiConnectionSettingsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::ISpiConnectionSettingsFactory> {};

template<> struct hash<winrt::Windows::Devices::Spi::ISpiController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::ISpiController> {};

template<> struct hash<winrt::Windows::Devices::Spi::ISpiControllerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::ISpiControllerStatics> {};

template<> struct hash<winrt::Windows::Devices::Spi::ISpiDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::ISpiDevice> {};

template<> struct hash<winrt::Windows::Devices::Spi::ISpiDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::ISpiDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Spi::SpiBusInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::SpiBusInfo> {};

template<> struct hash<winrt::Windows::Devices::Spi::SpiConnectionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::SpiConnectionSettings> {};

template<> struct hash<winrt::Windows::Devices::Spi::SpiController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::SpiController> {};

template<> struct hash<winrt::Windows::Devices::Spi::SpiDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Spi::SpiDevice> {};

}

WINRT_WARNING_POP
