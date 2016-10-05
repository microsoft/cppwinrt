// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Foundation.Diagnostics.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Diagnostics {

struct __declspec(uuid("50850b26-267e-451b-a890-ab6a370245ee")) __declspec(novtable) IAsyncCausalityTracerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TraceOperationCreation(winrt::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, winrt::Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, hstring operationName, uint64_t relatedContext) = 0;
    virtual HRESULT __stdcall abi_TraceOperationCompletion(winrt::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, winrt::Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, winrt::Windows::Foundation::AsyncStatus status) = 0;
    virtual HRESULT __stdcall abi_TraceOperationRelation(winrt::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, winrt::Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, winrt::Windows::Foundation::Diagnostics::CausalityRelation relation) = 0;
    virtual HRESULT __stdcall abi_TraceSynchronousWorkStart(winrt::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, winrt::Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, winrt::Windows::Foundation::Diagnostics::CausalitySynchronousWork work) = 0;
    virtual HRESULT __stdcall abi_TraceSynchronousWorkCompletion(winrt::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, winrt::Windows::Foundation::Diagnostics::CausalitySource source, winrt::Windows::Foundation::Diagnostics::CausalitySynchronousWork work) = 0;
    virtual HRESULT __stdcall add_TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_TracingStatusChanged(event_token cookie) = 0;
};

struct __declspec(uuid("378cbb01-2cc9-428f-8c55-2c990d463e8f")) __declspec(novtable) IErrorDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_LongDescription(hstring * value) = 0;
    virtual HRESULT __stdcall get_HelpUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("b7703750-0b1d-46c8-aa0e-4b8178e4fce9")) __declspec(novtable) IErrorDetailsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromHResultAsync(int32_t errorCode, Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> ** operation) = 0;
};

struct __declspec(uuid("16369792-b03e-4ba1-8bb8-d28f4ab4d2c0")) __declspec(novtable) IErrorReportingSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetErrorOptions(winrt::Windows::Foundation::Diagnostics::ErrorOptions value) = 0;
    virtual HRESULT __stdcall abi_GetErrorOptions(winrt::Windows::Foundation::Diagnostics::ErrorOptions * value) = 0;
};

struct __declspec(uuid("24c74216-fed2-404c-895f-1f9699cb02f7")) __declspec(novtable) IFileLoggingSession : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall abi_AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel) = 0;
    virtual HRESULT __stdcall abi_AddLoggingChannelWithLevel(Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel, winrt::Windows::Foundation::Diagnostics::LoggingLevel maxLevel) = 0;
    virtual HRESULT __stdcall abi_RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel) = 0;
    virtual HRESULT __stdcall abi_CloseAndSaveToFileAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall add_LogFileGenerated(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LogFileGenerated(event_token token) = 0;
};

struct __declspec(uuid("eea08dce-8447-4daa-9133-12eb46f697d4")) __declspec(novtable) IFileLoggingSessionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring name, Windows::Foundation::Diagnostics::IFileLoggingSession ** result) = 0;
};

struct __declspec(uuid("269e976f-0d38-4c1a-b53f-b395d881df84")) __declspec(novtable) ILogFileGeneratedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_File(Windows::Storage::IStorageFile ** value) = 0;
};

struct __declspec(uuid("bc032941-b766-4cb5-9848-97ac6ba6d60c")) __declspec(novtable) ILoggingActivity : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Id(GUID * value) = 0;
};

struct __declspec(uuid("26c29808-6322-456a-af82-80c8642f178b")) __declspec(novtable) ILoggingActivity2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Channel(Windows::Foundation::Diagnostics::ILoggingChannel ** value) = 0;
    virtual HRESULT __stdcall abi_StopActivity(hstring stopEventName) = 0;
    virtual HRESULT __stdcall abi_StopActivityWithFields(hstring stopEventName, Windows::Foundation::Diagnostics::ILoggingFields * fields) = 0;
    virtual HRESULT __stdcall abi_StopActivityWithFieldsAndOptions(hstring stopEventName, Windows::Foundation::Diagnostics::ILoggingFields * fields, Windows::Foundation::Diagnostics::ILoggingOptions * options) = 0;
};

