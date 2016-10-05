// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Devices.Gpio.Provider.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Gpio.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioController> : produce_base<D, Windows::Devices::Gpio::IGpioController>
{
    HRESULT __stdcall get_PinCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PinCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenPin(int32_t pinNumber, abi_arg_out<Windows::Devices::Gpio::IGpioPin> pin) noexcept override
    {
        try
        {
            *pin = detach(this->shim().OpenPin(pinNumber));
            return S_OK;
        }
        catch (...)
        {
            *pin = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenPinWithSharingMode(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode, abi_arg_out<Windows::Devices::Gpio::IGpioPin> pin) noexcept override
    {
        try
        {
            *pin = detach(this->shim().OpenPin(pinNumber, sharingMode));
            return S_OK;
        }
        catch (...)
        {
            *pin = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode, abi_arg_out<Windows::Devices::Gpio::IGpioPin> pin, Windows::Devices::Gpio::GpioOpenStatus * openStatus, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryOpenPin(pinNumber, sharingMode, *pin, *openStatus));
            return S_OK;
        }
        catch (...)
        {
            *pin = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioControllerStatics> : produce_base<D, Windows::Devices::Gpio::IGpioControllerStatics>
{
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Devices::Gpio::IGpioController> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Gpio::IGpioControllerStatics2> : produce_base<D, Windows::Devices::Gpio::IGpioControllerStatics2>
{
    HRESULT __stdcall abi_GetControllersAsync(abi_arg_in<Windows::Devices::Gpio::Provider::IGpioProvider> provider, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetControllersAsync(*reinterpret_cast<const Windows::Devices::Gpio::Provider::IGpioProvider *>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefaultAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController>> operation) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioPin> : produce_base<D, Windows::Devices::Gpio::IGpioPin>
{
    HRESULT __stdcall add_ValueChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ValueChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ValueChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DebounceTimeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DebounceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DebounceTimeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().DebounceTimeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PinNumber(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PinNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(Windows::Devices::Gpio::GpioSharingMode * value) noexcept override
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

    HRESULT __stdcall abi_IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode driveMode, bool * supported) noexcept override
    {
        try
        {
            *supported = detach(this->shim().IsDriveModeSupported(driveMode));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDriveMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode value) noexcept override
    {
        try
        {
            this->shim().SetDriveMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Write(Windows::Devices::Gpio::GpioPinValue value) noexcept override
    {
        try
        {
            this->shim().Write(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Read(Windows::Devices::Gpio::GpioPinValue * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Read());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioPinValueChangedEventArgs> : produce_base<D, Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
{
    HRESULT __stdcall get_Edge(Windows::Devices::Gpio::GpioPinEdge * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Gpio {

template <typename D> Windows::Devices::Gpio::GpioPinEdge impl_IGpioPinValueChangedEventArgs<D>::Edge() const
{
    Windows::Devices::Gpio::GpioPinEdge value {};
    check_hresult(static_cast<const IGpioPinValueChangedEventArgs &>(static_cast<const D &>(*this))->get_Edge(&value));
    return value;
}

template <typename D> int32_t impl_IGpioController<D>::PinCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IGpioController &>(static_cast<const D &>(*this))->get_PinCount(&value));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioPin impl_IGpioController<D>::OpenPin(int32_t pinNumber) const
{
    Windows::Devices::Gpio::GpioPin pin { nullptr };
    check_hresult(static_cast<const IGpioController &>(static_cast<const D &>(*this))->abi_OpenPin(pinNumber, put(pin)));
    return pin;
}

template <typename D> Windows::Devices::Gpio::GpioPin impl_IGpioController<D>::OpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode) const
{
    Windows::Devices::Gpio::GpioPin pin { nullptr };
    check_hresult(static_cast<const IGpioController &>(static_cast<const D &>(*this))->abi_OpenPinWithSharingMode(pinNumber, sharingMode, put(pin)));
    return pin;
}

template <typename D> bool impl_IGpioController<D>::TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode, Windows::Devices::Gpio::GpioPin & pin, Windows::Devices::Gpio::GpioOpenStatus & openStatus) const
{
    bool succeeded {};
    check_hresult(static_cast<const IGpioController &>(static_cast<const D &>(*this))->abi_TryOpenPin(pinNumber, sharingMode, put(pin), &openStatus, &succeeded));
    return succeeded;
}

template <typename D> Windows::Devices::Gpio::GpioController impl_IGpioControllerStatics<D>::GetDefault() const
{
    Windows::Devices::Gpio::GpioController value { nullptr };
    check_hresult(static_cast<const IGpioControllerStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> impl_IGpioControllerStatics2<D>::GetControllersAsync(const Windows::Devices::Gpio::Provider::IGpioProvider & provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> operation;
    check_hresult(static_cast<const IGpioControllerStatics2 &>(static_cast<const D &>(*this))->abi_GetControllersAsync(get(provider), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> impl_IGpioControllerStatics2<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> operation;
    check_hresult(static_cast<const IGpioControllerStatics2 &>(static_cast<const D &>(*this))->abi_GetDefaultAsync(put(operation)));
    return operation;
}

template <typename D> event_token impl_IGpioPin<D>::ValueChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->add_ValueChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGpioPin> impl_IGpioPin<D>::ValueChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGpioPin>(this, &ABI::Windows::Devices::Gpio::IGpioPin::remove_ValueChanged, ValueChanged(handler));
}

template <typename D> void impl_IGpioPin<D>::ValueChanged(event_token token) const
{
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->remove_ValueChanged(token));
}

template <typename D> Windows::Foundation::TimeSpan impl_IGpioPin<D>::DebounceTimeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->get_DebounceTimeout(put(value)));
    return value;
}

template <typename D> void impl_IGpioPin<D>::DebounceTimeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->put_DebounceTimeout(get(value)));
}

template <typename D> int32_t impl_IGpioPin<D>::PinNumber() const
{
    int32_t value {};
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->get_PinNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioSharingMode impl_IGpioPin<D>::SharingMode() const
{
    Windows::Devices::Gpio::GpioSharingMode value {};
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->get_SharingMode(&value));
    return value;
}

template <typename D> bool impl_IGpioPin<D>::IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode driveMode) const
{
    bool supported {};
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->abi_IsDriveModeSupported(driveMode, &supported));
    return supported;
}

template <typename D> Windows::Devices::Gpio::GpioPinDriveMode impl_IGpioPin<D>::GetDriveMode() const
{
    Windows::Devices::Gpio::GpioPinDriveMode value {};
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->abi_GetDriveMode(&value));
    return value;
}

template <typename D> void impl_IGpioPin<D>::SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode value) const
{
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->abi_SetDriveMode(value));
}

template <typename D> void impl_IGpioPin<D>::Write(Windows::Devices::Gpio::GpioPinValue value) const
{
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->abi_Write(value));
}

template <typename D> Windows::Devices::Gpio::GpioPinValue impl_IGpioPin<D>::Read() const
{
    Windows::Devices::Gpio::GpioPinValue value {};
    check_hresult(static_cast<const IGpioPin &>(static_cast<const D &>(*this))->abi_Read(&value));
    return value;
}

inline Windows::Devices::Gpio::GpioController GpioController::GetDefault()
{
    return get_activation_factory<GpioController, IGpioControllerStatics>().GetDefault();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> GpioController::GetControllersAsync(const Windows::Devices::Gpio::Provider::IGpioProvider & provider)
{
    return get_activation_factory<GpioController, IGpioControllerStatics2>().GetControllersAsync(provider);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> GpioController::GetDefaultAsync()
{
    return get_activation_factory<GpioController, IGpioControllerStatics2>().GetDefaultAsync();
}

}

}
