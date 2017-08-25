// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Media::Core {

struct AudioStreamDescriptor;
struct IMediaStreamDescriptor;
struct MediaStreamSample;
struct MediaStreamSource;
struct VideoStreamDescriptor;

}

WINRT_EXPORT namespace winrt::Windows::Media::Protection {

struct MediaProtectionManager;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Media::Protection::PlayReady {

enum class [[deprecated("NDCertificateFeature is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDCertificateFeature
{
    Transmitter = 1,
    Receiver = 2,
    SharedCertificate = 3,
    SecureClock = 4,
    AntiRollBackClock = 5,
    CRLS = 9,
    PlayReady3Features = 13,
};

enum class [[deprecated("NDCertificatePlatformID is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDCertificatePlatformID
{
    Windows = 0,
    OSX = 1,
    WindowsOnARM = 2,
    WindowsMobile7 = 5,
    iOSOnARM = 6,
    XBoxOnPPC = 7,
    WindowsPhone8OnARM = 8,
    WindowsPhone8OnX86 = 9,
    XboxOne = 10,
    AndroidOnARM = 11,
    WindowsPhone81OnARM = 12,
    WindowsPhone81OnX86 = 13,
};

enum class [[deprecated("NDCertificateType is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDCertificateType
{
    Unknown = 0,
    PC = 1,
    Device = 2,
    Domain = 3,
    Issuer = 4,
    CrlSigner = 5,
    Service = 6,
    Silverlight = 7,
    Application = 8,
    Metering = 9,
    KeyFileSigner = 10,
    Server = 11,
    LicenseSigner = 12,
};

enum class [[deprecated("NDClosedCaptionFormat is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDClosedCaptionFormat
{
    ATSC = 0,
    SCTE20 = 1,
    Unknown = 2,
};

enum class [[deprecated("NDContentIDType is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDContentIDType
{
    KeyID = 1,
    PlayReadyObject = 2,
    Custom = 3,
};

enum class [[deprecated("NDMediaStreamType is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDMediaStreamType
{
    Audio = 1,
    Video = 2,
};

enum class [[deprecated("NDProximityDetectionType is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDProximityDetectionType
{
    UDP = 1,
    TCP = 2,
    TransportAgnostic = 4,
};

enum class [[deprecated("NDStartAsyncOptions is deprecated and might not work on all platforms. For more info, see MSDN.")]] NDStartAsyncOptions
{
    MutualAuthentication = 1,
    WaitForLicenseDescriptor = 2,
};

enum class PlayReadyDecryptorSetup
{
    Uninitialized = 0,
    OnDemand = 1,
};

enum class PlayReadyEncryptionAlgorithm
{
    Unprotected = 0,
    Aes128Ctr = 1,
    Cocktail = 4,
    Uninitialized = 2147483647,
};

enum class PlayReadyHardwareDRMFeatures
{
    HardwareDRM = 1,
    HEVC = 2,
};

enum class PlayReadyITADataFormat
{
    SerializedProperties = 0,
    SerializedProperties_WithContentProtectionWrapper = 1,
};

struct INDClient;
struct INDClientFactory;
struct INDClosedCaptionDataReceivedEventArgs;
struct INDCustomData;
struct INDCustomDataFactory;
struct INDDownloadEngine;
struct INDDownloadEngineNotifier;
struct INDLicenseFetchCompletedEventArgs;
struct INDLicenseFetchDescriptor;
struct INDLicenseFetchDescriptorFactory;
struct INDLicenseFetchResult;
struct INDMessenger;
struct INDProximityDetectionCompletedEventArgs;
struct INDRegistrationCompletedEventArgs;
struct INDSendResult;
struct INDStartResult;
struct INDStorageFileHelper;
struct INDStreamParser;
struct INDStreamParserNotifier;
struct INDTCPMessengerFactory;
struct INDTransmitterProperties;
struct IPlayReadyContentHeader;
struct IPlayReadyContentHeader2;
struct IPlayReadyContentHeaderFactory;
struct IPlayReadyContentHeaderFactory2;
struct IPlayReadyContentResolver;
struct IPlayReadyDomain;
struct IPlayReadyDomainIterableFactory;
struct IPlayReadyDomainJoinServiceRequest;
struct IPlayReadyDomainLeaveServiceRequest;
struct IPlayReadyITADataGenerator;
struct IPlayReadyIndividualizationServiceRequest;
struct IPlayReadyLicense;
struct IPlayReadyLicense2;
struct IPlayReadyLicenseAcquisitionServiceRequest;
struct IPlayReadyLicenseAcquisitionServiceRequest2;
struct IPlayReadyLicenseAcquisitionServiceRequest3;
struct IPlayReadyLicenseIterableFactory;
struct IPlayReadyLicenseManagement;
struct IPlayReadyLicenseSession;
struct IPlayReadyLicenseSession2;
struct IPlayReadyLicenseSessionFactory;
struct IPlayReadyMeteringReportServiceRequest;
struct IPlayReadyRevocationServiceRequest;
struct IPlayReadySecureStopIterableFactory;
struct IPlayReadySecureStopServiceRequest;
struct IPlayReadySecureStopServiceRequestFactory;
struct IPlayReadyServiceRequest;
struct IPlayReadySoapMessage;
struct IPlayReadyStatics;
struct IPlayReadyStatics2;
struct IPlayReadyStatics3;
struct IPlayReadyStatics4;
struct NDClient;
struct NDCustomData;
struct NDDownloadEngineNotifier;
struct NDLicenseFetchDescriptor;
struct NDStorageFileHelper;
struct NDStreamParserNotifier;
struct NDTCPMessenger;
struct PlayReadyContentHeader;
struct PlayReadyContentResolver;
struct PlayReadyDomain;
struct PlayReadyDomainIterable;
struct PlayReadyDomainIterator;
struct PlayReadyDomainJoinServiceRequest;
struct PlayReadyDomainLeaveServiceRequest;
struct PlayReadyITADataGenerator;
struct PlayReadyIndividualizationServiceRequest;
struct PlayReadyLicense;
struct PlayReadyLicenseAcquisitionServiceRequest;
struct PlayReadyLicenseIterable;
struct PlayReadyLicenseIterator;
struct PlayReadyLicenseManagement;
struct PlayReadyLicenseSession;
struct PlayReadyMeteringReportServiceRequest;
struct PlayReadyRevocationServiceRequest;
struct PlayReadySecureStopIterable;
struct PlayReadySecureStopIterator;
struct PlayReadySecureStopServiceRequest;
struct PlayReadySoapMessage;
struct PlayReadyStatics;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Protection::PlayReady::INDClient>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDClientFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDCustomData>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDCustomDataFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDDownloadEngine>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDLicenseFetchResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDMessenger>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDSendResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDStartResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDStorageFileHelper>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDStreamParser>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDStreamParserNotifier>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDTCPMessengerFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::INDTransmitterProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyContentResolver>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyDomain>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicense>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicense2>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadySoapMessage>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyStatics3>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::IPlayReadyStatics4>{ using type = interface_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDClient>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDCustomData>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDStorageFileHelper>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDStreamParserNotifier>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDTCPMessenger>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyContentResolver>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyDomain>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyDomainIterable>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyDomainIterator>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyDomainJoinServiceRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyDomainLeaveServiceRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyITADataGenerator>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyIndividualizationServiceRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyLicense>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyLicenseAcquisitionServiceRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterator>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyLicenseManagement>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyLicenseSession>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyMeteringReportServiceRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyRevocationServiceRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterator>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadySoapMessage>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyStatics>{ using type = class_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDCertificateFeature>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDCertificatePlatformID>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDCertificateType>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDClosedCaptionFormat>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDContentIDType>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDMediaStreamType>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDProximityDetectionType>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::NDStartAsyncOptions>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures>{ using type = enum_category; };
template <> struct category<Windows::Media::Protection::PlayReady::PlayReadyITADataFormat>{ using type = enum_category; };
template <> struct name<Windows::Media::Protection::PlayReady::INDClient>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDClient" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDClientFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDClientFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDClosedCaptionDataReceivedEventArgs" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDCustomData>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDCustomData" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDCustomDataFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDCustomDataFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDDownloadEngine>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDDownloadEngine" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDDownloadEngineNotifier" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDLicenseFetchCompletedEventArgs" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptor" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptorFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDLicenseFetchResult>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDLicenseFetchResult" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDMessenger>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDMessenger" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDProximityDetectionCompletedEventArgs" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDRegistrationCompletedEventArgs" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDSendResult>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDSendResult" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDStartResult>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDStartResult" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDStorageFileHelper>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDStorageFileHelper" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDStreamParser>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDStreamParser" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDStreamParserNotifier>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDStreamParserNotifier" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDTCPMessengerFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDTCPMessengerFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::INDTransmitterProperties>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.INDTransmitterProperties" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeader" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeader2" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory2" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyContentResolver>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyContentResolver" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyDomain>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyDomain" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyDomainIterableFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyDomainJoinServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyDomainLeaveServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyITADataGenerator" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyIndividualizationServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicense>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicense" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicense2>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicense2" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest3" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseIterableFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseManagement" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession2" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSessionFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyMeteringReportServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyRevocationServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopIterableFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequestFactory" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadySoapMessage>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadySoapMessage" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyStatics>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyStatics" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyStatics2>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyStatics2" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyStatics3>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyStatics3" }; };
template <> struct name<Windows::Media::Protection::PlayReady::IPlayReadyStatics4>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.IPlayReadyStatics4" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDClient>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDClient" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDCustomData>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDCustomData" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDDownloadEngineNotifier" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDStorageFileHelper>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDStorageFileHelper" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDStreamParserNotifier>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDStreamParserNotifier" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDTCPMessenger>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDTCPMessenger" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyContentHeader" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyContentResolver>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyContentResolver" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyDomain>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyDomain" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyDomainIterable>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterable" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyDomainIterator>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterator" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyDomainJoinServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyDomainLeaveServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyITADataGenerator>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyIndividualizationServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyLicense>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyLicense" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyLicenseAcquisitionServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterator>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterator" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyLicenseManagement>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyLicenseSession>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyLicenseSession" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyMeteringReportServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyRevocationServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterator>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterator" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadySoapMessage>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadySoapMessage" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyStatics>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyStatics" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDCertificateFeature>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDCertificateFeature" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDCertificatePlatformID>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDCertificatePlatformID" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDCertificateType>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDCertificateType" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDClosedCaptionFormat>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDClosedCaptionFormat" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDContentIDType>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDContentIDType" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDMediaStreamType>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDMediaStreamType" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDProximityDetectionType>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDProximityDetectionType" }; };
template <> struct name<Windows::Media::Protection::PlayReady::NDStartAsyncOptions>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.NDStartAsyncOptions" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyDecryptorSetup" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyEncryptionAlgorithm" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyHardwareDRMFeatures" }; };
template <> struct name<Windows::Media::Protection::PlayReady::PlayReadyITADataFormat>{ static constexpr auto & value{ L"Windows.Media.Protection.PlayReady.PlayReadyITADataFormat" }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDClient>{ static constexpr GUID value{ 0x3BD6781B,0x61B8,0x46E2,{ 0x99,0xA5,0x8A,0xBC,0xB6,0xB9,0xF7,0xD6 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDClientFactory>{ static constexpr GUID value{ 0x3E53DD62,0xFEE8,0x451F,{ 0xB0,0xD4,0xF7,0x06,0xCC,0xA3,0xE0,0x37 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs>{ static constexpr GUID value{ 0x4738D29F,0xC345,0x4649,{ 0x84,0x68,0xB8,0xC5,0xFC,0x35,0x71,0x90 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDCustomData>{ static constexpr GUID value{ 0xF5CB0FDC,0x2D09,0x4F19,{ 0xB5,0xE1,0x76,0xA0,0xB3,0xEE,0x92,0x67 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDCustomDataFactory>{ static constexpr GUID value{ 0xD65405AB,0x3424,0x4833,{ 0x8C,0x9A,0xAF,0x5F,0xDE,0xB2,0x28,0x72 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDDownloadEngine>{ static constexpr GUID value{ 0x2D223D65,0xC4B6,0x4438,{ 0x8D,0x46,0xB9,0x6E,0x6D,0x0F,0xB2,0x1F } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier>{ static constexpr GUID value{ 0xD720B4D4,0xF4B8,0x4530,{ 0xA8,0x09,0x91,0x93,0xA5,0x71,0xE7,0xFC } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs>{ static constexpr GUID value{ 0x1EE30A1A,0x11B2,0x4558,{ 0x88,0x65,0xE3,0xA5,0x16,0x92,0x25,0x17 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor>{ static constexpr GUID value{ 0x5498D33A,0xE686,0x4935,{ 0xA5,0x67,0x7C,0xA7,0x7A,0xD2,0x0F,0xA4 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory>{ static constexpr GUID value{ 0xD0031202,0xCFAC,0x4F00,{ 0xAE,0x6A,0x97,0xAF,0x80,0xB8,0x48,0xF2 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDLicenseFetchResult>{ static constexpr GUID value{ 0x21D39698,0xAA62,0x45FF,{ 0xA5,0xFF,0x80,0x37,0xE5,0x43,0x38,0x25 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDMessenger>{ static constexpr GUID value{ 0xD42DF95D,0xA75B,0x47BF,{ 0x82,0x49,0xBC,0x83,0x82,0x0D,0xA3,0x8A } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs>{ static constexpr GUID value{ 0x2A706328,0xDA25,0x4F8C,{ 0x9E,0xB7,0x5D,0x0F,0xC3,0x65,0x8B,0xCA } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs>{ static constexpr GUID value{ 0x9E39B64D,0xAB5B,0x4905,{ 0xAC,0xDC,0x78,0x7A,0x77,0xC6,0x37,0x4D } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDSendResult>{ static constexpr GUID value{ 0xE3685517,0xA584,0x479D,{ 0x90,0xB7,0xD6,0x89,0xC7,0xBF,0x7C,0x80 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDStartResult>{ static constexpr GUID value{ 0x79F6E96E,0xF50F,0x4015,{ 0x8B,0xA4,0xC2,0xBC,0x34,0x4E,0xBD,0x4E } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDStorageFileHelper>{ static constexpr GUID value{ 0xD8F0BEF8,0x91D2,0x4D47,{ 0xA3,0xF9,0xEA,0xFF,0x4E,0xDB,0x72,0x9F } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDStreamParser>{ static constexpr GUID value{ 0xE0BAA198,0x9796,0x41C9,{ 0x86,0x95,0x59,0x43,0x7E,0x67,0xE6,0x6A } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDStreamParserNotifier>{ static constexpr GUID value{ 0xC167ACD0,0x2CE6,0x426C,{ 0xAC,0xE5,0x5E,0x92,0x75,0xFE,0xA7,0x15 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDTCPMessengerFactory>{ static constexpr GUID value{ 0x7DD85CFE,0x1B99,0x4F68,{ 0x8F,0x82,0x81,0x77,0xF7,0xCE,0xDF,0x2B } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::INDTransmitterProperties>{ static constexpr GUID value{ 0xE536AF23,0xAC4F,0x4ADC,{ 0x8C,0x66,0x4F,0xF7,0xC2,0x70,0x2D,0xD6 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>{ static constexpr GUID value{ 0x9A438A6A,0x7F4C,0x452E,{ 0x88,0xBD,0x01,0x48,0xC6,0x38,0x7A,0x2C } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>{ static constexpr GUID value{ 0x359C79F4,0x2180,0x498C,{ 0x96,0x5B,0xE7,0x54,0xD8,0x75,0xEA,0xB2 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>{ static constexpr GUID value{ 0xCB97C8FF,0xB758,0x4776,{ 0xBF,0x01,0x21,0x7A,0x8B,0x51,0x0B,0x2C } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2>{ static constexpr GUID value{ 0xD1239CF5,0xAE6D,0x4778,{ 0x97,0xFD,0x6E,0x3A,0x2E,0xEA,0xDB,0xEB } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyContentResolver>{ static constexpr GUID value{ 0xFBFD2523,0x906D,0x4982,{ 0xA6,0xB8,0x68,0x49,0x56,0x5A,0x7C,0xE8 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyDomain>{ static constexpr GUID value{ 0xADCC93AC,0x97E6,0x43EF,{ 0x95,0xE4,0xD7,0x86,0x8F,0x3B,0x16,0xA9 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory>{ static constexpr GUID value{ 0x4DF384EE,0x3121,0x4DF3,{ 0xA5,0xE8,0xD0,0xC2,0x4C,0x05,0x00,0xFC } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest>{ static constexpr GUID value{ 0x171B4A5A,0x405F,0x4739,{ 0xB0,0x40,0x67,0xB9,0xF0,0xC3,0x87,0x58 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest>{ static constexpr GUID value{ 0x062D58BE,0x97AD,0x4917,{ 0xAA,0x03,0x46,0xD4,0xC2,0x52,0xD4,0x64 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator>{ static constexpr GUID value{ 0x24446B8E,0x10B9,0x4530,{ 0xB2,0x5B,0x90,0x1A,0x80,0x29,0xA9,0xB2 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest>{ static constexpr GUID value{ 0x21F5A86B,0x008C,0x4611,{ 0xAB,0x2F,0xAA,0xA6,0xC6,0x9F,0x0E,0x24 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicense>{ static constexpr GUID value{ 0xEE474C4E,0xFA3C,0x414D,{ 0xA9,0xF2,0x3F,0xFC,0x1E,0xF8,0x32,0xD4 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicense2>{ static constexpr GUID value{ 0x30F4E7A7,0xD8E3,0x48A0,{ 0xBC,0xDA,0xFF,0x9F,0x40,0x53,0x04,0x36 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>{ static constexpr GUID value{ 0x5D85FF45,0x3E9F,0x4F48,{ 0x93,0xE1,0x95,0x30,0xC8,0xD5,0x8C,0x3E } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2>{ static constexpr GUID value{ 0xB7FA5EB5,0xFE0C,0xB225,{ 0xBC,0x60,0x5A,0x9E,0xDD,0x32,0xCE,0xB5 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3>{ static constexpr GUID value{ 0x394E5F4D,0x7F75,0x430D,{ 0xB2,0xE7,0x7F,0x75,0xF3,0x4B,0x2D,0x75 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory>{ static constexpr GUID value{ 0xD4179F08,0x0837,0x4978,{ 0x8E,0x68,0xBE,0x42,0x93,0xC8,0xD7,0xA6 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement>{ static constexpr GUID value{ 0xAAEB2141,0x0957,0x4405,{ 0xB8,0x92,0x8B,0xF3,0xEC,0x5D,0xAD,0xD9 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>{ static constexpr GUID value{ 0xA1723A39,0x87FA,0x4FDD,{ 0xAB,0xBB,0xA9,0x72,0x0E,0x84,0x52,0x59 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2>{ static constexpr GUID value{ 0x4909BE3A,0x3AED,0x4656,{ 0x8A,0xD7,0xEE,0x0F,0xD7,0x79,0x95,0x10 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory>{ static constexpr GUID value{ 0x62492699,0x6527,0x429E,{ 0x98,0xBE,0x48,0xD7,0x98,0xAC,0x27,0x39 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest>{ static constexpr GUID value{ 0xC12B231C,0x0ECD,0x4F11,{ 0xA1,0x85,0x1E,0x24,0xA4,0xA6,0x7F,0xB7 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest>{ static constexpr GUID value{ 0x543D66AC,0xFAF0,0x4560,{ 0x84,0xA5,0x0E,0x4A,0xCE,0xC9,0x39,0xE4 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory>{ static constexpr GUID value{ 0x5F1F0165,0x4214,0x4D9E,{ 0x81,0xEB,0xE8,0x9F,0x9D,0x29,0x4A,0xEE } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>{ static constexpr GUID value{ 0xB5501EE5,0x01BF,0x4401,{ 0x96,0x77,0x05,0x63,0x0A,0x6A,0x4C,0xC8 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>{ static constexpr GUID value{ 0x0E448AC9,0xE67E,0x494E,{ 0x9F,0x49,0x62,0x85,0x43,0x8C,0x76,0xCF } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>{ static constexpr GUID value{ 0x8BAD2836,0xA703,0x45A6,{ 0xA1,0x80,0x76,0xF3,0x56,0x5A,0xA7,0x25 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadySoapMessage>{ static constexpr GUID value{ 0xB659FCB5,0xCE41,0x41BA,{ 0x8A,0x0D,0x61,0xDF,0x5F,0xFF,0xA1,0x39 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyStatics>{ static constexpr GUID value{ 0x5E69C00D,0x247C,0x469A,{ 0x8F,0x31,0x5C,0x1A,0x15,0x71,0xD9,0xC6 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyStatics2>{ static constexpr GUID value{ 0x1F8D6A92,0x5F9A,0x423E,{ 0x94,0x66,0xB3,0x39,0x69,0xAF,0x7A,0x3D } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyStatics3>{ static constexpr GUID value{ 0x3FA33F71,0x2DD3,0x4BED,{ 0xAE,0x49,0xF7,0x14,0x8E,0x63,0xE7,0x10 } }; };
template <> struct guid<Windows::Media::Protection::PlayReady::IPlayReadyStatics4>{ static constexpr GUID value{ 0x50A91300,0xD824,0x4231,{ 0x9D,0x5E,0x78,0xEF,0x88,0x44,0xC7,0xD7 } }; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::NDClient>{ using type = Windows::Media::Protection::PlayReady::INDClient; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::NDCustomData>{ using type = Windows::Media::Protection::PlayReady::INDCustomData; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier>{ using type = Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor>{ using type = Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::NDStorageFileHelper>{ using type = Windows::Media::Protection::PlayReady::INDStorageFileHelper; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::NDStreamParserNotifier>{ using type = Windows::Media::Protection::PlayReady::INDStreamParserNotifier; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::NDTCPMessenger>{ using type = Windows::Media::Protection::PlayReady::INDMessenger; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyContentHeader; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyDomain>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyDomain; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyDomainIterable>{ using type = Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyDomain>; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyDomainIterator>{ using type = Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyDomain>; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyDomainJoinServiceRequest>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyDomainLeaveServiceRequest>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyITADataGenerator>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyIndividualizationServiceRequest>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyLicense>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyLicense; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyLicenseAcquisitionServiceRequest>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable>{ using type = Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyLicense>; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterator>{ using type = Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyLicense>; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyLicenseSession>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyMeteringReportServiceRequest>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadyRevocationServiceRequest>{ using type = Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable>{ using type = Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterator>{ using type = Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest>{ using type = Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest; };
template <> struct default_interface<Windows::Media::Protection::PlayReady::PlayReadySoapMessage>{ using type = Windows::Media::Protection::PlayReady::IPlayReadySoapMessage; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDClient
{
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] event_token RegistrationCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> const& handler) const;
    using RegistrationCompleted_revoker = event_revoker<Windows::Media::Protection::PlayReady::INDClient>;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] RegistrationCompleted_revoker RegistrationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> const& handler) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] void RegistrationCompleted(event_token const& token) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] event_token ProximityDetectionCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> const& handler) const;
    using ProximityDetectionCompleted_revoker = event_revoker<Windows::Media::Protection::PlayReady::INDClient>;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] ProximityDetectionCompleted_revoker ProximityDetectionCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> const& handler) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ProximityDetectionCompleted(event_token const& token) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] event_token LicenseFetchCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> const& handler) const;
    using LicenseFetchCompleted_revoker = event_revoker<Windows::Media::Protection::PlayReady::INDClient>;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] LicenseFetchCompleted_revoker LicenseFetchCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> const& handler) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] void LicenseFetchCompleted(event_token const& token) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] event_token ReRegistrationNeeded(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Foundation::IInspectable> const& handler) const;
    using ReRegistrationNeeded_revoker = event_revoker<Windows::Media::Protection::PlayReady::INDClient>;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] ReRegistrationNeeded_revoker ReRegistrationNeeded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ReRegistrationNeeded(event_token const& token) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] event_token ClosedCaptionDataReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> const& handler) const;
    using ClosedCaptionDataReceived_revoker = event_revoker<Windows::Media::Protection::PlayReady::INDClient>;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] ClosedCaptionDataReceived_revoker ClosedCaptionDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> const& handler) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ClosedCaptionDataReceived(event_token const& token) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDStartResult> StartAsync(Windows::Foundation::Uri const& contentUrl, uint32_t startAsyncOptions, Windows::Media::Protection::PlayReady::INDCustomData const& registrationCustomData, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const& licenseFetchDescriptor) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDLicenseFetchResult> LicenseFetchAsync(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const& licenseFetchDescriptor) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncAction ReRegistrationAsync(Windows::Media::Protection::PlayReady::INDCustomData const& registrationCustomData) const;
    [[deprecated("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Close() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDClient> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDClient<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDClientFactory
{
    [[deprecated("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDClient CreateInstance(Windows::Media::Protection::PlayReady::INDDownloadEngine const& downloadEngine, Windows::Media::Protection::PlayReady::INDStreamParser const& streamParser, Windows::Media::Protection::PlayReady::INDMessenger const& pMessenger) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDClientFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDClientFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDClosedCaptionDataReceivedEventArgs
{
    [[deprecated("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDClosedCaptionFormat ClosedCaptionDataFormat() const;
    [[deprecated("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] int64_t PresentationTimestamp() const;
    [[deprecated("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] com_array<uint8_t> ClosedCaptionData() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDClosedCaptionDataReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDCustomData
{
    [[deprecated("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")]] com_array<uint8_t> CustomDataTypeID() const;
    [[deprecated("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")]] com_array<uint8_t> CustomData() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDCustomData> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDCustomData<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDCustomDataFactory
{
    [[deprecated("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDCustomData CreateInstance(array_view<uint8_t const> customDataTypeIDBytes, array_view<uint8_t const> customDataBytes) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDCustomDataFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDCustomDataFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDDownloadEngine
{
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Open(Windows::Foundation::Uri const& uri, array_view<uint8_t const> sessionIDBytes) const;
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Pause() const;
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Resume() const;
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Close() const;
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Seek(Windows::Foundation::TimeSpan const& startPosition) const;
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] bool CanSeek() const;
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] uint32_t BufferFullMinThresholdInSamples() const;
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] uint32_t BufferFullMaxThresholdInSamples() const;
    [[deprecated("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier Notifier() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDDownloadEngine> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier
{
    [[deprecated("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnStreamOpened() const;
    [[deprecated("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnPlayReadyObjectReceived(array_view<uint8_t const> dataBytes) const;
    [[deprecated("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnContentIDReceived(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const& licenseFetchDescriptor) const;
    [[deprecated("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnDataReceived(array_view<uint8_t const> dataBytes, uint32_t bytesReceived) const;
    [[deprecated("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnEndOfStream() const;
    [[deprecated("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnNetworkError() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDLicenseFetchCompletedEventArgs
{
    [[deprecated("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::INDCustomData ResponseCustomData() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDLicenseFetchCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor
{
    [[deprecated("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDContentIDType ContentIDType() const;
    [[deprecated("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")]] com_array<uint8_t> ContentID() const;
    [[deprecated("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::INDCustomData LicenseFetchChallengeCustomData() const;
    [[deprecated("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")]] void LicenseFetchChallengeCustomData(Windows::Media::Protection::PlayReady::INDCustomData const& licenseFetchChallengeCustomData) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptorFactory
{
    [[deprecated("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor CreateInstance(Windows::Media::Protection::PlayReady::NDContentIDType const& contentIDType, array_view<uint8_t const> contentIDBytes, Windows::Media::Protection::PlayReady::INDCustomData const& licenseFetchChallengeCustomData) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptorFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDLicenseFetchResult
{
    [[deprecated("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::INDCustomData ResponseCustomData() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDLicenseFetchResult> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDLicenseFetchResult<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDMessenger
{
    [[deprecated("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> SendRegistrationRequestAsync(array_view<uint8_t const> sessionIDBytes, array_view<uint8_t const> challengeDataBytes) const;
    [[deprecated("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> SendProximityDetectionStartAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType const& pdType, array_view<uint8_t const> transmitterChannelBytes, array_view<uint8_t const> sessionIDBytes, array_view<uint8_t const> challengeDataBytes) const;
    [[deprecated("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> SendProximityDetectionResponseAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType const& pdType, array_view<uint8_t const> transmitterChannelBytes, array_view<uint8_t const> sessionIDBytes, array_view<uint8_t const> responseDataBytes) const;
    [[deprecated("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> SendLicenseFetchRequestAsync(array_view<uint8_t const> sessionIDBytes, array_view<uint8_t const> challengeDataBytes) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDMessenger> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDMessenger<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDProximityDetectionCompletedEventArgs
{
    [[deprecated("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] uint32_t ProximityDetectionRetryCount() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDProximityDetectionCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs
{
    [[deprecated("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::INDCustomData ResponseCustomData() const;
    [[deprecated("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::INDTransmitterProperties TransmitterProperties() const;
    [[deprecated("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] bool TransmitterCertificateAccepted() const;
    [[deprecated("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TransmitterCertificateAccepted(bool accept) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDSendResult
{
    [[deprecated("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")]] com_array<uint8_t> Response() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDSendResult> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDSendResult<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDStartResult
{
    [[deprecated("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Core::MediaStreamSource MediaStreamSource() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDStartResult> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDStartResult<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDStorageFileHelper
{
    [[deprecated("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Collections::IVector<hstring> GetFileURLs(Windows::Storage::IStorageFile const& file) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDStorageFileHelper> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDStorageFileHelper<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDStreamParser
{
    [[deprecated("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ParseData(array_view<uint8_t const> dataBytes) const;
    [[deprecated("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")]] uint32_t GetStreamInformation(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, Windows::Media::Protection::PlayReady::NDMediaStreamType& streamType) const;
    [[deprecated("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")]] void BeginOfStream() const;
    [[deprecated("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")]] void EndOfStream() const;
    [[deprecated("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDStreamParserNotifier Notifier() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDStreamParser> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDStreamParser<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDStreamParserNotifier
{
    [[deprecated("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnContentIDReceived(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const& licenseFetchDescriptor) const;
    [[deprecated("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnMediaStreamDescriptorCreated(param::vector<Windows::Media::Core::AudioStreamDescriptor> const& audioStreamDescriptors, param::vector<Windows::Media::Core::VideoStreamDescriptor> const& videoStreamDescriptors) const;
    [[deprecated("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnSampleParsed(uint32_t streamID, Windows::Media::Protection::PlayReady::NDMediaStreamType const& streamType, Windows::Media::Core::MediaStreamSample const& streamSample, int64_t pts, Windows::Media::Protection::PlayReady::NDClosedCaptionFormat const& ccFormat, array_view<uint8_t const> ccDataBytes) const;
    [[deprecated("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OnBeginSetupDecryptor(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, GUID const& keyID, array_view<uint8_t const> proBytes) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDStreamParserNotifier> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDStreamParserNotifier<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDTCPMessengerFactory
{
    [[deprecated("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDTCPMessenger CreateInstance(param::hstring const& remoteHostName, uint32_t remoteHostPort) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDTCPMessengerFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDTCPMessengerFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties
{
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDCertificateType CertificateType() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Media::Protection::PlayReady::NDCertificatePlatformID PlatformIdentifier() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] com_array<Windows::Media::Protection::PlayReady::NDCertificateFeature> SupportedFeatures() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] uint32_t SecurityLevel() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] uint32_t SecurityVersion() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::DateTime ExpirationDate() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] com_array<uint8_t> ClientID() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] com_array<uint8_t> ModelDigest() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring ModelManufacturerName() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring ModelName() const;
    [[deprecated("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring ModelNumber() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::INDTransmitterProperties> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader
{
    GUID KeyId() const;
    hstring KeyIdString() const;
    Windows::Foundation::Uri LicenseAcquisitionUrl() const;
    Windows::Foundation::Uri LicenseAcquisitionUserInterfaceUrl() const;
    GUID DomainServiceId() const;
    Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm EncryptionType() const;
    hstring CustomAttributes() const;
    Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup DecryptorSetup() const;
    com_array<uint8_t> GetSerializedHeader() const;
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader HeaderWithEmbeddedUpdates() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader2
{
    com_array<GUID> KeyIds() const;
    com_array<hstring> KeyIdStrings() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader2<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader CreateInstanceFromWindowsMediaDrmHeader(array_view<uint8_t const> headerBytes, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) const;
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader CreateInstanceFromComponents(GUID const& contentKeyId, param::hstring const& contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) const;
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader CreateInstanceFromPlayReadyHeader(array_view<uint8_t const> headerBytes) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory2
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader CreateInstanceFromComponents2(uint32_t dwFlags, array_view<GUID const> contentKeyIds, array_view<hstring const> contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory2<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyContentResolver
{
    Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest ServiceRequest(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyContentResolver> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyContentResolver<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyDomain
{
    GUID AccountId() const;
    GUID ServiceId() const;
    uint32_t Revision() const;
    hstring FriendlyName() const;
    Windows::Foundation::Uri DomainJoinUrl() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyDomain> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyDomain<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainIterableFactory
{
    Windows::Media::Protection::PlayReady::PlayReadyDomainIterable CreateInstance(GUID const& domainAccountId) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainIterableFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest
{
    GUID DomainAccountId() const;
    void DomainAccountId(GUID const& value) const;
    hstring DomainFriendlyName() const;
    void DomainFriendlyName(param::hstring const& value) const;
    GUID DomainServiceId() const;
    void DomainServiceId(GUID const& value) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest
{
    GUID DomainAccountId() const;
    void DomainAccountId(GUID const& value) const;
    GUID DomainServiceId() const;
    void DomainServiceId(GUID const& value) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyITADataGenerator
{
    com_array<uint8_t> GenerateData(GUID const& guidCPSystemId, uint32_t countOfStreams, Windows::Foundation::Collections::IPropertySet const& configuration, Windows::Media::Protection::PlayReady::PlayReadyITADataFormat const& format) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyITADataGenerator<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyIndividualizationServiceRequest
{
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyIndividualizationServiceRequest<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense
{
    bool FullyEvaluated() const;
    bool UsableForPlay() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ExpirationDate() const;
    uint32_t ExpireAfterFirstPlay() const;
    GUID DomainAccountID() const;
    uint32_t ChainDepth() const;
    GUID GetKIDAtChainDepth(uint32_t chainDepth) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicense> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense2
{
    GUID SecureStopId() const;
    uint32_t SecurityLevel() const;
    bool InMemoryOnly() const;
    bool ExpiresInRealTime() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicense2> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense2<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader ContentHeader() const;
    void ContentHeader(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& value) const;
    GUID DomainServiceId() const;
    void DomainServiceId(GUID const& value) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest2
{
    GUID SessionId() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest2<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest3
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable CreateLicenseIterable(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest3<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseIterableFactory
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable CreateInstance(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseIterableFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseManagement
{
    Windows::Foundation::IAsyncAction DeleteLicenses(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseManagement<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession
{
    Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest CreateLAServiceRequest() const;
    void ConfigureMediaProtectionManager(Windows::Media::Protection::MediaProtectionManager const& mpm) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession2
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable CreateLicenseIterable(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession2<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSessionFactory
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseSession CreateInstance(Windows::Foundation::Collections::IPropertySet const& configuration) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSessionFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyMeteringReportServiceRequest
{
    com_array<uint8_t> MeteringCertificate() const;
    void MeteringCertificate(array_view<uint8_t const> meteringCertBytes) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyMeteringReportServiceRequest<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyRevocationServiceRequest
{
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyRevocationServiceRequest<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopIterableFactory
{
    Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable CreateInstance(array_view<uint8_t const> publisherCertBytes) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopIterableFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest
{
    GUID SessionID() const;
    Windows::Foundation::DateTime StartTime() const;
    Windows::Foundation::DateTime UpdateTime() const;
    bool Stopped() const;
    com_array<uint8_t> PublisherCertificate() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequestFactory
{
    Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest CreateInstance(array_view<uint8_t const> publisherCertBytes) const;
    Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest CreateInstanceFromSessionID(GUID const& sessionID, array_view<uint8_t const> publisherCertBytes) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequestFactory<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest
{
    Windows::Foundation::Uri Uri() const;
    void Uri(Windows::Foundation::Uri const& value) const;
    hstring ResponseCustomData() const;
    hstring ChallengeCustomData() const;
    void ChallengeCustomData(param::hstring const& value) const;
    Windows::Foundation::IAsyncAction BeginServiceRequest() const;
    Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest NextServiceRequest() const;
    Windows::Media::Protection::PlayReady::PlayReadySoapMessage GenerateManualEnablingChallenge() const;
    HRESULT ProcessManualEnablingResponse(array_view<uint8_t const> responseBytes) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadySoapMessage
{
    com_array<uint8_t> GetMessageBody() const;
    Windows::Foundation::Collections::IPropertySet MessageHeaders() const;
    Windows::Foundation::Uri Uri() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadySoapMessage> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadySoapMessage<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics
{
    GUID DomainJoinServiceRequestType() const;
    GUID DomainLeaveServiceRequestType() const;
    GUID IndividualizationServiceRequestType() const;
    GUID LicenseAcquirerServiceRequestType() const;
    GUID MeteringReportServiceRequestType() const;
    GUID RevocationServiceRequestType() const;
    GUID MediaProtectionSystemId() const;
    uint32_t PlayReadySecurityVersion() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyStatics> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics2
{
    uint32_t PlayReadyCertificateSecurityLevel() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyStatics2> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics2<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics3
{
    GUID SecureStopServiceRequestType() const;
    bool CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures const& hwdrmFeature) const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyStatics3> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics3<D>; };

template <typename D>
struct consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics4
{
    hstring InputTrustAuthorityToCreate() const;
    GUID ProtectionSystemId() const;
};
template <> struct consume<Windows::Media::Protection::PlayReady::IPlayReadyStatics4> { template <typename D> using type = consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics4<D>; };

template <> struct abi<Windows::Media::Protection::PlayReady::INDClient>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_RegistrationCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RegistrationCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ProximityDetectionCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ProximityDetectionCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_LicenseFetchCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LicenseFetchCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ReRegistrationNeeded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReRegistrationNeeded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ClosedCaptionDataReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ClosedCaptionDataReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall StartAsync(::IUnknown* contentUrl, uint32_t startAsyncOptions, ::IUnknown* registrationCustomData, ::IUnknown* licenseFetchDescriptor, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall LicenseFetchAsync(::IUnknown* licenseFetchDescriptor, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReRegistrationAsync(::IUnknown* registrationCustomData, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall Close() = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDClientFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* downloadEngine, ::IUnknown* streamParser, ::IUnknown* pMessenger, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ClosedCaptionDataFormat(abi_t<Windows::Media::Protection::PlayReady::NDClosedCaptionFormat>* ccForamt) = 0;
    virtual HRESULT __stdcall get_PresentationTimestamp(int64_t* presentationTimestamp) = 0;
    virtual HRESULT __stdcall get_ClosedCaptionData(uint32_t* __ccDataBytesSize, uint8_t** ccDataBytes) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDCustomData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CustomDataTypeID(uint32_t* __customDataTypeIDBytesSize, uint8_t** customDataTypeIDBytes) = 0;
    virtual HRESULT __stdcall get_CustomData(uint32_t* __customDataBytesSize, uint8_t** customDataBytes) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDCustomDataFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(uint32_t __customDataTypeIDBytesSize, uint8_t* customDataTypeIDBytes, uint32_t __customDataBytesSize, uint8_t* customDataBytes, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDDownloadEngine>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Open(::IUnknown* uri, uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes) = 0;
    virtual HRESULT __stdcall Pause() = 0;
    virtual HRESULT __stdcall Resume() = 0;
    virtual HRESULT __stdcall Close() = 0;
    virtual HRESULT __stdcall Seek(abi_t<Windows::Foundation::TimeSpan> startPosition) = 0;
    virtual HRESULT __stdcall get_CanSeek(bool* canSeek) = 0;
    virtual HRESULT __stdcall get_BufferFullMinThresholdInSamples(uint32_t* bufferFullMinThreshold) = 0;
    virtual HRESULT __stdcall get_BufferFullMaxThresholdInSamples(uint32_t* bufferFullMaxThreshold) = 0;
    virtual HRESULT __stdcall get_Notifier(::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnStreamOpened() = 0;
    virtual HRESULT __stdcall OnPlayReadyObjectReceived(uint32_t __dataBytesSize, uint8_t* dataBytes) = 0;
    virtual HRESULT __stdcall OnContentIDReceived(::IUnknown* licenseFetchDescriptor) = 0;
    virtual HRESULT __stdcall OnDataReceived(uint32_t __dataBytesSize, uint8_t* dataBytes, uint32_t bytesReceived) = 0;
    virtual HRESULT __stdcall OnEndOfStream() = 0;
    virtual HRESULT __stdcall OnNetworkError() = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResponseCustomData(::IUnknown** customData) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContentIDType(abi_t<Windows::Media::Protection::PlayReady::NDContentIDType>* contentIDType) = 0;
    virtual HRESULT __stdcall get_ContentID(uint32_t* __contentIDBytesSize, uint8_t** contentIDBytes) = 0;
    virtual HRESULT __stdcall get_LicenseFetchChallengeCustomData(::IUnknown** licenseFetchChallengeCustomData) = 0;
    virtual HRESULT __stdcall put_LicenseFetchChallengeCustomData(::IUnknown* licenseFetchChallengeCustomData) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::Media::Protection::PlayReady::NDContentIDType> contentIDType, uint32_t __contentIDBytesSize, uint8_t* contentIDBytes, ::IUnknown* licenseFetchChallengeCustomData, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDLicenseFetchResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResponseCustomData(::IUnknown** customData) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDMessenger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SendRegistrationRequestAsync(uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t* challengeDataBytes, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SendProximityDetectionStartAsync(abi_t<Windows::Media::Protection::PlayReady::NDProximityDetectionType> pdType, uint32_t __transmitterChannelBytesSize, uint8_t* transmitterChannelBytes, uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t* challengeDataBytes, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SendProximityDetectionResponseAsync(abi_t<Windows::Media::Protection::PlayReady::NDProximityDetectionType> pdType, uint32_t __transmitterChannelBytesSize, uint8_t* transmitterChannelBytes, uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes, uint32_t __responseDataBytesSize, uint8_t* responseDataBytes, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SendLicenseFetchRequestAsync(uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t* challengeDataBytes, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProximityDetectionRetryCount(uint32_t* retryCount) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResponseCustomData(::IUnknown** customData) = 0;
    virtual HRESULT __stdcall get_TransmitterProperties(::IUnknown** transmitterProperties) = 0;
    virtual HRESULT __stdcall get_TransmitterCertificateAccepted(bool* acceptpt) = 0;
    virtual HRESULT __stdcall put_TransmitterCertificateAccepted(bool accept) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDSendResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Response(uint32_t* __responseDataBytesSize, uint8_t** responseDataBytes) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDStartResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MediaStreamSource(::IUnknown** mediaStreamSource) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDStorageFileHelper>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFileURLs(::IUnknown* file, ::IUnknown** fileURLs) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDStreamParser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ParseData(uint32_t __dataBytesSize, uint8_t* dataBytes) = 0;
    virtual HRESULT __stdcall GetStreamInformation(::IUnknown* descriptor, abi_t<Windows::Media::Protection::PlayReady::NDMediaStreamType>* streamType, uint32_t* streamID) = 0;
    virtual HRESULT __stdcall BeginOfStream() = 0;
    virtual HRESULT __stdcall EndOfStream() = 0;
    virtual HRESULT __stdcall get_Notifier(::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDStreamParserNotifier>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnContentIDReceived(::IUnknown* licenseFetchDescriptor) = 0;
    virtual HRESULT __stdcall OnMediaStreamDescriptorCreated(::IUnknown* audioStreamDescriptors, ::IUnknown* videoStreamDescriptors) = 0;
    virtual HRESULT __stdcall OnSampleParsed(uint32_t streamID, abi_t<Windows::Media::Protection::PlayReady::NDMediaStreamType> streamType, ::IUnknown* streamSample, int64_t pts, abi_t<Windows::Media::Protection::PlayReady::NDClosedCaptionFormat> ccFormat, uint32_t __ccDataBytesSize, uint8_t* ccDataBytes) = 0;
    virtual HRESULT __stdcall OnBeginSetupDecryptor(::IUnknown* descriptor, abi_t<GUID> keyID, uint32_t __proBytesSize, uint8_t* proBytes) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDTCPMessengerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(HSTRING remoteHostName, uint32_t remoteHostPort, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::INDTransmitterProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CertificateType(abi_t<Windows::Media::Protection::PlayReady::NDCertificateType>* type) = 0;
    virtual HRESULT __stdcall get_PlatformIdentifier(abi_t<Windows::Media::Protection::PlayReady::NDCertificatePlatformID>* identifier) = 0;
    virtual HRESULT __stdcall get_SupportedFeatures(uint32_t* __featureSetsSize, abi_t<Windows::Media::Protection::PlayReady::NDCertificateFeature>** featureSets) = 0;
    virtual HRESULT __stdcall get_SecurityLevel(uint32_t* level) = 0;
    virtual HRESULT __stdcall get_SecurityVersion(uint32_t* securityVersion) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(abi_t<Windows::Foundation::DateTime>* expirationDate) = 0;
    virtual HRESULT __stdcall get_ClientID(uint32_t* __clientIDBytesSize, uint8_t** clientIDBytes) = 0;
    virtual HRESULT __stdcall get_ModelDigest(uint32_t* __modelDigestBytesSize, uint8_t** modelDigestBytes) = 0;
    virtual HRESULT __stdcall get_ModelManufacturerName(HSTRING* modelManufacturerName) = 0;
    virtual HRESULT __stdcall get_ModelName(HSTRING* modelName) = 0;
    virtual HRESULT __stdcall get_ModelNumber(HSTRING* modelNumber) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_KeyIdString(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LicenseAcquisitionUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LicenseAcquisitionUserInterfaceUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DomainServiceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_EncryptionType(abi_t<Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm>* value) = 0;
    virtual HRESULT __stdcall get_CustomAttributes(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DecryptorSetup(abi_t<Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup>* value) = 0;
    virtual HRESULT __stdcall GetSerializedHeader(uint32_t* __headerBytesSize, uint8_t** headerBytes) = 0;
    virtual HRESULT __stdcall get_HeaderWithEmbeddedUpdates(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyIds(uint32_t* __contentKeyIdsSize, abi_t<GUID>** contentKeyIds) = 0;
    virtual HRESULT __stdcall get_KeyIdStrings(uint32_t* __contentKeyIdStringsSize, HSTRING** contentKeyIdStrings) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceFromWindowsMediaDrmHeader(uint32_t __headerBytesSize, uint8_t* headerBytes, ::IUnknown* licenseAcquisitionUrl, ::IUnknown* licenseAcquisitionUserInterfaceUrl, HSTRING customAttributes, abi_t<GUID> domainServiceId, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceFromComponents(abi_t<GUID> contentKeyId, HSTRING contentKeyIdString, abi_t<Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm> contentEncryptionAlgorithm, ::IUnknown* licenseAcquisitionUrl, ::IUnknown* licenseAcquisitionUserInterfaceUrl, HSTRING customAttributes, abi_t<GUID> domainServiceId, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceFromPlayReadyHeader(uint32_t __headerBytesSize, uint8_t* headerBytes, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceFromComponents2(uint32_t dwFlags, uint32_t __contentKeyIdsSize, abi_t<GUID>* contentKeyIds, uint32_t __contentKeyIdStringsSize, HSTRING* contentKeyIdStrings, abi_t<Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm> contentEncryptionAlgorithm, ::IUnknown* licenseAcquisitionUrl, ::IUnknown* licenseAcquisitionUserInterfaceUrl, HSTRING customAttributes, abi_t<GUID> domainServiceId, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyContentResolver>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ServiceRequest(::IUnknown* contentHeader, ::IUnknown** serviceRequest) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyDomain>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccountId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_ServiceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_Revision(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_FriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DomainJoinUrl(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<GUID> domainAccountId, ::IUnknown** domainIterable) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DomainAccountId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_DomainAccountId(abi_t<GUID> value) = 0;
    virtual HRESULT __stdcall get_DomainFriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DomainFriendlyName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DomainServiceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_DomainServiceId(abi_t<GUID> value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DomainAccountId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_DomainAccountId(abi_t<GUID> value) = 0;
    virtual HRESULT __stdcall get_DomainServiceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_DomainServiceId(abi_t<GUID> value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GenerateData(abi_t<GUID> guidCPSystemId, uint32_t countOfStreams, ::IUnknown* configuration, abi_t<Windows::Media::Protection::PlayReady::PlayReadyITADataFormat> format, uint32_t* __dataBytesSize, uint8_t** dataBytes) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicense>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FullyEvaluated(bool* value) = 0;
    virtual HRESULT __stdcall get_UsableForPlay(bool* value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExpireAfterFirstPlay(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DomainAccountID(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_ChainDepth(uint32_t* value) = 0;
    virtual HRESULT __stdcall GetKIDAtChainDepth(uint32_t chainDepth, abi_t<GUID>* kid) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicense2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SecureStopId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_SecurityLevel(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_InMemoryOnly(bool* value) = 0;
    virtual HRESULT __stdcall get_ExpiresInRealTime(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContentHeader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ContentHeader(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DomainServiceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_DomainServiceId(abi_t<GUID> value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SessionId(abi_t<GUID>* value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateLicenseIterable(::IUnknown* contentHeader, bool fullyEvaluated, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* contentHeader, bool fullyEvaluated, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DeleteLicenses(::IUnknown* contentHeader, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateLAServiceRequest(::IUnknown** serviceRequest) = 0;
    virtual HRESULT __stdcall ConfigureMediaProtectionManager(::IUnknown* mpm) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateLicenseIterable(::IUnknown* contentHeader, bool fullyEvaluated, ::IUnknown** licenseIterable) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* configuration, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MeteringCertificate(uint32_t* __meteringCertBytesSize, uint8_t** meteringCertBytes) = 0;
    virtual HRESULT __stdcall put_MeteringCertificate(uint32_t __meteringCertBytesSize, uint8_t* meteringCertBytes) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(uint32_t __publisherCertBytesSize, uint8_t* publisherCertBytes, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SessionID(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_UpdateTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Stopped(bool* value) = 0;
    virtual HRESULT __stdcall get_PublisherCertificate(uint32_t* __publisherCertBytesSize, uint8_t** publisherCertBytes) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(uint32_t __publisherCertBytesSize, uint8_t* publisherCertBytes, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceFromSessionID(abi_t<GUID> sessionID, uint32_t __publisherCertBytesSize, uint8_t* publisherCertBytes, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ResponseCustomData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ChallengeCustomData(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ChallengeCustomData(HSTRING value) = 0;
    virtual HRESULT __stdcall BeginServiceRequest(::IUnknown** action) = 0;
    virtual HRESULT __stdcall NextServiceRequest(::IUnknown** serviceRequest) = 0;
    virtual HRESULT __stdcall GenerateManualEnablingChallenge(::IUnknown** challengeMessage) = 0;
    virtual HRESULT __stdcall ProcessManualEnablingResponse(uint32_t __responseBytesSize, uint8_t* responseBytes, abi_t<HRESULT>* result) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadySoapMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetMessageBody(uint32_t* __messageBodyBytesSize, uint8_t** messageBodyBytes) = 0;
    virtual HRESULT __stdcall get_MessageHeaders(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** messageUri) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DomainJoinServiceRequestType(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_DomainLeaveServiceRequestType(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_IndividualizationServiceRequestType(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_LicenseAcquirerServiceRequestType(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_MeteringReportServiceRequestType(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_RevocationServiceRequestType(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_MediaProtectionSystemId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_PlayReadySecurityVersion(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PlayReadyCertificateSecurityLevel(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SecureStopServiceRequestType(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall CheckSupportedHardware(abi_t<Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures> hwdrmFeature, bool* value) = 0;
};};

template <> struct abi<Windows::Media::Protection::PlayReady::IPlayReadyStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InputTrustAuthorityToCreate(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ProtectionSystemId(abi_t<GUID>* value) = 0;
};};

}