struct __declspec(uuid("6b33b483-e10a-4c58-97d5-10fb451074fb")) __declspec(novtable) ILoggingActivityFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateLoggingActivity(hstring activityName, Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel, Windows::Foundation::Diagnostics::ILoggingActivity ** loggingActivity) = 0;
    virtual HRESULT __stdcall abi_CreateLoggingActivityWithLevel(hstring activityName, Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel, winrt::Windows::Foundation::Diagnostics::LoggingLevel level, Windows::Foundation::Diagnostics::ILoggingActivity ** loggingActivity) = 0;
};

struct __declspec(uuid("e9a50343-11d7-4f01-b5ca-cf495278c0a8")) __declspec(novtable) ILoggingChannel : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool * value) = 0;
    virtual HRESULT __stdcall get_Level(winrt::Windows::Foundation::Diagnostics::LoggingLevel * value) = 0;
    virtual HRESULT __stdcall abi_LogMessage(hstring eventString) = 0;
    virtual HRESULT __stdcall abi_LogMessageWithLevel(hstring eventString, winrt::Windows::Foundation::Diagnostics::LoggingLevel level) = 0;
    virtual HRESULT __stdcall abi_LogValuePair(hstring value1, int32_t value2) = 0;
    virtual HRESULT __stdcall abi_LogValuePairWithLevel(hstring value1, int32_t value2, winrt::Windows::Foundation::Diagnostics::LoggingLevel level) = 0;
    virtual HRESULT __stdcall add_LoggingEnabled(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LoggingEnabled(event_token token) = 0;
};

struct __declspec(uuid("9f4c3cf3-0bac-45a5-9e33-baf3f3a246a5")) __declspec(novtable) ILoggingChannel2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(GUID * value) = 0;
};

struct __declspec(uuid("4edc5b9c-af80-4a9b-b0dc-398f9ae5207b")) __declspec(novtable) ILoggingChannelFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring name, Windows::Foundation::Diagnostics::ILoggingChannel ** result) = 0;
};

struct __declspec(uuid("4c6ef5dd-3b27-4dc9-99f0-299c6e4603a1")) __declspec(novtable) ILoggingChannelFactory2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithOptions(hstring name, Windows::Foundation::Diagnostics::ILoggingChannelOptions * options, Windows::Foundation::Diagnostics::ILoggingChannel ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithOptionsAndId(hstring name, Windows::Foundation::Diagnostics::ILoggingChannelOptions * options, GUID id, Windows::Foundation::Diagnostics::ILoggingChannel ** result) = 0;
};

struct __declspec(uuid("c3e847ff-0ebb-4a53-8c54-dec24926cb2c")) __declspec(novtable) ILoggingChannelOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Group(GUID * value) = 0;
    virtual HRESULT __stdcall put_Group(GUID value) = 0;
};

struct __declspec(uuid("a93151da-7faf-4191-8755-5e86dc65d896")) __declspec(novtable) ILoggingChannelOptionsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(GUID group, Windows::Foundation::Diagnostics::ILoggingChannelOptions ** result) = 0;
};

