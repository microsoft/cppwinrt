// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom {

struct XmlDocument;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Sms {

enum class CellularClass;
struct ISmsMessage;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

enum class NetworkCostType;
struct ConnectionProfile;
struct NetworkAdapter;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Networking::NetworkOperators {

enum class DataClasses : unsigned
{
    None = 0x0,
    Gprs = 0x1,
    Edge = 0x2,
    Umts = 0x4,
    Hsdpa = 0x8,
    Hsupa = 0x10,
    LteAdvanced = 0x20,
    Cdma1xRtt = 0x10000,
    Cdma1xEvdo = 0x20000,
    Cdma1xEvdoRevA = 0x40000,
    Cdma1xEvdv = 0x80000,
    Cdma3xRtt = 0x100000,
    Cdma1xEvdoRevB = 0x200000,
    CdmaUmb = 0x400000,
    Custom = 0x80000000,
};

DEFINE_ENUM_FLAG_OPERATORS(DataClasses)

enum class HotspotAuthenticationResponseCode
{
    NoError = 0,
    LoginSucceeded = 50,
    LoginFailed = 100,
    RadiusServerError = 102,
    NetworkAdministratorError = 105,
    LoginAborted = 151,
    AccessGatewayInternalError = 255,
};

enum class MobileBroadbandAccountWatcherStatus
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopped = 3,
    Aborted = 4,
};

enum class MobileBroadbandDeviceType
{
    Unknown = 0,
    Embedded = 1,
    Removable = 2,
    Remote = 3,
};

enum class MobileBroadbandPinFormat
{
    Unknown = 0,
    Numeric = 1,
    Alphanumeric = 2,
};

enum class MobileBroadbandPinLockState
{
    Unknown = 0,
    Unlocked = 1,
    PinRequired = 2,
    PinUnblockKeyRequired = 3,
};

enum class MobileBroadbandPinType
{
    None = 0,
    Custom = 1,
    Pin1 = 2,
    Pin2 = 3,
    SimPin = 4,
    FirstSimPin = 5,
    NetworkPin = 6,
    NetworkSubsetPin = 7,
    ServiceProviderPin = 8,
    CorporatePin = 9,
    SubsidyLock = 10,
};

enum class MobileBroadbandRadioState
{
    Off = 0,
    On = 1,
};

enum class MobileBroadbandUiccAppOperationStatus
{
    Success = 0,
    InvalidUiccFilePath = 1,
    AccessConditionNotHeld = 2,
    UiccBusy = 3,
};

enum class NetworkDeviceStatus
{
    DeviceNotReady = 0,
    DeviceReady = 1,
    SimNotInserted = 2,
    BadSim = 3,
    DeviceHardwareFailure = 4,
    AccountNotActivated = 5,
    DeviceLocked = 6,
    DeviceBlocked = 7,
};

enum class NetworkOperatorEventMessageType
{
    Gsm = 0,
    Cdma = 1,
    Ussd = 2,
    DataPlanThresholdReached = 3,
    DataPlanReset = 4,
    DataPlanDeleted = 5,
    ProfileConnected = 6,
    ProfileDisconnected = 7,
    RegisteredRoaming = 8,
    RegisteredHome = 9,
    TetheringEntitlementCheck = 10,
    TetheringOperationalStateChanged = 11,
    TetheringNumberOfClientsChanged = 12,
};

enum class NetworkRegistrationState
{
    None = 0,
    Deregistered = 1,
    Searching = 2,
    Home = 3,
    Roaming = 4,
    Partner = 5,
    Denied = 6,
};

enum class ProfileMediaType
{
    Wlan = 0,
    Wwan = 1,
};

enum class TetheringCapability
{
    Enabled = 0,
    DisabledByGroupPolicy = 1,
    DisabledByHardwareLimitation = 2,
    DisabledByOperator = 3,
    DisabledBySku = 4,
    DisabledByRequiredAppNotInstalled = 5,
    DisabledDueToUnknownCause = 6,
    DisabledBySystemCapability = 7,
};

enum class TetheringOperationStatus
{
    Success = 0,
    Unknown = 1,
    MobileBroadbandDeviceOff = 2,
    WiFiDeviceOff = 3,
    EntitlementCheckTimeout = 4,
    EntitlementCheckFailure = 5,
    OperationInProgress = 6,
    BluetoothDeviceOff = 7,
    NetworkLimitedConnectivity = 8,
};

enum class TetheringOperationalState
{
    Unknown = 0,
    On = 1,
    Off = 2,
    InTransition = 3,
};

enum class UiccAccessCondition
{
    AlwaysAllowed = 0,
    Pin1 = 1,
    Pin2 = 2,
    Pin3 = 3,
    Pin4 = 4,
    Administrative5 = 5,
    Administrative6 = 6,
    NeverAllowed = 7,
};

enum class UiccAppKind
{
    Unknown = 0,
    MF = 1,
    MFSim = 2,
    MFRuim = 3,
    USim = 4,
    CSim = 5,
    ISim = 6,
};

enum class UiccAppRecordKind
{
    Unknown = 0,
    Transparent = 1,
    RecordOriented = 2,
};

enum class UssdResultCode
{
    NoActionRequired = 0,
    ActionRequired = 1,
    Terminated = 2,
    OtherLocalClient = 3,
    OperationNotSupported = 4,
    NetworkTimeout = 5,
};

struct IFdnAccessManagerStatics;
struct IHotspotAuthenticationContext;
struct IHotspotAuthenticationContext2;
struct IHotspotAuthenticationContextStatics;
struct IHotspotAuthenticationEventDetails;
struct IHotspotCredentialsAuthenticationResult;
struct IKnownCSimFilePathsStatics;
struct IKnownRuimFilePathsStatics;
struct IKnownSimFilePathsStatics;
struct IKnownUSimFilePathsStatics;
struct IMobileBroadbandAccount;
struct IMobileBroadbandAccount2;
struct IMobileBroadbandAccount3;
struct IMobileBroadbandAccountEventArgs;
struct IMobileBroadbandAccountStatics;
struct IMobileBroadbandAccountUpdatedEventArgs;
struct IMobileBroadbandAccountWatcher;
struct IMobileBroadbandDeviceInformation;
struct IMobileBroadbandDeviceInformation2;
struct IMobileBroadbandDeviceInformation3;
struct IMobileBroadbandDeviceService;
struct IMobileBroadbandDeviceServiceCommandResult;
struct IMobileBroadbandDeviceServiceCommandSession;
struct IMobileBroadbandDeviceServiceDataReceivedEventArgs;
struct IMobileBroadbandDeviceServiceDataSession;
struct IMobileBroadbandDeviceServiceInformation;
struct IMobileBroadbandDeviceServiceTriggerDetails;
struct IMobileBroadbandModem;
struct IMobileBroadbandModemConfiguration;
struct IMobileBroadbandModemStatics;
struct IMobileBroadbandNetwork;
struct IMobileBroadbandNetwork2;
struct IMobileBroadbandNetworkRegistrationStateChange;
struct IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
struct IMobileBroadbandPin;
struct IMobileBroadbandPinLockStateChange;
struct IMobileBroadbandPinLockStateChangeTriggerDetails;
struct IMobileBroadbandPinManager;
struct IMobileBroadbandPinOperationResult;
struct IMobileBroadbandRadioStateChange;
struct IMobileBroadbandRadioStateChangeTriggerDetails;
struct IMobileBroadbandUicc;
struct IMobileBroadbandUiccApp;
struct IMobileBroadbandUiccAppReadRecordResult;
struct IMobileBroadbandUiccAppRecordDetailsResult;
struct IMobileBroadbandUiccAppsResult;
struct INetworkOperatorNotificationEventDetails;
struct INetworkOperatorTetheringAccessPointConfiguration;
struct INetworkOperatorTetheringClient;
struct INetworkOperatorTetheringClientManager;
struct INetworkOperatorTetheringEntitlementCheck;
struct INetworkOperatorTetheringManager;
struct INetworkOperatorTetheringManagerStatics;
struct INetworkOperatorTetheringManagerStatics2;
struct INetworkOperatorTetheringManagerStatics3;
struct INetworkOperatorTetheringOperationResult;
struct IProvisionFromXmlDocumentResults;
struct IProvisionedProfile;
struct IProvisioningAgent;
struct IProvisioningAgentStaticMethods;
struct IUssdMessage;
struct IUssdMessageFactory;
struct IUssdReply;
struct IUssdSession;
struct IUssdSessionStatics;
struct FdnAccessManager;
struct HotspotAuthenticationContext;
struct HotspotAuthenticationEventDetails;
struct HotspotCredentialsAuthenticationResult;
struct KnownCSimFilePaths;
struct KnownRuimFilePaths;
struct KnownSimFilePaths;
struct KnownUSimFilePaths;
struct MobileBroadbandAccount;
struct MobileBroadbandAccountEventArgs;
struct MobileBroadbandAccountUpdatedEventArgs;
struct MobileBroadbandAccountWatcher;
struct MobileBroadbandDeviceInformation;
struct MobileBroadbandDeviceService;
struct MobileBroadbandDeviceServiceCommandResult;
struct MobileBroadbandDeviceServiceCommandSession;
struct MobileBroadbandDeviceServiceDataReceivedEventArgs;
struct MobileBroadbandDeviceServiceDataSession;
struct MobileBroadbandDeviceServiceInformation;
struct MobileBroadbandDeviceServiceTriggerDetails;
struct MobileBroadbandModem;
struct MobileBroadbandModemConfiguration;
struct MobileBroadbandNetwork;
struct MobileBroadbandNetworkRegistrationStateChange;
struct MobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
struct MobileBroadbandPin;
struct MobileBroadbandPinLockStateChange;
struct MobileBroadbandPinLockStateChangeTriggerDetails;
struct MobileBroadbandPinManager;
struct MobileBroadbandPinOperationResult;
struct MobileBroadbandRadioStateChange;
struct MobileBroadbandRadioStateChangeTriggerDetails;
struct MobileBroadbandUicc;
struct MobileBroadbandUiccApp;
struct MobileBroadbandUiccAppReadRecordResult;
struct MobileBroadbandUiccAppRecordDetailsResult;
struct MobileBroadbandUiccAppsResult;
struct NetworkOperatorNotificationEventDetails;
struct NetworkOperatorTetheringAccessPointConfiguration;
struct NetworkOperatorTetheringClient;
struct NetworkOperatorTetheringManager;
struct NetworkOperatorTetheringOperationResult;
struct ProvisionFromXmlDocumentResults;
struct ProvisionedProfile;
struct ProvisioningAgent;
struct UssdMessage;
struct UssdReply;
struct UssdSession;
struct ProfileUsage;

}

