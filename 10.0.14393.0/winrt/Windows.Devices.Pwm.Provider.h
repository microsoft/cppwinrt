// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Pwm.Provider.3.h"
#include "Windows.Devices.Pwm.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Pwm::Provider::IPwmControllerProvider> : produce_base<D, Windows::Devices::Pwm::Provider::IPwmControllerProvider>
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

    HRESULT __stdcall get_ActualFrequency(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActualFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDesiredFrequency(double frequency, double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SetDesiredFrequency(frequency));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxFrequency(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinFrequency(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcquirePin(int32_t pin) noexcept override
    {
        try
        {
            this->shim().AcquirePin(pin);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReleasePin(int32_t pin) noexcept override
    {
        try
        {
            this->shim().ReleasePin(pin);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnablePin(int32_t pin) noexcept override
    {
        try
        {
            this->shim().EnablePin(pin);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisablePin(int32_t pin) noexcept override
    {
        try
        {
            this->shim().DisablePin(pin);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPulseParameters(int32_t pin, double dutyCycle, bool invertPolarity) noexcept override
    {
        try
        {
            this->shim().SetPulseParameters(pin, dutyCycle, invertPolarity);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Pwm::Provider::IPwmProvider> : produce_base<D, Windows::Devices::Pwm::Provider::IPwmProvider>
{
    HRESULT __stdcall abi_GetControllers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetControllers());
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

namespace Windows::Devices::Pwm::Provider {

template <typename D> int32_t impl_IPwmControllerProvider<D>::PinCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->get_PinCount(&value));
    return value;
}

template <typename D> double impl_IPwmControllerProvider<D>::ActualFrequency() const
{
    double value {};
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->get_ActualFrequency(&value));
    return value;
}

template <typename D> double impl_IPwmControllerProvider<D>::SetDesiredFrequency(double frequency) const
{
    double value {};
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->abi_SetDesiredFrequency(frequency, &value));
    return value;
}

template <typename D> double impl_IPwmControllerProvider<D>::MaxFrequency() const
{
    double value {};
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->get_MaxFrequency(&value));
    return value;
}

template <typename D> double impl_IPwmControllerProvider<D>::MinFrequency() const
{
    double value {};
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->get_MinFrequency(&value));
    return value;
}

template <typename D> void impl_IPwmControllerProvider<D>::AcquirePin(int32_t pin) const
{
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->abi_AcquirePin(pin));
}

template <typename D> void impl_IPwmControllerProvider<D>::ReleasePin(int32_t pin) const
{
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->abi_ReleasePin(pin));
}

template <typename D> void impl_IPwmControllerProvider<D>::EnablePin(int32_t pin) const
{
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->abi_EnablePin(pin));
}

template <typename D> void impl_IPwmControllerProvider<D>::DisablePin(int32_t pin) const
{
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->abi_DisablePin(pin));
}

template <typename D> void impl_IPwmControllerProvider<D>::SetPulseParameters(int32_t pin, double dutyCycle, bool invertPolarity) const
{
    check_hresult(static_cast<const IPwmControllerProvider &>(static_cast<const D &>(*this))->abi_SetPulseParameters(pin, dutyCycle, invertPolarity));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider> impl_IPwmProvider<D>::GetControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider> result;
    check_hresult(static_cast<const IPwmProvider &>(static_cast<const D &>(*this))->abi_GetControllers(put(result)));
    return result;
}

}

}
