// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Security.Cryptography.DataProtection.3.h"
#include "Windows.Security.Cryptography.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Cryptography::DataProtection::IDataProtectionProvider> : produce_base<D, Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>
{
    HRESULT __stdcall abi_ProtectAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprotectAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnprotectAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProtectStreamAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> src, abi_arg_in<Windows::Storage::Streams::IOutputStream> dest, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&src), *reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&dest)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprotectStreamAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> src, abi_arg_in<Windows::Storage::Streams::IOutputStream> dest, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnprotectStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&src), *reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&dest)));
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
struct produce<D, Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory> : produce_base<D, Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>
{
    HRESULT __stdcall abi_CreateOverloadExplicit(abi_arg_in<hstring> protectionDescriptor, abi_arg_out<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateOverloadExplicit(*reinterpret_cast<const hstring *>(&protectionDescriptor)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Security::Cryptography::DataProtection {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_IDataProtectionProvider<D>::ProtectAsync(const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value;
    check_hresult(static_cast<const IDataProtectionProvider &>(static_cast<const D &>(*this))->abi_ProtectAsync(get(data), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_IDataProtectionProvider<D>::UnprotectAsync(const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value;
    check_hresult(static_cast<const IDataProtectionProvider &>(static_cast<const D &>(*this))->abi_UnprotectAsync(get(data), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDataProtectionProvider<D>::ProtectStreamAsync(const Windows::Storage::Streams::IInputStream & src, const Windows::Storage::Streams::IOutputStream & dest) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IDataProtectionProvider &>(static_cast<const D &>(*this))->abi_ProtectStreamAsync(get(src), get(dest), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDataProtectionProvider<D>::UnprotectStreamAsync(const Windows::Storage::Streams::IInputStream & src, const Windows::Storage::Streams::IOutputStream & dest) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IDataProtectionProvider &>(static_cast<const D &>(*this))->abi_UnprotectStreamAsync(get(src), get(dest), put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::DataProtection::DataProtectionProvider impl_IDataProtectionProviderFactory<D>::CreateOverloadExplicit(hstring_ref protectionDescriptor) const
{
    Windows::Security::Cryptography::DataProtection::DataProtectionProvider value { nullptr };
    check_hresult(static_cast<const IDataProtectionProviderFactory &>(static_cast<const D &>(*this))->abi_CreateOverloadExplicit(get(protectionDescriptor), put(value)));
    return value;
}

inline DataProtectionProvider::DataProtectionProvider() :
    DataProtectionProvider(activate_instance<DataProtectionProvider>())
{}

inline DataProtectionProvider::DataProtectionProvider(hstring_ref protectionDescriptor) :
    DataProtectionProvider(get_activation_factory<DataProtectionProvider, IDataProtectionProviderFactory>().CreateOverloadExplicit(protectionDescriptor))
{}

}

}
