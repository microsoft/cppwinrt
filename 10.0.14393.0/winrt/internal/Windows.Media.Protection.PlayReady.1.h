// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.Protection.PlayReady.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.Protection.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Media.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Protection::PlayReady {

struct __declspec(uuid("3bd6781b-61b8-46e2-99a5-8abcb6b9f7d6")) __declspec(novtable) INDClient : Windows::IInspectable
{
    virtual HRESULT __stdcall add_RegistrationCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RegistrationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_ProximityDetectionCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ProximityDetectionCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_LicenseFetchCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LicenseFetchCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_ReRegistrationNeeded(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReRegistrationNeeded(event_token token) = 0;
    virtual HRESULT __stdcall add_ClosedCaptionDataReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ClosedCaptionDataReceived(event_token token) = 0;
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IUriRuntimeClass * contentUrl, uint32_t startAsyncOptions, Windows::Media::Protection::PlayReady::INDCustomData * registrationCustomData, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * licenseFetchDescriptor, Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDStartResult> ** result) = 0;
    virtual HRESULT __stdcall abi_LicenseFetchAsync(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * licenseFetchDescriptor, Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDLicenseFetchResult> ** result) = 0;
    virtual HRESULT __stdcall abi_ReRegistrationAsync(Windows::Media::Protection::PlayReady::INDCustomData * registrationCustomData, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_Close() = 0;
};

struct __declspec(uuid("3e53dd62-fee8-451f-b0d4-f706cca3e037")) __declspec(novtable) INDClientFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::Media::Protection::PlayReady::INDDownloadEngine * downloadEngine, Windows::Media::Protection::PlayReady::INDStreamParser * streamParser, Windows::Media::Protection::PlayReady::INDMessenger * pMessenger, Windows::Media::Protection::PlayReady::INDClient ** instance) = 0;
};

struct __declspec(uuid("4738d29f-c345-4649-8468-b8c5fc357190")) __declspec(novtable) INDClosedCaptionDataReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClosedCaptionDataFormat(winrt::Windows::Media::Protection::PlayReady::NDClosedCaptionFormat * ccForamt) = 0;
    virtual HRESULT __stdcall get_PresentationTimestamp(int64_t * presentationTimestamp) = 0;
    virtual HRESULT __stdcall get_ClosedCaptionData(uint32_t * __ccDataBytesSize, uint8_t ** ccDataBytes) = 0;
};

struct __declspec(uuid("f5cb0fdc-2d09-4f19-b5e1-76a0b3ee9267")) __declspec(novtable) INDCustomData : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CustomDataTypeID(uint32_t * __customDataTypeIDBytesSize, uint8_t ** customDataTypeIDBytes) = 0;
    virtual HRESULT __stdcall get_CustomData(uint32_t * __customDataBytesSize, uint8_t ** customDataBytes) = 0;
};

struct __declspec(uuid("d65405ab-3424-4833-8c9a-af5fdeb22872")) __declspec(novtable) INDCustomDataFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(uint32_t __customDataTypeIDBytesSize, uint8_t * customDataTypeIDBytes, uint32_t __customDataBytesSize, uint8_t * customDataBytes, Windows::Media::Protection::PlayReady::INDCustomData ** instance) = 0;
};

struct __declspec(uuid("2d223d65-c4b6-4438-8d46-b96e6d0fb21f")) __declspec(novtable) INDDownloadEngine : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Open(Windows::Foundation::IUriRuntimeClass * uri, uint32_t __sessionIDBytesSize, uint8_t * sessionIDBytes) = 0;
    virtual HRESULT __stdcall abi_Pause() = 0;
    virtual HRESULT __stdcall abi_Resume() = 0;
    virtual HRESULT __stdcall abi_Close() = 0;
    virtual HRESULT __stdcall abi_Seek(Windows::Foundation::TimeSpan startPosition) = 0;
    virtual HRESULT __stdcall get_CanSeek(bool * canSeek) = 0;
    virtual HRESULT __stdcall get_BufferFullMinThresholdInSamples(uint32_t * bufferFullMinThreshold) = 0;
    virtual HRESULT __stdcall get_BufferFullMaxThresholdInSamples(uint32_t * bufferFullMaxThreshold) = 0;
    virtual HRESULT __stdcall get_Notifier(Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier ** instance) = 0;
};

