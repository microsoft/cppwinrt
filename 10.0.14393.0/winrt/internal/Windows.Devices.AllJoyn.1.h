// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.AllJoyn.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Globalization.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Security.Cryptography.Certificates.1.h"
#include "Windows.Globalization.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::AllJoyn {

struct __declspec(uuid("e5a9bf00-1fa2-4839-93ef-f9df404890f7")) __declspec(novtable) IAllJoynAboutData : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_DefaultAppName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DefaultAppName(hstring value) = 0;
    virtual HRESULT __stdcall get_AppNames(Windows::Foundation::Collections::IMap<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall get_DateOfManufacture(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_DateOfManufacture(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
    virtual HRESULT __stdcall get_DefaultDescription(hstring * value) = 0;
    virtual HRESULT __stdcall put_DefaultDescription(hstring value) = 0;
    virtual HRESULT __stdcall get_Descriptions(Windows::Foundation::Collections::IMap<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall get_DefaultManufacturer(hstring * value) = 0;
    virtual HRESULT __stdcall put_DefaultManufacturer(hstring value) = 0;
    virtual HRESULT __stdcall get_Manufacturers(Windows::Foundation::Collections::IMap<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall get_ModelNumber(hstring * value) = 0;
    virtual HRESULT __stdcall put_ModelNumber(hstring value) = 0;
    virtual HRESULT __stdcall get_SoftwareVersion(hstring * value) = 0;
    virtual HRESULT __stdcall put_SoftwareVersion(hstring value) = 0;
    virtual HRESULT __stdcall get_SupportUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_SupportUrl(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_AppId(GUID * value) = 0;
    virtual HRESULT __stdcall put_AppId(GUID value) = 0;
};

struct __declspec(uuid("6823111f-6212-4934-9c48-e19ca4984288")) __declspec(novtable) IAllJoynAboutDataView : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> ** value) = 0;
    virtual HRESULT __stdcall get_AJSoftwareVersion(hstring * value) = 0;
    virtual HRESULT __stdcall get_AppId(GUID * value) = 0;
    virtual HRESULT __stdcall get_DateOfManufacture(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall get_DefaultLanguage(Windows::Globalization::ILanguage ** value) = 0;
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_HardwareVersion(hstring * value) = 0;
    virtual HRESULT __stdcall get_ModelNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_SoftwareVersion(hstring * value) = 0;
    virtual HRESULT __stdcall get_SupportedLanguages(Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> ** value) = 0;
    virtual HRESULT __stdcall get_SupportUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_AppName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_DeviceName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Manufacturer(hstring * value) = 0;
};

struct __declspec(uuid("57edb688-0c5e-416e-88b5-39b32d25c47d")) __declspec(novtable) IAllJoynAboutDataViewStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDataBySessionPortAsync(hstring uniqueName, Windows::Devices::AllJoyn::IAllJoynBusAttachment * busAttachment, uint16_t sessionPort, Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetDataBySessionPortWithLanguageAsync(hstring uniqueName, Windows::Devices::AllJoyn::IAllJoynBusAttachment * busAttachment, uint16_t sessionPort, Windows::Globalization::ILanguage * language, Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> ** operation) = 0;
};

struct __declspec(uuid("4da817d2-cd1d-4023-a7c4-16def89c28df")) __declspec(novtable) IAllJoynAcceptSessionJoiner : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Accept() = 0;
};

struct __declspec(uuid("4efb5365-3e8a-4257-8f10-539ce0d56c0f")) __declspec(novtable) IAllJoynAcceptSessionJoinerEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(hstring * value) = 0;
    virtual HRESULT __stdcall get_SessionPort(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_TrafficType(winrt::Windows::Devices::AllJoyn::AllJoynTrafficType * value) = 0;
    virtual HRESULT __stdcall get_SamePhysicalNode(bool * value) = 0;
    virtual HRESULT __stdcall get_SameNetwork(bool * value) = 0;
    virtual HRESULT __stdcall abi_Accept() = 0;
};

struct __declspec(uuid("b4435bc0-6145-429e-84db-d5bfe772b14f")) __declspec(novtable) IAllJoynAcceptSessionJoinerEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring uniqueName, uint16_t sessionPort, winrt::Windows::Devices::AllJoyn::AllJoynTrafficType trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner * acceptSessionJoiner, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs ** result) = 0;
};

struct __declspec(uuid("97b4701c-15dc-4b53-b6a4-7d134300d7bf")) __declspec(novtable) IAllJoynAuthenticationCompleteEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AuthenticationMechanism(winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value) = 0;
    virtual HRESULT __stdcall get_PeerUniqueName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Succeeded(bool * value) = 0;
};

