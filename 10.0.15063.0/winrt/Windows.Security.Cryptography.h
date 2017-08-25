// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Cryptography.2.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::Compare(Windows::Storage::Streams::IBuffer const& object1, Windows::Storage::Streams::IBuffer const& object2) const
{
    bool isEqual{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->Compare(get_abi(object1), get_abi(object2), &isEqual));
    return isEqual;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::GenerateRandom(uint32_t length) const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->GenerateRandom(length, put_abi(buffer)));
    return buffer;
}

template <typename D> uint32_t consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::GenerateRandomNumber() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->GenerateRandomNumber(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::CreateFromByteArray(array_view<uint8_t const> value) const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->CreateFromByteArray(value.size(), get_abi(value), put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::CopyToByteArray(Windows::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->CopyToByteArray(get_abi(buffer), impl::put_size_abi(value), put_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::DecodeFromHexString(param::hstring const& value) const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->DecodeFromHexString(get_abi(value), put_abi(buffer)));
    return buffer;
}

template <typename D> hstring consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::EncodeToHexString(Windows::Storage::Streams::IBuffer const& buffer) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->EncodeToHexString(get_abi(buffer), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::DecodeFromBase64String(param::hstring const& value) const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->DecodeFromBase64String(get_abi(value), put_abi(buffer)));
    return buffer;
}

template <typename D> hstring consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::EncodeToBase64String(Windows::Storage::Streams::IBuffer const& buffer) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->EncodeToBase64String(get_abi(buffer), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::ConvertStringToBinary(param::hstring const& value, Windows::Security::Cryptography::BinaryStringEncoding const& encoding) const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->ConvertStringToBinary(get_abi(value), get_abi(encoding), put_abi(buffer)));
    return buffer;
}

template <typename D> hstring consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding const& encoding, Windows::Storage::Streams::IBuffer const& buffer) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->ConvertBinaryToString(get_abi(encoding), get_abi(buffer), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::Cryptography::ICryptographicBufferStatics> : produce_base<D, Windows::Security::Cryptography::ICryptographicBufferStatics>
{
    HRESULT __stdcall Compare(::IUnknown* object1, ::IUnknown* object2, bool* isEqual) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isEqual = detach_abi(this->shim().Compare(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&object1), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&object2)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GenerateRandom(uint32_t length, ::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().GenerateRandom(length));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GenerateRandomNumber(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GenerateRandomNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromByteArray(uint32_t __valueSize, uint8_t* value, ::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().CreateFromByteArray(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyToByteArray(::IUnknown* buffer, uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyToByteArray(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), detach_abi<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DecodeFromHexString(HSTRING value, ::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().DecodeFromHexString(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EncodeToHexString(::IUnknown* buffer, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncodeToHexString(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DecodeFromBase64String(HSTRING value, ::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().DecodeFromBase64String(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EncodeToBase64String(::IUnknown* buffer, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncodeToBase64String(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertStringToBinary(HSTRING value, abi_t<Windows::Security::Cryptography::BinaryStringEncoding> encoding, ::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().ConvertStringToBinary(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::Security::Cryptography::BinaryStringEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertBinaryToString(abi_t<Windows::Security::Cryptography::BinaryStringEncoding> encoding, ::IUnknown* buffer, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConvertBinaryToString(*reinterpret_cast<Windows::Security::Cryptography::BinaryStringEncoding const*>(&encoding), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
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

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography {

inline bool CryptographicBuffer::Compare(Windows::Storage::Streams::IBuffer const& object1, Windows::Storage::Streams::IBuffer const& object2)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().Compare(object1, object2);
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::GenerateRandom(uint32_t length)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().GenerateRandom(length);
}

inline uint32_t CryptographicBuffer::GenerateRandomNumber()
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().GenerateRandomNumber();
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::CreateFromByteArray(array_view<uint8_t const> value)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().CreateFromByteArray(value);
}

inline void CryptographicBuffer::CopyToByteArray(Windows::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value)
{
    get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().CopyToByteArray(buffer, value);
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::DecodeFromHexString(param::hstring const& value)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().DecodeFromHexString(value);
}

inline hstring CryptographicBuffer::EncodeToHexString(Windows::Storage::Streams::IBuffer const& buffer)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().EncodeToHexString(buffer);
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::DecodeFromBase64String(param::hstring const& value)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().DecodeFromBase64String(value);
}

inline hstring CryptographicBuffer::EncodeToBase64String(Windows::Storage::Streams::IBuffer const& buffer)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().EncodeToBase64String(buffer);
}

inline Windows::Storage::Streams::IBuffer CryptographicBuffer::ConvertStringToBinary(param::hstring const& value, Windows::Security::Cryptography::BinaryStringEncoding const& encoding)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().ConvertStringToBinary(value, encoding);
}

inline hstring CryptographicBuffer::ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding const& encoding, Windows::Storage::Streams::IBuffer const& buffer)
{
    return get_activation_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>().ConvertBinaryToString(encoding, buffer);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::CryptographicBuffer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::CryptographicBuffer> {};

}

WINRT_WARNING_POP
