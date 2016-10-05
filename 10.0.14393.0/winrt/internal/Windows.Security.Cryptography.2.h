// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Cryptography.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Security::Cryptography {

template <typename D>
struct WINRT_EBO impl_ICryptographicBufferStatics
{
    bool Compare(const Windows::Storage::Streams::IBuffer & object1, const Windows::Storage::Streams::IBuffer & object2) const;
    Windows::Storage::Streams::IBuffer GenerateRandom(uint32_t length) const;
    uint32_t GenerateRandomNumber() const;
    Windows::Storage::Streams::IBuffer CreateFromByteArray(array_ref<const uint8_t> value) const;
    void CopyToByteArray(const Windows::Storage::Streams::IBuffer & buffer, com_array<uint8_t> & value) const;
    Windows::Storage::Streams::IBuffer DecodeFromHexString(hstring_ref value) const;
    hstring EncodeToHexString(const Windows::Storage::Streams::IBuffer & buffer) const;
    Windows::Storage::Streams::IBuffer DecodeFromBase64String(hstring_ref value) const;
    hstring EncodeToBase64String(const Windows::Storage::Streams::IBuffer & buffer) const;
    Windows::Storage::Streams::IBuffer ConvertStringToBinary(hstring_ref value, Windows::Security::Cryptography::BinaryStringEncoding encoding) const;
    hstring ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding encoding, const Windows::Storage::Streams::IBuffer & buffer) const;
};

struct ICryptographicBufferStatics :
    Windows::IInspectable,
    impl::consume<ICryptographicBufferStatics>
{
    ICryptographicBufferStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICryptographicBufferStatics>(m_ptr); }
};

}

}