struct __declspec(uuid("f309f153-1eed-42c3-a20e-436d41fe62f6")) __declspec(novtable) IAllJoynBusAttachment : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AboutData(Windows::Devices::AllJoyn::IAllJoynAboutData ** value) = 0;
    virtual HRESULT __stdcall get_ConnectionSpecification(hstring * value) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Devices::AllJoyn::AllJoynBusAttachmentState * value) = 0;
    virtual HRESULT __stdcall get_UniqueName(hstring * value) = 0;
    virtual HRESULT __stdcall abi_PingAsync(hstring uniqueName, Windows::Foundation::IAsyncOperation<int32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_Connect() = 0;
    virtual HRESULT __stdcall abi_Disconnect() = 0;
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_AuthenticationMechanisms(Windows::Foundation::Collections::IVector<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> ** value) = 0;
    virtual HRESULT __stdcall add_CredentialsRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CredentialsRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_CredentialsVerificationRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CredentialsVerificationRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_AuthenticationComplete(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AuthenticationComplete(event_token token) = 0;
};

struct __declspec(uuid("3474cb1e-2368-43b2-b43e-6a3ac1278d98")) __declspec(novtable) IAllJoynBusAttachment2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetAboutDataAsync(Windows::Devices::AllJoyn::IAllJoynServiceInfo * serviceInfo, Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetAboutDataWithLanguageAsync(Windows::Devices::AllJoyn::IAllJoynServiceInfo * serviceInfo, Windows::Globalization::ILanguage * language, Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> ** operation) = 0;
    virtual HRESULT __stdcall add_AcceptSessionJoinerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AcceptSessionJoinerRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_SessionJoined(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SessionJoined(event_token token) = 0;
};

struct __declspec(uuid("642ef1a4-ad85-4ddf-90ae-604452b22288")) __declspec(novtable) IAllJoynBusAttachmentFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring connectionSpecification, Windows::Devices::AllJoyn::IAllJoynBusAttachment ** result) = 0;
};

struct __declspec(uuid("d82e75f4-c02a-41ec-a8d5-eab1558953aa")) __declspec(novtable) IAllJoynBusAttachmentStateChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Devices::AllJoyn::AllJoynBusAttachmentState * value) = 0;
    virtual HRESULT __stdcall get_Status(int32_t * value) = 0;
};

struct __declspec(uuid("839d4d3d-1051-40d7-872a-8d0141115b1f")) __declspec(novtable) IAllJoynBusAttachmentStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Devices::AllJoyn::IAllJoynBusAttachment ** defaultBusAttachment) = 0;
    virtual HRESULT __stdcall abi_GetWatcher(Windows::Foundation::Collections::IIterable<hstring> * requiredInterfaces, Windows::Devices::Enumeration::IDeviceWatcher ** deviceWatcher) = 0;
};

struct __declspec(uuid("e8fd825e-f73a-490c-8804-04e026643047")) __declspec(novtable) IAllJoynBusObject : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall abi_AddProducer(Windows::Devices::AllJoyn::IAllJoynProducer * producer) = 0;
    virtual HRESULT __stdcall get_BusAttachment(Windows::Devices::AllJoyn::IAllJoynBusAttachment ** value) = 0;
    virtual HRESULT __stdcall get_Session(Windows::Devices::AllJoyn::IAllJoynSession ** value) = 0;
    virtual HRESULT __stdcall add_Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
};

