// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

struct WINRT_EBO ICertificate :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificate>
{
    ICertificate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificate2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificate2>
{
    ICertificate2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificate3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificate3>
{
    ICertificate3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateChain :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateChain>
{
    ICertificateChain(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateEnrollmentManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateEnrollmentManagerStatics>
{
    ICertificateEnrollmentManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateEnrollmentManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateEnrollmentManagerStatics2>
{
    ICertificateEnrollmentManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateEnrollmentManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateEnrollmentManagerStatics3>
{
    ICertificateEnrollmentManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateExtension :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateExtension>
{
    ICertificateExtension(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateFactory>
{
    ICertificateFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateKeyUsages :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateKeyUsages>
{
    ICertificateKeyUsages(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateQuery>
{
    ICertificateQuery(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateQuery2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateQuery2>
{
    ICertificateQuery2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateRequestProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateRequestProperties>
{
    ICertificateRequestProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateRequestProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateRequestProperties2>
{
    ICertificateRequestProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateRequestProperties3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateRequestProperties3>
{
    ICertificateRequestProperties3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateRequestProperties4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateRequestProperties4>
{
    ICertificateRequestProperties4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateStore>
{
    ICertificateStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateStore2>
{
    ICertificateStore2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateStoresStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateStoresStatics>
{
    ICertificateStoresStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICertificateStoresStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICertificateStoresStatics2>
{
    ICertificateStoresStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IChainBuildingParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChainBuildingParameters>
{
    IChainBuildingParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IChainValidationParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChainValidationParameters>
{
    IChainValidationParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICmsAttachedSignature :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsAttachedSignature>
{
    ICmsAttachedSignature(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICmsAttachedSignatureFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsAttachedSignatureFactory>
{
    ICmsAttachedSignatureFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICmsAttachedSignatureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsAttachedSignatureStatics>
{
    ICmsAttachedSignatureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICmsDetachedSignature :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsDetachedSignature>
{
    ICmsDetachedSignature(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICmsDetachedSignatureFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsDetachedSignatureFactory>
{
    ICmsDetachedSignatureFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICmsDetachedSignatureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsDetachedSignatureStatics>
{
    ICmsDetachedSignatureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICmsSignerInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsSignerInfo>
{
    ICmsSignerInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICmsTimestampInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICmsTimestampInfo>
{
    ICmsTimestampInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyAlgorithmNamesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyAlgorithmNamesStatics>
{
    IKeyAlgorithmNamesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyAlgorithmNamesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyAlgorithmNamesStatics2>
{
    IKeyAlgorithmNamesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyAttestationHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyAttestationHelperStatics>
{
    IKeyAttestationHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyAttestationHelperStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyAttestationHelperStatics2>
{
    IKeyAttestationHelperStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyStorageProviderNamesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyStorageProviderNamesStatics>
{
    IKeyStorageProviderNamesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyStorageProviderNamesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyStorageProviderNamesStatics2>
{
    IKeyStorageProviderNamesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPfxImportParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPfxImportParameters>
{
    IPfxImportParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStandardCertificateStoreNamesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardCertificateStoreNamesStatics>
{
    IStandardCertificateStoreNamesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISubjectAlternativeNameInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISubjectAlternativeNameInfo>
{
    ISubjectAlternativeNameInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISubjectAlternativeNameInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISubjectAlternativeNameInfo2>
{
    ISubjectAlternativeNameInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserCertificateEnrollmentManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserCertificateEnrollmentManager>
{
    IUserCertificateEnrollmentManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserCertificateEnrollmentManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserCertificateEnrollmentManager2>
{
    IUserCertificateEnrollmentManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserCertificateStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserCertificateStore>
{
    IUserCertificateStore(std::nullptr_t = nullptr) noexcept {}
};

}
