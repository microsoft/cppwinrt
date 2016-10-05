// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Devices.Custom.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Custom::ICustomDevice> : produce_base<D, Windows::Devices::Custom::ICustomDevice>
{
    HRESULT __stdcall get_InputStream(abi_arg_out<Windows::Storage::Streams::IInputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(abi_arg_out<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendIOControlAsync(abi_arg_in<Windows::Devices::Custom::IIOControlCode> ioControlCode, abi_arg_in<Windows::Storage::Streams::IBuffer> inputBuffer, abi_arg_in<Windows::Storage::Streams::IBuffer> outputBuffer, abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendIOControlAsync(*reinterpret_cast<const Windows::Devices::Custom::IIOControlCode *>(&ioControlCode), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&inputBuffer), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&outputBuffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySendIOControlAsync(abi_arg_in<Windows::Devices::Custom::IIOControlCode> ioControlCode, abi_arg_in<Windows::Storage::Streams::IBuffer> inputBuffer, abi_arg_in<Windows::Storage::Streams::IBuffer> outputBuffer, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().TrySendIOControlAsync(*reinterpret_cast<const Windows::Devices::Custom::IIOControlCode *>(&ioControlCode), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&inputBuffer), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&outputBuffer)));
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
    HRESULT __stdcall abi_GetDeviceSelector(GUID classGuid, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector(classGuid));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, Windows::Devices::Custom::DeviceAccessMode desiredAccess, Windows::Devices::Custom::DeviceSharingMode sharingMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId), desiredAccess, sharingMode));
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
    HRESULT __stdcall get_AccessMode(Windows::Devices::Custom::IOControlAccessMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferingMethod(Windows::Devices::Custom::IOControlBufferingMethod * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BufferingMethod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Function(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Function());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceType(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlCode());
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
    HRESULT __stdcall abi_CreateIOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode accessMode, Windows::Devices::Custom::IOControlBufferingMethod bufferingMethod, abi_arg_out<Windows::Devices::Custom::IIOControlCode> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateIOControlCode(deviceType, function, accessMode, bufferingMethod));
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
    HRESULT __stdcall get_Unknown(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Unknown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Custom {

template <typename D> uint16_t impl_IKnownDeviceTypesStatics<D>::Unknown() const
{
    uint16_t value {};
    check_hresult(static_cast<const IKnownDeviceTypesStatics &>(static_cast<const D &>(*this))->get_Unknown(&value));
    return value;
}

template <typename D> Windows::Devices::Custom::IOControlAccessMode impl_IIOControlCode<D>::AccessMode() const
{
    Windows::Devices::Custom::IOControlAccessMode value {};
    check_hresult(static_cast<const IIOControlCode &>(static_cast<const D &>(*this))->get_AccessMode(&value));
    return value;
}

template <typename D> Windows::Devices::Custom::IOControlBufferingMethod impl_IIOControlCode<D>::BufferingMethod() const
{
    Windows::Devices::Custom::IOControlBufferingMethod value {};
    check_hresult(static_cast<const IIOControlCode &>(static_cast<const D &>(*this))->get_BufferingMethod(&value));
    return value;
}

template <typename D> uint16_t impl_IIOControlCode<D>::Function() const
{
    uint16_t value {};
    check_hresult(static_cast<const IIOControlCode &>(static_cast<const D &>(*this))->get_Function(&value));
    return value;
}

template <typename D> uint16_t impl_IIOControlCode<D>::DeviceType() const
{
    uint16_t value {};
    check_hresult(static_cast<const IIOControlCode &>(static_cast<const D &>(*this))->get_DeviceType(&value));
    return value;
}

template <typename D> uint32_t impl_IIOControlCode<D>::ControlCode() const
{
    uint32_t value {};
    check_hresult(static_cast<const IIOControlCode &>(static_cast<const D &>(*this))->get_ControlCode(&value));
    return value;
}

template <typename D> Windows::Devices::Custom::IOControlCode impl_IIOControlCodeFactory<D>::CreateIOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode accessMode, Windows::Devices::Custom::IOControlBufferingMethod bufferingMethod) const
{
    Windows::Devices::Custom::IOControlCode instance { nullptr };
    check_hresult(static_cast<const IIOControlCodeFactory &>(static_cast<const D &>(*this))->abi_CreateIOControlCode(deviceType, function, accessMode, bufferingMethod, put(instance)));
    return instance;
}

template <typename D> hstring impl_ICustomDeviceStatics<D>::GetDeviceSelector(GUID classGuid) const
{
    hstring value;
    check_hresult(static_cast<const ICustomDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(classGuid, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> impl_ICustomDeviceStatics<D>::FromIdAsync(hstring_ref deviceId, Windows::Devices::Custom::DeviceAccessMode desiredAccess, Windows::Devices::Custom::DeviceSharingMode sharingMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> operation;
    check_hresult(static_cast<const ICustomDeviceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), desiredAccess, sharingMode, put(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IInputStream impl_ICustomDevice<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value;
    check_hresult(static_cast<const ICustomDevice &>(static_cast<const D &>(*this))->get_InputStream(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_ICustomDevice<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const ICustomDevice &>(static_cast<const D &>(*this))->get_OutputStream(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_ICustomDevice<D>::SendIOControlAsync(const Windows::Devices::Custom::IIOControlCode & ioControlCode, const Windows::Storage::Streams::IBuffer & inputBuffer, const Windows::Storage::Streams::IBuffer & outputBuffer) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(static_cast<const ICustomDevice &>(static_cast<const D &>(*this))->abi_SendIOControlAsync(get(ioControlCode), get(inputBuffer), get(outputBuffer), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ICustomDevice<D>::TrySendIOControlAsync(const Windows::Devices::Custom::IIOControlCode & ioControlCode, const Windows::Storage::Streams::IBuffer & inputBuffer, const Windows::Storage::Streams::IBuffer & outputBuffer) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ICustomDevice &>(static_cast<const D &>(*this))->abi_TrySendIOControlAsync(get(ioControlCode), get(inputBuffer), get(outputBuffer), put(operation)));
    return operation;
}

inline hstring CustomDevice::GetDeviceSelector(GUID classGuid)
{
    return get_activation_factory<CustomDevice, ICustomDeviceStatics>().GetDeviceSelector(classGuid);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> CustomDevice::FromIdAsync(hstring_ref deviceId, Windows::Devices::Custom::DeviceAccessMode desiredAccess, Windows::Devices::Custom::DeviceSharingMode sharingMode)
{
    return get_activation_factory<CustomDevice, ICustomDeviceStatics>().FromIdAsync(deviceId, desiredAccess, sharingMode);
}

inline IOControlCode::IOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode accessMode, Windows::Devices::Custom::IOControlBufferingMethod bufferingMethod) :
    IOControlCode(get_activation_factory<IOControlCode, IIOControlCodeFactory>().CreateIOControlCode(deviceType, function, accessMode, bufferingMethod))
{}

inline uint16_t KnownDeviceTypes::Unknown()
{
    return get_activation_factory<KnownDeviceTypes, IKnownDeviceTypesStatics>().Unknown();
}

}

}
