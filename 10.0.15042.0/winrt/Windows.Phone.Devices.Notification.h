// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Phone.Devices.Notification.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::Devices::Notification::IVibrationDevice> : produce_base<D, Windows::Phone::Devices::Notification::IVibrationDevice>
{
    HRESULT __stdcall abi_Vibrate(impl::abi_arg_in<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::Phone::Devices::Notification::IVibrationDevice> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
    check_hresult(WINRT_SHIM(IVibrationDeviceStatics)->abi_GetDefault(put_abi(result)));
    return result;
}

template <typename D> void impl_IVibrationDevice<D>::Vibrate(const Windows::Foundation::TimeSpan & duration) const
{
    check_hresult(WINRT_SHIM(IVibrationDevice)->abi_Vibrate(get_abi(duration)));
}

template <typename D> void impl_IVibrationDevice<D>::Cancel() const
{
    check_hresult(WINRT_SHIM(IVibrationDevice)->abi_Cancel());
}

inline Windows::Phone::Devices::Notification::VibrationDevice VibrationDevice::GetDefault()
{
    return get_activation_factory<VibrationDevice, IVibrationDeviceStatics>().GetDefault();
}

}

}

template<>
struct std::hash<winrt::Windows::Phone::Devices::Notification::IVibrationDevice>
{
    size_t operator()(const winrt::Windows::Phone::Devices::Notification::IVibrationDevice & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Phone::Devices::Notification::IVibrationDeviceStatics>
{
    size_t operator()(const winrt::Windows::Phone::Devices::Notification::IVibrationDeviceStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Phone::Devices::Notification::VibrationDevice>
{
    size_t operator()(const winrt::Windows::Phone::Devices::Notification::VibrationDevice & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