struct __declspec(uuid("2c2f9f0b-8e02-4f9c-ac27-ea6dad5d3b50")) __declspec(novtable) IAllJoynBusObjectFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring objectPath, Windows::Devices::AllJoyn::IAllJoynBusObject ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithBusAttachment(hstring objectPath, Windows::Devices::AllJoyn::IAllJoynBusAttachment * busAttachment, Windows::Devices::AllJoyn::IAllJoynBusObject ** result) = 0;
};

struct __declspec(uuid("de102115-ef8e-4d42-b93b-a2ae74519766")) __declspec(novtable) IAllJoynBusObjectStoppedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(int32_t * value) = 0;
};

struct __declspec(uuid("6b22fd48-d0a3-4255-953a-4772b4028073")) __declspec(novtable) IAllJoynBusObjectStoppedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(int32_t status, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs ** result) = 0;
};

struct __declspec(uuid("824650f2-a190-40b1-abab-349ec244dfaa")) __declspec(novtable) IAllJoynCredentials : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AuthenticationMechanism(winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value) = 0;
    virtual HRESULT __stdcall get_Certificate(Windows::Security::Cryptography::Certificates::ICertificate ** value) = 0;
    virtual HRESULT __stdcall put_Certificate(Windows::Security::Cryptography::Certificates::ICertificate * value) = 0;
    virtual HRESULT __stdcall get_PasswordCredential(Windows::Security::Credentials::IPasswordCredential ** value) = 0;
    virtual HRESULT __stdcall put_PasswordCredential(Windows::Security::Credentials::IPasswordCredential * value) = 0;
    virtual HRESULT __stdcall get_Timeout(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Timeout(Windows::Foundation::TimeSpan value) = 0;
};

struct __declspec(uuid("6a87e34e-b069-4b80-9e1a-41bc837c65d2")) __declspec(novtable) IAllJoynCredentialsRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AttemptCount(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_Credentials(Windows::Devices::AllJoyn::IAllJoynCredentials ** value) = 0;
    virtual HRESULT __stdcall get_PeerUniqueName(hstring * value) = 0;
    virtual HRESULT __stdcall get_RequestedUserName(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** result) = 0;
};

struct __declspec(uuid("800a7612-b805-44af-a2e1-792ab655a2d0")) __declspec(novtable) IAllJoynCredentialsVerificationRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AuthenticationMechanism(winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value) = 0;
    virtual HRESULT __stdcall get_PeerUniqueName(hstring * value) = 0;
    virtual HRESULT __stdcall get_PeerCertificate(Windows::Security::Cryptography::Certificates::ICertificate ** value) = 0;
    virtual HRESULT __stdcall get_PeerCertificateErrorSeverity(winrt::Windows::Networking::Sockets::SocketSslErrorSeverity * value) = 0;
    virtual HRESULT __stdcall get_PeerCertificateErrors(Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> ** value) = 0;
    virtual HRESULT __stdcall get_PeerIntermediateCertificates(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> ** value) = 0;
    virtual HRESULT __stdcall abi_Accept() = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** result) = 0;
};

struct __declspec(uuid("ff2b0127-2c12-4859-aa3a-c74461ee814c")) __declspec(novtable) IAllJoynMessageInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SenderUniqueName(hstring * value) = 0;
};

struct __declspec(uuid("34664c2a-8289-43d4-b4a8-3f4de359f043")) __declspec(novtable) IAllJoynMessageInfoFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring senderUniqueName, Windows::Devices::AllJoyn::IAllJoynMessageInfo ** result) = 0;
};

struct __declspec(uuid("9d084679-469b-495a-a710-ac50f123069f")) __declspec(novtable) IAllJoynProducer : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetBusObject(Windows::Devices::AllJoyn::IAllJoynBusObject * busObject) = 0;
};

struct __declspec(uuid("51309770-4937-492d-8080-236439987ceb")) __declspec(novtable) IAllJoynProducerStoppedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(int32_t * value) = 0;
};

