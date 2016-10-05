// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Cryptography.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3bee8834_b9a7_5a80_a746_5ef097227878
#define WINRT_GENERIC_3bee8834_b9a7_5a80_a746_5ef097227878
template <> struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878")) __declspec(novtable) IAsyncOperation<Windows::Storage::Streams::IBuffer> : impl_IAsyncOperation<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_81ca789b_98df_5c6a_9531_966238e3e7ae
#define WINRT_GENERIC_81ca789b_98df_5c6a_9531_966238e3e7ae
template <> struct __declspec(uuid("81ca789b-98df-5c6a-9531-966238e3e7ae")) __declspec(novtable) IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> : impl_IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_51c3d2fd_b8a1_5620_b746_7ee6d533aca3
#define WINRT_GENERIC_51c3d2fd_b8a1_5620_b746_7ee6d533aca3
template <> struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::Streams::IBuffer> : impl_AsyncOperationCompletedHandler<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_04ca4378_f594_5de6_a555_304f62cb4faf
#define WINRT_GENERIC_04ca4378_f594_5de6_a555_304f62cb4faf
template <> struct __declspec(uuid("04ca4378-f594-5de6-a555-304f62cb4faf")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Cryptography::Core::CryptographicKey> : impl_AsyncOperationCompletedHandler<Windows::Security::Cryptography::Core::CryptographicKey> {};
#endif


}

namespace Windows::Security::Cryptography::Core {

template <typename D>
struct WINRT_EBO impl_IAsymmetricAlgorithmNamesStatics
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

template <typename D>
struct WINRT_EBO impl_IAsymmetricAlgorithmNamesStatics2
{
    hstring EcdsaSha256() const;
    hstring EcdsaSha384() const;
    hstring EcdsaSha512() const;
};

template <typename D>
struct WINRT_EBO impl_IAsymmetricKeyAlgorithmProvider
{
    hstring AlgorithmName() const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateKeyPair(uint32_t keySize) const;
    Windows::Security::Cryptography::Core::CryptographicKey ImportKeyPair(const Windows::Storage::Streams::IBuffer & keyBlob) const;
    Windows::Security::Cryptography::Core::CryptographicKey ImportKeyPair(const Windows::Storage::Streams::IBuffer & keyBlob, Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType) const;
    Windows::Security::Cryptography::Core::CryptographicKey ImportPublicKey(const Windows::Storage::Streams::IBuffer & keyBlob) const;
    Windows::Security::Cryptography::Core::CryptographicKey ImportPublicKey(const Windows::Storage::Streams::IBuffer & keyBlob, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType) const;
};

template <typename D>
struct WINRT_EBO impl_IAsymmetricKeyAlgorithmProvider2
{
    Windows::Security::Cryptography::Core::CryptographicKey CreateKeyPairWithCurveName(hstring_ref curveName) const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateKeyPairWithCurveParameters(array_ref<const uint8_t> parameters) const;
};

template <typename D>
struct WINRT_EBO impl_IAsymmetricKeyAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider OpenAlgorithm(hstring_ref algorithm) const;
};

template <typename D>
struct WINRT_EBO impl_ICryptographicEngineStatics
{
    Windows::Storage::Streams::IBuffer Encrypt(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv) const;
    Windows::Storage::Streams::IBuffer Decrypt(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv) const;
    Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData EncryptAndAuthenticate(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & nonce, const Windows::Storage::Streams::IBuffer & authenticatedData) const;
    Windows::Storage::Streams::IBuffer DecryptAndAuthenticate(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & nonce, const Windows::Storage::Streams::IBuffer & authenticationTag, const Windows::Storage::Streams::IBuffer & authenticatedData) const;
    Windows::Storage::Streams::IBuffer Sign(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data) const;
    bool VerifySignature(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & signature) const;
    Windows::Storage::Streams::IBuffer DeriveKeyMaterial(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Security::Cryptography::Core::KeyDerivationParameters & parameters, uint32_t desiredKeySize) const;
};

template <typename D>
struct WINRT_EBO impl_ICryptographicEngineStatics2
{
    Windows::Storage::Streams::IBuffer SignHashedData(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data) const;
    bool VerifySignatureWithHashInput(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & signature) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> DecryptAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data, const Windows::Storage::Streams::IBuffer & iv) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> SignAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> SignHashedDataAsync(const Windows::Security::Cryptography::Core::CryptographicKey & key, const Windows::Storage::Streams::IBuffer & data) const;
};

