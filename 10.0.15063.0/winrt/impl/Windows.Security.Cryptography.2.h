// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.Cryptography.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography {

struct CryptographicBuffer
{
    CryptographicBuffer() = delete;
    static bool Compare(Windows::Storage::Streams::IBuffer const& object1, Windows::Storage::Streams::IBuffer const& object2);
    static Windows::Storage::Streams::IBuffer GenerateRandom(uint32_t length);
    static uint32_t GenerateRandomNumber();
    static Windows::Storage::Streams::IBuffer CreateFromByteArray(array_view<uint8_t const> value);
    static void CopyToByteArray(Windows::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value);
    static Windows::Storage::Streams::IBuffer DecodeFromHexString(param::hstring const& value);
    static hstring EncodeToHexString(Windows::Storage::Streams::IBuffer const& buffer);
    static Windows::Storage::Streams::IBuffer DecodeFromBase64String(param::hstring const& value);
    static hstring EncodeToBase64String(Windows::Storage::Streams::IBuffer const& buffer);
    static Windows::Storage::Streams::IBuffer ConvertStringToBinary(param::hstring const& value, Windows::Security::Cryptography::BinaryStringEncoding const& encoding);
    static hstring ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding const& encoding, Windows::Storage::Streams::IBuffer const& buffer);
};

}
