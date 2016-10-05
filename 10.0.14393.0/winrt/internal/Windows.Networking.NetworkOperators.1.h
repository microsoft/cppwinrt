// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Networking.NetworkOperators.0.h"
#include "Windows.Data.Xml.Dom.0.h"
#include "Windows.Devices.Sms.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Networking.Connectivity.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Networking.Connectivity.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Networking.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::NetworkOperators {

struct ProfileUsage
{
    uint32_t UsageInMegabytes;
    Windows::Foundation::DateTime LastSyncTime;
};

}

namespace Windows::Networking::NetworkOperators {

using ProfileUsage = ABI::Windows::Networking::NetworkOperators::ProfileUsage;

}

namespace ABI::Windows::Networking::NetworkOperators {

struct __declspec(uuid("f2aa4395-f1e6-4319-aa3e-477ca64b2bdf")) __declspec(novtable) IFdnAccessManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestUnlockAsync(hstring contactListId, Windows::Foundation::IAsyncOperation<bool> ** returnValue) = 0;
};

struct __declspec(uuid("e756c791-1003-4de5-83c7-de61d88831d0")) __declspec(novtable) IHotspotAuthenticationContext : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WirelessNetworkId(uint32_t * __valueSize, uint8_t ** value) = 0;
    virtual HRESULT __stdcall get_NetworkAdapter(Windows::Networking::Connectivity::INetworkAdapter ** value) = 0;
    virtual HRESULT __stdcall get_RedirectMessageUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_RedirectMessageXml(Windows::Data::Xml::Dom::IXmlDocument ** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall abi_IssueCredentials(hstring userName, hstring password, hstring extraParameters, bool markAsManualConnectOnFailure) = 0;
    virtual HRESULT __stdcall abi_AbortAuthentication(bool markAsManual) = 0;
    virtual HRESULT __stdcall abi_SkipAuthentication() = 0;
    virtual HRESULT __stdcall abi_TriggerAttentionRequired(hstring packageRelativeApplicationId, hstring applicationParameters) = 0;
};

struct __declspec(uuid("e756c791-1004-4de5-83c7-de61d88831d0")) __declspec(novtable) IHotspotAuthenticationContext2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IssueCredentialsAsync(hstring userName, hstring password, hstring extraParameters, bool markAsManualConnectOnFailure, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> ** asyncInfo) = 0;
};

struct __declspec(uuid("e756c791-1002-4de5-83c7-de61d88831d0")) __declspec(novtable) IHotspotAuthenticationContextStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryGetAuthenticationContext(hstring evenToken, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext ** context, bool * isValid) = 0;
};

struct __declspec(uuid("e756c791-1001-4de5-83c7-de61d88831d0")) __declspec(novtable) IHotspotAuthenticationEventDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EventToken(hstring * value) = 0;
};

struct __declspec(uuid("e756c791-1005-4de5-83c7-de61d88831d0")) __declspec(novtable) IHotspotCredentialsAuthenticationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HasNetworkErrorOccurred(bool * value) = 0;
    virtual HRESULT __stdcall get_ResponseCode(winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode * value) = 0;
    virtual HRESULT __stdcall get_LogoffUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationReplyXml(Windows::Data::Xml::Dom::IXmlDocument ** value) = 0;
};