struct __declspec(uuid("d720b4d4-f4b8-4530-a809-9193a571e7fc")) __declspec(novtable) INDDownloadEngineNotifier : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnStreamOpened() = 0;
    virtual HRESULT __stdcall abi_OnPlayReadyObjectReceived(uint32_t __dataBytesSize, uint8_t * dataBytes) = 0;
    virtual HRESULT __stdcall abi_OnContentIDReceived(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * licenseFetchDescriptor) = 0;
    virtual HRESULT __stdcall abi_OnDataReceived(uint32_t __dataBytesSize, uint8_t * dataBytes, uint32_t bytesReceived) = 0;
    virtual HRESULT __stdcall abi_OnEndOfStream() = 0;
    virtual HRESULT __stdcall abi_OnNetworkError() = 0;
};

struct __declspec(uuid("1ee30a1a-11b2-4558-8865-e3a516922517")) __declspec(novtable) INDLicenseFetchCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResponseCustomData(Windows::Media::Protection::PlayReady::INDCustomData ** customData) = 0;
};

struct __declspec(uuid("5498d33a-e686-4935-a567-7ca77ad20fa4")) __declspec(novtable) INDLicenseFetchDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContentIDType(winrt::Windows::Media::Protection::PlayReady::NDContentIDType * contentIDType) = 0;
    virtual HRESULT __stdcall get_ContentID(uint32_t * __contentIDBytesSize, uint8_t ** contentIDBytes) = 0;
    virtual HRESULT __stdcall get_LicenseFetchChallengeCustomData(Windows::Media::Protection::PlayReady::INDCustomData ** licenseFetchChallengeCustomData) = 0;
    virtual HRESULT __stdcall put_LicenseFetchChallengeCustomData(Windows::Media::Protection::PlayReady::INDCustomData * licenseFetchChallengeCustomData) = 0;
};

struct __declspec(uuid("d0031202-cfac-4f00-ae6a-97af80b848f2")) __declspec(novtable) INDLicenseFetchDescriptorFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(winrt::Windows::Media::Protection::PlayReady::NDContentIDType contentIDType, uint32_t __contentIDBytesSize, uint8_t * contentIDBytes, Windows::Media::Protection::PlayReady::INDCustomData * licenseFetchChallengeCustomData, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor ** instance) = 0;
};

struct __declspec(uuid("21d39698-aa62-45ff-a5ff-8037e5433825")) __declspec(novtable) INDLicenseFetchResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResponseCustomData(Windows::Media::Protection::PlayReady::INDCustomData ** customData) = 0;
};

struct __declspec(uuid("d42df95d-a75b-47bf-8249-bc83820da38a")) __declspec(novtable) INDMessenger : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SendRegistrationRequestAsync(uint32_t __sessionIDBytesSize, uint8_t * sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t * challengeDataBytes, Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> ** result) = 0;
    virtual HRESULT __stdcall abi_SendProximityDetectionStartAsync(winrt::Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType, uint32_t __transmitterChannelBytesSize, uint8_t * transmitterChannelBytes, uint32_t __sessionIDBytesSize, uint8_t * sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t * challengeDataBytes, Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> ** result) = 0;
    virtual HRESULT __stdcall abi_SendProximityDetectionResponseAsync(winrt::Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType, uint32_t __transmitterChannelBytesSize, uint8_t * transmitterChannelBytes, uint32_t __sessionIDBytesSize, uint8_t * sessionIDBytes, uint32_t __responseDataBytesSize, uint8_t * responseDataBytes, Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> ** result) = 0;
    virtual HRESULT __stdcall abi_SendLicenseFetchRequestAsync(uint32_t __sessionIDBytesSize, uint8_t * sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t * challengeDataBytes, Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> ** result) = 0;
};

struct __declspec(uuid("2a706328-da25-4f8c-9eb7-5d0fc3658bca")) __declspec(novtable) INDProximityDetectionCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProximityDetectionRetryCount(uint32_t * retryCount) = 0;
};

struct __declspec(uuid("9e39b64d-ab5b-4905-acdc-787a77c6374d")) __declspec(novtable) INDRegistrationCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResponseCustomData(Windows::Media::Protection::PlayReady::INDCustomData ** customData) = 0;
    virtual HRESULT __stdcall get_TransmitterProperties(Windows::Media::Protection::PlayReady::INDTransmitterProperties ** transmitterProperties) = 0;
    virtual HRESULT __stdcall get_TransmitterCertificateAccepted(bool * acceptpt) = 0;
    virtual HRESULT __stdcall put_TransmitterCertificateAccepted(bool accept) = 0;
};

