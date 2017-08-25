// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Printers.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Printers::PrintSchema consume_Windows_Devices_Printers_IPrint3DDevice<D>::PrintSchema() const
{
    Windows::Devices::Printers::PrintSchema value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrint3DDevice)->get_PrintSchema(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrint3DDeviceStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrint3DDeviceStatics)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_Devices_Printers_IPrintSchema<D>::GetDefaultPrintTicketAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrintSchema)->GetDefaultPrintTicketAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_Devices_Printers_IPrintSchema<D>::GetCapabilitiesAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& constrainTicket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrintSchema)->GetCapabilitiesAsync(get_abi(constrainTicket), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_Devices_Printers_IPrintSchema<D>::MergeAndValidateWithDefaultPrintTicketAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& deltaTicket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::IPrintSchema)->MergeAndValidateWithDefaultPrintTicketAsync(get_abi(deltaTicket), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Devices::Printers::IPrint3DDevice> : produce_base<D, Windows::Devices::Printers::IPrint3DDevice>
{
    HRESULT __stdcall get_PrintSchema(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintSchema());
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
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::Printers::IPrintSchema> : produce_base<D, Windows::Devices::Printers::IPrintSchema>
{
    HRESULT __stdcall GetDefaultPrintTicketAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDefaultPrintTicketAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCapabilitiesAsync(::IUnknown* constrainTicket, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCapabilitiesAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&constrainTicket)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MergeAndValidateWithDefaultPrintTicketAsync(::IUnknown* deltaTicket, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().MergeAndValidateWithDefaultPrintTicketAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&deltaTicket)));
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

WINRT_EXPORT namespace winrt::Windows::Devices::Printers {

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> Print3DDevice::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Print3DDevice, Windows::Devices::Printers::IPrint3DDeviceStatics>().FromIdAsync(deviceId);
}

inline hstring Print3DDevice::GetDeviceSelector()
{
    return get_activation_factory<Print3DDevice, Windows::Devices::Printers::IPrint3DDeviceStatics>().GetDeviceSelector();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Printers::IPrint3DDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::IPrint3DDevice> {};

template<> struct hash<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Printers::IPrintSchema> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::IPrintSchema> {};

template<> struct hash<winrt::Windows::Devices::Printers::Print3DDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::Print3DDevice> {};

template<> struct hash<winrt::Windows::Devices::Printers::PrintSchema> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::PrintSchema> {};

}

WINRT_WARNING_POP