struct __declspec(uuid("b458aeed-49f1-4c22-b073-96d511bf9c35")) __declspec(novtable) IKnownCSimFilePathsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EFSpn(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Gid1(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Gid2(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
};

struct __declspec(uuid("3883c8b9-ff24-4571-a867-09f960426e14")) __declspec(novtable) IKnownRuimFilePathsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EFSpn(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Gid1(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Gid2(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
};

struct __declspec(uuid("80cd1a63-37a5-43d3-80a3-ccd23e8fecee")) __declspec(novtable) IKnownSimFilePathsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EFOns(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_EFSpn(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Gid1(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Gid2(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
};

struct __declspec(uuid("7c34e581-1f1b-43f4-9530-8b092d32d71f")) __declspec(novtable) IKnownUSimFilePathsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EFSpn(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_EFOpl(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_EFPnn(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Gid1(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Gid2(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
};

struct __declspec(uuid("36c24ccd-cee2-43e0-a603-ee86a36d6570")) __declspec(novtable) IMobileBroadbandAccount : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAccountId(hstring * value) = 0;
    virtual HRESULT __stdcall get_ServiceProviderGuid(GUID * value) = 0;
    virtual HRESULT __stdcall get_ServiceProviderName(hstring * value) = 0;
    virtual HRESULT __stdcall get_CurrentNetwork(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork ** network) = 0;
    virtual HRESULT __stdcall get_CurrentDeviceInformation(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation ** deviceInformation) = 0;
};

struct __declspec(uuid("38f52f1c-1136-4257-959f-b658a352b6d4")) __declspec(novtable) IMobileBroadbandAccount2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetConnectionProfiles(Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> ** value) = 0;
};

struct __declspec(uuid("3853c880-77de-4c04-bead-a123b08c9f59")) __declspec(novtable) IMobileBroadbandAccountEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAccountId(hstring * value) = 0;
};

struct __declspec(uuid("aa7f4d24-afc1-4fc8-ae9a-a9175310faad")) __declspec(novtable) IMobileBroadbandAccountStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AvailableNetworkAccountIds(Windows::Foundation::Collections::IVectorView<hstring> ** ppAccountIds) = 0;
    virtual HRESULT __stdcall abi_CreateFromNetworkAccountId(hstring networkAccountId, Windows::Networking::NetworkOperators::IMobileBroadbandAccount ** ppAccount) = 0;
};

struct __declspec(uuid("7bc31d88-a6bd-49e1-80ab-6b91354a57d4")) __declspec(novtable) IMobileBroadbandAccountUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAccountId(hstring * value) = 0;
    virtual HRESULT __stdcall get_HasDeviceInformationChanged(bool * value) = 0;
    virtual HRESULT __stdcall get_HasNetworkChanged(bool * value) = 0;
};

struct __declspec(uuid("6bf3335e-23b5-449f-928d-5e0d3e04471d")) __declspec(novtable) IMobileBroadbandAccountWatcher : Windows::IInspectable
{
    virtual HRESULT __stdcall add_AccountAdded(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_AccountAdded(event_token cookie) = 0;
    virtual HRESULT __stdcall add_AccountUpdated(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_AccountUpdated(event_token cookie) = 0;
    virtual HRESULT __stdcall add_AccountRemoved(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_AccountRemoved(event_token cookie) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token cookie) = 0;
    virtual HRESULT __stdcall add_Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token cookie) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus * status) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
};

struct __declspec(uuid("e6d08168-e381-4c6e-9be8-fe156969a446")) __declspec(novtable) IMobileBroadbandDeviceInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NetworkDeviceStatus(winrt::Windows::Networking::NetworkOperators::NetworkDeviceStatus * value) = 0;
    virtual HRESULT __stdcall get_Manufacturer(hstring * value) = 0;
    virtual HRESULT __stdcall get_Model(hstring * value) = 0;
    virtual HRESULT __stdcall get_FirmwareInformation(hstring * value) = 0;
    virtual HRESULT __stdcall get_CellularClass(winrt::Windows::Devices::Sms::CellularClass * value) = 0;
    virtual HRESULT __stdcall get_DataClasses(winrt::Windows::Networking::NetworkOperators::DataClasses * value) = 0;
    virtual HRESULT __stdcall get_CustomDataClass(hstring * value) = 0;
    virtual HRESULT __stdcall get_MobileEquipmentId(hstring * value) = 0;
    virtual HRESULT __stdcall get_TelephoneNumbers(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_SubscriberId(hstring * value) = 0;
    virtual HRESULT __stdcall get_SimIccId(hstring * value) = 0;
    virtual HRESULT __stdcall get_DeviceType(winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceType * pDeviceType) = 0;
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_CurrentRadioState(winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioState * pCurrentState) = 0;
};

struct __declspec(uuid("2e467af1-f932-4737-a722-03ba72370cb8")) __declspec(novtable) IMobileBroadbandDeviceInformation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PinManager(Windows::Networking::NetworkOperators::IMobileBroadbandPinManager ** value) = 0;
    virtual HRESULT __stdcall get_Revision(hstring * value) = 0;
    virtual HRESULT __stdcall get_SerialNumber(hstring * value) = 0;
};

struct __declspec(uuid("22be1a52-bd80-40ac-8e1f-2e07836a3dbd")) __declspec(novtable) IMobileBroadbandDeviceService : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceServiceId(GUID * value) = 0;
    virtual HRESULT __stdcall get_SupportedCommands(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall abi_OpenDataSession(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession ** value) = 0;
    virtual HRESULT __stdcall abi_OpenCommandSession(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession ** value) = 0;
};

struct __declspec(uuid("b0f46abb-94d6-44b9-a538-f0810b645389")) __declspec(novtable) IMobileBroadbandDeviceServiceCommandResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StatusCode(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ResponseData(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("fc098a45-913b-4914-b6c3-ae6304593e75")) __declspec(novtable) IMobileBroadbandDeviceServiceCommandSession : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SendQueryCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer * data, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_SendSetCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer * data, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_CloseSession() = 0;
};

struct __declspec(uuid("b6aa13de-1380-40e3-8618-73cbca48138c")) __declspec(novtable) IMobileBroadbandDeviceServiceDataReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ReceivedData(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("dad62333-8bcf-4289-8a37-045c2169486a")) __declspec(novtable) IMobileBroadbandDeviceServiceDataSession : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_WriteDataAsync(Windows::Storage::Streams::IBuffer * value, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_CloseSession() = 0;
    virtual HRESULT __stdcall add_DataReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> * eventHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_DataReceived(event_token eventCookie) = 0;
};

struct __declspec(uuid("53d69b5b-c4ed-45f0-803a-d9417a6d9846")) __declspec(novtable) IMobileBroadbandDeviceServiceInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceServiceId(GUID * value) = 0;
    virtual HRESULT __stdcall get_IsDataReadSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDataWriteSupported(bool * value) = 0;
};

struct __declspec(uuid("4a055b70-b9ae-4458-9241-a6a5fbf18a0c")) __declspec(novtable) IMobileBroadbandDeviceServiceTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_DeviceServiceId(GUID * value) = 0;
    virtual HRESULT __stdcall get_ReceivedData(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("d0356912-e9f9-4f67-a03d-43189a316bf1")) __declspec(novtable) IMobileBroadbandModem : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CurrentAccount(Windows::Networking::NetworkOperators::IMobileBroadbandAccount ** value) = 0;
    virtual HRESULT __stdcall get_DeviceInformation(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation ** value) = 0;
    virtual HRESULT __stdcall get_MaxDeviceServiceCommandSizeInBytes(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxDeviceServiceDataSizeInBytes(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_DeviceServices(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeviceService(GUID deviceServiceId, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService ** value) = 0;
    virtual HRESULT __stdcall get_IsResetSupported(bool * value) = 0;
    virtual HRESULT __stdcall abi_ResetAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_GetCurrentConfigurationAsync(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> ** asyncInfo) = 0;
    virtual HRESULT __stdcall get_CurrentNetwork(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork ** value) = 0;
};

struct __declspec(uuid("fce035a3-d6cd-4320-b982-be9d3ec7890f")) __declspec(novtable) IMobileBroadbandModemConfiguration : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Uicc(Windows::Networking::NetworkOperators::IMobileBroadbandUicc ** value) = 0;
    virtual HRESULT __stdcall get_HomeProviderId(hstring * value) = 0;
    virtual HRESULT __stdcall get_HomeProviderName(hstring * value) = 0;
};

struct __declspec(uuid("f99ed637-d6f1-4a78-8cbc-6421a65063c8")) __declspec(novtable) IMobileBroadbandModemStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * value) = 0;
    virtual HRESULT __stdcall abi_FromId(hstring deviceId, Windows::Networking::NetworkOperators::IMobileBroadbandModem ** value) = 0;
    virtual HRESULT __stdcall abi_GetDefault(Windows::Networking::NetworkOperators::IMobileBroadbandModem ** value) = 0;
};

struct __declspec(uuid("cb63928c-0309-4cb6-a8c1-6a5a3c8e1ff6")) __declspec(novtable) IMobileBroadbandNetwork : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAdapter(Windows::Networking::Connectivity::INetworkAdapter ** value) = 0;
    virtual HRESULT __stdcall get_NetworkRegistrationState(winrt::Windows::Networking::NetworkOperators::NetworkRegistrationState * registrationState) = 0;
    virtual HRESULT __stdcall get_RegistrationNetworkError(uint32_t * networkError) = 0;
    virtual HRESULT __stdcall get_PacketAttachNetworkError(uint32_t * networkError) = 0;
    virtual HRESULT __stdcall get_ActivationNetworkError(uint32_t * networkError) = 0;
    virtual HRESULT __stdcall get_AccessPointName(hstring * apn) = 0;
    virtual HRESULT __stdcall get_RegisteredDataClass(winrt::Windows::Networking::NetworkOperators::DataClasses * value) = 0;
    virtual HRESULT __stdcall get_RegisteredProviderId(hstring * value) = 0;
    virtual HRESULT __stdcall get_RegisteredProviderName(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ShowConnectionUI() = 0;
};

struct __declspec(uuid("5a55db22-62f7-4bdd-ba1d-477441960ba0")) __declspec(novtable) IMobileBroadbandNetwork2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetVoiceCallSupportAsync(Windows::Foundation::IAsyncOperation<bool> ** asyncInfo) = 0;
    virtual HRESULT __stdcall get_RegistrationUiccApps(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> ** value) = 0;
};

struct __declspec(uuid("beaf94e1-960f-49b4-a08d-7d85e968c7ec")) __declspec(novtable) IMobileBroadbandNetworkRegistrationStateChange : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Network(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork ** value) = 0;
};

struct __declspec(uuid("89135cff-28b8-46aa-b137-1c4b0f21edfe")) __declspec(novtable) IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NetworkRegistrationStateChanges(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> ** value) = 0;
};

