// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.Diagnostics.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> : produce_base<D, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>
{
    HRESULT __stdcall abi_TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, abi_arg_in<hstring> operationName, uint64_t relatedContext) noexcept override
    {
        try
        {
            this->shim().TraceOperationCreation(traceLevel, source, platformId, operationId, *reinterpret_cast<const hstring *>(&operationName), relatedContext);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::AsyncStatus status) noexcept override
    {
        try
        {
            this->shim().TraceOperationCompletion(traceLevel, source, platformId, operationId, status);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation relation) noexcept override
    {
        try
        {
            this->shim().TraceOperationRelation(traceLevel, source, platformId, operationId, relation);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) noexcept override
    {
        try
        {
            this->shim().TraceSynchronousWorkStart(traceLevel, source, platformId, operationId, work);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) noexcept override
    {
        try
        {
            this->shim().TraceSynchronousWorkCompletion(traceLevel, source, work);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TracingStatusChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().TracingStatusChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TracingStatusChanged(event_token cookie) noexcept override
    {
        try
        {
            this->shim().TracingStatusChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IErrorDetails> : produce_base<D, Windows::Foundation::Diagnostics::IErrorDetails>
{
    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LongDescription(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LongDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HelpUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HelpUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IErrorDetailsStatics> : produce_base<D, Windows::Foundation::Diagnostics::IErrorDetailsStatics>
{
    HRESULT __stdcall abi_CreateFromHResultAsync(int32_t errorCode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFromHResultAsync(errorCode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IErrorReportingSettings> : produce_base<D, Windows::Foundation::Diagnostics::IErrorReportingSettings>
{
    HRESULT __stdcall abi_SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions value) noexcept override
    {
        try
        {
            this->shim().SetErrorOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetErrorOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IFileLoggingSession> : produce_base<D, Windows::Foundation::Diagnostics::IFileLoggingSession>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddLoggingChannel(abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannel> loggingChannel) noexcept override
    {
        try
        {
            this->shim().AddLoggingChannel(*reinterpret_cast<const Windows::Foundation::Diagnostics::ILoggingChannel *>(&loggingChannel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddLoggingChannelWithLevel(abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannel> loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) noexcept override
    {
        try
        {
            this->shim().AddLoggingChannel(*reinterpret_cast<const Windows::Foundation::Diagnostics::ILoggingChannel *>(&loggingChannel), maxLevel);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveLoggingChannel(abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannel> loggingChannel) noexcept override
    {
        try
        {
            this->shim().RemoveLoggingChannel(*reinterpret_cast<const Windows::Foundation::Diagnostics::ILoggingChannel *>(&loggingChannel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CloseAndSaveToFileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CloseAndSaveToFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LogFileGenerated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LogFileGenerated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LogFileGenerated(event_token token) noexcept override
    {
        try
        {
            this->shim().LogFileGenerated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> : produce_base<D, Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::Diagnostics::IFileLoggingSession> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> : produce_base<D, Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>
{
    HRESULT __stdcall get_File(abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingActivity> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingActivity>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingActivity2> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingActivity2>
{
    HRESULT __stdcall get_Channel(abi_arg_out<Windows::Foundation::Diagnostics::ILoggingChannel> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopActivity(abi_arg_in<hstring> stopEventName) noexcept override
    {
        try
        {
            this->shim().StopActivity(*reinterpret_cast<const hstring *>(&stopEventName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopActivityWithFields(abi_arg_in<hstring> stopEventName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingFields> fields) noexcept override
    {
        try
        {
            this->shim().StopActivity(*reinterpret_cast<const hstring *>(&stopEventName), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingFields *>(&fields));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopActivityWithFieldsAndOptions(abi_arg_in<hstring> stopEventName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingFields> fields, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingOptions> options) noexcept override
    {
        try
        {
            this->shim().StopActivity(*reinterpret_cast<const hstring *>(&stopEventName), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingFields *>(&fields), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingOptions *>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingActivityFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingActivityFactory>
{
    HRESULT __stdcall abi_CreateLoggingActivity(abi_arg_in<hstring> activityName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannel> loggingChannel, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingActivity> loggingActivity) noexcept override
    {
        try
        {
            *loggingActivity = detach(this->shim().CreateLoggingActivity(*reinterpret_cast<const hstring *>(&activityName), *reinterpret_cast<const Windows::Foundation::Diagnostics::ILoggingChannel *>(&loggingChannel)));
            return S_OK;
        }
        catch (...)
        {
            *loggingActivity = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateLoggingActivityWithLevel(abi_arg_in<hstring> activityName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannel> loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel level, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingActivity> loggingActivity) noexcept override
    {
        try
        {
            *loggingActivity = detach(this->shim().CreateLoggingActivityWithLevel(*reinterpret_cast<const hstring *>(&activityName), *reinterpret_cast<const Windows::Foundation::Diagnostics::ILoggingChannel *>(&loggingChannel), level));
            return S_OK;
        }
        catch (...)
        {
            *loggingActivity = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannel> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannel>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Level(Windows::Foundation::Diagnostics::LoggingLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Level());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogMessage(abi_arg_in<hstring> eventString) noexcept override
    {
        try
        {
            this->shim().LogMessage(*reinterpret_cast<const hstring *>(&eventString));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogMessageWithLevel(abi_arg_in<hstring> eventString, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept override
    {
        try
        {
            this->shim().LogMessage(*reinterpret_cast<const hstring *>(&eventString), level);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogValuePair(abi_arg_in<hstring> value1, int32_t value2) noexcept override
    {
        try
        {
            this->shim().LogValuePair(*reinterpret_cast<const hstring *>(&value1), value2);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogValuePairWithLevel(abi_arg_in<hstring> value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept override
    {
        try
        {
            this->shim().LogValuePair(*reinterpret_cast<const hstring *>(&value1), value2, level);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LoggingEnabled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LoggingEnabled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LoggingEnabled(event_token token) noexcept override
    {
        try
        {
            this->shim().LoggingEnabled(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannel2> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannel2>
{
    HRESULT __stdcall get_Id(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannelFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannelFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingChannel> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannelFactory2> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannelFactory2>
{
    HRESULT __stdcall abi_CreateWithOptions(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannelOptions> options, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingChannel> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithOptions(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingChannelOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithOptionsAndId(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannelOptions> options, GUID id, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingChannel> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithOptionsAndId(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingChannelOptions *>(&options), id));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannelOptions> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannelOptions>
{
    HRESULT __stdcall get_Group(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Group(GUID value) noexcept override
    {
        try
        {
            this->shim().Group(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>
{
    HRESULT __stdcall abi_Create(GUID group, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingChannelOptions> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(group));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingFields> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingFields>
{
    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BeginStruct(abi_arg_in<hstring> name) noexcept override
    {
        try
        {
            this->shim().BeginStruct(*reinterpret_cast<const hstring *>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BeginStructWithTags(abi_arg_in<hstring> name, int32_t tags) noexcept override
    {
        try
        {
            this->shim().BeginStruct(*reinterpret_cast<const hstring *>(&name), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EndStruct() noexcept override
    {
        try
        {
            this->shim().EndStruct();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddEmpty(abi_arg_in<hstring> name) noexcept override
    {
        try
        {
            this->shim().AddEmpty(*reinterpret_cast<const hstring *>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddEmptyWithFormat(abi_arg_in<hstring> name, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddEmpty(*reinterpret_cast<const hstring *>(&name), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddEmptyWithFormatAndTags(abi_arg_in<hstring> name, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddEmpty(*reinterpret_cast<const hstring *>(&name), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt8(abi_arg_in<hstring> name, uint8_t value) noexcept override
    {
        try
        {
            this->shim().AddUInt8(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt8WithFormat(abi_arg_in<hstring> name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddUInt8(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt8WithFormatAndTags(abi_arg_in<hstring> name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddUInt8(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt8Array(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint8_t> * value) noexcept override
    {
        try
        {
            this->shim().AddUInt8Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint8_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt8ArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint8_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddUInt8Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint8_t>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt8ArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint8_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddUInt8Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint8_t>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt16(abi_arg_in<hstring> name, int16_t value) noexcept override
    {
        try
        {
            this->shim().AddInt16(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt16WithFormat(abi_arg_in<hstring> name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddInt16(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt16WithFormatAndTags(abi_arg_in<hstring> name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddInt16(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt16Array(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int16_t> * value) noexcept override
    {
        try
        {
            this->shim().AddInt16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int16_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt16ArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int16_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddInt16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int16_t>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt16ArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int16_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddInt16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int16_t>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt16(abi_arg_in<hstring> name, uint16_t value) noexcept override
    {
        try
        {
            this->shim().AddUInt16(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt16WithFormat(abi_arg_in<hstring> name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddUInt16(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt16WithFormatAndTags(abi_arg_in<hstring> name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddUInt16(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt16Array(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint16_t> * value) noexcept override
    {
        try
        {
            this->shim().AddUInt16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint16_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt16ArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint16_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddUInt16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint16_t>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt16ArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint16_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddUInt16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint16_t>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt32(abi_arg_in<hstring> name, int32_t value) noexcept override
    {
        try
        {
            this->shim().AddInt32(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt32WithFormat(abi_arg_in<hstring> name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddInt32(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt32WithFormatAndTags(abi_arg_in<hstring> name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddInt32(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt32Array(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int32_t> * value) noexcept override
    {
        try
        {
            this->shim().AddInt32Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int32_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt32ArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int32_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddInt32Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int32_t>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt32ArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int32_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddInt32Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int32_t>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt32(abi_arg_in<hstring> name, uint32_t value) noexcept override
    {
        try
        {
            this->shim().AddUInt32(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt32WithFormat(abi_arg_in<hstring> name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddUInt32(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt32WithFormatAndTags(abi_arg_in<hstring> name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddUInt32(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt32Array(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint32_t> * value) noexcept override
    {
        try
        {
            this->shim().AddUInt32Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint32_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt32ArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint32_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddUInt32Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint32_t>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt32ArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint32_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddUInt32Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint32_t>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt64(abi_arg_in<hstring> name, int64_t value) noexcept override
    {
        try
        {
            this->shim().AddInt64(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt64WithFormat(abi_arg_in<hstring> name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddInt64(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt64WithFormatAndTags(abi_arg_in<hstring> name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddInt64(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt64Array(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int64_t> * value) noexcept override
    {
        try
        {
            this->shim().AddInt64Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int64_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt64ArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int64_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddInt64Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int64_t>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddInt64ArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<int64_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddInt64Array(*reinterpret_cast<const hstring *>(&name), array_ref<const int64_t>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt64(abi_arg_in<hstring> name, uint64_t value) noexcept override
    {
        try
        {
            this->shim().AddUInt64(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt64WithFormat(abi_arg_in<hstring> name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddUInt64(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt64WithFormatAndTags(abi_arg_in<hstring> name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddUInt64(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt64Array(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint64_t> * value) noexcept override
    {
        try
        {
            this->shim().AddUInt64Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint64_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt64ArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint64_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddUInt64Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint64_t>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddUInt64ArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<uint64_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddUInt64Array(*reinterpret_cast<const hstring *>(&name), array_ref<const uint64_t>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSingle(abi_arg_in<hstring> name, float value) noexcept override
    {
        try
        {
            this->shim().AddSingle(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSingleWithFormat(abi_arg_in<hstring> name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddSingle(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSingleWithFormatAndTags(abi_arg_in<hstring> name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddSingle(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSingleArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<float> * value) noexcept override
    {
        try
        {
            this->shim().AddSingleArray(*reinterpret_cast<const hstring *>(&name), array_ref<const float>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSingleArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<float> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddSingleArray(*reinterpret_cast<const hstring *>(&name), array_ref<const float>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSingleArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<float> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddSingleArray(*reinterpret_cast<const hstring *>(&name), array_ref<const float>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDouble(abi_arg_in<hstring> name, double value) noexcept override
    {
        try
        {
            this->shim().AddDouble(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDoubleWithFormat(abi_arg_in<hstring> name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddDouble(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDoubleWithFormatAndTags(abi_arg_in<hstring> name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddDouble(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDoubleArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<double> * value) noexcept override
    {
        try
        {
            this->shim().AddDoubleArray(*reinterpret_cast<const hstring *>(&name), array_ref<const double>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDoubleArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<double> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddDoubleArray(*reinterpret_cast<const hstring *>(&name), array_ref<const double>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDoubleArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<double> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddDoubleArray(*reinterpret_cast<const hstring *>(&name), array_ref<const double>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddChar16(abi_arg_in<hstring> name, wchar_t value) noexcept override
    {
        try
        {
            this->shim().AddChar16(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddChar16WithFormat(abi_arg_in<hstring> name, wchar_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddChar16(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddChar16WithFormatAndTags(abi_arg_in<hstring> name, wchar_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddChar16(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddChar16Array(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<wchar_t> * value) noexcept override
    {
        try
        {
            this->shim().AddChar16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const wchar_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddChar16ArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<wchar_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddChar16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const wchar_t>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddChar16ArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<wchar_t> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddChar16Array(*reinterpret_cast<const hstring *>(&name), array_ref<const wchar_t>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddBoolean(abi_arg_in<hstring> name, bool value) noexcept override
    {
        try
        {
            this->shim().AddBoolean(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddBooleanWithFormat(abi_arg_in<hstring> name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddBoolean(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddBooleanWithFormatAndTags(abi_arg_in<hstring> name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddBoolean(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddBooleanArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<bool> * value) noexcept override
    {
        try
        {
            this->shim().AddBooleanArray(*reinterpret_cast<const hstring *>(&name), array_ref<const bool>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddBooleanArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<bool> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddBooleanArray(*reinterpret_cast<const hstring *>(&name), array_ref<const bool>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddBooleanArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<bool> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddBooleanArray(*reinterpret_cast<const hstring *>(&name), array_ref<const bool>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddString(abi_arg_in<hstring> name, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AddString(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddStringWithFormat(abi_arg_in<hstring> name, abi_arg_in<hstring> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddString(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddStringWithFormatAndTags(abi_arg_in<hstring> name, abi_arg_in<hstring> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddString(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddStringArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<hstring> * value) noexcept override
    {
        try
        {
            this->shim().AddStringArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddStringArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<hstring> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddStringArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddStringArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<hstring> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddStringArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddGuid(abi_arg_in<hstring> name, GUID value) noexcept override
    {
        try
        {
            this->shim().AddGuid(*reinterpret_cast<const hstring *>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddGuidWithFormat(abi_arg_in<hstring> name, GUID value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddGuid(*reinterpret_cast<const hstring *>(&name), value, format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddGuidWithFormatAndTags(abi_arg_in<hstring> name, GUID value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddGuid(*reinterpret_cast<const hstring *>(&name), value, format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddGuidArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<GUID> * value) noexcept override
    {
        try
        {
            this->shim().AddGuidArray(*reinterpret_cast<const hstring *>(&name), array_ref<const GUID>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddGuidArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<GUID> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddGuidArray(*reinterpret_cast<const hstring *>(&name), array_ref<const GUID>(value, value + __valueSize), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddGuidArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<GUID> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddGuidArray(*reinterpret_cast<const hstring *>(&name), array_ref<const GUID>(value, value + __valueSize), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDateTime(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().AddDateTime(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDateTimeWithFormat(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::DateTime> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddDateTime(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::DateTime *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDateTimeWithFormatAndTags(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::DateTime> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddDateTime(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::DateTime *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDateTimeArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::DateTime> * value) noexcept override
    {
        try
        {
            this->shim().AddDateTimeArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDateTimeArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::DateTime> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddDateTimeArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::DateTime *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDateTimeArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::DateTime> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddDateTimeArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::DateTime *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddTimeSpan(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().AddTimeSpan(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddTimeSpanWithFormat(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::TimeSpan> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddTimeSpan(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddTimeSpanWithFormatAndTags(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::TimeSpan> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddTimeSpan(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddTimeSpanArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::TimeSpan> * value) noexcept override
    {
        try
        {
            this->shim().AddTimeSpanArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddTimeSpanArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::TimeSpan> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddTimeSpanArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddTimeSpanArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::TimeSpan> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddTimeSpanArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPoint(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().AddPoint(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPointWithFormat(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Point> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddPoint(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Point *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPointWithFormatAndTags(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Point> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddPoint(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Point *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPointArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Point> * value) noexcept override
    {
        try
        {
            this->shim().AddPointArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPointArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Point> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddPointArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Point *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPointArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Point> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddPointArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Point *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSize(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            this->shim().AddSize(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSizeWithFormat(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Size> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddSize(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Size *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSizeWithFormatAndTags(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Size> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddSize(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Size *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSizeArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Size> * value) noexcept override
    {
        try
        {
            this->shim().AddSizeArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSizeArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Size> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddSizeArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Size *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSizeArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Size> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddSizeArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Size *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddRect(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            this->shim().AddRect(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddRectWithFormat(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Rect> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddRect(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Rect *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddRectWithFormatAndTags(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Rect> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddRect(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Rect *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddRectArray(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Rect> * value) noexcept override
    {
        try
        {
            this->shim().AddRectArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddRectArrayWithFormat(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Rect> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept override
    {
        try
        {
            this->shim().AddRectArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Rect *>(&value), format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddRectArrayWithFormatAndTags(abi_arg_in<hstring> name, uint32_t __valueSize, abi_arg_in<Windows::Foundation::Rect> * value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept override
    {
        try
        {
            this->shim().AddRectArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Rect *>(&value), format, tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingOptions> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingOptions>
{
    HRESULT __stdcall get_Keywords(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Keywords(int64_t value) noexcept override
    {
        try
        {
            this->shim().Keywords(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tags(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tags());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tags(int32_t value) noexcept override
    {
        try
        {
            this->shim().Tags(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Task(int16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Task());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Task(int16_t value) noexcept override
    {
        try
        {
            this->shim().Task(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opcode(Windows::Foundation::Diagnostics::LoggingOpcode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Opcode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Opcode(Windows::Foundation::Diagnostics::LoggingOpcode value) noexcept override
    {
        try
        {
            this->shim().Opcode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ActivityId(GUID value) noexcept override
    {
        try
        {
            this->shim().ActivityId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelatedActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelatedActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelatedActivityId(GUID value) noexcept override
    {
        try
        {
            this->shim().RelatedActivityId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingOptionsFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingOptionsFactory>
{
    HRESULT __stdcall abi_CreateWithKeywords(int64_t keywords, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingOptions> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithKeywords(keywords));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingSession> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingSession>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveToFileAsync(abi_arg_in<Windows::Storage::IStorageFolder> folder, abi_arg_in<hstring> fileName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SaveToFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&folder), *reinterpret_cast<const hstring *>(&fileName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddLoggingChannel(abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannel> loggingChannel) noexcept override
    {
        try
        {
            this->shim().AddLoggingChannel(*reinterpret_cast<const Windows::Foundation::Diagnostics::ILoggingChannel *>(&loggingChannel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddLoggingChannelWithLevel(abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannel> loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) noexcept override
    {
        try
        {
            this->shim().AddLoggingChannel(*reinterpret_cast<const Windows::Foundation::Diagnostics::ILoggingChannel *>(&loggingChannel), maxLevel);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveLoggingChannel(abi_arg_in<Windows::Foundation::Diagnostics::ILoggingChannel> loggingChannel) noexcept override
    {
        try
        {
            this->shim().RemoveLoggingChannel(*reinterpret_cast<const Windows::Foundation::Diagnostics::ILoggingChannel *>(&loggingChannel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingSessionFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingSessionFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingSession> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingTarget> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingTarget>
{
    HRESULT __stdcall abi_IsEnabled(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEnabledWithLevel(Windows::Foundation::Diagnostics::LoggingLevel level, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsEnabled(level));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEnabledWithLevelAndKeywords(Windows::Foundation::Diagnostics::LoggingLevel level, int64_t keywords, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsEnabled(level, keywords));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogEvent(abi_arg_in<hstring> eventName) noexcept override
    {
        try
        {
            this->shim().LogEvent(*reinterpret_cast<const hstring *>(&eventName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogEventWithFields(abi_arg_in<hstring> eventName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingFields> fields) noexcept override
    {
        try
        {
            this->shim().LogEvent(*reinterpret_cast<const hstring *>(&eventName), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingFields *>(&fields));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogEventWithFieldsAndLevel(abi_arg_in<hstring> eventName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingFields> fields, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept override
    {
        try
        {
            this->shim().LogEvent(*reinterpret_cast<const hstring *>(&eventName), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingFields *>(&fields), level);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogEventWithFieldsAndOptions(abi_arg_in<hstring> eventName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingFields> fields, Windows::Foundation::Diagnostics::LoggingLevel level, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingOptions> options) noexcept override
    {
        try
        {
            this->shim().LogEvent(*reinterpret_cast<const hstring *>(&eventName), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingFields *>(&fields), level, *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingOptions *>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartActivity(abi_arg_in<hstring> startEventName, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingActivity> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().StartActivity(*reinterpret_cast<const hstring *>(&startEventName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartActivityWithFields(abi_arg_in<hstring> startEventName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingFields> fields, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingActivity> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().StartActivity(*reinterpret_cast<const hstring *>(&startEventName), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingFields *>(&fields)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartActivityWithFieldsAndLevel(abi_arg_in<hstring> startEventName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingFields> fields, Windows::Foundation::Diagnostics::LoggingLevel level, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingActivity> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().StartActivity(*reinterpret_cast<const hstring *>(&startEventName), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingFields *>(&fields), level));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartActivityWithFieldsAndOptions(abi_arg_in<hstring> startEventName, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingFields> fields, Windows::Foundation::Diagnostics::LoggingLevel level, abi_arg_in<Windows::Foundation::Diagnostics::ILoggingOptions> options, abi_arg_out<Windows::Foundation::Diagnostics::ILoggingActivity> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().StartActivity(*reinterpret_cast<const hstring *>(&startEventName), *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingFields *>(&fields), level, *reinterpret_cast<const Windows::Foundation::Diagnostics::LoggingOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> : produce_base<D, Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>
{
    HRESULT __stdcall get_Enabled(bool * enabled) noexcept override
    {
        try
        {
            *enabled = detach(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TraceLevel(Windows::Foundation::Diagnostics::CausalityTraceLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TraceLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Foundation::Diagnostics {

template <typename D> bool impl_ITracingStatusChangedEventArgs<D>::Enabled() const
{
    bool enabled {};
    check_hresult(static_cast<const ITracingStatusChangedEventArgs &>(static_cast<const D &>(*this))->get_Enabled(&enabled));
    return enabled;
}

template <typename D> Windows::Foundation::Diagnostics::CausalityTraceLevel impl_ITracingStatusChangedEventArgs<D>::TraceLevel() const
{
    Windows::Foundation::Diagnostics::CausalityTraceLevel value {};
    check_hresult(static_cast<const ITracingStatusChangedEventArgs &>(static_cast<const D &>(*this))->get_TraceLevel(&value));
    return value;
}

template <typename D> void impl_IAsyncCausalityTracerStatics<D>::TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, hstring_ref operationName, uint64_t relatedContext) const
{
    check_hresult(static_cast<const IAsyncCausalityTracerStatics &>(static_cast<const D &>(*this))->abi_TraceOperationCreation(traceLevel, source, platformId, operationId, get(operationName), relatedContext));
}

template <typename D> void impl_IAsyncCausalityTracerStatics<D>::TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::AsyncStatus status) const
{
    check_hresult(static_cast<const IAsyncCausalityTracerStatics &>(static_cast<const D &>(*this))->abi_TraceOperationCompletion(traceLevel, source, platformId, operationId, status));
}

template <typename D> void impl_IAsyncCausalityTracerStatics<D>::TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation relation) const
{
    check_hresult(static_cast<const IAsyncCausalityTracerStatics &>(static_cast<const D &>(*this))->abi_TraceOperationRelation(traceLevel, source, platformId, operationId, relation));
}

template <typename D> void impl_IAsyncCausalityTracerStatics<D>::TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) const
{
    check_hresult(static_cast<const IAsyncCausalityTracerStatics &>(static_cast<const D &>(*this))->abi_TraceSynchronousWorkStart(traceLevel, source, platformId, operationId, work));
}

template <typename D> void impl_IAsyncCausalityTracerStatics<D>::TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) const
{
    check_hresult(static_cast<const IAsyncCausalityTracerStatics &>(static_cast<const D &>(*this))->abi_TraceSynchronousWorkCompletion(traceLevel, source, work));
}

template <typename D> event_token impl_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(const Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IAsyncCausalityTracerStatics &>(static_cast<const D &>(*this))->add_TracingStatusChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IAsyncCausalityTracerStatics> impl_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAsyncCausalityTracerStatics>(this, &ABI::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics::remove_TracingStatusChanged, TracingStatusChanged(handler));
}

template <typename D> void impl_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(event_token cookie) const
{
    check_hresult(static_cast<const IAsyncCausalityTracerStatics &>(static_cast<const D &>(*this))->remove_TracingStatusChanged(cookie));
}

template <typename D> void impl_IErrorReportingSettings<D>::SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions value) const
{
    check_hresult(static_cast<const IErrorReportingSettings &>(static_cast<const D &>(*this))->abi_SetErrorOptions(value));
}

template <typename D> Windows::Foundation::Diagnostics::ErrorOptions impl_IErrorReportingSettings<D>::GetErrorOptions() const
{
    Windows::Foundation::Diagnostics::ErrorOptions value {};
    check_hresult(static_cast<const IErrorReportingSettings &>(static_cast<const D &>(*this))->abi_GetErrorOptions(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> impl_IErrorDetailsStatics<D>::CreateFromHResultAsync(int32_t errorCode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> operation;
    check_hresult(static_cast<const IErrorDetailsStatics &>(static_cast<const D &>(*this))->abi_CreateFromHResultAsync(errorCode, put(operation)));
    return operation;
}

template <typename D> hstring impl_IErrorDetails<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IErrorDetails &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> hstring impl_IErrorDetails<D>::LongDescription() const
{
    hstring value;
    check_hresult(static_cast<const IErrorDetails &>(static_cast<const D &>(*this))->get_LongDescription(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IErrorDetails<D>::HelpUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IErrorDetails &>(static_cast<const D &>(*this))->get_HelpUri(put(value)));
    return value;
}

template <typename D> int64_t impl_ILoggingOptions<D>::Keywords() const
{
    int64_t value {};
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->get_Keywords(&value));
    return value;
}

template <typename D> void impl_ILoggingOptions<D>::Keywords(int64_t value) const
{
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->put_Keywords(value));
}

template <typename D> int32_t impl_ILoggingOptions<D>::Tags() const
{
    int32_t value {};
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->get_Tags(&value));
    return value;
}

template <typename D> void impl_ILoggingOptions<D>::Tags(int32_t value) const
{
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->put_Tags(value));
}

template <typename D> int16_t impl_ILoggingOptions<D>::Task() const
{
    int16_t value {};
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->get_Task(&value));
    return value;
}

template <typename D> void impl_ILoggingOptions<D>::Task(int16_t value) const
{
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->put_Task(value));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingOpcode impl_ILoggingOptions<D>::Opcode() const
{
    Windows::Foundation::Diagnostics::LoggingOpcode value {};
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->get_Opcode(&value));
    return value;
}

template <typename D> void impl_ILoggingOptions<D>::Opcode(Windows::Foundation::Diagnostics::LoggingOpcode value) const
{
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->put_Opcode(value));
}

template <typename D> GUID impl_ILoggingOptions<D>::ActivityId() const
{
    GUID value {};
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->get_ActivityId(&value));
    return value;
}

template <typename D> void impl_ILoggingOptions<D>::ActivityId(GUID value) const
{
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->put_ActivityId(value));
}

template <typename D> GUID impl_ILoggingOptions<D>::RelatedActivityId() const
{
    GUID value {};
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->get_RelatedActivityId(&value));
    return value;
}

template <typename D> void impl_ILoggingOptions<D>::RelatedActivityId(GUID value) const
{
    check_hresult(static_cast<const ILoggingOptions &>(static_cast<const D &>(*this))->put_RelatedActivityId(value));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingOptions impl_ILoggingOptionsFactory<D>::CreateWithKeywords(int64_t keywords) const
{
    Windows::Foundation::Diagnostics::LoggingOptions result { nullptr };
    check_hresult(static_cast<const ILoggingOptionsFactory &>(static_cast<const D &>(*this))->abi_CreateWithKeywords(keywords, put(result)));
    return result;
}

template <typename D> GUID impl_ILoggingChannelOptions<D>::Group() const
{
    GUID value {};
    check_hresult(static_cast<const ILoggingChannelOptions &>(static_cast<const D &>(*this))->get_Group(&value));
    return value;
}

template <typename D> void impl_ILoggingChannelOptions<D>::Group(GUID value) const
{
    check_hresult(static_cast<const ILoggingChannelOptions &>(static_cast<const D &>(*this))->put_Group(value));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannelOptions impl_ILoggingChannelOptionsFactory<D>::Create(GUID group) const
{
    Windows::Foundation::Diagnostics::LoggingChannelOptions result { nullptr };
    check_hresult(static_cast<const ILoggingChannelOptionsFactory &>(static_cast<const D &>(*this))->abi_Create(group, put(result)));
    return result;
}

template <typename D> void impl_ILoggingFields<D>::Clear() const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> void impl_ILoggingFields<D>::BeginStruct(hstring_ref name) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_BeginStruct(get(name)));
}

template <typename D> void impl_ILoggingFields<D>::BeginStruct(hstring_ref name, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_BeginStructWithTags(get(name), tags));
}

template <typename D> void impl_ILoggingFields<D>::EndStruct() const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_EndStruct());
}

template <typename D> void impl_ILoggingFields<D>::AddEmpty(hstring_ref name) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddEmpty(get(name)));
}

template <typename D> void impl_ILoggingFields<D>::AddEmpty(hstring_ref name, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddEmptyWithFormat(get(name), format));
}

template <typename D> void impl_ILoggingFields<D>::AddEmpty(hstring_ref name, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddEmptyWithFormatAndTags(get(name), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt8(hstring_ref name, uint8_t value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt8(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt8(hstring_ref name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt8WithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt8(hstring_ref name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt8WithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt8Array(hstring_ref name, array_ref<const uint8_t> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt8Array(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt8Array(hstring_ref name, array_ref<const uint8_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt8ArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt8Array(hstring_ref name, array_ref<const uint8_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt8ArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddInt16(hstring_ref name, int16_t value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt16(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddInt16(hstring_ref name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt16WithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddInt16(hstring_ref name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt16WithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddInt16Array(hstring_ref name, array_ref<const int16_t> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt16Array(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddInt16Array(hstring_ref name, array_ref<const int16_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt16ArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddInt16Array(hstring_ref name, array_ref<const int16_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt16ArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt16(hstring_ref name, uint16_t value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt16(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt16(hstring_ref name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt16WithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt16(hstring_ref name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt16WithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt16Array(hstring_ref name, array_ref<const uint16_t> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt16Array(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt16Array(hstring_ref name, array_ref<const uint16_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt16ArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt16Array(hstring_ref name, array_ref<const uint16_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt16ArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddInt32(hstring_ref name, int32_t value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt32(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddInt32(hstring_ref name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt32WithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddInt32(hstring_ref name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt32WithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddInt32Array(hstring_ref name, array_ref<const int32_t> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt32Array(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddInt32Array(hstring_ref name, array_ref<const int32_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt32ArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddInt32Array(hstring_ref name, array_ref<const int32_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt32ArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt32(hstring_ref name, uint32_t value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt32(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt32(hstring_ref name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt32WithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt32(hstring_ref name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt32WithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt32Array(hstring_ref name, array_ref<const uint32_t> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt32Array(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt32Array(hstring_ref name, array_ref<const uint32_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt32ArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt32Array(hstring_ref name, array_ref<const uint32_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt32ArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddInt64(hstring_ref name, int64_t value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt64(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddInt64(hstring_ref name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt64WithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddInt64(hstring_ref name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt64WithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddInt64Array(hstring_ref name, array_ref<const int64_t> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt64Array(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddInt64Array(hstring_ref name, array_ref<const int64_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt64ArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddInt64Array(hstring_ref name, array_ref<const int64_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddInt64ArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt64(hstring_ref name, uint64_t value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt64(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt64(hstring_ref name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt64WithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt64(hstring_ref name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt64WithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt64Array(hstring_ref name, array_ref<const uint64_t> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt64Array(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt64Array(hstring_ref name, array_ref<const uint64_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt64ArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddUInt64Array(hstring_ref name, array_ref<const uint64_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddUInt64ArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddSingle(hstring_ref name, float value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSingle(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddSingle(hstring_ref name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSingleWithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddSingle(hstring_ref name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSingleWithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddSingleArray(hstring_ref name, array_ref<const float> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSingleArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddSingleArray(hstring_ref name, array_ref<const float> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSingleArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddSingleArray(hstring_ref name, array_ref<const float> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSingleArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddDouble(hstring_ref name, double value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDouble(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddDouble(hstring_ref name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDoubleWithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddDouble(hstring_ref name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDoubleWithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddDoubleArray(hstring_ref name, array_ref<const double> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDoubleArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddDoubleArray(hstring_ref name, array_ref<const double> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDoubleArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddDoubleArray(hstring_ref name, array_ref<const double> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDoubleArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddChar16(hstring_ref name, wchar_t value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddChar16(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddChar16(hstring_ref name, wchar_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddChar16WithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddChar16(hstring_ref name, wchar_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddChar16WithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddChar16Array(hstring_ref name, array_ref<const wchar_t> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddChar16Array(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddChar16Array(hstring_ref name, array_ref<const wchar_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddChar16ArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddChar16Array(hstring_ref name, array_ref<const wchar_t> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddChar16ArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddBoolean(hstring_ref name, bool value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddBoolean(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddBoolean(hstring_ref name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddBooleanWithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddBoolean(hstring_ref name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddBooleanWithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddBooleanArray(hstring_ref name, array_ref<const bool> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddBooleanArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddBooleanArray(hstring_ref name, array_ref<const bool> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddBooleanArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddBooleanArray(hstring_ref name, array_ref<const bool> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddBooleanArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddString(hstring_ref name, hstring_ref value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddString(get(name), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddString(hstring_ref name, hstring_ref value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddStringWithFormat(get(name), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddString(hstring_ref name, hstring_ref value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddStringWithFormatAndTags(get(name), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddStringArray(hstring_ref name, array_ref<const hstring> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddStringArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddStringArray(hstring_ref name, array_ref<const hstring> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddStringArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddStringArray(hstring_ref name, array_ref<const hstring> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddStringArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddGuid(hstring_ref name, GUID value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddGuid(get(name), value));
}

template <typename D> void impl_ILoggingFields<D>::AddGuid(hstring_ref name, GUID value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddGuidWithFormat(get(name), value, format));
}

template <typename D> void impl_ILoggingFields<D>::AddGuid(hstring_ref name, GUID value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddGuidWithFormatAndTags(get(name), value, format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddGuidArray(hstring_ref name, array_ref<const GUID> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddGuidArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddGuidArray(hstring_ref name, array_ref<const GUID> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddGuidArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddGuidArray(hstring_ref name, array_ref<const GUID> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddGuidArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddDateTime(hstring_ref name, const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDateTime(get(name), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddDateTime(hstring_ref name, const Windows::Foundation::DateTime & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDateTimeWithFormat(get(name), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddDateTime(hstring_ref name, const Windows::Foundation::DateTime & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDateTimeWithFormatAndTags(get(name), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddDateTimeArray(hstring_ref name, array_ref<const Windows::Foundation::DateTime> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDateTimeArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddDateTimeArray(hstring_ref name, array_ref<const Windows::Foundation::DateTime> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDateTimeArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddDateTimeArray(hstring_ref name, array_ref<const Windows::Foundation::DateTime> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddDateTimeArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddTimeSpan(hstring_ref name, const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddTimeSpan(get(name), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddTimeSpan(hstring_ref name, const Windows::Foundation::TimeSpan & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddTimeSpanWithFormat(get(name), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddTimeSpan(hstring_ref name, const Windows::Foundation::TimeSpan & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddTimeSpanWithFormatAndTags(get(name), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddTimeSpanArray(hstring_ref name, array_ref<const Windows::Foundation::TimeSpan> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddTimeSpanArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddTimeSpanArray(hstring_ref name, array_ref<const Windows::Foundation::TimeSpan> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddTimeSpanArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddTimeSpanArray(hstring_ref name, array_ref<const Windows::Foundation::TimeSpan> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddTimeSpanArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddPoint(hstring_ref name, const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddPoint(get(name), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddPoint(hstring_ref name, const Windows::Foundation::Point & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddPointWithFormat(get(name), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddPoint(hstring_ref name, const Windows::Foundation::Point & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddPointWithFormatAndTags(get(name), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddPointArray(hstring_ref name, array_ref<const Windows::Foundation::Point> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddPointArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddPointArray(hstring_ref name, array_ref<const Windows::Foundation::Point> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddPointArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddPointArray(hstring_ref name, array_ref<const Windows::Foundation::Point> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddPointArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddSize(hstring_ref name, const Windows::Foundation::Size & value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSize(get(name), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddSize(hstring_ref name, const Windows::Foundation::Size & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSizeWithFormat(get(name), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddSize(hstring_ref name, const Windows::Foundation::Size & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSizeWithFormatAndTags(get(name), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddSizeArray(hstring_ref name, array_ref<const Windows::Foundation::Size> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSizeArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddSizeArray(hstring_ref name, array_ref<const Windows::Foundation::Size> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSizeArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddSizeArray(hstring_ref name, array_ref<const Windows::Foundation::Size> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddSizeArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddRect(hstring_ref name, const Windows::Foundation::Rect & value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddRect(get(name), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddRect(hstring_ref name, const Windows::Foundation::Rect & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddRectWithFormat(get(name), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddRect(hstring_ref name, const Windows::Foundation::Rect & value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddRectWithFormatAndTags(get(name), get(value), format, tags));
}

template <typename D> void impl_ILoggingFields<D>::AddRectArray(hstring_ref name, array_ref<const Windows::Foundation::Rect> value) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddRectArray(get(name), value.size(), get(value)));
}

template <typename D> void impl_ILoggingFields<D>::AddRectArray(hstring_ref name, array_ref<const Windows::Foundation::Rect> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddRectArrayWithFormat(get(name), value.size(), get(value), format));
}

template <typename D> void impl_ILoggingFields<D>::AddRectArray(hstring_ref name, array_ref<const Windows::Foundation::Rect> value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) const
{
    check_hresult(static_cast<const ILoggingFields &>(static_cast<const D &>(*this))->abi_AddRectArrayWithFormatAndTags(get(name), value.size(), get(value), format, tags));
}

template <typename D> bool impl_ILoggingTarget<D>::IsEnabled() const
{
    bool result {};
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_IsEnabled(&result));
    return result;
}

template <typename D> bool impl_ILoggingTarget<D>::IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel level) const
{
    bool result {};
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_IsEnabledWithLevel(level, &result));
    return result;
}

template <typename D> bool impl_ILoggingTarget<D>::IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel level, int64_t keywords) const
{
    bool result {};
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_IsEnabledWithLevelAndKeywords(level, keywords, &result));
    return result;
}

template <typename D> void impl_ILoggingTarget<D>::LogEvent(hstring_ref eventName) const
{
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_LogEvent(get(eventName)));
}

template <typename D> void impl_ILoggingTarget<D>::LogEvent(hstring_ref eventName, const Windows::Foundation::Diagnostics::LoggingFields & fields) const
{
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_LogEventWithFields(get(eventName), get(fields)));
}

template <typename D> void impl_ILoggingTarget<D>::LogEvent(hstring_ref eventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, Windows::Foundation::Diagnostics::LoggingLevel level) const
{
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_LogEventWithFieldsAndLevel(get(eventName), get(fields), level));
}

template <typename D> void impl_ILoggingTarget<D>::LogEvent(hstring_ref eventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, Windows::Foundation::Diagnostics::LoggingLevel level, const Windows::Foundation::Diagnostics::LoggingOptions & options) const
{
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_LogEventWithFieldsAndOptions(get(eventName), get(fields), level, get(options)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity impl_ILoggingTarget<D>::StartActivity(hstring_ref startEventName) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result { nullptr };
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_StartActivity(get(startEventName), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity impl_ILoggingTarget<D>::StartActivity(hstring_ref startEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result { nullptr };
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_StartActivityWithFields(get(startEventName), get(fields), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity impl_ILoggingTarget<D>::StartActivity(hstring_ref startEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, Windows::Foundation::Diagnostics::LoggingLevel level) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result { nullptr };
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_StartActivityWithFieldsAndLevel(get(startEventName), get(fields), level, put(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity impl_ILoggingTarget<D>::StartActivity(hstring_ref startEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, Windows::Foundation::Diagnostics::LoggingLevel level, const Windows::Foundation::Diagnostics::LoggingOptions & options) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result { nullptr };
    check_hresult(static_cast<const ILoggingTarget &>(static_cast<const D &>(*this))->abi_StartActivityWithFieldsAndOptions(get(startEventName), get(fields), level, get(options), put(result)));
    return result;
}

template <typename D> hstring impl_ILoggingChannel<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> bool impl_ILoggingChannel<D>::Enabled() const
{
    bool value {};
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->get_Enabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingLevel impl_ILoggingChannel<D>::Level() const
{
    Windows::Foundation::Diagnostics::LoggingLevel value {};
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->get_Level(&value));
    return value;
}

template <typename D> void impl_ILoggingChannel<D>::LogMessage(hstring_ref eventString) const
{
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->abi_LogMessage(get(eventString)));
}

template <typename D> void impl_ILoggingChannel<D>::LogMessage(hstring_ref eventString, Windows::Foundation::Diagnostics::LoggingLevel level) const
{
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->abi_LogMessageWithLevel(get(eventString), level));
}

template <typename D> void impl_ILoggingChannel<D>::LogValuePair(hstring_ref value1, int32_t value2) const
{
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->abi_LogValuePair(get(value1), value2));
}

template <typename D> void impl_ILoggingChannel<D>::LogValuePair(hstring_ref value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel level) const
{
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->abi_LogValuePairWithLevel(get(value1), value2, level));
}

template <typename D> event_token impl_ILoggingChannel<D>::LoggingEnabled(const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->add_LoggingEnabled(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ILoggingChannel> impl_ILoggingChannel<D>::LoggingEnabled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ILoggingChannel>(this, &ABI::Windows::Foundation::Diagnostics::ILoggingChannel::remove_LoggingEnabled, LoggingEnabled(handler));
}

template <typename D> void impl_ILoggingChannel<D>::LoggingEnabled(event_token token) const
{
    check_hresult(static_cast<const ILoggingChannel &>(static_cast<const D &>(*this))->remove_LoggingEnabled(token));
}

template <typename D> GUID impl_ILoggingChannel2<D>::Id() const
{
    GUID value {};
    check_hresult(static_cast<const ILoggingChannel2 &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel impl_ILoggingChannelFactory<D>::Create(hstring_ref name) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result { nullptr };
    check_hresult(static_cast<const ILoggingChannelFactory &>(static_cast<const D &>(*this))->abi_Create(get(name), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel impl_ILoggingChannelFactory2<D>::CreateWithOptions(hstring_ref name, const Windows::Foundation::Diagnostics::LoggingChannelOptions & options) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result { nullptr };
    check_hresult(static_cast<const ILoggingChannelFactory2 &>(static_cast<const D &>(*this))->abi_CreateWithOptions(get(name), get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel impl_ILoggingChannelFactory2<D>::CreateWithOptionsAndId(hstring_ref name, const Windows::Foundation::Diagnostics::LoggingChannelOptions & options, GUID id) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result { nullptr };
    check_hresult(static_cast<const ILoggingChannelFactory2 &>(static_cast<const D &>(*this))->abi_CreateWithOptionsAndId(get(name), get(options), id, put(result)));
    return result;
}

template <typename D> hstring impl_ILoggingActivity<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const ILoggingActivity &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> GUID impl_ILoggingActivity<D>::Id() const
{
    GUID value {};
    check_hresult(static_cast<const ILoggingActivity &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel impl_ILoggingActivity2<D>::Channel() const
{
    Windows::Foundation::Diagnostics::LoggingChannel value { nullptr };
    check_hresult(static_cast<const ILoggingActivity2 &>(static_cast<const D &>(*this))->get_Channel(put(value)));
    return value;
}

template <typename D> void impl_ILoggingActivity2<D>::StopActivity(hstring_ref stopEventName) const
{
    check_hresult(static_cast<const ILoggingActivity2 &>(static_cast<const D &>(*this))->abi_StopActivity(get(stopEventName)));
}

template <typename D> void impl_ILoggingActivity2<D>::StopActivity(hstring_ref stopEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields) const
{
    check_hresult(static_cast<const ILoggingActivity2 &>(static_cast<const D &>(*this))->abi_StopActivityWithFields(get(stopEventName), get(fields)));
}

template <typename D> void impl_ILoggingActivity2<D>::StopActivity(hstring_ref stopEventName, const Windows::Foundation::Diagnostics::LoggingFields & fields, const Windows::Foundation::Diagnostics::LoggingOptions & options) const
{
    check_hresult(static_cast<const ILoggingActivity2 &>(static_cast<const D &>(*this))->abi_StopActivityWithFieldsAndOptions(get(stopEventName), get(fields), get(options)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity impl_ILoggingActivityFactory<D>::CreateLoggingActivity(hstring_ref activityName, const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const
{
    Windows::Foundation::Diagnostics::LoggingActivity loggingActivity { nullptr };
    check_hresult(static_cast<const ILoggingActivityFactory &>(static_cast<const D &>(*this))->abi_CreateLoggingActivity(get(activityName), get(loggingChannel), put(loggingActivity)));
    return loggingActivity;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity impl_ILoggingActivityFactory<D>::CreateLoggingActivityWithLevel(hstring_ref activityName, const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel level) const
{
    Windows::Foundation::Diagnostics::LoggingActivity loggingActivity { nullptr };
    check_hresult(static_cast<const ILoggingActivityFactory &>(static_cast<const D &>(*this))->abi_CreateLoggingActivityWithLevel(get(activityName), get(loggingChannel), level, put(loggingActivity)));
    return loggingActivity;
}

template <typename D> hstring impl_ILoggingSession<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const ILoggingSession &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_ILoggingSession<D>::SaveToFileAsync(const Windows::Storage::IStorageFolder & folder, hstring_ref fileName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const ILoggingSession &>(static_cast<const D &>(*this))->abi_SaveToFileAsync(get(folder), get(fileName), put(operation)));
    return operation;
}

template <typename D> void impl_ILoggingSession<D>::AddLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const
{
    check_hresult(static_cast<const ILoggingSession &>(static_cast<const D &>(*this))->abi_AddLoggingChannel(get(loggingChannel)));
}

template <typename D> void impl_ILoggingSession<D>::AddLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) const
{
    check_hresult(static_cast<const ILoggingSession &>(static_cast<const D &>(*this))->abi_AddLoggingChannelWithLevel(get(loggingChannel), maxLevel));
}

template <typename D> void impl_ILoggingSession<D>::RemoveLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const
{
    check_hresult(static_cast<const ILoggingSession &>(static_cast<const D &>(*this))->abi_RemoveLoggingChannel(get(loggingChannel)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingSession impl_ILoggingSessionFactory<D>::Create(hstring_ref name) const
{
    Windows::Foundation::Diagnostics::LoggingSession result { nullptr };
    check_hresult(static_cast<const ILoggingSessionFactory &>(static_cast<const D &>(*this))->abi_Create(get(name), put(result)));
    return result;
}

template <typename D> Windows::Storage::StorageFile impl_ILogFileGeneratedEventArgs<D>::File() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(static_cast<const ILogFileGeneratedEventArgs &>(static_cast<const D &>(*this))->get_File(put(value)));
    return value;
}

template <typename D> hstring impl_IFileLoggingSession<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IFileLoggingSession &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IFileLoggingSession<D>::AddLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const
{
    check_hresult(static_cast<const IFileLoggingSession &>(static_cast<const D &>(*this))->abi_AddLoggingChannel(get(loggingChannel)));
}

template <typename D> void impl_IFileLoggingSession<D>::AddLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) const
{
    check_hresult(static_cast<const IFileLoggingSession &>(static_cast<const D &>(*this))->abi_AddLoggingChannelWithLevel(get(loggingChannel), maxLevel));
}

template <typename D> void impl_IFileLoggingSession<D>::RemoveLoggingChannel(const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) const
{
    check_hresult(static_cast<const IFileLoggingSession &>(static_cast<const D &>(*this))->abi_RemoveLoggingChannel(get(loggingChannel)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IFileLoggingSession<D>::CloseAndSaveToFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IFileLoggingSession &>(static_cast<const D &>(*this))->abi_CloseAndSaveToFileAsync(put(operation)));
    return operation;
}

template <typename D> event_token impl_IFileLoggingSession<D>::LogFileGenerated(const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IFileLoggingSession &>(static_cast<const D &>(*this))->add_LogFileGenerated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IFileLoggingSession> impl_IFileLoggingSession<D>::LogFileGenerated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IFileLoggingSession>(this, &ABI::Windows::Foundation::Diagnostics::IFileLoggingSession::remove_LogFileGenerated, LogFileGenerated(handler));
}

template <typename D> void impl_IFileLoggingSession<D>::LogFileGenerated(event_token token) const
{
    check_hresult(static_cast<const IFileLoggingSession &>(static_cast<const D &>(*this))->remove_LogFileGenerated(token));
}

template <typename D> Windows::Foundation::Diagnostics::FileLoggingSession impl_IFileLoggingSessionFactory<D>::Create(hstring_ref name) const
{
    Windows::Foundation::Diagnostics::FileLoggingSession result { nullptr };
    check_hresult(static_cast<const IFileLoggingSessionFactory &>(static_cast<const D &>(*this))->abi_Create(get(name), put(result)));
    return result;
}

inline void AsyncCausalityTracer::TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, hstring_ref operationName, uint64_t relatedContext)
{
    get_activation_factory<AsyncCausalityTracer, IAsyncCausalityTracerStatics>().TraceOperationCreation(traceLevel, source, platformId, operationId, operationName, relatedContext);
}

inline void AsyncCausalityTracer::TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::AsyncStatus status)
{
    get_activation_factory<AsyncCausalityTracer, IAsyncCausalityTracerStatics>().TraceOperationCompletion(traceLevel, source, platformId, operationId, status);
}

inline void AsyncCausalityTracer::TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation relation)
{
    get_activation_factory<AsyncCausalityTracer, IAsyncCausalityTracerStatics>().TraceOperationRelation(traceLevel, source, platformId, operationId, relation);
}

inline void AsyncCausalityTracer::TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, GUID platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork work)
{
    get_activation_factory<AsyncCausalityTracer, IAsyncCausalityTracerStatics>().TraceSynchronousWorkStart(traceLevel, source, platformId, operationId, work);
}

inline void AsyncCausalityTracer::TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, Windows::Foundation::Diagnostics::CausalitySynchronousWork work)
{
    get_activation_factory<AsyncCausalityTracer, IAsyncCausalityTracerStatics>().TraceSynchronousWorkCompletion(traceLevel, source, work);
}

inline event_token AsyncCausalityTracer::TracingStatusChanged(const Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> & handler)
{
    return get_activation_factory<AsyncCausalityTracer, IAsyncCausalityTracerStatics>().TracingStatusChanged(handler);
}

inline factory_event_revoker<IAsyncCausalityTracerStatics> AsyncCausalityTracer::TracingStatusChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> & handler)
{
    auto factory = get_activation_factory<AsyncCausalityTracer, IAsyncCausalityTracerStatics>();
    return { factory, &ABI::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics::remove_TracingStatusChanged, factory.TracingStatusChanged(handler) };
}

inline void AsyncCausalityTracer::TracingStatusChanged(event_token cookie)
{
    get_activation_factory<AsyncCausalityTracer, IAsyncCausalityTracerStatics>().TracingStatusChanged(cookie);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> ErrorDetails::CreateFromHResultAsync(int32_t errorCode)
{
    return get_activation_factory<ErrorDetails, IErrorDetailsStatics>().CreateFromHResultAsync(errorCode);
}

inline FileLoggingSession::FileLoggingSession(hstring_ref name) :
    FileLoggingSession(get_activation_factory<FileLoggingSession, IFileLoggingSessionFactory>().Create(name))
{}

inline LoggingActivity::LoggingActivity(hstring_ref activityName, const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel) :
    LoggingActivity(get_activation_factory<LoggingActivity, ILoggingActivityFactory>().CreateLoggingActivity(activityName, loggingChannel))
{}

inline LoggingActivity::LoggingActivity(hstring_ref activityName, const Windows::Foundation::Diagnostics::ILoggingChannel & loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel level) :
    LoggingActivity(get_activation_factory<LoggingActivity, ILoggingActivityFactory>().CreateLoggingActivityWithLevel(activityName, loggingChannel, level))
{}

inline LoggingChannel::LoggingChannel(hstring_ref name, const Windows::Foundation::Diagnostics::LoggingChannelOptions & options) :
    LoggingChannel(get_activation_factory<LoggingChannel, ILoggingChannelFactory2>().CreateWithOptions(name, options))
{}

inline LoggingChannel::LoggingChannel(hstring_ref name, const Windows::Foundation::Diagnostics::LoggingChannelOptions & options, GUID id) :
    LoggingChannel(get_activation_factory<LoggingChannel, ILoggingChannelFactory2>().CreateWithOptionsAndId(name, options, id))
{}

inline LoggingChannel::LoggingChannel(hstring_ref name) :
    LoggingChannel(get_activation_factory<LoggingChannel, ILoggingChannelFactory>().Create(name))
{}

inline LoggingChannelOptions::LoggingChannelOptions() :
    LoggingChannelOptions(activate_instance<LoggingChannelOptions>())
{}

inline LoggingChannelOptions::LoggingChannelOptions(GUID group) :
    LoggingChannelOptions(get_activation_factory<LoggingChannelOptions, ILoggingChannelOptionsFactory>().Create(group))
{}

inline LoggingFields::LoggingFields() :
    LoggingFields(activate_instance<LoggingFields>())
{}

inline LoggingOptions::LoggingOptions() :
    LoggingOptions(activate_instance<LoggingOptions>())
{}

inline LoggingOptions::LoggingOptions(int64_t keywords) :
    LoggingOptions(get_activation_factory<LoggingOptions, ILoggingOptionsFactory>().CreateWithKeywords(keywords))
{}

inline LoggingSession::LoggingSession(hstring_ref name) :
    LoggingSession(get_activation_factory<LoggingSession, ILoggingSessionFactory>().Create(name))
{}

inline RuntimeBrokerErrorSettings::RuntimeBrokerErrorSettings() :
    RuntimeBrokerErrorSettings(activate_instance<RuntimeBrokerErrorSettings>())
{}

}

}
