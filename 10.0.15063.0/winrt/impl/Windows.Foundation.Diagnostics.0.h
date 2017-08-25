// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFolder;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Diagnostics {

enum class CausalityRelation
{
    AssignDelegate = 0,
    Join = 1,
    Choice = 2,
    Cancel = 3,
    Error = 4,
};

enum class CausalitySource
{
    Application = 0,
    Library = 1,
    System = 2,
};

enum class CausalitySynchronousWork
{
    CompletionNotification = 0,
    ProgressNotification = 1,
    Execution = 2,
};

enum class CausalityTraceLevel
{
    Required = 0,
    Important = 1,
    Verbose = 2,
};

enum class ErrorOptions : unsigned
{
    None = 0x0,
    SuppressExceptions = 0x1,
    ForceExceptions = 0x2,
    UseSetErrorInfo = 0x4,
    SuppressSetErrorInfo = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(ErrorOptions)

enum class LoggingFieldFormat
{
    Default = 0,
    Hidden = 1,
    String = 2,
    Boolean = 3,
    Hexadecimal = 4,
    ProcessId = 5,
    ThreadId = 6,
    Port = 7,
    Ipv4Address = 8,
    Ipv6Address = 9,
    SocketAddress = 10,
    Xml = 11,
    Json = 12,
    Win32Error = 13,
    NTStatus = 14,
    HResult = 15,
    FileTime = 16,
    Signed = 17,
    Unsigned = 18,
};

enum class LoggingLevel
{
    Verbose = 0,
    Information = 1,
    Warning = 2,
    Error = 3,
    Critical = 4,
};

enum class LoggingOpcode
{
    Info = 0,
    Start = 1,
    Stop = 2,
    Reply = 6,
    Resume = 7,
    Suspend = 8,
    Send = 9,
};

struct IAsyncCausalityTracerStatics;
struct IErrorDetails;
struct IErrorDetailsStatics;
struct IErrorReportingSettings;
struct IFileLoggingSession;
struct IFileLoggingSessionFactory;
struct ILogFileGeneratedEventArgs;
struct ILoggingActivity;
struct ILoggingActivity2;
struct ILoggingActivityFactory;
struct ILoggingChannel;
struct ILoggingChannel2;
struct ILoggingChannelFactory;
struct ILoggingChannelFactory2;
struct ILoggingChannelOptions;
struct ILoggingChannelOptionsFactory;
struct ILoggingFields;
struct ILoggingOptions;
struct ILoggingOptionsFactory;
struct ILoggingSession;
struct ILoggingSessionFactory;
struct ILoggingTarget;
struct ITracingStatusChangedEventArgs;
struct AsyncCausalityTracer;
struct ErrorDetails;
struct FileLoggingSession;
struct LogFileGeneratedEventArgs;
struct LoggingActivity;
struct LoggingChannel;
struct LoggingChannelOptions;
struct LoggingFields;
struct LoggingOptions;
struct LoggingSession;
struct RuntimeBrokerErrorSettings;
struct TracingStatusChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IErrorDetails>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IFileLoggingSession>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivity>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivity2>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannel>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannel2>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingFields>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingOptions>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingSession>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingTarget>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::AsyncCausalityTracer>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::ErrorDetails>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::FileLoggingSession>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingActivity>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingChannel>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingChannelOptions>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingFields>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingOptions>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingSession>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::CausalityRelation>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::CausalitySource>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::CausalitySynchronousWork>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::CausalityTraceLevel>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::ErrorOptions>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingFieldFormat>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingLevel>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingOpcode>{ using type = enum_category; };
template <> struct name<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics" }; };
template <> struct name<Windows::Foundation::Diagnostics::IErrorDetails>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IErrorDetails" }; };
template <> struct name<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IErrorDetailsStatics" }; };
template <> struct name<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IErrorReportingSettings" }; };
template <> struct name<Windows::Foundation::Diagnostics::IFileLoggingSession>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IFileLoggingSession" }; };
template <> struct name<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IFileLoggingSessionFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingActivity>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingActivity" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingActivity2>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingActivity2" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingActivityFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannel>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannel" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannel2>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannel2" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannelFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannelFactory2" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannelOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingFields>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingFields" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingOptionsFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingSession>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingSession" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingSessionFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingTarget>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingTarget" }; };
template <> struct name<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs" }; };
template <> struct name<Windows::Foundation::Diagnostics::AsyncCausalityTracer>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.AsyncCausalityTracer" }; };
template <> struct name<Windows::Foundation::Diagnostics::ErrorDetails>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ErrorDetails" }; };
template <> struct name<Windows::Foundation::Diagnostics::FileLoggingSession>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.FileLoggingSession" }; };
template <> struct name<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingActivity>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingActivity" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingChannel>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingChannel" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingChannelOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingChannelOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingFields>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingFields" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingSession>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingSession" }; };
template <> struct name<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings" }; };
template <> struct name<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs" }; };
template <> struct name<Windows::Foundation::Diagnostics::CausalityRelation>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.CausalityRelation" }; };
template <> struct name<Windows::Foundation::Diagnostics::CausalitySource>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.CausalitySource" }; };
template <> struct name<Windows::Foundation::Diagnostics::CausalitySynchronousWork>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.CausalitySynchronousWork" }; };
template <> struct name<Windows::Foundation::Diagnostics::CausalityTraceLevel>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.CausalityTraceLevel" }; };
template <> struct name<Windows::Foundation::Diagnostics::ErrorOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ErrorOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingFieldFormat>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingFieldFormat" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingLevel>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingLevel" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingOpcode>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingOpcode" }; };
template <> struct guid<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ static constexpr GUID value{ 0x50850B26,0x267E,0x451B,{ 0xA8,0x90,0xAB,0x6A,0x37,0x02,0x45,0xEE } }; };
template <> struct guid<Windows::Foundation::Diagnostics::IErrorDetails>{ static constexpr GUID value{ 0x378CBB01,0x2CC9,0x428F,{ 0x8C,0x55,0x2C,0x99,0x0D,0x46,0x3E,0x8F } }; };
template <> struct guid<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ static constexpr GUID value{ 0xB7703750,0x0B1D,0x46C8,{ 0xAA,0x0E,0x4B,0x81,0x78,0xE4,0xFC,0xE9 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ static constexpr GUID value{ 0x16369792,0xB03E,0x4BA1,{ 0x8B,0xB8,0xD2,0x8F,0x4A,0xB4,0xD2,0xC0 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::IFileLoggingSession>{ static constexpr GUID value{ 0x24C74216,0xFED2,0x404C,{ 0x89,0x5F,0x1F,0x96,0x99,0xCB,0x02,0xF7 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ static constexpr GUID value{ 0xEEA08DCE,0x8447,0x4DAA,{ 0x91,0x33,0x12,0xEB,0x46,0xF6,0x97,0xD4 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ static constexpr GUID value{ 0x269E976F,0x0D38,0x4C1A,{ 0xB5,0x3F,0xB3,0x95,0xD8,0x81,0xDF,0x84 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingActivity>{ static constexpr GUID value{ 0xBC032941,0xB766,0x4CB5,{ 0x98,0x48,0x97,0xAC,0x6B,0xA6,0xD6,0x0C } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingActivity2>{ static constexpr GUID value{ 0x26C29808,0x6322,0x456A,{ 0xAF,0x82,0x80,0xC8,0x64,0x2F,0x17,0x8B } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ static constexpr GUID value{ 0x6B33B483,0xE10A,0x4C58,{ 0x97,0xD5,0x10,0xFB,0x45,0x10,0x74,0xFB } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingChannel>{ static constexpr GUID value{ 0xE9A50343,0x11D7,0x4F01,{ 0xB5,0xCA,0xCF,0x49,0x52,0x78,0xC0,0xA8 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingChannel2>{ static constexpr GUID value{ 0x9F4C3CF3,0x0BAC,0x45A5,{ 0x9E,0x33,0xBA,0xF3,0xF3,0xA2,0x46,0xA5 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ static constexpr GUID value{ 0x4EDC5B9C,0xAF80,0x4A9B,{ 0xB0,0xDC,0x39,0x8F,0x9A,0xE5,0x20,0x7B } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ static constexpr GUID value{ 0x4C6EF5DD,0x3B27,0x4DC9,{ 0x99,0xF0,0x29,0x9C,0x6E,0x46,0x03,0xA1 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ static constexpr GUID value{ 0xC3E847FF,0x0EBB,0x4A53,{ 0x8C,0x54,0xDE,0xC2,0x49,0x26,0xCB,0x2C } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ static constexpr GUID value{ 0xA93151DA,0x7FAF,0x4191,{ 0x87,0x55,0x5E,0x86,0xDC,0x65,0xD8,0x96 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingFields>{ static constexpr GUID value{ 0xD7F6B7AF,0x762D,0x4579,{ 0x83,0xBD,0x52,0xC2,0x3B,0xC3,0x33,0xBC } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingOptions>{ static constexpr GUID value{ 0x90BC7850,0x0192,0x4F5D,{ 0xAC,0x26,0x00,0x6A,0xDA,0xCA,0x12,0xD8 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ static constexpr GUID value{ 0xD713C6CB,0x98AB,0x464B,{ 0x9F,0x22,0xA3,0x26,0x84,0x78,0x36,0x8A } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingSession>{ static constexpr GUID value{ 0x6221F306,0x9380,0x4AD7,{ 0xBA,0xF5,0x41,0xEA,0x93,0x10,0xD7,0x68 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ static constexpr GUID value{ 0x4E937EE5,0x58FD,0x45E0,{ 0x8C,0x2F,0xA1,0x32,0xEF,0xF9,0x5C,0x1E } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ILoggingTarget>{ static constexpr GUID value{ 0x65F16C35,0xE388,0x4E26,{ 0xB1,0x7A,0xF5,0x1C,0xD3,0xA8,0x39,0x16 } }; };
template <> struct guid<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ static constexpr GUID value{ 0x410B7711,0xFF3B,0x477F,{ 0x9C,0x9A,0xD2,0xEF,0xDA,0x30,0x2D,0xC3 } }; };
template <> struct default_interface<Windows::Foundation::Diagnostics::ErrorDetails>{ using type = Windows::Foundation::Diagnostics::IErrorDetails; };
template <> struct default_interface<Windows::Foundation::Diagnostics::FileLoggingSession>{ using type = Windows::Foundation::Diagnostics::IFileLoggingSession; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>{ using type = Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingActivity>{ using type = Windows::Foundation::Diagnostics::ILoggingActivity; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingChannel>{ using type = Windows::Foundation::Diagnostics::ILoggingChannel; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingChannelOptions>{ using type = Windows::Foundation::Diagnostics::ILoggingChannelOptions; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingFields>{ using type = Windows::Foundation::Diagnostics::ILoggingFields; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingOptions>{ using type = Windows::Foundation::Diagnostics::ILoggingOptions; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingSession>{ using type = Windows::Foundation::Diagnostics::ILoggingSession; };
template <> struct default_interface<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>{ using type = Windows::Foundation::Diagnostics::IErrorReportingSettings; };
template <> struct default_interface<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>{ using type = Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics
{
    void TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext) const;
    void TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status) const;
    void TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation) const;
    void TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const;
    void TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const;
    event_token TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const;
    using TracingStatusChanged_revoker = event_revoker<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>;
    TracingStatusChanged_revoker TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const;
    void TracingStatusChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IErrorDetails
{
    hstring Description() const;
    hstring LongDescription() const;
    Windows::Foundation::Uri HelpUri() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IErrorDetails> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorDetails<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IErrorDetailsStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> CreateFromHResultAsync(int32_t errorCode) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IErrorDetailsStatics> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorDetailsStatics<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IErrorReportingSettings
{
    void SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions const& value) const;
    Windows::Foundation::Diagnostics::ErrorOptions GetErrorOptions() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IErrorReportingSettings> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorReportingSettings<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IFileLoggingSession
{
    hstring Name() const;
    void AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    void AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const;
    void RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CloseAndSaveToFileAsync() const;
    event_token LogFileGenerated(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const;
    using LogFileGenerated_revoker = event_revoker<Windows::Foundation::Diagnostics::IFileLoggingSession>;
    LogFileGenerated_revoker LogFileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const;
    void LogFileGenerated(event_token const& token) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IFileLoggingSession> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory
{
    Windows::Foundation::Diagnostics::FileLoggingSession Create(param::hstring const& name) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs
{
    Windows::Storage::StorageFile File() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingActivity
{
    hstring Name() const;
    GUID Id() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivity> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivity<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingActivity2
{
    Windows::Foundation::Diagnostics::LoggingChannel Channel() const;
    void StopActivity(param::hstring const& stopEventName) const;
    void StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
    void StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivity2> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory
{
    Windows::Foundation::Diagnostics::LoggingActivity CreateLoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    Windows::Foundation::Diagnostics::LoggingActivity CreateLoggingActivityWithLevel(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivityFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannel
{
    hstring Name() const;
    bool Enabled() const;
    Windows::Foundation::Diagnostics::LoggingLevel Level() const;
    void LogMessage(param::hstring const& eventString) const;
    void LogMessage(param::hstring const& eventString, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    void LogValuePair(param::hstring const& value1, int32_t value2) const;
    void LogValuePair(param::hstring const& value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    event_token LoggingEnabled(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const;
    using LoggingEnabled_revoker = event_revoker<Windows::Foundation::Diagnostics::ILoggingChannel>;
    LoggingEnabled_revoker LoggingEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const;
    void LoggingEnabled(event_token const& token) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannel> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannel2
{
    GUID Id() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannel2> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannel2<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory
{
    [[deprecated("This constructor creates a LoggingChannel in Windows 8.1 compatibility mode. Prefer the two-parameter constructor.")]] Windows::Foundation::Diagnostics::LoggingChannel Create(param::hstring const& name) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2
{
    Windows::Foundation::Diagnostics::LoggingChannel CreateWithOptions(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options) const;
    Windows::Foundation::Diagnostics::LoggingChannel CreateWithOptionsAndId(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, GUID const& id) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelFactory2> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions
{
    GUID Group() const;
    void Group(GUID const& value) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelOptions> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory
{
    Windows::Foundation::Diagnostics::LoggingChannelOptions Create(GUID const& group) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingFields
{
    void Clear() const;
    void BeginStruct(param::hstring const& name) const;
    void BeginStruct(param::hstring const& name, int32_t tags) const;
    void EndStruct() const;
    void AddEmpty(param::hstring const& name) const;
    void AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt8(param::hstring const& name, uint8_t value) const;
    void AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value) const;
    void AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt16(param::hstring const& name, int16_t value) const;
    void AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt16Array(param::hstring const& name, array_view<int16_t const> value) const;
    void AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt16(param::hstring const& name, uint16_t value) const;
    void AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value) const;
    void AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt32(param::hstring const& name, int32_t value) const;
    void AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt32Array(param::hstring const& name, array_view<int32_t const> value) const;
    void AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt32(param::hstring const& name, uint32_t value) const;
    void AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value) const;
    void AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt64(param::hstring const& name, int64_t value) const;
    void AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt64Array(param::hstring const& name, array_view<int64_t const> value) const;
    void AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt64(param::hstring const& name, uint64_t value) const;
    void AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value) const;
    void AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddSingle(param::hstring const& name, float value) const;
    void AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddSingleArray(param::hstring const& name, array_view<float const> value) const;
    void AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddDouble(param::hstring const& name, double value) const;
    void AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddDoubleArray(param::hstring const& name, array_view<double const> value) const;
    void AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddChar16(param::hstring const& name, char16_t value) const;
    void AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddChar16Array(param::hstring const& name, array_view<char16_t const> value) const;
    void AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddBoolean(param::hstring const& name, bool value) const;
    void AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddBooleanArray(param::hstring const& name, array_view<bool const> value) const;
    void AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddString(param::hstring const& name, param::hstring const& value) const;
    void AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddStringArray(param::hstring const& name, array_view<hstring const> value) const;
    void AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddGuid(param::hstring const& name, GUID const& value) const;
    void AddGuid(param::hstring const& name, GUID const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddGuid(param::hstring const& name, GUID const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddGuidArray(param::hstring const& name, array_view<GUID const> value) const;
    void AddGuidArray(param::hstring const& name, array_view<GUID const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddGuidArray(param::hstring const& name, array_view<GUID const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value) const;
    void AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value) const;
    void AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value) const;
    void AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value) const;
    void AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddPoint(param::hstring const& name, Windows::Foundation::Point const& value) const;
    void AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value) const;
    void AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddSize(param::hstring const& name, Windows::Foundation::Size const& value) const;
    void AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value) const;
    void AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddRect(param::hstring const& name, Windows::Foundation::Rect const& value) const;
    void AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value) const;
    void AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingFields> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingFields<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingOptions
{
    int64_t Keywords() const;
    void Keywords(int64_t value) const;
    int32_t Tags() const;
    void Tags(int32_t value) const;
    int16_t Task() const;
    void Task(int16_t value) const;
    Windows::Foundation::Diagnostics::LoggingOpcode Opcode() const;
    void Opcode(Windows::Foundation::Diagnostics::LoggingOpcode const& value) const;
    GUID ActivityId() const;
    void ActivityId(GUID const& value) const;
    GUID RelatedActivityId() const;
    void RelatedActivityId(GUID const& value) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingOptions> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingOptionsFactory
{
    Windows::Foundation::Diagnostics::LoggingOptions CreateWithKeywords(int64_t keywords) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingOptionsFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingOptionsFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingSession
{
    hstring Name() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> SaveToFileAsync(Windows::Storage::IStorageFolder const& folder, param::hstring const& fileName) const;
    void AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    void AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const;
    void RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingSession> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingSession<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingSessionFactory
{
    Windows::Foundation::Diagnostics::LoggingSession Create(param::hstring const& name) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingSessionFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingSessionFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingTarget
{
    bool IsEnabled() const;
    bool IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    bool IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level, int64_t keywords) const;
    void LogEvent(param::hstring const& eventName) const;
    void LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
    void LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    void LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(param::hstring const& startEventName) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingTarget> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs
{
    bool Enabled() const;
    Windows::Foundation::Diagnostics::CausalityTraceLevel TraceLevel() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs<D>; };

template <> struct abi<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TraceOperationCreation(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<GUID> platformId, uint64_t operationId, HSTRING operationName, uint64_t relatedContext) = 0;
    virtual HRESULT __stdcall TraceOperationCompletion(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<GUID> platformId, uint64_t operationId, abi_t<Windows::Foundation::AsyncStatus> status) = 0;
    virtual HRESULT __stdcall TraceOperationRelation(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<GUID> platformId, uint64_t operationId, abi_t<Windows::Foundation::Diagnostics::CausalityRelation> relation) = 0;
    virtual HRESULT __stdcall TraceSynchronousWorkStart(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<GUID> platformId, uint64_t operationId, abi_t<Windows::Foundation::Diagnostics::CausalitySynchronousWork> work) = 0;
    virtual HRESULT __stdcall TraceSynchronousWorkCompletion(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<Windows::Foundation::Diagnostics::CausalitySynchronousWork> work) = 0;
    virtual HRESULT __stdcall add_TracingStatusChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_TracingStatusChanged(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IErrorDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LongDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HelpUri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromHResultAsync(int32_t errorCode, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetErrorOptions(abi_t<Windows::Foundation::Diagnostics::ErrorOptions> value) = 0;
    virtual HRESULT __stdcall GetErrorOptions(abi_t<Windows::Foundation::Diagnostics::ErrorOptions>* value) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IFileLoggingSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall AddLoggingChannel(::IUnknown* loggingChannel) = 0;
    virtual HRESULT __stdcall AddLoggingChannelWithLevel(::IUnknown* loggingChannel, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> maxLevel) = 0;
    virtual HRESULT __stdcall RemoveLoggingChannel(::IUnknown* loggingChannel) = 0;
    virtual HRESULT __stdcall CloseAndSaveToFileAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_LogFileGenerated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LogFileGenerated(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING name, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivity>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Id(abi_t<GUID>* value) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivity2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Channel(::IUnknown** value) = 0;
    virtual HRESULT __stdcall StopActivity(HSTRING stopEventName) = 0;
    virtual HRESULT __stdcall StopActivityWithFields(HSTRING stopEventName, ::IUnknown* fields) = 0;
    virtual HRESULT __stdcall StopActivityWithFieldsAndOptions(HSTRING stopEventName, ::IUnknown* fields, ::IUnknown* options) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateLoggingActivity(HSTRING activityName, ::IUnknown* loggingChannel, ::IUnknown** loggingActivity) = 0;
    virtual HRESULT __stdcall CreateLoggingActivityWithLevel(HSTRING activityName, ::IUnknown* loggingChannel, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, ::IUnknown** loggingActivity) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall get_Level(abi_t<Windows::Foundation::Diagnostics::LoggingLevel>* value) = 0;
    virtual HRESULT __stdcall LogMessage(HSTRING eventString) = 0;
    virtual HRESULT __stdcall LogMessageWithLevel(HSTRING eventString, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level) = 0;
    virtual HRESULT __stdcall LogValuePair(HSTRING value1, int32_t value2) = 0;
    virtual HRESULT __stdcall LogValuePairWithLevel(HSTRING value1, int32_t value2, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level) = 0;
    virtual HRESULT __stdcall add_LoggingEnabled(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LoggingEnabled(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannel2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(abi_t<GUID>* value) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING name, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithOptions(HSTRING name, ::IUnknown* options, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithOptionsAndId(HSTRING name, ::IUnknown* options, abi_t<GUID> id, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Group(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_Group(abi_t<GUID> value) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<GUID> group, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingFields>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Clear() = 0;
    virtual HRESULT __stdcall BeginStruct(HSTRING name) = 0;
    virtual HRESULT __stdcall BeginStructWithTags(HSTRING name, int32_t tags) = 0;
    virtual HRESULT __stdcall EndStruct() = 0;
    virtual HRESULT __stdcall AddEmpty(HSTRING name) = 0;
    virtual HRESULT __stdcall AddEmptyWithFormat(HSTRING name, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddEmptyWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddUInt8(HSTRING name, uint8_t value) = 0;
    virtual HRESULT __stdcall AddUInt8WithFormat(HSTRING name, uint8_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddUInt8WithFormatAndTags(HSTRING name, uint8_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddUInt8Array(HSTRING name, uint32_t __valueSize, uint8_t* value) = 0;
    virtual HRESULT __stdcall AddUInt8ArrayWithFormat(HSTRING name, uint32_t __valueSize, uint8_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddUInt8ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, uint8_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddInt16(HSTRING name, int16_t value) = 0;
    virtual HRESULT __stdcall AddInt16WithFormat(HSTRING name, int16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddInt16WithFormatAndTags(HSTRING name, int16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddInt16Array(HSTRING name, uint32_t __valueSize, int16_t* value) = 0;
    virtual HRESULT __stdcall AddInt16ArrayWithFormat(HSTRING name, uint32_t __valueSize, int16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddInt16ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, int16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddUInt16(HSTRING name, uint16_t value) = 0;
    virtual HRESULT __stdcall AddUInt16WithFormat(HSTRING name, uint16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddUInt16WithFormatAndTags(HSTRING name, uint16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddUInt16Array(HSTRING name, uint32_t __valueSize, uint16_t* value) = 0;
    virtual HRESULT __stdcall AddUInt16ArrayWithFormat(HSTRING name, uint32_t __valueSize, uint16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddUInt16ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, uint16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddInt32(HSTRING name, int32_t value) = 0;
    virtual HRESULT __stdcall AddInt32WithFormat(HSTRING name, int32_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddInt32WithFormatAndTags(HSTRING name, int32_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddInt32Array(HSTRING name, uint32_t __valueSize, int32_t* value) = 0;
    virtual HRESULT __stdcall AddInt32ArrayWithFormat(HSTRING name, uint32_t __valueSize, int32_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddInt32ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, int32_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddUInt32(HSTRING name, uint32_t value) = 0;
    virtual HRESULT __stdcall AddUInt32WithFormat(HSTRING name, uint32_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddUInt32WithFormatAndTags(HSTRING name, uint32_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddUInt32Array(HSTRING name, uint32_t __valueSize, uint32_t* value) = 0;
    virtual HRESULT __stdcall AddUInt32ArrayWithFormat(HSTRING name, uint32_t __valueSize, uint32_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddUInt32ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, uint32_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddInt64(HSTRING name, int64_t value) = 0;
    virtual HRESULT __stdcall AddInt64WithFormat(HSTRING name, int64_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddInt64WithFormatAndTags(HSTRING name, int64_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddInt64Array(HSTRING name, uint32_t __valueSize, int64_t* value) = 0;
    virtual HRESULT __stdcall AddInt64ArrayWithFormat(HSTRING name, uint32_t __valueSize, int64_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddInt64ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, int64_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddUInt64(HSTRING name, uint64_t value) = 0;
    virtual HRESULT __stdcall AddUInt64WithFormat(HSTRING name, uint64_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddUInt64WithFormatAndTags(HSTRING name, uint64_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddUInt64Array(HSTRING name, uint32_t __valueSize, uint64_t* value) = 0;
    virtual HRESULT __stdcall AddUInt64ArrayWithFormat(HSTRING name, uint32_t __valueSize, uint64_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddUInt64ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, uint64_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddSingle(HSTRING name, float value) = 0;
    virtual HRESULT __stdcall AddSingleWithFormat(HSTRING name, float value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddSingleWithFormatAndTags(HSTRING name, float value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddSingleArray(HSTRING name, uint32_t __valueSize, float* value) = 0;
    virtual HRESULT __stdcall AddSingleArrayWithFormat(HSTRING name, uint32_t __valueSize, float* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddSingleArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, float* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddDouble(HSTRING name, double value) = 0;
    virtual HRESULT __stdcall AddDoubleWithFormat(HSTRING name, double value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddDoubleWithFormatAndTags(HSTRING name, double value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddDoubleArray(HSTRING name, uint32_t __valueSize, double* value) = 0;
    virtual HRESULT __stdcall AddDoubleArrayWithFormat(HSTRING name, uint32_t __valueSize, double* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddDoubleArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, double* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddChar16(HSTRING name, char16_t value) = 0;
    virtual HRESULT __stdcall AddChar16WithFormat(HSTRING name, char16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddChar16WithFormatAndTags(HSTRING name, char16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddChar16Array(HSTRING name, uint32_t __valueSize, char16_t* value) = 0;
    virtual HRESULT __stdcall AddChar16ArrayWithFormat(HSTRING name, uint32_t __valueSize, char16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddChar16ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, char16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddBoolean(HSTRING name, bool value) = 0;
    virtual HRESULT __stdcall AddBooleanWithFormat(HSTRING name, bool value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddBooleanWithFormatAndTags(HSTRING name, bool value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddBooleanArray(HSTRING name, uint32_t __valueSize, bool* value) = 0;
    virtual HRESULT __stdcall AddBooleanArrayWithFormat(HSTRING name, uint32_t __valueSize, bool* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddBooleanArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, bool* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddString(HSTRING name, HSTRING value) = 0;
    virtual HRESULT __stdcall AddStringWithFormat(HSTRING name, HSTRING value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddStringWithFormatAndTags(HSTRING name, HSTRING value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddStringArray(HSTRING name, uint32_t __valueSize, HSTRING* value) = 0;
    virtual HRESULT __stdcall AddStringArrayWithFormat(HSTRING name, uint32_t __valueSize, HSTRING* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddStringArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, HSTRING* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddGuid(HSTRING name, abi_t<GUID> value) = 0;
    virtual HRESULT __stdcall AddGuidWithFormat(HSTRING name, abi_t<GUID> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddGuidWithFormatAndTags(HSTRING name, abi_t<GUID> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddGuidArray(HSTRING name, uint32_t __valueSize, abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall AddGuidArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<GUID>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddGuidArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<GUID>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddDateTime(HSTRING name, abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall AddDateTimeWithFormat(HSTRING name, abi_t<Windows::Foundation::DateTime> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddDateTimeWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::DateTime> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddDateTimeArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall AddDateTimeArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::DateTime>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddDateTimeArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::DateTime>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddTimeSpan(HSTRING name, abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall AddTimeSpanWithFormat(HSTRING name, abi_t<Windows::Foundation::TimeSpan> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddTimeSpanWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::TimeSpan> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddTimeSpanArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall AddTimeSpanArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::TimeSpan>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddTimeSpanArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::TimeSpan>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddPoint(HSTRING name, abi_t<Windows::Foundation::Point> value) = 0;
    virtual HRESULT __stdcall AddPointWithFormat(HSTRING name, abi_t<Windows::Foundation::Point> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddPointWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::Point> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddPointArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall AddPointArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Point>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddPointArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Point>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddSize(HSTRING name, abi_t<Windows::Foundation::Size> value) = 0;
    virtual HRESULT __stdcall AddSizeWithFormat(HSTRING name, abi_t<Windows::Foundation::Size> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddSizeWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::Size> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddSizeArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall AddSizeArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Size>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddSizeArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Size>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddRect(HSTRING name, abi_t<Windows::Foundation::Rect> value) = 0;
    virtual HRESULT __stdcall AddRectWithFormat(HSTRING name, abi_t<Windows::Foundation::Rect> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddRectWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::Rect> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
    virtual HRESULT __stdcall AddRectArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall AddRectArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Rect>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) = 0;
    virtual HRESULT __stdcall AddRectArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Rect>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Keywords(int64_t* value) = 0;
    virtual HRESULT __stdcall put_Keywords(int64_t value) = 0;
    virtual HRESULT __stdcall get_Tags(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Tags(int32_t value) = 0;
    virtual HRESULT __stdcall get_Task(int16_t* value) = 0;
    virtual HRESULT __stdcall put_Task(int16_t value) = 0;
    virtual HRESULT __stdcall get_Opcode(abi_t<Windows::Foundation::Diagnostics::LoggingOpcode>* value) = 0;
    virtual HRESULT __stdcall put_Opcode(abi_t<Windows::Foundation::Diagnostics::LoggingOpcode> value) = 0;
    virtual HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_ActivityId(abi_t<GUID> value) = 0;
    virtual HRESULT __stdcall get_RelatedActivityId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_RelatedActivityId(abi_t<GUID> value) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithKeywords(int64_t keywords, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall SaveToFileAsync(::IUnknown* folder, HSTRING fileName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AddLoggingChannel(::IUnknown* loggingChannel) = 0;
    virtual HRESULT __stdcall AddLoggingChannelWithLevel(::IUnknown* loggingChannel, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> maxLevel) = 0;
    virtual HRESULT __stdcall RemoveLoggingChannel(::IUnknown* loggingChannel) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING name, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingTarget>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsEnabled(bool* result) = 0;
    virtual HRESULT __stdcall IsEnabledWithLevel(abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, bool* result) = 0;
    virtual HRESULT __stdcall IsEnabledWithLevelAndKeywords(abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, int64_t keywords, bool* result) = 0;
    virtual HRESULT __stdcall LogEvent(HSTRING eventName) = 0;
    virtual HRESULT __stdcall LogEventWithFields(HSTRING eventName, ::IUnknown* fields) = 0;
    virtual HRESULT __stdcall LogEventWithFieldsAndLevel(HSTRING eventName, ::IUnknown* fields, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level) = 0;
    virtual HRESULT __stdcall LogEventWithFieldsAndOptions(HSTRING eventName, ::IUnknown* fields, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, ::IUnknown* options) = 0;
    virtual HRESULT __stdcall StartActivity(HSTRING startEventName, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall StartActivityWithFields(HSTRING startEventName, ::IUnknown* fields, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall StartActivityWithFieldsAndLevel(HSTRING startEventName, ::IUnknown* fields, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall StartActivityWithFieldsAndOptions(HSTRING startEventName, ::IUnknown* fields, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, ::IUnknown* options, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Enabled(bool* enabled) = 0;
    virtual HRESULT __stdcall get_TraceLevel(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel>* value) = 0;
};};

}
