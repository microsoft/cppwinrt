// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Lights.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_52a69dfd_f0d6_5931_b8e1_f38066d71bf2
#define WINRT_GENERIC_52a69dfd_f0d6_5931_b8e1_f38066d71bf2
template <> struct __declspec(uuid("52a69dfd-f0d6-5931-b8e1-f38066d71bf2")) __declspec(novtable) IAsyncOperation<Windows::Devices::Lights::Lamp> : impl_IAsyncOperation<Windows::Devices::Lights::Lamp> {};
#endif

#ifndef WINRT_GENERIC_556a02d9_7685_576f_89ca_b62dc481d29d
#define WINRT_GENERIC_556a02d9_7685_576f_89ca_b62dc481d29d
template <> struct __declspec(uuid("556a02d9-7685-576f-89ca-b62dc481d29d")) __declspec(novtable) TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> : impl_TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_191a8c6e_60dd_5a21_a53c_bf3f940a1dde
#define WINRT_GENERIC_191a8c6e_60dd_5a21_a53c_bf3f940a1dde
template <> struct __declspec(uuid("191a8c6e-60dd-5a21-a53c-bf3f940a1dde")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Lights::Lamp> : impl_AsyncOperationCompletedHandler<Windows::Devices::Lights::Lamp> {};
#endif


}

namespace Windows::Devices::Lights {

template <typename D>
struct WINRT_EBO impl_ILamp
{
    hstring DeviceId() const;
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    float BrightnessLevel() const;
    void BrightnessLevel(float value) const;
    bool IsColorSettable() const;
    Windows::UI::Color Color() const;
    void Color(const Windows::UI::Color & value) const;
    event_token AvailabilityChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> & handler) const;
    using AvailabilityChanged_revoker = event_revoker<ILamp>;
    AvailabilityChanged_revoker AvailabilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> & handler) const;
    void AvailabilityChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ILampAvailabilityChangedEventArgs
{
    bool IsAvailable() const;
};

template <typename D>
struct WINRT_EBO impl_ILampStatics
{
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> FromIdAsync(hstring_ref deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> GetDefaultAsync() const;
};

struct ILamp :
    Windows::IInspectable,
    impl::consume<ILamp>,
    impl::require<ILamp, Windows::Foundation::IClosable>
{
    ILamp(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILamp>(m_ptr); }
};

struct ILampAvailabilityChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ILampAvailabilityChangedEventArgs>
{
    ILampAvailabilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILampAvailabilityChangedEventArgs>(m_ptr); }
};

struct ILampStatics :
    Windows::IInspectable,
    impl::consume<ILampStatics>
{
    ILampStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILampStatics>(m_ptr); }
};

}

}
