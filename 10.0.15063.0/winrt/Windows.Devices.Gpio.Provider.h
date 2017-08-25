// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Gpio.Provider.2.h"
#include "winrt/Windows.Devices.Gpio.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Devices_Gpio_Provider_IGpioControllerProvider<D>::PinCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioControllerProvider)->get_PinCount(&value));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::IGpioPinProvider consume_Windows_Devices_Gpio_Provider_IGpioControllerProvider<D>::OpenPinProvider(int32_t pin, Windows::Devices::Gpio::Provider::ProviderGpioSharingMode const& sharingMode) const
{
    Windows::Devices::Gpio::Provider::IGpioPinProvider gpioPinProvider{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioControllerProvider)->OpenPinProvider(pin, get_abi(sharingMode), put_abi(gpioPinProvider)));
    return gpioPinProvider;
}

template <typename D> event_token consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->add_ValueChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Gpio::Provider::IGpioPinProvider> consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Gpio::Provider::IGpioPinProvider>(this, &abi_t<Windows::Devices::Gpio::Provider::IGpioPinProvider>::remove_ValueChanged, ValueChanged(handler));
}

template <typename D> void consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::ValueChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->remove_ValueChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::DebounceTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->get_DebounceTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::DebounceTimeout(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->put_DebounceTimeout(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::PinNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->get_PinNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::ProviderGpioSharingMode consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::SharingMode() const
{
    Windows::Devices::Gpio::Provider::ProviderGpioSharingMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::IsDriveModeSupported(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode const& driveMode) const
{
    bool supported{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->IsDriveModeSupported(get_abi(driveMode), &supported));
    return supported;
}

template <typename D> Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::GetDriveMode() const
{
    Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->GetDriveMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::SetDriveMode(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->SetDriveMode(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::Write(Windows::Devices::Gpio::Provider::ProviderGpioPinValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->Write(get_abi(value)));
}

template <typename D> Windows::Devices::Gpio::Provider::ProviderGpioPinValue consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>::Read() const
{
    Windows::Devices::Gpio::Provider::ProviderGpioPinValue value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProvider)->Read(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::ProviderGpioPinEdge consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgs<D>::Edge() const
{
    Windows::Devices::Gpio::Provider::ProviderGpioPinEdge value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs)->get_Edge(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgsFactory<D>::Create(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge const& edge) const
{
    Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory)->Create(get_abi(edge), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> consume_Windows_Devices_Gpio_Provider_IGpioProvider<D>::GetControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::Provider::IGpioProvider)->GetControllers(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Gpio::Provider::IGpioControllerProvider> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioControllerProvider>
{
    HRESULT __stdcall get_PinCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PinCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenPinProvider(int32_t pin, abi_t<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode> sharingMode, ::IUnknown** gpioPinProvider) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *gpioPinProvider = detach_abi(this->shim().OpenPinProvider(pin, *reinterpret_cast<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode const*>(&sharingMode)));
            return S_OK;
        }
        catch (...)
        {
            *gpioPinProvider = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::Provider::IGpioPinProvider> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioPinProvider>
{
    HRESULT __stdcall add_ValueChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ValueChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValueChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DebounceTimeout(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DebounceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DebounceTimeout(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DebounceTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PinNumber(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PinNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode>* value) noexcept override
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

    HRESULT __stdcall IsDriveModeSupported(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode> driveMode, bool* supported) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *supported = detach_abi(this->shim().IsDriveModeSupported(*reinterpret_cast<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode const*>(&driveMode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDriveMode(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDriveMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDriveMode(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDriveMode(*reinterpret_cast<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Write(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinValue> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Write(*reinterpret_cast<Windows::Devices::Gpio::Provider::ProviderGpioPinValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Read(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinValue>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Read());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>
{
    HRESULT __stdcall get_Edge(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge> edge, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge const*>(&edge)));
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
struct produce<D, Windows::Devices::Gpio::Provider::IGpioProvider> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioProvider>
{
    HRESULT __stdcall GetControllers(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetControllers());
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

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider {

inline GpioPinProviderValueChangedEventArgs::GpioPinProviderValueChangedEventArgs(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge const& edge) :
    GpioPinProviderValueChangedEventArgs(get_activation_factory<GpioPinProviderValueChangedEventArgs, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>().Create(edge))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider> {};

template<> struct hash<winrt::Windows::Devices::Gpio::Provider::IGpioPinProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::Provider::IGpioPinProvider> {};

template<> struct hash<winrt::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory> {};

template<> struct hash<winrt::Windows::Devices::Gpio::Provider::IGpioProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::Provider::IGpioProvider> {};

template<> struct hash<winrt::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> {};

}

WINRT_WARNING_POP
