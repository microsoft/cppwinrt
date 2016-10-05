// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::WiFiDirect {

struct IWiFiDirectAdvertisement;
struct IWiFiDirectAdvertisement2;
struct IWiFiDirectAdvertisementPublisher;
struct IWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
struct IWiFiDirectConnectionListener;
struct IWiFiDirectConnectionParameters;
struct IWiFiDirectConnectionParameters2;
struct IWiFiDirectConnectionParametersStatics;
struct IWiFiDirectConnectionRequest;
struct IWiFiDirectConnectionRequestedEventArgs;
struct IWiFiDirectDevice;
struct IWiFiDirectDeviceStatics;
struct IWiFiDirectDeviceStatics2;
struct IWiFiDirectInformationElement;
struct IWiFiDirectInformationElementStatics;
struct IWiFiDirectLegacySettings;
struct WiFiDirectAdvertisement;
struct WiFiDirectAdvertisementPublisher;
struct WiFiDirectAdvertisementPublisherStatusChangedEventArgs;
struct WiFiDirectConnectionListener;
struct WiFiDirectConnectionParameters;
struct WiFiDirectConnectionRequest;
struct WiFiDirectConnectionRequestedEventArgs;
struct WiFiDirectDevice;
struct WiFiDirectInformationElement;
struct WiFiDirectLegacySettings;

}

namespace Windows::Devices::WiFiDirect {

struct IWiFiDirectAdvertisement;
struct IWiFiDirectAdvertisement2;
struct IWiFiDirectAdvertisementPublisher;
struct IWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
struct IWiFiDirectConnectionListener;
struct IWiFiDirectConnectionParameters;
struct IWiFiDirectConnectionParameters2;
struct IWiFiDirectConnectionParametersStatics;
struct IWiFiDirectConnectionRequest;
struct IWiFiDirectConnectionRequestedEventArgs;
struct IWiFiDirectDevice;
struct IWiFiDirectDeviceStatics;
struct IWiFiDirectDeviceStatics2;
struct IWiFiDirectInformationElement;
struct IWiFiDirectInformationElementStatics;
struct IWiFiDirectLegacySettings;
struct WiFiDirectAdvertisement;
struct WiFiDirectAdvertisementPublisher;
struct WiFiDirectAdvertisementPublisherStatusChangedEventArgs;
struct WiFiDirectConnectionListener;
struct WiFiDirectConnectionParameters;
struct WiFiDirectConnectionRequest;
struct WiFiDirectConnectionRequestedEventArgs;
struct WiFiDirectDevice;
struct WiFiDirectInformationElement;
struct WiFiDirectLegacySettings;

}

namespace Windows::Devices::WiFiDirect {

enum class WiFiDirectAdvertisementListenStateDiscoverability
{
    None = 0,
    Normal = 1,
    Intensive = 2,
};

enum class WiFiDirectAdvertisementPublisherStatus
{
    Created = 0,
    Started = 1,
    Stopped = 2,
    Aborted = 3,
};

enum class WiFiDirectConfigurationMethod
{
    ProvidePin = 0,
    DisplayPin = 1,
    PushButton = 2,
};

enum class WiFiDirectConnectionStatus
{
    Disconnected = 0,
    Connected = 1,
};

enum class WiFiDirectDeviceSelectorType
{
    DeviceInterface = 0,
    AssociationEndpoint = 1,
};

enum class WiFiDirectError
{
    Success = 0,
    RadioNotAvailable = 1,
    ResourceInUse = 2,
};

enum class WiFiDirectPairingProcedure
{
    GroupOwnerNegotiation = 0,
    Invitation = 1,
};

}

}