template <typename D>
struct WINRT_EBO impl_ICryptographicKey
{
    uint32_t KeySize() const;
    Windows::Storage::Streams::IBuffer Export() const;
    Windows::Storage::Streams::IBuffer Export(Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType) const;
    Windows::Storage::Streams::IBuffer ExportPublicKey() const;
    Windows::Storage::Streams::IBuffer ExportPublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType) const;
};

template <typename D>
struct WINRT_EBO impl_IEccCurveNamesStatics
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

template <typename D>
struct WINRT_EBO impl_IEncryptedAndAuthenticatedData
{
    Windows::Storage::Streams::IBuffer EncryptedData() const;
    Windows::Storage::Streams::IBuffer AuthenticationTag() const;
};

template <typename D>
struct WINRT_EBO impl_IHashAlgorithmNamesStatics
{
    hstring Md5() const;
    hstring Sha1() const;
    hstring Sha256() const;
    hstring Sha384() const;
    hstring Sha512() const;
};

template <typename D>
struct WINRT_EBO impl_IHashAlgorithmProvider
{
    hstring AlgorithmName() const;
    uint32_t HashLength() const;
    Windows::Storage::Streams::IBuffer HashData(const Windows::Storage::Streams::IBuffer & data) const;
    Windows::Security::Cryptography::Core::CryptographicHash CreateHash() const;
};

template <typename D>
struct WINRT_EBO impl_IHashAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::HashAlgorithmProvider OpenAlgorithm(hstring_ref algorithm) const;
};

template <typename D>
struct WINRT_EBO impl_IHashComputation
{
    void Append(const Windows::Storage::Streams::IBuffer & data) const;
    Windows::Storage::Streams::IBuffer GetValueAndReset() const;
};

template <typename D>
struct WINRT_EBO impl_IKeyDerivationAlgorithmNamesStatics
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

template <typename D>
struct WINRT_EBO impl_IKeyDerivationAlgorithmNamesStatics2
{
    hstring CapiKdfMd5() const;
    hstring CapiKdfSha1() const;
    hstring CapiKdfSha256() const;
    hstring CapiKdfSha384() const;
    hstring CapiKdfSha512() const;
};

template <typename D>
struct WINRT_EBO impl_IKeyDerivationAlgorithmProvider
{
    hstring AlgorithmName() const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateKey(const Windows::Storage::Streams::IBuffer & keyMaterial) const;
};

template <typename D>
struct WINRT_EBO impl_IKeyDerivationAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider OpenAlgorithm(hstring_ref algorithm) const;
};

template <typename D>
struct WINRT_EBO impl_IKeyDerivationParameters
{
    Windows::Storage::Streams::IBuffer KdfGenericBinary() const;
    void KdfGenericBinary(const Windows::Storage::Streams::IBuffer & value) const;
    uint32_t IterationCount() const;
};

template <typename D>
struct WINRT_EBO impl_IKeyDerivationParameters2
{
    Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm Capi1KdfTargetAlgorithm() const;
    void Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value) const;
};

template <typename D>
struct WINRT_EBO impl_IKeyDerivationParametersStatics
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters BuildForPbkdf2(const Windows::Storage::Streams::IBuffer & pbkdf2Salt, uint32_t iterationCount) const;
    Windows::Security::Cryptography::Core::KeyDerivationParameters BuildForSP800108(const Windows::Storage::Streams::IBuffer & label, const Windows::Storage::Streams::IBuffer & context) const;
    Windows::Security::Cryptography::Core::KeyDerivationParameters BuildForSP80056a(const Windows::Storage::Streams::IBuffer & algorithmId, const Windows::Storage::Streams::IBuffer & partyUInfo, const Windows::Storage::Streams::IBuffer & partyVInfo, const Windows::Storage::Streams::IBuffer & suppPubInfo, const Windows::Storage::Streams::IBuffer & suppPrivInfo) const;
};

template <typename D>
struct WINRT_EBO impl_IKeyDerivationParametersStatics2
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm capi1KdfTargetAlgorithm) const;
};

template <typename D>
struct WINRT_EBO impl_IMacAlgorithmNamesStatics
{
    hstring HmacMd5() const;
    hstring HmacSha1() const;
    hstring HmacSha256() const;
    hstring HmacSha384() const;
    hstring HmacSha512() const;
    hstring AesCmac() const;
};

template <typename D>
struct WINRT_EBO impl_IMacAlgorithmProvider
{
    hstring AlgorithmName() const;
    uint32_t MacLength() const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateKey(const Windows::Storage::Streams::IBuffer & keyMaterial) const;
};

