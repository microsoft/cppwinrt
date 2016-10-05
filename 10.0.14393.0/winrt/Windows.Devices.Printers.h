// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Devices.Printers.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Printers::IPrint3DDevice> : produce_base<D, Windows::Devices::Printers::IPrint3DDevice>
{
    HRESULT __stdcall get_PrintSchema(abi_arg_out<Windows::Devices::Printers::IPrintSchema> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrintSchema());
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
struct produce<D, Windows::Devices::Printers::IPrint3DDeviceStatics> : produce_base<D, Windows::Devices::Printers::IPrint3DDeviceStatics>
{
    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeviceSelector());
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
struct produce<D, Windows::Devices::Printers::IPrintSchema> : produce_base<D, Windows::Devices::Printers::IPrintSchema>
{
    HRESULT __stdcall abi_GetDefaultPrintTicketAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDefaultPrintTicketAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCapabilitiesAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamWithContentType> constrainTicket, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetCapabilitiesAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamWithContentType *>(&constrainTicket)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MergeAndValidateWithDefaultPrintTicketAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamWithContentType> deltaTicket, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().MergeAndValidateWithDefaultPrintTicketAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamWithContentType *>(&deltaTicket)));
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

namespace Windows::Devices::Printers {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> impl_IPrint3DDeviceStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> operation;
    check_hresult(static_cast<const IPrint3DDeviceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(operation)));
    return operation;
}

template <typename D> hstring impl_IPrint3DDeviceStatics<D>::GetDeviceSelector() const
{
    hstring result;
    check_hresult(static_cast<const IPrint3DDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(result)));
    return result;
}

template <typename D> Windows::Devices::Printers::PrintSchema impl_IPrint3DDevice<D>::PrintSchema() const
{
    Windows::Devices::Printers::PrintSchema value { nullptr };
    check_hresult(static_cast<const IPrint3DDevice &>(static_cast<const D &>(*this))->get_PrintSchema(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> impl_IPrintSchema<D>::GetDefaultPrintTicketAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation;
    check_hresult(static_cast<const IPrintSchema &>(static_cast<const D &>(*this))->abi_GetDefaultPrintTicketAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> impl_IPrintSchema<D>::GetCapabilitiesAsync(const Windows::Storage::Streams::IRandomAccessStreamWithContentType & constrainTicket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation;
    check_hresult(static_cast<const IPrintSchema &>(static_cast<const D &>(*this))->abi_GetCapabilitiesAsync(get(constrainTicket), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> impl_IPrintSchema<D>::MergeAndValidateWithDefaultPrintTicketAsync(const Windows::Storage::Streams::IRandomAccessStreamWithContentType & deltaTicket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation;
    check_hresult(static_cast<const IPrintSchema &>(static_cast<const D &>(*this))->abi_MergeAndValidateWithDefaultPrintTicketAsync(get(deltaTicket), put(operation)));
    return operation;
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> Print3DDevice::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<Print3DDevice, IPrint3DDeviceStatics>().FromIdAsync(deviceId);
}

inline hstring Print3DDevice::GetDeviceSelector()
{
    return get_activation_factory<Print3DDevice, IPrint3DDeviceStatics>().GetDeviceSelector();
}

}

}
