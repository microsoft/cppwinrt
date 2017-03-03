// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Bluetooth::GenericAttributeProfile {

struct IGattCharacteristic;
struct IGattCharacteristic2;
struct IGattCharacteristic3;
struct IGattCharacteristicStatics;
struct IGattCharacteristicUuidsStatics;
struct IGattCharacteristicUuidsStatics2;
struct IGattCharacteristicsResult;
struct IGattClientNotificationResult;
struct IGattDescriptor;
struct IGattDescriptor2;
struct IGattDescriptorStatics;
struct IGattDescriptorUuidsStatics;
struct IGattDescriptorsResult;
struct IGattDeviceService;
struct IGattDeviceService2;
struct IGattDeviceService3;
struct IGattDeviceServiceStatics;
struct IGattDeviceServiceStatics2;
struct IGattDeviceServicesResult;
struct IGattLocalCharacteristic;
struct IGattLocalCharacteristicParameters;
struct IGattLocalCharacteristicResult;
struct IGattLocalDescriptor;
struct IGattLocalDescriptorParameters;
struct IGattLocalDescriptorResult;
struct IGattLocalService;
struct IGattPresentationFormat;
struct IGattPresentationFormatStatics;
struct IGattPresentationFormatStatics2;
struct IGattPresentationFormatTypesStatics;
struct IGattProtocolErrorStatics;
struct IGattReadClientCharacteristicConfigurationDescriptorResult;
struct IGattReadClientCharacteristicConfigurationDescriptorResult2;
struct IGattReadRequest;
struct IGattReadRequestedEventArgs;
struct IGattReadResult;
struct IGattReadResult2;
struct IGattReliableWriteTransaction;
struct IGattReliableWriteTransaction2;
struct IGattRequestStateChangedEventArgs;
struct IGattServiceProvider;
struct IGattServiceProviderAdvertisementStatusChangedEventArgs;
struct IGattServiceProviderAdvertisingParameters;
struct IGattServiceProviderResult;
struct IGattServiceProviderStatics;
struct IGattServiceUuidsStatics;
struct IGattServiceUuidsStatics2;
struct IGattSession;
struct IGattSessionStatics;
struct IGattSessionStatusChangedEventArgs;
struct IGattSubscribedClient;
struct IGattValueChangedEventArgs;
struct IGattWriteRequest;
struct IGattWriteRequestedEventArgs;
struct IGattWriteResult;
struct GattCharacteristic;
struct GattCharacteristicsResult;
struct GattClientNotificationResult;
struct GattDescriptor;
struct GattDescriptorsResult;
struct GattDeviceService;
struct GattDeviceServicesResult;
struct GattLocalCharacteristic;
struct GattLocalCharacteristicParameters;
struct GattLocalCharacteristicResult;
struct GattLocalDescriptor;
struct GattLocalDescriptorParameters;
struct GattLocalDescriptorResult;
struct GattLocalService;
struct GattPresentationFormat;
struct GattReadClientCharacteristicConfigurationDescriptorResult;
struct GattReadRequest;
struct GattReadRequestedEventArgs;
struct GattReadResult;
struct GattReliableWriteTransaction;
struct GattRequestStateChangedEventArgs;
struct GattServiceProvider;
struct GattServiceProviderAdvertisementStatusChangedEventArgs;
struct GattServiceProviderAdvertisingParameters;
struct GattServiceProviderResult;
struct GattSession;
struct GattSessionStatusChangedEventArgs;
struct GattSubscribedClient;
struct GattValueChangedEventArgs;
struct GattWriteRequest;
struct GattWriteRequestedEventArgs;
struct GattWriteResult;

}

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