struct __declspec(uuid("e661d709-e779-45bf-8281-75323df9e321")) __declspec(novtable) IMobileBroadbandPin : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Type(winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType * value) = 0;
    virtual HRESULT __stdcall get_LockState(winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockState * value) = 0;
    virtual HRESULT __stdcall get_Format(winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinFormat * value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool * value) = 0;
    virtual HRESULT __stdcall get_MaxLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MinLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_AttemptsRemaining(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_EnableAsync(hstring currentPin, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_DisableAsync(hstring currentPin, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_EnterAsync(hstring currentPin, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_ChangeAsync(hstring currentPin, hstring newPin, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_UnblockAsync(hstring pinUnblockKey, hstring newPin, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> ** asyncInfo) = 0;
};

struct __declspec(uuid("be16673e-1f04-4f95-8b90-e7f559dde7e5")) __declspec(novtable) IMobileBroadbandPinLockStateChange : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_PinType(winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType * value) = 0;
    virtual HRESULT __stdcall get_PinLockState(winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockState * value) = 0;
};

struct __declspec(uuid("d338c091-3e91-4d38-9036-aee83a6e79ad")) __declspec(novtable) IMobileBroadbandPinLockStateChangeTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PinLockStateChanges(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> ** value) = 0;
};

struct __declspec(uuid("83567edd-6e1f-4b9b-a413-2b1f50cc36df")) __declspec(novtable) IMobileBroadbandPinManager : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SupportedPins(Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType> ** value) = 0;
    virtual HRESULT __stdcall abi_GetPin(winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType pinType, Windows::Networking::NetworkOperators::IMobileBroadbandPin ** value) = 0;
};

struct __declspec(uuid("11dddc32-31e7-49f5-b663-123d3bef0362")) __declspec(novtable) IMobileBroadbandPinOperationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsSuccessful(bool * value) = 0;
    virtual HRESULT __stdcall get_AttemptsRemaining(uint32_t * value) = 0;
};