template <typename D>
struct WINRT_EBO impl_IMacAlgorithmProvider2
{
    Windows::Security::Cryptography::Core::CryptographicHash CreateHash(const Windows::Storage::Streams::IBuffer & keyMaterial) const;
};

template <typename D>
struct WINRT_EBO impl_IMacAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::MacAlgorithmProvider OpenAlgorithm(hstring_ref algorithm) const;
};

template <typename D>
struct WINRT_EBO impl_IPersistedKeyProviderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> OpenKeyPairFromCertificateAsync(const Windows::Security::Cryptography::Certificates::Certificate & certificate, hstring_ref hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding) const;
    Windows::Security::Cryptography::Core::CryptographicKey OpenPublicKeyFromCertificate(const Windows::Security::Cryptography::Certificates::Certificate & certificate, hstring_ref hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding) const;
};

template <typename D>
struct WINRT_EBO impl_ISymmetricAlgorithmNamesStatics
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

template <typename D>
struct WINRT_EBO impl_ISymmetricKeyAlgorithmProvider
{
    hstring AlgorithmName() const;
    uint32_t BlockLength() const;
    Windows::Security::Cryptography::Core::CryptographicKey CreateSymmetricKey(const Windows::Storage::Streams::IBuffer & keyMaterial) const;
};

template <typename D>
struct WINRT_EBO impl_ISymmetricKeyAlgorithmProviderStatics
{
    Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider OpenAlgorithm(hstring_ref algorithm) const;
};

struct IAsymmetricAlgorithmNamesStatics :
    Windows::IInspectable,
    impl::consume<IAsymmetricAlgorithmNamesStatics>
{
    IAsymmetricAlgorithmNamesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsymmetricAlgorithmNamesStatics>(m_ptr); }
};

struct IAsymmetricAlgorithmNamesStatics2 :
    Windows::IInspectable,
    impl::consume<IAsymmetricAlgorithmNamesStatics2>
{
    IAsymmetricAlgorithmNamesStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsymmetricAlgorithmNamesStatics2>(m_ptr); }
};

struct IAsymmetricKeyAlgorithmProvider :
    Windows::IInspectable,
    impl::consume<IAsymmetricKeyAlgorithmProvider>
{
    IAsymmetricKeyAlgorithmProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsymmetricKeyAlgorithmProvider>(m_ptr); }
};

struct IAsymmetricKeyAlgorithmProvider2 :
    Windows::IInspectable,
    impl::consume<IAsymmetricKeyAlgorithmProvider2>
{
    IAsymmetricKeyAlgorithmProvider2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsymmetricKeyAlgorithmProvider2>(m_ptr); }
};

struct IAsymmetricKeyAlgorithmProviderStatics :
    Windows::IInspectable,
    impl::consume<IAsymmetricKeyAlgorithmProviderStatics>
{
    IAsymmetricKeyAlgorithmProviderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsymmetricKeyAlgorithmProviderStatics>(m_ptr); }
};

struct ICryptographicEngineStatics :
    Windows::IInspectable,
    impl::consume<ICryptographicEngineStatics>
{
    ICryptographicEngineStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICryptographicEngineStatics>(m_ptr); }
};

struct ICryptographicEngineStatics2 :
    Windows::IInspectable,
    impl::consume<ICryptographicEngineStatics2>
{
    ICryptographicEngineStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICryptographicEngineStatics2>(m_ptr); }
};

struct ICryptographicKey :
    Windows::IInspectable,
    impl::consume<ICryptographicKey>
{
    ICryptographicKey(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICryptographicKey>(m_ptr); }
};

struct IEccCurveNamesStatics :
    Windows::IInspectable,
    impl::consume<IEccCurveNamesStatics>
{
    IEccCurveNamesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEccCurveNamesStatics>(m_ptr); }
};

struct IEncryptedAndAuthenticatedData :
    Windows::IInspectable,
    impl::consume<IEncryptedAndAuthenticatedData>
{
    IEncryptedAndAuthenticatedData(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEncryptedAndAuthenticatedData>(m_ptr); }
};

struct IHashAlgorithmNamesStatics :
    Windows::IInspectable,
    impl::consume<IHashAlgorithmNamesStatics>
{
    IHashAlgorithmNamesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHashAlgorithmNamesStatics>(m_ptr); }
};

struct IHashAlgorithmProvider :
    Windows::IInspectable,
    impl::consume<IHashAlgorithmProvider>
{
    IHashAlgorithmProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHashAlgorithmProvider>(m_ptr); }
};