struct __declspec(uuid("d7f6b7af-762d-4579-83bd-52c23bc333bc")) __declspec(novtable) ILoggingFields : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Clear() = 0;
    virtual HRESULT __stdcall abi_BeginStruct(hstring name) = 0;
    virtual HRESULT __stdcall abi_BeginStructWithTags(hstring name, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_EndStruct() = 0;
    virtual HRESULT __stdcall abi_AddEmpty(hstring name) = 0;
    virtual HRESULT __stdcall abi_AddEmptyWithFormat(hstring name, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddEmptyWithFormatAndTags(hstring name, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddUInt8(hstring name, uint8_t value) = 0;
    virtual HRESULT __stdcall abi_AddUInt8WithFormat(hstring name, uint8_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddUInt8WithFormatAndTags(hstring name, uint8_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddUInt8Array(hstring name, uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_AddUInt8ArrayWithFormat(hstring name, uint32_t __valueSize, uint8_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddUInt8ArrayWithFormatAndTags(hstring name, uint32_t __valueSize, uint8_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddInt16(hstring name, int16_t value) = 0;
    virtual HRESULT __stdcall abi_AddInt16WithFormat(hstring name, int16_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddInt16WithFormatAndTags(hstring name, int16_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddInt16Array(hstring name, uint32_t __valueSize, int16_t * value) = 0;
    virtual HRESULT __stdcall abi_AddInt16ArrayWithFormat(hstring name, uint32_t __valueSize, int16_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddInt16ArrayWithFormatAndTags(hstring name, uint32_t __valueSize, int16_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddUInt16(hstring name, uint16_t value) = 0;
    virtual HRESULT __stdcall abi_AddUInt16WithFormat(hstring name, uint16_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddUInt16WithFormatAndTags(hstring name, uint16_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddUInt16Array(hstring name, uint32_t __valueSize, uint16_t * value) = 0;
    virtual HRESULT __stdcall abi_AddUInt16ArrayWithFormat(hstring name, uint32_t __valueSize, uint16_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddUInt16ArrayWithFormatAndTags(hstring name, uint32_t __valueSize, uint16_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddInt32(hstring name, int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddInt32WithFormat(hstring name, int32_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddInt32WithFormatAndTags(hstring name, int32_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddInt32Array(hstring name, uint32_t __valueSize, int32_t * value) = 0;
    virtual HRESULT __stdcall abi_AddInt32ArrayWithFormat(hstring name, uint32_t __valueSize, int32_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddInt32ArrayWithFormatAndTags(hstring name, uint32_t __valueSize, int32_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddUInt32(hstring name, uint32_t value) = 0;
    virtual HRESULT __stdcall abi_AddUInt32WithFormat(hstring name, uint32_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddUInt32WithFormatAndTags(hstring name, uint32_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddUInt32Array(hstring name, uint32_t __valueSize, uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_AddUInt32ArrayWithFormat(hstring name, uint32_t __valueSize, uint32_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddUInt32ArrayWithFormatAndTags(hstring name, uint32_t __valueSize, uint32_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddInt64(hstring name, int64_t value) = 0;
    virtual HRESULT __stdcall abi_AddInt64WithFormat(hstring name, int64_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddInt64WithFormatAndTags(hstring name, int64_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddInt64Array(hstring name, uint32_t __valueSize, int64_t * value) = 0;
    virtual HRESULT __stdcall abi_AddInt64ArrayWithFormat(hstring name, uint32_t __valueSize, int64_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddInt64ArrayWithFormatAndTags(hstring name, uint32_t __valueSize, int64_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddUInt64(hstring name, uint64_t value) = 0;
    virtual HRESULT __stdcall abi_AddUInt64WithFormat(hstring name, uint64_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddUInt64WithFormatAndTags(hstring name, uint64_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddUInt64Array(hstring name, uint32_t __valueSize, uint64_t * value) = 0;
    virtual HRESULT __stdcall abi_AddUInt64ArrayWithFormat(hstring name, uint32_t __valueSize, uint64_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddUInt64ArrayWithFormatAndTags(hstring name, uint32_t __valueSize, uint64_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddSingle(hstring name, float value) = 0;
    virtual HRESULT __stdcall abi_AddSingleWithFormat(hstring name, float value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddSingleWithFormatAndTags(hstring name, float value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddSingleArray(hstring name, uint32_t __valueSize, float * value) = 0;
    virtual HRESULT __stdcall abi_AddSingleArrayWithFormat(hstring name, uint32_t __valueSize, float * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddSingleArrayWithFormatAndTags(hstring name, uint32_t __valueSize, float * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddDouble(hstring name, double value) = 0;
    virtual HRESULT __stdcall abi_AddDoubleWithFormat(hstring name, double value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddDoubleWithFormatAndTags(hstring name, double value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddDoubleArray(hstring name, uint32_t __valueSize, double * value) = 0;
    virtual HRESULT __stdcall abi_AddDoubleArrayWithFormat(hstring name, uint32_t __valueSize, double * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddDoubleArrayWithFormatAndTags(hstring name, uint32_t __valueSize, double * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddChar16(hstring name, wchar_t value) = 0;
    virtual HRESULT __stdcall abi_AddChar16WithFormat(hstring name, wchar_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddChar16WithFormatAndTags(hstring name, wchar_t value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddChar16Array(hstring name, uint32_t __valueSize, wchar_t * value) = 0;
    virtual HRESULT __stdcall abi_AddChar16ArrayWithFormat(hstring name, uint32_t __valueSize, wchar_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddChar16ArrayWithFormatAndTags(hstring name, uint32_t __valueSize, wchar_t * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddBoolean(hstring name, bool value) = 0;
    virtual HRESULT __stdcall abi_AddBooleanWithFormat(hstring name, bool value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddBooleanWithFormatAndTags(hstring name, bool value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddBooleanArray(hstring name, uint32_t __valueSize, bool * value) = 0;
    virtual HRESULT __stdcall abi_AddBooleanArrayWithFormat(hstring name, uint32_t __valueSize, bool * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddBooleanArrayWithFormatAndTags(hstring name, uint32_t __valueSize, bool * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddString(hstring name, hstring value) = 0;
    virtual HRESULT __stdcall abi_AddStringWithFormat(hstring name, hstring value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddStringWithFormatAndTags(hstring name, hstring value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddStringArray(hstring name, uint32_t __valueSize, hstring * value) = 0;
    virtual HRESULT __stdcall abi_AddStringArrayWithFormat(hstring name, uint32_t __valueSize, hstring * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddStringArrayWithFormatAndTags(hstring name, uint32_t __valueSize, hstring * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddGuid(hstring name, GUID value) = 0;
    virtual HRESULT __stdcall abi_AddGuidWithFormat(hstring name, GUID value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddGuidWithFormatAndTags(hstring name, GUID value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddGuidArray(hstring name, uint32_t __valueSize, GUID * value) = 0;
    virtual HRESULT __stdcall abi_AddGuidArrayWithFormat(hstring name, uint32_t __valueSize, GUID * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddGuidArrayWithFormatAndTags(hstring name, uint32_t __valueSize, GUID * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddDateTime(hstring name, Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall abi_AddDateTimeWithFormat(hstring name, Windows::Foundation::DateTime value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddDateTimeWithFormatAndTags(hstring name, Windows::Foundation::DateTime value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddDateTimeArray(hstring name, uint32_t __valueSize, Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_AddDateTimeArrayWithFormat(hstring name, uint32_t __valueSize, Windows::Foundation::DateTime * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddDateTimeArrayWithFormatAndTags(hstring name, uint32_t __valueSize, Windows::Foundation::DateTime * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddTimeSpan(hstring name, Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall abi_AddTimeSpanWithFormat(hstring name, Windows::Foundation::TimeSpan value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddTimeSpanWithFormatAndTags(hstring name, Windows::Foundation::TimeSpan value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddTimeSpanArray(hstring name, uint32_t __valueSize, Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall abi_AddTimeSpanArrayWithFormat(hstring name, uint32_t __valueSize, Windows::Foundation::TimeSpan * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddTimeSpanArrayWithFormatAndTags(hstring name, uint32_t __valueSize, Windows::Foundation::TimeSpan * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddPoint(hstring name, Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall abi_AddPointWithFormat(hstring name, Windows::Foundation::Point value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddPointWithFormatAndTags(hstring name, Windows::Foundation::Point value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddPointArray(hstring name, uint32_t __valueSize, Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall abi_AddPointArrayWithFormat(hstring name, uint32_t __valueSize, Windows::Foundation::Point * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddPointArrayWithFormatAndTags(hstring name, uint32_t __valueSize, Windows::Foundation::Point * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddSize(hstring name, Windows::Foundation::Size value) = 0;
    virtual HRESULT __stdcall abi_AddSizeWithFormat(hstring name, Windows::Foundation::Size value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddSizeWithFormatAndTags(hstring name, Windows::Foundation::Size value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddSizeArray(hstring name, uint32_t __valueSize, Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall abi_AddSizeArrayWithFormat(hstring name, uint32_t __valueSize, Windows::Foundation::Size * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddSizeArrayWithFormatAndTags(hstring name, uint32_t __valueSize, Windows::Foundation::Size * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddRect(hstring name, Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall abi_AddRectWithFormat(hstring name, Windows::Foundation::Rect value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddRectWithFormatAndTags(hstring name, Windows::Foundation::Rect value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
    virtual HRESULT __stdcall abi_AddRectArray(hstring name, uint32_t __valueSize, Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall abi_AddRectArrayWithFormat(hstring name, uint32_t __valueSize, Windows::Foundation::Rect * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format) = 0;
    virtual HRESULT __stdcall abi_AddRectArrayWithFormatAndTags(hstring name, uint32_t __valueSize, Windows::Foundation::Rect * value, winrt::Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) = 0;
};

struct __declspec(uuid("90bc7850-0192-4f5d-ac26-006adaca12d8")) __declspec(novtable) ILoggingOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Keywords(int64_t * value) = 0;
    virtual HRESULT __stdcall put_Keywords(int64_t value) = 0;
    virtual HRESULT __stdcall get_Tags(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Tags(int32_t value) = 0;
    virtual HRESULT __stdcall get_Task(int16_t * value) = 0;
    virtual HRESULT __stdcall put_Task(int16_t value) = 0;
    virtual HRESULT __stdcall get_Opcode(winrt::Windows::Foundation::Diagnostics::LoggingOpcode * value) = 0;
    virtual HRESULT __stdcall put_Opcode(winrt::Windows::Foundation::Diagnostics::LoggingOpcode value) = 0;
    virtual HRESULT __stdcall get_ActivityId(GUID * value) = 0;
    virtual HRESULT __stdcall put_ActivityId(GUID value) = 0;
    virtual HRESULT __stdcall get_RelatedActivityId(GUID * value) = 0;
    virtual HRESULT __stdcall put_RelatedActivityId(GUID value) = 0;
};

struct __declspec(uuid("d713c6cb-98ab-464b-9f22-a3268478368a")) __declspec(novtable) ILoggingOptionsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithKeywords(int64_t keywords, Windows::Foundation::Diagnostics::ILoggingOptions ** result) = 0;
};

struct __declspec(uuid("6221f306-9380-4ad7-baf5-41ea9310d768")) __declspec(novtable) ILoggingSession : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall abi_SaveToFileAsync(Windows::Storage::IStorageFolder * folder, hstring fileName, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel) = 0;
    virtual HRESULT __stdcall abi_AddLoggingChannelWithLevel(Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel, winrt::Windows::Foundation::Diagnostics::LoggingLevel maxLevel) = 0;
    virtual HRESULT __stdcall abi_RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel) = 0;
};

struct __declspec(uuid("4e937ee5-58fd-45e0-8c2f-a132eff95c1e")) __declspec(novtable) ILoggingSessionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring name, Windows::Foundation::Diagnostics::ILoggingSession ** result) = 0;
};

struct __declspec(uuid("65f16c35-e388-4e26-b17a-f51cd3a83916")) __declspec(novtable) ILoggingTarget : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsEnabled(bool * result) = 0;
    virtual HRESULT __stdcall abi_IsEnabledWithLevel(winrt::Windows::Foundation::Diagnostics::LoggingLevel level, bool * result) = 0;
    virtual HRESULT __stdcall abi_IsEnabledWithLevelAndKeywords(winrt::Windows::Foundation::Diagnostics::LoggingLevel level, int64_t keywords, bool * result) = 0;
    virtual HRESULT __stdcall abi_LogEvent(hstring eventName) = 0;
    virtual HRESULT __stdcall abi_LogEventWithFields(hstring eventName, Windows::Foundation::Diagnostics::ILoggingFields * fields) = 0;
    virtual HRESULT __stdcall abi_LogEventWithFieldsAndLevel(hstring eventName, Windows::Foundation::Diagnostics::ILoggingFields * fields, winrt::Windows::Foundation::Diagnostics::LoggingLevel level) = 0;
    virtual HRESULT __stdcall abi_LogEventWithFieldsAndOptions(hstring eventName, Windows::Foundation::Diagnostics::ILoggingFields * fields, winrt::Windows::Foundation::Diagnostics::LoggingLevel level, Windows::Foundation::Diagnostics::ILoggingOptions * options) = 0;
    virtual HRESULT __stdcall abi_StartActivity(hstring startEventName, Windows::Foundation::Diagnostics::ILoggingActivity ** result) = 0;
    virtual HRESULT __stdcall abi_StartActivityWithFields(hstring startEventName, Windows::Foundation::Diagnostics::ILoggingFields * fields, Windows::Foundation::Diagnostics::ILoggingActivity ** result) = 0;
    virtual HRESULT __stdcall abi_StartActivityWithFieldsAndLevel(hstring startEventName, Windows::Foundation::Diagnostics::ILoggingFields * fields, winrt::Windows::Foundation::Diagnostics::LoggingLevel level, Windows::Foundation::Diagnostics::ILoggingActivity ** result) = 0;
    virtual HRESULT __stdcall abi_StartActivityWithFieldsAndOptions(hstring startEventName, Windows::Foundation::Diagnostics::ILoggingFields * fields, winrt::Windows::Foundation::Diagnostics::LoggingLevel level, Windows::Foundation::Diagnostics::ILoggingOptions * options, Windows::Foundation::Diagnostics::ILoggingActivity ** result) = 0;
};

struct __declspec(uuid("410b7711-ff3b-477f-9c9a-d2efda302dc3")) __declspec(novtable) ITracingStatusChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Enabled(bool * enabled) = 0;
    virtual HRESULT __stdcall get_TraceLevel(winrt::Windows::Foundation::Diagnostics::CausalityTraceLevel * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Foundation::Diagnostics::ErrorDetails> { using default_interface = Windows::Foundation::Diagnostics::IErrorDetails; };
template <> struct traits<Windows::Foundation::Diagnostics::FileLoggingSession> { using default_interface = Windows::Foundation::Diagnostics::IFileLoggingSession; };
template <> struct traits<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> { using default_interface = Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs; };
template <> struct traits<Windows::Foundation::Diagnostics::LoggingActivity> { using default_interface = Windows::Foundation::Diagnostics::ILoggingActivity; };
template <> struct traits<Windows::Foundation::Diagnostics::LoggingChannel> { using default_interface = Windows::Foundation::Diagnostics::ILoggingChannel; };
template <> struct traits<Windows::Foundation::Diagnostics::LoggingChannelOptions> { using default_interface = Windows::Foundation::Diagnostics::ILoggingChannelOptions; };
template <> struct traits<Windows::Foundation::Diagnostics::LoggingFields> { using default_interface = Windows::Foundation::Diagnostics::ILoggingFields; };
template <> struct traits<Windows::Foundation::Diagnostics::LoggingOptions> { using default_interface = Windows::Foundation::Diagnostics::ILoggingOptions; };
template <> struct traits<Windows::Foundation::Diagnostics::LoggingSession> { using default_interface = Windows::Foundation::Diagnostics::ILoggingSession; };
template <> struct traits<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings> { using default_interface = Windows::Foundation::Diagnostics::IErrorReportingSettings; };
template <> struct traits<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> { using default_interface = Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs; };

}

namespace Windows::Foundation::Diagnostics {

template <typename T> struct impl_IAsyncCausalityTracerStatics;
template <typename T> struct impl_IErrorDetails;
template <typename T> struct impl_IErrorDetailsStatics;
template <typename T> struct impl_IErrorReportingSettings;
template <typename T> struct impl_IFileLoggingSession;
template <typename T> struct impl_IFileLoggingSessionFactory;
template <typename T> struct impl_ILogFileGeneratedEventArgs;
template <typename T> struct impl_ILoggingActivity;
template <typename T> struct impl_ILoggingActivity2;
template <typename T> struct impl_ILoggingActivityFactory;
template <typename T> struct impl_ILoggingChannel;
template <typename T> struct impl_ILoggingChannel2;
template <typename T> struct impl_ILoggingChannelFactory;
template <typename T> struct impl_ILoggingChannelFactory2;
template <typename T> struct impl_ILoggingChannelOptions;
template <typename T> struct impl_ILoggingChannelOptionsFactory;
template <typename T> struct impl_ILoggingFields;
template <typename T> struct impl_ILoggingOptions;
template <typename T> struct impl_ILoggingOptionsFactory;
template <typename T> struct impl_ILoggingSession;
template <typename T> struct impl_ILoggingSessionFactory;
template <typename T> struct impl_ILoggingTarget;
template <typename T> struct impl_ITracingStatusChangedEventArgs;

}

namespace impl {

template <> struct traits<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>
{
    using abi = ABI::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_IAsyncCausalityTracerStatics<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::IErrorDetails>
{
    using abi = ABI::Windows::Foundation::Diagnostics::IErrorDetails;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_IErrorDetails<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::IErrorDetailsStatics>
{
    using abi = ABI::Windows::Foundation::Diagnostics::IErrorDetailsStatics;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_IErrorDetailsStatics<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::IErrorReportingSettings>
{
    using abi = ABI::Windows::Foundation::Diagnostics::IErrorReportingSettings;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_IErrorReportingSettings<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::IFileLoggingSession>
{
    using abi = ABI::Windows::Foundation::Diagnostics::IFileLoggingSession;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_IFileLoggingSession<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>
{
    using abi = ABI::Windows::Foundation::Diagnostics::IFileLoggingSessionFactory;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_IFileLoggingSessionFactory<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILogFileGeneratedEventArgs<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingActivity>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingActivity;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingActivity<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingActivity2>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingActivity2;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingActivity2<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingActivityFactory>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingActivityFactory;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingActivityFactory<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingChannel>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingChannel;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingChannel<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingChannel2>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingChannel2;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingChannel2<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingChannelFactory>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingChannelFactory;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingChannelFactory<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingChannelFactory2;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingChannelFactory2<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingChannelOptions>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingChannelOptions;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingChannelOptions<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingChannelOptionsFactory<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingFields>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingFields;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingFields<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingOptions>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingOptions;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingOptions<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingOptionsFactory;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingOptionsFactory<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingSession>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingSession;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingSession<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingSessionFactory>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingSessionFactory;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingSessionFactory<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ILoggingTarget>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ILoggingTarget;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ILoggingTarget<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs;
    template <typename D> using consume = Windows::Foundation::Diagnostics::impl_ITracingStatusChangedEventArgs<D>;
};

template <> struct traits<Windows::Foundation::Diagnostics::AsyncCausalityTracer>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.AsyncCausalityTracer"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::ErrorDetails>
{
    using abi = ABI::Windows::Foundation::Diagnostics::ErrorDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.ErrorDetails"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::FileLoggingSession>
{
    using abi = ABI::Windows::Foundation::Diagnostics::FileLoggingSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.FileLoggingSession"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>
{
    using abi = ABI::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::LoggingActivity>
{
    using abi = ABI::Windows::Foundation::Diagnostics::LoggingActivity;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.LoggingActivity"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::LoggingChannel>
{
    using abi = ABI::Windows::Foundation::Diagnostics::LoggingChannel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.LoggingChannel"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::LoggingChannelOptions>
{
    using abi = ABI::Windows::Foundation::Diagnostics::LoggingChannelOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.LoggingChannelOptions"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::LoggingFields>
{
    using abi = ABI::Windows::Foundation::Diagnostics::LoggingFields;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.LoggingFields"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::LoggingOptions>
{
    using abi = ABI::Windows::Foundation::Diagnostics::LoggingOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.LoggingOptions"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::LoggingSession>
{
    using abi = ABI::Windows::Foundation::Diagnostics::LoggingSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.LoggingSession"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>
{
    using abi = ABI::Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings"; }
};

template <> struct traits<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>
{
    using abi = ABI::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs"; }
};

}

}