struct __declspec(uuid("b054a561-9833-4aed-9717-4348b21a24b3")) __declspec(novtable) IMobileBroadbandRadioStateChange : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_RadioState(winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioState * value) = 0;
};

struct __declspec(uuid("71301ace-093c-42c6-b0db-ad1f75a65445")) __declspec(novtable) IMobileBroadbandRadioStateChangeTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RadioStateChanges(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> ** value) = 0;
};

struct __declspec(uuid("e634f691-525a-4ce2-8fce-aa4162579154")) __declspec(novtable) IMobileBroadbandUicc : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SimIccId(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetUiccAppsAsync(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> ** asyncInfo) = 0;
};

struct __declspec(uuid("4d170556-98a1-43dd-b2ec-50c90cf248df")) __declspec(novtable) IMobileBroadbandUiccApp : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Networking::NetworkOperators::UiccAppKind * value) = 0;
    virtual HRESULT __stdcall abi_GetRecordDetailsAsync(Windows::Foundation::Collections::IIterable<uint32_t> * uiccFilePath, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_ReadRecordAsync(Windows::Foundation::Collections::IIterable<uint32_t> * uiccFilePath, int32_t recordIndex, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> ** asyncInfo) = 0;
};

struct __declspec(uuid("64c95285-358e-47c5-8249-695f383b2bdb")) __declspec(novtable) IMobileBroadbandUiccAppReadRecordResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus * value) = 0;
    virtual HRESULT __stdcall get_Data(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("d919682f-be14-4934-981d-2f57b9ed83e6")) __declspec(novtable) IMobileBroadbandUiccAppRecordDetailsResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Networking::NetworkOperators::UiccAppRecordKind * value) = 0;
    virtual HRESULT __stdcall get_RecordCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_RecordSize(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ReadAccessCondition(winrt::Windows::Networking::NetworkOperators::UiccAccessCondition * value) = 0;
    virtual HRESULT __stdcall get_WriteAccessCondition(winrt::Windows::Networking::NetworkOperators::UiccAccessCondition * value) = 0;
};

struct __declspec(uuid("744930eb-8157-4a41-8494-6bf54c9b1d2b")) __declspec(novtable) IMobileBroadbandUiccAppsResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus * value) = 0;
    virtual HRESULT __stdcall get_UiccApps(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> ** value) = 0;
};

