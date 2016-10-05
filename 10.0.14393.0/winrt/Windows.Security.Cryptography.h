// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Security.Cryptography.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Cryptography::ICryptographicBufferStatics> : produce_base<D, Windows::Security::Cryptography::ICryptographicBufferStatics>
{
    HRESULT __stdcall abi_Compare(abi_arg_in<Windows::Storage::Streams::IBuffer> object1, abi_arg_in<Windows::Storage::Streams::IBuffer> object2, bool * isEqual) noexcept override
    {
        try
        {
            *isEqual = detach(this->shim().Compare(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&object1), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&object2)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GenerateRandom(uint32_t length, abi_arg_out<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            *buffer = detach(this->shim().GenerateRandom(length));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GenerateRandomNumber(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GenerateRandomNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromByteArray(uint32_t __valueSize, abi_arg_in<uint8_t> * value, abi_arg_out<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            *buffer = detach(this->shim().CreateFromByteArray(array_ref<const uint8_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyToByteArray(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, uint32_t * __valueSize, abi_arg_out<uint8_t> * value) noexcept override
    {
        try
        {
            this->shim().CopyToByteArray(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer), detach<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DecodeFromHexString(abi_arg_in<hstring> value, abi_arg_out<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            *buffer = detach(this->shim().DecodeFromHexString(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EncodeToHexString(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EncodeToHexString(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DecodeFromBase64String(abi_arg_in<hstring> value, abi_arg_out<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            *buffer = detach(this->shim().DecodeFromBase64String(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EncodeToBase64String(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EncodeToBase64String(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertStringToBinary(abi_arg_in<hstring> value, Windows::Security::Cryptography::BinaryStringEncoding encoding, abi_arg_out<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            *buffer = detach(this->shim().ConvertStringToBinary(*reinterpret_cast<const hstring *>(&value), encoding));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding encoding, abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConvertBinaryToString(encoding, *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
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

namespace Windows::Security::Cryptography {

template <typename D> bool impl_ICryptographicBufferStatics<D>::Compare(const Windows::Storage::Streams::IBuffer & object1, const Windows::Storage::Streams::IBuffer & object2) const
{
    bool isEqual {};
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_Compare(get(object1), get(object2), &isEqual));
    return isEqual;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicBufferStatics<D>::GenerateRandom(uint32_t length) const
{
    Windows::Storage::Streams::IBuffer buffer;
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_GenerateRandom(length, put(buffer)));
    return buffer;
}

template <typename D> uint32_t impl_ICryptographicBufferStatics<D>::GenerateRandomNumber() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_GenerateRandomNumber(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicBufferStatics<D>::CreateFromByteArray(array_ref<const uint8_t> value) const
{
    Windows::Storage::Streams::IBuffer buffer;
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_CreateFromByteArray(value.size(), get(value), put(buffer)));
    return buffer;
}

template <typename D> void impl_ICryptographicBufferStatics<D>::CopyToByteArray(const Windows::Storage::Streams::IBuffer & buffer, com_array<uint8_t> & value) const
{
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_CopyToByteArray(get(buffer), put_size(value), put(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicBufferStatics<D>::DecodeFromHexString(hstring_ref value) const
{
    Windows::Storage::Streams::IBuffer buffer;
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_DecodeFromHexString(get(value), put(buffer)));
    return buffer;
}

template <typename D> hstring impl_ICryptographicBufferStatics<D>::EncodeToHexString(const Windows::Storage::Streams::IBuffer & buffer) const
{
    hstring value;
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_EncodeToHexString(get(buffer), put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicBufferStatics<D>::DecodeFromBase64String(hstring_ref value) const
{
    Windows::Storage::Streams::IBuffer buffer;
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_DecodeFromBase64String(get(value), put(buffer)));
    return buffer;
}

template <typename D> hstring impl_ICryptographicBufferStatics<D>::EncodeToBase64String(const Windows::Storage::Streams::IBuffer & buffer) const
{
    hstring value;
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_EncodeToBase64String(get(buffer), put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicBufferStatics<D>::ConvertStringToBinary(hstring_ref value, Windows::Security::Cryptography::BinaryStringEncoding encoding) const
{
    Windows::Storage::Streams::IBuffer buffer;
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_ConvertStringToBinary(get(value), encoding, put(buffer)));
    return buffer;
}

template <typename D> hstring impl_ICryptographicBufferStatics<D>::ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding encoding, const Windows::Storage::Streams::IBuffer & buffer) const
{
    hstring value;
    check_hresult(static_cast<const ICryptographicBufferStatics &>(static_cast<const D &>(*this))->abi_ConvertBinaryToString(encoding, get(buffer), put(value)));
    return value;
}

inline bool CryptographicBuffer::Compare(const Windows::Storage::Streams::IBuffer & object1, const Windows::Storage::Streams::IBuffer & object2)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().Compare(object1, object2);
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::GenerateRandom(uint32_t length)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().GenerateRandom(length);
}

inline uint32_t CryptographicBuffer::GenerateRandomNumber()
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().GenerateRandomNumber();
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::CreateFromByteArray(array_ref<const uint8_t> value)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().CreateFromByteArray(value);
}

inline void CryptographicBuffer::CopyToByteArray(const Windows::Storage::Streams::IBuffer & buffer, com_array<uint8_t> & value)
{
    get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().CopyToByteArray(buffer, value);
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::DecodeFromHexString(hstring_ref value)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().DecodeFromHexString(value);
}

inline hstring CryptographicBuffer::EncodeToHexString(const Windows::Storage::Streams::IBuffer & buffer)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().EncodeToHexString(buffer);
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::DecodeFromBase64String(hstring_ref value)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().DecodeFromBase64String(value);
}

inline hstring CryptographicBuffer::EncodeToBase64String(const Windows::Storage::Streams::IBuffer & buffer)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().EncodeToBase64String(buffer);
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::ConvertStringToBinary(hstring_ref value, Windows::Security::Cryptography::BinaryStringEncoding encoding)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().ConvertStringToBinary(value, encoding);
}

inline hstring CryptographicBuffer::ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding encoding, const Windows::Storage::Streams::IBuffer & buffer)
{
    return get_activation_factory<CryptographicBuffer, ICryptographicBufferStatics>().ConvertBinaryToString(encoding, buffer);
}

}

}
