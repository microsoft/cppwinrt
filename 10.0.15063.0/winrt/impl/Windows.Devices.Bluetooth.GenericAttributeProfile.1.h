// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Bluetooth.0.h"
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile {

struct WINRT_EBO IGattCharacteristic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristic>
{
    IGattCharacteristic(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristic2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristic2>,
    impl::require<IGattCharacteristic2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
{
    IGattCharacteristic2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristic3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristic3>
{
    IGattCharacteristic3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicStatics>
{
    IGattCharacteristicStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicUuidsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicUuidsStatics>
{
    IGattCharacteristicUuidsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicUuidsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicUuidsStatics2>
{
    IGattCharacteristicUuidsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicsResult>
{
    IGattCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattClientNotificationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattClientNotificationResult>
{
    IGattClientNotificationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptor>
{
    IGattDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDescriptor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptor2>
{
    IGattDescriptor2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDescriptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptorStatics>
{
    IGattDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDescriptorUuidsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptorUuidsStatics>
{
    IGattDescriptorUuidsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDescriptorsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDescriptorsResult>
{
    IGattDescriptorsResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDeviceService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceService>,
    impl::require<IGattDeviceService, Windows::Foundation::IClosable>
{
    IGattDeviceService(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDeviceService2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceService2>,
    impl::require<IGattDeviceService2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService, Windows::Foundation::IClosable>
{
    IGattDeviceService2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDeviceService3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceService3>
{
    IGattDeviceService3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDeviceServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceServiceStatics>
{
    IGattDeviceServiceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDeviceServiceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceServiceStatics2>
{
    IGattDeviceServiceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattDeviceServicesResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattDeviceServicesResult>
{
    IGattDeviceServicesResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattLocalCharacteristic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalCharacteristic>
{
    IGattLocalCharacteristic(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattLocalCharacteristicParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalCharacteristicParameters>
{
    IGattLocalCharacteristicParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattLocalCharacteristicResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalCharacteristicResult>
{
    IGattLocalCharacteristicResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattLocalDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalDescriptor>
{
    IGattLocalDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattLocalDescriptorParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalDescriptorParameters>
{
    IGattLocalDescriptorParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattLocalDescriptorResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalDescriptorResult>
{
    IGattLocalDescriptorResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattLocalService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattLocalService>
{
    IGattLocalService(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattPresentationFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattPresentationFormat>
{
    IGattPresentationFormat(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattPresentationFormatStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattPresentationFormatStatics>
{
    IGattPresentationFormatStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattPresentationFormatStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattPresentationFormatStatics2>,
    impl::require<IGattPresentationFormatStatics2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
{
    IGattPresentationFormatStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattPresentationFormatTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattPresentationFormatTypesStatics>
{
    IGattPresentationFormatTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattProtocolErrorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattProtocolErrorStatics>
{
    IGattProtocolErrorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattReadClientCharacteristicConfigurationDescriptorResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadClientCharacteristicConfigurationDescriptorResult>
{
    IGattReadClientCharacteristicConfigurationDescriptorResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattReadClientCharacteristicConfigurationDescriptorResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadClientCharacteristicConfigurationDescriptorResult2>
{
    IGattReadClientCharacteristicConfigurationDescriptorResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattReadRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadRequest>
{
    IGattReadRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattReadRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadRequestedEventArgs>
{
    IGattReadRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattReadResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadResult>
{
    IGattReadResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattReadResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReadResult2>
{
    IGattReadResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattReliableWriteTransaction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReliableWriteTransaction>
{
    IGattReliableWriteTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattReliableWriteTransaction2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattReliableWriteTransaction2>
{
    IGattReliableWriteTransaction2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattRequestStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattRequestStateChangedEventArgs>
{
    IGattRequestStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProvider>
{
    IGattServiceProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderAdvertisementStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderAdvertisementStatusChangedEventArgs>
{
    IGattServiceProviderAdvertisementStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderAdvertisingParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderAdvertisingParameters>
{
    IGattServiceProviderAdvertisingParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderResult>
{
    IGattServiceProviderResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderStatics>
{
    IGattServiceProviderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceUuidsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceUuidsStatics>
{
    IGattServiceUuidsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceUuidsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceUuidsStatics2>
{
    IGattServiceUuidsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattSession>
{
    IGattSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattSessionStatics>
{
    IGattSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattSessionStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattSessionStatusChangedEventArgs>
{
    IGattSessionStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattSubscribedClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattSubscribedClient>
{
    IGattSubscribedClient(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattValueChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattValueChangedEventArgs>
{
    IGattValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattWriteRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattWriteRequest>
{
    IGattWriteRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattWriteRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattWriteRequestedEventArgs>
{
    IGattWriteRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattWriteResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattWriteResult>
{
    IGattWriteResult(std::nullptr_t = nullptr) noexcept {}
};

}
