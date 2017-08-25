// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Foundation.Diagnostics.2.h"
#include "winrt/Windows.Foundation.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceOperationCreation(get_abi(traceLevel), get_abi(source), get_abi(platformId), operationId, get_abi(operationName), relatedContext));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceOperationCompletion(get_abi(traceLevel), get_abi(source), get_abi(platformId), operationId, get_abi(status)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceOperationRelation(get_abi(traceLevel), get_abi(source), get_abi(platformId), operationId, get_abi(relation)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceSynchronousWorkStart(get_abi(traceLevel), get_abi(source), get_abi(platformId), operationId, get_abi(work)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceSynchronousWorkCompletion(get_abi(traceLevel), get_abi(source), get_abi(work)));
}

template <typename D> event_token consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->add_TracingStatusChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>(this, &abi_t<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>::remove_TracingStatusChanged, TracingStatusChanged(handler));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->remove_TracingStatusChanged(get_abi(cookie)));
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_IErrorDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_IErrorDetails<D>::LongDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorDetails)->get_LongDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Foundation_Diagnostics_IErrorDetails<D>::HelpUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorDetails)->get_HelpUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> consume_Windows_Foundation_Diagnostics_IErrorDetailsStatics<D>::CreateFromHResultAsync(int32_t errorCode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorDetailsStatics)->CreateFromHResultAsync(errorCode, put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IErrorReportingSettings<D>::SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorReportingSettings)->SetErrorOptions(get_abi(value)));
}