struct __declspec(uuid("e3685517-a584-479d-90b7-d689c7bf7c80")) __declspec(novtable) INDSendResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Response(uint32_t * __responseDataBytesSize, uint8_t ** responseDataBytes) = 0;
};

struct __declspec(uuid("79f6e96e-f50f-4015-8ba4-c2bc344ebd4e")) __declspec(novtable) INDStartResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MediaStreamSource(Windows::Media::Core::IMediaStreamSource ** mediaStreamSource) = 0;
};

struct __declspec(uuid("d8f0bef8-91d2-4d47-a3f9-eaff4edb729f")) __declspec(novtable) INDStorageFileHelper : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFileURLs(Windows::Storage::IStorageFile * file, Windows::Foundation::Collections::IVector<hstring> ** fileURLs) = 0;
};

struct __declspec(uuid("e0baa198-9796-41c9-8695-59437e67e66a")) __declspec(novtable) INDStreamParser : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ParseData(uint32_t __dataBytesSize, uint8_t * dataBytes) = 0;
    virtual HRESULT __stdcall abi_GetStreamInformation(Windows::Media::Core::IMediaStreamDescriptor * descriptor, winrt::Windows::Media::Protection::PlayReady::NDMediaStreamType * streamType, uint32_t * streamID) = 0;
    virtual HRESULT __stdcall abi_BeginOfStream() = 0;
    virtual HRESULT __stdcall abi_EndOfStream() = 0;
    virtual HRESULT __stdcall get_Notifier(Windows::Media::Protection::PlayReady::INDStreamParserNotifier ** instance) = 0;
};

struct __declspec(uuid("c167acd0-2ce6-426c-ace5-5e9275fea715")) __declspec(novtable) INDStreamParserNotifier : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnContentIDReceived(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * licenseFetchDescriptor) = 0;
    virtual HRESULT __stdcall abi_OnMediaStreamDescriptorCreated(Windows::Foundation::Collections::IVector<Windows::Media::Core::AudioStreamDescriptor> * audioStreamDescriptors, Windows::Foundation::Collections::IVector<Windows::Media::Core::VideoStreamDescriptor> * videoStreamDescriptors) = 0;
    virtual HRESULT __stdcall abi_OnSampleParsed(uint32_t streamID, winrt::Windows::Media::Protection::PlayReady::NDMediaStreamType streamType, Windows::Media::Core::IMediaStreamSample * streamSample, int64_t pts, winrt::Windows::Media::Protection::PlayReady::NDClosedCaptionFormat ccFormat, uint32_t __ccDataBytesSize, uint8_t * ccDataBytes) = 0;
    virtual HRESULT __stdcall abi_OnBeginSetupDecryptor(Windows::Media::Core::IMediaStreamDescriptor * descriptor, GUID keyID, uint32_t __proBytesSize, uint8_t * proBytes) = 0;
};

struct __declspec(uuid("7dd85cfe-1b99-4f68-8f82-8177f7cedf2b")) __declspec(novtable) INDTCPMessengerFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(hstring remoteHostName, uint32_t remoteHostPort, Windows::Media::Protection::PlayReady::INDMessenger ** instance) = 0;
};

struct __declspec(uuid("e536af23-ac4f-4adc-8c66-4ff7c2702dd6")) __declspec(novtable) INDTransmitterProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CertificateType(winrt::Windows::Media::Protection::PlayReady::NDCertificateType * type) = 0;
    virtual HRESULT __stdcall get_PlatformIdentifier(winrt::Windows::Media::Protection::PlayReady::NDCertificatePlatformID * identifier) = 0;
    virtual HRESULT __stdcall get_SupportedFeatures(uint32_t * __featureSetsSize, winrt::Windows::Media::Protection::PlayReady::NDCertificateFeature ** featureSets) = 0;
    virtual HRESULT __stdcall get_SecurityLevel(uint32_t * level) = 0;
    virtual HRESULT __stdcall get_SecurityVersion(uint32_t * securityVersion) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(Windows::Foundation::DateTime * expirationDate) = 0;
    virtual HRESULT __stdcall get_ClientID(uint32_t * __clientIDBytesSize, uint8_t ** clientIDBytes) = 0;
    virtual HRESULT __stdcall get_ModelDigest(uint32_t * __modelDigestBytesSize, uint8_t ** modelDigestBytes) = 0;
    virtual HRESULT __stdcall get_ModelManufacturerName(hstring * modelManufacturerName) = 0;
    virtual HRESULT __stdcall get_ModelName(hstring * modelName) = 0;
    virtual HRESULT __stdcall get_ModelNumber(hstring * modelNumber) = 0;
};