struct __declspec(uuid("bc68a9d1-82e1-4488-9f2c-1276c2468fac")) __declspec(novtable) INetworkOperatorNotificationEventDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NotificationType(winrt::Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType * value) = 0;
    virtual HRESULT __stdcall get_NetworkAccountId(hstring * value) = 0;
    virtual HRESULT __stdcall get_EncodingType(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
    virtual HRESULT __stdcall get_RuleId(hstring * value) = 0;
    virtual HRESULT __stdcall get_SmsMessage(Windows::Devices::Sms::ISmsMessage ** value) = 0;
};

struct __declspec(uuid("0bcc0284-412e-403d-acc6-b757e34774a4")) __declspec(novtable) INetworkOperatorTetheringAccessPointConfiguration : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Ssid(hstring * value) = 0;
    virtual HRESULT __stdcall put_Ssid(hstring value) = 0;
    virtual HRESULT __stdcall get_Passphrase(hstring * value) = 0;
    virtual HRESULT __stdcall put_Passphrase(hstring value) = 0;
};

struct __declspec(uuid("709d254c-595f-4847-bb30-646935542918")) __declspec(novtable) INetworkOperatorTetheringClient : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MacAddress(hstring * value) = 0;
    virtual HRESULT __stdcall get_HostNames(Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> ** value) = 0;
};

struct __declspec(uuid("91b14016-8dca-4225-bbed-eef8b8d718d7")) __declspec(novtable) INetworkOperatorTetheringClientManager : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetTetheringClients(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> ** value) = 0;
};

struct __declspec(uuid("0108916d-9e9a-4af6-8da3-60493b19c204")) __declspec(novtable) INetworkOperatorTetheringEntitlementCheck : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AuthorizeTethering(bool allow, hstring entitlementFailureReason) = 0;
};

struct __declspec(uuid("d45a8da0-0e86-4d98-8ba4-dd70d4b764d3")) __declspec(novtable) INetworkOperatorTetheringManager : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaxClientCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ClientCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TetheringOperationalState(winrt::Windows::Networking::NetworkOperators::TetheringOperationalState * value) = 0;
    virtual HRESULT __stdcall abi_GetCurrentAccessPointConfiguration(Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration ** configuration) = 0;
    virtual HRESULT __stdcall abi_ConfigureAccessPointAsync(Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration * configuration, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StartTetheringAsync(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StopTetheringAsync(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> ** asyncInfo) = 0;
};

struct __declspec(uuid("3ebcbacc-f8c3-405c-9964-70a1eeabe194")) __declspec(novtable) INetworkOperatorTetheringManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetTetheringCapability(hstring networkAccountId, winrt::Windows::Networking::NetworkOperators::TetheringCapability * value) = 0;
    virtual HRESULT __stdcall abi_CreateFromNetworkAccountId(hstring networkAccountId, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager ** ppManager) = 0;
};

struct __declspec(uuid("5b235412-35f0-49e7-9b08-16d278fbaa42")) __declspec(novtable) INetworkOperatorTetheringManagerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetTetheringCapabilityFromConnectionProfile(Windows::Networking::Connectivity::IConnectionProfile * profile, winrt::Windows::Networking::NetworkOperators::TetheringCapability * result) = 0;
    virtual HRESULT __stdcall abi_CreateFromConnectionProfile(Windows::Networking::Connectivity::IConnectionProfile * profile, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager ** ppManager) = 0;
};

struct __declspec(uuid("8fdaadb6-4af9-4f21-9b58-d53e9f24231e")) __declspec(novtable) INetworkOperatorTetheringManagerStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromConnectionProfileWithTargetAdapter(Windows::Networking::Connectivity::IConnectionProfile * profile, Windows::Networking::Connectivity::INetworkAdapter * adapter, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager ** ppManager) = 0;
};

struct __declspec(uuid("ebd203a1-01ba-476d-b4b3-bf3d12c8f80c")) __declspec(novtable) INetworkOperatorTetheringOperationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::NetworkOperators::TetheringOperationStatus * value) = 0;
    virtual HRESULT __stdcall get_AdditionalErrorMessage(hstring * value) = 0;
};

struct __declspec(uuid("217700e0-8203-11df-adb9-f4ce462d9137")) __declspec(novtable) IProvisionFromXmlDocumentResults : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllElementsProvisioned(bool * value) = 0;
    virtual HRESULT __stdcall get_ProvisionResultsXml(hstring * value) = 0;
};

struct __declspec(uuid("217700e0-8202-11df-adb9-f4ce462d9137")) __declspec(novtable) IProvisionedProfile : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_UpdateCost(winrt::Windows::Networking::Connectivity::NetworkCostType value) = 0;
    virtual HRESULT __stdcall abi_UpdateUsage(Windows::Networking::NetworkOperators::ProfileUsage value) = 0;
};

