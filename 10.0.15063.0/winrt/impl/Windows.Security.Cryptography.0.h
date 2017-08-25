// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography {

enum class BinaryStringEncoding
{
    Utf8 = 0,
    Utf16LE = 1,
    Utf16BE = 2,
};

struct ICryptographicBufferStatics;
struct CryptographicBuffer;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Cryptography::ICryptographicBufferStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::CryptographicBuffer>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::BinaryStringEncoding>{ using type = enum_category; };
template <> struct name<Windows::Security::Cryptography::ICryptographicBufferStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.ICryptographicBufferStatics" }; };
template <> struct name<Windows::Security::Cryptography::CryptographicBuffer>{ static constexpr auto & value{ L"Windows.Security.Cryptography.CryptographicBuffer" }; };
template <> struct name<Windows::Security::Cryptography::BinaryStringEncoding>{ static constexpr auto & value{ L"Windows.Security.Cryptography.BinaryStringEncoding" }; };
template <> struct guid<Windows::Security::Cryptography::ICryptographicBufferStatics>{ static constexpr GUID value{ 0x320B7E22,0x3CB0,0x4CDF,{ 0x86,0x63,0x1D,0x28,0x91,0x00,0x65,0xEB } }; };

template <typename D>
struct consume_Windows_Security_Cryptography_ICryptographicBufferStatics
{
    bool Compare(Windows::Storage::Streams::IBuffer const& object1, Windows::Storage::Streams::IBuffer const& object2) const;
    Windows::Storage::Streams::IBuffer GenerateRandom(uint32_t length) const;
    uint32_t GenerateRandomNumber() const;
    Windows::Storage::Streams::IBuffer CreateFromByteArray(array_view<uint8_t const> value) const;
    void CopyToByteArray(Windows::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value) const;
    Windows::Storage::Streams::IBuffer DecodeFromHexString(param::hstring const& value) const;
    hstring EncodeToHexString(Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Storage::Streams::IBuffer DecodeFromBase64String(param::hstring const& value) const;
    hstring EncodeToBase64String(Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Storage::Streams::IBuffer ConvertStringToBinary(param::hstring const& value, Windows::Security::Cryptography::BinaryStringEncoding const& encoding) const;
    hstring ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding const& encoding, Windows::Storage::Streams::IBuffer const& buffer) const;
};
template <> struct consume<Windows::Security::Cryptography::ICryptographicBufferStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>; };

template <> struct abi<Windows::Security::Cryptography::ICryptographicBufferStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Compare(::IUnknown* object1, ::IUnknown* object2, bool* isEqual) = 0;
    virtual HRESULT __stdcall GenerateRandom(uint32_t length, ::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall GenerateRandomNumber(uint32_t* value) = 0;
    virtual HRESULT __stdcall CreateFromByteArray(uint32_t __valueSize, uint8_t* value, ::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall CopyToByteArray(::IUnknown* buffer, uint32_t* __valueSize, uint8_t** value) = 0;
    virtual HRESULT __stdcall DecodeFromHexString(HSTRING value, ::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall EncodeToHexString(::IUnknown* buffer, HSTRING* value) = 0;
    virtual HRESULT __stdcall DecodeFromBase64String(HSTRING value, ::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall EncodeToBase64String(::IUnknown* buffer, HSTRING* value) = 0;
    virtual HRESULT __stdcall ConvertStringToBinary(HSTRING value, abi_t<Windows::Security::Cryptography::BinaryStringEncoding> encoding, ::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall ConvertBinaryToString(abi_t<Windows::Security::Cryptography::BinaryStringEncoding> encoding, ::IUnknown* buffer, HSTRING* value) = 0;
};};

}