struct __declspec(uuid("9a438a6a-7f4c-452e-88bd-0148c6387a2c")) __declspec(novtable) IPlayReadyContentHeader : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeyId(GUID * value) = 0;
    virtual HRESULT __stdcall get_KeyIdString(hstring * value) = 0;
    virtual HRESULT __stdcall get_LicenseAcquisitionUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_LicenseAcquisitionUserInterfaceUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_DomainServiceId(GUID * value) = 0;
    virtual HRESULT __stdcall get_EncryptionType(winrt::Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm * value) = 0;
    virtual HRESULT __stdcall get_CustomAttributes(hstring * value) = 0;
    virtual HRESULT __stdcall get_DecryptorSetup(winrt::Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup * value) = 0;
    virtual HRESULT __stdcall abi_GetSerializedHeader(uint32_t * __headerBytesSize, uint8_t ** headerBytes) = 0;
    virtual HRESULT __stdcall get_HeaderWithEmbeddedUpdates(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader ** value) = 0;
};

struct __declspec(uuid("359c79f4-2180-498c-965b-e754d875eab2")) __declspec(novtable) IPlayReadyContentHeader2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeyIds(uint32_t * __contentKeyIdsSize, GUID ** contentKeyIds) = 0;
    virtual HRESULT __stdcall get_KeyIdStrings(uint32_t * __contentKeyIdStringsSize, hstring ** contentKeyIdStrings) = 0;
};

struct __declspec(uuid("cb97c8ff-b758-4776-bf01-217a8b510b2c")) __declspec(novtable) IPlayReadyContentHeaderFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstanceFromWindowsMediaDrmHeader(uint32_t __headerBytesSize, uint8_t * headerBytes, Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUrl, Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUserInterfaceUrl, hstring customAttributes, GUID domainServiceId, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader ** instance) = 0;
    virtual HRESULT __stdcall abi_CreateInstanceFromComponents(GUID contentKeyId, hstring contentKeyIdString, winrt::Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUrl, Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUserInterfaceUrl, hstring customAttributes, GUID domainServiceId, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader ** instance) = 0;
    virtual HRESULT __stdcall abi_CreateInstanceFromPlayReadyHeader(uint32_t __headerBytesSize, uint8_t * headerBytes, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader ** instance) = 0;
};

struct __declspec(uuid("d1239cf5-ae6d-4778-97fd-6e3a2eeadbeb")) __declspec(novtable) IPlayReadyContentHeaderFactory2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstanceFromComponents2(uint32_t dwFlags, uint32_t __contentKeyIdsSize, GUID * contentKeyIds, uint32_t __contentKeyIdStringsSize, hstring * contentKeyIdStrings, winrt::Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUrl, Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUserInterfaceUrl, hstring customAttributes, GUID domainServiceId, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader ** instance) = 0;
};

struct __declspec(uuid("fbfd2523-906d-4982-a6b8-6849565a7ce8")) __declspec(novtable) IPlayReadyContentResolver : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ServiceRequest(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * contentHeader, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest ** serviceRequest) = 0;
};

struct __declspec(uuid("adcc93ac-97e6-43ef-95e4-d7868f3b16a9")) __declspec(novtable) IPlayReadyDomain : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AccountId(GUID * value) = 0;
    virtual HRESULT __stdcall get_ServiceId(GUID * value) = 0;
    virtual HRESULT __stdcall get_Revision(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_FriendlyName(hstring * value) = 0;
    virtual HRESULT __stdcall get_DomainJoinUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("4df384ee-3121-4df3-a5e8-d0c24c0500fc")) __declspec(novtable) IPlayReadyDomainIterableFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(GUID domainAccountId, Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyDomain> ** domainIterable) = 0;
};

struct __declspec(uuid("171b4a5a-405f-4739-b040-67b9f0c38758")) __declspec(novtable) IPlayReadyDomainJoinServiceRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DomainAccountId(GUID * value) = 0;
    virtual HRESULT __stdcall put_DomainAccountId(GUID value) = 0;
    virtual HRESULT __stdcall get_DomainFriendlyName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DomainFriendlyName(hstring value) = 0;
    virtual HRESULT __stdcall get_DomainServiceId(GUID * value) = 0;
    virtual HRESULT __stdcall put_DomainServiceId(GUID value) = 0;
};

