// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Security.Cryptography.Core.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Cryptography::Core {

struct __declspec(uuid("caf6fce4-67c0-46aa-84f9-752e77449f9b")) __declspec(novtable) IAsymmetricAlgorithmNamesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RsaPkcs1(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaOaepSha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaOaepSha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaOaepSha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaOaepSha512(hstring * value) = 0;
    virtual HRESULT __stdcall get_EcdsaP256Sha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_EcdsaP384Sha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_EcdsaP521Sha512(hstring * value) = 0;
    virtual HRESULT __stdcall get_DsaSha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_DsaSha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaSignPkcs1Sha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaSignPkcs1Sha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaSignPkcs1Sha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaSignPkcs1Sha512(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaSignPssSha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaSignPssSha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaSignPssSha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_RsaSignPssSha512(hstring * value) = 0;
};

struct __declspec(uuid("f141c0d6-4bff-4f23-ba66-6045b137d5df")) __declspec(novtable) IAsymmetricAlgorithmNamesStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EcdsaSha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_EcdsaSha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_EcdsaSha512(hstring * value) = 0;
};

struct __declspec(uuid("e8d2ff37-6259-4e88-b7e0-94191fde699e")) __declspec(novtable) IAsymmetricKeyAlgorithmProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(hstring * value) = 0;
    virtual HRESULT __stdcall abi_CreateKeyPair(uint32_t keySize, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
    virtual HRESULT __stdcall abi_ImportDefaultPrivateKeyBlob(Windows::Storage::Streams::IBuffer * keyBlob, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
    virtual HRESULT __stdcall abi_ImportKeyPairWithBlobType(Windows::Storage::Streams::IBuffer * keyBlob, winrt::Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
    virtual HRESULT __stdcall abi_ImportDefaultPublicKeyBlob(Windows::Storage::Streams::IBuffer * keyBlob, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
    virtual HRESULT __stdcall abi_ImportPublicKeyWithBlobType(Windows::Storage::Streams::IBuffer * keyBlob, winrt::Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
};

struct __declspec(uuid("4e322a7e-7c4d-4997-ac4f-1b848b36306e")) __declspec(novtable) IAsymmetricKeyAlgorithmProvider2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateKeyPairWithCurveName(hstring curveName, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
    virtual HRESULT __stdcall abi_CreateKeyPairWithCurveParameters(uint32_t __parametersSize, uint8_t * parameters, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
};

struct __declspec(uuid("425bde18-a7f3-47a6-a8d2-c48d6033a65c")) __declspec(novtable) IAsymmetricKeyAlgorithmProviderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenAlgorithm(hstring algorithm, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider ** provider) = 0;
};

struct __declspec(uuid("9fea0639-6ff7-4c85-a095-95eb31715eb9")) __declspec(novtable) ICryptographicEngineStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Encrypt(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer * iv, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_Decrypt(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer * iv, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_EncryptAndAuthenticate(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer * nonce, Windows::Storage::Streams::IBuffer * authenticatedData, Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData ** value) = 0;
    virtual HRESULT __stdcall abi_DecryptAndAuthenticate(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer * nonce, Windows::Storage::Streams::IBuffer * authenticationTag, Windows::Storage::Streams::IBuffer * authenticatedData, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_Sign(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_VerifySignature(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer * signature, bool * isAuthenticated) = 0;
    virtual HRESULT __stdcall abi_DeriveKeyMaterial(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Security::Cryptography::Core::IKeyDerivationParameters * parameters, uint32_t desiredKeySize, Windows::Storage::Streams::IBuffer ** keyMaterial) = 0;
};

struct __declspec(uuid("675948fe-df9f-4191-92c7-6ce6f58420e0")) __declspec(novtable) ICryptographicEngineStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SignHashedData(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_VerifySignatureWithHashInput(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer * signature, bool * isAuthenticated) = 0;
    virtual HRESULT __stdcall abi_DecryptAsync(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer * iv, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** value) = 0;
    virtual HRESULT __stdcall abi_SignAsync(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** value) = 0;
    virtual HRESULT __stdcall abi_SignHashedDataAsync(Windows::Security::Cryptography::Core::ICryptographicKey * key, Windows::Storage::Streams::IBuffer * data, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** value) = 0;
};

struct __declspec(uuid("ed2a3b70-8e7b-4009-8401-ffd1a62eeb27")) __declspec(novtable) ICryptographicKey : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeySize(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_ExportDefaultPrivateKeyBlobType(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_ExportPrivateKeyWithBlobType(winrt::Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_ExportDefaultPublicKeyBlobType(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_ExportPublicKeyWithBlobType(winrt::Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType, Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("b3ff930c-aeeb-409e-b7d4-9b95295aaecf")) __declspec(novtable) IEccCurveNamesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BrainpoolP160r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP160t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP192r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP192t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP224r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP224t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP256r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP256t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP320r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP320t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP384r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP384t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP512r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_BrainpoolP512t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Curve25519(hstring * value) = 0;
    virtual HRESULT __stdcall get_Ec192wapi(hstring * value) = 0;
    virtual HRESULT __stdcall get_NistP192(hstring * value) = 0;
    virtual HRESULT __stdcall get_NistP224(hstring * value) = 0;
    virtual HRESULT __stdcall get_NistP256(hstring * value) = 0;
    virtual HRESULT __stdcall get_NistP384(hstring * value) = 0;
    virtual HRESULT __stdcall get_NistP521(hstring * value) = 0;
    virtual HRESULT __stdcall get_NumsP256t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_NumsP384t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_NumsP512t1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP160k1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP160r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP160r2(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP192k1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP192r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP224k1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP224r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP256k1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP256r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP384r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_SecP521r1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Wtls7(hstring * value) = 0;
    virtual HRESULT __stdcall get_Wtls9(hstring * value) = 0;
    virtual HRESULT __stdcall get_Wtls12(hstring * value) = 0;
    virtual HRESULT __stdcall get_X962P192v1(hstring * value) = 0;
    virtual HRESULT __stdcall get_X962P192v2(hstring * value) = 0;
    virtual HRESULT __stdcall get_X962P192v3(hstring * value) = 0;
    virtual HRESULT __stdcall get_X962P239v1(hstring * value) = 0;
    virtual HRESULT __stdcall get_X962P239v2(hstring * value) = 0;
    virtual HRESULT __stdcall get_X962P239v3(hstring * value) = 0;
    virtual HRESULT __stdcall get_X962P256v1(hstring * value) = 0;
    virtual HRESULT __stdcall get_AllEccCurveNames(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("6fa42fe7-1ecb-4b00-bea5-60b83f862f17")) __declspec(novtable) IEncryptedAndAuthenticatedData : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EncryptedData(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationTag(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("6b5e0516-de96-4f0a-8d57-dcc9dae36c76")) __declspec(novtable) IHashAlgorithmNamesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Md5(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sha512(hstring * value) = 0;
};

struct __declspec(uuid("be9b3080-b2c3-422b-bce1-ec90efb5d7b5")) __declspec(novtable) IHashAlgorithmProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(hstring * value) = 0;
    virtual HRESULT __stdcall get_HashLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_HashData(Windows::Storage::Streams::IBuffer * data, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_CreateHash(Windows::Security::Cryptography::Core::IHashComputation ** Value) = 0;
};

struct __declspec(uuid("9fac9741-5cc4-4336-ae38-6212b75a915a")) __declspec(novtable) IHashAlgorithmProviderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenAlgorithm(hstring algorithm, Windows::Security::Cryptography::Core::IHashAlgorithmProvider ** provider) = 0;
};

struct __declspec(uuid("5904d1b6-ad31-4603-a3a4-b1bda98e2562")) __declspec(novtable) IHashComputation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Append(Windows::Storage::Streams::IBuffer * data) = 0;
    virtual HRESULT __stdcall abi_GetValueAndReset(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("7b6e363e-94d2-4739-a57b-022e0c3a402a")) __declspec(novtable) IKeyDerivationAlgorithmNamesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Pbkdf2Md5(hstring * value) = 0;
    virtual HRESULT __stdcall get_Pbkdf2Sha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Pbkdf2Sha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_Pbkdf2Sha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_Pbkdf2Sha512(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacMd5(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacSha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacSha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacSha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp800108CtrHmacSha512(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatMd5(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatSha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatSha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatSha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sp80056aConcatSha512(hstring * value) = 0;
};

struct __declspec(uuid("57953fab-6044-466f-97f4-337b7808384d")) __declspec(novtable) IKeyDerivationAlgorithmNamesStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CapiKdfMd5(hstring * value) = 0;
    virtual HRESULT __stdcall get_CapiKdfSha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_CapiKdfSha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_CapiKdfSha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_CapiKdfSha512(hstring * value) = 0;
};

struct __declspec(uuid("e1fba83b-4671-43b7-9158-763aaa98b6bf")) __declspec(novtable) IKeyDerivationAlgorithmProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(hstring * value) = 0;
    virtual HRESULT __stdcall abi_CreateKey(Windows::Storage::Streams::IBuffer * keyMaterial, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
};

struct __declspec(uuid("0a22097a-0a1c-443b-9418-b9498aeb1603")) __declspec(novtable) IKeyDerivationAlgorithmProviderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenAlgorithm(hstring algorithm, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider ** provider) = 0;
};

struct __declspec(uuid("7bf05967-047b-4a8c-964a-469ffd5522e2")) __declspec(novtable) IKeyDerivationParameters : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KdfGenericBinary(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall put_KdfGenericBinary(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall get_IterationCount(uint32_t * value) = 0;
};

struct __declspec(uuid("cd4166d1-417e-4f4c-b666-c0d879f3f8e0")) __declspec(novtable) IKeyDerivationParameters2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Capi1KdfTargetAlgorithm(winrt::Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm * value) = 0;
    virtual HRESULT __stdcall put_Capi1KdfTargetAlgorithm(winrt::Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value) = 0;
};

struct __declspec(uuid("ea961fbe-f37f-4146-9dfe-a456f1735f4b")) __declspec(novtable) IKeyDerivationParametersStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_BuildForPbkdf2(Windows::Storage::Streams::IBuffer * pbkdf2Salt, uint32_t iterationCount, Windows::Security::Cryptography::Core::IKeyDerivationParameters ** value) = 0;
    virtual HRESULT __stdcall abi_BuildForSP800108(Windows::Storage::Streams::IBuffer * label, Windows::Storage::Streams::IBuffer * context, Windows::Security::Cryptography::Core::IKeyDerivationParameters ** value) = 0;
    virtual HRESULT __stdcall abi_BuildForSP80056a(Windows::Storage::Streams::IBuffer * algorithmId, Windows::Storage::Streams::IBuffer * partyUInfo, Windows::Storage::Streams::IBuffer * partyVInfo, Windows::Storage::Streams::IBuffer * suppPubInfo, Windows::Storage::Streams::IBuffer * suppPrivInfo, Windows::Security::Cryptography::Core::IKeyDerivationParameters ** value) = 0;
};

struct __declspec(uuid("a5783dd5-58e3-4efb-b283-a1653126e1be")) __declspec(novtable) IKeyDerivationParametersStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_BuildForCapi1Kdf(winrt::Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm capi1KdfTargetAlgorithm, Windows::Security::Cryptography::Core::IKeyDerivationParameters ** value) = 0;
};

struct __declspec(uuid("41412678-fb1e-43a4-895e-a9026e4390a3")) __declspec(novtable) IMacAlgorithmNamesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HmacMd5(hstring * value) = 0;
    virtual HRESULT __stdcall get_HmacSha1(hstring * value) = 0;
    virtual HRESULT __stdcall get_HmacSha256(hstring * value) = 0;
    virtual HRESULT __stdcall get_HmacSha384(hstring * value) = 0;
    virtual HRESULT __stdcall get_HmacSha512(hstring * value) = 0;
    virtual HRESULT __stdcall get_AesCmac(hstring * value) = 0;
};

struct __declspec(uuid("4a3fc5c3-1cbd-41ce-a092-aa0bc5d2d2f5")) __declspec(novtable) IMacAlgorithmProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(hstring * value) = 0;
    virtual HRESULT __stdcall get_MacLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_CreateKey(Windows::Storage::Streams::IBuffer * keyMaterial, Windows::Security::Cryptography::Core::ICryptographicKey ** macKey) = 0;
};

struct __declspec(uuid("6da32a15-d931-42ed-8e7e-c301caee119c")) __declspec(novtable) IMacAlgorithmProvider2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateHash(Windows::Storage::Streams::IBuffer * keyMaterial, Windows::Security::Cryptography::Core::IHashComputation ** value) = 0;
};

struct __declspec(uuid("c9bdc147-cc77-4df0-9e4e-b921e080644c")) __declspec(novtable) IMacAlgorithmProviderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenAlgorithm(hstring algorithm, Windows::Security::Cryptography::Core::IMacAlgorithmProvider ** provider) = 0;
};

struct __declspec(uuid("77274814-d9d4-4cf5-b668-e0457df30894")) __declspec(novtable) IPersistedKeyProviderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenKeyPairFromCertificateAsync(Windows::Security::Cryptography::Certificates::ICertificate * certificate, hstring hashAlgorithmName, winrt::Windows::Security::Cryptography::Core::CryptographicPadding padding, Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> ** operation) = 0;
    virtual HRESULT __stdcall abi_OpenPublicKeyFromCertificate(Windows::Security::Cryptography::Certificates::ICertificate * certificate, hstring hashAlgorithmName, winrt::Windows::Security::Cryptography::Core::CryptographicPadding padding, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
};

struct __declspec(uuid("6870727b-c996-4eae-84d7-79b2aeb73b9c")) __declspec(novtable) ISymmetricAlgorithmNamesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DesCbc(hstring * value) = 0;
    virtual HRESULT __stdcall get_DesEcb(hstring * value) = 0;
    virtual HRESULT __stdcall get_TripleDesCbc(hstring * value) = 0;
    virtual HRESULT __stdcall get_TripleDesEcb(hstring * value) = 0;
    virtual HRESULT __stdcall get_Rc2Cbc(hstring * value) = 0;
    virtual HRESULT __stdcall get_Rc2Ecb(hstring * value) = 0;
    virtual HRESULT __stdcall get_AesCbc(hstring * value) = 0;
    virtual HRESULT __stdcall get_AesEcb(hstring * value) = 0;
    virtual HRESULT __stdcall get_AesGcm(hstring * value) = 0;
    virtual HRESULT __stdcall get_AesCcm(hstring * value) = 0;
    virtual HRESULT __stdcall get_AesCbcPkcs7(hstring * value) = 0;
    virtual HRESULT __stdcall get_AesEcbPkcs7(hstring * value) = 0;
    virtual HRESULT __stdcall get_DesCbcPkcs7(hstring * value) = 0;
    virtual HRESULT __stdcall get_DesEcbPkcs7(hstring * value) = 0;
    virtual HRESULT __stdcall get_TripleDesCbcPkcs7(hstring * value) = 0;
    virtual HRESULT __stdcall get_TripleDesEcbPkcs7(hstring * value) = 0;
    virtual HRESULT __stdcall get_Rc2CbcPkcs7(hstring * value) = 0;
    virtual HRESULT __stdcall get_Rc2EcbPkcs7(hstring * value) = 0;
    virtual HRESULT __stdcall get_Rc4(hstring * value) = 0;
};

struct __declspec(uuid("3d7e4a33-3bd0-4902-8ac8-470d50d21376")) __declspec(novtable) ISymmetricKeyAlgorithmProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlgorithmName(hstring * value) = 0;
    virtual HRESULT __stdcall get_BlockLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_CreateSymmetricKey(Windows::Storage::Streams::IBuffer * keyMaterial, Windows::Security::Cryptography::Core::ICryptographicKey ** key) = 0;
};

struct __declspec(uuid("8d3b2326-1f37-491f-b60e-f5431b26b483")) __declspec(novtable) ISymmetricKeyAlgorithmProviderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenAlgorithm(hstring algorithm, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider ** provider) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider> { using default_interface = Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider; };
template <> struct traits<Windows::Security::Cryptography::Core::CryptographicHash> { using default_interface = Windows::Security::Cryptography::Core::IHashComputation; };
template <> struct traits<Windows::Security::Cryptography::Core::CryptographicKey> { using default_interface = Windows::Security::Cryptography::Core::ICryptographicKey; };
template <> struct traits<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData> { using default_interface = Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData; };
template <> struct traits<Windows::Security::Cryptography::Core::HashAlgorithmProvider> { using default_interface = Windows::Security::Cryptography::Core::IHashAlgorithmProvider; };
template <> struct traits<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider> { using default_interface = Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider; };
template <> struct traits<Windows::Security::Cryptography::Core::KeyDerivationParameters> { using default_interface = Windows::Security::Cryptography::Core::IKeyDerivationParameters; };
template <> struct traits<Windows::Security::Cryptography::Core::MacAlgorithmProvider> { using default_interface = Windows::Security::Cryptography::Core::IMacAlgorithmProvider; };
template <> struct traits<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider> { using default_interface = Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider; };

}

namespace Windows::Security::Cryptography::Core {

template <typename T> struct impl_IAsymmetricAlgorithmNamesStatics;
template <typename T> struct impl_IAsymmetricAlgorithmNamesStatics2;
template <typename T> struct impl_IAsymmetricKeyAlgorithmProvider;
template <typename T> struct impl_IAsymmetricKeyAlgorithmProvider2;
template <typename T> struct impl_IAsymmetricKeyAlgorithmProviderStatics;
template <typename T> struct impl_ICryptographicEngineStatics;
template <typename T> struct impl_ICryptographicEngineStatics2;
template <typename T> struct impl_ICryptographicKey;
template <typename T> struct impl_IEccCurveNamesStatics;
template <typename T> struct impl_IEncryptedAndAuthenticatedData;
template <typename T> struct impl_IHashAlgorithmNamesStatics;
template <typename T> struct impl_IHashAlgorithmProvider;
template <typename T> struct impl_IHashAlgorithmProviderStatics;
template <typename T> struct impl_IHashComputation;
template <typename T> struct impl_IKeyDerivationAlgorithmNamesStatics;
template <typename T> struct impl_IKeyDerivationAlgorithmNamesStatics2;
template <typename T> struct impl_IKeyDerivationAlgorithmProvider;
template <typename T> struct impl_IKeyDerivationAlgorithmProviderStatics;
template <typename T> struct impl_IKeyDerivationParameters;
template <typename T> struct impl_IKeyDerivationParameters2;
template <typename T> struct impl_IKeyDerivationParametersStatics;
template <typename T> struct impl_IKeyDerivationParametersStatics2;
template <typename T> struct impl_IMacAlgorithmNamesStatics;
template <typename T> struct impl_IMacAlgorithmProvider;
template <typename T> struct impl_IMacAlgorithmProvider2;
template <typename T> struct impl_IMacAlgorithmProviderStatics;
template <typename T> struct impl_IPersistedKeyProviderStatics;
template <typename T> struct impl_ISymmetricAlgorithmNamesStatics;
template <typename T> struct impl_ISymmetricKeyAlgorithmProvider;
template <typename T> struct impl_ISymmetricKeyAlgorithmProviderStatics;

}

namespace impl {

template <> struct traits<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IAsymmetricAlgorithmNamesStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IAsymmetricAlgorithmNamesStatics2<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IAsymmetricKeyAlgorithmProvider<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IAsymmetricKeyAlgorithmProvider2<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IAsymmetricKeyAlgorithmProviderStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::ICryptographicEngineStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_ICryptographicEngineStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
{
    using abi = ABI::Windows::Security::Cryptography::Core::ICryptographicEngineStatics2;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_ICryptographicEngineStatics2<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::ICryptographicKey>
{
    using abi = ABI::Windows::Security::Cryptography::Core::ICryptographicKey;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_ICryptographicKey<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IEccCurveNamesStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IEccCurveNamesStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IEncryptedAndAuthenticatedData<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IHashAlgorithmNamesStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IHashAlgorithmProvider;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IHashAlgorithmProvider<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IHashAlgorithmProviderStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IHashComputation>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IHashComputation;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IHashComputation<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IKeyDerivationAlgorithmNamesStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IKeyDerivationAlgorithmNamesStatics2<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IKeyDerivationAlgorithmProvider<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IKeyDerivationAlgorithmProviderStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IKeyDerivationParameters>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IKeyDerivationParameters<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters2;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IKeyDerivationParameters2<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IKeyDerivationParametersStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IKeyDerivationParametersStatics2<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IMacAlgorithmNamesStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IMacAlgorithmProvider;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IMacAlgorithmProvider<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IMacAlgorithmProvider2;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IMacAlgorithmProvider2<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IMacAlgorithmProviderStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_IPersistedKeyProviderStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_ISymmetricAlgorithmNamesStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_ISymmetricKeyAlgorithmProvider<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
{
    using abi = ABI::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics;
    template <typename D> using consume = Windows::Security::Cryptography::Core::impl_ISymmetricKeyAlgorithmProviderStatics<D>;
};

template <> struct traits<Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::CryptographicEngine>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.CryptographicEngine"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::CryptographicHash>
{
    using abi = ABI::Windows::Security::Cryptography::Core::CryptographicHash;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.CryptographicHash"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::CryptographicKey>
{
    using abi = ABI::Windows::Security::Cryptography::Core::CryptographicKey;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.CryptographicKey"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::EccCurveNames>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.EccCurveNames"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>
{
    using abi = ABI::Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::HashAlgorithmNames>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.HashAlgorithmNames"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::HashAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::HashAlgorithmProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.HashAlgorithmProvider"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::KeyDerivationParameters>
{
    using abi = ABI::Windows::Security::Cryptography::Core::KeyDerivationParameters;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.KeyDerivationParameters"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::MacAlgorithmNames>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.MacAlgorithmNames"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::MacAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::MacAlgorithmProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.MacAlgorithmProvider"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::PersistedKeyProvider>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.PersistedKeyProvider"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::SymmetricAlgorithmNames>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.SymmetricAlgorithmNames"; }
};

template <> struct traits<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>
{
    using abi = ABI::Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider"; }
};

}

}