struct __declspec(uuid("56529961-b219-4d6e-9f78-fa3f99fa8fe5")) __declspec(novtable) IAllJoynProducerStoppedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(int32_t status, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs ** result) = 0;
};

struct __declspec(uuid("4cbe8209-b93e-4182-999b-ddd000f9c575")) __declspec(novtable) IAllJoynServiceInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(hstring * value) = 0;
    virtual HRESULT __stdcall get_ObjectPath(hstring * value) = 0;
    virtual HRESULT __stdcall get_SessionPort(uint16_t * value) = 0;
};

struct __declspec(uuid("7581dabd-fe03-4f4b-94a4-f02fdcbd11b8")) __declspec(novtable) IAllJoynServiceInfoFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring uniqueName, hstring objectPath, uint16_t sessionPort, Windows::Devices::AllJoyn::IAllJoynServiceInfo ** result) = 0;
};

struct __declspec(uuid("3057a95f-1d3f-41f3-8969-e32792627396")) __declspec(novtable) IAllJoynServiceInfoRemovedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(hstring * value) = 0;
};

struct __declspec(uuid("0dbf8627-9aff-4955-9227-6953baf41569")) __declspec(novtable) IAllJoynServiceInfoRemovedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring uniqueName, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs ** result) = 0;
};

struct __declspec(uuid("5678570a-603a-49fc-b750-0ef13609213c")) __declspec(novtable) IAllJoynServiceInfoStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> ** operation) = 0;
};

struct __declspec(uuid("e8d11b0c-c0d4-406c-88a9-a93efa85d4b1")) __declspec(novtable) IAllJoynSession : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Status(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_RemoveMemberAsync(hstring uniqueName, Windows::Foundation::IAsyncOperation<int32_t> ** operation) = 0;
    virtual HRESULT __stdcall add_MemberAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MemberAdded(event_token token) = 0;
    virtual HRESULT __stdcall add_MemberRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MemberRemoved(event_token token) = 0;
    virtual HRESULT __stdcall add_Lost(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Lost(event_token token) = 0;
};

struct __declspec(uuid("9e9f5bd0-b5d7-47c5-8dab-b040cc192871")) __declspec(novtable) IAllJoynSessionJoinedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Session(Windows::Devices::AllJoyn::IAllJoynSession ** value) = 0;
};

struct __declspec(uuid("6824d689-d6cb-4d9e-a09e-35806870b17f")) __declspec(novtable) IAllJoynSessionJoinedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Devices::AllJoyn::IAllJoynSession * session, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs ** result) = 0;
};

struct __declspec(uuid("e766a48a-8bb8-4954-ae67-d2fa43d1f96b")) __declspec(novtable) IAllJoynSessionLostEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Reason(winrt::Windows::Devices::AllJoyn::AllJoynSessionLostReason * value) = 0;
};

struct __declspec(uuid("13bbfd32-d2f4-49c9-980e-2805e13586b1")) __declspec(novtable) IAllJoynSessionLostEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::Devices::AllJoyn::AllJoynSessionLostReason reason, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs ** result) = 0;
};

struct __declspec(uuid("49a2798a-0dd1-46c1-9cd6-27190e503a5e")) __declspec(novtable) IAllJoynSessionMemberAddedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(hstring * value) = 0;
};

struct __declspec(uuid("341de352-1d33-40a1-a1d3-e5777020e1f1")) __declspec(novtable) IAllJoynSessionMemberAddedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring uniqueName, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs ** result) = 0;
};

struct __declspec(uuid("409a219f-aa4a-4893-b430-baa1b63c6219")) __declspec(novtable) IAllJoynSessionMemberRemovedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(hstring * value) = 0;
};

struct __declspec(uuid("c4d355e8-42b8-4b67-b757-d0cfcad59280")) __declspec(novtable) IAllJoynSessionMemberRemovedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring uniqueName, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs ** result) = 0;
};