struct __declspec(uuid("062d58be-97ad-4917-aa03-46d4c252d464")) __declspec(novtable) IPlayReadyDomainLeaveServiceRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DomainAccountId(GUID * value) = 0;
    virtual HRESULT __stdcall put_DomainAccountId(GUID value) = 0;
    virtual HRESULT __stdcall get_DomainServiceId(GUID * value) = 0;
    virtual HRESULT __stdcall put_DomainServiceId(GUID value) = 0;
};

struct __declspec(uuid("24446b8e-10b9-4530-b25b-901a8029a9b2")) __declspec(novtable) IPlayReadyITADataGenerator : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GenerateData(GUID guidCPSystemId, uint32_t countOfStreams, Windows::Foundation::Collections::IPropertySet * configuration, winrt::Windows::Media::Protection::PlayReady::PlayReadyITADataFormat format, uint32_t * __dataBytesSize, uint8_t ** dataBytes) = 0;
};

struct __declspec(uuid("21f5a86b-008c-4611-ab2f-aaa6c69f0e24")) __declspec(novtable) IPlayReadyIndividualizationServiceRequest : Windows::IInspectable
{
};

struct __declspec(uuid("ee474c4e-fa3c-414d-a9f2-3ffc1ef832d4")) __declspec(novtable) IPlayReadyLicense : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FullyEvaluated(bool * value) = 0;
    virtual HRESULT __stdcall get_UsableForPlay(bool * value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall get_ExpireAfterFirstPlay(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_DomainAccountID(GUID * value) = 0;
    virtual HRESULT __stdcall get_ChainDepth(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_GetKIDAtChainDepth(uint32_t chainDepth, GUID * kid) = 0;
};

struct __declspec(uuid("5d85ff45-3e9f-4f48-93e1-9530c8d58c3e")) __declspec(novtable) IPlayReadyLicenseAcquisitionServiceRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContentHeader(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader ** value) = 0;
    virtual HRESULT __stdcall put_ContentHeader(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * value) = 0;
    virtual HRESULT __stdcall get_DomainServiceId(GUID * value) = 0;
    virtual HRESULT __stdcall put_DomainServiceId(GUID value) = 0;
};

struct __declspec(uuid("b7fa5eb5-fe0c-b225-bc60-5a9edd32ceb5")) __declspec(novtable) IPlayReadyLicenseAcquisitionServiceRequest2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SessionId(GUID * value) = 0;
};

struct __declspec(uuid("d4179f08-0837-4978-8e68-be4293c8d7a6")) __declspec(novtable) IPlayReadyLicenseIterableFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * contentHeader, bool fullyEvaluated, Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyLicense> ** instance) = 0;
};

struct __declspec(uuid("aaeb2141-0957-4405-b892-8bf3ec5dadd9")) __declspec(novtable) IPlayReadyLicenseManagement : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_DeleteLicenses(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * contentHeader, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("a1723a39-87fa-4fdd-abbb-a9720e845259")) __declspec(novtable) IPlayReadyLicenseSession : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateLAServiceRequest(Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest ** serviceRequest) = 0;
    virtual HRESULT __stdcall abi_ConfigureMediaProtectionManager(Windows::Media::Protection::IMediaProtectionManager * mpm) = 0;
};

struct __declspec(uuid("62492699-6527-429e-98be-48d798ac2739")) __declspec(novtable) IPlayReadyLicenseSessionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::Foundation::Collections::IPropertySet * configuration, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession ** instance) = 0;
};

struct __declspec(uuid("c12b231c-0ecd-4f11-a185-1e24a4a67fb7")) __declspec(novtable) IPlayReadyMeteringReportServiceRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MeteringCertificate(uint32_t * __meteringCertBytesSize, uint8_t ** meteringCertBytes) = 0;
    virtual HRESULT __stdcall put_MeteringCertificate(uint32_t __meteringCertBytesSize, uint8_t * meteringCertBytes) = 0;
};

struct __declspec(uuid("543d66ac-faf0-4560-84a5-0e4acec939e4")) __declspec(novtable) IPlayReadyRevocationServiceRequest : Windows::IInspectable
{
};

struct __declspec(uuid("5f1f0165-4214-4d9e-81eb-e89f9d294aee")) __declspec(novtable) IPlayReadySecureStopIterableFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(uint32_t __publisherCertBytesSize, uint8_t * publisherCertBytes, Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest> ** instance) = 0;
};

