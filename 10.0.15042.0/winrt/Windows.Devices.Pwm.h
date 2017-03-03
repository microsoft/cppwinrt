// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Devices.Pwm.Provider.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Pwm.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmController> : produce_base<D, Windows::Devices::Pwm::IPwmController>
{
    HRESULT __stdcall get_PinCount(int32_t * value) noexcept override
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

    HRESULT __stdcall get_ActualFrequency(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActualFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDesiredFrequency(double desiredFrequency, double * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SetDesiredFrequency(desiredFrequency));
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinFrequency());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenPin(int32_t pinNumber, impl::abi_arg_out<Windows::Devices::Pwm::IPwmPin> pin) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pin = detach_abi(this->shim().OpenPin(pinNumber));
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
struct produce<D, Windows::Devices::Pwm::IPwmControllerStatics> : produce_base<D, Windows::Devices::Pwm::IPwmControllerStatics>
{
    HRESULT __stdcall abi_GetControllersAsync(impl::abi_arg_in<Windows::Devices::Pwm::Provider::IPwmProvider> provider, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetControllersAsync(*reinterpret_cast<const Windows::Devices::Pwm::Provider::IPwmProvider *>(&provider)));
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
struct produce<D, Windows::Devices::Pwm::IPwmControllerStatics2> : produce_base<D, Windows::Devices::Pwm::IPwmControllerStatics2>
{
    HRESULT __stdcall abi_GetDefaultAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController>> operation) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmControllerStatics3> : produce_base<D, Windows::Devices::Pwm::IPwmControllerStatics3>
{
    HRESULT __stdcall abi_GetDeviceSelector(impl::abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromFriendlyName(impl::abi_arg_in<hstring> friendlyName, impl::abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<const hstring *>(&friendlyName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(impl::abi_arg_in<hstring> deviceId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
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
struct produce<D, Windows::Devices::Pwm::IPwmPin> : produce_base<D, Windows::Devices::Pwm::IPwmPin>
{
    HRESULT __stdcall get_Controller(impl::abi_arg_out<Windows::Devices::Pwm::IPwmController> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetActiveDutyCyclePercentage(double * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetActiveDutyCyclePercentage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetActiveDutyCyclePercentage(double dutyCyclePercentage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetActiveDutyCyclePercentage(dutyCyclePercentage);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Polarity(Windows::Devices::Pwm::PwmPulsePolarity * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Polarity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Polarity(Windows::Devices::Pwm::PwmPulsePolarity value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Polarity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStarted(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStarted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Pwm {

template <typename D> int32_t impl_IPwmController<D>::PinCount() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IPwmController)->get_PinCount(&value));
    return value;
}

template <typename D> double impl_IPwmController<D>::ActualFrequency() const
{
    double value {};
    check_hresult(WINRT_SHIM(IPwmController)->get_ActualFrequency(&value));
    return value;
}

template <typename D> double impl_IPwmController<D>::SetDesiredFrequency(double desiredFrequency) const
{
    double result {};
    check_hresult(WINRT_SHIM(IPwmController)->abi_SetDesiredFrequency(desiredFrequency, &result));
    return result;
}

template <typename D> double impl_IPwmController<D>::MinFrequency() const
{
    double value {};
    check_hresult(WINRT_SHIM(IPwmController)->get_MinFrequency(&value));
    return value;
}

template <typename D> double impl_IPwmController<D>::MaxFrequency() const
{
    double value {};
    check_hresult(WINRT_SHIM(IPwmController)->get_MaxFrequency(&value));
    return value;
}

template <typename D> Windows::Devices::Pwm::PwmPin impl_IPwmController<D>::OpenPin(int32_t pinNumber) const
{
    Windows::Devices::Pwm::PwmPin pin { nullptr };
    check_hresult(WINRT_SHIM(IPwmController)->abi_OpenPin(pinNumber, put_abi(pin)));
    return pin;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> impl_IPwmControllerStatics<D>::GetControllersAsync(const Windows::Devices::Pwm::Provider::IPwmProvider & provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> operation;
    check_hresult(WINRT_SHIM(IPwmControllerStatics)->abi_GetControllersAsync(get_abi(provider), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> impl_IPwmControllerStatics2<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> operation;
    check_hresult(WINRT_SHIM(IPwmControllerStatics2)->abi_GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring impl_IPwmControllerStatics3<D>::GetDeviceSelector() const
{
    hstring result;
    check_hresult(WINRT_SHIM(IPwmControllerStatics3)->abi_GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> hstring impl_IPwmControllerStatics3<D>::GetDeviceSelector(hstring_view friendlyName) const
{
    hstring result;
    check_hresult(WINRT_SHIM(IPwmControllerStatics3)->abi_GetDeviceSelectorFromFriendlyName(get_abi(friendlyName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> impl_IPwmControllerStatics3<D>::FromIdAsync(hstring_view deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> operation;
    check_hresult(WINRT_SHIM(IPwmControllerStatics3)->abi_FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Pwm::PwmController impl_IPwmPin<D>::Controller() const
{
    Windows::Devices::Pwm::PwmController value { nullptr };
    check_hresult(WINRT_SHIM(IPwmPin)->get_Controller(put_abi(value)));
    return value;
}

template <typename D> double impl_IPwmPin<D>::GetActiveDutyCyclePercentage() const
{
    double result {};
    check_hresult(WINRT_SHIM(IPwmPin)->abi_GetActiveDutyCyclePercentage(&result));
    return result;
}

template <typename D> void impl_IPwmPin<D>::SetActiveDutyCyclePercentage(double dutyCyclePercentage) const
{
    check_hresult(WINRT_SHIM(IPwmPin)->abi_SetActiveDutyCyclePercentage(dutyCyclePercentage));
}

template <typename D> Windows::Devices::Pwm::PwmPulsePolarity impl_IPwmPin<D>::Polarity() const
{
    Windows::Devices::Pwm::PwmPulsePolarity value {};
    check_hresult(WINRT_SHIM(IPwmPin)->get_Polarity(&value));
    return value;
}

template <typename D> void impl_IPwmPin<D>::Polarity(Windows::Devices::Pwm::PwmPulsePolarity value) const
{
    check_hresult(WINRT_SHIM(IPwmPin)->put_Polarity(value));
}

template <typename D> void impl_IPwmPin<D>::Start() const
{
    check_hresult(WINRT_SHIM(IPwmPin)->abi_Start());
}

template <typename D> void impl_IPwmPin<D>::Stop() const
{
    check_hresult(WINRT_SHIM(IPwmPin)->abi_Stop());
}

template <typename D> bool impl_IPwmPin<D>::IsStarted() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPwmPin)->get_IsStarted(&value));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> PwmController::GetControllersAsync(const Windows::Devices::Pwm::Provider::IPwmProvider & provider)
{
    return get_activation_factory<PwmController, IPwmControllerStatics>().GetControllersAsync(provider);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> PwmController::GetDefaultAsync()
{
    return get_activation_factory<PwmController, IPwmControllerStatics2>().GetDefaultAsync();
}

inline hstring PwmController::GetDeviceSelector()
{
    return get_activation_factory<PwmController, IPwmControllerStatics3>().GetDeviceSelector();
}

inline hstring PwmController::GetDeviceSelector(hstring_view friendlyName)
{
    return get_activation_factory<PwmController, IPwmControllerStatics3>().GetDeviceSelector(friendlyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> PwmController::FromIdAsync(hstring_view deviceId)
{
    return get_activation_factory<PwmController, IPwmControllerStatics3>().FromIdAsync(deviceId);
}

}

}

template<>
struct std::hash<winrt::Windows::Devices::Pwm::IPwmController>
{
    size_t operator()(const winrt::Windows::Devices::Pwm::IPwmController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Pwm::IPwmControllerStatics>
{
    size_t operator()(const winrt::Windows::Devices::Pwm::IPwmControllerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Pwm::IPwmControllerStatics2>
{
    size_t operator()(const winrt::Windows::Devices::Pwm::IPwmControllerStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Pwm::IPwmControllerStatics3>
{
    size_t operator()(const winrt::Windows::Devices::Pwm::IPwmControllerStatics3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Pwm::IPwmPin>
{
    size_t operator()(const winrt::Windows::Devices::Pwm::IPwmPin & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Pwm::PwmController>
{
    size_t operator()(const winrt::Windows::Devices::Pwm::PwmController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Pwm::PwmPin>
{
    size_t operator()(const winrt::Windows::Devices::Pwm::PwmPin & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
