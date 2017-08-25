// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.Cryptography.Core.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.SmartCards.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::SmartCards {

struct WINRT_EBO ICardAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICardAddedEventArgs>
{
    ICardAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICardRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICardRemovedEventArgs>
{
    ICardRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCard :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCard>
{
    ISmartCard(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardAppletIdGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAppletIdGroup>
{
    ISmartCardAppletIdGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardAppletIdGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAppletIdGroupFactory>
{
    ISmartCardAppletIdGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardAppletIdGroupRegistration :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAppletIdGroupRegistration>
{
    ISmartCardAppletIdGroupRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardAppletIdGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAppletIdGroupStatics>
{
    ISmartCardAppletIdGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardAutomaticResponseApdu :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAutomaticResponseApdu>
{
    ISmartCardAutomaticResponseApdu(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardAutomaticResponseApdu2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAutomaticResponseApdu2>
{
    ISmartCardAutomaticResponseApdu2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardAutomaticResponseApdu3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAutomaticResponseApdu3>
{
    ISmartCardAutomaticResponseApdu3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardAutomaticResponseApduFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardAutomaticResponseApduFactory>
{
    ISmartCardAutomaticResponseApduFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardChallengeContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardChallengeContext>,
    impl::require<ISmartCardChallengeContext, Windows::Foundation::IClosable>
{
    ISmartCardChallengeContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardConnect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardConnect>
{
    ISmartCardConnect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardConnection>,
    impl::require<ISmartCardConnection, Windows::Foundation::IClosable>
{
    ISmartCardConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGenerator>
{
    ISmartCardCryptogramGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramGenerator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGenerator2>
{
    ISmartCardCryptogramGenerator2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramGeneratorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGeneratorStatics>
{
    ISmartCardCryptogramGeneratorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
{
    ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
{
    ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
{
    ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramMaterialCharacteristics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramMaterialCharacteristics>
{
    ISmartCardCryptogramMaterialCharacteristics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramMaterialPackageCharacteristics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramMaterialPackageCharacteristics>
{
    ISmartCardCryptogramMaterialPackageCharacteristics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramMaterialPossessionProof :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramMaterialPossessionProof>
{
    ISmartCardCryptogramMaterialPossessionProof(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramPlacementStep :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramPlacementStep>
{
    ISmartCardCryptogramPlacementStep(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramStorageKeyCharacteristics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramStorageKeyCharacteristics>
{
    ISmartCardCryptogramStorageKeyCharacteristics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramStorageKeyInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramStorageKeyInfo>
{
    ISmartCardCryptogramStorageKeyInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardCryptogramStorageKeyInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardCryptogramStorageKeyInfo2>
{
    ISmartCardCryptogramStorageKeyInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulator>
{
    ISmartCardEmulator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulator2>
{
    ISmartCardEmulator2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulatorApduReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorApduReceivedEventArgs>
{
    ISmartCardEmulatorApduReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulatorApduReceivedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorApduReceivedEventArgs2>
{
    ISmartCardEmulatorApduReceivedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulatorApduReceivedEventArgsWithCryptograms :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
{
    ISmartCardEmulatorApduReceivedEventArgsWithCryptograms(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulatorConnectionDeactivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorConnectionDeactivatedEventArgs>
{
    ISmartCardEmulatorConnectionDeactivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulatorConnectionProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorConnectionProperties>
{
    ISmartCardEmulatorConnectionProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorStatics>
{
    ISmartCardEmulatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardEmulatorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardEmulatorStatics2>
{
    ISmartCardEmulatorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardPinPolicy :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardPinPolicy>
{
    ISmartCardPinPolicy(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardPinResetDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardPinResetDeferral>
{
    ISmartCardPinResetDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardPinResetRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardPinResetRequest>
{
    ISmartCardPinResetRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardProvisioning :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardProvisioning>
{
    ISmartCardProvisioning(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardProvisioning2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardProvisioning2>
{
    ISmartCardProvisioning2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardProvisioningStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardProvisioningStatics>
{
    ISmartCardProvisioningStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardProvisioningStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardProvisioningStatics2>
{
    ISmartCardProvisioningStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardReader>
{
    ISmartCardReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardReaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardReaderStatics>
{
    ISmartCardReaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTriggerDetails>
{
    ISmartCardTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTriggerDetails2>
{
    ISmartCardTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardTriggerDetails3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTriggerDetails3>
{
    ISmartCardTriggerDetails3(std::nullptr_t = nullptr) noexcept {}
};

}
