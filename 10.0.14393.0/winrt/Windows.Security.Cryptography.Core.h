// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Security.Cryptography.Certificates.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Security.Cryptography.Core.3.h"
#include "Windows.Security.Cryptography.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
{
    HRESULT __stdcall get_RsaPkcs1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaPkcs1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaOaepSha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaOaepSha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaOaepSha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaOaepSha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaOaepSha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaOaepSha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaOaepSha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaOaepSha512());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaP256Sha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EcdsaP256Sha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaP384Sha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EcdsaP384Sha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaP521Sha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EcdsaP521Sha512());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DsaSha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DsaSha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DsaSha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DsaSha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPkcs1Sha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaSignPkcs1Sha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPkcs1Sha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaSignPkcs1Sha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPkcs1Sha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaSignPkcs1Sha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPkcs1Sha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaSignPkcs1Sha512());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPssSha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaSignPssSha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPssSha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaSignPssSha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPssSha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaSignPssSha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPssSha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RsaSignPssSha512());
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
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
{
    HRESULT __stdcall get_EcdsaSha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EcdsaSha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaSha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EcdsaSha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaSha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EcdsaSha512());
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
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateKeyPair(uint32_t keySize, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().CreateKeyPair(keySize));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportDefaultPrivateKeyBlob(abi_arg_in<Windows::Storage::Streams::IBuffer> keyBlob, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().ImportKeyPair(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&keyBlob)));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportKeyPairWithBlobType(abi_arg_in<Windows::Storage::Streams::IBuffer> keyBlob, Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().ImportKeyPair(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&keyBlob), BlobType));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportDefaultPublicKeyBlob(abi_arg_in<Windows::Storage::Streams::IBuffer> keyBlob, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().ImportPublicKey(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&keyBlob)));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportPublicKeyWithBlobType(abi_arg_in<Windows::Storage::Streams::IBuffer> keyBlob, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().ImportPublicKey(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&keyBlob), BlobType));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
{
    HRESULT __stdcall abi_CreateKeyPairWithCurveName(abi_arg_in<hstring> curveName, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().CreateKeyPairWithCurveName(*reinterpret_cast<const hstring *>(&curveName)));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateKeyPairWithCurveParameters(uint32_t __parametersSize, abi_arg_in<uint8_t> * parameters, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().CreateKeyPairWithCurveParameters(array_ref<const uint8_t>(parameters, parameters + __parametersSize)));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
{
    HRESULT __stdcall abi_OpenAlgorithm(abi_arg_in<hstring> algorithm, abi_arg_out<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> provider) noexcept override
    {
        try
        {
            *provider = detach(this->shim().OpenAlgorithm(*reinterpret_cast<const hstring *>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            *provider = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
{
    HRESULT __stdcall abi_Encrypt(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_in<Windows::Storage::Streams::IBuffer> iv, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Encrypt(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&iv)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Decrypt(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_in<Windows::Storage::Streams::IBuffer> iv, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Decrypt(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&iv)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EncryptAndAuthenticate(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_in<Windows::Storage::Streams::IBuffer> nonce, abi_arg_in<Windows::Storage::Streams::IBuffer> authenticatedData, abi_arg_out<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EncryptAndAuthenticate(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&nonce), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&authenticatedData)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DecryptAndAuthenticate(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_in<Windows::Storage::Streams::IBuffer> nonce, abi_arg_in<Windows::Storage::Streams::IBuffer> authenticationTag, abi_arg_in<Windows::Storage::Streams::IBuffer> authenticatedData, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DecryptAndAuthenticate(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&nonce), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&authenticationTag), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&authenticatedData)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Sign(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sign(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_VerifySignature(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_in<Windows::Storage::Streams::IBuffer> signature, bool * isAuthenticated) noexcept override
    {
        try
        {
            *isAuthenticated = detach(this->shim().VerifySignature(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&signature)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeriveKeyMaterial(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Security::Cryptography::Core::IKeyDerivationParameters> parameters, uint32_t desiredKeySize, abi_arg_out<Windows::Storage::Streams::IBuffer> keyMaterial) noexcept override
    {
        try
        {
            *keyMaterial = detach(this->shim().DeriveKeyMaterial(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Security::Cryptography::Core::KeyDerivationParameters *>(&parameters), desiredKeySize));
            return S_OK;
        }
        catch (...)
        {
            *keyMaterial = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
{
    HRESULT __stdcall abi_SignHashedData(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignHashedData(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_VerifySignatureWithHashInput(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_in<Windows::Storage::Streams::IBuffer> signature, bool * isAuthenticated) noexcept override
    {
        try
        {
            *isAuthenticated = detach(this->shim().VerifySignatureWithHashInput(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&signature)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DecryptAsync(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_in<Windows::Storage::Streams::IBuffer> iv, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DecryptAsync(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&iv)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SignAsync(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignAsync(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SignHashedDataAsync(abi_arg_in<Windows::Security::Cryptography::Core::ICryptographicKey> key, abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignHashedDataAsync(*reinterpret_cast<const Windows::Security::Cryptography::Core::CryptographicKey *>(&key), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
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
struct produce<D, Windows::Security::Cryptography::Core::ICryptographicKey> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicKey>
{
    HRESULT __stdcall get_KeySize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeySize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ExportDefaultPrivateKeyBlobType(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Export());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ExportPrivateKeyWithBlobType(Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Export(BlobType));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ExportDefaultPublicKeyBlobType(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExportPublicKey());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ExportPublicKeyWithBlobType(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExportPublicKey(BlobType));
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
struct produce<D, Windows::Security::Cryptography::Core::IEccCurveNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
{
    HRESULT __stdcall get_BrainpoolP160r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP160r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP160t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP160t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP192r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP192r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP192t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP192t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP224r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP224r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP224t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP224t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP256r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP256r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP256t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP256t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP320r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP320r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP320t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP320t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP384r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP384r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP384t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP384t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP512r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP512r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP512t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BrainpoolP512t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Curve25519(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Curve25519());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ec192wapi(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ec192wapi());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NistP192(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NistP192());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NistP224(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NistP224());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NistP256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NistP256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NistP384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NistP384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NistP521(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NistP521());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumsP256t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumsP256t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumsP384t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumsP384t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumsP512t1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumsP512t1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP160k1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP160k1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP160r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP160r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP160r2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP160r2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP192k1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP192k1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP192r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP192r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP224k1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP224k1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP224r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP224r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP256k1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP256k1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP256r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP256r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP384r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP384r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecP521r1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecP521r1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wtls7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wtls7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wtls9(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wtls9());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wtls12(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wtls12());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X962P192v1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X962P192v1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X962P192v2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X962P192v2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X962P192v3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X962P192v3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X962P239v1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X962P239v1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X962P239v2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X962P239v2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X962P239v3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X962P239v3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X962P256v1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X962P256v1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllEccCurveNames(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllEccCurveNames());
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
struct produce<D, Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> : produce_base<D, Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
{
    HRESULT __stdcall get_EncryptedData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EncryptedData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationTag(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationTag());
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
struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
{
    HRESULT __stdcall get_Md5(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Md5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sha512());
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
struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HashLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HashLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HashData(abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HashData(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateHash(abi_arg_out<Windows::Security::Cryptography::Core::IHashComputation> Value) noexcept override
    {
        try
        {
            *Value = detach(this->shim().CreateHash());
            return S_OK;
        }
        catch (...)
        {
            *Value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
{
    HRESULT __stdcall abi_OpenAlgorithm(abi_arg_in<hstring> algorithm, abi_arg_out<Windows::Security::Cryptography::Core::IHashAlgorithmProvider> provider) noexcept override
    {
        try
        {
            *provider = detach(this->shim().OpenAlgorithm(*reinterpret_cast<const hstring *>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            *provider = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IHashComputation> : produce_base<D, Windows::Security::Cryptography::Core::IHashComputation>
{
    HRESULT __stdcall abi_Append(abi_arg_in<Windows::Storage::Streams::IBuffer> data) noexcept override
    {
        try
        {
            this->shim().Append(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetValueAndReset(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetValueAndReset());
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
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
{
    HRESULT __stdcall get_Pbkdf2Md5(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pbkdf2Md5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pbkdf2Sha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pbkdf2Sha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pbkdf2Sha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pbkdf2Sha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pbkdf2Sha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pbkdf2Sha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pbkdf2Sha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pbkdf2Sha512());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacMd5(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp800108CtrHmacMd5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacSha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp800108CtrHmacSha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacSha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp800108CtrHmacSha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacSha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp800108CtrHmacSha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacSha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp800108CtrHmacSha512());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatMd5(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp80056aConcatMd5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatSha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp80056aConcatSha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatSha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp80056aConcatSha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatSha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp80056aConcatSha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatSha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sp80056aConcatSha512());
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
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
{
    HRESULT __stdcall get_CapiKdfMd5(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CapiKdfMd5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapiKdfSha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CapiKdfSha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapiKdfSha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CapiKdfSha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapiKdfSha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CapiKdfSha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapiKdfSha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CapiKdfSha512());
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
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateKey(abi_arg_in<Windows::Storage::Streams::IBuffer> keyMaterial, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().CreateKey(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&keyMaterial)));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
{
    HRESULT __stdcall abi_OpenAlgorithm(abi_arg_in<hstring> algorithm, abi_arg_out<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> provider) noexcept override
    {
        try
        {
            *provider = detach(this->shim().OpenAlgorithm(*reinterpret_cast<const hstring *>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            *provider = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters>
{
    HRESULT __stdcall get_KdfGenericBinary(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KdfGenericBinary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KdfGenericBinary(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().KdfGenericBinary(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IterationCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IterationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
{
    HRESULT __stdcall get_Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Capi1KdfTargetAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value) noexcept override
    {
        try
        {
            this->shim().Capi1KdfTargetAlgorithm(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
{
    HRESULT __stdcall abi_BuildForPbkdf2(abi_arg_in<Windows::Storage::Streams::IBuffer> pbkdf2Salt, uint32_t iterationCount, abi_arg_out<Windows::Security::Cryptography::Core::IKeyDerivationParameters> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BuildForPbkdf2(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&pbkdf2Salt), iterationCount));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BuildForSP800108(abi_arg_in<Windows::Storage::Streams::IBuffer> label, abi_arg_in<Windows::Storage::Streams::IBuffer> context, abi_arg_out<Windows::Security::Cryptography::Core::IKeyDerivationParameters> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BuildForSP800108(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&label), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&context)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BuildForSP80056a(abi_arg_in<Windows::Storage::Streams::IBuffer> algorithmId, abi_arg_in<Windows::Storage::Streams::IBuffer> partyUInfo, abi_arg_in<Windows::Storage::Streams::IBuffer> partyVInfo, abi_arg_in<Windows::Storage::Streams::IBuffer> suppPubInfo, abi_arg_in<Windows::Storage::Streams::IBuffer> suppPrivInfo, abi_arg_out<Windows::Security::Cryptography::Core::IKeyDerivationParameters> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BuildForSP80056a(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&algorithmId), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&partyUInfo), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&partyVInfo), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&suppPubInfo), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&suppPrivInfo)));
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
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
{
    HRESULT __stdcall abi_BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm capi1KdfTargetAlgorithm, abi_arg_out<Windows::Security::Cryptography::Core::IKeyDerivationParameters> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BuildForCapi1Kdf(capi1KdfTargetAlgorithm));
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
struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
{
    HRESULT __stdcall get_HmacMd5(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HmacMd5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HmacSha1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HmacSha1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HmacSha256(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HmacSha256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HmacSha384(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HmacSha384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HmacSha512(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HmacSha512());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AesCmac(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AesCmac());
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
struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MacLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MacLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateKey(abi_arg_in<Windows::Storage::Streams::IBuffer> keyMaterial, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> macKey) noexcept override
    {
        try
        {
            *macKey = detach(this->shim().CreateKey(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&keyMaterial)));
            return S_OK;
        }
        catch (...)
        {
            *macKey = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider2> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
{
    HRESULT __stdcall abi_CreateHash(abi_arg_in<Windows::Storage::Streams::IBuffer> keyMaterial, abi_arg_out<Windows::Security::Cryptography::Core::IHashComputation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateHash(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&keyMaterial)));
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
struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
{
    HRESULT __stdcall abi_OpenAlgorithm(abi_arg_in<hstring> algorithm, abi_arg_out<Windows::Security::Cryptography::Core::IMacAlgorithmProvider> provider) noexcept override
    {
        try
        {
            *provider = detach(this->shim().OpenAlgorithm(*reinterpret_cast<const hstring *>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            *provider = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
{
    HRESULT __stdcall abi_OpenKeyPairFromCertificateAsync(abi_arg_in<Windows::Security::Cryptography::Certificates::ICertificate> certificate, abi_arg_in<hstring> hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenKeyPairFromCertificateAsync(*reinterpret_cast<const Windows::Security::Cryptography::Certificates::Certificate *>(&certificate), *reinterpret_cast<const hstring *>(&hashAlgorithmName), padding));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenPublicKeyFromCertificate(abi_arg_in<Windows::Security::Cryptography::Certificates::ICertificate> certificate, abi_arg_in<hstring> hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().OpenPublicKeyFromCertificate(*reinterpret_cast<const Windows::Security::Cryptography::Certificates::Certificate *>(&certificate), *reinterpret_cast<const hstring *>(&hashAlgorithmName), padding));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
{
    HRESULT __stdcall get_DesCbc(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesCbc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesEcb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesEcb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesCbc(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TripleDesCbc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesEcb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TripleDesEcb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rc2Cbc(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rc2Cbc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rc2Ecb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rc2Ecb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AesCbc(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AesCbc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AesEcb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AesEcb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AesGcm(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AesGcm());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AesCcm(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AesCcm());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AesCbcPkcs7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AesCbcPkcs7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AesEcbPkcs7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AesEcbPkcs7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesCbcPkcs7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesCbcPkcs7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesEcbPkcs7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesEcbPkcs7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesCbcPkcs7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TripleDesCbcPkcs7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesEcbPkcs7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TripleDesEcbPkcs7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rc2CbcPkcs7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rc2CbcPkcs7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rc2EcbPkcs7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rc2EcbPkcs7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rc4(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rc4());
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
struct produce<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlockLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BlockLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSymmetricKey(abi_arg_in<Windows::Storage::Streams::IBuffer> keyMaterial, abi_arg_out<Windows::Security::Cryptography::Core::ICryptographicKey> key) noexcept override
    {
        try
        {
            *key = detach(this->shim().CreateSymmetricKey(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&keyMaterial)));
            return S_OK;
        }
        catch (...)
        {
            *key = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
{
    HRESULT __stdcall abi_OpenAlgorithm(abi_arg_in<hstring> algorithm, abi_arg_out<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> provider) noexcept override
    {
        try
        {
            *provider = detach(this->shim().OpenAlgorithm(*reinterpret_cast<const hstring *>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            *provider = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Security::Cryptography::Core {

template <typename D> Windows::Storage::Streams::IBuffer impl_IKeyDerivationParameters<D>::KdfGenericBinary() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IKeyDerivationParameters &>(static_cast<const D &>(*this))->get_KdfGenericBinary(put(value)));
    return value;
}

template <typename D> void impl_IKeyDerivationParameters<D>::KdfGenericBinary(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IKeyDerivationParameters &>(static_cast<const D &>(*this))->put_KdfGenericBinary(get(value)));
}

template <typename D> uint32_t impl_IKeyDerivationParameters<D>::IterationCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IKeyDerivationParameters &>(static_cast<const D &>(*this))->get_IterationCount(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm impl_IKeyDerivationParameters2<D>::Capi1KdfTargetAlgorithm() const
{
    Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value {};
    check_hresult(static_cast<const IKeyDerivationParameters2 &>(static_cast<const D &>(*this))->get_Capi1KdfTargetAlgorithm(&value));
    return value;
}

template <typename D> void impl_IKeyDerivationParameters2<D>::Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value) const
{
    check_hresult(static_cast<const IKeyDerivationParameters2 &>(static_cast<const D &>(*this))->put_Capi1KdfTargetAlgorithm(value));
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationParameters impl_IKeyDerivationParametersStatics<D>::BuildForPbkdf2(const Windows::Storage::Streams::IBuffer & pbkdf2Salt, uint32_t iterationCount) const
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters value { nullptr };
    check_hresult(static_cast<const IKeyDerivationParametersStatics &>(static_cast<const D &>(*this))->abi_BuildForPbkdf2(get(pbkdf2Salt), iterationCount, put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationParameters impl_IKeyDerivationParametersStatics<D>::BuildForSP800108(const Windows::Storage::Streams::IBuffer & label, const Windows::Storage::Streams::IBuffer & context) const
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters value { nullptr };
    check_hresult(static_cast<const IKeyDerivationParametersStatics &>(static_cast<const D &>(*this))->abi_BuildForSP800108(get(label), get(context), put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationParameters impl_IKeyDerivationParametersStatics<D>::BuildForSP80056a(const Windows::Storage::Streams::IBuffer & algorithmId, const Windows::Storage::Streams::IBuffer & partyUInfo, const Windows::Storage::Streams::IBuffer & partyVInfo, const Windows::Storage::Streams::IBuffer & suppPubInfo, const Windows::Storage::Streams::IBuffer & suppPrivInfo) const
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters value { nullptr };
    check_hresult(static_cast<const IKeyDerivationParametersStatics &>(static_cast<const D &>(*this))->abi_BuildForSP80056a(get(algorithmId), get(partyUInfo), get(partyVInfo), get(suppPubInfo), get(suppPrivInfo), put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationParameters impl_IKeyDerivationParametersStatics2<D>::BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm capi1KdfTargetAlgorithm) const
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters value { nullptr };
    check_hresult(static_cast<const IKeyDerivationParametersStatics2 &>(static_cast<const D &>(*this))->abi_BuildForCapi1Kdf(capi1KdfTargetAlgorithm, put(value)));
    return value;
}

template <typename D> uint32_t impl_ICryptographicKey<D>::KeySize() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICryptographicKey &>(static_cast<const D &>(*this))->get_KeySize(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicKey<D>::Export() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicKey &>(static_cast<const D &>(*this))->abi_ExportDefaultPrivateKeyBlobType(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicKey<D>::Export(Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicKey &>(static_cast<const D &>(*this))->abi_ExportPrivateKeyWithBlobType(BlobType, put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicKey<D>::ExportPublicKey() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicKey &>(static_cast<const D &>(*this))->abi_ExportDefaultPublicKeyBlobType(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicKey<D>::ExportPublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicKey &>(static_cast<const D &>(*this))->abi_ExportPublicKeyWithBlobType(BlobType, put(value)));
    return value;
}

template <typename D> void impl_IHashComputation<D>::Append(const Windows::Storage::Streams::IBuffer & data) const
{
    check_hresult(static_cast<const IHashComputation &>(static_cast<const D &>(*this))->abi_Append(get(data)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IHashComputation<D>::GetValueAndReset() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IHashComputation &>(static_cast<const D &>(*this))->abi_GetValueAndReset(put(value)));
    return value;
}

template <typename D> hstring impl_IHashAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value;
    check_hresult(static_cast<const IHashAlgorithmProvider &>(static_cast<const D &>(*this))->get_AlgorithmName(put(value)));
    return value;
}

template <typename D> uint32_t impl_IHashAlgorithmProvider<D>::HashLength() const
{
    uint32_t value {};
    check_hresult(static_cast<const IHashAlgorithmProvider &>(static_cast<const D &>(*this))->get_HashLength(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IHashAlgorithmProvider<D>::HashData(const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IHashAlgorithmProvider &>(static_cast<const D &>(*this))->abi_HashData(get(data), put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicHash impl_IHashAlgorithmProvider<D>::CreateHash() const
{
    Windows::Security::Cryptography::Core::CryptographicHash Value { nullptr };
    check_hresult(static_cast<const IHashAlgorithmProvider &>(static_cast<const D &>(*this))->abi_CreateHash(put(Value)));
    return Value;
}

template <typename D> hstring impl_IMacAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value;
    check_hresult(static_cast<const IMacAlgorithmProvider &>(static_cast<const D &>(*this))->get_AlgorithmName(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMacAlgorithmProvider<D>::MacLength() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMacAlgorithmProvider &>(static_cast<const D &>(*this))->get_MacLength(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IMacAlgorithmProvider<D>::CreateKey(const Windows::Storage::Streams::IBuffer & keyMaterial) const
{
    Windows::Security::Cryptography::Core::CryptographicKey macKey { nullptr };
    check_hresult(static_cast<const IMacAlgorithmProvider &>(static_cast<const D &>(*this))->abi_CreateKey(get(keyMaterial), put(macKey)));
    return macKey;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicHash impl_IMacAlgorithmProvider2<D>::CreateHash(const Windows::Storage::Streams::IBuffer & keyMaterial) const
{
    Windows::Security::Cryptography::Core::CryptographicHash value { nullptr };
    check_hresult(static_cast<const IMacAlgorithmProvider2 &>(static_cast<const D &>(*this))->abi_CreateHash(get(keyMaterial), put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmProvider &>(static_cast<const D &>(*this))->get_AlgorithmName(put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IKeyDerivationAlgorithmProvider<D>::CreateKey(const Windows::Storage::Streams::IBuffer & keyMaterial) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IKeyDerivationAlgorithmProvider &>(static_cast<const D &>(*this))->abi_CreateKey(get(keyMaterial), put(key)));
    return key;
}

template <typename D> hstring impl_ISymmetricKeyAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->get_AlgorithmName(put(value)));
    return value;
}

template <typename D> uint32_t impl_ISymmetricKeyAlgorithmProvider<D>::BlockLength() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->get_BlockLength(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_ISymmetricKeyAlgorithmProvider<D>::CreateSymmetricKey(const Windows::Storage::Streams::IBuffer & keyMaterial) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const ISymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->abi_CreateSymmetricKey(get(keyMaterial), put(key)));
    return key;
}

template <typename D> hstring impl_IAsymmetricKeyAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->get_AlgorithmName(put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IAsymmetricKeyAlgorithmProvider<D>::CreateKeyPair(uint32_t keySize) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->abi_CreateKeyPair(keySize, put(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IAsymmetricKeyAlgorithmProvider<D>::ImportKeyPair(const Windows::Storage::Streams::IBuffer & keyBlob) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->abi_ImportDefaultPrivateKeyBlob(get(keyBlob), put(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IAsymmetricKeyAlgorithmProvider<D>::ImportKeyPair(const Windows::Storage::Streams::IBuffer & keyBlob, Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->abi_ImportKeyPairWithBlobType(get(keyBlob), BlobType, put(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IAsymmetricKeyAlgorithmProvider<D>::ImportPublicKey(const Windows::Storage::Streams::IBuffer & keyBlob) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->abi_ImportDefaultPublicKeyBlob(get(keyBlob), put(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IAsymmetricKeyAlgorithmProvider<D>::ImportPublicKey(const Windows::Storage::Streams::IBuffer & keyBlob, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProvider &>(static_cast<const D &>(*this))->abi_ImportPublicKeyWithBlobType(get(keyBlob), BlobType, put(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IAsymmetricKeyAlgorithmProvider2<D>::CreateKeyPairWithCurveName(hstring_ref curveName) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProvider2 &>(static_cast<const D &>(*this))->abi_CreateKeyPairWithCurveName(get(curveName), put(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IAsymmetricKeyAlgorithmProvider2<D>::CreateKeyPairWithCurveParameters(array_ref<const uint8_t> parameters) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProvider2 &>(static_cast<const D &>(*this))->abi_CreateKeyPairWithCurveParameters(parameters.size(), get(parameters), put(key)));
    return key;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> impl_IPersistedKeyProviderStatics<D>::OpenKeyPairFromCertificateAsync(const Windows::Security::Cryptography::Certificates::Certificate & certificate, hstring_ref hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> operation;
    check_hresult(static_cast<const IPersistedKeyProviderStatics &>(static_cast<const D &>(*this))->abi_OpenKeyPairFromCertificateAsync(get(certificate), get(hashAlgorithmName), padding, put(operation)));
    return operation;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey impl_IPersistedKeyProviderStatics<D>::OpenPublicKeyFromCertificate(const Windows::Security::Cryptography::Certificates::Certificate & certificate, hstring_ref hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key { nullptr };
    check_hresult(static_cast<const IPersistedKeyProviderStatics &>(static_cast<const D &>(*this))->abi_OpenPublicKeyFromCertificate(get(certificate), get(hashAlgorithmName), padding, put(key)));
    return key;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IEncryptedAndAuthenticatedData<D>::EncryptedData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IEncryptedAndAuthenticatedData &>(static_cast<const D &>(*this))->get_EncryptedData(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IEncryptedAndAuthenticatedData<D>::AuthenticationTag() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IEncryptedAndAuthenticatedData &>(static_cast<const D &>(*this))->get_AuthenticationTag(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicEngineStatics<D>::Encrypt(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicEngineStatics &>(static_cast<const D &>(*this))->abi_Encrypt(get(key), get(data), get(iv), put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicEngineStatics<D>::Decrypt(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicEngineStatics &>(static_cast<const D &>(*this))->abi_Decrypt(get(key), get(data), get(iv), put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData impl_ICryptographicEngineStatics<D>::EncryptAndAuthenticate(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & nonce, const Windows::Storage::Streams::IBuffer & authenticatedData) const
{
    Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData value { nullptr };
    check_hresult(static_cast<const ICryptographicEngineStatics &>(static_cast<const D &>(*this))->abi_EncryptAndAuthenticate(get(key), get(data), get(nonce), get(authenticatedData), put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicEngineStatics<D>::DecryptAndAuthenticate(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & nonce, const Windows::Storage::Streams::IBuffer & authenticationTag, const Windows::Storage::Streams::IBuffer & authenticatedData) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicEngineStatics &>(static_cast<const D &>(*this))->abi_DecryptAndAuthenticate(get(key), get(data), get(nonce), get(authenticationTag), get(authenticatedData), put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicEngineStatics<D>::Sign(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicEngineStatics &>(static_cast<const D &>(*this))->abi_Sign(get(key), get(data), put(value)));
    return value;
}

template <typename D> bool impl_ICryptographicEngineStatics<D>::VerifySignature(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & signature) const
{
    bool isAuthenticated {};
    check_hresult(static_cast<const ICryptographicEngineStatics &>(static_cast<const D &>(*this))->abi_VerifySignature(get(key), get(data), get(signature), &isAuthenticated));
    return isAuthenticated;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicEngineStatics<D>::DeriveKeyMaterial(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Security::Cryptography::Core::KeyDerivationParameters & parameters, uint32_t desiredKeySize) const
{
    Windows::Storage::Streams::IBuffer keyMaterial;
    check_hresult(static_cast<const ICryptographicEngineStatics &>(static_cast<const D &>(*this))->abi_DeriveKeyMaterial(get(key), get(parameters), desiredKeySize, put(keyMaterial)));
    return keyMaterial;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ICryptographicEngineStatics2<D>::SignHashedData(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ICryptographicEngineStatics2 &>(static_cast<const D &>(*this))->abi_SignHashedData(get(key), get(data), put(value)));
    return value;
}

template <typename D> bool impl_ICryptographicEngineStatics2<D>::VerifySignatureWithHashInput(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & signature) const
{
    bool isAuthenticated {};
    check_hresult(static_cast<const ICryptographicEngineStatics2 &>(static_cast<const D &>(*this))->abi_VerifySignatureWithHashInput(get(key), get(data), get(signature), &isAuthenticated));
    return isAuthenticated;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_ICryptographicEngineStatics2<D>::DecryptAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value;
    check_hresult(static_cast<const ICryptographicEngineStatics2 &>(static_cast<const D &>(*this))->abi_DecryptAsync(get(key), get(data), get(iv), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_ICryptographicEngineStatics2<D>::SignAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value;
    check_hresult(static_cast<const ICryptographicEngineStatics2 &>(static_cast<const D &>(*this))->abi_SignAsync(get(key), get(data), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_ICryptographicEngineStatics2<D>::SignHashedDataAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value;
    check_hresult(static_cast<const ICryptographicEngineStatics2 &>(static_cast<const D &>(*this))->abi_SignHashedDataAsync(get(key), get(data), put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::HashAlgorithmProvider impl_IHashAlgorithmProviderStatics<D>::OpenAlgorithm(hstring_ref algorithm) const
{
    Windows::Security::Cryptography::Core::HashAlgorithmProvider provider { nullptr };
    check_hresult(static_cast<const IHashAlgorithmProviderStatics &>(static_cast<const D &>(*this))->abi_OpenAlgorithm(get(algorithm), put(provider)));
    return provider;
}

template <typename D> Windows::Security::Cryptography::Core::MacAlgorithmProvider impl_IMacAlgorithmProviderStatics<D>::OpenAlgorithm(hstring_ref algorithm) const
{
    Windows::Security::Cryptography::Core::MacAlgorithmProvider provider { nullptr };
    check_hresult(static_cast<const IMacAlgorithmProviderStatics &>(static_cast<const D &>(*this))->abi_OpenAlgorithm(get(algorithm), put(provider)));
    return provider;
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider impl_IKeyDerivationAlgorithmProviderStatics<D>::OpenAlgorithm(hstring_ref algorithm) const
{
    Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider provider { nullptr };
    check_hresult(static_cast<const IKeyDerivationAlgorithmProviderStatics &>(static_cast<const D &>(*this))->abi_OpenAlgorithm(get(algorithm), put(provider)));
    return provider;
}

template <typename D> Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider impl_ISymmetricKeyAlgorithmProviderStatics<D>::OpenAlgorithm(hstring_ref algorithm) const
{
    Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider provider { nullptr };
    check_hresult(static_cast<const ISymmetricKeyAlgorithmProviderStatics &>(static_cast<const D &>(*this))->abi_OpenAlgorithm(get(algorithm), put(provider)));
    return provider;
}

template <typename D> Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider impl_IAsymmetricKeyAlgorithmProviderStatics<D>::OpenAlgorithm(hstring_ref algorithm) const
{
    Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider provider { nullptr };
    check_hresult(static_cast<const IAsymmetricKeyAlgorithmProviderStatics &>(static_cast<const D &>(*this))->abi_OpenAlgorithm(get(algorithm), put(provider)));
    return provider;
}

template <typename D> hstring impl_IHashAlgorithmNamesStatics<D>::Md5() const
{
    hstring value;
    check_hresult(static_cast<const IHashAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Md5(put(value)));
    return value;
}

template <typename D> hstring impl_IHashAlgorithmNamesStatics<D>::Sha1() const
{
    hstring value;
    check_hresult(static_cast<const IHashAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sha1(put(value)));
    return value;
}

template <typename D> hstring impl_IHashAlgorithmNamesStatics<D>::Sha256() const
{
    hstring value;
    check_hresult(static_cast<const IHashAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sha256(put(value)));
    return value;
}

template <typename D> hstring impl_IHashAlgorithmNamesStatics<D>::Sha384() const
{
    hstring value;
    check_hresult(static_cast<const IHashAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sha384(put(value)));
    return value;
}

template <typename D> hstring impl_IHashAlgorithmNamesStatics<D>::Sha512() const
{
    hstring value;
    check_hresult(static_cast<const IHashAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sha512(put(value)));
    return value;
}

template <typename D> hstring impl_IMacAlgorithmNamesStatics<D>::HmacMd5() const
{
    hstring value;
    check_hresult(static_cast<const IMacAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_HmacMd5(put(value)));
    return value;
}

template <typename D> hstring impl_IMacAlgorithmNamesStatics<D>::HmacSha1() const
{
    hstring value;
    check_hresult(static_cast<const IMacAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_HmacSha1(put(value)));
    return value;
}

template <typename D> hstring impl_IMacAlgorithmNamesStatics<D>::HmacSha256() const
{
    hstring value;
    check_hresult(static_cast<const IMacAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_HmacSha256(put(value)));
    return value;
}

template <typename D> hstring impl_IMacAlgorithmNamesStatics<D>::HmacSha384() const
{
    hstring value;
    check_hresult(static_cast<const IMacAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_HmacSha384(put(value)));
    return value;
}

template <typename D> hstring impl_IMacAlgorithmNamesStatics<D>::HmacSha512() const
{
    hstring value;
    check_hresult(static_cast<const IMacAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_HmacSha512(put(value)));
    return value;
}

template <typename D> hstring impl_IMacAlgorithmNamesStatics<D>::AesCmac() const
{
    hstring value;
    check_hresult(static_cast<const IMacAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_AesCmac(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::DesCbc() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_DesCbc(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::DesEcb() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_DesEcb(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::TripleDesCbc() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_TripleDesCbc(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::TripleDesEcb() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_TripleDesEcb(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::Rc2Cbc() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Rc2Cbc(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::Rc2Ecb() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Rc2Ecb(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::AesCbc() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_AesCbc(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::AesEcb() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_AesEcb(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::AesGcm() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_AesGcm(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::AesCcm() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_AesCcm(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::AesCbcPkcs7() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_AesCbcPkcs7(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::AesEcbPkcs7() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_AesEcbPkcs7(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::DesCbcPkcs7() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_DesCbcPkcs7(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::DesEcbPkcs7() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_DesEcbPkcs7(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::TripleDesCbcPkcs7() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_TripleDesCbcPkcs7(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::TripleDesEcbPkcs7() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_TripleDesEcbPkcs7(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::Rc2CbcPkcs7() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Rc2CbcPkcs7(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::Rc2EcbPkcs7() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Rc2EcbPkcs7(put(value)));
    return value;
}

template <typename D> hstring impl_ISymmetricAlgorithmNamesStatics<D>::Rc4() const
{
    hstring value;
    check_hresult(static_cast<const ISymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Rc4(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaPkcs1() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaPkcs1(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha1() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaOaepSha1(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha256() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaOaepSha256(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha384() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaOaepSha384(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha512() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaOaepSha512(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP256Sha256() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_EcdsaP256Sha256(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP384Sha384() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_EcdsaP384Sha384(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP521Sha512() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_EcdsaP521Sha512(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::DsaSha1() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_DsaSha1(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::DsaSha256() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_DsaSha256(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha1() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaSignPkcs1Sha1(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha256() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaSignPkcs1Sha256(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha384() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaSignPkcs1Sha384(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha512() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaSignPkcs1Sha512(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha1() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaSignPssSha1(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha256() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaSignPssSha256(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha384() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaSignPssSha384(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha512() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_RsaSignPssSha512(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha256() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics2 &>(static_cast<const D &>(*this))->get_EcdsaSha256(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha384() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics2 &>(static_cast<const D &>(*this))->get_EcdsaSha384(put(value)));
    return value;
}

template <typename D> hstring impl_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha512() const
{
    hstring value;
    check_hresult(static_cast<const IAsymmetricAlgorithmNamesStatics2 &>(static_cast<const D &>(*this))->get_EcdsaSha512(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP160r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP160r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP160t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP160t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP192r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP192r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP192t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP192t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP224r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP224r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP224t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP224t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP256r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP256r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP256t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP256t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP320r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP320r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP320t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP320t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP384r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP384r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP384t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP384t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP512r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP512r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::BrainpoolP512t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_BrainpoolP512t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::Curve25519() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_Curve25519(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::Ec192wapi() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_Ec192wapi(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::NistP192() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_NistP192(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::NistP224() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_NistP224(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::NistP256() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_NistP256(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::NistP384() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_NistP384(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::NistP521() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_NistP521(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::NumsP256t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_NumsP256t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::NumsP384t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_NumsP384t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::NumsP512t1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_NumsP512t1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP160k1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP160k1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP160r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP160r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP160r2() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP160r2(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP192k1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP192k1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP192r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP192r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP224k1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP224k1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP224r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP224r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP256k1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP256k1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP256r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP256r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP384r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP384r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::SecP521r1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_SecP521r1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::Wtls7() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_Wtls7(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::Wtls9() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_Wtls9(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::Wtls12() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_Wtls12(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::X962P192v1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_X962P192v1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::X962P192v2() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_X962P192v2(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::X962P192v3() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_X962P192v3(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::X962P239v1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_X962P239v1(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::X962P239v2() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_X962P239v2(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::X962P239v3() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_X962P239v3(put(value)));
    return value;
}

template <typename D> hstring impl_IEccCurveNamesStatics<D>::X962P256v1() const
{
    hstring value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_X962P256v1(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IEccCurveNamesStatics<D>::AllEccCurveNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IEccCurveNamesStatics &>(static_cast<const D &>(*this))->get_AllEccCurveNames(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Md5() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Pbkdf2Md5(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha1() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Pbkdf2Sha1(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha256() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Pbkdf2Sha256(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha384() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Pbkdf2Sha384(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha512() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Pbkdf2Sha512(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacMd5() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp800108CtrHmacMd5(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha1() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp800108CtrHmacSha1(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha256() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp800108CtrHmacSha256(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha384() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp800108CtrHmacSha384(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha512() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp800108CtrHmacSha512(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatMd5() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp80056aConcatMd5(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha1() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp80056aConcatSha1(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha256() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp80056aConcatSha256(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha384() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp80056aConcatSha384(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha512() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics &>(static_cast<const D &>(*this))->get_Sp80056aConcatSha512(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfMd5() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics2 &>(static_cast<const D &>(*this))->get_CapiKdfMd5(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha1() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics2 &>(static_cast<const D &>(*this))->get_CapiKdfSha1(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha256() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics2 &>(static_cast<const D &>(*this))->get_CapiKdfSha256(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha384() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics2 &>(static_cast<const D &>(*this))->get_CapiKdfSha384(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha512() const
{
    hstring value;
    check_hresult(static_cast<const IKeyDerivationAlgorithmNamesStatics2 &>(static_cast<const D &>(*this))->get_CapiKdfSha512(put(value)));
    return value;
}

inline hstring AsymmetricAlgorithmNames::RsaPkcs1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaPkcs1();
}

inline hstring AsymmetricAlgorithmNames::RsaOaepSha1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaOaepSha1();
}

inline hstring AsymmetricAlgorithmNames::RsaOaepSha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaOaepSha256();
}

inline hstring AsymmetricAlgorithmNames::RsaOaepSha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaOaepSha384();
}

inline hstring AsymmetricAlgorithmNames::RsaOaepSha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaOaepSha512();
}

inline hstring AsymmetricAlgorithmNames::EcdsaP256Sha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().EcdsaP256Sha256();
}

inline hstring AsymmetricAlgorithmNames::EcdsaP384Sha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().EcdsaP384Sha384();
}

inline hstring AsymmetricAlgorithmNames::EcdsaP521Sha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().EcdsaP521Sha512();
}

inline hstring AsymmetricAlgorithmNames::DsaSha1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().DsaSha1();
}

inline hstring AsymmetricAlgorithmNames::DsaSha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().DsaSha256();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPkcs1Sha1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaSignPkcs1Sha1();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPkcs1Sha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaSignPkcs1Sha256();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPkcs1Sha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaSignPkcs1Sha384();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPkcs1Sha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaSignPkcs1Sha512();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPssSha1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaSignPssSha1();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPssSha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaSignPssSha256();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPssSha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaSignPssSha384();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPssSha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics>().RsaSignPssSha512();
}

inline hstring AsymmetricAlgorithmNames::EcdsaSha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics2>().EcdsaSha256();
}

inline hstring AsymmetricAlgorithmNames::EcdsaSha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics2>().EcdsaSha384();
}

inline hstring AsymmetricAlgorithmNames::EcdsaSha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, IAsymmetricAlgorithmNamesStatics2>().EcdsaSha512();
}

inline Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider AsymmetricKeyAlgorithmProvider::OpenAlgorithm(hstring_ref algorithm)
{
    return get_activation_factory<AsymmetricKeyAlgorithmProvider, IAsymmetricKeyAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::Encrypt(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics>().Encrypt(key, data, iv);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::Decrypt(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics>().Decrypt(key, data, iv);
}

inline Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData CryptographicEngine::EncryptAndAuthenticate(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & nonce, const Windows::Storage::Streams::IBuffer & authenticatedData)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics>().EncryptAndAuthenticate(key, data, nonce, authenticatedData);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::DecryptAndAuthenticate(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & nonce, const Windows::Storage::Streams::IBuffer & authenticationTag, const Windows::Storage::Streams::IBuffer & authenticatedData)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics>().DecryptAndAuthenticate(key, data, nonce, authenticationTag, authenticatedData);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::Sign(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics>().Sign(key, data);
}

inline bool CryptographicEngine::VerifySignature(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & signature)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics>().VerifySignature(key, data, signature);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::DeriveKeyMaterial(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Security::Cryptography::Core::KeyDerivationParameters & parameters, uint32_t desiredKeySize)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics>().DeriveKeyMaterial(key, parameters, desiredKeySize);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::SignHashedData(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics2>().SignHashedData(key, data);
}

inline bool CryptographicEngine::VerifySignatureWithHashInput(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & signature)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics2>().VerifySignatureWithHashInput(key, data, signature);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CryptographicEngine::DecryptAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics2>().DecryptAsync(key, data, iv);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CryptographicEngine::SignAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics2>().SignAsync(key, data);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CryptographicEngine::SignHashedDataAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data)
{
    return get_activation_factory<CryptographicEngine, ICryptographicEngineStatics2>().SignHashedDataAsync(key, data);
}

inline hstring EccCurveNames::BrainpoolP160r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP160r1();
}

inline hstring EccCurveNames::BrainpoolP160t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP160t1();
}

inline hstring EccCurveNames::BrainpoolP192r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP192r1();
}

inline hstring EccCurveNames::BrainpoolP192t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP192t1();
}

inline hstring EccCurveNames::BrainpoolP224r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP224r1();
}

inline hstring EccCurveNames::BrainpoolP224t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP224t1();
}

inline hstring EccCurveNames::BrainpoolP256r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP256r1();
}

inline hstring EccCurveNames::BrainpoolP256t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP256t1();
}

inline hstring EccCurveNames::BrainpoolP320r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP320r1();
}

inline hstring EccCurveNames::BrainpoolP320t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP320t1();
}

inline hstring EccCurveNames::BrainpoolP384r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP384r1();
}

inline hstring EccCurveNames::BrainpoolP384t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP384t1();
}

inline hstring EccCurveNames::BrainpoolP512r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP512r1();
}

inline hstring EccCurveNames::BrainpoolP512t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().BrainpoolP512t1();
}

inline hstring EccCurveNames::Curve25519()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().Curve25519();
}

inline hstring EccCurveNames::Ec192wapi()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().Ec192wapi();
}

inline hstring EccCurveNames::NistP192()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().NistP192();
}

inline hstring EccCurveNames::NistP224()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().NistP224();
}

inline hstring EccCurveNames::NistP256()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().NistP256();
}

inline hstring EccCurveNames::NistP384()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().NistP384();
}

inline hstring EccCurveNames::NistP521()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().NistP521();
}

inline hstring EccCurveNames::NumsP256t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().NumsP256t1();
}

inline hstring EccCurveNames::NumsP384t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().NumsP384t1();
}

inline hstring EccCurveNames::NumsP512t1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().NumsP512t1();
}

inline hstring EccCurveNames::SecP160k1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP160k1();
}

inline hstring EccCurveNames::SecP160r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP160r1();
}

inline hstring EccCurveNames::SecP160r2()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP160r2();
}

inline hstring EccCurveNames::SecP192k1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP192k1();
}

inline hstring EccCurveNames::SecP192r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP192r1();
}

inline hstring EccCurveNames::SecP224k1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP224k1();
}

inline hstring EccCurveNames::SecP224r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP224r1();
}

inline hstring EccCurveNames::SecP256k1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP256k1();
}

inline hstring EccCurveNames::SecP256r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP256r1();
}

inline hstring EccCurveNames::SecP384r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP384r1();
}

inline hstring EccCurveNames::SecP521r1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().SecP521r1();
}

inline hstring EccCurveNames::Wtls7()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().Wtls7();
}

inline hstring EccCurveNames::Wtls9()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().Wtls9();
}

inline hstring EccCurveNames::Wtls12()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().Wtls12();
}

inline hstring EccCurveNames::X962P192v1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().X962P192v1();
}

inline hstring EccCurveNames::X962P192v2()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().X962P192v2();
}

inline hstring EccCurveNames::X962P192v3()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().X962P192v3();
}

inline hstring EccCurveNames::X962P239v1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().X962P239v1();
}

inline hstring EccCurveNames::X962P239v2()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().X962P239v2();
}

inline hstring EccCurveNames::X962P239v3()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().X962P239v3();
}

inline hstring EccCurveNames::X962P256v1()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().X962P256v1();
}

inline Windows::Foundation::Collections::IVectorView<hstring> EccCurveNames::AllEccCurveNames()
{
    return get_activation_factory<EccCurveNames, IEccCurveNamesStatics>().AllEccCurveNames();
}

inline hstring HashAlgorithmNames::Md5()
{
    return get_activation_factory<HashAlgorithmNames, IHashAlgorithmNamesStatics>().Md5();
}

inline hstring HashAlgorithmNames::Sha1()
{
    return get_activation_factory<HashAlgorithmNames, IHashAlgorithmNamesStatics>().Sha1();
}

inline hstring HashAlgorithmNames::Sha256()
{
    return get_activation_factory<HashAlgorithmNames, IHashAlgorithmNamesStatics>().Sha256();
}

inline hstring HashAlgorithmNames::Sha384()
{
    return get_activation_factory<HashAlgorithmNames, IHashAlgorithmNamesStatics>().Sha384();
}

inline hstring HashAlgorithmNames::Sha512()
{
    return get_activation_factory<HashAlgorithmNames, IHashAlgorithmNamesStatics>().Sha512();
}

inline Windows::Security::Cryptography::Core::HashAlgorithmProvider HashAlgorithmProvider::OpenAlgorithm(hstring_ref algorithm)
{
    return get_activation_factory<HashAlgorithmProvider, IHashAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Md5()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Md5();
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Sha1()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Sha1();
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Sha256()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Sha256();
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Sha384()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Sha384();
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Sha512()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Sha512();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacMd5()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacMd5();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacSha1()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacSha1();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacSha256()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacSha256();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacSha384()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacSha384();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacSha512()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacSha512();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatMd5()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatMd5();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatSha1()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatSha1();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatSha256()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatSha256();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatSha384()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatSha384();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatSha512()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatSha512();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfMd5()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics2>().CapiKdfMd5();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfSha1()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics2>().CapiKdfSha1();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfSha256()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics2>().CapiKdfSha256();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfSha384()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics2>().CapiKdfSha384();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfSha512()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, IKeyDerivationAlgorithmNamesStatics2>().CapiKdfSha512();
}

inline Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider KeyDerivationAlgorithmProvider::OpenAlgorithm(hstring_ref algorithm)
{
    return get_activation_factory<KeyDerivationAlgorithmProvider, IKeyDerivationAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

inline Windows::Security::Cryptography::Core::KeyDerivationParameters KeyDerivationParameters::BuildForPbkdf2(const Windows::Storage::Streams::IBuffer & pbkdf2Salt, uint32_t iterationCount)
{
    return get_activation_factory<KeyDerivationParameters, IKeyDerivationParametersStatics>().BuildForPbkdf2(pbkdf2Salt, iterationCount);
}

inline Windows::Security::Cryptography::Core::KeyDerivationParameters KeyDerivationParameters::BuildForSP800108(const Windows::Storage::Streams::IBuffer & label, const Windows::Storage::Streams::IBuffer & context)
{
    return get_activation_factory<KeyDerivationParameters, IKeyDerivationParametersStatics>().BuildForSP800108(label, context);
}

inline Windows::Security::Cryptography::Core::KeyDerivationParameters KeyDerivationParameters::BuildForSP80056a(const Windows::Storage::Streams::IBuffer & algorithmId, const Windows::Storage::Streams::IBuffer & partyUInfo, const Windows::Storage::Streams::IBuffer & partyVInfo, const Windows::Storage::Streams::IBuffer & suppPubInfo, const Windows::Storage::Streams::IBuffer & suppPrivInfo)
{
    return get_activation_factory<KeyDerivationParameters, IKeyDerivationParametersStatics>().BuildForSP80056a(algorithmId, partyUInfo, partyVInfo, suppPubInfo, suppPrivInfo);
}

inline Windows::Security::Cryptography::Core::KeyDerivationParameters KeyDerivationParameters::BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm capi1KdfTargetAlgorithm)
{
    return get_activation_factory<KeyDerivationParameters, IKeyDerivationParametersStatics2>().BuildForCapi1Kdf(capi1KdfTargetAlgorithm);
}

inline hstring MacAlgorithmNames::HmacMd5()
{
    return get_activation_factory<MacAlgorithmNames, IMacAlgorithmNamesStatics>().HmacMd5();
}

inline hstring MacAlgorithmNames::HmacSha1()
{
    return get_activation_factory<MacAlgorithmNames, IMacAlgorithmNamesStatics>().HmacSha1();
}

inline hstring MacAlgorithmNames::HmacSha256()
{
    return get_activation_factory<MacAlgorithmNames, IMacAlgorithmNamesStatics>().HmacSha256();
}

inline hstring MacAlgorithmNames::HmacSha384()
{
    return get_activation_factory<MacAlgorithmNames, IMacAlgorithmNamesStatics>().HmacSha384();
}

inline hstring MacAlgorithmNames::HmacSha512()
{
    return get_activation_factory<MacAlgorithmNames, IMacAlgorithmNamesStatics>().HmacSha512();
}

inline hstring MacAlgorithmNames::AesCmac()
{
    return get_activation_factory<MacAlgorithmNames, IMacAlgorithmNamesStatics>().AesCmac();
}

inline Windows::Security::Cryptography::Core::MacAlgorithmProvider MacAlgorithmProvider::OpenAlgorithm(hstring_ref algorithm)
{
    return get_activation_factory<MacAlgorithmProvider, IMacAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> PersistedKeyProvider::OpenKeyPairFromCertificateAsync(const Windows::Security::Cryptography::Certificates::Certificate & certificate, hstring_ref hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding)
{
    return get_activation_factory<PersistedKeyProvider, IPersistedKeyProviderStatics>().OpenKeyPairFromCertificateAsync(certificate, hashAlgorithmName, padding);
}

inline Windows::Security::Cryptography::Core::CryptographicKey PersistedKeyProvider::OpenPublicKeyFromCertificate(const Windows::Security::Cryptography::Certificates::Certificate & certificate, hstring_ref hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding)
{
    return get_activation_factory<PersistedKeyProvider, IPersistedKeyProviderStatics>().OpenPublicKeyFromCertificate(certificate, hashAlgorithmName, padding);
}

inline hstring SymmetricAlgorithmNames::DesCbc()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().DesCbc();
}

inline hstring SymmetricAlgorithmNames::DesEcb()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().DesEcb();
}

inline hstring SymmetricAlgorithmNames::TripleDesCbc()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().TripleDesCbc();
}

inline hstring SymmetricAlgorithmNames::TripleDesEcb()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().TripleDesEcb();
}

inline hstring SymmetricAlgorithmNames::Rc2Cbc()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().Rc2Cbc();
}

inline hstring SymmetricAlgorithmNames::Rc2Ecb()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().Rc2Ecb();
}

inline hstring SymmetricAlgorithmNames::AesCbc()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().AesCbc();
}

inline hstring SymmetricAlgorithmNames::AesEcb()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().AesEcb();
}

inline hstring SymmetricAlgorithmNames::AesGcm()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().AesGcm();
}

inline hstring SymmetricAlgorithmNames::AesCcm()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().AesCcm();
}

inline hstring SymmetricAlgorithmNames::AesCbcPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().AesCbcPkcs7();
}

inline hstring SymmetricAlgorithmNames::AesEcbPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().AesEcbPkcs7();
}

inline hstring SymmetricAlgorithmNames::DesCbcPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().DesCbcPkcs7();
}

inline hstring SymmetricAlgorithmNames::DesEcbPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().DesEcbPkcs7();
}

inline hstring SymmetricAlgorithmNames::TripleDesCbcPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().TripleDesCbcPkcs7();
}

inline hstring SymmetricAlgorithmNames::TripleDesEcbPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().TripleDesEcbPkcs7();
}

inline hstring SymmetricAlgorithmNames::Rc2CbcPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().Rc2CbcPkcs7();
}

inline hstring SymmetricAlgorithmNames::Rc2EcbPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().Rc2EcbPkcs7();
}

inline hstring SymmetricAlgorithmNames::Rc4()
{
    return get_activation_factory<SymmetricAlgorithmNames, ISymmetricAlgorithmNamesStatics>().Rc4();
}

inline Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider SymmetricKeyAlgorithmProvider::OpenAlgorithm(hstring_ref algorithm)
{
    return get_activation_factory<SymmetricKeyAlgorithmProvider, ISymmetricKeyAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

}

}