struct IHashAlgorithmProviderStatics :
    Windows::IInspectable,
    impl::consume<IHashAlgorithmProviderStatics>
{
    IHashAlgorithmProviderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHashAlgorithmProviderStatics>(m_ptr); }
};

struct IHashComputation :
    Windows::IInspectable,
    impl::consume<IHashComputation>
{
    IHashComputation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHashComputation>(m_ptr); }
};

struct IKeyDerivationAlgorithmNamesStatics :
    Windows::IInspectable,
    impl::consume<IKeyDerivationAlgorithmNamesStatics>
{
    IKeyDerivationAlgorithmNamesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyDerivationAlgorithmNamesStatics>(m_ptr); }
};

struct IKeyDerivationAlgorithmNamesStatics2 :
    Windows::IInspectable,
    impl::consume<IKeyDerivationAlgorithmNamesStatics2>
{
    IKeyDerivationAlgorithmNamesStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyDerivationAlgorithmNamesStatics2>(m_ptr); }
};

struct IKeyDerivationAlgorithmProvider :
    Windows::IInspectable,
    impl::consume<IKeyDerivationAlgorithmProvider>
{
    IKeyDerivationAlgorithmProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyDerivationAlgorithmProvider>(m_ptr); }
};

struct IKeyDerivationAlgorithmProviderStatics :
    Windows::IInspectable,
    impl::consume<IKeyDerivationAlgorithmProviderStatics>
{
    IKeyDerivationAlgorithmProviderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyDerivationAlgorithmProviderStatics>(m_ptr); }
};

struct IKeyDerivationParameters :
    Windows::IInspectable,
    impl::consume<IKeyDerivationParameters>
{
    IKeyDerivationParameters(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyDerivationParameters>(m_ptr); }
};

struct IKeyDerivationParameters2 :
    Windows::IInspectable,
    impl::consume<IKeyDerivationParameters2>
{
    IKeyDerivationParameters2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyDerivationParameters2>(m_ptr); }
};

struct IKeyDerivationParametersStatics :
    Windows::IInspectable,
    impl::consume<IKeyDerivationParametersStatics>
{
    IKeyDerivationParametersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyDerivationParametersStatics>(m_ptr); }
};

struct IKeyDerivationParametersStatics2 :
    Windows::IInspectable,
    impl::consume<IKeyDerivationParametersStatics2>
{
    IKeyDerivationParametersStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyDerivationParametersStatics2>(m_ptr); }
};

struct IMacAlgorithmNamesStatics :
    Windows::IInspectable,
    impl::consume<IMacAlgorithmNamesStatics>
{
    IMacAlgorithmNamesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMacAlgorithmNamesStatics>(m_ptr); }
};

struct IMacAlgorithmProvider :
    Windows::IInspectable,
    impl::consume<IMacAlgorithmProvider>
{
    IMacAlgorithmProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMacAlgorithmProvider>(m_ptr); }
};

struct IMacAlgorithmProvider2 :
    Windows::IInspectable,
    impl::consume<IMacAlgorithmProvider2>
{
    IMacAlgorithmProvider2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMacAlgorithmProvider2>(m_ptr); }
};

struct IMacAlgorithmProviderStatics :
    Windows::IInspectable,
    impl::consume<IMacAlgorithmProviderStatics>
{
    IMacAlgorithmProviderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMacAlgorithmProviderStatics>(m_ptr); }
};

struct IPersistedKeyProviderStatics :
    Windows::IInspectable,
    impl::consume<IPersistedKeyProviderStatics>
{
    IPersistedKeyProviderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPersistedKeyProviderStatics>(m_ptr); }
};

struct ISymmetricAlgorithmNamesStatics :
    Windows::IInspectable,
    impl::consume<ISymmetricAlgorithmNamesStatics>
{
    ISymmetricAlgorithmNamesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISymmetricAlgorithmNamesStatics>(m_ptr); }
};

struct ISymmetricKeyAlgorithmProvider :
    Windows::IInspectable,
    impl::consume<ISymmetricKeyAlgorithmProvider>
{
    ISymmetricKeyAlgorithmProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISymmetricKeyAlgorithmProvider>(m_ptr); }
};

struct ISymmetricKeyAlgorithmProviderStatics :
    Windows::IInspectable,
    impl::consume<ISymmetricKeyAlgorithmProviderStatics>
{
    ISymmetricKeyAlgorithmProviderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISymmetricKeyAlgorithmProviderStatics>(m_ptr); }
};

}

}