struct __declspec(uuid("217700e0-8201-11df-adb9-f4ce462d9137")) __declspec(novtable) IProvisioningAgent : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ProvisionFromXmlDocumentAsync(hstring provisioningXmlDocument, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_GetProvisionedProfile(winrt::Windows::Networking::NetworkOperators::ProfileMediaType mediaType, hstring profileName, Windows::Networking::NetworkOperators::IProvisionedProfile ** provisionedProfile) = 0;
};

struct __declspec(uuid("217700e0-8101-11df-adb9-f4ce462d9137")) __declspec(novtable) IProvisioningAgentStaticMethods : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromNetworkAccountId(hstring networkAccountId, Windows::Networking::NetworkOperators::IProvisioningAgent ** provisioningAgent) = 0;
};

struct __declspec(uuid("2f9acf82-2004-4d5d-bf81-2aba1b4be4a8")) __declspec(novtable) IUssdMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DataCodingScheme(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_DataCodingScheme(uint8_t value) = 0;
    virtual HRESULT __stdcall abi_GetPayload(uint32_t * __valueSize, uint8_t ** value) = 0;
    virtual HRESULT __stdcall abi_SetPayload(uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall get_PayloadAsText(hstring * value) = 0;
    virtual HRESULT __stdcall put_PayloadAsText(hstring value) = 0;
};

struct __declspec(uuid("2f9acf82-1003-4d5d-bf81-2aba1b4be4a8")) __declspec(novtable) IUssdMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMessage(hstring messageText, Windows::Networking::NetworkOperators::IUssdMessage ** ussdMessage) = 0;
};

struct __declspec(uuid("2f9acf82-2005-4d5d-bf81-2aba1b4be4a8")) __declspec(novtable) IUssdReply : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResultCode(winrt::Windows::Networking::NetworkOperators::UssdResultCode * value) = 0;
    virtual HRESULT __stdcall get_Message(Windows::Networking::NetworkOperators::IUssdMessage ** value) = 0;
};

struct __declspec(uuid("2f9acf82-2002-4d5d-bf81-2aba1b4be4a8")) __declspec(novtable) IUssdSession : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SendMessageAndGetReplyAsync(Windows::Networking::NetworkOperators::IUssdMessage * message, Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::UssdReply> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_Close() = 0;
};

struct __declspec(uuid("2f9acf82-1001-4d5d-bf81-2aba1b4be4a8")) __declspec(novtable) IUssdSessionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromNetworkAccountId(hstring networkAccountId, Windows::Networking::NetworkOperators::IUssdSession ** ussdSession) = 0;
    virtual HRESULT __stdcall abi_CreateFromNetworkInterfaceId(hstring networkInterfaceId, Windows::Networking::NetworkOperators::IUssdSession ** ussdSession) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Networking::NetworkOperators::HotspotAuthenticationContext> { using default_interface = Windows::Networking::NetworkOperators::IHotspotAuthenticationContext; };
template <> struct traits<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails> { using default_interface = Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails; };
template <> struct traits<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> { using default_interface = Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandAccount> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandAccount; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandModem> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandModem; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandNetwork> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandNetwork; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPin> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandPin; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPinManager> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandPinManager; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUicc> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandUicc; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult; };
template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> { using default_interface = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult; };
template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails> { using default_interface = Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails; };
template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration> { using default_interface = Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration; };
template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> { using default_interface = Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient; };
template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager> { using default_interface = Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager; };
template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> { using default_interface = Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult; };
template <> struct traits<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> { using default_interface = Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults; };
template <> struct traits<Windows::Networking::NetworkOperators::ProvisionedProfile> { using default_interface = Windows::Networking::NetworkOperators::IProvisionedProfile; };
template <> struct traits<Windows::Networking::NetworkOperators::ProvisioningAgent> { using default_interface = Windows::Networking::NetworkOperators::IProvisioningAgent; };
template <> struct traits<Windows::Networking::NetworkOperators::UssdMessage> { using default_interface = Windows::Networking::NetworkOperators::IUssdMessage; };
template <> struct traits<Windows::Networking::NetworkOperators::UssdReply> { using default_interface = Windows::Networking::NetworkOperators::IUssdReply; };
template <> struct traits<Windows::Networking::NetworkOperators::UssdSession> { using default_interface = Windows::Networking::NetworkOperators::IUssdSession; };

}

