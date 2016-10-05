// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Foundation.Diagnostics.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2bf27008_2eb4_5675_b1cd_e9906cc5ce64
#define WINRT_GENERIC_2bf27008_2eb4_5675_b1cd_e9906cc5ce64
template <> struct __declspec(uuid("2bf27008-2eb4-5675-b1cd-e9906cc5ce64")) __declspec(novtable) EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> : impl_EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_5e52f8ce_aced_5a42_95b4_f674dd84885e
#define WINRT_GENERIC_5e52f8ce_aced_5a42_95b4_f674dd84885e
template <> struct __declspec(uuid("5e52f8ce-aced-5a42-95b4-f674dd84885e")) __declspec(novtable) IAsyncOperation<Windows::Storage::StorageFile> : impl_IAsyncOperation<Windows::Storage::StorageFile> {};
#endif

#ifndef WINRT_GENERIC_9b05106d_77e0_5c24_82b0_9b2dc8f79671
#define WINRT_GENERIC_9b05106d_77e0_5c24_82b0_9b2dc8f79671
template <> struct __declspec(uuid("9b05106d-77e0-5c24-82b0-9b2dc8f79671")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> : impl_IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> {};
#endif

#ifndef WINRT_GENERIC_52c9c2a1_54a3_5ef9_9aff_014e7c454655
#define WINRT_GENERIC_52c9c2a1_54a3_5ef9_9aff_014e7c454655
template <> struct __declspec(uuid("52c9c2a1-54a3-5ef9-9aff-014e7c454655")) __declspec(novtable) TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable> : impl_TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_0c6563b0_9d8b_5b60_994b_dee1174d1efb
#define WINRT_GENERIC_0c6563b0_9d8b_5b60_994b_dee1174d1efb
template <> struct __declspec(uuid("0c6563b0-9d8b-5b60-994b-dee1174d1efb")) __declspec(novtable) TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> : impl_TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_e521c894_2c26_5946_9e61_2b5e188d01ed
#define WINRT_GENERIC_e521c894_2c26_5946_9e61_2b5e188d01ed
template <> struct __declspec(uuid("e521c894-2c26-5946-9e61-2b5e188d01ed")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::StorageFile> : impl_AsyncOperationCompletedHandler<Windows::Storage::StorageFile> {};
#endif

#ifndef WINRT_GENERIC_a6997f9d_7195_5972_8ecd_1c73aa5cb312
#define WINRT_GENERIC_a6997f9d_7195_5972_8ecd_1c73aa5cb312
template <> struct __declspec(uuid("a6997f9d-7195-5972-8ecd-1c73aa5cb312")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Diagnostics::ErrorDetails> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Diagnostics::ErrorDetails> {};
#endif


}

namespace Windows::Foundation::Diagnostics {

template <typename D>
struct WINRT_EBO impl_IAsyncCausalityTracerStatics
{
    void TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, hstring_ref operationName, uint64_t relatedContext) const;
    void TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::AsyncStatus status) const;
    void TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation relation) const;
    void TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) const;
    void TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) const;
    event_token TracingStatusChanged(const Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> & handler) const;
    using TracingStatusChanged_revoker = event_revoker<IAsyncCausalityTracerStatics>;
    TracingStatusChanged_revoker TracingStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> & handler) const;
    void TracingStatusChanged(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_IErrorDetails
{
    hstring Description() const;
    hstring LongDescription() const;
    Windows::Foundation::Uri HelpUri() const;
};

template <typename D>
struct WINRT_EBO impl_IErrorDetailsStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> CreateFromHResultAsync(int32_t errorCode) const;
};

template <typename D>
struct WINRT_EBO impl_IErrorReportingSettings
{
    void SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions value) const;
    Windows::Foundation::Diagnostics::ErrorOptions GetErrorOptions() const;
};