struct IGattCharacteristic;
struct IGattCharacteristic2;
struct IGattCharacteristic3;
struct IGattCharacteristicStatics;
struct IGattCharacteristicUuidsStatics;
struct IGattCharacteristicUuidsStatics2;
struct IGattCharacteristicsResult;
struct IGattClientNotificationResult;
struct IGattDescriptor;
struct IGattDescriptor2;
struct IGattDescriptorStatics;
struct IGattDescriptorUuidsStatics;
struct IGattDescriptorsResult;
struct IGattDeviceService;
struct IGattDeviceService2;
struct IGattDeviceService3;
struct IGattDeviceServiceStatics;
struct IGattDeviceServiceStatics2;
struct IGattDeviceServicesResult;
struct IGattLocalCharacteristic;
struct IGattLocalCharacteristicParameters;
struct IGattLocalCharacteristicResult;
struct IGattLocalDescriptor;
struct IGattLocalDescriptorParameters;
struct IGattLocalDescriptorResult;
struct IGattLocalService;
struct IGattPresentationFormat;
struct IGattPresentationFormatStatics;
struct IGattPresentationFormatStatics2;
struct IGattPresentationFormatTypesStatics;
struct IGattProtocolErrorStatics;
struct IGattReadClientCharacteristicConfigurationDescriptorResult;
struct IGattReadClientCharacteristicConfigurationDescriptorResult2;
struct IGattReadRequest;
struct IGattReadRequestedEventArgs;
struct IGattReadResult;
struct IGattReadResult2;
struct IGattReliableWriteTransaction;
struct IGattReliableWriteTransaction2;
struct IGattRequestStateChangedEventArgs;
struct IGattServiceProvider;
struct IGattServiceProviderAdvertisementStatusChangedEventArgs;
struct IGattServiceProviderAdvertisingParameters;
struct IGattServiceProviderResult;
struct IGattServiceProviderStatics;
struct IGattServiceUuidsStatics;
struct IGattServiceUuidsStatics2;
struct IGattSession;
struct IGattSessionStatics;
struct IGattSessionStatusChangedEventArgs;
struct IGattSubscribedClient;
struct IGattValueChangedEventArgs;
struct IGattWriteRequest;
struct IGattWriteRequestedEventArgs;
struct IGattWriteResult;
struct GattCharacteristic;
struct GattCharacteristicUuids;
struct GattCharacteristicsResult;
struct GattClientNotificationResult;
struct GattDescriptor;
struct GattDescriptorUuids;
struct GattDescriptorsResult;
struct GattDeviceService;
struct GattDeviceServicesResult;
struct GattLocalCharacteristic;
struct GattLocalCharacteristicParameters;
struct GattLocalCharacteristicResult;
struct GattLocalDescriptor;
struct GattLocalDescriptorParameters;
struct GattLocalDescriptorResult;
struct GattLocalService;
struct GattPresentationFormat;
struct GattPresentationFormatTypes;
struct GattProtocolError;
struct GattReadClientCharacteristicConfigurationDescriptorResult;
struct GattReadRequest;
struct GattReadRequestedEventArgs;
struct GattReadResult;
struct GattReliableWriteTransaction;
struct GattRequestStateChangedEventArgs;
struct GattServiceProvider;
struct GattServiceProviderAdvertisementStatusChangedEventArgs;
struct GattServiceProviderAdvertisingParameters;
struct GattServiceProviderResult;
struct GattServiceUuids;
struct GattSession;
struct GattSessionStatusChangedEventArgs;
struct GattSubscribedClient;
struct GattValueChangedEventArgs;
struct GattWriteRequest;
struct GattWriteRequestedEventArgs;
struct GattWriteResult;

}

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

