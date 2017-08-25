// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Custom.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Devices_Custom_ICustomDevice<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::ICustomDevice)->get_InputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Devices_Custom_ICustomDevice<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::ICustomDevice)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Devices_Custom_ICustomDevice<D>::SendIOControlAsync(Windows::Devices::Custom::IIOControlCode const& ioControlCode, Windows::Storage::Streams::IBuffer const& inputBuffer, Windows::Storage::Streams::IBuffer const& outputBuffer) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::ICustomDevice)->SendIOControlAsync(get_abi(ioControlCode), get_abi(inputBuffer), get_abi(outputBuffer), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_Custom_ICustomDevice<D>::TrySendIOControlAsync(Windows::Devices::Custom::IIOControlCode const& ioControlCode, Windows::Storage::Streams::IBuffer const& inputBuffer, Windows::Storage::Streams::IBuffer const& outputBuffer) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::ICustomDevice)->TrySendIOControlAsync(get_abi(ioControlCode), get_abi(inputBuffer), get_abi(outputBuffer), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Custom_ICustomDeviceStatics<D>::GetDeviceSelector(GUID const& classGuid) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::ICustomDeviceStatics)->GetDeviceSelector(get_abi(classGuid), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> consume_Windows_Devices_Custom_ICustomDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId, Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, Windows::Devices::Custom::DeviceSharingMode const& sharingMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::ICustomDeviceStatics)->FromIdAsync(get_abi(deviceId), get_abi(desiredAccess), get_abi(sharingMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Custom::IOControlAccessMode consume_Windows_Devices_Custom_IIOControlCode<D>::AccessMode() const
{
    Windows::Devices::Custom::IOControlAccessMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::IIOControlCode)->get_AccessMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Custom::IOControlBufferingMethod consume_Windows_Devices_Custom_IIOControlCode<D>::BufferingMethod() const
{
    Windows::Devices::Custom::IOControlBufferingMethod value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::IIOControlCode)->get_BufferingMethod(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Custom_IIOControlCode<D>::Function() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::IIOControlCode)->get_Function(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Custom_IIOControlCode<D>::DeviceType() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::IIOControlCode)->get_DeviceType(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Custom_IIOControlCode<D>::ControlCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::IIOControlCode)->get_ControlCode(&value));
    return value;
}

template <typename D> Windows::Devices::Custom::IOControlCode consume_Windows_Devices_Custom_IIOControlCodeFactory<D>::CreateIOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode const& accessMode, Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod) const
{
    Windows::Devices::Custom::IOControlCode instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::IIOControlCodeFactory)->CreateIOControlCode(deviceType, function, get_abi(accessMode), get_abi(bufferingMethod), put_abi(instance)));
    return instance;
}

template <typename D> uint16_t consume_Windows_Devices_Custom_IKnownDeviceTypesStatics<D>::Unknown() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Custom::IKnownDeviceTypesStatics)->get_Unknown(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Custom::ICustomDevice> : produce_base<D, Windows::Devices::Custom::ICustomDevice>
{
    HRESULT __stdcall get_InputStream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendIOControlAsync(::IUnknown* ioControlCode, ::IUnknown* inputBuffer, ::IUnknown* outputBuffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendIOControlAsync(*reinterpret_cast<Windows::Devices::Custom::IIOControlCode const*>(&ioControlCode), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBuffer), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&outputBuffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySendIOControlAsync(::IUnknown* ioControlCode, ::IUnknown* inputBuffer, ::IUnknown* outputBuffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TrySendIOControlAsync(*reinterpret_cast<Windows::Devices::Custom::IIOControlCode const*>(&ioControlCode), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBuffer), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&outputBuffer)));
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
struct produce<D, Windows::Devices::Custom::ICustomDeviceStatics> : produce_base<D, Windows::Devices::Custom::ICustomDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(abi_t<GUID> classGuid, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<GUID const*>(&classGuid)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, abi_t<Windows::Devices::Custom::DeviceAccessMode> desiredAccess, abi_t<Windows::Devices::Custom::DeviceSharingMode> sharingMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Devices::Custom::DeviceAccessMode const*>(&desiredAccess), *reinterpret_cast<Windows::Devices::Custom::DeviceSharingMode const*>(&sharingMode)));
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
struct produce<D, Windows::Devices::Custom::IIOControlCode> : produce_base<D, Windows::Devices::Custom::IIOControlCode>
{
    HRESULT __stdcall get_AccessMode(abi_t<Windows::Devices::Custom::IOControlAccessMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferingMethod(abi_t<Windows::Devices::Custom::IOControlBufferingMethod>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BufferingMethod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Function(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Function());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceType(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Custom::IIOControlCodeFactory> : produce_base<D, Windows::Devices::Custom::IIOControlCodeFactory>
{
    HRESULT __stdcall CreateIOControlCode(uint16_t deviceType, uint16_t function, abi_t<Windows::Devices::Custom::IOControlAccessMode> accessMode, abi_t<Windows::Devices::Custom::IOControlBufferingMethod> bufferingMethod, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateIOControlCode(deviceType, function, *reinterpret_cast<Windows::Devices::Custom::IOControlAccessMode const*>(&accessMode), *reinterpret_cast<Windows::Devices::Custom::IOControlBufferingMethod const*>(&bufferingMethod)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Custom::IKnownDeviceTypesStatics> : produce_base<D, Windows::Devices::Custom::IKnownDeviceTypesStatics>
{
    HRESULT __stdcall get_Unknown(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unknown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Custom {

inline hstring CustomDevice::GetDeviceSelector(GUID const& classGuid)
{
    return get_activation_factory<CustomDevice, Windows::Devices::Custom::ICustomDeviceStatics>().GetDeviceSelector(classGuid);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> CustomDevice::FromIdAsync(param::hstring const& deviceId, Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, Windows::Devices::Custom::DeviceSharingMode const& sharingMode)
{
    return get_activation_factory<CustomDevice, Windows::Devices::Custom::ICustomDeviceStatics>().FromIdAsync(deviceId, desiredAccess, sharingMode);
}

inline IOControlCode::IOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode const& accessMode, Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod) :
    IOControlCode(get_activation_factory<IOControlCode, Windows::Devices::Custom::IIOControlCodeFactory>().CreateIOControlCode(deviceType, function, accessMode, bufferingMethod))
{}

inline uint16_t KnownDeviceTypes::Unknown()
{
    return get_activation_factory<KnownDeviceTypes, Windows::Devices::Custom::IKnownDeviceTypesStatics>().Unknown();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Custom::ICustomDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Custom::ICustomDevice> {};

template<> struct hash<winrt::Windows::Devices::Custom::ICustomDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Custom::ICustomDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Custom::IIOControlCode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Custom::IIOControlCode> {};

template<> struct hash<winrt::Windows::Devices::Custom::IIOControlCodeFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Custom::IIOControlCodeFactory> {};

template<> struct hash<winrt::Windows::Devices::Custom::IKnownDeviceTypesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Custom::IKnownDeviceTypesStatics> {};

template<> struct hash<winrt::Windows::Devices::Custom::CustomDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Custom::CustomDevice> {};

template<> struct hash<winrt::Windows::Devices::Custom::IOControlCode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Custom::IOControlCode> {};

template<> struct hash<winrt::Windows::Devices::Custom::KnownDeviceTypes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Custom::KnownDeviceTypes> {};

}

WINRT_WARNING_POP