struct __declspec(uuid("b5501ee5-01bf-4401-9677-05630a6a4cc8")) __declspec(novtable) IPlayReadySecureStopServiceRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SessionID(GUID * value) = 0;
    virtual HRESULT __stdcall get_StartTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_UpdateTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_Stopped(bool * value) = 0;
    virtual HRESULT __stdcall get_PublisherCertificate(uint32_t * __publisherCertBytesSize, uint8_t ** publisherCertBytes) = 0;
};

struct __declspec(uuid("0e448ac9-e67e-494e-9f49-6285438c76cf")) __declspec(novtable) IPlayReadySecureStopServiceRequestFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(uint32_t __publisherCertBytesSize, uint8_t * publisherCertBytes, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest ** instance) = 0;
    virtual HRESULT __stdcall abi_CreateInstanceFromSessionID(GUID sessionID, uint32_t __publisherCertBytesSize, uint8_t * publisherCertBytes, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest ** instance) = 0;
};

struct __declspec(uuid("8bad2836-a703-45a6-a180-76f3565aa725")) __declspec(novtable) IPlayReadyServiceRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Uri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_ResponseCustomData(hstring * value) = 0;
    virtual HRESULT __stdcall get_ChallengeCustomData(hstring * value) = 0;
    virtual HRESULT __stdcall put_ChallengeCustomData(hstring value) = 0;
    virtual HRESULT __stdcall abi_BeginServiceRequest(Windows::Foundation::IAsyncAction ** action) = 0;
    virtual HRESULT __stdcall abi_NextServiceRequest(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest ** serviceRequest) = 0;
    virtual HRESULT __stdcall abi_GenerateManualEnablingChallenge(Windows::Media::Protection::PlayReady::IPlayReadySoapMessage ** challengeMessage) = 0;
    virtual HRESULT __stdcall abi_ProcessManualEnablingResponse(uint32_t __responseBytesSize, uint8_t * responseBytes, HRESULT * result) = 0;
};

struct __declspec(uuid("b659fcb5-ce41-41ba-8a0d-61df5fffa139")) __declspec(novtable) IPlayReadySoapMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetMessageBody(uint32_t * __messageBodyBytesSize, uint8_t ** messageBodyBytes) = 0;
    virtual HRESULT __stdcall get_MessageHeaders(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** messageUri) = 0;
};

struct __declspec(uuid("5e69c00d-247c-469a-8f31-5c1a1571d9c6")) __declspec(novtable) IPlayReadyStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DomainJoinServiceRequestType(GUID * value) = 0;
    virtual HRESULT __stdcall get_DomainLeaveServiceRequestType(GUID * value) = 0;
    virtual HRESULT __stdcall get_IndividualizationServiceRequestType(GUID * value) = 0;
    virtual HRESULT __stdcall get_LicenseAcquirerServiceRequestType(GUID * value) = 0;
    virtual HRESULT __stdcall get_MeteringReportServiceRequestType(GUID * value) = 0;
    virtual HRESULT __stdcall get_RevocationServiceRequestType(GUID * value) = 0;
    virtual HRESULT __stdcall get_MediaProtectionSystemId(GUID * value) = 0;
    virtual HRESULT __stdcall get_PlayReadySecurityVersion(uint32_t * value) = 0;
};

struct __declspec(uuid("1f8d6a92-5f9a-423e-9466-b33969af7a3d")) __declspec(novtable) IPlayReadyStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PlayReadyCertificateSecurityLevel(uint32_t * value) = 0;
};

struct __declspec(uuid("3fa33f71-2dd3-4bed-ae49-f7148e63e710")) __declspec(novtable) IPlayReadyStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SecureStopServiceRequestType(GUID * value) = 0;
    virtual HRESULT __stdcall abi_CheckSupportedHardware(winrt::Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures hwdrmFeature, bool * value) = 0;
};