template <typename D> Windows::Foundation::Diagnostics::ErrorOptions consume_Windows_Foundation_Diagnostics_IErrorReportingSettings<D>::GetErrorOptions() const
{
    Windows::Foundation::Diagnostics::ErrorOptions value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorReportingSettings)->GetErrorOptions(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->AddLoggingChannel(get_abi(loggingChannel)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->AddLoggingChannelWithLevel(get_abi(loggingChannel), get_abi(maxLevel)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->RemoveLoggingChannel(get_abi(loggingChannel)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::CloseAndSaveToFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->CloseAndSaveToFileAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::LogFileGenerated(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->add_LogFileGenerated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Foundation::Diagnostics::IFileLoggingSession> consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::LogFileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Foundation::Diagnostics::IFileLoggingSession>(this, &abi_t<Windows::Foundation::Diagnostics::IFileLoggingSession>::remove_LogFileGenerated, LogFileGenerated(handler));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::LogFileGenerated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->remove_LogFileGenerated(get_abi(token)));
}

template <typename D> Windows::Foundation::Diagnostics::FileLoggingSession consume_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory<D>::Create(param::hstring const& name) const
{
    Windows::Foundation::Diagnostics::FileLoggingSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSessionFactory)->Create(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs)->get_File(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_ILoggingActivity<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity)->get_Name(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Foundation_Diagnostics_ILoggingActivity<D>::Id() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>::Channel() const
{
    Windows::Foundation::Diagnostics::LoggingChannel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity2)->get_Channel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>::StopActivity(param::hstring const& stopEventName) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity2)->StopActivity(get_abi(stopEventName)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>::StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity2)->StopActivityWithFields(get_abi(stopEventName), get_abi(fields)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>::StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity2)->StopActivityWithFieldsAndOptions(get_abi(stopEventName), get_abi(fields), get_abi(options)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory<D>::CreateLoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    Windows::Foundation::Diagnostics::LoggingActivity loggingActivity{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivityFactory)->CreateLoggingActivity(get_abi(activityName), get_abi(loggingChannel), put_abi(loggingActivity)));
    return loggingActivity;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory<D>::CreateLoggingActivityWithLevel(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    Windows::Foundation::Diagnostics::LoggingActivity loggingActivity{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivityFactory)->CreateLoggingActivityWithLevel(get_abi(activityName), get_abi(loggingChannel), get_abi(level), put_abi(loggingActivity)));
    return loggingActivity;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->get_Name(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->get_Enabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingLevel consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::Level() const
{
    Windows::Foundation::Diagnostics::LoggingLevel value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->get_Level(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LogMessage(param::hstring const& eventString) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->LogMessage(get_abi(eventString)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LogMessage(param::hstring const& eventString, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->LogMessageWithLevel(get_abi(eventString), get_abi(level)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LogValuePair(param::hstring const& value1, int32_t value2) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->LogValuePair(get_abi(value1), value2));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LogValuePair(param::hstring const& value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->LogValuePairWithLevel(get_abi(value1), value2, get_abi(level)));
}

template <typename D> event_token consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LoggingEnabled(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->add_LoggingEnabled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Foundation::Diagnostics::ILoggingChannel> consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LoggingEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Foundation::Diagnostics::ILoggingChannel>(this, &abi_t<Windows::Foundation::Diagnostics::ILoggingChannel>::remove_LoggingEnabled, LoggingEnabled(handler));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LoggingEnabled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->remove_LoggingEnabled(get_abi(token)));
}

template <typename D> GUID consume_Windows_Foundation_Diagnostics_ILoggingChannel2<D>::Id() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel2)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory<D>::Create(param::hstring const& name) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelFactory)->Create(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2<D>::CreateWithOptions(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelFactory2)->CreateWithOptions(get_abi(name), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2<D>::CreateWithOptionsAndId(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, GUID const& id) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelFactory2)->CreateWithOptionsAndId(get_abi(name), get_abi(options), get_abi(id), put_abi(result)));
    return result;
}

template <typename D> GUID consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions<D>::Group() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelOptions)->get_Group(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions<D>::Group(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelOptions)->put_Group(get_abi(value)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannelOptions consume_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory<D>::Create(GUID const& group) const
{
    Windows::Foundation::Diagnostics::LoggingChannelOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory)->Create(get_abi(group), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->Clear());
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::BeginStruct(param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->BeginStruct(get_abi(name)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::BeginStruct(param::hstring const& name, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->BeginStructWithTags(get_abi(name), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::EndStruct() const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->EndStruct());
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddEmpty(param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddEmpty(get_abi(name)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddEmptyWithFormat(get_abi(name), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddEmptyWithFormatAndTags(get_abi(name), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8(param::hstring const& name, uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16(param::hstring const& name, int16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16Array(param::hstring const& name, array_view<int16_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16(param::hstring const& name, uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32(param::hstring const& name, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32Array(param::hstring const& name, array_view<int32_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32(param::hstring const& name, uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64(param::hstring const& name, int64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64Array(param::hstring const& name, array_view<int64_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64(param::hstring const& name, uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingle(param::hstring const& name, float value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingle(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleWithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleWithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingleArray(param::hstring const& name, array_view<float const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDouble(param::hstring const& name, double value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDouble(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleWithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleWithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDoubleArray(param::hstring const& name, array_view<double const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16(param::hstring const& name, char16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16Array(param::hstring const& name, array_view<char16_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBoolean(param::hstring const& name, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBoolean(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanWithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanWithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBooleanArray(param::hstring const& name, array_view<bool const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddString(param::hstring const& name, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddString(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddStringArray(param::hstring const& name, array_view<hstring const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuid(param::hstring const& name, GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuid(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuid(param::hstring const& name, GUID const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuid(param::hstring const& name, GUID const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuidArray(param::hstring const& name, array_view<GUID const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuidArray(param::hstring const& name, array_view<GUID const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuidArray(param::hstring const& name, array_view<GUID const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTime(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpan(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPoint(param::hstring const& name, Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPoint(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSize(param::hstring const& name, Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSize(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRect(param::hstring const& name, Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRect(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> int64_t consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Keywords() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_Keywords(&value));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Keywords(int64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_Keywords(value));
}

template <typename D> int32_t consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Tags() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_Tags(&value));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Tags(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_Tags(value));
}

template <typename D> int16_t consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Task() const
{
    int16_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_Task(&value));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Task(int16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_Task(value));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingOpcode consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Opcode() const
{
    Windows::Foundation::Diagnostics::LoggingOpcode value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_Opcode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Opcode(Windows::Foundation::Diagnostics::LoggingOpcode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_Opcode(get_abi(value)));
}

template <typename D> GUID consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::ActivityId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_ActivityId(get_abi(value)));
}

template <typename D> GUID consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::RelatedActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_RelatedActivityId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::RelatedActivityId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_RelatedActivityId(get_abi(value)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingOptions consume_Windows_Foundation_Diagnostics_ILoggingOptionsFactory<D>::CreateWithKeywords(int64_t keywords) const
{
    Windows::Foundation::Diagnostics::LoggingOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptionsFactory)->CreateWithKeywords(keywords, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::SaveToFileAsync(Windows::Storage::IStorageFolder const& folder, param::hstring const& fileName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->SaveToFileAsync(get_abi(folder), get_abi(fileName), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->AddLoggingChannel(get_abi(loggingChannel)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->AddLoggingChannelWithLevel(get_abi(loggingChannel), get_abi(maxLevel)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->RemoveLoggingChannel(get_abi(loggingChannel)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingSession consume_Windows_Foundation_Diagnostics_ILoggingSessionFactory<D>::Create(param::hstring const& name) const
{
    Windows::Foundation::Diagnostics::LoggingSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSessionFactory)->Create(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::IsEnabled() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->IsEnabled(&result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->IsEnabledWithLevel(get_abi(level), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level, int64_t keywords) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->IsEnabledWithLevelAndKeywords(get_abi(level), keywords, &result));
    return result;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::LogEvent(param::hstring const& eventName) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->LogEvent(get_abi(eventName)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->LogEventWithFields(get_abi(eventName), get_abi(fields)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->LogEventWithFieldsAndLevel(get_abi(eventName), get_abi(fields), get_abi(level)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->LogEventWithFieldsAndOptions(get_abi(eventName), get_abi(fields), get_abi(level), get_abi(options)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::StartActivity(param::hstring const& startEventName) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->StartActivity(get_abi(startEventName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->StartActivityWithFields(get_abi(startEventName), get_abi(fields), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->StartActivityWithFieldsAndLevel(get_abi(startEventName), get_abi(fields), get_abi(level), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->StartActivityWithFieldsAndOptions(get_abi(startEventName), get_abi(fields), get_abi(level), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs<D>::Enabled() const
{
    bool enabled{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs)->get_Enabled(&enabled));
    return enabled;
}

template <typename D> Windows::Foundation::Diagnostics::CausalityTraceLevel consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs<D>::TraceLevel() const
{
    Windows::Foundation::Diagnostics::CausalityTraceLevel value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs)->get_TraceLevel(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> : produce_base<D, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>
{
    HRESULT __stdcall TraceOperationCreation(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<GUID> platformId, uint64_t operationId, HSTRING operationName, uint64_t relatedContext) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TraceOperationCreation(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<GUID const*>(&platformId), operationId, *reinterpret_cast<hstring const*>(&operationName), relatedContext);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TraceOperationCompletion(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<GUID> platformId, uint64_t operationId, abi_t<Windows::Foundation::AsyncStatus> status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TraceOperationCompletion(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<GUID const*>(&platformId), operationId, *reinterpret_cast<Windows::Foundation::AsyncStatus const*>(&status));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TraceOperationRelation(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<GUID> platformId, uint64_t operationId, abi_t<Windows::Foundation::Diagnostics::CausalityRelation> relation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TraceOperationRelation(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<GUID const*>(&platformId), operationId, *reinterpret_cast<Windows::Foundation::Diagnostics::CausalityRelation const*>(&relation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TraceSynchronousWorkStart(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<GUID> platformId, uint64_t operationId, abi_t<Windows::Foundation::Diagnostics::CausalitySynchronousWork> work) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TraceSynchronousWorkStart(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<GUID const*>(&platformId), operationId, *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySynchronousWork const*>(&work));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TraceSynchronousWorkCompletion(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel> traceLevel, abi_t<Windows::Foundation::Diagnostics::CausalitySource> source, abi_t<Windows::Foundation::Diagnostics::CausalitySynchronousWork> work) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TraceSynchronousWorkCompletion(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySynchronousWork const*>(&work));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TracingStatusChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().TracingStatusChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TracingStatusChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TracingStatusChanged(*reinterpret_cast<event_token const*>(&cookie));
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
    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LongDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LongDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HelpUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HelpUri());
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
    HRESULT __stdcall CreateFromHResultAsync(int32_t errorCode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFromHResultAsync(errorCode));
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
    HRESULT __stdcall SetErrorOptions(abi_t<Windows::Foundation::Diagnostics::ErrorOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetErrorOptions(*reinterpret_cast<Windows::Foundation::Diagnostics::ErrorOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetErrorOptions(abi_t<Windows::Foundation::Diagnostics::ErrorOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetErrorOptions());
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
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddLoggingChannel(::IUnknown* loggingChannel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddLoggingChannelWithLevel(::IUnknown* loggingChannel, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> maxLevel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&maxLevel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveLoggingChannel(::IUnknown* loggingChannel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CloseAndSaveToFileAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CloseAndSaveToFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LogFileGenerated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LogFileGenerated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LogFileGenerated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogFileGenerated(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall Create(HSTRING name, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
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
    HRESULT __stdcall get_File(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
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
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
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
    HRESULT __stdcall get_Channel(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopActivity(HSTRING stopEventName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopActivity(*reinterpret_cast<hstring const*>(&stopEventName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopActivityWithFields(HSTRING stopEventName, ::IUnknown* fields) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopActivity(*reinterpret_cast<hstring const*>(&stopEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopActivityWithFieldsAndOptions(HSTRING stopEventName, ::IUnknown* fields, ::IUnknown* options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopActivity(*reinterpret_cast<hstring const*>(&stopEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingOptions const*>(&options));
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
    HRESULT __stdcall CreateLoggingActivity(HSTRING activityName, ::IUnknown* loggingChannel, ::IUnknown** loggingActivity) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loggingActivity = detach_abi(this->shim().CreateLoggingActivity(*reinterpret_cast<hstring const*>(&activityName), *reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel)));
            return S_OK;
        }
        catch (...)
        {
            *loggingActivity = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLoggingActivityWithLevel(HSTRING activityName, ::IUnknown* loggingChannel, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, ::IUnknown** loggingActivity) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loggingActivity = detach_abi(this->shim().CreateLoggingActivityWithLevel(*reinterpret_cast<hstring const*>(&activityName), *reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level)));
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
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Level(abi_t<Windows::Foundation::Diagnostics::LoggingLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Level());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogMessage(HSTRING eventString) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogMessage(*reinterpret_cast<hstring const*>(&eventString));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogMessageWithLevel(HSTRING eventString, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogMessage(*reinterpret_cast<hstring const*>(&eventString), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogValuePair(HSTRING value1, int32_t value2) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogValuePair(*reinterpret_cast<hstring const*>(&value1), value2);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogValuePairWithLevel(HSTRING value1, int32_t value2, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogValuePair(*reinterpret_cast<hstring const*>(&value1), value2, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LoggingEnabled(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LoggingEnabled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LoggingEnabled(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoggingEnabled(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall get_Id(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
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
    HRESULT __stdcall Create(HSTRING name, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
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
    HRESULT __stdcall CreateWithOptions(HSTRING name, ::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithOptions(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingChannelOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithOptionsAndId(HSTRING name, ::IUnknown* options, abi_t<GUID> id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithOptionsAndId(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingChannelOptions const*>(&options), *reinterpret_cast<GUID const*>(&id)));
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
    HRESULT __stdcall get_Group(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Group(abi_t<GUID> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Group(*reinterpret_cast<GUID const*>(&value));
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
    HRESULT __stdcall Create(abi_t<GUID> group, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<GUID const*>(&group)));
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
    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BeginStruct(HSTRING name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginStruct(*reinterpret_cast<hstring const*>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BeginStructWithTags(HSTRING name, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginStruct(*reinterpret_cast<hstring const*>(&name), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EndStruct() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndStruct();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddEmpty(HSTRING name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddEmpty(*reinterpret_cast<hstring const*>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddEmptyWithFormat(HSTRING name, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddEmpty(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddEmptyWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddEmpty(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt8(HSTRING name, uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt8(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt8WithFormat(HSTRING name, uint8_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt8(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt8WithFormatAndTags(HSTRING name, uint8_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt8(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt8Array(HSTRING name, uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt8Array(*reinterpret_cast<hstring const*>(&name), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt8ArrayWithFormat(HSTRING name, uint32_t __valueSize, uint8_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt8Array(*reinterpret_cast<hstring const*>(&name), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt8ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, uint8_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt8Array(*reinterpret_cast<hstring const*>(&name), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt16(HSTRING name, int16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt16(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt16WithFormat(HSTRING name, int16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt16WithFormatAndTags(HSTRING name, int16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt16Array(HSTRING name, uint32_t __valueSize, int16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<int16_t const>(reinterpret_cast<int16_t const *>(value), reinterpret_cast<int16_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt16ArrayWithFormat(HSTRING name, uint32_t __valueSize, int16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<int16_t const>(reinterpret_cast<int16_t const *>(value), reinterpret_cast<int16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt16ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, int16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<int16_t const>(reinterpret_cast<int16_t const *>(value), reinterpret_cast<int16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt16(HSTRING name, uint16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt16(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt16WithFormat(HSTRING name, uint16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt16WithFormatAndTags(HSTRING name, uint16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt16Array(HSTRING name, uint32_t __valueSize, uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(value), reinterpret_cast<uint16_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt16ArrayWithFormat(HSTRING name, uint32_t __valueSize, uint16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(value), reinterpret_cast<uint16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt16ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, uint16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(value), reinterpret_cast<uint16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt32(HSTRING name, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt32(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt32WithFormat(HSTRING name, int32_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt32(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt32WithFormatAndTags(HSTRING name, int32_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt32(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt32Array(HSTRING name, uint32_t __valueSize, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<int32_t const>(reinterpret_cast<int32_t const *>(value), reinterpret_cast<int32_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt32ArrayWithFormat(HSTRING name, uint32_t __valueSize, int32_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<int32_t const>(reinterpret_cast<int32_t const *>(value), reinterpret_cast<int32_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt32ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, int32_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<int32_t const>(reinterpret_cast<int32_t const *>(value), reinterpret_cast<int32_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt32(HSTRING name, uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt32(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt32WithFormat(HSTRING name, uint32_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt32(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt32WithFormatAndTags(HSTRING name, uint32_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt32(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt32Array(HSTRING name, uint32_t __valueSize, uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(value), reinterpret_cast<uint32_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt32ArrayWithFormat(HSTRING name, uint32_t __valueSize, uint32_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(value), reinterpret_cast<uint32_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt32ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, uint32_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(value), reinterpret_cast<uint32_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt64(HSTRING name, int64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt64(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt64WithFormat(HSTRING name, int64_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt64(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt64WithFormatAndTags(HSTRING name, int64_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt64(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt64Array(HSTRING name, uint32_t __valueSize, int64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<int64_t const>(reinterpret_cast<int64_t const *>(value), reinterpret_cast<int64_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt64ArrayWithFormat(HSTRING name, uint32_t __valueSize, int64_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<int64_t const>(reinterpret_cast<int64_t const *>(value), reinterpret_cast<int64_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddInt64ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, int64_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<int64_t const>(reinterpret_cast<int64_t const *>(value), reinterpret_cast<int64_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt64(HSTRING name, uint64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt64(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt64WithFormat(HSTRING name, uint64_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt64(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt64WithFormatAndTags(HSTRING name, uint64_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt64(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt64Array(HSTRING name, uint32_t __valueSize, uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(value), reinterpret_cast<uint64_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt64ArrayWithFormat(HSTRING name, uint32_t __valueSize, uint64_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(value), reinterpret_cast<uint64_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddUInt64ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, uint64_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddUInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(value), reinterpret_cast<uint64_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSingle(HSTRING name, float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSingle(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSingleWithFormat(HSTRING name, float value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSingle(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSingleWithFormatAndTags(HSTRING name, float value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSingle(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSingleArray(HSTRING name, uint32_t __valueSize, float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSingleArray(*reinterpret_cast<hstring const*>(&name), array_view<float const>(reinterpret_cast<float const *>(value), reinterpret_cast<float const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSingleArrayWithFormat(HSTRING name, uint32_t __valueSize, float* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSingleArray(*reinterpret_cast<hstring const*>(&name), array_view<float const>(reinterpret_cast<float const *>(value), reinterpret_cast<float const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSingleArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, float* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSingleArray(*reinterpret_cast<hstring const*>(&name), array_view<float const>(reinterpret_cast<float const *>(value), reinterpret_cast<float const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDouble(HSTRING name, double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDouble(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDoubleWithFormat(HSTRING name, double value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDouble(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDoubleWithFormatAndTags(HSTRING name, double value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDouble(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDoubleArray(HSTRING name, uint32_t __valueSize, double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDoubleArray(*reinterpret_cast<hstring const*>(&name), array_view<double const>(reinterpret_cast<double const *>(value), reinterpret_cast<double const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDoubleArrayWithFormat(HSTRING name, uint32_t __valueSize, double* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDoubleArray(*reinterpret_cast<hstring const*>(&name), array_view<double const>(reinterpret_cast<double const *>(value), reinterpret_cast<double const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDoubleArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, double* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDoubleArray(*reinterpret_cast<hstring const*>(&name), array_view<double const>(reinterpret_cast<double const *>(value), reinterpret_cast<double const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddChar16(HSTRING name, char16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddChar16(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddChar16WithFormat(HSTRING name, char16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddChar16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddChar16WithFormatAndTags(HSTRING name, char16_t value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddChar16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddChar16Array(HSTRING name, uint32_t __valueSize, char16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddChar16Array(*reinterpret_cast<hstring const*>(&name), array_view<char16_t const>(reinterpret_cast<char16_t const *>(value), reinterpret_cast<char16_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddChar16ArrayWithFormat(HSTRING name, uint32_t __valueSize, char16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddChar16Array(*reinterpret_cast<hstring const*>(&name), array_view<char16_t const>(reinterpret_cast<char16_t const *>(value), reinterpret_cast<char16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddChar16ArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, char16_t* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddChar16Array(*reinterpret_cast<hstring const*>(&name), array_view<char16_t const>(reinterpret_cast<char16_t const *>(value), reinterpret_cast<char16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddBoolean(HSTRING name, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddBoolean(*reinterpret_cast<hstring const*>(&name), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddBooleanWithFormat(HSTRING name, bool value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddBoolean(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddBooleanWithFormatAndTags(HSTRING name, bool value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddBoolean(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddBooleanArray(HSTRING name, uint32_t __valueSize, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddBooleanArray(*reinterpret_cast<hstring const*>(&name), array_view<bool const>(reinterpret_cast<bool const *>(value), reinterpret_cast<bool const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddBooleanArrayWithFormat(HSTRING name, uint32_t __valueSize, bool* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddBooleanArray(*reinterpret_cast<hstring const*>(&name), array_view<bool const>(reinterpret_cast<bool const *>(value), reinterpret_cast<bool const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddBooleanArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, bool* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddBooleanArray(*reinterpret_cast<hstring const*>(&name), array_view<bool const>(reinterpret_cast<bool const *>(value), reinterpret_cast<bool const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddString(HSTRING name, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddStringWithFormat(HSTRING name, HSTRING value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddStringWithFormatAndTags(HSTRING name, HSTRING value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddStringArray(HSTRING name, uint32_t __valueSize, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddStringArray(*reinterpret_cast<hstring const*>(&name), array_view<hstring const>(reinterpret_cast<hstring const *>(value), reinterpret_cast<hstring const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddStringArrayWithFormat(HSTRING name, uint32_t __valueSize, HSTRING* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddStringArray(*reinterpret_cast<hstring const*>(&name), array_view<hstring const>(reinterpret_cast<hstring const *>(value), reinterpret_cast<hstring const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddStringArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, HSTRING* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddStringArray(*reinterpret_cast<hstring const*>(&name), array_view<hstring const>(reinterpret_cast<hstring const *>(value), reinterpret_cast<hstring const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGuid(HSTRING name, abi_t<GUID> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddGuid(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGuidWithFormat(HSTRING name, abi_t<GUID> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddGuid(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<GUID const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGuidWithFormatAndTags(HSTRING name, abi_t<GUID> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddGuid(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<GUID const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGuidArray(HSTRING name, uint32_t __valueSize, abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddGuidArray(*reinterpret_cast<hstring const*>(&name), array_view<GUID const>(reinterpret_cast<GUID const *>(value), reinterpret_cast<GUID const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGuidArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<GUID>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddGuidArray(*reinterpret_cast<hstring const*>(&name), array_view<GUID const>(reinterpret_cast<GUID const *>(value), reinterpret_cast<GUID const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGuidArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<GUID>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddGuidArray(*reinterpret_cast<hstring const*>(&name), array_view<GUID const>(reinterpret_cast<GUID const *>(value), reinterpret_cast<GUID const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDateTime(HSTRING name, abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDateTime(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDateTimeWithFormat(HSTRING name, abi_t<Windows::Foundation::DateTime> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDateTime(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::DateTime const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDateTimeWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::DateTime> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDateTime(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::DateTime const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDateTimeArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDateTimeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::DateTime const>(reinterpret_cast<Windows::Foundation::DateTime const *>(value), reinterpret_cast<Windows::Foundation::DateTime const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDateTimeArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::DateTime>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDateTimeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::DateTime const>(reinterpret_cast<Windows::Foundation::DateTime const *>(value), reinterpret_cast<Windows::Foundation::DateTime const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDateTimeArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::DateTime>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDateTimeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::DateTime const>(reinterpret_cast<Windows::Foundation::DateTime const *>(value), reinterpret_cast<Windows::Foundation::DateTime const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddTimeSpan(HSTRING name, abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTimeSpan(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddTimeSpanWithFormat(HSTRING name, abi_t<Windows::Foundation::TimeSpan> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTimeSpan(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddTimeSpanWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::TimeSpan> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTimeSpan(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddTimeSpanArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTimeSpanArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::TimeSpan const>(reinterpret_cast<Windows::Foundation::TimeSpan const *>(value), reinterpret_cast<Windows::Foundation::TimeSpan const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddTimeSpanArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::TimeSpan>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTimeSpanArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::TimeSpan const>(reinterpret_cast<Windows::Foundation::TimeSpan const *>(value), reinterpret_cast<Windows::Foundation::TimeSpan const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddTimeSpanArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::TimeSpan>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTimeSpanArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::TimeSpan const>(reinterpret_cast<Windows::Foundation::TimeSpan const *>(value), reinterpret_cast<Windows::Foundation::TimeSpan const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPoint(HSTRING name, abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPoint(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPointWithFormat(HSTRING name, abi_t<Windows::Foundation::Point> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPoint(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Point const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPointWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::Point> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPoint(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Point const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPointArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPointArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(value), reinterpret_cast<Windows::Foundation::Point const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPointArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Point>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPointArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(value), reinterpret_cast<Windows::Foundation::Point const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPointArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Point>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPointArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(value), reinterpret_cast<Windows::Foundation::Point const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSize(HSTRING name, abi_t<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSize(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSizeWithFormat(HSTRING name, abi_t<Windows::Foundation::Size> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSize(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Size const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSizeWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::Size> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSize(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Size const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSizeArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSizeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Size const>(reinterpret_cast<Windows::Foundation::Size const *>(value), reinterpret_cast<Windows::Foundation::Size const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSizeArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Size>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSizeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Size const>(reinterpret_cast<Windows::Foundation::Size const *>(value), reinterpret_cast<Windows::Foundation::Size const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSizeArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Size>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSizeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Size const>(reinterpret_cast<Windows::Foundation::Size const *>(value), reinterpret_cast<Windows::Foundation::Size const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddRect(HSTRING name, abi_t<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddRect(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddRectWithFormat(HSTRING name, abi_t<Windows::Foundation::Rect> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddRect(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Rect const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddRectWithFormatAndTags(HSTRING name, abi_t<Windows::Foundation::Rect> value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddRect(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Rect const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddRectArray(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddRectArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Rect const>(reinterpret_cast<Windows::Foundation::Rect const *>(value), reinterpret_cast<Windows::Foundation::Rect const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddRectArrayWithFormat(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Rect>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddRectArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Rect const>(reinterpret_cast<Windows::Foundation::Rect const *>(value), reinterpret_cast<Windows::Foundation::Rect const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddRectArrayWithFormatAndTags(HSTRING name, uint32_t __valueSize, abi_t<Windows::Foundation::Rect>* value, abi_t<Windows::Foundation::Diagnostics::LoggingFieldFormat> format, int32_t tags) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddRectArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Rect const>(reinterpret_cast<Windows::Foundation::Rect const *>(value), reinterpret_cast<Windows::Foundation::Rect const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
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
    HRESULT __stdcall get_Keywords(int64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Keywords());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Keywords(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tags(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tags());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Tags(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Task(int16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Task());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Task(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opcode(abi_t<Windows::Foundation::Diagnostics::LoggingOpcode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Opcode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Opcode(abi_t<Windows::Foundation::Diagnostics::LoggingOpcode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opcode(*reinterpret_cast<Windows::Foundation::Diagnostics::LoggingOpcode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ActivityId(abi_t<GUID> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActivityId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelatedActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelatedActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelatedActivityId(abi_t<GUID> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelatedActivityId(*reinterpret_cast<GUID const*>(&value));
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
    HRESULT __stdcall CreateWithKeywords(int64_t keywords, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithKeywords(keywords));
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
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveToFileAsync(::IUnknown* folder, HSTRING fileName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder), *reinterpret_cast<hstring const*>(&fileName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddLoggingChannel(::IUnknown* loggingChannel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddLoggingChannelWithLevel(::IUnknown* loggingChannel, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> maxLevel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&maxLevel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveLoggingChannel(::IUnknown* loggingChannel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel));
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
    HRESULT __stdcall Create(HSTRING name, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
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
    HRESULT __stdcall IsEnabled(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEnabledWithLevel(abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsEnabled(*reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEnabledWithLevelAndKeywords(abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, int64_t keywords, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsEnabled(*reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level), keywords));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogEvent(HSTRING eventName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogEvent(*reinterpret_cast<hstring const*>(&eventName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogEventWithFields(HSTRING eventName, ::IUnknown* fields) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogEvent(*reinterpret_cast<hstring const*>(&eventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogEventWithFieldsAndLevel(HSTRING eventName, ::IUnknown* fields, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogEvent(*reinterpret_cast<hstring const*>(&eventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogEventWithFieldsAndOptions(HSTRING eventName, ::IUnknown* fields, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, ::IUnknown* options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogEvent(*reinterpret_cast<hstring const*>(&eventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartActivity(HSTRING startEventName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().StartActivity(*reinterpret_cast<hstring const*>(&startEventName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartActivityWithFields(HSTRING startEventName, ::IUnknown* fields, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().StartActivity(*reinterpret_cast<hstring const*>(&startEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartActivityWithFieldsAndLevel(HSTRING startEventName, ::IUnknown* fields, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().StartActivity(*reinterpret_cast<hstring const*>(&startEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartActivityWithFieldsAndOptions(HSTRING startEventName, ::IUnknown* fields, abi_t<Windows::Foundation::Diagnostics::LoggingLevel> level, ::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().StartActivity(*reinterpret_cast<hstring const*>(&startEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingOptions const*>(&options)));
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
    HRESULT __stdcall get_Enabled(bool* enabled) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *enabled = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TraceLevel(abi_t<Windows::Foundation::Diagnostics::CausalityTraceLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TraceLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Diagnostics {

inline void AsyncCausalityTracer::TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext)
{
    get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>().TraceOperationCreation(traceLevel, source, platformId, operationId, operationName, relatedContext);
}

inline void AsyncCausalityTracer::TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status)
{
    get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>().TraceOperationCompletion(traceLevel, source, platformId, operationId, status);
}

inline void AsyncCausalityTracer::TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation)
{
    get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>().TraceOperationRelation(traceLevel, source, platformId, operationId, relation);
}

inline void AsyncCausalityTracer::TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work)
{
    get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>().TraceSynchronousWorkStart(traceLevel, source, platformId, operationId, work);
}

inline void AsyncCausalityTracer::TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work)
{
    get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>().TraceSynchronousWorkCompletion(traceLevel, source, work);
}

inline event_token AsyncCausalityTracer::TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler)
{
    return get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>().TracingStatusChanged(handler);
}

inline factory_event_revoker<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> AsyncCausalityTracer::TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler)
{
    auto factory = get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>();
    return { factory, &abi_t<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>::remove_TracingStatusChanged, factory.TracingStatusChanged(handler) };
}

inline void AsyncCausalityTracer::TracingStatusChanged(event_token const& cookie)
{
    get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>().TracingStatusChanged(cookie);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> ErrorDetails::CreateFromHResultAsync(int32_t errorCode)
{
    return get_activation_factory<ErrorDetails, Windows::Foundation::Diagnostics::IErrorDetailsStatics>().CreateFromHResultAsync(errorCode);
}

inline FileLoggingSession::FileLoggingSession(param::hstring const& name) :
    FileLoggingSession(get_activation_factory<FileLoggingSession, Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>().Create(name))
{}

inline LoggingActivity::LoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) :
    LoggingActivity(get_activation_factory<LoggingActivity, Windows::Foundation::Diagnostics::ILoggingActivityFactory>().CreateLoggingActivity(activityName, loggingChannel))
{}

inline LoggingActivity::LoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level) :
    LoggingActivity(get_activation_factory<LoggingActivity, Windows::Foundation::Diagnostics::ILoggingActivityFactory>().CreateLoggingActivityWithLevel(activityName, loggingChannel, level))
{}

inline LoggingChannel::LoggingChannel(param::hstring const& name) :
    LoggingChannel(get_activation_factory<LoggingChannel, Windows::Foundation::Diagnostics::ILoggingChannelFactory>().Create(name))
{}

inline LoggingChannel::LoggingChannel(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options) :
    LoggingChannel(get_activation_factory<LoggingChannel, Windows::Foundation::Diagnostics::ILoggingChannelFactory2>().CreateWithOptions(name, options))
{}

inline LoggingChannel::LoggingChannel(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, GUID const& id) :
    LoggingChannel(get_activation_factory<LoggingChannel, Windows::Foundation::Diagnostics::ILoggingChannelFactory2>().CreateWithOptionsAndId(name, options, id))
{}

inline LoggingChannelOptions::LoggingChannelOptions() :
    LoggingChannelOptions(activate_instance<LoggingChannelOptions>())
{}

inline LoggingChannelOptions::LoggingChannelOptions(GUID const& group) :
    LoggingChannelOptions(get_activation_factory<LoggingChannelOptions, Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>().Create(group))
{}

inline LoggingFields::LoggingFields() :
    LoggingFields(activate_instance<LoggingFields>())
{}

inline LoggingOptions::LoggingOptions() :
    LoggingOptions(activate_instance<LoggingOptions>())
{}

inline LoggingOptions::LoggingOptions(int64_t keywords) :
    LoggingOptions(get_activation_factory<LoggingOptions, Windows::Foundation::Diagnostics::ILoggingOptionsFactory>().CreateWithKeywords(keywords))
{}

inline LoggingSession::LoggingSession(param::hstring const& name) :
    LoggingSession(get_activation_factory<LoggingSession, Windows::Foundation::Diagnostics::ILoggingSessionFactory>().Create(name))
{}

inline RuntimeBrokerErrorSettings::RuntimeBrokerErrorSettings() :
    RuntimeBrokerErrorSettings(activate_instance<RuntimeBrokerErrorSettings>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::IErrorDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::IErrorDetails> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::IErrorDetailsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::IErrorDetailsStatics> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::IErrorReportingSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::IErrorReportingSettings> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::IFileLoggingSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::IFileLoggingSession> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingActivity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingActivity> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingActivity2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingActivity2> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingActivityFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingActivityFactory> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingChannel> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannel2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingChannel2> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannelFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingChannelFactory> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannelFactory2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingChannelFactory2> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannelOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingChannelOptions> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingFields> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingFields> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingOptions> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingOptionsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingOptionsFactory> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingSession> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingSessionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingSessionFactory> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ILoggingTarget> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::AsyncCausalityTracer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::AsyncCausalityTracer> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::ErrorDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::ErrorDetails> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::FileLoggingSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::FileLoggingSession> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingActivity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::LoggingActivity> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::LoggingChannel> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingChannelOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::LoggingChannelOptions> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingFields> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::LoggingFields> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::LoggingOptions> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::LoggingSession> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings> {};

template<> struct hash<winrt::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> {};

}

WINRT_WARNING_POP
