// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

struct WINRT_EBO Certificate :
    Windows::Security::Cryptography::Certificates::ICertificate,
    impl::require<Certificate, Windows::Security::Cryptography::Certificates::ICertificate2, Windows::Security::Cryptography::Certificates::ICertificate3>
{
    Certificate(std::nullptr_t) noexcept {}
    Certificate(Windows::Storage::Streams::IBuffer const& certBlob);
};

struct WINRT_EBO CertificateChain :
    Windows::Security::Cryptography::Certificates::ICertificateChain
{
    CertificateChain(std::nullptr_t) noexcept {}
};

struct CertificateEnrollmentManager
{
    CertificateEnrollmentManager() = delete;
    static Windows::Foundation::IAsyncOperation<hstring> CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request);
    static Windows::Foundation::IAsyncAction InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption);
    static Windows::Foundation::IAsyncAction ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName);
    static Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager UserCertificateEnrollmentManager();
    static Windows::Foundation::IAsyncAction ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider);
    static Windows::Foundation::IAsyncAction ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters);
};

struct WINRT_EBO CertificateExtension :
    Windows::Security::Cryptography::Certificates::ICertificateExtension
{
    CertificateExtension(std::nullptr_t) noexcept {}
    CertificateExtension();
};

struct WINRT_EBO CertificateKeyUsages :
    Windows::Security::Cryptography::Certificates::ICertificateKeyUsages
{
    CertificateKeyUsages(std::nullptr_t) noexcept {}
    CertificateKeyUsages();
};

struct WINRT_EBO CertificateQuery :
    Windows::Security::Cryptography::Certificates::ICertificateQuery,
    impl::require<CertificateQuery, Windows::Security::Cryptography::Certificates::ICertificateQuery2>
{
    CertificateQuery(std::nullptr_t) noexcept {}
    CertificateQuery();
};

struct WINRT_EBO CertificateRequestProperties :
    Windows::Security::Cryptography::Certificates::ICertificateRequestProperties,
    impl::require<CertificateRequestProperties, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
{
    CertificateRequestProperties(std::nullptr_t) noexcept {}
    CertificateRequestProperties();
};

struct WINRT_EBO CertificateStore :
    Windows::Security::Cryptography::Certificates::ICertificateStore,
    impl::require<CertificateStore, Windows::Security::Cryptography::Certificates::ICertificateStore2>
{
    CertificateStore(std::nullptr_t) noexcept {}
};

struct CertificateStores
{
    CertificateStores() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query);
    static Windows::Security::Cryptography::Certificates::CertificateStore TrustedRootCertificationAuthorities();
    static Windows::Security::Cryptography::Certificates::CertificateStore IntermediateCertificationAuthorities();
    static Windows::Security::Cryptography::Certificates::CertificateStore GetStoreByName(param::hstring const& storeName);
    static Windows::Security::Cryptography::Certificates::UserCertificateStore GetUserStoreByName(param::hstring const& storeName);
};

struct WINRT_EBO ChainBuildingParameters :
    Windows::Security::Cryptography::Certificates::IChainBuildingParameters
{
    ChainBuildingParameters(std::nullptr_t) noexcept {}
    ChainBuildingParameters();
};

struct WINRT_EBO ChainValidationParameters :
    Windows::Security::Cryptography::Certificates::IChainValidationParameters
{
    ChainValidationParameters(std::nullptr_t) noexcept {}
    ChainValidationParameters();
};

struct WINRT_EBO CmsAttachedSignature :
    Windows::Security::Cryptography::Certificates::ICmsAttachedSignature
{
    CmsAttachedSignature(std::nullptr_t) noexcept {}
    CmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates);
};

struct WINRT_EBO CmsDetachedSignature :
    Windows::Security::Cryptography::Certificates::ICmsDetachedSignature
{
    CmsDetachedSignature(std::nullptr_t) noexcept {}
    CmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates);
};

struct WINRT_EBO CmsSignerInfo :
    Windows::Security::Cryptography::Certificates::ICmsSignerInfo
{
    CmsSignerInfo(std::nullptr_t) noexcept {}
    CmsSignerInfo();
};

struct WINRT_EBO CmsTimestampInfo :
    Windows::Security::Cryptography::Certificates::ICmsTimestampInfo
{
    CmsTimestampInfo(std::nullptr_t) noexcept {}
};

struct KeyAlgorithmNames
{
    KeyAlgorithmNames() = delete;
    static hstring Rsa();
    static hstring Dsa();
    static hstring Ecdh256();
    static hstring Ecdh384();
    static hstring Ecdh521();
    static hstring Ecdsa256();
    static hstring Ecdsa384();
    static hstring Ecdsa521();
    static hstring Ecdsa();
    static hstring Ecdh();
};

struct KeyAttestationHelper
{
    KeyAttestationHelper() = delete;
    static Windows::Foundation::IAsyncOperation<hstring> DecryptTpmAttestationCredentialAsync(param::hstring const& credential);
    static hstring GetTpmAttestationCredentialId(param::hstring const& credential);
    static Windows::Foundation::IAsyncOperation<hstring> DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName);
};

struct KeyStorageProviderNames
{
    KeyStorageProviderNames() = delete;
    static hstring SoftwareKeyStorageProvider();
    static hstring SmartcardKeyStorageProvider();
    static hstring PlatformKeyStorageProvider();
    static hstring PassportKeyStorageProvider();
};

struct WINRT_EBO PfxImportParameters :
    Windows::Security::Cryptography::Certificates::IPfxImportParameters
{
    PfxImportParameters(std::nullptr_t) noexcept {}
    PfxImportParameters();
};

struct StandardCertificateStoreNames
{
    StandardCertificateStoreNames() = delete;
    static hstring Personal();
    static hstring TrustedRootCertificationAuthorities();
    static hstring IntermediateCertificationAuthorities();
};

struct WINRT_EBO SubjectAlternativeNameInfo :
    Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo,
    impl::require<SubjectAlternativeNameInfo, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
{
    SubjectAlternativeNameInfo(std::nullptr_t) noexcept {}
    SubjectAlternativeNameInfo();
};

struct WINRT_EBO UserCertificateEnrollmentManager :
    Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager,
    impl::require<UserCertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
{
    UserCertificateEnrollmentManager(std::nullptr_t) noexcept {}
    using impl::consume_t<UserCertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>::ImportPfxDataAsync;
    using Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager::ImportPfxDataAsync;
};

struct WINRT_EBO UserCertificateStore :
    Windows::Security::Cryptography::Certificates::IUserCertificateStore
{
    UserCertificateStore(std::nullptr_t) noexcept {}
};

}
