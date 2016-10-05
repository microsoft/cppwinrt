// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::SmartCards {

struct ICardAddedEventArgs;
struct ICardRemovedEventArgs;
struct ISmartCard;
struct ISmartCardAppletIdGroup;
struct ISmartCardAppletIdGroupFactory;
struct ISmartCardAppletIdGroupRegistration;
struct ISmartCardAppletIdGroupStatics;
struct ISmartCardAutomaticResponseApdu;
struct ISmartCardAutomaticResponseApdu2;
struct ISmartCardAutomaticResponseApdu3;
struct ISmartCardAutomaticResponseApduFactory;
struct ISmartCardChallengeContext;
struct ISmartCardConnect;
struct ISmartCardConnection;
struct ISmartCardCryptogramGenerator;
struct ISmartCardCryptogramGeneratorStatics;
struct ISmartCardCryptogramMaterialPossessionProof;
struct ISmartCardCryptogramPlacementStep;
struct ISmartCardCryptogramStorageKeyInfo;
struct ISmartCardCryptogramStorageKeyInfo2;
struct ISmartCardEmulator;
struct ISmartCardEmulator2;
struct ISmartCardEmulatorApduReceivedEventArgs;
struct ISmartCardEmulatorApduReceivedEventArgs2;
struct ISmartCardEmulatorApduReceivedEventArgsWithCryptograms;
struct ISmartCardEmulatorConnectionDeactivatedEventArgs;
struct ISmartCardEmulatorConnectionProperties;
struct ISmartCardEmulatorStatics;
struct ISmartCardEmulatorStatics2;
struct ISmartCardPinPolicy;
struct ISmartCardPinResetDeferral;
struct ISmartCardPinResetRequest;
struct ISmartCardProvisioning;
struct ISmartCardProvisioning2;
struct ISmartCardProvisioningStatics;
struct ISmartCardProvisioningStatics2;
struct ISmartCardReader;
struct ISmartCardReaderStatics;
struct ISmartCardTriggerDetails;
struct ISmartCardTriggerDetails2;
struct SmartCardPinResetHandler;
struct CardAddedEventArgs;
struct CardRemovedEventArgs;
struct SmartCard;
struct SmartCardAppletIdGroup;
struct SmartCardAppletIdGroupRegistration;
struct SmartCardAutomaticResponseApdu;
struct SmartCardChallengeContext;
struct SmartCardConnection;
struct SmartCardCryptogramGenerator;
struct SmartCardCryptogramMaterialPossessionProof;
struct SmartCardCryptogramPlacementStep;
struct SmartCardCryptogramStorageKeyInfo;
struct SmartCardEmulator;
struct SmartCardEmulatorApduReceivedEventArgs;
struct SmartCardEmulatorConnectionDeactivatedEventArgs;
struct SmartCardEmulatorConnectionProperties;
struct SmartCardPinPolicy;
struct SmartCardPinResetDeferral;
struct SmartCardPinResetRequest;
struct SmartCardProvisioning;
struct SmartCardReader;
struct SmartCardTriggerDetails;

}

namespace Windows::Devices::SmartCards {

struct SmartCardPinResetHandler;
struct ICardAddedEventArgs;
struct ICardRemovedEventArgs;
struct ISmartCard;
struct ISmartCardAppletIdGroup;
struct ISmartCardAppletIdGroupFactory;
struct ISmartCardAppletIdGroupRegistration;
struct ISmartCardAppletIdGroupStatics;
struct ISmartCardAutomaticResponseApdu;
struct ISmartCardAutomaticResponseApdu2;
struct ISmartCardAutomaticResponseApdu3;
struct ISmartCardAutomaticResponseApduFactory;
struct ISmartCardChallengeContext;
struct ISmartCardConnect;
struct ISmartCardConnection;
struct ISmartCardCryptogramGenerator;
struct ISmartCardCryptogramGeneratorStatics;
struct ISmartCardCryptogramMaterialPossessionProof;
struct ISmartCardCryptogramPlacementStep;
struct ISmartCardCryptogramStorageKeyInfo;
struct ISmartCardCryptogramStorageKeyInfo2;
struct ISmartCardEmulator;
struct ISmartCardEmulator2;
struct ISmartCardEmulatorApduReceivedEventArgs;
struct ISmartCardEmulatorApduReceivedEventArgs2;
struct ISmartCardEmulatorApduReceivedEventArgsWithCryptograms;
struct ISmartCardEmulatorConnectionDeactivatedEventArgs;
struct ISmartCardEmulatorConnectionProperties;
struct ISmartCardEmulatorStatics;
struct ISmartCardEmulatorStatics2;
struct ISmartCardPinPolicy;
struct ISmartCardPinResetDeferral;
struct ISmartCardPinResetRequest;
struct ISmartCardProvisioning;
struct ISmartCardProvisioning2;
struct ISmartCardProvisioningStatics;
struct ISmartCardProvisioningStatics2;
struct ISmartCardReader;
struct ISmartCardReaderStatics;
struct ISmartCardTriggerDetails;
struct ISmartCardTriggerDetails2;
struct CardAddedEventArgs;
struct CardRemovedEventArgs;
struct SmartCard;
struct SmartCardAppletIdGroup;
struct SmartCardAppletIdGroupRegistration;
struct SmartCardAutomaticResponseApdu;
struct SmartCardChallengeContext;
struct SmartCardConnection;
struct SmartCardCryptogramGenerator;
struct SmartCardCryptogramMaterialPossessionProof;
struct SmartCardCryptogramPlacementStep;
struct SmartCardCryptogramStorageKeyInfo;
struct SmartCardEmulator;
struct SmartCardEmulatorApduReceivedEventArgs;
struct SmartCardEmulatorConnectionDeactivatedEventArgs;
struct SmartCardEmulatorConnectionProperties;
struct SmartCardPinPolicy;
struct SmartCardPinResetDeferral;
struct SmartCardPinResetRequest;
struct SmartCardProvisioning;
struct SmartCardReader;
struct SmartCardTriggerDetails;

}