namespace Windows::Networking::NetworkOperators {

template <typename T> struct impl_IFdnAccessManagerStatics;
template <typename T> struct impl_IHotspotAuthenticationContext;
template <typename T> struct impl_IHotspotAuthenticationContext2;
template <typename T> struct impl_IHotspotAuthenticationContextStatics;
template <typename T> struct impl_IHotspotAuthenticationEventDetails;
template <typename T> struct impl_IHotspotCredentialsAuthenticationResult;
template <typename T> struct impl_IKnownCSimFilePathsStatics;
template <typename T> struct impl_IKnownRuimFilePathsStatics;
template <typename T> struct impl_IKnownSimFilePathsStatics;
template <typename T> struct impl_IKnownUSimFilePathsStatics;
template <typename T> struct impl_IMobileBroadbandAccount;
template <typename T> struct impl_IMobileBroadbandAccount2;
template <typename T> struct impl_IMobileBroadbandAccountEventArgs;
template <typename T> struct impl_IMobileBroadbandAccountStatics;
template <typename T> struct impl_IMobileBroadbandAccountUpdatedEventArgs;
template <typename T> struct impl_IMobileBroadbandAccountWatcher;
template <typename T> struct impl_IMobileBroadbandDeviceInformation;
template <typename T> struct impl_IMobileBroadbandDeviceInformation2;
template <typename T> struct impl_IMobileBroadbandDeviceService;
template <typename T> struct impl_IMobileBroadbandDeviceServiceCommandResult;
template <typename T> struct impl_IMobileBroadbandDeviceServiceCommandSession;
template <typename T> struct impl_IMobileBroadbandDeviceServiceDataReceivedEventArgs;
template <typename T> struct impl_IMobileBroadbandDeviceServiceDataSession;
template <typename T> struct impl_IMobileBroadbandDeviceServiceInformation;
template <typename T> struct impl_IMobileBroadbandDeviceServiceTriggerDetails;
template <typename T> struct impl_IMobileBroadbandModem;
template <typename T> struct impl_IMobileBroadbandModemConfiguration;
template <typename T> struct impl_IMobileBroadbandModemStatics;
template <typename T> struct impl_IMobileBroadbandNetwork;
template <typename T> struct impl_IMobileBroadbandNetwork2;
template <typename T> struct impl_IMobileBroadbandNetworkRegistrationStateChange;
template <typename T> struct impl_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
template <typename T> struct impl_IMobileBroadbandPin;
template <typename T> struct impl_IMobileBroadbandPinLockStateChange;
template <typename T> struct impl_IMobileBroadbandPinLockStateChangeTriggerDetails;
template <typename T> struct impl_IMobileBroadbandPinManager;
template <typename T> struct impl_IMobileBroadbandPinOperationResult;
template <typename T> struct impl_IMobileBroadbandRadioStateChange;
template <typename T> struct impl_IMobileBroadbandRadioStateChangeTriggerDetails;
template <typename T> struct impl_IMobileBroadbandUicc;
template <typename T> struct impl_IMobileBroadbandUiccApp;
template <typename T> struct impl_IMobileBroadbandUiccAppReadRecordResult;
template <typename T> struct impl_IMobileBroadbandUiccAppRecordDetailsResult;
template <typename T> struct impl_IMobileBroadbandUiccAppsResult;
template <typename T> struct impl_INetworkOperatorNotificationEventDetails;
template <typename T> struct impl_INetworkOperatorTetheringAccessPointConfiguration;
template <typename T> struct impl_INetworkOperatorTetheringClient;
template <typename T> struct impl_INetworkOperatorTetheringClientManager;
template <typename T> struct impl_INetworkOperatorTetheringEntitlementCheck;
template <typename T> struct impl_INetworkOperatorTetheringManager;
template <typename T> struct impl_INetworkOperatorTetheringManagerStatics;
template <typename T> struct impl_INetworkOperatorTetheringManagerStatics2;
template <typename T> struct impl_INetworkOperatorTetheringManagerStatics3;
template <typename T> struct impl_INetworkOperatorTetheringOperationResult;
template <typename T> struct impl_IProvisionFromXmlDocumentResults;
template <typename T> struct impl_IProvisionedProfile;
template <typename T> struct impl_IProvisioningAgent;
template <typename T> struct impl_IProvisioningAgentStaticMethods;
template <typename T> struct impl_IUssdMessage;
template <typename T> struct impl_IUssdMessageFactory;
template <typename T> struct impl_IUssdReply;
template <typename T> struct impl_IUssdSession;
template <typename T> struct impl_IUssdSessionStatics;

}

