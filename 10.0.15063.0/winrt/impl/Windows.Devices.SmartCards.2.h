// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.Cryptography.Core.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.SmartCards.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::SmartCards {

struct SmartCardPinResetHandler : Windows::Foundation::IUnknown
{
    SmartCardPinResetHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SmartCardPinResetHandler(L lambda);
    template <typename F> SmartCardPinResetHandler(F* function);
    template <typename O, typename M> SmartCardPinResetHandler(O* object, M method);
    void operator()(Windows::Devices::SmartCards::SmartCardProvisioning const& sender, Windows::Devices::SmartCards::SmartCardPinResetRequest const& request) const;
};

struct WINRT_EBO CardAddedEventArgs :
    Windows::Devices::SmartCards::ICardAddedEventArgs
{
    CardAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CardRemovedEventArgs :
    Windows::Devices::SmartCards::ICardRemovedEventArgs
{
    CardRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCard :
    Windows::Devices::SmartCards::ISmartCard,
    impl::require<SmartCard, Windows::Devices::SmartCards::ISmartCardConnect>
{
    SmartCard(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardAppletIdGroup :
    Windows::Devices::SmartCards::ISmartCardAppletIdGroup
{
    SmartCardAppletIdGroup(std::nullptr_t) noexcept {}
    SmartCardAppletIdGroup();
    SmartCardAppletIdGroup(param::hstring const& displayName, param::vector<Windows::Storage::Streams::IBuffer> const& appletIds, Windows::Devices::SmartCards::SmartCardEmulationCategory const& emulationCategory, Windows::Devices::SmartCards::SmartCardEmulationType const& emulationType);
    static uint16_t MaxAppletIds();
};

struct WINRT_EBO SmartCardAppletIdGroupRegistration :
    Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration
{
    SmartCardAppletIdGroupRegistration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardAutomaticResponseApdu :
    Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu,
    impl::require<SmartCardAutomaticResponseApdu, Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2, Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
{
    SmartCardAutomaticResponseApdu(std::nullptr_t) noexcept {}
    SmartCardAutomaticResponseApdu(Windows::Storage::Streams::IBuffer const& commandApdu, Windows::Storage::Streams::IBuffer const& responseApdu);
};

struct WINRT_EBO SmartCardChallengeContext :
    Windows::Devices::SmartCards::ISmartCardChallengeContext
{
    SmartCardChallengeContext(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardConnection :
    Windows::Devices::SmartCards::ISmartCardConnection
{
    SmartCardConnection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardCryptogramGenerator :
    Windows::Devices::SmartCards::ISmartCardCryptogramGenerator,
    impl::require<SmartCardCryptogramGenerator, Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
{
    SmartCardCryptogramGenerator(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardCryptogramGenerator> GetSmartCardCryptogramGeneratorAsync();
};

struct WINRT_EBO SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult :
    Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
{
    SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(std::nullptr_t) noexcept {}
    SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult();
};

struct WINRT_EBO SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult :
    Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
{
    SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(std::nullptr_t) noexcept {}
    SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult();
};

struct WINRT_EBO SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult :
    Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
{
    SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(std::nullptr_t) noexcept {}
    SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult();
};

struct WINRT_EBO SmartCardCryptogramMaterialCharacteristics :
    Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics
{
    SmartCardCryptogramMaterialCharacteristics(std::nullptr_t) noexcept {}
    SmartCardCryptogramMaterialCharacteristics();
};

struct WINRT_EBO SmartCardCryptogramMaterialPackageCharacteristics :
    Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics
{
    SmartCardCryptogramMaterialPackageCharacteristics(std::nullptr_t) noexcept {}
    SmartCardCryptogramMaterialPackageCharacteristics();
};

struct WINRT_EBO SmartCardCryptogramMaterialPossessionProof :
    Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof
{
    SmartCardCryptogramMaterialPossessionProof(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardCryptogramPlacementStep :
    Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep
{
    SmartCardCryptogramPlacementStep(std::nullptr_t) noexcept {}
    SmartCardCryptogramPlacementStep();
};

struct WINRT_EBO SmartCardCryptogramStorageKeyCharacteristics :
    Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics
{
    SmartCardCryptogramStorageKeyCharacteristics(std::nullptr_t) noexcept {}
    SmartCardCryptogramStorageKeyCharacteristics();
};

struct WINRT_EBO SmartCardCryptogramStorageKeyInfo :
    Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo,
    impl::require<SmartCardCryptogramStorageKeyInfo, Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
{
    SmartCardCryptogramStorageKeyInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardEmulator :
    Windows::Devices::SmartCards::ISmartCardEmulator,
    impl::require<SmartCardEmulator, Windows::Devices::SmartCards::ISmartCardEmulator2>
{
    SmartCardEmulator(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardEmulator> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>> GetAppletIdGroupRegistrationsAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration> RegisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroup const& appletIdGroup);
    static Windows::Foundation::IAsyncAction UnregisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration const& registration);
    static uint16_t MaxAppletIdGroupRegistrations();
};

struct WINRT_EBO SmartCardEmulatorApduReceivedEventArgs :
    Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs,
    impl::require<SmartCardEmulatorApduReceivedEventArgs, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
{
    SmartCardEmulatorApduReceivedEventArgs(std::nullptr_t) noexcept {}
    using impl::consume_t<SmartCardEmulatorApduReceivedEventArgs, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>::TryRespondAsync;
    using Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs::TryRespondAsync;
};

struct WINRT_EBO SmartCardEmulatorConnectionDeactivatedEventArgs :
    Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs
{
    SmartCardEmulatorConnectionDeactivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardEmulatorConnectionProperties :
    Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties
{
    SmartCardEmulatorConnectionProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardPinPolicy :
    Windows::Devices::SmartCards::ISmartCardPinPolicy
{
    SmartCardPinPolicy(std::nullptr_t) noexcept {}
    SmartCardPinPolicy();
};

struct WINRT_EBO SmartCardPinResetDeferral :
    Windows::Devices::SmartCards::ISmartCardPinResetDeferral
{
    SmartCardPinResetDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardPinResetRequest :
    Windows::Devices::SmartCards::ISmartCardPinResetRequest
{
    SmartCardPinResetRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmartCardProvisioning :
    Windows::Devices::SmartCards::ISmartCardProvisioning,
    impl::require<SmartCardProvisioning, Windows::Devices::SmartCards::ISmartCardProvisioning2>
{
    SmartCardProvisioning(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> FromSmartCardAsync(Windows::Devices::SmartCards::SmartCard const& card);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, GUID const& cardId);
    static Windows::Foundation::IAsyncOperation<bool> RequestVirtualSmartCardDeletionAsync(Windows::Devices::SmartCards::SmartCard const& card);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, GUID const& cardId);
};

struct WINRT_EBO SmartCardReader :
    Windows::Devices::SmartCards::ISmartCardReader
{
    SmartCardReader(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind const& kind);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> FromIdAsync(param::hstring const& deviceId);
};

struct WINRT_EBO SmartCardTriggerDetails :
    Windows::Devices::SmartCards::ISmartCardTriggerDetails,
    impl::require<SmartCardTriggerDetails, Windows::Devices::SmartCards::ISmartCardTriggerDetails2, Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
{
    SmartCardTriggerDetails(std::nullptr_t) noexcept {}
};

}
