// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

struct IBackgroundTaskInstance;
struct IBackgroundTrigger;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

enum class HostNameSortOptions : unsigned;
struct EndpointPair;
struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

struct NetworkAdapter;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

enum class ChainValidationResult;
struct Certificate;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct DataReader;
struct IBuffer;
struct IInputStream;
struct IOutputStream;

}

WINRT_EXPORT namespace winrt::Windows::Web {

enum class WebErrorStatus;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

struct IBackgroundTask;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

enum class ControlChannelTriggerResetReason
{
    FastUserSwitched = 0,
    LowPowerExit = 1,
    QuietHoursExit = 2,
    ApplicationRestart = 3,
};

enum class ControlChannelTriggerResourceType
{
    RequestSoftwareSlot = 0,
    RequestHardwareSlot = 1,
};

enum class ControlChannelTriggerStatus
{
    HardwareSlotRequested = 0,
    SoftwareSlotAllocated = 1,
    HardwareSlotAllocated = 2,
    PolicyError = 3,
    SystemError = 4,
    TransportDisconnected = 5,
    ServiceUnavailable = 6,
};

enum class SocketActivityConnectedStandbyAction
{
    DoNotWake = 0,
    Wake = 1,
};

enum class SocketActivityKind
{
    None = 0,
    StreamSocketListener = 1,
    DatagramSocket = 2,
    StreamSocket = 3,
};

enum class SocketActivityTriggerReason
{
    None = 0,
    SocketActivity = 1,
    ConnectionAccepted = 2,
    KeepAliveTimerExpired = 3,
    SocketClosed = 4,
};

enum class SocketErrorStatus
{
    Unknown = 0,
    OperationAborted = 1,
    HttpInvalidServerResponse = 2,
    ConnectionTimedOut = 3,
    AddressFamilyNotSupported = 4,
    SocketTypeNotSupported = 5,
    HostNotFound = 6,
    NoDataRecordOfRequestedType = 7,
    NonAuthoritativeHostNotFound = 8,
    ClassTypeNotFound = 9,
    AddressAlreadyInUse = 10,
    CannotAssignRequestedAddress = 11,
    ConnectionRefused = 12,
    NetworkIsUnreachable = 13,
    UnreachableHost = 14,
    NetworkIsDown = 15,
    NetworkDroppedConnectionOnReset = 16,
    SoftwareCausedConnectionAbort = 17,
    ConnectionResetByPeer = 18,
    HostIsDown = 19,
    NoAddressesFound = 20,
    TooManyOpenFiles = 21,
    MessageTooLong = 22,
    CertificateExpired = 23,
    CertificateUntrustedRoot = 24,
    CertificateCommonNameIsIncorrect = 25,
    CertificateWrongUsage = 26,
    CertificateRevoked = 27,
    CertificateNoRevocationCheck = 28,
    CertificateRevocationServerOffline = 29,
    CertificateIsInvalid = 30,
};

enum class SocketMessageType
{
    Binary = 0,
    Utf8 = 1,
};

enum class SocketProtectionLevel
{
    PlainSocket = 0,
    Ssl [[deprecated("Ssl may result in insecure connections and may be altered or unavailable for releases after Windows 8.1. Instead, use one of the TLS SocketProtectionLevel values.")]] = 1,
    SslAllowNullEncryption = 2,
    BluetoothEncryptionAllowNullAuthentication = 3,
    BluetoothEncryptionWithAuthentication = 4,
    Ssl3AllowWeakEncryption [[deprecated("Ssl3AllowWeakEncryption may result in insecure connections and may be altered or unavailable for releases after Windows 8.1. Instead, use one of the TLS SocketProtectionLevel values.")]] = 5,
    Tls10 = 6,
    Tls11 = 7,
    Tls12 = 8,
};

enum class SocketQualityOfService
{
    Normal = 0,
    LowLatency = 1,
};

enum class SocketSslErrorSeverity
{
    None = 0,
    Ignorable = 1,
    Fatal = 2,
};

struct IControlChannelTrigger;
struct IControlChannelTrigger2;
struct IControlChannelTriggerEventDetails;
struct IControlChannelTriggerFactory;
struct IControlChannelTriggerResetEventDetails;
struct IDatagramSocket;
struct IDatagramSocket2;
struct IDatagramSocket3;
struct IDatagramSocketControl;
struct IDatagramSocketControl2;
struct IDatagramSocketControl3;
struct IDatagramSocketInformation;
struct IDatagramSocketMessageReceivedEventArgs;
struct IDatagramSocketStatics;
struct IMessageWebSocket;
struct IMessageWebSocket2;
struct IMessageWebSocketControl;
struct IMessageWebSocketMessageReceivedEventArgs;
struct ISocketActivityContext;
struct ISocketActivityContextFactory;
struct ISocketActivityInformation;
struct ISocketActivityInformationStatics;
struct ISocketActivityTriggerDetails;
struct ISocketErrorStatics;
struct IStreamSocket;
struct IStreamSocket2;
struct IStreamSocket3;
struct IStreamSocketControl;
struct IStreamSocketControl2;
struct IStreamSocketControl3;
struct IStreamSocketInformation;
struct IStreamSocketInformation2;
struct IStreamSocketListener;
struct IStreamSocketListener2;
struct IStreamSocketListener3;
struct IStreamSocketListenerConnectionReceivedEventArgs;
struct IStreamSocketListenerControl;
struct IStreamSocketListenerControl2;
struct IStreamSocketListenerInformation;
struct IStreamSocketStatics;
struct IStreamWebSocket;
struct IStreamWebSocket2;
struct IStreamWebSocketControl;
struct IWebSocket;
struct IWebSocketClosedEventArgs;
struct IWebSocketControl;
struct IWebSocketControl2;
struct IWebSocketErrorStatics;
struct IWebSocketInformation;
struct IWebSocketInformation2;
struct IWebSocketServerCustomValidationRequestedEventArgs;
struct ControlChannelTrigger;
struct DatagramSocket;
struct DatagramSocketControl;
struct DatagramSocketInformation;
struct DatagramSocketMessageReceivedEventArgs;
struct MessageWebSocket;
struct MessageWebSocketControl;
struct MessageWebSocketInformation;
struct MessageWebSocketMessageReceivedEventArgs;
struct SocketActivityContext;
struct SocketActivityInformation;
struct SocketActivityTriggerDetails;
struct SocketError;
struct StreamSocket;
struct StreamSocketControl;
struct StreamSocketInformation;
struct StreamSocketListener;
struct StreamSocketListenerConnectionReceivedEventArgs;
struct StreamSocketListenerControl;
struct StreamSocketListenerInformation;
struct StreamWebSocket;
struct StreamWebSocketControl;
struct StreamWebSocketInformation;
struct WebSocketClosedEventArgs;
struct WebSocketError;
struct WebSocketKeepAlive;
struct WebSocketServerCustomValidationRequestedEventArgs;
struct BandwidthStatistics;
struct RoundTripTimeStatistics;

}

