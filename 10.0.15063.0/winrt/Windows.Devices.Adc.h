// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Adc.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Adc.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Adc::AdcController consume_Windows_Devices_Adc_IAdcChannel<D>::Controller() const
{
    Windows::Devices::Adc::AdcController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcChannel)->get_Controller(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Adc_IAdcChannel<D>::ReadValue() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcChannel)->ReadValue(&result));
    return result;
}

template <typename D> double consume_Windows_Devices_Adc_IAdcChannel<D>::ReadRatio() const
{
    double result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcChannel)->ReadRatio(&result));
    return result;
}

template <typename D> int32_t consume_Windows_Devices_Adc_IAdcController<D>::ChannelCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcController)->get_ChannelCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Adc_IAdcController<D>::ResolutionInBits() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcController)->get_ResolutionInBits(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Adc_IAdcController<D>::MinValue() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcController)->get_MinValue(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Adc_IAdcController<D>::MaxValue() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcController)->get_MaxValue(&value));
    return value;
}

template <typename D> Windows::Devices::Adc::AdcChannelMode consume_Windows_Devices_Adc_IAdcController<D>::ChannelMode() const
{
    Windows::Devices::Adc::AdcChannelMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcController)->get_ChannelMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Adc_IAdcController<D>::ChannelMode(Windows::Devices::Adc::AdcChannelMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcController)->put_ChannelMode(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_Adc_IAdcController<D>::IsChannelModeSupported(Windows::Devices::Adc::AdcChannelMode const& channelMode) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcController)->IsChannelModeSupported(get_abi(channelMode), &result));
    return result;
}

template <typename D> Windows::Devices::Adc::AdcChannel consume_Windows_Devices_Adc_IAdcController<D>::OpenChannel(int32_t channelNumber) const
{
    Windows::Devices::Adc::AdcChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcController)->OpenChannel(channelNumber, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> consume_Windows_Devices_Adc_IAdcControllerStatics<D>::GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider const& provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcControllerStatics)->GetControllersAsync(get_abi(provider), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController> consume_Windows_Devices_Adc_IAdcControllerStatics2<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::IAdcControllerStatics2)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Devices::Adc::IAdcChannel> : produce_base<D, Windows::Devices::Adc::IAdcChannel>
{
    HRESULT __stdcall get_Controller(::IUnknown** value) noexcept override
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

    HRESULT __stdcall ReadValue(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadRatio(double* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Adc::IAdcController> : produce_base<D, Windows::Devices::Adc::IAdcController>
{
    HRESULT __stdcall get_ChannelCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChannelCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionInBits(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolutionInBits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinValue(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxValue(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChannelMode(abi_t<Windows::Devices::Adc::AdcChannelMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChannelMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ChannelMode(abi_t<Windows::Devices::Adc::AdcChannelMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChannelMode(*reinterpret_cast<Windows::Devices::Adc::AdcChannelMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsChannelModeSupported(abi_t<Windows::Devices::Adc::AdcChannelMode> channelMode, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsChannelModeSupported(*reinterpret_cast<Windows::Devices::Adc::AdcChannelMode const*>(&channelMode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenChannel(int32_t channelNumber, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().OpenChannel(channelNumber));
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
struct produce<D, Windows::Devices::Adc::IAdcControllerStatics> : produce_base<D, Windows::Devices::Adc::IAdcControllerStatics>
{
    HRESULT __stdcall GetControllersAsync(::IUnknown* provider, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetControllersAsync(*reinterpret_cast<Windows::Devices::Adc::Provider::IAdcProvider const*>(&provider)));
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
struct produce<D, Windows::Devices::Adc::IAdcControllerStatics2> : produce_base<D, Windows::Devices::Adc::IAdcControllerStatics2>
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
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Adc {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> AdcController::GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider const& provider)
{
    return get_activation_factory<AdcController, Windows::Devices::Adc::IAdcControllerStatics>().GetControllersAsync(provider);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController> AdcController::GetDefaultAsync()
{
    return get_activation_factory<AdcController, Windows::Devices::Adc::IAdcControllerStatics2>().GetDefaultAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Adc::IAdcChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Adc::IAdcChannel> {};

template<> struct hash<winrt::Windows::Devices::Adc::IAdcController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Adc::IAdcController> {};

template<> struct hash<winrt::Windows::Devices::Adc::IAdcControllerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Adc::IAdcControllerStatics> {};

template<> struct hash<winrt::Windows::Devices::Adc::IAdcControllerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Adc::IAdcControllerStatics2> {};

template<> struct hash<winrt::Windows::Devices::Adc::AdcChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Adc::AdcChannel> {};

template<> struct hash<winrt::Windows::Devices::Adc::AdcController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Adc::AdcController> {};

}

WINRT_WARNING_POP
