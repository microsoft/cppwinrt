// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Pwm.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_1a166093_1a7a_5e12_9d38_f892fec3ec66
#define WINRT_GENERIC_1a166093_1a7a_5e12_9d38_f892fec3ec66
template <> struct __declspec(uuid("1a166093-1a7a-5e12-9d38-f892fec3ec66")) __declspec(novtable) IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider> : impl_IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider> {};
#endif

#ifndef WINRT_GENERIC_90389702_f036_56e1_a94f_6d99d52b9578
#define WINRT_GENERIC_90389702_f036_56e1_a94f_6d99d52b9578
template <> struct __declspec(uuid("90389702-f036-56e1-a94f-6d99d52b9578")) __declspec(novtable) IIterator<Windows::Devices::Pwm::Provider::IPwmControllerProvider> : impl_IIterator<Windows::Devices::Pwm::Provider::IPwmControllerProvider> {};
#endif

#ifndef WINRT_GENERIC_4936ed59_b494_5128_bc7e_03e630346475
#define WINRT_GENERIC_4936ed59_b494_5128_bc7e_03e630346475
template <> struct __declspec(uuid("4936ed59-b494-5128-bc7e-03e630346475")) __declspec(novtable) IIterable<Windows::Devices::Pwm::Provider::IPwmControllerProvider> : impl_IIterable<Windows::Devices::Pwm::Provider::IPwmControllerProvider> {};
#endif


}

namespace Windows::Devices::Pwm::Provider {

template <typename D>
struct WINRT_EBO impl_IPwmControllerProvider
{
    int32_t PinCount() const;
    double ActualFrequency() const;
    double SetDesiredFrequency(double frequency) const;
    double MaxFrequency() const;
    double MinFrequency() const;
    void AcquirePin(int32_t pin) const;
    void ReleasePin(int32_t pin) const;
    void EnablePin(int32_t pin) const;
    void DisablePin(int32_t pin) const;
    void SetPulseParameters(int32_t pin, double dutyCycle, bool invertPolarity) const;
};

template <typename D>
struct WINRT_EBO impl_IPwmProvider
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider> GetControllers() const;
};

struct IPwmControllerProvider :
    Windows::IInspectable,
    impl::consume<IPwmControllerProvider>
{
    IPwmControllerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPwmControllerProvider>(m_ptr); }
};

struct IPwmProvider :
    Windows::IInspectable,
    impl::consume<IPwmProvider>
{
    IPwmProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPwmProvider>(m_ptr); }
};

}

}