namespace impl {

template <> struct traits<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IFdnAccessManagerStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IFdnAccessManagerStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IHotspotAuthenticationContext;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IHotspotAuthenticationContext<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IHotspotAuthenticationContext2<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IHotspotAuthenticationContextStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IHotspotAuthenticationEventDetails<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IHotspotCredentialsAuthenticationResult<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IKnownCSimFilePathsStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IKnownRuimFilePathsStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IKnownSimFilePathsStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IKnownUSimFilePathsStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccount;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandAccount<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccount2;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandAccount2<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandAccountEventArgs<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandAccountStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandAccountUpdatedEventArgs<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandAccountWatcher<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceInformation<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceInformation2<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceService<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceServiceCommandResult<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceServiceCommandSession<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceServiceDataReceivedEventArgs<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceServiceDataSession<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceServiceInformation<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandDeviceServiceTriggerDetails<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandModem>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandModem;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandModem<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandModemConfiguration<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandModemStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandNetwork;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandNetwork<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandNetwork2<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandNetworkRegistrationStateChange<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandPin>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandPin;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandPin<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandPinLockStateChange<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandPinLockStateChangeTriggerDetails<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandPinManager;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandPinManager<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandPinOperationResult<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandRadioStateChange<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandRadioStateChangeTriggerDetails<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandUicc;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandUicc<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandUiccApp<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandUiccAppReadRecordResult<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandUiccAppRecordDetailsResult<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IMobileBroadbandUiccAppsResult<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorNotificationEventDetails<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringAccessPointConfiguration<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringClient<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringClientManager<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringEntitlementCheck<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringManager<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringManagerStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringManagerStatics2<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringManagerStatics3<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_INetworkOperatorTetheringOperationResult<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IProvisionFromXmlDocumentResults<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IProvisionedProfile>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IProvisionedProfile;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IProvisionedProfile<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IProvisioningAgent>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IProvisioningAgent;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IProvisioningAgent<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IProvisioningAgentStaticMethods<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IUssdMessage>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IUssdMessage;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IUssdMessage<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IUssdMessageFactory>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IUssdMessageFactory;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IUssdMessageFactory<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IUssdReply>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IUssdReply;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IUssdReply<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IUssdSession>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IUssdSession;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IUssdSession<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::IUssdSessionStatics>
{
    using abi = ABI::Windows::Networking::NetworkOperators::IUssdSessionStatics;
    template <typename D> using consume = Windows::Networking::NetworkOperators::impl_IUssdSessionStatics<D>;
};

template <> struct traits<Windows::Networking::NetworkOperators::FdnAccessManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.FdnAccessManager"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>
{
    using abi = ABI::Windows::Networking::NetworkOperators::HotspotAuthenticationContext;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.HotspotAuthenticationContext"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.HotspotAuthenticationEventDetails"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.HotspotCredentialsAuthenticationResult"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::KnownCSimFilePaths>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.KnownCSimFilePaths"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::KnownRuimFilePaths>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.KnownRuimFilePaths"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::KnownSimFilePaths>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.KnownSimFilePaths"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::KnownUSimFilePaths>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.KnownUSimFilePaths"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandAccount>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandAccount;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandAccount"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandAccountEventArgs"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandAccountUpdatedEventArgs"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcher"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceInformation"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandDeviceService;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceService"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandResult"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandSession"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataReceivedEventArgs"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataSession"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceInformation"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceTriggerDetails"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandModem>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandModem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandModem"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandModemConfiguration"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandNetwork;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandNetwork"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChange"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChangeTriggerDetails"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPin>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandPin;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandPin"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChange"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChangeTriggerDetails"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandPinManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandPinManager"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandPinOperationResult"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChange"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChangeTriggerDetails"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUicc>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandUicc;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandUicc"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandUiccApp;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandUiccApp"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppReadRecordResult"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppRecordDetailsResult"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppsResult"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>
{
    using abi = ABI::Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.NetworkOperatorNotificationEventDetails"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>
{
    using abi = ABI::Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringAccessPointConfiguration"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>
{
    using abi = ABI::Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringClient"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>
{
    using abi = ABI::Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringManager"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>
{
    using abi = ABI::Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringOperationResult"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>
{
    using abi = ABI::Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.ProvisionFromXmlDocumentResults"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::ProvisionedProfile>
{
    using abi = ABI::Windows::Networking::NetworkOperators::ProvisionedProfile;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.ProvisionedProfile"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::ProvisioningAgent>
{
    using abi = ABI::Windows::Networking::NetworkOperators::ProvisioningAgent;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.ProvisioningAgent"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::UssdMessage>
{
    using abi = ABI::Windows::Networking::NetworkOperators::UssdMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.UssdMessage"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::UssdReply>
{
    using abi = ABI::Windows::Networking::NetworkOperators::UssdReply;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.UssdReply"; }
};

template <> struct traits<Windows::Networking::NetworkOperators::UssdSession>
{
    using abi = ABI::Windows::Networking::NetworkOperators::UssdSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.NetworkOperators.UssdSession"; }
};

}

}
