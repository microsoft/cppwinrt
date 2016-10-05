// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Cryptography::Core {

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
struct AsymmetricKeyAlgorithmProvider;
struct CryptographicHash;
struct CryptographicKey;
struct EncryptedAndAuthenticatedData;
struct HashAlgorithmProvider;
struct KeyDerivationAlgorithmProvider;
struct KeyDerivationParameters;
struct MacAlgorithmProvider;
struct SymmetricKeyAlgorithmProvider;

}

namespace Windows::Security::Cryptography::Core {

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

namespace Windows::Security::Cryptography::Core {

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

}

}