template <typename D>
struct WINRT_EBO impl_IFileLoggingSession
{
    hstring Name() const;
    void AddLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const;
    void AddLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) const;
    void RemoveLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CloseAndSaveToFileAsync() const;
    event_token LogFileGenerated(const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> & handler) const;
    using LogFileGenerated_revoker = event_revoker<IFileLoggingSession>;
    LogFileGenerated_revoker LogFileGenerated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> & handler) const;
    void LogFileGenerated(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IFileLoggingSessionFactory
{
    Windows::Foundation::Diagnostics::FileLoggingSession Create(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_ILogFileGeneratedEventArgs
{
    Windows::Storage::StorageFile File() const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingActivity
{
    hstring Name() const;
    GUID Id() const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingActivity2
{
    Windows::Foundation::Diagnostics::LoggingChannel Channel() const;
    void StopActivity(hstring_ref stopEventName) const;
    void StopActivity(hstring_ref stopEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields) const;
    void StopActivity(hstring_ref stopEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, const Windows::Foundation::Diagnostics::LoggingOptions & options) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingActivityFactory
{
    Windows::Foundation::Diagnostics::LoggingActivity CreateLoggingActivity(hstring_ref activityName, const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const;
    Windows::Foundation::Diagnostics::LoggingActivity CreateLoggingActivityWithLevel(hstring_ref activityName, const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel level) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingChannel
{
    hstring Name() const;
    bool Enabled() const;
    Windows::Foundation::Diagnostics::LoggingLevel Level() const;
    void LogMessage(hstring_ref eventString) const;
    void LogMessage(hstring_ref eventString, Windows::Foundation::Diagnostics::LoggingLevel level) const;
    void LogValuePair(hstring_ref value1, int32_t value2) const;
    void LogValuePair(hstring_ref value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel level) const;
    event_token LoggingEnabled(const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable> & handler) const;
    using LoggingEnabled_revoker = event_revoker<ILoggingChannel>;
    LoggingEnabled_revoker LoggingEnabled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable> & handler) const;
    void LoggingEnabled(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingChannel2
{
    GUID Id() const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingChannelFactory
{
    Windows::Foundation::Diagnostics::LoggingChannel Create(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingChannelFactory2
{
    Windows::Foundation::Diagnostics::LoggingChannel CreateWithOptions(hstring_ref name, const Windows::Foundation::Diagnostics::LoggingChannelOptions & options) const;
    Windows::Foundation::Diagnostics::LoggingChannel CreateWithOptionsAndId(hstring_ref name, const Windows::Foundation::Diagnostics::LoggingChannelOptions & options, GUID id) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingChannelOptions
{
    GUID Group() const;
    void Group(GUID value) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingChannelOptionsFactory
{
    Windows::Foundation::Diagnostics::LoggingChannelOptions Create(GUID group) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingFields
{
    void Clear() const;
    void BeginStruct(hstring_ref name) const;
    void BeginStruct(hstring_ref name, int32_t tags) const;
    void EndStruct() const;
    void AddEmpty(hstring_ref name) const;
    void AddEmpty(hstring_ref name, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddEmpty(hstring_ref name, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddUInt8(hstring_ref name, uint8_t value) const;
    void AddUInt8(hstring_ref name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddUInt8(hstring_ref name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddUInt8Array(hstring_ref name, array_ref<const uint8_t> value) const;
    void AddUInt8Array(hstring_ref name, array_ref<const uint8_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddUInt8Array(hstring_ref name, array_ref<const uint8_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddInt16(hstring_ref name, int16_t value) const;
    void AddInt16(hstring_ref name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddInt16(hstring_ref name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddInt16Array(hstring_ref name, array_ref<const int16_t> value) const;
    void AddInt16Array(hstring_ref name, array_ref<const int16_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddInt16Array(hstring_ref name, array_ref<const int16_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddUInt16(hstring_ref name, uint16_t value) const;
    void AddUInt16(hstring_ref name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddUInt16(hstring_ref name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddUInt16Array(hstring_ref name, array_ref<const uint16_t> value) const;
    void AddUInt16Array(hstring_ref name, array_ref<const uint16_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddUInt16Array(hstring_ref name, array_ref<const uint16_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddInt32(hstring_ref name, int32_t value) const;
    void AddInt32(hstring_ref name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddInt32(hstring_ref name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddInt32Array(hstring_ref name, array_ref<const int32_t> value) const;
    void AddInt32Array(hstring_ref name, array_ref<const int32_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddInt32Array(hstring_ref name, array_ref<const int32_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddUInt32(hstring_ref name, uint32_t value) const;
    void AddUInt32(hstring_ref name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddUInt32(hstring_ref name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddUInt32Array(hstring_ref name, array_ref<const uint32_t> value) const;
    void AddUInt32Array(hstring_ref name, array_ref<const uint32_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddUInt32Array(hstring_ref name, array_ref<const uint32_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddInt64(hstring_ref name, int64_t value) const;
    void AddInt64(hstring_ref name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddInt64(hstring_ref name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddInt64Array(hstring_ref name, array_ref<const int64_t> value) const;
    void AddInt64Array(hstring_ref name, array_ref<const int64_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddInt64Array(hstring_ref name, array_ref<const int64_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddUInt64(hstring_ref name, uint64_t value) const;
    void AddUInt64(hstring_ref name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddUInt64(hstring_ref name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddUInt64Array(hstring_ref name, array_ref<const uint64_t> value) const;
    void AddUInt64Array(hstring_ref name, array_ref<const uint64_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddUInt64Array(hstring_ref name, array_ref<const uint64_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddSingle(hstring_ref name, float value) const;
    void AddSingle(hstring_ref name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddSingle(hstring_ref name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddSingleArray(hstring_ref name, array_ref<const float> value) const;
    void AddSingleArray(hstring_ref name, array_ref<const float> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddSingleArray(hstring_ref name, array_ref<const float> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddDouble(hstring_ref name, double value) const;
    void AddDouble(hstring_ref name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddDouble(hstring_ref name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddDoubleArray(hstring_ref name, array_ref<const double> value) const;
    void AddDoubleArray(hstring_ref name, array_ref<const double> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddDoubleArray(hstring_ref name, array_ref<const double> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddChar16(hstring_ref name, wchar_t value) const;
    void AddChar16(hstring_ref name, wchar_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddChar16(hstring_ref name, wchar_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddChar16Array(hstring_ref name, array_ref<const wchar_t> value) const;
    void AddChar16Array(hstring_ref name, array_ref<const wchar_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddChar16Array(hstring_ref name, array_ref<const wchar_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddBoolean(hstring_ref name, bool value) const;
    void AddBoolean(hstring_ref name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddBoolean(hstring_ref name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddBooleanArray(hstring_ref name, array_ref<const bool> value) const;
    void AddBooleanArray(hstring_ref name, array_ref<const bool> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddBooleanArray(hstring_ref name, array_ref<const bool> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddString(hstring_ref name, hstring_ref value) const;
    void AddString(hstring_ref name, hstring_ref value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddString(hstring_ref name, hstring_ref value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddStringArray(hstring_ref name, array_ref<const hstring> value) const;
    void AddStringArray(hstring_ref name, array_ref<const hstring> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddStringArray(hstring_ref name, array_ref<const hstring> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddGuid(hstring_ref name, GUID value) const;
    void AddGuid(hstring_ref name, GUID value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddGuid(hstring_ref name, GUID value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddGuidArray(hstring_ref name, array_ref<const GUID> value) const;
    void AddGuidArray(hstring_ref name, array_ref<const GUID> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddGuidArray(hstring_ref name, array_ref<const GUID> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddDateTime(hstring_ref name, const Windows::Foundation::DateTime & value) const;
    void AddDateTime(hstring_ref name, const Windows::Foundation::DateTime & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddDateTime(hstring_ref name, const Windows::Foundation::DateTime & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddDateTimeArray(hstring_ref name, array_ref<const Windows::Foundation::DateTime> value) const;
    void AddDateTimeArray(hstring_ref name, array_ref<const Windows::Foundation::DateTime> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddDateTimeArray(hstring_ref name, array_ref<const Windows::Foundation::DateTime> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddTimeSpan(hstring_ref name, const Windows::Foundation::TimeSpan & value) const;
    void AddTimeSpan(hstring_ref name, const Windows::Foundation::TimeSpan & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddTimeSpan(hstring_ref name, const Windows::Foundation::TimeSpan & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddTimeSpanArray(hstring_ref name, array_ref<const Windows::Foundation::TimeSpan> value) const;
    void AddTimeSpanArray(hstring_ref name, array_ref<const Windows::Foundation::TimeSpan> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddTimeSpanArray(hstring_ref name, array_ref<const Windows::Foundation::TimeSpan> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddPoint(hstring_ref name, const Windows::Foundation::Point & value) const;
    void AddPoint(hstring_ref name, const Windows::Foundation::Point & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddPoint(hstring_ref name, const Windows::Foundation::Point & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddPointArray(hstring_ref name, array_ref<const Windows::Foundation::Point> value) const;
    void AddPointArray(hstring_ref name, array_ref<const Windows::Foundation::Point> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddPointArray(hstring_ref name, array_ref<const Windows::Foundation::Point> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddSize(hstring_ref name, const Windows::Foundation::Size & value) const;
    void AddSize(hstring_ref name, const Windows::Foundation::Size & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddSize(hstring_ref name, const Windows::Foundation::Size & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddSizeArray(hstring_ref name, array_ref<const Windows::Foundation::Size> value) const;
    void AddSizeArray(hstring_ref name, array_ref<const Windows::Foundation::Size> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddSizeArray(hstring_ref name, array_ref<const Windows::Foundation::Size> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddRect(hstring_ref name, const Windows::Foundation::Rect & value) const;
    void AddRect(hstring_ref name, const Windows::Foundation::Rect & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddRect(hstring_ref name, const Windows::Foundation::Rect & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
    void AddRectArray(hstring_ref name, array_ref<const Windows::Foundation::Rect> value) const;
    void AddRectArray(hstring_ref name, array_ref<const Windows::Foundation::Rect> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const;
    void AddRectArray(hstring_ref name, array_ref<const Windows::Foundation::Rect> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingOptions
{
    int64_t Keywords() const;
    void Keywords(int64_t value) const;
    int32_t Tags() const;
    void Tags(int32_t value) const;
    int16_t Task() const;
    void Task(int16_t value) const;
    Windows::Foundation::Diagnostics::LoggingOpcode Opcode() const;
    void Opcode(Windows::Foundation::Diagnostics::LoggingOpcode value) const;
    GUID ActivityId() const;
    void ActivityId(GUID value) const;
    GUID RelatedActivityId() const;
    void RelatedActivityId(GUID value) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingOptionsFactory
{
    Windows::Foundation::Diagnostics::LoggingOptions CreateWithKeywords(int64_t keywords) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingSession
{
    hstring Name() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> SaveToFileAsync(const Windows::Storage::IStorageFolder & folder, hstring_ref fileName) const;
    void AddLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const;
    void AddLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) const;
    void RemoveLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingSessionFactory
{
    Windows::Foundation::Diagnostics::LoggingSession Create(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_ILoggingTarget
{
    bool IsEnabled() const;
    bool IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel level) const;
    bool IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel level, int64_t keywords) const;
    void LogEvent(hstring_ref eventName) const;
    void LogEvent(hstring_ref eventName, const Windows::Foundation::Diagnostics::LoggingFields & fields) const;
    void LogEvent(hstring_ref eventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, Windows::Foundation::Diagnostics::LoggingLevel level) const;
    void LogEvent(hstring_ref eventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, Windows::Foundation::Diagnostics::LoggingLevel level, const Windows::Foundation::Diagnostics::LoggingOptions & options) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(hstring_ref startEventName) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(hstring_ref startEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(hstring_ref startEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, Windows::Foundation::Diagnostics::LoggingLevel level) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(hstring_ref startEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, Windows::Foundation::Diagnostics::LoggingLevel level, const Windows::Foundation::Diagnostics::LoggingOptions & options) const;
};

template <typename D>
struct WINRT_EBO impl_ITracingStatusChangedEventArgs
{
    bool Enabled() const;
    Windows::Foundation::Diagnostics::CausalityTraceLevel TraceLevel() const;
};

struct IAsyncCausalityTracerStatics :
    Windows::IInspectable,
    impl::consume<IAsyncCausalityTracerStatics>
{
    IAsyncCausalityTracerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsyncCausalityTracerStatics>(m_ptr); }
};

struct IErrorDetails :
    Windows::IInspectable,
    impl::consume<IErrorDetails>
{
    IErrorDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IErrorDetails>(m_ptr); }
};

struct IErrorDetailsStatics :
    Windows::IInspectable,
    impl::consume<IErrorDetailsStatics>
{
    IErrorDetailsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IErrorDetailsStatics>(m_ptr); }
};

struct IErrorReportingSettings :
    Windows::IInspectable,
    impl::consume<IErrorReportingSettings>
{
    IErrorReportingSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IErrorReportingSettings>(m_ptr); }
};

struct IFileLoggingSession :
    Windows::IInspectable,
    impl::consume<IFileLoggingSession>,
    impl::require<IFileLoggingSession, Windows::Foundation::IClosable>
{
    IFileLoggingSession(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileLoggingSession>(m_ptr); }
};

struct IFileLoggingSessionFactory :
    Windows::IInspectable,
    impl::consume<IFileLoggingSessionFactory>
{
    IFileLoggingSessionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileLoggingSessionFactory>(m_ptr); }
};

struct ILogFileGeneratedEventArgs :
    Windows::IInspectable,
    impl::consume<ILogFileGeneratedEventArgs>
{
    ILogFileGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILogFileGeneratedEventArgs>(m_ptr); }
};

struct ILoggingActivity :
    Windows::IInspectable,
    impl::consume<ILoggingActivity>,
    impl::require<ILoggingActivity, Windows::Foundation::IClosable>
{
    ILoggingActivity(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingActivity>(m_ptr); }
};

struct ILoggingActivity2 :
    Windows::IInspectable,
    impl::consume<ILoggingActivity2>,
    impl::require<ILoggingActivity2, Windows::Foundation::Diagnostics::ILoggingActivity, Windows::Foundation::Diagnostics::ILoggingTarget, Windows::Foundation::IClosable>
{
    ILoggingActivity2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingActivity2>(m_ptr); }
};

struct ILoggingActivityFactory :
    Windows::IInspectable,
    impl::consume<ILoggingActivityFactory>
{
    ILoggingActivityFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingActivityFactory>(m_ptr); }
};

struct ILoggingChannel :
    Windows::IInspectable,
    impl::consume<ILoggingChannel>,
    impl::require<ILoggingChannel, Windows::Foundation::IClosable>
{
    ILoggingChannel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingChannel>(m_ptr); }
};

struct ILoggingChannel2 :
    Windows::IInspectable,
    impl::consume<ILoggingChannel2>,
    impl::require<ILoggingChannel2, Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::Diagnostics::ILoggingTarget, Windows::Foundation::IClosable>
{
    ILoggingChannel2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingChannel2>(m_ptr); }
};

struct ILoggingChannelFactory :
    Windows::IInspectable,
    impl::consume<ILoggingChannelFactory>
{
    ILoggingChannelFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingChannelFactory>(m_ptr); }
};

struct ILoggingChannelFactory2 :
    Windows::IInspectable,
    impl::consume<ILoggingChannelFactory2>
{
    ILoggingChannelFactory2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingChannelFactory2>(m_ptr); }
};

struct ILoggingChannelOptions :
    Windows::IInspectable,
    impl::consume<ILoggingChannelOptions>
{
    ILoggingChannelOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingChannelOptions>(m_ptr); }
};

struct ILoggingChannelOptionsFactory :
    Windows::IInspectable,
    impl::consume<ILoggingChannelOptionsFactory>
{
    ILoggingChannelOptionsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingChannelOptionsFactory>(m_ptr); }
};

struct ILoggingFields :
    Windows::IInspectable,
    impl::consume<ILoggingFields>
{
    ILoggingFields(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingFields>(m_ptr); }
};

struct ILoggingOptions :
    Windows::IInspectable,
    impl::consume<ILoggingOptions>
{
    ILoggingOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingOptions>(m_ptr); }
};

struct ILoggingOptionsFactory :
    Windows::IInspectable,
    impl::consume<ILoggingOptionsFactory>
{
    ILoggingOptionsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingOptionsFactory>(m_ptr); }
};

struct ILoggingSession :
    Windows::IInspectable,
    impl::consume<ILoggingSession>,
    impl::require<ILoggingSession, Windows::Foundation::IClosable>
{
    ILoggingSession(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingSession>(m_ptr); }
};

struct ILoggingSessionFactory :
    Windows::IInspectable,
    impl::consume<ILoggingSessionFactory>
{
    ILoggingSessionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingSessionFactory>(m_ptr); }
};

struct ILoggingTarget :
    Windows::IInspectable,
    impl::consume<ILoggingTarget>
{
    ILoggingTarget(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILoggingTarget>(m_ptr); }
};

struct ITracingStatusChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ITracingStatusChangedEventArgs>
{
    ITracingStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITracingStatusChangedEventArgs>(m_ptr); }
};

}

}
