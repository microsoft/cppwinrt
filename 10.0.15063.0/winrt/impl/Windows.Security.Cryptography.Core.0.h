// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

struct Certificate;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Core {

enum class Capi1KdfTargetAlgorithm
{
    NotAes = 0,
    Aes = 1,
};

enum class CryptographicPadding
{
    None = 0,
    RsaOaep = 1,
    RsaPkcs1V15 = 2,
    RsaPss = 3,
};

enum class CryptographicPrivateKeyBlobType
{
    Pkcs8RawPrivateKeyInfo = 0,
    Pkcs1RsaPrivateKey = 1,
    BCryptPrivateKey = 2,
    Capi1PrivateKey = 3,
    BCryptEccFullPrivateKey = 4,
};

enum class CryptographicPublicKeyBlobType
{
    X509SubjectPublicKeyInfo = 0,
    Pkcs1RsaPublicKey = 1,
    BCryptPublicKey = 2,
    Capi1PublicKey = 3,
    BCryptEccFullPublicKey = 4,
};

struct IAsymmetricAlgorithmNamesStatics;
struct IAsymmetricAlgorithmNamesStatics2;
struct IAsymmetricKeyAlgorithmProvider;
struct IAsymmetricKeyAlgorithmProvider2;
struct IAsymmetricKeyAlgorithmProviderStatics;
struct ICryptographicEngineStatics;
struct ICryptographicEngineStatics2;
struct ICryptographicKey;
struct IEccCurveNamesStatics;
struct IEncryptedAndAuthenticatedData;
struct IHashAlgorithmNamesStatics;
struct IHashAlgorithmProvider;
struct IHashAlgorithmProviderStatics;
struct IHashComputation;
struct IKeyDerivationAlgorithmNamesStatics;
struct IKeyDerivationAlgorithmNamesStatics2;
struct IKeyDerivationAlgorithmProvider;
struct IKeyDerivationAlgorithmProviderStatics;
struct IKeyDerivationParameters;
struct IKeyDerivationParameters2;
struct IKeyDerivationParametersStatics;
struct IKeyDerivationParametersStatics2;
struct IMacAlgorithmNamesStatics;
struct IMacAlgorithmProvider;
struct IMacAlgorithmProvider2;
struct IMacAlgorithmProviderStatics;
struct IPersistedKeyProviderStatics;
struct ISymmetricAlgorithmNamesStatics;
struct ISymmetricKeyAlgorithmProvider;
struct ISymmetricKeyAlgorithmProviderStatics;
struct AsymmetricAlgorithmNames;
struct AsymmetricKeyAlgorithmProvider;
struct CryptographicEngine;
struct CryptographicHash;
struct CryptographicKey;
struct EccCurveNames;
struct EncryptedAndAuthenticatedData;
struct HashAlgorithmNames;
struct HashAlgorithmProvider;
struct KeyDerivationAlgorithmNames;
struct KeyDerivationAlgorithmProvider;
struct KeyDerivationParameters;
struct MacAlgorithmNames;
struct MacAlgorithmProvider;
struct PersistedKeyProvider;
struct SymmetricAlgorithmNames;
struct SymmetricKeyAlgorithmProvider;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::ICryptographicKey>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IHashComputation>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationParameters>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::CryptographicEngine>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::CryptographicHash>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::CryptographicKey>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::EccCurveNames>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::HashAlgorithmNames>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::HashAlgorithmProvider>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::KeyDerivationParameters>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::MacAlgorithmNames>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::MacAlgorithmProvider>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::PersistedKeyProvider>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::SymmetricAlgorithmNames>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>{ using type = class_category; };
template <> struct category<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm>{ using type = enum_category; };
template <> struct category<Windows::Security::Cryptography::Core::CryptographicPadding>{ using type = enum_category; };
template <> struct category<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType>{ using type = enum_category; };
template <> struct category<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType>{ using type = enum_category; };
template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2" }; };
template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2" }; };
template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics2" }; };
template <> struct name<Windows::Security::Cryptography::Core::ICryptographicKey>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ICryptographicKey" }; };
template <> struct name<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IEccCurveNamesStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData" }; };
template <> struct name<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IHashAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IHashComputation>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IHashComputation" }; };
template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2" }; };
template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationParameters>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationParameters" }; };
template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationParameters2" }; };
template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2" }; };
template <> struct name<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider2" }; };
template <> struct name<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics" }; };
template <> struct name<Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames" }; };
template <> struct name<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::CryptographicEngine>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicEngine" }; };
template <> struct name<Windows::Security::Cryptography::Core::CryptographicHash>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicHash" }; };
template <> struct name<Windows::Security::Cryptography::Core::CryptographicKey>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicKey" }; };
template <> struct name<Windows::Security::Cryptography::Core::EccCurveNames>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.EccCurveNames" }; };
template <> struct name<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData" }; };
template <> struct name<Windows::Security::Cryptography::Core::HashAlgorithmNames>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.HashAlgorithmNames" }; };
template <> struct name<Windows::Security::Cryptography::Core::HashAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.HashAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames" }; };
template <> struct name<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::KeyDerivationParameters>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.KeyDerivationParameters" }; };
template <> struct name<Windows::Security::Cryptography::Core::MacAlgorithmNames>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.MacAlgorithmNames" }; };
template <> struct name<Windows::Security::Cryptography::Core::MacAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.MacAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::PersistedKeyProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.PersistedKeyProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::SymmetricAlgorithmNames>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.SymmetricAlgorithmNames" }; };
template <> struct name<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider" }; };
template <> struct name<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.Capi1KdfTargetAlgorithm" }; };
template <> struct name<Windows::Security::Cryptography::Core::CryptographicPadding>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicPadding" }; };
template <> struct name<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicPrivateKeyBlobType" }; };
template <> struct name<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType>{ static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicPublicKeyBlobType" }; };
template <> struct guid<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>{ static constexpr GUID value{ 0xCAF6FCE4,0x67C0,0x46AA,{ 0x84,0xF9,0x75,0x2E,0x77,0x44,0x9F,0x9B } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>{ static constexpr GUID value{ 0xF141C0D6,0x4BFF,0x4F23,{ 0xBA,0x66,0x60,0x45,0xB1,0x37,0xD5,0xDF } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>{ static constexpr GUID value{ 0xE8D2FF37,0x6259,0x4E88,{ 0xB7,0xE0,0x94,0x19,0x1F,0xDE,0x69,0x9E } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>{ static constexpr GUID value{ 0x4E322A7E,0x7C4D,0x4997,{ 0xAC,0x4F,0x1B,0x84,0x8B,0x36,0x30,0x6E } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>{ static constexpr GUID value{ 0x425BDE18,0xA7F3,0x47A6,{ 0xA8,0xD2,0xC4,0x8D,0x60,0x33,0xA6,0x5C } }; };
template <> struct guid<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>{ static constexpr GUID value{ 0x9FEA0639,0x6FF7,0x4C85,{ 0xA0,0x95,0x95,0xEB,0x31,0x71,0x5E,0xB9 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>{ static constexpr GUID value{ 0x675948FE,0xDF9F,0x4191,{ 0x92,0xC7,0x6C,0xE6,0xF5,0x84,0x20,0xE0 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::ICryptographicKey>{ static constexpr GUID value{ 0xED2A3B70,0x8E7B,0x4009,{ 0x84,0x01,0xFF,0xD1,0xA6,0x2E,0xEB,0x27 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>{ static constexpr GUID value{ 0xB3FF930C,0xAEEB,0x409E,{ 0xB7,0xD4,0x9B,0x95,0x29,0x5A,0xAE,0xCF } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>{ static constexpr GUID value{ 0x6FA42FE7,0x1ECB,0x4B00,{ 0xBE,0xA5,0x60,0xB8,0x3F,0x86,0x2F,0x17 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>{ static constexpr GUID value{ 0x6B5E0516,0xDE96,0x4F0A,{ 0x8D,0x57,0xDC,0xC9,0xDA,0xE3,0x6C,0x76 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>{ static constexpr GUID value{ 0xBE9B3080,0xB2C3,0x422B,{ 0xBC,0xE1,0xEC,0x90,0xEF,0xB5,0xD7,0xB5 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>{ static constexpr GUID value{ 0x9FAC9741,0x5CC4,0x4336,{ 0xAE,0x38,0x62,0x12,0xB7,0x5A,0x91,0x5A } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IHashComputation>{ static constexpr GUID value{ 0x5904D1B6,0xAD31,0x4603,{ 0xA3,0xA4,0xB1,0xBD,0xA9,0x8E,0x25,0x62 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>{ static constexpr GUID value{ 0x7B6E363E,0x94D2,0x4739,{ 0xA5,0x7B,0x02,0x2E,0x0C,0x3A,0x40,0x2A } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>{ static constexpr GUID value{ 0x57953FAB,0x6044,0x466F,{ 0x97,0xF4,0x33,0x7B,0x78,0x08,0x38,0x4D } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>{ static constexpr GUID value{ 0xE1FBA83B,0x4671,0x43B7,{ 0x91,0x58,0x76,0x3A,0xAA,0x98,0xB6,0xBF } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>{ static constexpr GUID value{ 0x0A22097A,0x0A1C,0x443B,{ 0x94,0x18,0xB9,0x49,0x8A,0xEB,0x16,0x03 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IKeyDerivationParameters>{ static constexpr GUID value{ 0x7BF05967,0x047B,0x4A8C,{ 0x96,0x4A,0x46,0x9F,0xFD,0x55,0x22,0xE2 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>{ static constexpr GUID value{ 0xCD4166D1,0x417E,0x4F4C,{ 0xB6,0x66,0xC0,0xD8,0x79,0xF3,0xF8,0xE0 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>{ static constexpr GUID value{ 0xEA961FBE,0xF37F,0x4146,{ 0x9D,0xFE,0xA4,0x56,0xF1,0x73,0x5F,0x4B } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>{ static constexpr GUID value{ 0xA5783DD5,0x58E3,0x4EFB,{ 0xB2,0x83,0xA1,0x65,0x31,0x26,0xE1,0xBE } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>{ static constexpr GUID value{ 0x41412678,0xFB1E,0x43A4,{ 0x89,0x5E,0xA9,0x02,0x6E,0x43,0x90,0xA3 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>{ static constexpr GUID value{ 0x4A3FC5C3,0x1CBD,0x41CE,{ 0xA0,0x92,0xAA,0x0B,0xC5,0xD2,0xD2,0xF5 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>{ static constexpr GUID value{ 0x6DA32A15,0xD931,0x42ED,{ 0x8E,0x7E,0xC3,0x01,0xCA,0xEE,0x11,0x9C } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>{ static constexpr GUID value{ 0xC9BDC147,0xCC77,0x4DF0,{ 0x9E,0x4E,0xB9,0x21,0xE0,0x80,0x64,0x4C } }; };
template <> struct guid<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>{ static constexpr GUID value{ 0x77274814,0xD9D4,0x4CF5,{ 0xB6,0x68,0xE0,0x45,0x7D,0xF3,0x08,0x94 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>{ static constexpr GUID value{ 0x6870727B,0xC996,0x4EAE,{ 0x84,0xD7,0x79,0xB2,0xAE,0xB7,0x3B,0x9C } }; };
template <> struct guid<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>{ static constexpr GUID value{ 0x3D7E4A33,0x3BD0,0x4902,{ 0x8A,0xC8,0x47,0x0D,0x50,0xD2,0x13,0x76 } }; };
template <> struct guid<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>{ static constexpr GUID value{ 0x8D3B2326,0x1F37,0x491F,{ 0xB6,0x0E,0xF5,0x43,0x1B,0x26,0xB4,0x83 } }; };
template <> struct default_interface<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>{ using type = Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider; };
template <> struct default_interface<Windows::Security::Cryptography::Core::CryptographicHash>{ using type = Windows::Security::Cryptography::Core::IHashComputation; };
template <> struct default_interface<Windows::Security::Cryptography::Core::CryptographicKey>{ using type = Windows::Security::Cryptography::Core::ICryptographicKey; };
template <> struct default_interface<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>{ using type = Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData; };
template <> struct default_interface<Windows::Security::Cryptography::Core::HashAlgorithmProvider>{ using type = Windows::Security::Cryptography::Core::IHashAlgorithmProvider; };
template <> struct default_interface<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>{ using type = Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider; };
template <> struct default_interface<Windows::Security::Cryptography::Core::KeyDerivationParameters>{ using type = Windows::Security::Cryptography::Core::IKeyDerivationParameters; };
template <> struct default_interface<Windows::Security::Cryptography::Core::MacAlgorithmProvider>{ using type = Windows::Security::Cryptography::Core::IMacAlgorithmProvider; };
template <> struct default_interface<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>{ using type = Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics
{
    hstring RsaPkcs1() const;
    hstring RsaOaepSha1() const;
    hstring RsaOaepSha256() const;
    hstring RsaOaepSha384() const;
    hstring RsaOaepSha512() const;
    hstring EcdsaP256Sha256() const;
    hstring EcdsaP384Sha384() const;
    hstring EcdsaP521Sha512() const;
    hstring DsaSha1() const;
    hstring DsaSha256() const;
    hstring RsaSignPkcs1Sha1() const;
    hstring RsaSignPkcs1Sha256() const;
    hstring RsaSignPkcs1Sha384() const;
    hstring RsaSignPkcs1Sha512() const;
    hstring RsaSignPssSha1() const;
    hstring RsaSignPssSha256() const;
    hstring RsaSignPssSha384() const;
    hstring RsaSignPssSha512() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2
{
    hstring EcdsaSha256() const;
    hstring EcdsaSha384() const;
    hstring EcdsaSha512() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider
{
    hstring AlgorithmName() const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateKeyPair(uint32_t keySize) const;
    Windows::Security::Cryptography::Core::CryptographicKey ImportKeyPair(Windows::Storage::Streams::IBuffer const& keyBlob) const;
    Windows::Security::Cryptography::Core::CryptographicKey ImportKeyPair(Windows::Storage::Streams::IBuffer const& keyBlob, Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const& BlobType) const;
    Windows::Security::Cryptography::Core::CryptographicKey ImportPublicKey(Windows::Storage::Streams::IBuffer const& keyBlob) const;
    Windows::Security::Cryptography::Core::CryptographicKey ImportPublicKey(Windows::Storage::Streams::IBuffer const& keyBlob, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& BlobType) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2
{
    Windows::Security::Cryptography::Core::CryptographicKey CreateKeyPairWithCurveName(param::hstring const& curveName) const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateKeyPairWithCurveParameters(array_view<uint8_t const> parameters) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider OpenAlgorithm(param::hstring const& algorithm) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics
{
    Windows::Storage::Streams::IBuffer Encrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const;
    Windows::Storage::Streams::IBuffer Decrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const;
    Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData EncryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticatedData) const;
    Windows::Storage::Streams::IBuffer DecryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticationTag, Windows::Storage::Streams::IBuffer const& authenticatedData) const;
    Windows::Storage::Streams::IBuffer Sign(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const;
    bool VerifySignature(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature) const;
    Windows::Storage::Streams::IBuffer DeriveKeyMaterial(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Security::Cryptography::Core::KeyDerivationParameters const& parameters, uint32_t desiredKeySize) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::ICryptographicEngineStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2
{
    Windows::Storage::Streams::IBuffer SignHashedData(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const;
    bool VerifySignatureWithHashInput(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> DecryptAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> SignAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> SignHashedDataAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_ICryptographicKey
{
    uint32_t KeySize() const;
    Windows::Storage::Streams::IBuffer Export() const;
    Windows::Storage::Streams::IBuffer Export(Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const& BlobType) const;
    Windows::Storage::Streams::IBuffer ExportPublicKey() const;
    Windows::Storage::Streams::IBuffer ExportPublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& BlobType) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::ICryptographicKey> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics
{
    hstring BrainpoolP160r1() const;
    hstring BrainpoolP160t1() const;
    hstring BrainpoolP192r1() const;
    hstring BrainpoolP192t1() const;
    hstring BrainpoolP224r1() const;
    hstring BrainpoolP224t1() const;
    hstring BrainpoolP256r1() const;
    hstring BrainpoolP256t1() const;
    hstring BrainpoolP320r1() const;
    hstring BrainpoolP320t1() const;
    hstring BrainpoolP384r1() const;
    hstring BrainpoolP384t1() const;
    hstring BrainpoolP512r1() const;
    hstring BrainpoolP512t1() const;
    hstring Curve25519() const;
    hstring Ec192wapi() const;
    hstring NistP192() const;
    hstring NistP224() const;
    hstring NistP256() const;
    hstring NistP384() const;
    hstring NistP521() const;
    hstring NumsP256t1() const;
    hstring NumsP384t1() const;
    hstring NumsP512t1() const;
    hstring SecP160k1() const;
    hstring SecP160r1() const;
    hstring SecP160r2() const;
    hstring SecP192k1() const;
    hstring SecP192r1() const;
    hstring SecP224k1() const;
    hstring SecP224r1() const;
    hstring SecP256k1() const;
    hstring SecP256r1() const;
    hstring SecP384r1() const;
    hstring SecP521r1() const;
    hstring Wtls7() const;
    hstring Wtls9() const;
    hstring Wtls12() const;
    hstring X962P192v1() const;
    hstring X962P192v2() const;
    hstring X962P192v3() const;
    hstring X962P239v1() const;
    hstring X962P239v2() const;
    hstring X962P239v3() const;
    hstring X962P256v1() const;
    Windows::Foundation::Collections::IVectorView<hstring> AllEccCurveNames() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IEccCurveNamesStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData
{
    Windows::Storage::Streams::IBuffer EncryptedData() const;
    Windows::Storage::Streams::IBuffer AuthenticationTag() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics
{
    hstring Md5() const;
    hstring Sha1() const;
    hstring Sha256() const;
    hstring Sha384() const;
    hstring Sha512() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider
{
    hstring AlgorithmName() const;
    uint32_t HashLength() const;
    Windows::Storage::Streams::IBuffer HashData(Windows::Storage::Streams::IBuffer const& data) const;
    Windows::Security::Cryptography::Core::CryptographicHash CreateHash() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IHashAlgorithmProvider> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::HashAlgorithmProvider OpenAlgorithm(param::hstring const& algorithm) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IHashComputation
{
    void Append(Windows::Storage::Streams::IBuffer const& data) const;
    Windows::Storage::Streams::IBuffer GetValueAndReset() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IHashComputation> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IHashComputation<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics
{
    hstring Pbkdf2Md5() const;
    hstring Pbkdf2Sha1() const;
    hstring Pbkdf2Sha256() const;
    hstring Pbkdf2Sha384() const;
    hstring Pbkdf2Sha512() const;
    hstring Sp800108CtrHmacMd5() const;
    hstring Sp800108CtrHmacSha1() const;
    hstring Sp800108CtrHmacSha256() const;
    hstring Sp800108CtrHmacSha384() const;
    hstring Sp800108CtrHmacSha512() const;
    hstring Sp80056aConcatMd5() const;
    hstring Sp80056aConcatSha1() const;
    hstring Sp80056aConcatSha256() const;
    hstring Sp80056aConcatSha384() const;
    hstring Sp80056aConcatSha512() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2
{
    hstring CapiKdfMd5() const;
    hstring CapiKdfSha1() const;
    hstring CapiKdfSha256() const;
    hstring CapiKdfSha384() const;
    hstring CapiKdfSha512() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider
{
    hstring AlgorithmName() const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider OpenAlgorithm(param::hstring const& algorithm) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters
{
    Windows::Storage::Streams::IBuffer KdfGenericBinary() const;
    void KdfGenericBinary(Windows::Storage::Streams::IBuffer const& value) const;
    uint32_t IterationCount() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationParameters> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters2
{
    Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm Capi1KdfTargetAlgorithm() const;
    void Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& value) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationParameters2> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters2<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters BuildForPbkdf2(Windows::Storage::Streams::IBuffer const& pbkdf2Salt, uint32_t iterationCount) const;
    Windows::Security::Cryptography::Core::KeyDerivationParameters BuildForSP800108(Windows::Storage::Streams::IBuffer const& label, Windows::Storage::Streams::IBuffer const& context) const;
    Windows::Security::Cryptography::Core::KeyDerivationParameters BuildForSP80056a(Windows::Storage::Streams::IBuffer const& algorithmId, Windows::Storage::Streams::IBuffer const& partyUInfo, Windows::Storage::Streams::IBuffer const& partyVInfo, Windows::Storage::Streams::IBuffer const& suppPubInfo, Windows::Storage::Streams::IBuffer const& suppPrivInfo) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& capi1KdfTargetAlgorithm) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics
{
    hstring HmacMd5() const;
    hstring HmacSha1() const;
    hstring HmacSha256() const;
    hstring HmacSha384() const;
    hstring HmacSha512() const;
    hstring AesCmac() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider
{
    hstring AlgorithmName() const;
    uint32_t MacLength() const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IMacAlgorithmProvider> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2
{
    Windows::Security::Cryptography::Core::CryptographicHash CreateHash(Windows::Storage::Streams::IBuffer const& keyMaterial) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::MacAlgorithmProvider OpenAlgorithm(param::hstring const& algorithm) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> OpenKeyPairFromCertificateAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding) const;
    Windows::Security::Cryptography::Core::CryptographicKey OpenPublicKeyFromCertificate(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics
{
    hstring DesCbc() const;
    hstring DesEcb() const;
    hstring TripleDesCbc() const;
    hstring TripleDesEcb() const;
    hstring Rc2Cbc() const;
    hstring Rc2Ecb() const;
    hstring AesCbc() const;
    hstring AesEcb() const;
    hstring AesGcm() const;
    hstring AesCcm() const;
    hstring AesCbcPkcs7() const;
    hstring AesEcbPkcs7() const;
    hstring DesCbcPkcs7() const;
    hstring DesEcbPkcs7() const;
    hstring TripleDesCbcPkcs7() const;
    hstring TripleDesEcbPkcs7() const;
    hstring Rc2CbcPkcs7() const;
    hstring Rc2EcbPkcs7() const;
    hstring Rc4() const;
};
template <> struct consume<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider
{
    hstring AlgorithmName() const;
    uint32_t BlockLength() const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateSymmetricKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider<D>; };

template <typename D>
struct consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider OpenAlgorithm(param::hstring const& algorithm) const;
};
template <> struct consume<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics> { template <typename D> using type = consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics<D>; };

template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RsaPkcs1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaOaepSha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaOaepSha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaOaepSha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaOaepSha512(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EcdsaP256Sha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EcdsaP384Sha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EcdsaP521Sha512(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DsaSha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DsaSha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaSignPkcs1Sha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaSignPkcs1Sha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaSignPkcs1Sha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaSignPkcs1Sha512(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaSignPssSha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaSignPssSha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaSignPssSha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RsaSignPssSha512(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EcdsaSha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EcdsaSha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EcdsaSha512(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(HSTRING* value) = 0;
    virtual HRESULT __stdcall CreateKeyPair(uint32_t keySize, ::IUnknown** key) = 0;
    virtual HRESULT __stdcall ImportDefaultPrivateKeyBlob(::IUnknown* keyBlob, ::IUnknown** key) = 0;
    virtual HRESULT __stdcall ImportKeyPairWithBlobType(::IUnknown* keyBlob, abi_t<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType> BlobType, ::IUnknown** key) = 0;
    virtual HRESULT __stdcall ImportDefaultPublicKeyBlob(::IUnknown* keyBlob, ::IUnknown** key) = 0;
    virtual HRESULT __stdcall ImportPublicKeyWithBlobType(::IUnknown* keyBlob, abi_t<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType> BlobType, ::IUnknown** key) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateKeyPairWithCurveName(HSTRING curveName, ::IUnknown** key) = 0;
    virtual HRESULT __stdcall CreateKeyPairWithCurveParameters(uint32_t __parametersSize, uint8_t* parameters, ::IUnknown** key) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, ::IUnknown** provider) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Encrypt(::IUnknown* key, ::IUnknown* data, ::IUnknown* iv, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall Decrypt(::IUnknown* key, ::IUnknown* data, ::IUnknown* iv, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall EncryptAndAuthenticate(::IUnknown* key, ::IUnknown* data, ::IUnknown* nonce, ::IUnknown* authenticatedData, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall DecryptAndAuthenticate(::IUnknown* key, ::IUnknown* data, ::IUnknown* nonce, ::IUnknown* authenticationTag, ::IUnknown* authenticatedData, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall Sign(::IUnknown* key, ::IUnknown* data, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall VerifySignature(::IUnknown* key, ::IUnknown* data, ::IUnknown* signature, bool* isAuthenticated) = 0;
    virtual HRESULT __stdcall DeriveKeyMaterial(::IUnknown* key, ::IUnknown* parameters, uint32_t desiredKeySize, ::IUnknown** keyMaterial) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SignHashedData(::IUnknown* key, ::IUnknown* data, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall VerifySignatureWithHashInput(::IUnknown* key, ::IUnknown* data, ::IUnknown* signature, bool* isAuthenticated) = 0;
    virtual HRESULT __stdcall DecryptAsync(::IUnknown* key, ::IUnknown* data, ::IUnknown* iv, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SignAsync(::IUnknown* key, ::IUnknown* data, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SignHashedDataAsync(::IUnknown* key, ::IUnknown* data, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::ICryptographicKey>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeySize(uint32_t* value) = 0;
    virtual HRESULT __stdcall ExportDefaultPrivateKeyBlobType(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ExportPrivateKeyWithBlobType(abi_t<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType> BlobType, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall ExportDefaultPublicKeyBlobType(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ExportPublicKeyWithBlobType(abi_t<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType> BlobType, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BrainpoolP160r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP160t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP192r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP192t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP224r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP224t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP256r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP256t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP320r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP320t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP384r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP384t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP512r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP512t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Curve25519(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Ec192wapi(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NistP192(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NistP224(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NistP256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NistP384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NistP521(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NumsP256t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NumsP384t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NumsP512t1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP160k1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP160r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP160r2(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP192k1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP192r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP224k1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP224r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP256k1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP256r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP384r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SecP521r1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Wtls7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Wtls9(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Wtls12(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_X962P192v1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_X962P192v2(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_X962P192v3(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_X962P239v1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_X962P239v2(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_X962P239v3(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_X962P256v1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AllEccCurveNames(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EncryptedData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationTag(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Md5(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sha512(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HashLength(uint32_t* value) = 0;
    virtual HRESULT __stdcall HashData(::IUnknown* data, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateHash(::IUnknown** Value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, ::IUnknown** provider) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IHashComputation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Append(::IUnknown* data) = 0;
    virtual HRESULT __stdcall GetValueAndReset(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Pbkdf2Md5(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Pbkdf2Sha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Pbkdf2Sha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Pbkdf2Sha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Pbkdf2Sha512(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacMd5(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacSha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacSha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacSha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacSha512(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatMd5(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatSha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatSha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatSha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatSha512(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CapiKdfMd5(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CapiKdfSha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CapiKdfSha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CapiKdfSha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CapiKdfSha512(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(HSTRING* value) = 0;
    virtual HRESULT __stdcall CreateKey(::IUnknown* keyMaterial, ::IUnknown** key) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, ::IUnknown** provider) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KdfGenericBinary(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_KdfGenericBinary(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_IterationCount(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Capi1KdfTargetAlgorithm(abi_t<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm>* value) = 0;
    virtual HRESULT __stdcall put_Capi1KdfTargetAlgorithm(abi_t<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm> value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BuildForPbkdf2(::IUnknown* pbkdf2Salt, uint32_t iterationCount, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall BuildForSP800108(::IUnknown* label, ::IUnknown* context, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall BuildForSP80056a(::IUnknown* algorithmId, ::IUnknown* partyUInfo, ::IUnknown* partyVInfo, ::IUnknown* suppPubInfo, ::IUnknown* suppPrivInfo, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BuildForCapi1Kdf(abi_t<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm> capi1KdfTargetAlgorithm, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HmacMd5(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HmacSha1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HmacSha256(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HmacSha384(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HmacSha512(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AesCmac(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MacLength(uint32_t* value) = 0;
    virtual HRESULT __stdcall CreateKey(::IUnknown* keyMaterial, ::IUnknown** macKey) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateHash(::IUnknown* keyMaterial, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, ::IUnknown** provider) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OpenKeyPairFromCertificateAsync(::IUnknown* certificate, HSTRING hashAlgorithmName, abi_t<Windows::Security::Cryptography::Core::CryptographicPadding> padding, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall OpenPublicKeyFromCertificate(::IUnknown* certificate, HSTRING hashAlgorithmName, abi_t<Windows::Security::Cryptography::Core::CryptographicPadding> padding, ::IUnknown** key) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesCbc(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DesEcb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TripleDesCbc(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TripleDesEcb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rc2Cbc(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rc2Ecb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AesCbc(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AesEcb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AesGcm(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AesCcm(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AesCbcPkcs7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AesEcbPkcs7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DesCbcPkcs7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DesEcbPkcs7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TripleDesCbcPkcs7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TripleDesEcbPkcs7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rc2CbcPkcs7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rc2EcbPkcs7(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rc4(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BlockLength(uint32_t* value) = 0;
    virtual HRESULT __stdcall CreateSymmetricKey(::IUnknown* keyMaterial, ::IUnknown** key) = 0;
};};

template <> struct abi<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, ::IUnknown** provider) = 0;
};};

}
