// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/Windows.Security.Cryptography.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->BuildChainAsync(get_abi(certificates), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates, Windows::Security::Cryptography::Certificates::ChainBuildingParameters const& parameters) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->BuildChainWithParametersAsync(get_abi(certificates), get_abi(parameters), put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::SerialNumber() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_SerialNumber(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetHashValue() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetHashValue(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetHashValue(param::hstring const& hashAlgorithmName) const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetHashValueWithAlgorithm(get_abi(hashAlgorithmName), impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetCertificateBlob() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetCertificateBlob(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::Issuer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_Issuer(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::HasPrivateKey() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_HasPrivateKey(&value));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::IsStronglyProtected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_IsStronglyProtected(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::ValidFrom() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_ValidFrom(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::ValidTo() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_ValidTo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::EnhancedKeyUsages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_EnhancedKeyUsages(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->put_FriendlyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::IsSecurityDeviceBound() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_IsSecurityDeviceBound(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateKeyUsages consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::KeyUsages() const
{
    Windows::Security::Cryptography::Certificates::CertificateKeyUsages value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_KeyUsages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::KeyAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_KeyAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SignatureAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SignatureAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SignatureHashAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SignatureHashAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SubjectAlternativeName() const
{
    Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SubjectAlternativeName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::IsPerUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_IsPerUser(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::StoreName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_StoreName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::KeyStorageProviderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_KeyStorageProviderName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::ChainValidationResult consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::Validate() const
{
    Windows::Security::Cryptography::Certificates::ChainValidationResult status{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->Validate(put_abi(status)));
    return status;
}

template <typename D> Windows::Security::Cryptography::Certificates::ChainValidationResult consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::Validate(Windows::Security::Cryptography::Certificates::ChainValidationParameters const& parameter) const
{
    Windows::Security::Cryptography::Certificates::ChainValidationResult status{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->ValidateWithParameters(get_abi(parameter), put_abi(status)));
    return status;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::GetCertificates(bool includeRoot) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> certificates{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->GetCertificates(includeRoot, put_abi(certificates)));
    return certificates;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const
{
    Windows::Foundation::IAsyncOperation<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->CreateRequestAsync(get_abi(request), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->InstallCertificateAsync(get_abi(certificate), get_abi(installOption), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->ImportPfxDataAsync(get_abi(pfxData), get_abi(password), get_abi(exportable), get_abi(keyProtectionLevel), get_abi(installOption), get_abi(friendlyName), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2<D>::UserCertificateEnrollmentManager() const
{
    Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2)->get_UserCertificateEnrollmentManager(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2)->ImportPfxDataToKspAsync(get_abi(pfxData), get_abi(password), get_abi(exportable), get_abi(keyProtectionLevel), get_abi(installOption), get_abi(friendlyName), get_abi(keyStorageProvider), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3)->ImportPfxDataToKspWithParametersAsync(get_abi(pfxData), get_abi(password), get_abi(pfxImportParameters), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::ObjectId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_ObjectId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::ObjectId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_ObjectId(get_abi(value)));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::IsCritical() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_IsCritical(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::IsCritical(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_IsCritical(value));
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::EncodeValue(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->EncodeValue(get_abi(value)));
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::Value() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_Value(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::Value(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_Value(value.size(), get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICertificateFactory<D>::CreateCertificate(Windows::Storage::Streams::IBuffer const& certBlob) const
{
    Windows::Security::Cryptography::Certificates::Certificate certificate{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateFactory)->CreateCertificate(get_abi(certBlob), put_abi(certificate)));
    return certificate;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::EncipherOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_EncipherOnly(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::EncipherOnly(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_EncipherOnly(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::CrlSign() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_CrlSign(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::CrlSign(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_CrlSign(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyCertificateSign() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyCertificateSign(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyCertificateSign(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyCertificateSign(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyAgreement() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyAgreement(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyAgreement(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyAgreement(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DataEncipherment() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_DataEncipherment(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DataEncipherment(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_DataEncipherment(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyEncipherment() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyEncipherment(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyEncipherment(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyEncipherment(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::NonRepudiation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_NonRepudiation(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::NonRepudiation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_NonRepudiation(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DigitalSignature() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_DigitalSignature(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DigitalSignature(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_DigitalSignature(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::EnhancedKeyUsages() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_EnhancedKeyUsages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::IssuerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_IssuerName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::IssuerName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_IssuerName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_FriendlyName(get_abi(value)));
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::Thumbprint() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_Thumbprint(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::Thumbprint(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_Thumbprint(value.size(), get_abi(value)));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::HardwareOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_HardwareOnly(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::HardwareOnly(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_HardwareOnly(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeDuplicates() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_IncludeDuplicates(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeDuplicates(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_IncludeDuplicates(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeExpiredCertificates() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_IncludeExpiredCertificates(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeExpiredCertificates(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_IncludeExpiredCertificates(value));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::StoreName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_StoreName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::StoreName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_StoreName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Subject(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_Subject(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyAlgorithmName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyAlgorithmName(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeySize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeySize(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeySize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeySize(value));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_FriendlyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::HashAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_HashAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::HashAlgorithmName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_HashAlgorithmName(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::ExportOption consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Exportable() const
{
    Windows::Security::Cryptography::Certificates::ExportOption value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_Exportable(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_Exportable(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::EnrollKeyUsages consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyUsages() const
{
    Windows::Security::Cryptography::Certificates::EnrollKeyUsages value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyUsages(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyUsages(Windows::Security::Cryptography::Certificates::EnrollKeyUsages const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyUsages(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::KeyProtectionLevel consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyProtectionLevel() const
{
    Windows::Security::Cryptography::Certificates::KeyProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyProtectionLevel(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyStorageProviderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyStorageProviderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyStorageProviderName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyStorageProviderName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SmartcardReaderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_SmartcardReaderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SmartcardReaderName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_SmartcardReaderName(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SigningCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_SigningCertificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SigningCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_SigningCertificate(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::AttestationCredentialCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_AttestationCredentialCertificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::AttestationCredentialCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_AttestationCredentialCertificate(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_CurveName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_CurveName(get_abi(value)));
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveParameters() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_CurveParameters(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveParameters(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_CurveParameters(value.size(), get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerNamePrefix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_ContainerNamePrefix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerNamePrefix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_ContainerNamePrefix(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_ContainerName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_ContainerName(get_abi(value)));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::UseExistingKey() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_UseExistingKey(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::UseExistingKey(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_UseExistingKey(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::SuppressedDefaults() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_SuppressedDefaults(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::SubjectAlternativeName() const
{
    Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_SubjectAlternativeName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension> consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::Extensions() const
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_Extensions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateStore<D>::Add(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore)->Add(get_abi(certificate)));
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateStore<D>::Delete(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore)->Delete(get_abi(certificate)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateStore2<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore2)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->FindAllAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->FindAllWithQueryAsync(get_abi(query), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateStore consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::TrustedRootCertificationAuthorities() const
{
    Windows::Security::Cryptography::Certificates::CertificateStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->get_TrustedRootCertificationAuthorities(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateStore consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::IntermediateCertificationAuthorities() const
{
    Windows::Security::Cryptography::Certificates::CertificateStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->get_IntermediateCertificationAuthorities(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateStore consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::GetStoreByName(param::hstring const& storeName) const
{
    Windows::Security::Cryptography::Certificates::CertificateStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->GetStoreByName(get_abi(storeName), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::UserCertificateStore consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2<D>::GetUserStoreByName(param::hstring const& storeName) const
{
    Windows::Security::Cryptography::Certificates::UserCertificateStore result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2)->GetUserStoreByName(get_abi(storeName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::EnhancedKeyUsages() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_EnhancedKeyUsages(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ValidationTimestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_ValidationTimestamp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ValidationTimestamp(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_ValidationTimestamp(get_abi(value)));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::RevocationCheckEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_RevocationCheckEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::RevocationCheckEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_RevocationCheckEnabled(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::NetworkRetrievalEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_NetworkRetrievalEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::NetworkRetrievalEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_NetworkRetrievalEnabled(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::AuthorityInformationAccessEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_AuthorityInformationAccessEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::AuthorityInformationAccessEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_AuthorityInformationAccessEnabled(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::CurrentTimeValidationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_CurrentTimeValidationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::CurrentTimeValidationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_CurrentTimeValidationEnabled(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ExclusiveTrustRoots() const
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate> certificates{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_ExclusiveTrustRoots(put_abi(certificates)));
    return certificates;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateChainPolicy consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::CertificateChainPolicy() const
{
    Windows::Security::Cryptography::Certificates::CertificateChainPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->get_CertificateChainPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::CertificateChainPolicy(Windows::Security::Cryptography::Certificates::CertificateChainPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->put_CertificateChainPolicy(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::ServerDnsName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->get_ServerDnsName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::ServerDnsName(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->put_ServerDnsName(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Certificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Certificates(put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Content() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Content(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo> consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Signers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Signers(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::SignatureValidationResult consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::VerifySignature() const
{
    Windows::Security::Cryptography::Certificates::SignatureValidationResult value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->VerifySignature(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CmsAttachedSignature consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory<D>::CreateCmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const
{
    Windows::Security::Cryptography::Certificates::CmsAttachedSignature cmsSignedData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory)->CreateCmsAttachedSignature(get_abi(inputBlob), put_abi(cmsSignedData)));
    return cmsSignedData;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics<D>::GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> outputBlob{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics)->GenerateSignatureAsync(get_abi(data), get_abi(signers), get_abi(certificates), put_abi(outputBlob)));
    return outputBlob;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::Certificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->get_Certificates(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo> consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::Signers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->get_Signers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult> consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::VerifySignatureAsync(Windows::Storage::Streams::IInputStream const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->VerifySignatureAsync(get_abi(data), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CmsDetachedSignature consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory<D>::CreateCmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const
{
    Windows::Security::Cryptography::Certificates::CmsDetachedSignature cmsSignedData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory)->CreateCmsDetachedSignature(get_abi(inputBlob), put_abi(cmsSignedData)));
    return cmsSignedData;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics<D>::GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> outputBlob{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics)->GenerateSignatureAsync(get_abi(data), get_abi(signers), get_abi(certificates), put_abi(outputBlob)));
    return outputBlob;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::Certificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_Certificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::Certificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->put_Certificate(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::HashAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_HashAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::HashAlgorithmName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->put_HashAlgorithmName(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::CmsTimestampInfo consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::TimestampInfo() const
{
    Windows::Security::Cryptography::Certificates::CmsTimestampInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_TimestampInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::SigningCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_SigningCertificate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::Certificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_Certificates(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Rsa() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Rsa(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Dsa() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Dsa(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh521() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh521(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa521() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa521(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2<D>::Ecdsa() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2)->get_Ecdsa(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2<D>::Ecdh() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2)->get_Ecdh(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics<D>::DecryptTpmAttestationCredentialAsync(param::hstring const& credential) const
{
    Windows::Foundation::IAsyncOperation<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics)->DecryptTpmAttestationCredentialAsync(get_abi(credential), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics<D>::GetTpmAttestationCredentialId(param::hstring const& credential) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics)->GetTpmAttestationCredentialId(get_abi(credential), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2<D>::DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName) const
{
    Windows::Foundation::IAsyncOperation<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2)->DecryptTpmAttestationCredentialWithContainerNameAsync(get_abi(credential), get_abi(containerName), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::SoftwareKeyStorageProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_SoftwareKeyStorageProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::SmartcardKeyStorageProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_SmartcardKeyStorageProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::PlatformKeyStorageProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_PlatformKeyStorageProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2<D>::PassportKeyStorageProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2)->get_PassportKeyStorageProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::ExportOption consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::Exportable() const
{
    Windows::Security::Cryptography::Certificates::ExportOption value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_Exportable(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_Exportable(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::KeyProtectionLevel consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyProtectionLevel() const
{
    Windows::Security::Cryptography::Certificates::KeyProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_KeyProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_KeyProtectionLevel(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::InstallOptions consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::InstallOptions() const
{
    Windows::Security::Cryptography::Certificates::InstallOptions value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_InstallOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::InstallOptions(Windows::Security::Cryptography::Certificates::InstallOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_InstallOptions(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_FriendlyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyStorageProviderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_KeyStorageProviderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyStorageProviderName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_KeyStorageProviderName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ContainerNamePrefix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_ContainerNamePrefix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ContainerNamePrefix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_ContainerNamePrefix(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ReaderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_ReaderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ReaderName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_ReaderName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::Personal() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_Personal(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::TrustedRootCertificationAuthorities() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_TrustedRootCertificationAuthorities(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::IntermediateCertificationAuthorities() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_IntermediateCertificationAuthorities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::EmailName() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_EmailName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::IPAddress() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_IPAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::Url() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_Url(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::DnsName() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_DnsName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::DistinguishedName() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_DistinguishedName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::PrincipalName() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_PrincipalName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::EmailNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_EmailNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::IPAddresses() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_IPAddresses(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::Urls() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_Urls(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::DnsNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_DnsNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::DistinguishedNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_DistinguishedNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::PrincipalNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_PrincipalNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateExtension consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::Extension() const
{
    Windows::Security::Cryptography::Certificates::CertificateExtension value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_Extension(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const
{
    Windows::Foundation::IAsyncOperation<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->CreateRequestAsync(get_abi(request), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->InstallCertificateAsync(get_abi(certificate), get_abi(installOption), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->ImportPfxDataAsync(get_abi(pfxData), get_abi(password), get_abi(exportable), get_abi(keyProtectionLevel), get_abi(installOption), get_abi(friendlyName), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->ImportPfxDataToKspAsync(get_abi(pfxData), get_abi(password), get_abi(exportable), get_abi(keyProtectionLevel), get_abi(installOption), get_abi(friendlyName), get_abi(keyStorageProvider), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2)->ImportPfxDataToKspWithParametersAsync(get_abi(pfxData), get_abi(password), get_abi(pfxImportParameters), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::RequestAddAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->RequestAddAsync(get_abi(certificate), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::RequestDeleteAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->RequestDeleteAsync(get_abi(certificate), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->get_Name(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate>
{
    HRESULT __stdcall BuildChainAsync(::IUnknown* certificates, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BuildChainAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BuildChainWithParametersAsync(::IUnknown* certificates, ::IUnknown* parameters, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BuildChainAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ChainBuildingParameters const*>(&parameters)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SerialNumber(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().SerialNumber());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHashValue(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetHashValue());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHashValueWithAlgorithm(HSTRING hashAlgorithmName, uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetHashValue(*reinterpret_cast<hstring const*>(&hashAlgorithmName)));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCertificateBlob(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCertificateBlob());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Issuer(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Issuer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasPrivateKey(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasPrivateKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStronglyProtected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStronglyProtected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValidFrom(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValidFrom());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValidTo(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValidTo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnhancedKeyUsages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnhancedKeyUsages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FriendlyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FriendlyName());
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate2>
{
    HRESULT __stdcall get_IsSecurityDeviceBound(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSecurityDeviceBound());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyUsages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyUsages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyAlgorithmName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyAlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignatureAlgorithmName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignatureAlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignatureHashAlgorithmName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignatureHashAlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubjectAlternativeName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubjectAlternativeName());
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate3>
{
    HRESULT __stdcall get_IsPerUser(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPerUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StoreName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StoreName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStorageProviderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyStorageProviderName());
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateChain> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateChain>
{
    HRESULT __stdcall Validate(abi_t<Windows::Security::Cryptography::Certificates::ChainValidationResult>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().Validate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ValidateWithParameters(::IUnknown* parameter, abi_t<Windows::Security::Cryptography::Certificates::ChainValidationResult>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().Validate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ChainValidationParameters const*>(&parameter)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCertificates(bool includeRoot, ::IUnknown** certificates) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *certificates = detach_abi(this->shim().GetCertificates(includeRoot));
            return S_OK;
        }
        catch (...)
        {
            *certificates = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
{
    HRESULT __stdcall CreateRequestAsync(::IUnknown* request, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateRequestAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateRequestProperties const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InstallCertificateAsync(HSTRING certificate, abi_t<Windows::Security::Cryptography::Certificates::InstallOptions> installOption, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstallCertificateAsync(*reinterpret_cast<hstring const*>(&certificate), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ImportPfxDataAsync(HSTRING pfxData, HSTRING password, abi_t<Windows::Security::Cryptography::Certificates::ExportOption> exportable, abi_t<Windows::Security::Cryptography::Certificates::KeyProtectionLevel> keyProtectionLevel, abi_t<Windows::Security::Cryptography::Certificates::InstallOptions> installOption, HSTRING friendlyName, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
{
    HRESULT __stdcall get_UserCertificateEnrollmentManager(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserCertificateEnrollmentManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ImportPfxDataToKspAsync(HSTRING pfxData, HSTRING password, abi_t<Windows::Security::Cryptography::Certificates::ExportOption> exportable, abi_t<Windows::Security::Cryptography::Certificates::KeyProtectionLevel> keyProtectionLevel, abi_t<Windows::Security::Cryptography::Certificates::InstallOptions> installOption, HSTRING friendlyName, HSTRING keyStorageProvider, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName), *reinterpret_cast<hstring const*>(&keyStorageProvider)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
{
    HRESULT __stdcall ImportPfxDataToKspWithParametersAsync(HSTRING pfxData, HSTRING password, ::IUnknown* pfxImportParameters, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::PfxImportParameters const*>(&pfxImportParameters)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateExtension> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateExtension>
{
    HRESULT __stdcall get_ObjectId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ObjectId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ObjectId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ObjectId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCritical(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCritical());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCritical(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCritical(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EncodeValue(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EncodeValue(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateFactory>
{
    HRESULT __stdcall CreateCertificate(::IUnknown* certBlob, ::IUnknown** certificate) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *certificate = detach_abi(this->shim().CreateCertificate(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&certBlob)));
            return S_OK;
        }
        catch (...)
        {
            *certificate = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
{
    HRESULT __stdcall get_EncipherOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncipherOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EncipherOnly(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EncipherOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrlSign(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CrlSign());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CrlSign(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CrlSign(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyCertificateSign(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyCertificateSign());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyCertificateSign(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyCertificateSign(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyAgreement(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyAgreement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyAgreement(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyAgreement(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataEncipherment(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataEncipherment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataEncipherment(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataEncipherment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyEncipherment(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyEncipherment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyEncipherment(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyEncipherment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonRepudiation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NonRepudiation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NonRepudiation(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NonRepudiation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DigitalSignature(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DigitalSignature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DigitalSignature(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DigitalSignature(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateQuery> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateQuery>
{
    HRESULT __stdcall get_EnhancedKeyUsages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnhancedKeyUsages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IssuerName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IssuerName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IssuerName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IssuerName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FriendlyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbprint(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Thumbprint());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbprint(uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbprint(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HardwareOnly(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HardwareOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateQuery2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateQuery2>
{
    HRESULT __stdcall get_IncludeDuplicates(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncludeDuplicates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeDuplicates(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeDuplicates(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeExpiredCertificates(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncludeExpiredCertificates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeExpiredCertificates(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeExpiredCertificates(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StoreName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StoreName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StoreName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StoreName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
{
    HRESULT __stdcall get_Subject(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subject(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subject(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyAlgorithmName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyAlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyAlgorithmName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeySize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeySize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeySize(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeySize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FriendlyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HashAlgorithmName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HashAlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HashAlgorithmName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HashAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Exportable(abi_t<Windows::Security::Cryptography::Certificates::ExportOption>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exportable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Exportable(abi_t<Windows::Security::Cryptography::Certificates::ExportOption> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exportable(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyUsages(abi_t<Windows::Security::Cryptography::Certificates::EnrollKeyUsages>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyUsages());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyUsages(abi_t<Windows::Security::Cryptography::Certificates::EnrollKeyUsages> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyUsages(*reinterpret_cast<Windows::Security::Cryptography::Certificates::EnrollKeyUsages const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyProtectionLevel(abi_t<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyProtectionLevel(abi_t<Windows::Security::Cryptography::Certificates::KeyProtectionLevel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyProtectionLevel(*reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStorageProviderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyStorageProviderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyStorageProviderName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyStorageProviderName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
{
    HRESULT __stdcall get_SmartcardReaderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmartcardReaderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmartcardReaderName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmartcardReaderName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SigningCertificate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SigningCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SigningCertificate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SigningCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttestationCredentialCertificate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttestationCredentialCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AttestationCredentialCertificate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AttestationCredentialCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
{
    HRESULT __stdcall get_CurveName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurveName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CurveName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurveName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurveParameters(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().CurveParameters());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CurveParameters(uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurveParameters(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainerNamePrefix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContainerNamePrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContainerNamePrefix(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContainerNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainerName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContainerName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContainerName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContainerName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseExistingKey(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UseExistingKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UseExistingKey(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseExistingKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
{
    HRESULT __stdcall get_SuppressedDefaults(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuppressedDefaults());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubjectAlternativeName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubjectAlternativeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Extensions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Extensions());
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStore> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStore>
{
    HRESULT __stdcall Add(::IUnknown* certificate) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Delete(::IUnknown* certificate) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delete(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStore2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStore2>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
{
    HRESULT __stdcall FindAllAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllWithQueryAsync(::IUnknown* query, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateQuery const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrustedRootCertificationAuthorities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrustedRootCertificationAuthorities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IntermediateCertificationAuthorities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IntermediateCertificationAuthorities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStoreByName(HSTRING storeName, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStoreByName(*reinterpret_cast<hstring const*>(&storeName)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
{
    HRESULT __stdcall GetUserStoreByName(HSTRING storeName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetUserStoreByName(*reinterpret_cast<hstring const*>(&storeName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IChainBuildingParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
{
    HRESULT __stdcall get_EnhancedKeyUsages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnhancedKeyUsages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValidationTimestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValidationTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ValidationTimestamp(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValidationTimestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RevocationCheckEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RevocationCheckEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RevocationCheckEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RevocationCheckEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkRetrievalEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkRetrievalEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NetworkRetrievalEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkRetrievalEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthorityInformationAccessEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthorityInformationAccessEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthorityInformationAccessEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthorityInformationAccessEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentTimeValidationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentTimeValidationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CurrentTimeValidationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentTimeValidationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExclusiveTrustRoots(::IUnknown** certificates) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *certificates = detach_abi(this->shim().ExclusiveTrustRoots());
            return S_OK;
        }
        catch (...)
        {
            *certificates = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IChainValidationParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IChainValidationParameters>
{
    HRESULT __stdcall get_CertificateChainPolicy(abi_t<Windows::Security::Cryptography::Certificates::CertificateChainPolicy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CertificateChainPolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CertificateChainPolicy(abi_t<Windows::Security::Cryptography::Certificates::CertificateChainPolicy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CertificateChainPolicy(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateChainPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerDnsName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerDnsName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServerDnsName(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerDnsName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
{
    HRESULT __stdcall get_Certificates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Certificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Signers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Signers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall VerifySignature(abi_t<Windows::Security::Cryptography::Certificates::SignatureValidationResult>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerifySignature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
{
    HRESULT __stdcall CreateCmsAttachedSignature(::IUnknown* inputBlob, ::IUnknown** cmsSignedData) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cmsSignedData = detach_abi(this->shim().CreateCmsAttachedSignature(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBlob)));
            return S_OK;
        }
        catch (...)
        {
            *cmsSignedData = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
{
    HRESULT __stdcall GenerateSignatureAsync(::IUnknown* data, ::IUnknown* signers, ::IUnknown* certificates, ::IUnknown** outputBlob) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *outputBlob = detach_abi(this->shim().GenerateSignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const*>(&signers), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return S_OK;
        }
        catch (...)
        {
            *outputBlob = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
{
    HRESULT __stdcall get_Certificates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Certificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Signers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Signers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall VerifySignatureAsync(::IUnknown* data, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerifySignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&data)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
{
    HRESULT __stdcall CreateCmsDetachedSignature(::IUnknown* inputBlob, ::IUnknown** cmsSignedData) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cmsSignedData = detach_abi(this->shim().CreateCmsDetachedSignature(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBlob)));
            return S_OK;
        }
        catch (...)
        {
            *cmsSignedData = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
{
    HRESULT __stdcall GenerateSignatureAsync(::IUnknown* data, ::IUnknown* signers, ::IUnknown* certificates, ::IUnknown** outputBlob) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *outputBlob = detach_abi(this->shim().GenerateSignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&data), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const*>(&signers), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return S_OK;
        }
        catch (...)
        {
            *outputBlob = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsSignerInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
{
    HRESULT __stdcall get_Certificate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Certificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Certificate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Certificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HashAlgorithmName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HashAlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HashAlgorithmName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HashAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimestampInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimestampInfo());
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
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
{
    HRESULT __stdcall get_SigningCertificate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SigningCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Certificates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Certificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
{
    HRESULT __stdcall get_Rsa(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rsa());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dsa(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dsa());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ecdh256(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ecdh256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ecdh384(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ecdh384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ecdh521(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ecdh521());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ecdsa256(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ecdsa256());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ecdsa384(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ecdsa384());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ecdsa521(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ecdsa521());
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
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
{
    HRESULT __stdcall get_Ecdsa(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ecdsa());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ecdh(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ecdh());
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
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
{
    HRESULT __stdcall DecryptTpmAttestationCredentialAsync(HSTRING credential, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecryptTpmAttestationCredentialAsync(*reinterpret_cast<hstring const*>(&credential)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTpmAttestationCredentialId(HSTRING credential, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTpmAttestationCredentialId(*reinterpret_cast<hstring const*>(&credential)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
{
    HRESULT __stdcall DecryptTpmAttestationCredentialWithContainerNameAsync(HSTRING credential, HSTRING containerName, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecryptTpmAttestationCredentialAsync(*reinterpret_cast<hstring const*>(&credential), *reinterpret_cast<hstring const*>(&containerName)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
{
    HRESULT __stdcall get_SoftwareKeyStorageProvider(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SoftwareKeyStorageProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmartcardKeyStorageProvider(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmartcardKeyStorageProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlatformKeyStorageProvider(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlatformKeyStorageProvider());
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
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
{
    HRESULT __stdcall get_PassportKeyStorageProvider(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PassportKeyStorageProvider());
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
struct produce<D, Windows::Security::Cryptography::Certificates::IPfxImportParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IPfxImportParameters>
{
    HRESULT __stdcall get_Exportable(abi_t<Windows::Security::Cryptography::Certificates::ExportOption>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exportable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Exportable(abi_t<Windows::Security::Cryptography::Certificates::ExportOption> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exportable(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyProtectionLevel(abi_t<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyProtectionLevel(abi_t<Windows::Security::Cryptography::Certificates::KeyProtectionLevel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyProtectionLevel(*reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstallOptions(abi_t<Windows::Security::Cryptography::Certificates::InstallOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstallOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InstallOptions(abi_t<Windows::Security::Cryptography::Certificates::InstallOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InstallOptions(*reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FriendlyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStorageProviderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyStorageProviderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyStorageProviderName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyStorageProviderName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainerNamePrefix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContainerNamePrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContainerNamePrefix(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContainerNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReaderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReaderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReaderName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReaderName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
{
    HRESULT __stdcall get_Personal(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Personal());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrustedRootCertificationAuthorities(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrustedRootCertificationAuthorities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IntermediateCertificationAuthorities(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IntermediateCertificationAuthorities());
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
struct produce<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
{
    HRESULT __stdcall get_EmailName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IPAddress(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IPAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Url(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Url());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DnsName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DnsName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistinguishedName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DistinguishedName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrincipalName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrincipalName());
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
struct produce<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> : produce_base<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
{
    HRESULT __stdcall get_EmailNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IPAddresses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IPAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Urls(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Urls());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DnsNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DnsNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistinguishedNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DistinguishedNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrincipalNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrincipalNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Extension(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Extension());
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
struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
{
    HRESULT __stdcall CreateRequestAsync(::IUnknown* request, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateRequestAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateRequestProperties const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InstallCertificateAsync(HSTRING certificate, abi_t<Windows::Security::Cryptography::Certificates::InstallOptions> installOption, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstallCertificateAsync(*reinterpret_cast<hstring const*>(&certificate), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ImportPfxDataAsync(HSTRING pfxData, HSTRING password, abi_t<Windows::Security::Cryptography::Certificates::ExportOption> exportable, abi_t<Windows::Security::Cryptography::Certificates::KeyProtectionLevel> keyProtectionLevel, abi_t<Windows::Security::Cryptography::Certificates::InstallOptions> installOption, HSTRING friendlyName, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ImportPfxDataToKspAsync(HSTRING pfxData, HSTRING password, abi_t<Windows::Security::Cryptography::Certificates::ExportOption> exportable, abi_t<Windows::Security::Cryptography::Certificates::KeyProtectionLevel> keyProtectionLevel, abi_t<Windows::Security::Cryptography::Certificates::InstallOptions> installOption, HSTRING friendlyName, HSTRING keyStorageProvider, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName), *reinterpret_cast<hstring const*>(&keyStorageProvider)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
{
    HRESULT __stdcall ImportPfxDataToKspWithParametersAsync(HSTRING pfxData, HSTRING password, ::IUnknown* pfxImportParameters, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::PfxImportParameters const*>(&pfxImportParameters)));
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
struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateStore> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateStore>
{
    HRESULT __stdcall RequestAddAsync(::IUnknown* certificate, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAddAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsync(::IUnknown* certificate, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestDeleteAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

inline Certificate::Certificate(Windows::Storage::Streams::IBuffer const& certBlob) :
    Certificate(get_activation_factory<Certificate, Windows::Security::Cryptography::Certificates::ICertificateFactory>().CreateCertificate(certBlob))
{}

inline Windows::Foundation::IAsyncOperation<hstring> CertificateEnrollmentManager::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request)
{
    return get_activation_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>().CreateRequestAsync(request);
}

inline Windows::Foundation::IAsyncAction CertificateEnrollmentManager::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption)
{
    return get_activation_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>().InstallCertificateAsync(certificate, installOption);
}

inline Windows::Foundation::IAsyncAction CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName)
{
    return get_activation_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>().ImportPfxDataAsync(pfxData, password, exportable, keyProtectionLevel, installOption, friendlyName);
}

inline Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager CertificateEnrollmentManager::UserCertificateEnrollmentManager()
{
    return get_activation_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>().UserCertificateEnrollmentManager();
}

inline Windows::Foundation::IAsyncAction CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider)
{
    return get_activation_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>().ImportPfxDataAsync(pfxData, password, exportable, keyProtectionLevel, installOption, friendlyName, keyStorageProvider);
}

inline Windows::Foundation::IAsyncAction CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters)
{
    return get_activation_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>().ImportPfxDataAsync(pfxData, password, pfxImportParameters);
}

inline CertificateExtension::CertificateExtension() :
    CertificateExtension(activate_instance<CertificateExtension>())
{}

inline CertificateKeyUsages::CertificateKeyUsages() :
    CertificateKeyUsages(activate_instance<CertificateKeyUsages>())
{}

inline CertificateQuery::CertificateQuery() :
    CertificateQuery(activate_instance<CertificateQuery>())
{}

inline CertificateRequestProperties::CertificateRequestProperties() :
    CertificateRequestProperties(activate_instance<CertificateRequestProperties>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> CertificateStores::FindAllAsync()
{
    return get_activation_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> CertificateStores::FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query)
{
    return get_activation_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>().FindAllAsync(query);
}

inline Windows::Security::Cryptography::Certificates::CertificateStore CertificateStores::TrustedRootCertificationAuthorities()
{
    return get_activation_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>().TrustedRootCertificationAuthorities();
}

inline Windows::Security::Cryptography::Certificates::CertificateStore CertificateStores::IntermediateCertificationAuthorities()
{
    return get_activation_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>().IntermediateCertificationAuthorities();
}

inline Windows::Security::Cryptography::Certificates::CertificateStore CertificateStores::GetStoreByName(param::hstring const& storeName)
{
    return get_activation_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>().GetStoreByName(storeName);
}

inline Windows::Security::Cryptography::Certificates::UserCertificateStore CertificateStores::GetUserStoreByName(param::hstring const& storeName)
{
    return get_activation_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>().GetUserStoreByName(storeName);
}

inline ChainBuildingParameters::ChainBuildingParameters() :
    ChainBuildingParameters(activate_instance<ChainBuildingParameters>())
{}

inline ChainValidationParameters::ChainValidationParameters() :
    ChainValidationParameters(activate_instance<ChainValidationParameters>())
{}

inline CmsAttachedSignature::CmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) :
    CmsAttachedSignature(get_activation_factory<CmsAttachedSignature, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>().CreateCmsAttachedSignature(inputBlob))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CmsAttachedSignature::GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates)
{
    return get_activation_factory<CmsAttachedSignature, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>().GenerateSignatureAsync(data, signers, certificates);
}

inline CmsDetachedSignature::CmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) :
    CmsDetachedSignature(get_activation_factory<CmsDetachedSignature, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>().CreateCmsDetachedSignature(inputBlob))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CmsDetachedSignature::GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates)
{
    return get_activation_factory<CmsDetachedSignature, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>().GenerateSignatureAsync(data, signers, certificates);
}

inline CmsSignerInfo::CmsSignerInfo() :
    CmsSignerInfo(activate_instance<CmsSignerInfo>())
{}

inline hstring KeyAlgorithmNames::Rsa()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>().Rsa();
}

inline hstring KeyAlgorithmNames::Dsa()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>().Dsa();
}

inline hstring KeyAlgorithmNames::Ecdh256()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>().Ecdh256();
}

inline hstring KeyAlgorithmNames::Ecdh384()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>().Ecdh384();
}

inline hstring KeyAlgorithmNames::Ecdh521()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>().Ecdh521();
}

inline hstring KeyAlgorithmNames::Ecdsa256()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>().Ecdsa256();
}

inline hstring KeyAlgorithmNames::Ecdsa384()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>().Ecdsa384();
}

inline hstring KeyAlgorithmNames::Ecdsa521()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>().Ecdsa521();
}

inline hstring KeyAlgorithmNames::Ecdsa()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>().Ecdsa();
}

inline hstring KeyAlgorithmNames::Ecdh()
{
    return get_activation_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>().Ecdh();
}

inline Windows::Foundation::IAsyncOperation<hstring> KeyAttestationHelper::DecryptTpmAttestationCredentialAsync(param::hstring const& credential)
{
    return get_activation_factory<KeyAttestationHelper, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>().DecryptTpmAttestationCredentialAsync(credential);
}

inline hstring KeyAttestationHelper::GetTpmAttestationCredentialId(param::hstring const& credential)
{
    return get_activation_factory<KeyAttestationHelper, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>().GetTpmAttestationCredentialId(credential);
}

inline Windows::Foundation::IAsyncOperation<hstring> KeyAttestationHelper::DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName)
{
    return get_activation_factory<KeyAttestationHelper, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>().DecryptTpmAttestationCredentialAsync(credential, containerName);
}

inline hstring KeyStorageProviderNames::SoftwareKeyStorageProvider()
{
    return get_activation_factory<KeyStorageProviderNames, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>().SoftwareKeyStorageProvider();
}

inline hstring KeyStorageProviderNames::SmartcardKeyStorageProvider()
{
    return get_activation_factory<KeyStorageProviderNames, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>().SmartcardKeyStorageProvider();
}

inline hstring KeyStorageProviderNames::PlatformKeyStorageProvider()
{
    return get_activation_factory<KeyStorageProviderNames, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>().PlatformKeyStorageProvider();
}

inline hstring KeyStorageProviderNames::PassportKeyStorageProvider()
{
    return get_activation_factory<KeyStorageProviderNames, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>().PassportKeyStorageProvider();
}

inline PfxImportParameters::PfxImportParameters() :
    PfxImportParameters(activate_instance<PfxImportParameters>())
{}

inline hstring StandardCertificateStoreNames::Personal()
{
    return get_activation_factory<StandardCertificateStoreNames, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>().Personal();
}

inline hstring StandardCertificateStoreNames::TrustedRootCertificationAuthorities()
{
    return get_activation_factory<StandardCertificateStoreNames, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>().TrustedRootCertificationAuthorities();
}

inline hstring StandardCertificateStoreNames::IntermediateCertificationAuthorities()
{
    return get_activation_factory<StandardCertificateStoreNames, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>().IntermediateCertificationAuthorities();
}

inline SubjectAlternativeNameInfo::SubjectAlternativeNameInfo() :
    SubjectAlternativeNameInfo(activate_instance<SubjectAlternativeNameInfo>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificate> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificate2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificate3> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateChain> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateChain> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateExtension> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateExtension> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateFactory> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IChainBuildingParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IChainBuildingParameters> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IChainValidationParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IChainValidationParameters> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsSignerInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICmsSignerInfo> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IPfxImportParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IPfxImportParameters> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateStore> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::Certificate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::Certificate> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateChain> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CertificateChain> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateExtension> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CertificateExtension> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateKeyUsages> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CertificateKeyUsages> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateQuery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CertificateQuery> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateRequestProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CertificateRequestProperties> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CertificateStore> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateStores> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CertificateStores> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ChainBuildingParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ChainBuildingParameters> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ChainValidationParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::ChainValidationParameters> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsAttachedSignature> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CmsAttachedSignature> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsDetachedSignature> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CmsDetachedSignature> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsSignerInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CmsSignerInfo> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsTimestampInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::CmsTimestampInfo> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyAlgorithmNames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::KeyAlgorithmNames> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyAttestationHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::KeyAttestationHelper> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyStorageProviderNames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::KeyStorageProviderNames> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::PfxImportParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::PfxImportParameters> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager> {};

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::UserCertificateStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Cryptography::Certificates::UserCertificateStore> {};

}

WINRT_WARNING_POP