namespace winrt::impl {

template <> struct category<Windows::Networking::Sockets::IControlChannelTrigger>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IControlChannelTrigger2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IControlChannelTriggerEventDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IControlChannelTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocket>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocket2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocket3>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocketControl>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocketControl2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocketControl3>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocketInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IDatagramSocketStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IMessageWebSocket>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IMessageWebSocket2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IMessageWebSocketControl>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::ISocketActivityContext>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::ISocketActivityContextFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::ISocketActivityInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::ISocketActivityInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::ISocketActivityTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::ISocketErrorStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocket>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocket2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocket3>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketControl>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketControl2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketControl3>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketInformation2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketListener>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketListener2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketListener3>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketListenerControl>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketListenerControl2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketListenerInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamSocketStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamWebSocket>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamWebSocket2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IStreamWebSocketControl>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IWebSocket>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IWebSocketClosedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IWebSocketControl>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IWebSocketControl2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IWebSocketErrorStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IWebSocketInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IWebSocketInformation2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::Sockets::ControlChannelTrigger>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::DatagramSocket>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::DatagramSocketControl>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::DatagramSocketInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::MessageWebSocket>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::MessageWebSocketControl>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::MessageWebSocketInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::SocketActivityContext>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::SocketActivityInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::SocketActivityTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::SocketError>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamSocket>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamSocketControl>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamSocketInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamSocketListener>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamSocketListenerControl>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamSocketListenerInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamWebSocket>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamWebSocketControl>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::StreamWebSocketInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::WebSocketClosedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::WebSocketError>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::WebSocketKeepAlive>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::Sockets::ControlChannelTriggerResetReason>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::ControlChannelTriggerResourceType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::ControlChannelTriggerStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::SocketActivityConnectedStandbyAction>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::SocketActivityKind>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::SocketActivityTriggerReason>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::SocketErrorStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::SocketMessageType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::SocketProtectionLevel>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::SocketQualityOfService>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::SocketSslErrorSeverity>{ using type = enum_category; };
template <> struct category<Windows::Networking::Sockets::BandwidthStatistics>{ using type = struct_category<uint64_t,uint64_t,uint64_t,uint64_t,bool,bool>; };
template <> struct category<Windows::Networking::Sockets::RoundTripTimeStatistics>{ using type = struct_category<uint32_t,uint32_t,uint32_t,uint32_t>; };
template <> struct name<Windows::Networking::Sockets::IControlChannelTrigger>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IControlChannelTrigger" }; };
template <> struct name<Windows::Networking::Sockets::IControlChannelTrigger2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IControlChannelTrigger2" }; };
template <> struct name<Windows::Networking::Sockets::IControlChannelTriggerEventDetails>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IControlChannelTriggerEventDetails" }; };
template <> struct name<Windows::Networking::Sockets::IControlChannelTriggerFactory>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IControlChannelTriggerFactory" }; };
template <> struct name<Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IControlChannelTriggerResetEventDetails" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocket" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocket2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocket2" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocket3>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocket3" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocketControl2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocketControl2" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocketControl3>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocketControl3" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocketInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocketInformation" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::IDatagramSocketStatics>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IDatagramSocketStatics" }; };
template <> struct name<Windows::Networking::Sockets::IMessageWebSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IMessageWebSocket" }; };
template <> struct name<Windows::Networking::Sockets::IMessageWebSocket2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IMessageWebSocket2" }; };
template <> struct name<Windows::Networking::Sockets::IMessageWebSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IMessageWebSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::ISocketActivityContext>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ISocketActivityContext" }; };
template <> struct name<Windows::Networking::Sockets::ISocketActivityContextFactory>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ISocketActivityContextFactory" }; };
template <> struct name<Windows::Networking::Sockets::ISocketActivityInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ISocketActivityInformation" }; };
template <> struct name<Windows::Networking::Sockets::ISocketActivityInformationStatics>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ISocketActivityInformationStatics" }; };
template <> struct name<Windows::Networking::Sockets::ISocketActivityTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ISocketActivityTriggerDetails" }; };
template <> struct name<Windows::Networking::Sockets::ISocketErrorStatics>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ISocketErrorStatics" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocket" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocket2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocket2" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocket3>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocket3" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketControl2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketControl2" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketControl3>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketControl3" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketInformation" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketInformation2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketInformation2" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketListener>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketListener" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketListener2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketListener2" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketListener3>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketListener3" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketListenerControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketListenerControl" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketListenerControl2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketListenerControl2" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketListenerInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketListenerInformation" }; };
template <> struct name<Windows::Networking::Sockets::IStreamSocketStatics>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamSocketStatics" }; };
template <> struct name<Windows::Networking::Sockets::IStreamWebSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamWebSocket" }; };
template <> struct name<Windows::Networking::Sockets::IStreamWebSocket2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamWebSocket2" }; };
template <> struct name<Windows::Networking::Sockets::IStreamWebSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IStreamWebSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::IWebSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IWebSocket" }; };
template <> struct name<Windows::Networking::Sockets::IWebSocketClosedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IWebSocketClosedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::IWebSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IWebSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::IWebSocketControl2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IWebSocketControl2" }; };
template <> struct name<Windows::Networking::Sockets::IWebSocketErrorStatics>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IWebSocketErrorStatics" }; };
template <> struct name<Windows::Networking::Sockets::IWebSocketInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IWebSocketInformation" }; };
template <> struct name<Windows::Networking::Sockets::IWebSocketInformation2>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IWebSocketInformation2" }; };
template <> struct name<Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::ControlChannelTrigger>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ControlChannelTrigger" }; };
template <> struct name<Windows::Networking::Sockets::DatagramSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.DatagramSocket" }; };
template <> struct name<Windows::Networking::Sockets::DatagramSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.DatagramSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::DatagramSocketInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.DatagramSocketInformation" }; };
template <> struct name<Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::MessageWebSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.MessageWebSocket" }; };
template <> struct name<Windows::Networking::Sockets::MessageWebSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.MessageWebSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::MessageWebSocketInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.MessageWebSocketInformation" }; };
template <> struct name<Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::SocketActivityContext>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketActivityContext" }; };
template <> struct name<Windows::Networking::Sockets::SocketActivityInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketActivityInformation" }; };
template <> struct name<Windows::Networking::Sockets::SocketActivityTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketActivityTriggerDetails" }; };
template <> struct name<Windows::Networking::Sockets::SocketError>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketError" }; };
template <> struct name<Windows::Networking::Sockets::StreamSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamSocket" }; };
template <> struct name<Windows::Networking::Sockets::StreamSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::StreamSocketInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamSocketInformation" }; };
template <> struct name<Windows::Networking::Sockets::StreamSocketListener>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamSocketListener" }; };
template <> struct name<Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::StreamSocketListenerControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamSocketListenerControl" }; };
template <> struct name<Windows::Networking::Sockets::StreamSocketListenerInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamSocketListenerInformation" }; };
template <> struct name<Windows::Networking::Sockets::StreamWebSocket>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamWebSocket" }; };
template <> struct name<Windows::Networking::Sockets::StreamWebSocketControl>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamWebSocketControl" }; };
template <> struct name<Windows::Networking::Sockets::StreamWebSocketInformation>{ static constexpr auto & value{ L"Windows.Networking.Sockets.StreamWebSocketInformation" }; };
template <> struct name<Windows::Networking::Sockets::WebSocketClosedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.WebSocketClosedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::WebSocketError>{ static constexpr auto & value{ L"Windows.Networking.Sockets.WebSocketError" }; };
template <> struct name<Windows::Networking::Sockets::WebSocketKeepAlive>{ static constexpr auto & value{ L"Windows.Networking.Sockets.WebSocketKeepAlive" }; };
template <> struct name<Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs" }; };
template <> struct name<Windows::Networking::Sockets::ControlChannelTriggerResetReason>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ControlChannelTriggerResetReason" }; };
template <> struct name<Windows::Networking::Sockets::ControlChannelTriggerResourceType>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ControlChannelTriggerResourceType" }; };
template <> struct name<Windows::Networking::Sockets::ControlChannelTriggerStatus>{ static constexpr auto & value{ L"Windows.Networking.Sockets.ControlChannelTriggerStatus" }; };
template <> struct name<Windows::Networking::Sockets::SocketActivityConnectedStandbyAction>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketActivityConnectedStandbyAction" }; };
template <> struct name<Windows::Networking::Sockets::SocketActivityKind>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketActivityKind" }; };
template <> struct name<Windows::Networking::Sockets::SocketActivityTriggerReason>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketActivityTriggerReason" }; };
template <> struct name<Windows::Networking::Sockets::SocketErrorStatus>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketErrorStatus" }; };
template <> struct name<Windows::Networking::Sockets::SocketMessageType>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketMessageType" }; };
template <> struct name<Windows::Networking::Sockets::SocketProtectionLevel>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketProtectionLevel" }; };
template <> struct name<Windows::Networking::Sockets::SocketQualityOfService>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketQualityOfService" }; };
template <> struct name<Windows::Networking::Sockets::SocketSslErrorSeverity>{ static constexpr auto & value{ L"Windows.Networking.Sockets.SocketSslErrorSeverity" }; };
template <> struct name<Windows::Networking::Sockets::BandwidthStatistics>{ static constexpr auto & value{ L"Windows.Networking.Sockets.BandwidthStatistics" }; };
template <> struct name<Windows::Networking::Sockets::RoundTripTimeStatistics>{ static constexpr auto & value{ L"Windows.Networking.Sockets.RoundTripTimeStatistics" }; };
template <> struct guid<Windows::Networking::Sockets::IControlChannelTrigger>{ static constexpr GUID value{ 0x7D1431A7,0xEE96,0x40E8,{ 0xA1,0x99,0x87,0x03,0xCD,0x96,0x9E,0xC3 } }; };
template <> struct guid<Windows::Networking::Sockets::IControlChannelTrigger2>{ static constexpr GUID value{ 0xAF00D237,0x51BE,0x4514,{ 0x97,0x25,0x35,0x56,0xE1,0x87,0x95,0x80 } }; };
template <> struct guid<Windows::Networking::Sockets::IControlChannelTriggerEventDetails>{ static constexpr GUID value{ 0x1B36E047,0x89BB,0x4236,{ 0x96,0xAC,0x71,0xD0,0x12,0xBB,0x48,0x69 } }; };
template <> struct guid<Windows::Networking::Sockets::IControlChannelTriggerFactory>{ static constexpr GUID value{ 0xDA4B7CF0,0x8D71,0x446F,{ 0x88,0xC3,0xB9,0x51,0x84,0xA2,0xD6,0xCD } }; };
template <> struct guid<Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>{ static constexpr GUID value{ 0x6851038E,0x8EC4,0x42FE,{ 0x9B,0xB2,0x21,0xE9,0x1B,0x7B,0xFC,0xB1 } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocket>{ static constexpr GUID value{ 0x7FE25BBB,0xC3BC,0x4677,{ 0x84,0x46,0xCA,0x28,0xA4,0x65,0xA3,0xAF } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocket2>{ static constexpr GUID value{ 0xD83BA354,0x9A9D,0x4185,{ 0xA2,0x0A,0x14,0x24,0xC9,0xC2,0xA7,0xCD } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocket3>{ static constexpr GUID value{ 0x37544F09,0xAB92,0x4306,{ 0x9A,0xC1,0x0C,0x38,0x12,0x83,0xD9,0xC6 } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocketControl>{ static constexpr GUID value{ 0x52AC3F2E,0x349A,0x4135,{ 0xBB,0x58,0xB7,0x9B,0x26,0x47,0xD3,0x90 } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocketControl2>{ static constexpr GUID value{ 0x33EAD5C2,0x979C,0x4415,{ 0x82,0xA1,0x3C,0xFA,0xF6,0x46,0xC1,0x92 } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocketControl3>{ static constexpr GUID value{ 0xD4EB8256,0x1F6D,0x4598,{ 0x9B,0x57,0xD4,0x2A,0x00,0x1D,0xF3,0x49 } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocketInformation>{ static constexpr GUID value{ 0x5F1A569A,0x55FB,0x48CD,{ 0x97,0x06,0x7A,0x97,0x4F,0x7B,0x15,0x85 } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>{ static constexpr GUID value{ 0x9E2DDCA2,0x1712,0x4CE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x10,0x7E } }; };
template <> struct guid<Windows::Networking::Sockets::IDatagramSocketStatics>{ static constexpr GUID value{ 0xE9C62AEE,0x1494,0x4A21,{ 0xBB,0x7E,0x85,0x89,0xFC,0x75,0x1D,0x9D } }; };
template <> struct guid<Windows::Networking::Sockets::IMessageWebSocket>{ static constexpr GUID value{ 0x33727D08,0x34D5,0x4746,{ 0xAD,0x7B,0x8D,0xDE,0x5B,0xC2,0xEF,0x88 } }; };
template <> struct guid<Windows::Networking::Sockets::IMessageWebSocket2>{ static constexpr GUID value{ 0xBED0CEE7,0xF9C8,0x440A,{ 0x9A,0xD5,0x73,0x72,0x81,0xD9,0x74,0x2E } }; };
template <> struct guid<Windows::Networking::Sockets::IMessageWebSocketControl>{ static constexpr GUID value{ 0x8118388A,0xC629,0x4F0A,{ 0x80,0xFB,0x81,0xFC,0x05,0x53,0x88,0x62 } }; };
template <> struct guid<Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>{ static constexpr GUID value{ 0x478C22AC,0x4C4B,0x42ED,{ 0x9E,0xD7,0x1E,0xF9,0xF9,0x4F,0xA3,0xD5 } }; };
template <> struct guid<Windows::Networking::Sockets::ISocketActivityContext>{ static constexpr GUID value{ 0x43B04D64,0x4C85,0x4396,{ 0xA6,0x37,0x1D,0x97,0x3F,0x6E,0xBD,0x49 } }; };
template <> struct guid<Windows::Networking::Sockets::ISocketActivityContextFactory>{ static constexpr GUID value{ 0xB99FC3C3,0x088C,0x4388,{ 0x83,0xAE,0x25,0x25,0x13,0x8E,0x04,0x9A } }; };
template <> struct guid<Windows::Networking::Sockets::ISocketActivityInformation>{ static constexpr GUID value{ 0x8D8A42E4,0xA87E,0x4B74,{ 0x99,0x68,0x18,0x5B,0x25,0x11,0xDE,0xFE } }; };
template <> struct guid<Windows::Networking::Sockets::ISocketActivityInformationStatics>{ static constexpr GUID value{ 0x8570B47A,0x7E7D,0x4736,{ 0x80,0x41,0x13,0x27,0xA6,0x54,0x3C,0x56 } }; };
template <> struct guid<Windows::Networking::Sockets::ISocketActivityTriggerDetails>{ static constexpr GUID value{ 0x45F406A7,0xFC9F,0x4F81,{ 0xAC,0xAD,0x35,0x5F,0xEF,0x51,0xE6,0x7B } }; };
template <> struct guid<Windows::Networking::Sockets::ISocketErrorStatics>{ static constexpr GUID value{ 0x828337F4,0x7D56,0x4D8E,{ 0xB7,0xB4,0xA0,0x7D,0xD7,0xC1,0xBC,0xA9 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocket>{ static constexpr GUID value{ 0x69A22CF3,0xFC7B,0x4857,{ 0xAF,0x38,0xF6,0xE7,0xDE,0x6A,0x5B,0x49 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocket2>{ static constexpr GUID value{ 0x29D0E575,0xF314,0x4D09,{ 0xAD,0xF0,0x0F,0xBD,0x96,0x7F,0xBD,0x9F } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocket3>{ static constexpr GUID value{ 0x3F430B00,0x9D28,0x4854,{ 0xBA,0xC3,0x23,0x01,0x94,0x1E,0xC2,0x23 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketControl>{ static constexpr GUID value{ 0xFE25ADF1,0x92AB,0x4AF3,{ 0x99,0x92,0x0F,0x4C,0x85,0xE3,0x6C,0xC4 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketControl2>{ static constexpr GUID value{ 0xC2D09A56,0x060F,0x44C1,{ 0xB8,0xE2,0x1F,0xBF,0x60,0xBD,0x62,0xC5 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketControl3>{ static constexpr GUID value{ 0xC56A444C,0x4E74,0x403E,{ 0x89,0x4C,0xB3,0x1C,0xAE,0x5C,0x73,0x42 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketInformation>{ static constexpr GUID value{ 0x3B80AE30,0x5E68,0x4205,{ 0x88,0xF0,0xDC,0x85,0xD2,0xE2,0x5D,0xED } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketInformation2>{ static constexpr GUID value{ 0x12C28452,0x4BDC,0x4EE4,{ 0x97,0x6A,0xCF,0x13,0x0E,0x9D,0x92,0xE3 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketListener>{ static constexpr GUID value{ 0xFF513437,0xDF9F,0x4DF0,{ 0xBF,0x82,0x0E,0xC5,0xD7,0xB3,0x5A,0xAE } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketListener2>{ static constexpr GUID value{ 0x658DC13E,0xBB3E,0x4458,{ 0xB2,0x32,0xED,0x10,0x88,0x69,0x4B,0x98 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketListener3>{ static constexpr GUID value{ 0x4798201C,0xBDF8,0x4919,{ 0x85,0x42,0x28,0xD4,0x50,0xE7,0x45,0x07 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>{ static constexpr GUID value{ 0x0C472EA9,0x373F,0x447B,{ 0x85,0xB1,0xDD,0xD4,0x54,0x88,0x03,0xBA } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketListenerControl>{ static constexpr GUID value{ 0x20D8C576,0x8D8A,0x4DBA,{ 0x97,0x22,0xA1,0x6C,0x4D,0x98,0x49,0x80 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketListenerControl2>{ static constexpr GUID value{ 0x948BB665,0x2C3E,0x404B,{ 0xB8,0xB0,0x8E,0xB2,0x49,0xA2,0xB0,0xA1 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketListenerInformation>{ static constexpr GUID value{ 0xE62BA82F,0xA63A,0x430B,{ 0xBF,0x62,0x29,0xE9,0x3E,0x56,0x33,0xB4 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamSocketStatics>{ static constexpr GUID value{ 0xA420BC4A,0x6E2E,0x4AF5,{ 0xB5,0x56,0x35,0x5A,0xE0,0xCD,0x4F,0x29 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamWebSocket>{ static constexpr GUID value{ 0xBD4A49D8,0xB289,0x45BB,{ 0x97,0xEB,0xC7,0x52,0x52,0x05,0xA8,0x43 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamWebSocket2>{ static constexpr GUID value{ 0xAA4D08CB,0x93F5,0x4678,{ 0x82,0x36,0x57,0xCC,0xE5,0x41,0x7E,0xD5 } }; };
template <> struct guid<Windows::Networking::Sockets::IStreamWebSocketControl>{ static constexpr GUID value{ 0xB4F478B1,0xA45A,0x48DB,{ 0x95,0x3A,0x64,0x5B,0x7D,0x96,0x4C,0x07 } }; };
template <> struct guid<Windows::Networking::Sockets::IWebSocket>{ static constexpr GUID value{ 0xF877396F,0x99B1,0x4E18,{ 0xBC,0x08,0x85,0x0C,0x9A,0xDF,0x15,0x6E } }; };
template <> struct guid<Windows::Networking::Sockets::IWebSocketClosedEventArgs>{ static constexpr GUID value{ 0xCEB78D07,0xD0A8,0x4703,{ 0xA0,0x91,0xC8,0xC2,0xC0,0x91,0x5B,0xC3 } }; };
template <> struct guid<Windows::Networking::Sockets::IWebSocketControl>{ static constexpr GUID value{ 0x2EC4BDC3,0xD9A5,0x455A,{ 0x98,0x11,0xDE,0x24,0xD4,0x53,0x37,0xE9 } }; };
template <> struct guid<Windows::Networking::Sockets::IWebSocketControl2>{ static constexpr GUID value{ 0x79C3BE03,0xF2CA,0x461E,{ 0xAF,0x4E,0x96,0x65,0xBC,0x2D,0x06,0x20 } }; };
template <> struct guid<Windows::Networking::Sockets::IWebSocketErrorStatics>{ static constexpr GUID value{ 0x27CDF35B,0x1F61,0x4709,{ 0x8E,0x02,0x61,0x28,0x3A,0xDA,0x4E,0x9D } }; };
template <> struct guid<Windows::Networking::Sockets::IWebSocketInformation>{ static constexpr GUID value{ 0x5E01E316,0xC92A,0x47A5,{ 0xB2,0x5F,0x07,0x84,0x76,0x39,0xD1,0x81 } }; };
template <> struct guid<Windows::Networking::Sockets::IWebSocketInformation2>{ static constexpr GUID value{ 0xCE1D39CE,0xA1B7,0x4D43,{ 0x82,0x69,0x8D,0x5B,0x98,0x1B,0xD4,0x7A } }; };
template <> struct guid<Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>{ static constexpr GUID value{ 0xFFEFFE48,0x022A,0x4AB7,{ 0x8B,0x36,0xE1,0x0A,0xF4,0x64,0x0E,0x6B } }; };
template <> struct default_interface<Windows::Networking::Sockets::ControlChannelTrigger>{ using type = Windows::Networking::Sockets::IControlChannelTrigger; };
template <> struct default_interface<Windows::Networking::Sockets::DatagramSocket>{ using type = Windows::Networking::Sockets::IDatagramSocket; };
template <> struct default_interface<Windows::Networking::Sockets::DatagramSocketControl>{ using type = Windows::Networking::Sockets::IDatagramSocketControl; };
template <> struct default_interface<Windows::Networking::Sockets::DatagramSocketInformation>{ using type = Windows::Networking::Sockets::IDatagramSocketInformation; };
template <> struct default_interface<Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs>{ using type = Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs; };
template <> struct default_interface<Windows::Networking::Sockets::MessageWebSocket>{ using type = Windows::Networking::Sockets::IMessageWebSocket; };
template <> struct default_interface<Windows::Networking::Sockets::MessageWebSocketControl>{ using type = Windows::Networking::Sockets::IMessageWebSocketControl; };
template <> struct default_interface<Windows::Networking::Sockets::MessageWebSocketInformation>{ using type = Windows::Networking::Sockets::IWebSocketInformation; };
template <> struct default_interface<Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs>{ using type = Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs; };
template <> struct default_interface<Windows::Networking::Sockets::SocketActivityContext>{ using type = Windows::Networking::Sockets::ISocketActivityContext; };
template <> struct default_interface<Windows::Networking::Sockets::SocketActivityInformation>{ using type = Windows::Networking::Sockets::ISocketActivityInformation; };
template <> struct default_interface<Windows::Networking::Sockets::SocketActivityTriggerDetails>{ using type = Windows::Networking::Sockets::ISocketActivityTriggerDetails; };
template <> struct default_interface<Windows::Networking::Sockets::StreamSocket>{ using type = Windows::Networking::Sockets::IStreamSocket; };
template <> struct default_interface<Windows::Networking::Sockets::StreamSocketControl>{ using type = Windows::Networking::Sockets::IStreamSocketControl; };
template <> struct default_interface<Windows::Networking::Sockets::StreamSocketInformation>{ using type = Windows::Networking::Sockets::IStreamSocketInformation; };
template <> struct default_interface<Windows::Networking::Sockets::StreamSocketListener>{ using type = Windows::Networking::Sockets::IStreamSocketListener; };
template <> struct default_interface<Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs>{ using type = Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs; };
template <> struct default_interface<Windows::Networking::Sockets::StreamSocketListenerControl>{ using type = Windows::Networking::Sockets::IStreamSocketListenerControl; };
template <> struct default_interface<Windows::Networking::Sockets::StreamSocketListenerInformation>{ using type = Windows::Networking::Sockets::IStreamSocketListenerInformation; };
template <> struct default_interface<Windows::Networking::Sockets::StreamWebSocket>{ using type = Windows::Networking::Sockets::IStreamWebSocket; };
template <> struct default_interface<Windows::Networking::Sockets::StreamWebSocketControl>{ using type = Windows::Networking::Sockets::IStreamWebSocketControl; };
template <> struct default_interface<Windows::Networking::Sockets::StreamWebSocketInformation>{ using type = Windows::Networking::Sockets::IWebSocketInformation; };
template <> struct default_interface<Windows::Networking::Sockets::WebSocketClosedEventArgs>{ using type = Windows::Networking::Sockets::IWebSocketClosedEventArgs; };
template <> struct default_interface<Windows::Networking::Sockets::WebSocketKeepAlive>{ using type = Windows::ApplicationModel::Background::IBackgroundTask; };
template <> struct default_interface<Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>{ using type = Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs; };

template <typename D>
struct consume_Windows_Networking_Sockets_IControlChannelTrigger
{
    hstring ControlChannelTriggerId() const;
    uint32_t ServerKeepAliveIntervalInMinutes() const;
    void ServerKeepAliveIntervalInMinutes(uint32_t value) const;
    uint32_t CurrentKeepAliveIntervalInMinutes() const;
    Windows::Foundation::IInspectable TransportObject() const;
    Windows::ApplicationModel::Background::IBackgroundTrigger KeepAliveTrigger() const;
    Windows::ApplicationModel::Background::IBackgroundTrigger PushNotificationTrigger() const;
    void UsingTransport(Windows::Foundation::IInspectable const& transport) const;
    Windows::Networking::Sockets::ControlChannelTriggerStatus WaitForPushEnabled() const;
    void DecreaseNetworkKeepAliveInterval() const;
    void FlushTransport() const;
};
template <> struct consume<Windows::Networking::Sockets::IControlChannelTrigger> { template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTrigger<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IControlChannelTrigger2
{
    bool IsWakeFromLowPowerSupported() const;
};
template <> struct consume<Windows::Networking::Sockets::IControlChannelTrigger2> { template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTrigger2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IControlChannelTriggerEventDetails
{
    Windows::Networking::Sockets::ControlChannelTrigger ControlChannelTrigger() const;
};
template <> struct consume<Windows::Networking::Sockets::IControlChannelTriggerEventDetails> { template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTriggerEventDetails<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IControlChannelTriggerFactory
{
    Windows::Networking::Sockets::ControlChannelTrigger CreateControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes) const;
    Windows::Networking::Sockets::ControlChannelTrigger CreateControlChannelTriggerEx(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType const& resourceRequestType) const;
};
template <> struct consume<Windows::Networking::Sockets::IControlChannelTriggerFactory> { template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTriggerFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails
{
    Windows::Networking::Sockets::ControlChannelTriggerResetReason ResetReason() const;
    bool HardwareSlotReset() const;
    bool SoftwareSlotReset() const;
};
template <> struct consume<Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails> { template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocket
{
    Windows::Networking::Sockets::DatagramSocketControl Control() const;
    Windows::Networking::Sockets::DatagramSocketInformation Information() const;
    Windows::Storage::Streams::IOutputStream OutputStream() const;
    Windows::Foundation::IAsyncAction ConnectAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
    Windows::Foundation::IAsyncAction ConnectAsync(Windows::Networking::EndpointPair const& endpointPair) const;
    Windows::Foundation::IAsyncAction BindServiceNameAsync(param::hstring const& localServiceName) const;
    Windows::Foundation::IAsyncAction BindEndpointAsync(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName) const;
    void JoinMulticastGroup(Windows::Networking::HostName const& host) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> GetOutputStreamAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> GetOutputStreamAsync(Windows::Networking::EndpointPair const& endpointPair) const;
    event_token MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> const& eventHandler) const;
    using MessageReceived_revoker = event_revoker<Windows::Networking::Sockets::IDatagramSocket>;
    MessageReceived_revoker MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> const& eventHandler) const;
    void MessageReceived(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocket> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocket<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocket2
{
    Windows::Foundation::IAsyncAction BindServiceNameAsync(param::hstring const& localServiceName, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocket2> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocket2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocket3
{
    Windows::Foundation::IAsyncAction CancelIOAsync() const;
    void EnableTransferOwnership(GUID const& taskId) const;
    void EnableTransferOwnership(GUID const& taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const;
    void TransferOwnership(param::hstring const& socketId) const;
    void TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data) const;
    void TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data, Windows::Foundation::TimeSpan const& keepAliveTime) const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocket3> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocket3<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocketControl
{
    Windows::Networking::Sockets::SocketQualityOfService QualityOfService() const;
    void QualityOfService(Windows::Networking::Sockets::SocketQualityOfService const& value) const;
    uint8_t OutboundUnicastHopLimit() const;
    void OutboundUnicastHopLimit(uint8_t value) const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocketControl> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketControl<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocketControl2
{
    uint32_t InboundBufferSizeInBytes() const;
    void InboundBufferSizeInBytes(uint32_t value) const;
    bool DontFragment() const;
    void DontFragment(bool value) const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocketControl2> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketControl2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocketControl3
{
    bool MulticastOnly() const;
    void MulticastOnly(bool value) const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocketControl3> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketControl3<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocketInformation
{
    Windows::Networking::HostName LocalAddress() const;
    hstring LocalPort() const;
    Windows::Networking::HostName RemoteAddress() const;
    hstring RemotePort() const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocketInformation> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketInformation<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs
{
    Windows::Networking::HostName RemoteAddress() const;
    hstring RemotePort() const;
    Windows::Networking::HostName LocalAddress() const;
    Windows::Storage::Streams::DataReader GetDataReader() const;
    Windows::Storage::Streams::IInputStream GetDataStream() const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IDatagramSocketStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions) const;
};
template <> struct consume<Windows::Networking::Sockets::IDatagramSocketStatics> { template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketStatics<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IMessageWebSocket
{
    Windows::Networking::Sockets::MessageWebSocketControl Control() const;
    Windows::Networking::Sockets::MessageWebSocketInformation Information() const;
    event_token MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& eventHandler) const;
    using MessageReceived_revoker = event_revoker<Windows::Networking::Sockets::IMessageWebSocket>;
    MessageReceived_revoker MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& eventHandler) const;
    void MessageReceived(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Networking::Sockets::IMessageWebSocket> { template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocket<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IMessageWebSocket2
{
    event_token ServerCustomValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const;
    using ServerCustomValidationRequested_revoker = event_revoker<Windows::Networking::Sockets::IMessageWebSocket2>;
    ServerCustomValidationRequested_revoker ServerCustomValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const;
    void ServerCustomValidationRequested(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Networking::Sockets::IMessageWebSocket2> { template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocket2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IMessageWebSocketControl
{
    uint32_t MaxMessageSize() const;
    void MaxMessageSize(uint32_t value) const;
    Windows::Networking::Sockets::SocketMessageType MessageType() const;
    void MessageType(Windows::Networking::Sockets::SocketMessageType const& value) const;
};
template <> struct consume<Windows::Networking::Sockets::IMessageWebSocketControl> { template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocketControl<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs
{
    Windows::Networking::Sockets::SocketMessageType MessageType() const;
    Windows::Storage::Streams::DataReader GetDataReader() const;
    Windows::Storage::Streams::IInputStream GetDataStream() const;
};
template <> struct consume<Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs> { template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_ISocketActivityContext
{
    Windows::Storage::Streams::IBuffer Data() const;
};
template <> struct consume<Windows::Networking::Sockets::ISocketActivityContext> { template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityContext<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_ISocketActivityContextFactory
{
    Windows::Networking::Sockets::SocketActivityContext Create(Windows::Storage::Streams::IBuffer const& data) const;
};
template <> struct consume<Windows::Networking::Sockets::ISocketActivityContextFactory> { template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityContextFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_ISocketActivityInformation
{
    GUID TaskId() const;
    hstring Id() const;
    Windows::Networking::Sockets::SocketActivityKind SocketKind() const;
    Windows::Networking::Sockets::SocketActivityContext Context() const;
    Windows::Networking::Sockets::DatagramSocket DatagramSocket() const;
    Windows::Networking::Sockets::StreamSocket StreamSocket() const;
    Windows::Networking::Sockets::StreamSocketListener StreamSocketListener() const;
};
template <> struct consume<Windows::Networking::Sockets::ISocketActivityInformation> { template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityInformation<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_ISocketActivityInformationStatics
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation> AllSockets() const;
};
template <> struct consume<Windows::Networking::Sockets::ISocketActivityInformationStatics> { template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityInformationStatics<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_ISocketActivityTriggerDetails
{
    Windows::Networking::Sockets::SocketActivityTriggerReason Reason() const;
    Windows::Networking::Sockets::SocketActivityInformation SocketInformation() const;
};
template <> struct consume<Windows::Networking::Sockets::ISocketActivityTriggerDetails> { template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_ISocketErrorStatics
{
    Windows::Networking::Sockets::SocketErrorStatus GetStatus(int32_t hresult) const;
};
template <> struct consume<Windows::Networking::Sockets::ISocketErrorStatics> { template <typename D> using type = consume_Windows_Networking_Sockets_ISocketErrorStatics<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocket
{
    Windows::Networking::Sockets::StreamSocketControl Control() const;
    Windows::Networking::Sockets::StreamSocketInformation Information() const;
    Windows::Storage::Streams::IInputStream InputStream() const;
    Windows::Storage::Streams::IOutputStream OutputStream() const;
    Windows::Foundation::IAsyncAction ConnectAsync(Windows::Networking::EndpointPair const& endpointPair) const;
    Windows::Foundation::IAsyncAction ConnectAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
    Windows::Foundation::IAsyncAction ConnectAsync(Windows::Networking::EndpointPair const& endpointPair, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const;
    Windows::Foundation::IAsyncAction ConnectAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const;
    Windows::Foundation::IAsyncAction UpgradeToSslAsync(Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, Windows::Networking::HostName const& validationHostName) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocket> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocket<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocket2
{
    Windows::Foundation::IAsyncAction ConnectAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocket2> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocket2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocket3
{
    Windows::Foundation::IAsyncAction CancelIOAsync() const;
    void EnableTransferOwnership(GUID const& taskId) const;
    void EnableTransferOwnership(GUID const& taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const;
    void TransferOwnership(param::hstring const& socketId) const;
    void TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data) const;
    void TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data, Windows::Foundation::TimeSpan const& keepAliveTime) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocket3> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocket3<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketControl
{
    bool NoDelay() const;
    void NoDelay(bool value) const;
    bool KeepAlive() const;
    void KeepAlive(bool value) const;
    uint32_t OutboundBufferSizeInBytes() const;
    void OutboundBufferSizeInBytes(uint32_t value) const;
    Windows::Networking::Sockets::SocketQualityOfService QualityOfService() const;
    void QualityOfService(Windows::Networking::Sockets::SocketQualityOfService const& value) const;
    uint8_t OutboundUnicastHopLimit() const;
    void OutboundUnicastHopLimit(uint8_t value) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketControl> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketControl<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketControl2
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> IgnorableServerCertificateErrors() const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketControl2> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketControl2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketControl3
{
    bool SerializeConnectionAttempts() const;
    void SerializeConnectionAttempts(bool value) const;
    Windows::Security::Cryptography::Certificates::Certificate ClientCertificate() const;
    void ClientCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketControl3> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketControl3<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketInformation
{
    Windows::Networking::HostName LocalAddress() const;
    hstring LocalPort() const;
    Windows::Networking::HostName RemoteHostName() const;
    Windows::Networking::HostName RemoteAddress() const;
    hstring RemoteServiceName() const;
    hstring RemotePort() const;
    Windows::Networking::Sockets::RoundTripTimeStatistics RoundTripTimeStatistics() const;
    Windows::Networking::Sockets::BandwidthStatistics BandwidthStatistics() const;
    Windows::Networking::Sockets::SocketProtectionLevel ProtectionLevel() const;
    Windows::Storage::Streams::IBuffer SessionKey() const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketInformation> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketInformation<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketInformation2
{
    Windows::Networking::Sockets::SocketSslErrorSeverity ServerCertificateErrorSeverity() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> ServerCertificateErrors() const;
    Windows::Security::Cryptography::Certificates::Certificate ServerCertificate() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> ServerIntermediateCertificates() const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketInformation2> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketInformation2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketListener
{
    Windows::Networking::Sockets::StreamSocketListenerControl Control() const;
    Windows::Networking::Sockets::StreamSocketListenerInformation Information() const;
    Windows::Foundation::IAsyncAction BindServiceNameAsync(param::hstring const& localServiceName) const;
    Windows::Foundation::IAsyncAction BindEndpointAsync(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName) const;
    event_token ConnectionReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> const& eventHandler) const;
    using ConnectionReceived_revoker = event_revoker<Windows::Networking::Sockets::IStreamSocketListener>;
    ConnectionReceived_revoker ConnectionReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> const& eventHandler) const;
    void ConnectionReceived(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketListener> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListener<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketListener2
{
    Windows::Foundation::IAsyncAction BindServiceNameAsync(param::hstring const& localServiceName, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const;
    Windows::Foundation::IAsyncAction BindServiceNameAsync(param::hstring const& localServiceName, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketListener2> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListener2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketListener3
{
    Windows::Foundation::IAsyncAction CancelIOAsync() const;
    void EnableTransferOwnership(GUID const& taskId) const;
    void EnableTransferOwnership(GUID const& taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const;
    void TransferOwnership(param::hstring const& socketId) const;
    void TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketListener3> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListener3<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketListenerConnectionReceivedEventArgs
{
    Windows::Networking::Sockets::StreamSocket Socket() const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListenerConnectionReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketListenerControl
{
    Windows::Networking::Sockets::SocketQualityOfService QualityOfService() const;
    void QualityOfService(Windows::Networking::Sockets::SocketQualityOfService const& value) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketListenerControl> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListenerControl<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketListenerControl2
{
    bool NoDelay() const;
    void NoDelay(bool value) const;
    bool KeepAlive() const;
    void KeepAlive(bool value) const;
    uint32_t OutboundBufferSizeInBytes() const;
    void OutboundBufferSizeInBytes(uint32_t value) const;
    uint8_t OutboundUnicastHopLimit() const;
    void OutboundUnicastHopLimit(uint8_t value) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketListenerControl2> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketListenerInformation
{
    hstring LocalPort() const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketListenerInformation> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListenerInformation<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamSocketStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamSocketStatics> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketStatics<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamWebSocket
{
    Windows::Networking::Sockets::StreamWebSocketControl Control() const;
    Windows::Networking::Sockets::StreamWebSocketInformation Information() const;
    Windows::Storage::Streams::IInputStream InputStream() const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamWebSocket> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamWebSocket<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamWebSocket2
{
    event_token ServerCustomValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const;
    using ServerCustomValidationRequested_revoker = event_revoker<Windows::Networking::Sockets::IStreamWebSocket2>;
    ServerCustomValidationRequested_revoker ServerCustomValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const;
    void ServerCustomValidationRequested(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamWebSocket2> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamWebSocket2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IStreamWebSocketControl
{
    bool NoDelay() const;
    void NoDelay(bool value) const;
};
template <> struct consume<Windows::Networking::Sockets::IStreamWebSocketControl> { template <typename D> using type = consume_Windows_Networking_Sockets_IStreamWebSocketControl<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IWebSocket
{
    Windows::Storage::Streams::IOutputStream OutputStream() const;
    Windows::Foundation::IAsyncAction ConnectAsync(Windows::Foundation::Uri const& uri) const;
    void SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const;
    event_token Closed(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const& eventHandler) const;
    using Closed_revoker = event_revoker<Windows::Networking::Sockets::IWebSocket>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const& eventHandler) const;
    void Closed(event_token const& eventCookie) const;
    void Close(uint16_t code, param::hstring const& reason) const;
};
template <> struct consume<Windows::Networking::Sockets::IWebSocket> { template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocket<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IWebSocketClosedEventArgs
{
    uint16_t Code() const;
    hstring Reason() const;
};
template <> struct consume<Windows::Networking::Sockets::IWebSocketClosedEventArgs> { template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketClosedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IWebSocketControl
{
    uint32_t OutboundBufferSizeInBytes() const;
    void OutboundBufferSizeInBytes(uint32_t value) const;
    Windows::Security::Credentials::PasswordCredential ServerCredential() const;
    void ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
    Windows::Security::Credentials::PasswordCredential ProxyCredential() const;
    void ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
    Windows::Foundation::Collections::IVector<hstring> SupportedProtocols() const;
};
template <> struct consume<Windows::Networking::Sockets::IWebSocketControl> { template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketControl<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IWebSocketControl2
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> IgnorableServerCertificateErrors() const;
};
template <> struct consume<Windows::Networking::Sockets::IWebSocketControl2> { template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketControl2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IWebSocketErrorStatics
{
    Windows::Web::WebErrorStatus GetStatus(int32_t hresult) const;
};
template <> struct consume<Windows::Networking::Sockets::IWebSocketErrorStatics> { template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketErrorStatics<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IWebSocketInformation
{
    Windows::Networking::HostName LocalAddress() const;
    Windows::Networking::Sockets::BandwidthStatistics BandwidthStatistics() const;
    hstring Protocol() const;
};
template <> struct consume<Windows::Networking::Sockets::IWebSocketInformation> { template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketInformation<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IWebSocketInformation2
{
    Windows::Security::Cryptography::Certificates::Certificate ServerCertificate() const;
    Windows::Networking::Sockets::SocketSslErrorSeverity ServerCertificateErrorSeverity() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> ServerCertificateErrors() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> ServerIntermediateCertificates() const;
};
template <> struct consume<Windows::Networking::Sockets::IWebSocketInformation2> { template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketInformation2<D>; };

template <typename D>
struct consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs
{
    Windows::Security::Cryptography::Certificates::Certificate ServerCertificate() const;
    Windows::Networking::Sockets::SocketSslErrorSeverity ServerCertificateErrorSeverity() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> ServerCertificateErrors() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> ServerIntermediateCertificates() const;
    void Reject() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs> { template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs<D>; };

template <> struct abi<Windows::Networking::Sockets::IControlChannelTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ControlChannelTriggerId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServerKeepAliveIntervalInMinutes(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ServerKeepAliveIntervalInMinutes(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CurrentKeepAliveIntervalInMinutes(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TransportObject(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeepAliveTrigger(::IUnknown** trigger) = 0;
    virtual HRESULT __stdcall get_PushNotificationTrigger(::IUnknown** trigger) = 0;
    virtual HRESULT __stdcall UsingTransport(::IUnknown* transport) = 0;
    virtual HRESULT __stdcall WaitForPushEnabled(abi_t<Windows::Networking::Sockets::ControlChannelTriggerStatus>* channelTriggerStatus) = 0;
    virtual HRESULT __stdcall DecreaseNetworkKeepAliveInterval() = 0;
    virtual HRESULT __stdcall FlushTransport() = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IControlChannelTrigger2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsWakeFromLowPowerSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IControlChannelTriggerEventDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ControlChannelTrigger(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IControlChannelTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateControlChannelTrigger(HSTRING channelId, uint32_t serverKeepAliveIntervalInMinutes, ::IUnknown** notificationChannel) = 0;
    virtual HRESULT __stdcall CreateControlChannelTriggerEx(HSTRING channelId, uint32_t serverKeepAliveIntervalInMinutes, abi_t<Windows::Networking::Sockets::ControlChannelTriggerResourceType> resourceRequestType, ::IUnknown** notificationChannel) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResetReason(abi_t<Windows::Networking::Sockets::ControlChannelTriggerResetReason>* value) = 0;
    virtual HRESULT __stdcall get_HardwareSlotReset(bool* value) = 0;
    virtual HRESULT __stdcall get_SoftwareSlotReset(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocket>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Control(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Information(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OutputStream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ConnectAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ConnectWithEndpointPairAsync(::IUnknown* endpointPair, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall BindServiceNameAsync(HSTRING localServiceName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall BindEndpointAsync(::IUnknown* localHostName, HSTRING localServiceName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall JoinMulticastGroup(::IUnknown* host) = 0;
    virtual HRESULT __stdcall GetOutputStreamAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetOutputStreamWithEndpointPairAsync(::IUnknown* endpointPair, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_MessageReceived(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_MessageReceived(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocket2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BindServiceNameAndAdapterAsync(HSTRING localServiceName, ::IUnknown* adapter, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocket3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CancelIOAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall EnableTransferOwnership(abi_t<GUID> taskId) = 0;
    virtual HRESULT __stdcall EnableTransferOwnershipWithConnectedStandbyAction(abi_t<GUID> taskId, abi_t<Windows::Networking::Sockets::SocketActivityConnectedStandbyAction> connectedStandbyAction) = 0;
    virtual HRESULT __stdcall TransferOwnership(HSTRING socketId) = 0;
    virtual HRESULT __stdcall TransferOwnershipWithContext(HSTRING socketId, ::IUnknown* data) = 0;
    virtual HRESULT __stdcall TransferOwnershipWithContextAndKeepAliveTime(HSTRING socketId, ::IUnknown* data, abi_t<Windows::Foundation::TimeSpan> keepAliveTime) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocketControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QualityOfService(abi_t<Windows::Networking::Sockets::SocketQualityOfService>* value) = 0;
    virtual HRESULT __stdcall put_QualityOfService(abi_t<Windows::Networking::Sockets::SocketQualityOfService> value) = 0;
    virtual HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocketControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InboundBufferSizeInBytes(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_InboundBufferSizeInBytes(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DontFragment(bool* value) = 0;
    virtual HRESULT __stdcall put_DontFragment(bool value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocketControl3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MulticastOnly(bool* value) = 0;
    virtual HRESULT __stdcall put_MulticastOnly(bool value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocketInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocalAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalPort(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemoteAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemotePort(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemotePort(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LocalAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDataReader(::IUnknown** dataReader) = 0;
    virtual HRESULT __stdcall GetDataStream(::IUnknown** inputStream) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IDatagramSocketStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetEndpointPairsAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetEndpointPairsWithSortOptionsAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, abi_t<Windows::Networking::HostNameSortOptions> sortOptions, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IMessageWebSocket>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Control(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Information(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_MessageReceived(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_MessageReceived(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IMessageWebSocket2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ServerCustomValidationRequested(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_ServerCustomValidationRequested(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IMessageWebSocketControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxMessageSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxMessageSize(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MessageType(abi_t<Windows::Networking::Sockets::SocketMessageType>* value) = 0;
    virtual HRESULT __stdcall put_MessageType(abi_t<Windows::Networking::Sockets::SocketMessageType> value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MessageType(abi_t<Windows::Networking::Sockets::SocketMessageType>* value) = 0;
    virtual HRESULT __stdcall GetDataReader(::IUnknown** dataReader) = 0;
    virtual HRESULT __stdcall GetDataStream(::IUnknown** inputStream) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::ISocketActivityContext>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::ISocketActivityContextFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* data, ::IUnknown** context) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::ISocketActivityInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SocketKind(abi_t<Windows::Networking::Sockets::SocketActivityKind>* value) = 0;
    virtual HRESULT __stdcall get_Context(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DatagramSocket(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StreamSocket(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StreamSocketListener(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::ISocketActivityInformationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllSockets(::IUnknown** sockets) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::ISocketActivityTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reason(abi_t<Windows::Networking::Sockets::SocketActivityTriggerReason>* value) = 0;
    virtual HRESULT __stdcall get_SocketInformation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::ISocketErrorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStatus(int32_t hresult, abi_t<Windows::Networking::Sockets::SocketErrorStatus>* status) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocket>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Control(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Information(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InputStream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OutputStream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ConnectWithEndpointPairAsync(::IUnknown* endpointPair, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ConnectAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ConnectWithEndpointPairAndProtectionLevelAsync(::IUnknown* endpointPair, abi_t<Windows::Networking::Sockets::SocketProtectionLevel> protectionLevel, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ConnectWithProtectionLevelAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, abi_t<Windows::Networking::Sockets::SocketProtectionLevel> protectionLevel, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpgradeToSslAsync(abi_t<Windows::Networking::Sockets::SocketProtectionLevel> protectionLevel, ::IUnknown* validationHostName, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocket2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ConnectWithProtectionLevelAndAdapterAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, abi_t<Windows::Networking::Sockets::SocketProtectionLevel> protectionLevel, ::IUnknown* adapter, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocket3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CancelIOAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall EnableTransferOwnership(abi_t<GUID> taskId) = 0;
    virtual HRESULT __stdcall EnableTransferOwnershipWithConnectedStandbyAction(abi_t<GUID> taskId, abi_t<Windows::Networking::Sockets::SocketActivityConnectedStandbyAction> connectedStandbyAction) = 0;
    virtual HRESULT __stdcall TransferOwnership(HSTRING socketId) = 0;
    virtual HRESULT __stdcall TransferOwnershipWithContext(HSTRING socketId, ::IUnknown* data) = 0;
    virtual HRESULT __stdcall TransferOwnershipWithContextAndKeepAliveTime(HSTRING socketId, ::IUnknown* data, abi_t<Windows::Foundation::TimeSpan> keepAliveTime) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NoDelay(bool* value) = 0;
    virtual HRESULT __stdcall put_NoDelay(bool value) = 0;
    virtual HRESULT __stdcall get_KeepAlive(bool* value) = 0;
    virtual HRESULT __stdcall put_KeepAlive(bool value) = 0;
    virtual HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) = 0;
    virtual HRESULT __stdcall get_QualityOfService(abi_t<Windows::Networking::Sockets::SocketQualityOfService>* value) = 0;
    virtual HRESULT __stdcall put_QualityOfService(abi_t<Windows::Networking::Sockets::SocketQualityOfService> value) = 0;
    virtual HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IgnorableServerCertificateErrors(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketControl3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SerializeConnectionAttempts(bool* value) = 0;
    virtual HRESULT __stdcall put_SerializeConnectionAttempts(bool value) = 0;
    virtual HRESULT __stdcall get_ClientCertificate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ClientCertificate(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocalAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalPort(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemoteHostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemoteAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemoteServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemotePort(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RoundTripTimeStatistics(abi_t<Windows::Networking::Sockets::RoundTripTimeStatistics>* value) = 0;
    virtual HRESULT __stdcall get_BandwidthStatistics(abi_t<Windows::Networking::Sockets::BandwidthStatistics>* value) = 0;
    virtual HRESULT __stdcall get_ProtectionLevel(abi_t<Windows::Networking::Sockets::SocketProtectionLevel>* value) = 0;
    virtual HRESULT __stdcall get_SessionKey(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketInformation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerCertificateErrorSeverity(abi_t<Windows::Networking::Sockets::SocketSslErrorSeverity>* value) = 0;
    virtual HRESULT __stdcall get_ServerCertificateErrors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServerCertificate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServerIntermediateCertificates(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketListener>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Control(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Information(::IUnknown** value) = 0;
    virtual HRESULT __stdcall BindServiceNameAsync(HSTRING localServiceName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall BindEndpointAsync(::IUnknown* localHostName, HSTRING localServiceName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_ConnectionReceived(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_ConnectionReceived(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketListener2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BindServiceNameWithProtectionLevelAsync(HSTRING localServiceName, abi_t<Windows::Networking::Sockets::SocketProtectionLevel> protectionLevel, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall BindServiceNameWithProtectionLevelAndAdapterAsync(HSTRING localServiceName, abi_t<Windows::Networking::Sockets::SocketProtectionLevel> protectionLevel, ::IUnknown* adapter, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketListener3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CancelIOAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall EnableTransferOwnership(abi_t<GUID> taskId) = 0;
    virtual HRESULT __stdcall EnableTransferOwnershipWithConnectedStandbyAction(abi_t<GUID> taskId, abi_t<Windows::Networking::Sockets::SocketActivityConnectedStandbyAction> connectedStandbyAction) = 0;
    virtual HRESULT __stdcall TransferOwnership(HSTRING socketId) = 0;
    virtual HRESULT __stdcall TransferOwnershipWithContext(HSTRING socketId, ::IUnknown* data) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Socket(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketListenerControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QualityOfService(abi_t<Windows::Networking::Sockets::SocketQualityOfService>* value) = 0;
    virtual HRESULT __stdcall put_QualityOfService(abi_t<Windows::Networking::Sockets::SocketQualityOfService> value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketListenerControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NoDelay(bool* value) = 0;
    virtual HRESULT __stdcall put_NoDelay(bool value) = 0;
    virtual HRESULT __stdcall get_KeepAlive(bool* value) = 0;
    virtual HRESULT __stdcall put_KeepAlive(bool value) = 0;
    virtual HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) = 0;
    virtual HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketListenerInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocalPort(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamSocketStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetEndpointPairsAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetEndpointPairsWithSortOptionsAsync(::IUnknown* remoteHostName, HSTRING remoteServiceName, abi_t<Windows::Networking::HostNameSortOptions> sortOptions, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamWebSocket>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Control(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Information(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InputStream(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamWebSocket2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ServerCustomValidationRequested(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_ServerCustomValidationRequested(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IStreamWebSocketControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NoDelay(bool* value) = 0;
    virtual HRESULT __stdcall put_NoDelay(bool value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IWebSocket>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OutputStream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ConnectAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetRequestHeader(HSTRING headerName, HSTRING headerValue) = 0;
    virtual HRESULT __stdcall add_Closed(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Closed(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall CloseWithStatus(uint16_t code, HSTRING reason) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IWebSocketClosedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Code(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Reason(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IWebSocketControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ServerCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ServerCredential(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ProxyCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ProxyCredential(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SupportedProtocols(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IWebSocketControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IgnorableServerCertificateErrors(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IWebSocketErrorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStatus(int32_t hresult, abi_t<Windows::Web::WebErrorStatus>* status) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IWebSocketInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocalAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BandwidthStatistics(abi_t<Windows::Networking::Sockets::BandwidthStatistics>* value) = 0;
    virtual HRESULT __stdcall get_Protocol(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IWebSocketInformation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerCertificate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServerCertificateErrorSeverity(abi_t<Windows::Networking::Sockets::SocketSslErrorSeverity>* value) = 0;
    virtual HRESULT __stdcall get_ServerCertificateErrors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServerIntermediateCertificates(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerCertificate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServerCertificateErrorSeverity(abi_t<Windows::Networking::Sockets::SocketSslErrorSeverity>* value) = 0;
    virtual HRESULT __stdcall get_ServerCertificateErrors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServerIntermediateCertificates(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Reject() = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

}