namespace Windows::Devices::SmartCards {

enum class SmartCardActivationPolicyChangeResult
{
    Denied = 0,
    Allowed = 1,
};

enum class SmartCardAppletIdGroupActivationPolicy
{
    Disabled = 0,
    ForegroundOverride = 1,
    Enabled = 2,
};

enum class SmartCardAutomaticResponseStatus
{
    None = 0,
    Success = 1,
    UnknownError = 2,
};

enum class SmartCardCryptogramAlgorithm
{
    None = 0,
    CbcMac = 1,
    Cvc3Umd = 2,
    DecimalizedMsd = 3,
    Cvc3MD = 4,
    Sha1 = 5,
    SignedDynamicApplicationData = 6,
    RsaPkcs1 = 7,
};

enum class SmartCardCryptogramGeneratorOperationStatus
{
    Success = 0,
    AuthorizationFailed = 1,
    AuthorizationCanceled = 2,
    AuthorizationRequired = 3,
    CryptogramMaterialPackageStorageKeyExists = 4,
    NoCryptogramMaterialPackageStorageKey = 5,
    NoCryptogramMaterialPackage = 6,
    UnsupportedCryptogramMaterialPackage = 7,
    UnknownCryptogramMaterialName = 8,
    InvalidCryptogramMaterialUsage = 9,
    ApduResponseNotSent = 10,
    OtherError = 11,
};

enum class SmartCardCryptogramMaterialPackageConfirmationResponseFormat
{
    None = 0,
    VisaHmac = 1,
};

enum class SmartCardCryptogramMaterialPackageFormat
{
    None = 0,
    JweRsaPki = 1,
};

enum class SmartCardCryptogramMaterialType
{
    None = 0,
    StaticDataAuthentication = 1,
    TripleDes112 = 2,
    Aes = 3,
    RsaPkcs1 = 4,
};

enum class SmartCardCryptogramPlacementOptions : unsigned
{
    None = 0x0,
    UnitsAreInNibbles = 0x1,
    ChainOutput = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(SmartCardCryptogramPlacementOptions)

enum class SmartCardCryptogramStorageKeyAlgorithm
{
    None = 0,
    Rsa2048 = 1,
};

enum class SmartCardCryptogramStorageKeyCapabilities : unsigned
{
    None = 0x0,
    HardwareProtection = 0x1,
    UnlockPrompt = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(SmartCardCryptogramStorageKeyCapabilities)

enum class SmartCardCryptographicKeyAttestationStatus
{
    NoAttestation = 0,
    SoftwareKeyWithoutTpm = 1,
    SoftwareKeyWithTpm = 2,
    TpmKeyUnknownAttestationStatus = 3,
    TpmKeyWithoutAttestationCapability = 4,
    TpmKeyWithTemporaryAttestationFailure = 5,
    TpmKeyWithLongTermAttestationFailure = 6,
    TpmKeyWithAttestation = 7,
};

enum class SmartCardEmulationCategory
{
    Other = 0,
    Payment = 1,
};

enum class SmartCardEmulationType
{
    Host = 0,
    Uicc = 1,
    EmbeddedSE = 2,
};

enum class SmartCardEmulatorConnectionDeactivatedReason
{
    ConnectionLost = 0,
    ConnectionRedirected = 1,
};

enum class SmartCardEmulatorConnectionSource
{
    Unknown = 0,
    NfcReader = 1,
};

enum class SmartCardEmulatorEnablementPolicy
{
    Never = 0,
    Always = 1,
    ScreenOn = 2,
    ScreenUnlocked = 3,
};

enum class SmartCardLaunchBehavior
{
    Default = 0,
    AboveLock = 1,
};

enum class SmartCardPinCharacterPolicyOption
{
    Allow = 0,
    RequireAtLeastOne = 1,
    Disallow = 2,
};

enum class SmartCardReaderKind
{
    Any = 0,
    Generic = 1,
    Tpm = 2,
    Nfc = 3,
    Uicc = 4,
    EmbeddedSE = 5,
};

enum class SmartCardReaderStatus
{
    Disconnected = 0,
    Ready = 1,
    Exclusive = 2,
};

enum class SmartCardStatus
{
    Disconnected = 0,
    Ready = 1,
    Shared = 2,
    Exclusive = 3,
    Unresponsive = 4,
};

enum class SmartCardTriggerType
{
    EmulatorTransaction = 0,
    EmulatorNearFieldEntry = 1,
    EmulatorNearFieldExit = 2,
    EmulatorHostApplicationActivated = 3,
    EmulatorAppletIdGroupRegistrationChanged = 4,
    ReaderCardAdded = 5,
};

enum class SmartCardUnlockPromptingBehavior
{
    AllowUnlockPrompt = 0,
    RequireUnlockPrompt = 1,
    PreventUnlockPrompt = 2,
};

}

}
