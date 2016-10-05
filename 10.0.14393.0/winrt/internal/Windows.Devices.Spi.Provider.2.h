// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Spi.Provider.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_96a4919b_3229_5e41_8b10_c8198c44f10c
#define WINRT_GENERIC_96a4919b_3229_5e41_8b10_c8198c44f10c
template <> struct __declspec(uuid("96a4919b-3229-5e41-8b10-c8198c44f10c")) __declspec(novtable) IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider> : impl_IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider> {};
#endif

#ifndef WINRT_GENERIC_cf1d15d3_a6c8_56dd_80c8_e8d960262277
#define WINRT_GENERIC_cf1d15d3_a6c8_56dd_80c8_e8d960262277
template <> struct __declspec(uuid("cf1d15d3-a6c8-56dd-80c8-e8d960262277")) __declspec(novtable) IIterator<Windows::Devices::Spi::Provider::ISpiControllerProvider> : impl_IIterator<Windows::Devices::Spi::Provider::ISpiControllerProvider> {};
#endif

#ifndef WINRT_GENERIC_71ba027d_8c84_58b1_8d66_9177c11698eb
#define WINRT_GENERIC_71ba027d_8c84_58b1_8d66_9177c11698eb
template <> struct __declspec(uuid("71ba027d-8c84-58b1-8d66-9177c11698eb")) __declspec(novtable) IIterable<Windows::Devices::Spi::Provider::ISpiControllerProvider> : impl_IIterable<Windows::Devices::Spi::Provider::ISpiControllerProvider> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b3af3490_dede_59d1_b562_1f6be71ae139
#define WINRT_GENERIC_b3af3490_dede_59d1_b562_1f6be71ae139
template <> struct __declspec(uuid("b3af3490-dede-59d1-b562-1f6be71ae139")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> {};
#endif

#ifndef WINRT_GENERIC_e9e2ae03_42d6_5211_ab52_325e722e2611
#define WINRT_GENERIC_e9e2ae03_42d6_5211_ab52_325e722e2611
template <> struct __declspec(uuid("e9e2ae03-42d6-5211-ab52-325e722e2611")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> {};
#endif


}

namespace Windows::Devices::Spi::Provider {

template <typename D>
struct WINRT_EBO impl_IProviderSpiConnectionSettings
{
    int32_t ChipSelectLine() const;
    void ChipSelectLine(int32_t value) const;
    Windows::Devices::Spi::Provider::ProviderSpiMode Mode() const;
    void Mode(Windows::Devices::Spi::Provider::ProviderSpiMode value) const;
    int32_t DataBitLength() const;
    void DataBitLength(int32_t value) const;
    int32_t ClockFrequency() const;
    void ClockFrequency(int32_t value) const;
    Windows::Devices::Spi::Provider::ProviderSpiSharingMode SharingMode() const;
    void SharingMode(Windows::Devices::Spi::Provider::ProviderSpiSharingMode value) const;
};

template <typename D>
struct WINRT_EBO impl_IProviderSpiConnectionSettingsFactory
{
    Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings Create(int32_t chipSelectLine) const;
};

template <typename D>
struct WINRT_EBO impl_ISpiControllerProvider
{
    Windows::Devices::Spi::Provider::ISpiDeviceProvider GetDeviceProvider(const Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings & settings) const;
};

template <typename D>
struct WINRT_EBO impl_ISpiDeviceProvider
{
    hstring DeviceId() const;
    Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings ConnectionSettings() const;
    void Write(array_ref<const uint8_t> buffer) const;
    void Read(array_ref<uint8_t> buffer) const;
    void TransferSequential(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const;
    void TransferFullDuplex(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const;
};

template <typename D>
struct WINRT_EBO impl_ISpiProvider
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>> GetControllersAsync() const;
};

struct IProviderSpiConnectionSettings :
    Windows::IInspectable,
    impl::consume<IProviderSpiConnectionSettings>
{
    IProviderSpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProviderSpiConnectionSettings>(m_ptr); }
};

struct IProviderSpiConnectionSettingsFactory :
    Windows::IInspectable,
    impl::consume<IProviderSpiConnectionSettingsFactory>
{
    IProviderSpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProviderSpiConnectionSettingsFactory>(m_ptr); }
};

struct ISpiControllerProvider :
    Windows::IInspectable,
    impl::consume<ISpiControllerProvider>
{
    ISpiControllerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpiControllerProvider>(m_ptr); }
};

struct ISpiDeviceProvider :
    Windows::IInspectable,
    impl::consume<ISpiDeviceProvider>,
    impl::require<ISpiDeviceProvider, Windows::Foundation::IClosable>
{
    ISpiDeviceProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpiDeviceProvider>(m_ptr); }
};

struct ISpiProvider :
    Windows::IInspectable,
    impl::consume<ISpiProvider>
{
    ISpiProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpiProvider>(m_ptr); }
};

}

}