template <typename T> struct impl_IGattCharacteristic;
template <typename T> struct impl_IGattCharacteristic2;
template <typename T> struct impl_IGattCharacteristic3;
template <typename T> struct impl_IGattCharacteristicStatics;
template <typename T> struct impl_IGattCharacteristicUuidsStatics;
template <typename T> struct impl_IGattCharacteristicUuidsStatics2;
template <typename T> struct impl_IGattCharacteristicsResult;
template <typename T> struct impl_IGattClientNotificationResult;
template <typename T> struct impl_IGattDescriptor;
template <typename T> struct impl_IGattDescriptor2;
template <typename T> struct impl_IGattDescriptorStatics;
template <typename T> struct impl_IGattDescriptorUuidsStatics;
template <typename T> struct impl_IGattDescriptorsResult;
template <typename T> struct impl_IGattDeviceService;
template <typename T> struct impl_IGattDeviceService2;
template <typename T> struct impl_IGattDeviceService3;
template <typename T> struct impl_IGattDeviceServiceStatics;
template <typename T> struct impl_IGattDeviceServiceStatics2;
template <typename T> struct impl_IGattDeviceServicesResult;
template <typename T> struct impl_IGattLocalCharacteristic;
template <typename T> struct impl_IGattLocalCharacteristicParameters;
template <typename T> struct impl_IGattLocalCharacteristicResult;
template <typename T> struct impl_IGattLocalDescriptor;
template <typename T> struct impl_IGattLocalDescriptorParameters;
template <typename T> struct impl_IGattLocalDescriptorResult;
template <typename T> struct impl_IGattLocalService;
template <typename T> struct impl_IGattPresentationFormat;
template <typename T> struct impl_IGattPresentationFormatStatics;
template <typename T> struct impl_IGattPresentationFormatStatics2;
template <typename T> struct impl_IGattPresentationFormatTypesStatics;
template <typename T> struct impl_IGattProtocolErrorStatics;
template <typename T> struct impl_IGattReadClientCharacteristicConfigurationDescriptorResult;
template <typename T> struct impl_IGattReadClientCharacteristicConfigurationDescriptorResult2;
template <typename T> struct impl_IGattReadRequest;
template <typename T> struct impl_IGattReadRequestedEventArgs;
template <typename T> struct impl_IGattReadResult;
template <typename T> struct impl_IGattReadResult2;
template <typename T> struct impl_IGattReliableWriteTransaction;
template <typename T> struct impl_IGattReliableWriteTransaction2;
template <typename T> struct impl_IGattRequestStateChangedEventArgs;
template <typename T> struct impl_IGattServiceProvider;
template <typename T> struct impl_IGattServiceProviderAdvertisementStatusChangedEventArgs;
template <typename T> struct impl_IGattServiceProviderAdvertisingParameters;
template <typename T> struct impl_IGattServiceProviderResult;
template <typename T> struct impl_IGattServiceProviderStatics;
template <typename T> struct impl_IGattServiceUuidsStatics;
template <typename T> struct impl_IGattServiceUuidsStatics2;
template <typename T> struct impl_IGattSession;
template <typename T> struct impl_IGattSessionStatics;
template <typename T> struct impl_IGattSessionStatusChangedEventArgs;
template <typename T> struct impl_IGattSubscribedClient;
template <typename T> struct impl_IGattValueChangedEventArgs;
template <typename T> struct impl_IGattWriteRequest;
template <typename T> struct impl_IGattWriteRequestedEventArgs;
template <typename T> struct impl_IGattWriteResult;

}

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

enum class GattCharacteristicProperties : unsigned
{
    None = 0x0,
    Broadcast = 0x1,
    Read = 0x2,
    WriteWithoutResponse = 0x4,
    Write = 0x8,
    Notify = 0x10,
    Indicate = 0x20,
    AuthenticatedSignedWrites = 0x40,
    ExtendedProperties = 0x80,
    ReliableWrites = 0x100,
    WritableAuxiliaries = 0x200,
};

DEFINE_ENUM_FLAG_OPERATORS(GattCharacteristicProperties)

enum class GattClientCharacteristicConfigurationDescriptorValue
{
    None = 0,
    Notify = 1,
    Indicate = 2,
};

enum class GattCommunicationStatus
{
    Success = 0,
    Unreachable = 1,
    ProtocolError = 2,
    AccessDenied = 3,
};

enum class GattOpenStatus
{
    Unspecified = 0,
    Success = 1,
    AlreadyOpened = 2,
    NotFound = 3,
    SharingViolation = 4,
    AccessDenied = 5,
};

enum class GattProtectionLevel
{
    Plain = 0,
    AuthenticationRequired = 1,
    EncryptionRequired = 2,
    EncryptionAndAuthenticationRequired = 3,
};

enum class GattRequestState
{
    Pending = 0,
    Completed = 1,
    Canceled = 2,
};

enum class GattServiceProviderAdvertisementStatus
{
    Created = 0,
    Stopped = 1,
    Started = 2,
    Aborted = 3,
};

enum class GattSessionStatus
{
    Closed = 0,
    Active = 1,
};

enum class GattSharingMode
{
    Unspecified = 0,
    Exclusive = 1,
    SharedReadOnly = 2,
    SharedReadAndWrite = 3,
};

enum class GattWriteOption
{
    WriteWithResponse = 0,
    WriteWithoutResponse = 1,
};

}

}