namespace winrt::impl {

template <> struct category<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModem>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPin>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IProvisionedProfile>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IProvisioningAgent>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IUssdMessage>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IUssdMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IUssdReply>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IUssdSession>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::IUssdSessionStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::NetworkOperators::FdnAccessManager>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::KnownCSimFilePaths>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::KnownRuimFilePaths>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::KnownSimFilePaths>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::KnownUSimFilePaths>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccount>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModem>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPin>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUicc>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::ProvisionedProfile>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::ProvisioningAgent>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::UssdMessage>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::UssdReply>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::UssdSession>{ using type = class_category; };
template <> struct category<Windows::Networking::NetworkOperators::DataClasses>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceType>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinFormat>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockState>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinType>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioState>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::NetworkDeviceStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::NetworkRegistrationState>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::ProfileMediaType>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::TetheringCapability>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::TetheringOperationStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::TetheringOperationalState>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::UiccAccessCondition>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::UiccAppKind>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::UiccAppRecordKind>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::UssdResultCode>{ using type = enum_category; };
template <> struct category<Windows::Networking::NetworkOperators::ProfileUsage>{ using type = struct_category<uint32_t,Windows::Foundation::DateTime>; };
template <> struct name<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IFdnAccessManagerStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContext" }; };
template <> struct name<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContext2" }; };
template <> struct name<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContextStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotAuthenticationEventDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotCredentialsAuthenticationResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IKnownCSimFilePathsStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IKnownRuimFilePathsStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IKnownSimFilePathsStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IKnownUSimFilePathsStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount2" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount3" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountEventArgs" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountUpdatedEventArgs" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountWatcher" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation2" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation3" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceService" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceCommandResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceCommandSession" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceDataReceivedEventArgs" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceDataSession" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceInformation" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceTriggerDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModem>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModem" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModemConfiguration" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModemStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork2" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetworkRegistrationStateChange" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPin>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPin" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPinLockStateChange" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPinLockStateChangeTriggerDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPinManager" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPinOperationResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandRadioStateChange" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandRadioStateChangeTriggerDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUicc" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccApp" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppReadRecordResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppRecordDetailsResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppsResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorNotificationEventDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringAccessPointConfiguration" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringClient" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringClientManager" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringEntitlementCheck" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManager" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics2" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics3" }; };
template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringOperationResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IProvisionFromXmlDocumentResults" }; };
template <> struct name<Windows::Networking::NetworkOperators::IProvisionedProfile>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IProvisionedProfile" }; };
template <> struct name<Windows::Networking::NetworkOperators::IProvisioningAgent>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IProvisioningAgent" }; };
template <> struct name<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IProvisioningAgentStaticMethods" }; };
template <> struct name<Windows::Networking::NetworkOperators::IUssdMessage>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdMessage" }; };
template <> struct name<Windows::Networking::NetworkOperators::IUssdMessageFactory>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdMessageFactory" }; };
template <> struct name<Windows::Networking::NetworkOperators::IUssdReply>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdReply" }; };
template <> struct name<Windows::Networking::NetworkOperators::IUssdSession>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdSession" }; };
template <> struct name<Windows::Networking::NetworkOperators::IUssdSessionStatics>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdSessionStatics" }; };
template <> struct name<Windows::Networking::NetworkOperators::FdnAccessManager>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.FdnAccessManager" }; };
template <> struct name<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.HotspotAuthenticationContext" }; };
template <> struct name<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.HotspotAuthenticationEventDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.HotspotCredentialsAuthenticationResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::KnownCSimFilePaths>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.KnownCSimFilePaths" }; };
template <> struct name<Windows::Networking::NetworkOperators::KnownRuimFilePaths>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.KnownRuimFilePaths" }; };
template <> struct name<Windows::Networking::NetworkOperators::KnownSimFilePaths>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.KnownSimFilePaths" }; };
template <> struct name<Windows::Networking::NetworkOperators::KnownUSimFilePaths>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.KnownUSimFilePaths" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccount>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccount" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccountEventArgs" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccountUpdatedEventArgs" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcher" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceInformation" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceService" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandSession" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataReceivedEventArgs" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataSession" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceInformation" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceTriggerDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandModem>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandModem" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandModemConfiguration" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandNetwork" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChange" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChangeTriggerDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPin>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPin" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChange" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChangeTriggerDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinManager" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinOperationResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChange" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChangeTriggerDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUicc>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUicc" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccApp" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppReadRecordResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppRecordDetailsResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppsResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorNotificationEventDetails" }; };
template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringAccessPointConfiguration" }; };
template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringClient" }; };
template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringManager" }; };
template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringOperationResult" }; };
template <> struct name<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProvisionFromXmlDocumentResults" }; };
template <> struct name<Windows::Networking::NetworkOperators::ProvisionedProfile>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProvisionedProfile" }; };
template <> struct name<Windows::Networking::NetworkOperators::ProvisioningAgent>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProvisioningAgent" }; };
template <> struct name<Windows::Networking::NetworkOperators::UssdMessage>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UssdMessage" }; };
template <> struct name<Windows::Networking::NetworkOperators::UssdReply>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UssdReply" }; };
template <> struct name<Windows::Networking::NetworkOperators::UssdSession>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UssdSession" }; };
template <> struct name<Windows::Networking::NetworkOperators::DataClasses>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.DataClasses" }; };
template <> struct name<Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.HotspotAuthenticationResponseCode" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcherStatus" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceType>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceType" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinFormat>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinFormat" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinLockState>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockState" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinType>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinType" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandRadioState>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandRadioState" }; };
template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppOperationStatus" }; };
template <> struct name<Windows::Networking::NetworkOperators::NetworkDeviceStatus>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkDeviceStatus" }; };
template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorEventMessageType" }; };
template <> struct name<Windows::Networking::NetworkOperators::NetworkRegistrationState>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkRegistrationState" }; };
template <> struct name<Windows::Networking::NetworkOperators::ProfileMediaType>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProfileMediaType" }; };
template <> struct name<Windows::Networking::NetworkOperators::TetheringCapability>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.TetheringCapability" }; };
template <> struct name<Windows::Networking::NetworkOperators::TetheringOperationStatus>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.TetheringOperationStatus" }; };
template <> struct name<Windows::Networking::NetworkOperators::TetheringOperationalState>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.TetheringOperationalState" }; };
template <> struct name<Windows::Networking::NetworkOperators::UiccAccessCondition>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UiccAccessCondition" }; };
template <> struct name<Windows::Networking::NetworkOperators::UiccAppKind>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UiccAppKind" }; };
template <> struct name<Windows::Networking::NetworkOperators::UiccAppRecordKind>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UiccAppRecordKind" }; };
template <> struct name<Windows::Networking::NetworkOperators::UssdResultCode>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UssdResultCode" }; };
template <> struct name<Windows::Networking::NetworkOperators::ProfileUsage>{ static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProfileUsage" }; };
template <> struct guid<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>{ static constexpr GUID value{ 0xF2AA4395,0xF1E6,0x4319,{ 0xAA,0x3E,0x47,0x7C,0xA6,0x4B,0x2B,0xDF } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>{ static constexpr GUID value{ 0xE756C791,0x1003,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>{ static constexpr GUID value{ 0xE756C791,0x1004,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>{ static constexpr GUID value{ 0xE756C791,0x1002,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>{ static constexpr GUID value{ 0xE756C791,0x1001,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>{ static constexpr GUID value{ 0xE756C791,0x1005,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>{ static constexpr GUID value{ 0xB458AEED,0x49F1,0x4C22,{ 0xB0,0x73,0x96,0xD5,0x11,0xBF,0x9C,0x35 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>{ static constexpr GUID value{ 0x3883C8B9,0xFF24,0x4571,{ 0xA8,0x67,0x09,0xF9,0x60,0x42,0x6E,0x14 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>{ static constexpr GUID value{ 0x80CD1A63,0x37A5,0x43D3,{ 0x80,0xA3,0xCC,0xD2,0x3E,0x8F,0xEC,0xEE } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>{ static constexpr GUID value{ 0x7C34E581,0x1F1B,0x43F4,{ 0x95,0x30,0x8B,0x09,0x2D,0x32,0xD7,0x1F } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>{ static constexpr GUID value{ 0x36C24CCD,0xCEE2,0x43E0,{ 0xA6,0x03,0xEE,0x86,0xA3,0x6D,0x65,0x70 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>{ static constexpr GUID value{ 0x38F52F1C,0x1136,0x4257,{ 0x95,0x9F,0xB6,0x58,0xA3,0x52,0xB6,0xD4 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>{ static constexpr GUID value{ 0x092A1E21,0x9379,0x4B9B,{ 0xAD,0x31,0xD5,0xFE,0xE2,0xF7,0x48,0xC6 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>{ static constexpr GUID value{ 0x3853C880,0x77DE,0x4C04,{ 0xBE,0xAD,0xA1,0x23,0xB0,0x8C,0x9F,0x59 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>{ static constexpr GUID value{ 0xAA7F4D24,0xAFC1,0x4FC8,{ 0xAE,0x9A,0xA9,0x17,0x53,0x10,0xFA,0xAD } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>{ static constexpr GUID value{ 0x7BC31D88,0xA6BD,0x49E1,{ 0x80,0xAB,0x6B,0x91,0x35,0x4A,0x57,0xD4 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>{ static constexpr GUID value{ 0x6BF3335E,0x23B5,0x449F,{ 0x92,0x8D,0x5E,0x0D,0x3E,0x04,0x47,0x1D } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>{ static constexpr GUID value{ 0xE6D08168,0xE381,0x4C6E,{ 0x9B,0xE8,0xFE,0x15,0x69,0x69,0xA4,0x46 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>{ static constexpr GUID value{ 0x2E467AF1,0xF932,0x4737,{ 0xA7,0x22,0x03,0xBA,0x72,0x37,0x0C,0xB8 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>{ static constexpr GUID value{ 0xE08BB4BD,0x5D30,0x4B5A,{ 0x92,0xCC,0xD5,0x4D,0xF8,0x81,0xD4,0x9E } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>{ static constexpr GUID value{ 0x22BE1A52,0xBD80,0x40AC,{ 0x8E,0x1F,0x2E,0x07,0x83,0x6A,0x3D,0xBD } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>{ static constexpr GUID value{ 0xB0F46ABB,0x94D6,0x44B9,{ 0xA5,0x38,0xF0,0x81,0x0B,0x64,0x53,0x89 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>{ static constexpr GUID value{ 0xFC098A45,0x913B,0x4914,{ 0xB6,0xC3,0xAE,0x63,0x04,0x59,0x3E,0x75 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>{ static constexpr GUID value{ 0xB6AA13DE,0x1380,0x40E3,{ 0x86,0x18,0x73,0xCB,0xCA,0x48,0x13,0x8C } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>{ static constexpr GUID value{ 0xDAD62333,0x8BCF,0x4289,{ 0x8A,0x37,0x04,0x5C,0x21,0x69,0x48,0x6A } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>{ static constexpr GUID value{ 0x53D69B5B,0xC4ED,0x45F0,{ 0x80,0x3A,0xD9,0x41,0x7A,0x6D,0x98,0x46 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>{ static constexpr GUID value{ 0x4A055B70,0xB9AE,0x4458,{ 0x92,0x41,0xA6,0xA5,0xFB,0xF1,0x8A,0x0C } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandModem>{ static constexpr GUID value{ 0xD0356912,0xE9F9,0x4F67,{ 0xA0,0x3D,0x43,0x18,0x9A,0x31,0x6B,0xF1 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>{ static constexpr GUID value{ 0xFCE035A3,0xD6CD,0x4320,{ 0xB9,0x82,0xBE,0x9D,0x3E,0xC7,0x89,0x0F } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>{ static constexpr GUID value{ 0xF99ED637,0xD6F1,0x4A78,{ 0x8C,0xBC,0x64,0x21,0xA6,0x50,0x63,0xC8 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>{ static constexpr GUID value{ 0xCB63928C,0x0309,0x4CB6,{ 0xA8,0xC1,0x6A,0x5A,0x3C,0x8E,0x1F,0xF6 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>{ static constexpr GUID value{ 0x5A55DB22,0x62F7,0x4BDD,{ 0xBA,0x1D,0x47,0x74,0x41,0x96,0x0B,0xA0 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>{ static constexpr GUID value{ 0xBEAF94E1,0x960F,0x49B4,{ 0xA0,0x8D,0x7D,0x85,0xE9,0x68,0xC7,0xEC } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ static constexpr GUID value{ 0x89135CFF,0x28B8,0x46AA,{ 0xB1,0x37,0x1C,0x4B,0x0F,0x21,0xED,0xFE } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandPin>{ static constexpr GUID value{ 0xE661D709,0xE779,0x45BF,{ 0x82,0x81,0x75,0x32,0x3D,0xF9,0xE3,0x21 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>{ static constexpr GUID value{ 0xBE16673E,0x1F04,0x4F95,{ 0x8B,0x90,0xE7,0xF5,0x59,0xDD,0xE7,0xE5 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>{ static constexpr GUID value{ 0xD338C091,0x3E91,0x4D38,{ 0x90,0x36,0xAE,0xE8,0x3A,0x6E,0x79,0xAD } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>{ static constexpr GUID value{ 0x83567EDD,0x6E1F,0x4B9B,{ 0xA4,0x13,0x2B,0x1F,0x50,0xCC,0x36,0xDF } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>{ static constexpr GUID value{ 0x11DDDC32,0x31E7,0x49F5,{ 0xB6,0x63,0x12,0x3D,0x3B,0xEF,0x03,0x62 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>{ static constexpr GUID value{ 0xB054A561,0x9833,0x4AED,{ 0x97,0x17,0x43,0x48,0xB2,0x1A,0x24,0xB3 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>{ static constexpr GUID value{ 0x71301ACE,0x093C,0x42C6,{ 0xB0,0xDB,0xAD,0x1F,0x75,0xA6,0x54,0x45 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>{ static constexpr GUID value{ 0xE634F691,0x525A,0x4CE2,{ 0x8F,0xCE,0xAA,0x41,0x62,0x57,0x91,0x54 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>{ static constexpr GUID value{ 0x4D170556,0x98A1,0x43DD,{ 0xB2,0xEC,0x50,0xC9,0x0C,0xF2,0x48,0xDF } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>{ static constexpr GUID value{ 0x64C95285,0x358E,0x47C5,{ 0x82,0x49,0x69,0x5F,0x38,0x3B,0x2B,0xDB } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>{ static constexpr GUID value{ 0xD919682F,0xBE14,0x4934,{ 0x98,0x1D,0x2F,0x57,0xB9,0xED,0x83,0xE6 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>{ static constexpr GUID value{ 0x744930EB,0x8157,0x4A41,{ 0x84,0x94,0x6B,0xF5,0x4C,0x9B,0x1D,0x2B } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>{ static constexpr GUID value{ 0xBC68A9D1,0x82E1,0x4488,{ 0x9F,0x2C,0x12,0x76,0xC2,0x46,0x8F,0xAC } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>{ static constexpr GUID value{ 0x0BCC0284,0x412E,0x403D,{ 0xAC,0xC6,0xB7,0x57,0xE3,0x47,0x74,0xA4 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>{ static constexpr GUID value{ 0x709D254C,0x595F,0x4847,{ 0xBB,0x30,0x64,0x69,0x35,0x54,0x29,0x18 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>{ static constexpr GUID value{ 0x91B14016,0x8DCA,0x4225,{ 0xBB,0xED,0xEE,0xF8,0xB8,0xD7,0x18,0xD7 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>{ static constexpr GUID value{ 0x0108916D,0x9E9A,0x4AF6,{ 0x8D,0xA3,0x60,0x49,0x3B,0x19,0xC2,0x04 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>{ static constexpr GUID value{ 0xD45A8DA0,0x0E86,0x4D98,{ 0x8B,0xA4,0xDD,0x70,0xD4,0xB7,0x64,0xD3 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>{ static constexpr GUID value{ 0x3EBCBACC,0xF8C3,0x405C,{ 0x99,0x64,0x70,0xA1,0xEE,0xAB,0xE1,0x94 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>{ static constexpr GUID value{ 0x5B235412,0x35F0,0x49E7,{ 0x9B,0x08,0x16,0xD2,0x78,0xFB,0xAA,0x42 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>{ static constexpr GUID value{ 0x8FDAADB6,0x4AF9,0x4F21,{ 0x9B,0x58,0xD5,0x3E,0x9F,0x24,0x23,0x1E } }; };
template <> struct guid<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>{ static constexpr GUID value{ 0xEBD203A1,0x01BA,0x476D,{ 0xB4,0xB3,0xBF,0x3D,0x12,0xC8,0xF8,0x0C } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>{ static constexpr GUID value{ 0x217700E0,0x8203,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IProvisionedProfile>{ static constexpr GUID value{ 0x217700E0,0x8202,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IProvisioningAgent>{ static constexpr GUID value{ 0x217700E0,0x8201,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>{ static constexpr GUID value{ 0x217700E0,0x8101,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IUssdMessage>{ static constexpr GUID value{ 0x2F9ACF82,0x2004,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IUssdMessageFactory>{ static constexpr GUID value{ 0x2F9ACF82,0x1003,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IUssdReply>{ static constexpr GUID value{ 0x2F9ACF82,0x2005,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IUssdSession>{ static constexpr GUID value{ 0x2F9ACF82,0x2002,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; };
template <> struct guid<Windows::Networking::NetworkOperators::IUssdSessionStatics>{ static constexpr GUID value{ 0x2F9ACF82,0x1001,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; };
template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>{ using type = Windows::Networking::NetworkOperators::IHotspotAuthenticationContext; };
template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>{ using type = Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails; };
template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>{ using type = Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccount>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccount; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandModem>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandModem; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetwork; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPin>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPin; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinManager; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUicc>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUicc; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult; };
template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult; };
template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails; };
template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration; };
template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient; };
template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager; };
template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult; };
template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>{ using type = Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults; };
template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisionedProfile>{ using type = Windows::Networking::NetworkOperators::IProvisionedProfile; };
template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisioningAgent>{ using type = Windows::Networking::NetworkOperators::IProvisioningAgent; };
template <> struct default_interface<Windows::Networking::NetworkOperators::UssdMessage>{ using type = Windows::Networking::NetworkOperators::IUssdMessage; };
template <> struct default_interface<Windows::Networking::NetworkOperators::UssdReply>{ using type = Windows::Networking::NetworkOperators::IUssdReply; };
template <> struct default_interface<Windows::Networking::NetworkOperators::UssdSession>{ using type = Windows::Networking::NetworkOperators::IUssdSession; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IFdnAccessManagerStatics
{
    Windows::Foundation::IAsyncOperation<bool> RequestUnlockAsync(param::hstring const& contactListId) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IFdnAccessManagerStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext
{
    com_array<uint8_t> WirelessNetworkId() const;
    Windows::Networking::Connectivity::NetworkAdapter NetworkAdapter() const;
    Windows::Foundation::Uri RedirectMessageUrl() const;
    Windows::Data::Xml::Dom::XmlDocument RedirectMessageXml() const;
    Windows::Foundation::Uri AuthenticationUrl() const;
    void IssueCredentials(param::hstring const& userName, param::hstring const& password, param::hstring const& extraParameters, bool markAsManualConnectOnFailure) const;
    void AbortAuthentication(bool markAsManual) const;
    void SkipAuthentication() const;
    void TriggerAttentionRequired(param::hstring const& packageRelativeApplicationId, param::hstring const& applicationParameters) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext2
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> IssueCredentialsAsync(param::hstring const& userName, param::hstring const& password, param::hstring const& extraParameters, bool markAsManualConnectOnFailure) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext2<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContextStatics
{
    bool TryGetAuthenticationContext(param::hstring const& evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext& context) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContextStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationEventDetails
{
    hstring EventToken() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationEventDetails<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult
{
    bool HasNetworkErrorOccurred() const;
    Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode ResponseCode() const;
    Windows::Foundation::Uri LogoffUrl() const;
    Windows::Data::Xml::Dom::XmlDocument AuthenticationReplyXml() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics
{
    Windows::Foundation::Collections::IVectorView<uint32_t> EFSpn() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> Gid1() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> Gid2() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics
{
    Windows::Foundation::Collections::IVectorView<uint32_t> EFSpn() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> Gid1() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> Gid2() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics
{
    Windows::Foundation::Collections::IVectorView<uint32_t> EFOns() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> EFSpn() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> Gid1() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> Gid2() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics
{
    Windows::Foundation::Collections::IVectorView<uint32_t> EFSpn() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> EFOpl() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> EFPnn() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> Gid1() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> Gid2() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount
{
    hstring NetworkAccountId() const;
    GUID ServiceProviderGuid() const;
    hstring ServiceProviderName() const;
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork CurrentNetwork() const;
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation CurrentDeviceInformation() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount2
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> GetConnectionProfiles() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount2<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount3
{
    Windows::Foundation::Uri AccountExperienceUrl() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount3<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountEventArgs
{
    hstring NetworkAccountId() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics
{
    Windows::Foundation::Collections::IVectorView<hstring> AvailableNetworkAccountIds() const;
    Windows::Networking::NetworkOperators::MobileBroadbandAccount CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs
{
    hstring NetworkAccountId() const;
    bool HasDeviceInformationChanged() const;
    bool HasNetworkChanged() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher
{
    event_token AccountAdded(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
    using AccountAdded_revoker = event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>;
    AccountAdded_revoker AccountAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
    void AccountAdded(event_token const& cookie) const;
    event_token AccountUpdated(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const& handler) const;
    using AccountUpdated_revoker = event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>;
    AccountUpdated_revoker AccountUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const& handler) const;
    void AccountUpdated(event_token const& cookie) const;
    event_token AccountRemoved(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
    using AccountRemoved_revoker = event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>;
    AccountRemoved_revoker AccountRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
    void AccountRemoved(event_token const& cookie) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& cookie) const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void Stopped(event_token const& cookie) const;
    Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus Status() const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation
{
    Windows::Networking::NetworkOperators::NetworkDeviceStatus NetworkDeviceStatus() const;
    hstring Manufacturer() const;
    hstring Model() const;
    hstring FirmwareInformation() const;
    Windows::Devices::Sms::CellularClass CellularClass() const;
    Windows::Networking::NetworkOperators::DataClasses DataClasses() const;
    hstring CustomDataClass() const;
    hstring MobileEquipmentId() const;
    Windows::Foundation::Collections::IVectorView<hstring> TelephoneNumbers() const;
    hstring SubscriberId() const;
    hstring SimIccId() const;
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceType DeviceType() const;
    hstring DeviceId() const;
    Windows::Networking::NetworkOperators::MobileBroadbandRadioState CurrentRadioState() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinManager PinManager() const;
    hstring Revision() const;
    hstring SerialNumber() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3
{
    hstring SimSpn() const;
    hstring SimPnn() const;
    hstring SimGid1() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService
{
    GUID DeviceServiceId() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> SupportedCommands() const;
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession OpenDataSession() const;
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession OpenCommandSession() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult
{
    uint32_t StatusCode() const;
    Windows::Storage::Streams::IBuffer ResponseData() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> SendQueryCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer const& data) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> SendSetCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer const& data) const;
    void CloseSession() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataReceivedEventArgs
{
    Windows::Storage::Streams::IBuffer ReceivedData() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession
{
    Windows::Foundation::IAsyncAction WriteDataAsync(Windows::Storage::Streams::IBuffer const& value) const;
    void CloseSession() const;
    event_token DataReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const& eventHandler) const;
    using DataReceived_revoker = event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>;
    DataReceived_revoker DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const& eventHandler) const;
    void DataReceived(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation
{
    GUID DeviceServiceId() const;
    bool IsDataReadSupported() const;
    bool IsDataWriteSupported() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails
{
    hstring DeviceId() const;
    GUID DeviceServiceId() const;
    Windows::Storage::Streams::IBuffer ReceivedData() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem
{
    Windows::Networking::NetworkOperators::MobileBroadbandAccount CurrentAccount() const;
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation DeviceInformation() const;
    uint32_t MaxDeviceServiceCommandSizeInBytes() const;
    uint32_t MaxDeviceServiceDataSizeInBytes() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> DeviceServices() const;
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceService GetDeviceService(GUID const& deviceServiceId) const;
    bool IsResetSupported() const;
    Windows::Foundation::IAsyncAction ResetAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> GetCurrentConfigurationAsync() const;
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork CurrentNetwork() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModem> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration
{
    Windows::Networking::NetworkOperators::MobileBroadbandUicc Uicc() const;
    hstring HomeProviderId() const;
    hstring HomeProviderName() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics
{
    hstring GetDeviceSelector() const;
    Windows::Networking::NetworkOperators::MobileBroadbandModem FromId(param::hstring const& deviceId) const;
    Windows::Networking::NetworkOperators::MobileBroadbandModem GetDefault() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork
{
    Windows::Networking::Connectivity::NetworkAdapter NetworkAdapter() const;
    Windows::Networking::NetworkOperators::NetworkRegistrationState NetworkRegistrationState() const;
    uint32_t RegistrationNetworkError() const;
    uint32_t PacketAttachNetworkError() const;
    uint32_t ActivationNetworkError() const;
    hstring AccessPointName() const;
    Windows::Networking::NetworkOperators::DataClasses RegisteredDataClass() const;
    hstring RegisteredProviderId() const;
    hstring RegisteredProviderName() const;
    void ShowConnectionUI() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2
{
    Windows::Foundation::IAsyncOperation<bool> GetVoiceCallSupportAsync() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> RegistrationUiccApps() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange
{
    hstring DeviceId() const;
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork Network() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> NetworkRegistrationStateChanges() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinType Type() const;
    Windows::Networking::NetworkOperators::MobileBroadbandPinLockState LockState() const;
    Windows::Networking::NetworkOperators::MobileBroadbandPinFormat Format() const;
    bool Enabled() const;
    uint32_t MaxLength() const;
    uint32_t MinLength() const;
    uint32_t AttemptsRemaining() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> EnableAsync(param::hstring const& currentPin) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> DisableAsync(param::hstring const& currentPin) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> EnterAsync(param::hstring const& currentPin) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> ChangeAsync(param::hstring const& currentPin, param::hstring const& newPin) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> UnblockAsync(param::hstring const& pinUnblockKey, param::hstring const& newPin) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPin> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange
{
    hstring DeviceId() const;
    Windows::Networking::NetworkOperators::MobileBroadbandPinType PinType() const;
    Windows::Networking::NetworkOperators::MobileBroadbandPinLockState PinLockState() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChangeTriggerDetails
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> PinLockStateChanges() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChangeTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinType> SupportedPins() const;
    Windows::Networking::NetworkOperators::MobileBroadbandPin GetPin(Windows::Networking::NetworkOperators::MobileBroadbandPinType const& pinType) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult
{
    bool IsSuccessful() const;
    uint32_t AttemptsRemaining() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange
{
    hstring DeviceId() const;
    Windows::Networking::NetworkOperators::MobileBroadbandRadioState RadioState() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChangeTriggerDetails
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> RadioStateChanges() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChangeTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUicc
{
    hstring SimIccId() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> GetUiccAppsAsync() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUicc> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUicc<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp
{
    Windows::Storage::Streams::IBuffer Id() const;
    Windows::Networking::NetworkOperators::UiccAppKind Kind() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> GetRecordDetailsAsync(param::async_iterable<uint32_t> const& uiccFilePath) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> ReadRecordAsync(param::async_iterable<uint32_t> const& uiccFilePath, int32_t recordIndex) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus Status() const;
    Windows::Storage::Streams::IBuffer Data() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus Status() const;
    Windows::Networking::NetworkOperators::UiccAppRecordKind Kind() const;
    int32_t RecordCount() const;
    int32_t RecordSize() const;
    Windows::Networking::NetworkOperators::UiccAccessCondition ReadAccessCondition() const;
    Windows::Networking::NetworkOperators::UiccAccessCondition WriteAccessCondition() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus Status() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> UiccApps() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails
{
    Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType NotificationType() const;
    hstring NetworkAccountId() const;
    uint8_t EncodingType() const;
    hstring Message() const;
    hstring RuleId() const;
    Windows::Devices::Sms::ISmsMessage SmsMessage() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration
{
    hstring Ssid() const;
    void Ssid(param::hstring const& value) const;
    hstring Passphrase() const;
    void Passphrase(param::hstring const& value) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient
{
    hstring MacAddress() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> HostNames() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClientManager
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> GetTetheringClients() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClientManager<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringEntitlementCheck
{
    void AuthorizeTethering(bool allow, param::hstring const& entitlementFailureReason) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringEntitlementCheck<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager
{
    uint32_t MaxClientCount() const;
    uint32_t ClientCount() const;
    Windows::Networking::NetworkOperators::TetheringOperationalState TetheringOperationalState() const;
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration GetCurrentAccessPointConfiguration() const;
    Windows::Foundation::IAsyncAction ConfigureAccessPointAsync(Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration const& configuration) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> StartTetheringAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> StopTetheringAsync() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics
{
    Windows::Networking::NetworkOperators::TetheringCapability GetTetheringCapability(param::hstring const& networkAccountId) const;
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2
{
    Windows::Networking::NetworkOperators::TetheringCapability GetTetheringCapabilityFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile) const;
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics3
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics3<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult
{
    Windows::Networking::NetworkOperators::TetheringOperationStatus Status() const;
    hstring AdditionalErrorMessage() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults
{
    bool AllElementsProvisioned() const;
    hstring ProvisionResultsXml() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IProvisionedProfile
{
    void UpdateCost(Windows::Networking::Connectivity::NetworkCostType const& value) const;
    void UpdateUsage(Windows::Networking::NetworkOperators::ProfileUsage const& value) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IProvisionedProfile> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisionedProfile<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IProvisioningAgent
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> ProvisionFromXmlDocumentAsync(param::hstring const& provisioningXmlDocument) const;
    Windows::Networking::NetworkOperators::ProvisionedProfile GetProvisionedProfile(Windows::Networking::NetworkOperators::ProfileMediaType const& mediaType, param::hstring const& profileName) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IProvisioningAgent> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisioningAgent<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IProvisioningAgentStaticMethods
{
    Windows::Networking::NetworkOperators::ProvisioningAgent CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisioningAgentStaticMethods<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IUssdMessage
{
    uint8_t DataCodingScheme() const;
    void DataCodingScheme(uint8_t value) const;
    com_array<uint8_t> GetPayload() const;
    void SetPayload(array_view<uint8_t const> value) const;
    hstring PayloadAsText() const;
    void PayloadAsText(param::hstring const& value) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IUssdMessage> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdMessage<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IUssdMessageFactory
{
    Windows::Networking::NetworkOperators::UssdMessage CreateMessage(param::hstring const& messageText) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IUssdMessageFactory> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdMessageFactory<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IUssdReply
{
    Windows::Networking::NetworkOperators::UssdResultCode ResultCode() const;
    Windows::Networking::NetworkOperators::UssdMessage Message() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IUssdReply> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdReply<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IUssdSession
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::UssdReply> SendMessageAndGetReplyAsync(Windows::Networking::NetworkOperators::UssdMessage const& message) const;
    void Close() const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IUssdSession> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdSession<D>; };

template <typename D>
struct consume_Windows_Networking_NetworkOperators_IUssdSessionStatics
{
    Windows::Networking::NetworkOperators::UssdSession CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
    Windows::Networking::NetworkOperators::UssdSession CreateFromNetworkInterfaceId(param::hstring const& networkInterfaceId) const;
};
template <> struct consume<Windows::Networking::NetworkOperators::IUssdSessionStatics> { template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdSessionStatics<D>; };

template <> struct abi<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestUnlockAsync(HSTRING contactListId, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WirelessNetworkId(uint32_t* __valueSize, uint8_t** value) = 0;
    virtual HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RedirectMessageUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RedirectMessageXml(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall IssueCredentials(HSTRING userName, HSTRING password, HSTRING extraParameters, bool markAsManualConnectOnFailure) = 0;
    virtual HRESULT __stdcall AbortAuthentication(bool markAsManual) = 0;
    virtual HRESULT __stdcall SkipAuthentication() = 0;
    virtual HRESULT __stdcall TriggerAttentionRequired(HSTRING packageRelativeApplicationId, HSTRING applicationParameters) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IssueCredentialsAsync(HSTRING userName, HSTRING password, HSTRING extraParameters, bool markAsManualConnectOnFailure, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryGetAuthenticationContext(HSTRING evenToken, ::IUnknown** context, bool* isValid) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EventToken(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HasNetworkErrorOccurred(bool* value) = 0;
    virtual HRESULT __stdcall get_ResponseCode(abi_t<Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode>* value) = 0;
    virtual HRESULT __stdcall get_LogoffUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationReplyXml(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EFSpn(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Gid1(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Gid2(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EFSpn(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Gid1(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Gid2(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EFOns(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EFSpn(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Gid1(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Gid2(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EFSpn(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EFOpl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EFPnn(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Gid1(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Gid2(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServiceProviderGuid(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_ServiceProviderName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CurrentNetwork(::IUnknown** network) = 0;
    virtual HRESULT __stdcall get_CurrentDeviceInformation(::IUnknown** deviceInformation) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetConnectionProfiles(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccountExperienceUrl(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAccountId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AvailableNetworkAccountIds(::IUnknown** ppAccountIds) = 0;
    virtual HRESULT __stdcall CreateFromNetworkAccountId(HSTRING networkAccountId, ::IUnknown** ppAccount) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HasDeviceInformationChanged(bool* value) = 0;
    virtual HRESULT __stdcall get_HasNetworkChanged(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_AccountAdded(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_AccountAdded(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_AccountUpdated(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_AccountUpdated(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_AccountRemoved(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_AccountRemoved(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus>* status) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkDeviceStatus(abi_t<Windows::Networking::NetworkOperators::NetworkDeviceStatus>* value) = 0;
    virtual HRESULT __stdcall get_Manufacturer(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Model(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FirmwareInformation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CellularClass(abi_t<Windows::Devices::Sms::CellularClass>* value) = 0;
    virtual HRESULT __stdcall get_DataClasses(abi_t<Windows::Networking::NetworkOperators::DataClasses>* value) = 0;
    virtual HRESULT __stdcall get_CustomDataClass(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MobileEquipmentId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TelephoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SubscriberId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SimIccId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceType(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandDeviceType>* pDeviceType) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CurrentRadioState(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandRadioState>* pCurrentState) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PinManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Revision(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SerialNumber(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SimSpn(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SimPnn(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SimGid1(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceServiceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_SupportedCommands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall OpenDataSession(::IUnknown** value) = 0;
    virtual HRESULT __stdcall OpenCommandSession(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StatusCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ResponseData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SendQueryCommandAsync(uint32_t commandId, ::IUnknown* data, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SendSetCommandAsync(uint32_t commandId, ::IUnknown* data, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall CloseSession() = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ReceivedData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall WriteDataAsync(::IUnknown* value, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall CloseSession() = 0;
    virtual HRESULT __stdcall add_DataReceived(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_DataReceived(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceServiceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_IsDataReadSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDataWriteSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceServiceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_ReceivedData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentAccount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceInformation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaxDeviceServiceCommandSizeInBytes(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxDeviceServiceDataSizeInBytes(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DeviceServices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeviceService(abi_t<GUID> deviceServiceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsResetSupported(bool* value) = 0;
    virtual HRESULT __stdcall ResetAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetCurrentConfigurationAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall get_CurrentNetwork(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uicc(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HomeProviderId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HomeProviderName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
    virtual HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDefault(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NetworkRegistrationState(abi_t<Windows::Networking::NetworkOperators::NetworkRegistrationState>* registrationState) = 0;
    virtual HRESULT __stdcall get_RegistrationNetworkError(uint32_t* networkError) = 0;
    virtual HRESULT __stdcall get_PacketAttachNetworkError(uint32_t* networkError) = 0;
    virtual HRESULT __stdcall get_ActivationNetworkError(uint32_t* networkError) = 0;
    virtual HRESULT __stdcall get_AccessPointName(HSTRING* apn) = 0;
    virtual HRESULT __stdcall get_RegisteredDataClass(abi_t<Windows::Networking::NetworkOperators::DataClasses>* value) = 0;
    virtual HRESULT __stdcall get_RegisteredProviderId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RegisteredProviderName(HSTRING* value) = 0;
    virtual HRESULT __stdcall ShowConnectionUI() = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetVoiceCallSupportAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall get_RegistrationUiccApps(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Network(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkRegistrationStateChanges(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPin>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandPinType>* value) = 0;
    virtual HRESULT __stdcall get_LockState(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandPinLockState>* value) = 0;
    virtual HRESULT __stdcall get_Format(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandPinFormat>* value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall get_MaxLength(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MinLength(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AttemptsRemaining(uint32_t* value) = 0;
    virtual HRESULT __stdcall EnableAsync(HSTRING currentPin, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall DisableAsync(HSTRING currentPin, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall EnterAsync(HSTRING currentPin, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ChangeAsync(HSTRING currentPin, HSTRING newPin, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall UnblockAsync(HSTRING pinUnblockKey, HSTRING newPin, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PinType(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandPinType>* value) = 0;
    virtual HRESULT __stdcall get_PinLockState(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandPinLockState>* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PinLockStateChanges(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SupportedPins(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetPin(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandPinType> pinType, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSuccessful(bool* value) = 0;
    virtual HRESULT __stdcall get_AttemptsRemaining(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RadioState(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandRadioState>* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RadioStateChanges(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SimIccId(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetUiccAppsAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Networking::NetworkOperators::UiccAppKind>* value) = 0;
    virtual HRESULT __stdcall GetRecordDetailsAsync(::IUnknown* uiccFilePath, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ReadRecordAsync(::IUnknown* uiccFilePath, int32_t recordIndex, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>* value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Networking::NetworkOperators::UiccAppRecordKind>* value) = 0;
    virtual HRESULT __stdcall get_RecordCount(int32_t* value) = 0;
    virtual HRESULT __stdcall get_RecordSize(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ReadAccessCondition(abi_t<Windows::Networking::NetworkOperators::UiccAccessCondition>* value) = 0;
    virtual HRESULT __stdcall get_WriteAccessCondition(abi_t<Windows::Networking::NetworkOperators::UiccAccessCondition>* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>* value) = 0;
    virtual HRESULT __stdcall get_UiccApps(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NotificationType(abi_t<Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType>* value) = 0;
    virtual HRESULT __stdcall get_NetworkAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EncodingType(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RuleId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SmsMessage(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Ssid(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Ssid(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Passphrase(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Passphrase(HSTRING value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MacAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HostNames(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetTetheringClients(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AuthorizeTethering(bool allow, HSTRING entitlementFailureReason) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxClientCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ClientCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TetheringOperationalState(abi_t<Windows::Networking::NetworkOperators::TetheringOperationalState>* value) = 0;
    virtual HRESULT __stdcall GetCurrentAccessPointConfiguration(::IUnknown** configuration) = 0;
    virtual HRESULT __stdcall ConfigureAccessPointAsync(::IUnknown* configuration, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartTetheringAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StopTetheringAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetTetheringCapability(HSTRING networkAccountId, abi_t<Windows::Networking::NetworkOperators::TetheringCapability>* value) = 0;
    virtual HRESULT __stdcall CreateFromNetworkAccountId(HSTRING networkAccountId, ::IUnknown** ppManager) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetTetheringCapabilityFromConnectionProfile(::IUnknown* profile, abi_t<Windows::Networking::NetworkOperators::TetheringCapability>* result) = 0;
    virtual HRESULT __stdcall CreateFromConnectionProfile(::IUnknown* profile, ::IUnknown** ppManager) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromConnectionProfileWithTargetAdapter(::IUnknown* profile, ::IUnknown* adapter, ::IUnknown** ppManager) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::NetworkOperators::TetheringOperationStatus>* value) = 0;
    virtual HRESULT __stdcall get_AdditionalErrorMessage(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllElementsProvisioned(bool* value) = 0;
    virtual HRESULT __stdcall get_ProvisionResultsXml(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IProvisionedProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall UpdateCost(abi_t<Windows::Networking::Connectivity::NetworkCostType> value) = 0;
    virtual HRESULT __stdcall UpdateUsage(abi_t<Windows::Networking::NetworkOperators::ProfileUsage> value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IProvisioningAgent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ProvisionFromXmlDocumentAsync(HSTRING provisioningXmlDocument, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetProvisionedProfile(abi_t<Windows::Networking::NetworkOperators::ProfileMediaType> mediaType, HSTRING profileName, ::IUnknown** provisionedProfile) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromNetworkAccountId(HSTRING networkAccountId, ::IUnknown** provisioningAgent) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IUssdMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataCodingScheme(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_DataCodingScheme(uint8_t value) = 0;
    virtual HRESULT __stdcall GetPayload(uint32_t* __valueSize, uint8_t** value) = 0;
    virtual HRESULT __stdcall SetPayload(uint32_t __valueSize, uint8_t* value) = 0;
    virtual HRESULT __stdcall get_PayloadAsText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PayloadAsText(HSTRING value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IUssdMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMessage(HSTRING messageText, ::IUnknown** ussdMessage) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IUssdReply>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResultCode(abi_t<Windows::Networking::NetworkOperators::UssdResultCode>* value) = 0;
    virtual HRESULT __stdcall get_Message(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IUssdSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SendMessageAndGetReplyAsync(::IUnknown* message, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall Close() = 0;
};};

template <> struct abi<Windows::Networking::NetworkOperators::IUssdSessionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromNetworkAccountId(HSTRING networkAccountId, ::IUnknown** ussdSession) = 0;
    virtual HRESULT __stdcall CreateFromNetworkInterfaceId(HSTRING networkInterfaceId, ::IUnknown** ussdSession) = 0;
};};

}