struct __declspec(uuid("50a91300-d824-4231-9d5e-78ef8844c7d7")) __declspec(novtable) IPlayReadyStatics4 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InputTrustAuthorityToCreate(hstring * value) = 0;
    virtual HRESULT __stdcall get_ProtectionSystemId(GUID * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::Protection::PlayReady::NDClient> { using default_interface = Windows::Media::Protection::PlayReady::INDClient; };
template <> struct traits<Windows::Media::Protection::PlayReady::NDCustomData> { using default_interface = Windows::Media::Protection::PlayReady::INDCustomData; };
template <> struct traits<Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier> { using default_interface = Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier; };
template <> struct traits<Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor> { using default_interface = Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor; };
template <> struct traits<Windows::Media::Protection::PlayReady::NDStorageFileHelper> { using default_interface = Windows::Media::Protection::PlayReady::INDStorageFileHelper; };
template <> struct traits<Windows::Media::Protection::PlayReady::NDStreamParserNotifier> { using default_interface = Windows::Media::Protection::PlayReady::INDStreamParserNotifier; };
template <> struct traits<Windows::Media::Protection::PlayReady::NDTCPMessenger> { using default_interface = Windows::Media::Protection::PlayReady::INDMessenger; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyContentHeader> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyContentHeader; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomain> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyDomain; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomainIterable> { using default_interface = Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyDomain>; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomainIterator> { using default_interface = Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyDomain>; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomainJoinServiceRequest> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomainLeaveServiceRequest> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyITADataGenerator> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyIndividualizationServiceRequest> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicense> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyLicense; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseAcquisitionServiceRequest> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable> { using default_interface = Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyLicense>; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterator> { using default_interface = Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyLicense>; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseSession> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyMeteringReportServiceRequest> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyRevocationServiceRequest> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable> { using default_interface = Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterator> { using default_interface = Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest; };
template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadySoapMessage> { using default_interface = Windows::Media::Protection::PlayReady::IPlayReadySoapMessage; };

}

namespace Windows::Media::Protection::PlayReady {

template <typename T> struct impl_INDClient;
template <typename T> struct impl_INDClientFactory;
template <typename T> struct impl_INDClosedCaptionDataReceivedEventArgs;
template <typename T> struct impl_INDCustomData;
template <typename T> struct impl_INDCustomDataFactory;
template <typename T> struct impl_INDDownloadEngine;
template <typename T> struct impl_INDDownloadEngineNotifier;
template <typename T> struct impl_INDLicenseFetchCompletedEventArgs;
template <typename T> struct impl_INDLicenseFetchDescriptor;
template <typename T> struct impl_INDLicenseFetchDescriptorFactory;
template <typename T> struct impl_INDLicenseFetchResult;
template <typename T> struct impl_INDMessenger;
template <typename T> struct impl_INDProximityDetectionCompletedEventArgs;
template <typename T> struct impl_INDRegistrationCompletedEventArgs;
template <typename T> struct impl_INDSendResult;
template <typename T> struct impl_INDStartResult;
template <typename T> struct impl_INDStorageFileHelper;
template <typename T> struct impl_INDStreamParser;
template <typename T> struct impl_INDStreamParserNotifier;
template <typename T> struct impl_INDTCPMessengerFactory;
template <typename T> struct impl_INDTransmitterProperties;
template <typename T> struct impl_IPlayReadyContentHeader;
template <typename T> struct impl_IPlayReadyContentHeader2;
template <typename T> struct impl_IPlayReadyContentHeaderFactory;
template <typename T> struct impl_IPlayReadyContentHeaderFactory2;
template <typename T> struct impl_IPlayReadyContentResolver;
template <typename T> struct impl_IPlayReadyDomain;
template <typename T> struct impl_IPlayReadyDomainIterableFactory;
template <typename T> struct impl_IPlayReadyDomainJoinServiceRequest;
template <typename T> struct impl_IPlayReadyDomainLeaveServiceRequest;
template <typename T> struct impl_IPlayReadyITADataGenerator;
template <typename T> struct impl_IPlayReadyIndividualizationServiceRequest;
template <typename T> struct impl_IPlayReadyLicense;
template <typename T> struct impl_IPlayReadyLicenseAcquisitionServiceRequest;
template <typename T> struct impl_IPlayReadyLicenseAcquisitionServiceRequest2;
template <typename T> struct impl_IPlayReadyLicenseIterableFactory;
template <typename T> struct impl_IPlayReadyLicenseManagement;
template <typename T> struct impl_IPlayReadyLicenseSession;
template <typename T> struct impl_IPlayReadyLicenseSessionFactory;
template <typename T> struct impl_IPlayReadyMeteringReportServiceRequest;
template <typename T> struct impl_IPlayReadyRevocationServiceRequest;
template <typename T> struct impl_IPlayReadySecureStopIterableFactory;
template <typename T> struct impl_IPlayReadySecureStopServiceRequest;
template <typename T> struct impl_IPlayReadySecureStopServiceRequestFactory;
template <typename T> struct impl_IPlayReadyServiceRequest;
template <typename T> struct impl_IPlayReadySoapMessage;
template <typename T> struct impl_IPlayReadyStatics;
template <typename T> struct impl_IPlayReadyStatics2;
template <typename T> struct impl_IPlayReadyStatics3;
template <typename T> struct impl_IPlayReadyStatics4;

}

namespace impl {

template <> struct traits<Windows::Media::Protection::PlayReady::INDClient>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDClient;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDClient<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDClientFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDClientFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDClientFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDClosedCaptionDataReceivedEventArgs<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDCustomData>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDCustomData;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDCustomData<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDCustomDataFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDCustomDataFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDCustomDataFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDDownloadEngine>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDDownloadEngine;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDDownloadEngine<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDDownloadEngineNotifier<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDLicenseFetchCompletedEventArgs<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDLicenseFetchDescriptor<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDLicenseFetchDescriptorFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDLicenseFetchResult>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDLicenseFetchResult<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDMessenger>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDMessenger;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDMessenger<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDProximityDetectionCompletedEventArgs<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDRegistrationCompletedEventArgs<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDSendResult>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDSendResult;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDSendResult<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDStartResult>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDStartResult;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDStartResult<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDStorageFileHelper>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDStorageFileHelper;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDStorageFileHelper<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDStreamParser>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDStreamParser;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDStreamParser<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDStreamParserNotifier>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDStreamParserNotifier;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDStreamParserNotifier<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDTCPMessengerFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDTCPMessengerFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDTCPMessengerFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::INDTransmitterProperties>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::INDTransmitterProperties;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_INDTransmitterProperties<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyContentHeader<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyContentHeader2<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyContentHeaderFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyContentHeaderFactory2<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyContentResolver>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentResolver;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyContentResolver<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyDomain>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyDomain<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyDomainIterableFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyDomainJoinServiceRequest<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyDomainLeaveServiceRequest<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyITADataGenerator<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyIndividualizationServiceRequest<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyLicense>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyLicense<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyLicenseAcquisitionServiceRequest<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyLicenseAcquisitionServiceRequest2<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyLicenseIterableFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyLicenseManagement<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyLicenseSession<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyLicenseSessionFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyMeteringReportServiceRequest<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyRevocationServiceRequest<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadySecureStopIterableFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadySecureStopServiceRequest<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadySecureStopServiceRequestFactory<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyServiceRequest<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadySoapMessage>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadySoapMessage;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadySoapMessage<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyStatics>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyStatics;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyStatics<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyStatics2>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyStatics2;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyStatics2<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyStatics3>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyStatics3;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyStatics3<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::IPlayReadyStatics4>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::IPlayReadyStatics4;
    template <typename D> using consume = Windows::Media::Protection::PlayReady::impl_IPlayReadyStatics4<D>;
};

template <> struct traits<Windows::Media::Protection::PlayReady::NDClient>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::NDClient;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.NDClient"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::NDCustomData>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::NDCustomData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.NDCustomData"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.NDDownloadEngineNotifier"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::NDStorageFileHelper>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::NDStorageFileHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.NDStorageFileHelper"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::NDStreamParserNotifier>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::NDStreamParserNotifier;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.NDStreamParserNotifier"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::NDTCPMessenger>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::NDTCPMessenger;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.NDTCPMessenger"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyContentHeader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyContentHeader"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyContentResolver>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyContentResolver"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomain>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyDomain;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyDomain"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomainIterable>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyDomainIterable;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterable"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomainIterator>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyDomainIterator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterator"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomainJoinServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyDomainJoinServiceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyDomainLeaveServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyDomainLeaveServiceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyITADataGenerator>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyITADataGenerator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyIndividualizationServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyIndividualizationServiceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicense>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyLicense;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyLicense"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseAcquisitionServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyLicenseAcquisitionServiceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterator>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyLicenseIterator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterator"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseManagement>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyLicenseSession>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyLicenseSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyLicenseSession"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyMeteringReportServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyMeteringReportServiceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyRevocationServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadyRevocationServiceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterator>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadySecureStopIterator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterator"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadySoapMessage>
{
    using abi = ABI::Windows::Media::Protection::PlayReady::PlayReadySoapMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadySoapMessage"; }
};

template <> struct traits<Windows::Media::Protection::PlayReady::PlayReadyStatics>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Protection.PlayReady.PlayReadyStatics"; }
};

}

}
