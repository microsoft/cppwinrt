// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Adc.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_7c4789c0_8445_5757_aab7_659cbf50aaa7
#define WINRT_GENERIC_7c4789c0_8445_5757_aab7_659cbf50aaa7
template <> struct __declspec(uuid("7c4789c0-8445-5757-aab7-659cbf50aaa7")) __declspec(novtable) IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> : impl_IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> {};
#endif

#ifndef WINRT_GENERIC_b43acf15_a24a_5b00_b710_1737ba550a18
#define WINRT_GENERIC_b43acf15_a24a_5b00_b710_1737ba550a18
template <> struct __declspec(uuid("b43acf15-a24a-5b00-b710-1737ba550a18")) __declspec(novtable) IIterator<Windows::Devices::Adc::Provider::IAdcControllerProvider> : impl_IIterator<Windows::Devices::Adc::Provider::IAdcControllerProvider> {};
#endif

#ifndef WINRT_GENERIC_30047155_1f71_5223_8482_e5159d0137d0
#define WINRT_GENERIC_30047155_1f71_5223_8482_e5159d0137d0
template <> struct __declspec(uuid("30047155-1f71-5223-8482-e5159d0137d0")) __declspec(novtable) IIterable<Windows::Devices::Adc::Provider::IAdcControllerProvider> : impl_IIterable<Windows::Devices::Adc::Provider::IAdcControllerProvider> {};
#endif


}

namespace Windows::Devices::Adc::Provider {

template <typename D>
struct WINRT_EBO impl_IAdcControllerProvider
{
    int32_t ChannelCount() const;
    int32_t ResolutionInBits() const;
    int32_t MinValue() const;
    int32_t MaxValue() const;
    Windows::Devices::Adc::Provider::ProviderAdcChannelMode ChannelMode() const;
    void ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode value) const;
    bool IsChannelModeSupported(Windows::Devices::Adc::Provider::ProviderAdcChannelMode channelMode) const;
    void AcquireChannel(int32_t channel) const;
    void ReleaseChannel(int32_t channel) const;
    int32_t ReadValue(int32_t channelNumber) const;
};

template <typename D>
struct WINRT_EBO impl_IAdcProvider
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> GetControllers() const;
};

struct IAdcControllerProvider :
    Windows::IInspectable,
    impl::consume<IAdcControllerProvider>
{
    IAdcControllerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdcControllerProvider>(m_ptr); }
};

struct IAdcProvider :
    Windows::IInspectable,
    impl::consume<IAdcProvider>
{
    IAdcProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdcProvider>(m_ptr); }
};

}

}
