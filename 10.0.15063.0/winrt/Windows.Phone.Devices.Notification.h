// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Phone.Devices.Notification.2.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Phone_Devices_Notification_IVibrationDevice<D>::Vibrate(Windows::Foundation::TimeSpan const& duration) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Devices::Notification::IVibrationDevice)->Vibrate(get_abi(duration)));
}

template <typename D> void consume_Windows_Phone_Devices_Notification_IVibrationDevice<D>::Cancel() const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Devices::Notification::IVibrationDevice)->Cancel());
}

template <typename D> Windows::Phone::Devices::Notification::VibrationDevice consume_Windows_Phone_Devices_Notification_IVibrationDeviceStatics<D>::GetDefault() const
{
    Windows::Phone::Devices::Notification::VibrationDevice result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Devices::Notification::IVibrationDeviceStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Phone::Devices::Notification::IVibrationDevice> : produce_base<D, Windows::Phone::Devices::Notification::IVibrationDevice>
{
    HRESULT __stdcall Vibrate(abi_t<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Vibrate(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Cancel() noexcept override
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
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept override
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

WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Notification {

inline Windows::Phone::Devices::Notification::VibrationDevice VibrationDevice::GetDefault()
{
    return get_activation_factory<VibrationDevice, Windows::Phone::Devices::Notification::IVibrationDeviceStatics>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::Devices::Notification::IVibrationDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Devices::Notification::IVibrationDevice> {};

template<> struct hash<winrt::Windows::Phone::Devices::Notification::IVibrationDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Devices::Notification::IVibrationDeviceStatics> {};

template<> struct hash<winrt::Windows::Phone::Devices::Notification::VibrationDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Devices::Notification::VibrationDevice> {};

}

WINRT_WARNING_POP