struct __declspec(uuid("9e05d604-a06c-46d4-b46c-0b0b54105b44")) __declspec(novtable) IAllJoynSessionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFromServiceInfoAsync(Windows::Devices::AllJoyn::IAllJoynServiceInfo * serviceInfo, Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFromServiceInfoAndBusAttachmentAsync(Windows::Devices::AllJoyn::IAllJoynServiceInfo * serviceInfo, Windows::Devices::AllJoyn::IAllJoynBusAttachment * busAttachment, Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> ** operation) = 0;
};

struct __declspec(uuid("d0b7a17e-0d29-4da9-8ac6-54c554bedbc5")) __declspec(novtable) IAllJoynStatusStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Ok(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Fail(int32_t * value) = 0;
    virtual HRESULT __stdcall get_OperationTimedOut(int32_t * value) = 0;
    virtual HRESULT __stdcall get_OtherEndClosed(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ConnectionRefused(int32_t * value) = 0;
    virtual HRESULT __stdcall get_AuthenticationFailed(int32_t * value) = 0;
    virtual HRESULT __stdcall get_AuthenticationRejectedByUser(int32_t * value) = 0;
    virtual HRESULT __stdcall get_SslConnectFailed(int32_t * value) = 0;
    virtual HRESULT __stdcall get_SslIdentityVerificationFailed(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InsufficientSecurity(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument1(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument2(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument3(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument4(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument5(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument6(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument7(int32_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument8(int32_t * value) = 0;
};

struct __declspec(uuid("c9fca03b-701d-4aa8-97dd-a2bb0a8f5fa3")) __declspec(novtable) IAllJoynWatcherStoppedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(int32_t * value) = 0;
};

struct __declspec(uuid("878fa5a8-2d50-47e1-904a-20bf0d48c782")) __declspec(novtable) IAllJoynWatcherStoppedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(int32_t status, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::AllJoyn::AllJoynAboutData> { using default_interface = Windows::Devices::AllJoyn::IAllJoynAboutData; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynAboutDataView> { using default_interface = Windows::Devices::AllJoyn::IAllJoynAboutDataView; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynBusAttachment> { using default_interface = Windows::Devices::AllJoyn::IAllJoynBusAttachment; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynBusObject> { using default_interface = Windows::Devices::AllJoyn::IAllJoynBusObject; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynCredentials> { using default_interface = Windows::Devices::AllJoyn::IAllJoynCredentials; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynMessageInfo> { using default_interface = Windows::Devices::AllJoyn::IAllJoynMessageInfo; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynServiceInfo> { using default_interface = Windows::Devices::AllJoyn::IAllJoynServiceInfo; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynSession> { using default_interface = Windows::Devices::AllJoyn::IAllJoynSession; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs; };
template <> struct traits<Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs> { using default_interface = Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs; };

}

namespace Windows::Devices::AllJoyn {

template <typename T> struct impl_IAllJoynAboutData;
template <typename T> struct impl_IAllJoynAboutDataView;
template <typename T> struct impl_IAllJoynAboutDataViewStatics;
template <typename T> struct impl_IAllJoynAcceptSessionJoiner;
template <typename T> struct impl_IAllJoynAcceptSessionJoinerEventArgs;
template <typename T> struct impl_IAllJoynAcceptSessionJoinerEventArgsFactory;
template <typename T> struct impl_IAllJoynAuthenticationCompleteEventArgs;
template <typename T> struct impl_IAllJoynBusAttachment;
template <typename T> struct impl_IAllJoynBusAttachment2;
template <typename T> struct impl_IAllJoynBusAttachmentFactory;
template <typename T> struct impl_IAllJoynBusAttachmentStateChangedEventArgs;
template <typename T> struct impl_IAllJoynBusAttachmentStatics;
template <typename T> struct impl_IAllJoynBusObject;
template <typename T> struct impl_IAllJoynBusObjectFactory;
template <typename T> struct impl_IAllJoynBusObjectStoppedEventArgs;
template <typename T> struct impl_IAllJoynBusObjectStoppedEventArgsFactory;
template <typename T> struct impl_IAllJoynCredentials;
template <typename T> struct impl_IAllJoynCredentialsRequestedEventArgs;
template <typename T> struct impl_IAllJoynCredentialsVerificationRequestedEventArgs;
template <typename T> struct impl_IAllJoynMessageInfo;
template <typename T> struct impl_IAllJoynMessageInfoFactory;
template <typename T> struct impl_IAllJoynProducer;
template <typename T> struct impl_IAllJoynProducerStoppedEventArgs;
template <typename T> struct impl_IAllJoynProducerStoppedEventArgsFactory;
template <typename T> struct impl_IAllJoynServiceInfo;
template <typename T> struct impl_IAllJoynServiceInfoFactory;
template <typename T> struct impl_IAllJoynServiceInfoRemovedEventArgs;
template <typename T> struct impl_IAllJoynServiceInfoRemovedEventArgsFactory;
template <typename T> struct impl_IAllJoynServiceInfoStatics;
template <typename T> struct impl_IAllJoynSession;
template <typename T> struct impl_IAllJoynSessionJoinedEventArgs;
template <typename T> struct impl_IAllJoynSessionJoinedEventArgsFactory;
template <typename T> struct impl_IAllJoynSessionLostEventArgs;
template <typename T> struct impl_IAllJoynSessionLostEventArgsFactory;
template <typename T> struct impl_IAllJoynSessionMemberAddedEventArgs;
template <typename T> struct impl_IAllJoynSessionMemberAddedEventArgsFactory;
template <typename T> struct impl_IAllJoynSessionMemberRemovedEventArgs;
template <typename T> struct impl_IAllJoynSessionMemberRemovedEventArgsFactory;
template <typename T> struct impl_IAllJoynSessionStatics;
template <typename T> struct impl_IAllJoynStatusStatics;
template <typename T> struct impl_IAllJoynWatcherStoppedEventArgs;
template <typename T> struct impl_IAllJoynWatcherStoppedEventArgsFactory;

}

namespace impl {

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynAboutData>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynAboutData;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynAboutData<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynAboutDataView>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataView;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynAboutDataView<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynAboutDataViewStatics<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynAcceptSessionJoiner<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynAcceptSessionJoinerEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynAcceptSessionJoinerEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynAuthenticationCompleteEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusAttachment>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusAttachment<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment2;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusAttachment2<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusAttachmentFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusAttachmentStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusAttachmentStatics<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusObject>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusObject;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusObject<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusObjectFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusObjectStoppedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynBusObjectStoppedEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynCredentials>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynCredentials;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynCredentials<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynCredentialsRequestedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynMessageInfo>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynMessageInfo;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynMessageInfo<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynMessageInfoFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynProducer>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynProducer;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynProducer<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynProducerStoppedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynProducerStoppedEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynServiceInfo>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynServiceInfo<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynServiceInfoFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynServiceInfoRemovedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynServiceInfoRemovedEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynServiceInfoStatics<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSession>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSession;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSession<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionJoinedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionJoinedEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionLostEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionLostEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionMemberAddedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionMemberAddedEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionMemberRemovedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionMemberRemovedEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynSessionStatics>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynSessionStatics;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynSessionStatics<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynStatusStatics>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynStatusStatics;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynStatusStatics<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynWatcherStoppedEventArgs<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>
{
    using abi = ABI::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory;
    template <typename D> using consume = Windows::Devices::AllJoyn::impl_IAllJoynWatcherStoppedEventArgsFactory<D>;
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynAboutData>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynAboutData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynAboutData"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynAboutDataView>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynAboutDataView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynAboutDataView"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynBusAttachment>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynBusAttachment"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynBusObject>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynBusObject;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynBusObject"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynCredentials>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynCredentials;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynCredentials"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynMessageInfo>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynMessageInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynMessageInfo"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynServiceInfo>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynServiceInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynServiceInfo"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynSession>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynSession"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynStatus>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynStatus"; }
};

template <> struct traits<Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs>
{
    using abi = ABI::Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs"; }
};

}

}
