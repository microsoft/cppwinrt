// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Phone.Devices.Notification.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::Devices::Notification::IVibrationDevice> : produce_base<D, Windows::Phone::Devices::Notification::IVibrationDevice>
{
    HRESULT __stdcall abi_Vibrate(abi_arg_in<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            this->shim().Vibrate(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Cancel() noexcept override
    {
        try
        {
            this->shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Devices::Notification::IVibrationDeviceStatics> : produce_base<D, Windows::Phone::Devices::Notification::IVibrationDeviceStatics>
{
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Phone::Devices::Notification::IVibrationDevice> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDefault());
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

namespace Windows::Phone::Devices::Notification {

template <typename D> Windows::Phone::Devices::Notification::VibrationDevice impl_IVibrationDeviceStatics<D>::GetDefault() const
{
    Windows::Phone::Devices::Notification::VibrationDevice result { nullptr };
    check_hresult(static_cast<const IVibrationDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(result)));
    return result;
}

template <typename D> void impl_IVibrationDevice<D>::Vibrate(const Windows::Foundation::TimeSpan & duration) const
{
    check_hresult(static_cast<const IVibrationDevice &>(static_cast<const D &>(*this))->abi_Vibrate(get(duration)));
}

template <typename D> void impl_IVibrationDevice<D>::Cancel() const
{
    check_hresult(static_cast<const IVibrationDevice &>(static_cast<const D &>(*this))->abi_Cancel());
}

inline Windows::Phone::Devices::Notification::VibrationDevice VibrationDevice::GetDefault()
{
    return get_activation_factory<VibrationDevice, IVibrationDeviceStatics>().GetDefault();
}

}

}
