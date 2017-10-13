// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.Display.2.h"
#include "winrt/impl/Windows.Devices.Sensors.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Sensors::AccelerometerReading consume_Windows_Devices_Sensors_IAccelerometer<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::AccelerometerReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IAccelerometer<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IAccelerometer<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IAccelerometer<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IAccelerometer<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IAccelerometer> consume_Windows_Devices_Sensors_IAccelerometer<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IAccelerometer>(this, &abi_t<Windows::Devices::Sensors::IAccelerometer>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IAccelerometer<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Sensors_IAccelerometer<D>::Shaken(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerShakenEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer)->add_Shaken(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IAccelerometer> consume_Windows_Devices_Sensors_IAccelerometer<D>::Shaken(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerShakenEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IAccelerometer>(this, &abi_t<Windows::Devices::Sensors::IAccelerometer>::remove_Shaken, Shaken(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IAccelerometer<D>::Shaken(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer)->remove_Shaken(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_IAccelerometer2<D>::ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer2)->put_ReadingTransform(get_abi(value)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Devices_Sensors_IAccelerometer2<D>::ReadingTransform() const noexcept
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer2)->get_ReadingTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IAccelerometer3<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer3)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IAccelerometer3<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer3)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IAccelerometer3<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer3)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> Windows::Devices::Sensors::AccelerometerReadingType consume_Windows_Devices_Sensors_IAccelerometer4<D>::ReadingType() const noexcept
{
    Windows::Devices::Sensors::AccelerometerReadingType type{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometer4)->get_ReadingType(put_abi(type)));
    return type;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IAccelerometerDeviceId<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerDeviceId)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IAccelerometerReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IAccelerometerReading<D>::AccelerationX() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerReading)->get_AccelerationX(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IAccelerometerReading<D>::AccelerationY() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerReading)->get_AccelerationY(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IAccelerometerReading<D>::AccelerationZ() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerReading)->get_AccelerationZ(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_IAccelerometerReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_IAccelerometerReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::AccelerometerReading consume_Windows_Devices_Sensors_IAccelerometerReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::AccelerometerReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IAccelerometerShakenEventArgs<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerShakenEventArgs)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Accelerometer consume_Windows_Devices_Sensors_IAccelerometerStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::Accelerometer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::Accelerometer consume_Windows_Devices_Sensors_IAccelerometerStatics2<D>::GetDefault(Windows::Devices::Sensors::AccelerometerReadingType const& readingType) const
{
    Windows::Devices::Sensors::Accelerometer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerStatics2)->GetDefaultWithAccelerometerReadingType(get_abi(readingType), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Accelerometer> consume_Windows_Devices_Sensors_IAccelerometerStatics3<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Accelerometer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerStatics3)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IAccelerometerStatics3<D>::GetDeviceSelector(Windows::Devices::Sensors::AccelerometerReadingType const& readingType) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAccelerometerStatics3)->GetDeviceSelector(get_abi(readingType), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensorReading> consume_Windows_Devices_Sensors_IActivitySensor<D>::GetCurrentReadingAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensorReading> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensor)->GetCurrentReadingAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType> consume_Windows_Devices_Sensors_IActivitySensor<D>::SubscribedActivities() const noexcept
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensor)->get_SubscribedActivities(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IActivitySensor<D>::PowerInMilliwatts() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensor)->get_PowerInMilliwatts(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IActivitySensor<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensor)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType> consume_Windows_Devices_Sensors_IActivitySensor<D>::SupportedActivities() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensor)->get_SupportedActivities(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IActivitySensor<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensor)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IActivitySensor<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ActivitySensor, Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensor)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IActivitySensor> consume_Windows_Devices_Sensors_IActivitySensor<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ActivitySensor, Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IActivitySensor>(this, &abi_t<Windows::Devices::Sensors::IActivitySensor>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IActivitySensor<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensor)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IActivitySensorReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::ActivityType consume_Windows_Devices_Sensors_IActivitySensorReading<D>::Activity() const noexcept
{
    Windows::Devices::Sensors::ActivityType value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorReading)->get_Activity(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::ActivitySensorReadingConfidence consume_Windows_Devices_Sensors_IActivitySensorReading<D>::Confidence() const noexcept
{
    Windows::Devices::Sensors::ActivitySensorReadingConfidence value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorReading)->get_Confidence(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::ActivitySensorReading consume_Windows_Devices_Sensors_IActivitySensorReadingChangeReport<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::ActivitySensorReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorReadingChangeReport)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::ActivitySensorReading consume_Windows_Devices_Sensors_IActivitySensorReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::ActivitySensorReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> consume_Windows_Devices_Sensors_IActivitySensorStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorStatics)->GetDefaultAsync(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IActivitySensorStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> consume_Windows_Devices_Sensors_IActivitySensorStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorStatics)->FromIdAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> consume_Windows_Devices_Sensors_IActivitySensorStatics<D>::GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorStatics)->GetSystemHistoryAsync(get_abi(fromTime), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> consume_Windows_Devices_Sensors_IActivitySensorStatics<D>::GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorStatics)->GetSystemHistoryWithDurationAsync(get_abi(fromTime), get_abi(duration), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReadingChangeReport> consume_Windows_Devices_Sensors_IActivitySensorTriggerDetails<D>::ReadReports() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReadingChangeReport> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IActivitySensorTriggerDetails)->ReadReports(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::AltimeterReading consume_Windows_Devices_Sensors_IAltimeter<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::AltimeterReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IAltimeter<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IAltimeter<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IAltimeter<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IAltimeter<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IAltimeter<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Altimeter, Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IAltimeter> consume_Windows_Devices_Sensors_IAltimeter<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Altimeter, Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IAltimeter>(this, &abi_t<Windows::Devices::Sensors::IAltimeter>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IAltimeter<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_IAltimeter2<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter2)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IAltimeter2<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter2)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IAltimeter2<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeter2)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IAltimeterReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeterReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IAltimeterReading<D>::AltitudeChangeInMeters() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeterReading)->get_AltitudeChangeInMeters(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_IAltimeterReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeterReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_IAltimeterReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeterReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::AltimeterReading consume_Windows_Devices_Sensors_IAltimeterReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::AltimeterReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Altimeter consume_Windows_Devices_Sensors_IAltimeterStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::Altimeter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IAltimeterStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::BarometerReading consume_Windows_Devices_Sensors_IBarometer<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::BarometerReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IBarometer)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IBarometer<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometer)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IBarometer<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometer)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IBarometer<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometer)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IBarometer<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometer)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IBarometer<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Barometer, Windows::Devices::Sensors::BarometerReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IBarometer)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IBarometer> consume_Windows_Devices_Sensors_IBarometer<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Barometer, Windows::Devices::Sensors::BarometerReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IBarometer>(this, &abi_t<Windows::Devices::Sensors::IBarometer>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IBarometer<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IBarometer)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_IBarometer2<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometer2)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IBarometer2<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometer2)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IBarometer2<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometer2)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IBarometerReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometerReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IBarometerReading<D>::StationPressureInHectopascals() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometerReading)->get_StationPressureInHectopascals(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_IBarometerReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometerReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_IBarometerReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometerReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::BarometerReading consume_Windows_Devices_Sensors_IBarometerReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::BarometerReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IBarometerReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Barometer consume_Windows_Devices_Sensors_IBarometerStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::Barometer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IBarometerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Barometer> consume_Windows_Devices_Sensors_IBarometerStatics2<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Barometer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IBarometerStatics2)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IBarometerStatics2<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IBarometerStatics2)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::CompassReading consume_Windows_Devices_Sensors_ICompass<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::CompassReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ICompass)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_ICompass<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompass)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_ICompass<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompass)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_ICompass<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompass)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_ICompass<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Compass, Windows::Devices::Sensors::CompassReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ICompass)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::ICompass> consume_Windows_Devices_Sensors_ICompass<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Compass, Windows::Devices::Sensors::CompassReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::ICompass>(this, &abi_t<Windows::Devices::Sensors::ICompass>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_ICompass<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ICompass)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_ICompass2<D>::ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompass2)->put_ReadingTransform(get_abi(value)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Devices_Sensors_ICompass2<D>::ReadingTransform() const noexcept
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompass2)->get_ReadingTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_ICompass3<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompass3)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_ICompass3<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompass3)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_ICompass3<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompass3)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_ICompassDeviceId<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompassDeviceId)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_ICompassReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompassReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_ICompassReading<D>::HeadingMagneticNorth() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompassReading)->get_HeadingMagneticNorth(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Devices_Sensors_ICompassReading<D>::HeadingTrueNorth() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompassReading)->get_HeadingTrueNorth(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_ICompassReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompassReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_ICompassReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompassReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::CompassReading consume_Windows_Devices_Sensors_ICompassReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::CompassReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompassReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::MagnetometerAccuracy consume_Windows_Devices_Sensors_ICompassReadingHeadingAccuracy<D>::HeadingAccuracy() const noexcept
{
    Windows::Devices::Sensors::MagnetometerAccuracy value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ICompassReadingHeadingAccuracy)->get_HeadingAccuracy(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Compass consume_Windows_Devices_Sensors_ICompassStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::Compass result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ICompassStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_ICompassStatics2<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ICompassStatics2)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Compass> consume_Windows_Devices_Sensors_ICompassStatics2<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Compass> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ICompassStatics2)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Sensors::GyrometerReading consume_Windows_Devices_Sensors_IGyrometer<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::GyrometerReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IGyrometer<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IGyrometer<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IGyrometer<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IGyrometer<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Gyrometer, Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IGyrometer> consume_Windows_Devices_Sensors_IGyrometer<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Gyrometer, Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IGyrometer>(this, &abi_t<Windows::Devices::Sensors::IGyrometer>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IGyrometer<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_IGyrometer2<D>::ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer2)->put_ReadingTransform(get_abi(value)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Devices_Sensors_IGyrometer2<D>::ReadingTransform() const noexcept
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer2)->get_ReadingTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IGyrometer3<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer3)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IGyrometer3<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer3)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IGyrometer3<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometer3)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IGyrometerDeviceId<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerDeviceId)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IGyrometerReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IGyrometerReading<D>::AngularVelocityX() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerReading)->get_AngularVelocityX(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IGyrometerReading<D>::AngularVelocityY() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerReading)->get_AngularVelocityY(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IGyrometerReading<D>::AngularVelocityZ() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerReading)->get_AngularVelocityZ(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_IGyrometerReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_IGyrometerReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::GyrometerReading consume_Windows_Devices_Sensors_IGyrometerReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::GyrometerReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Gyrometer consume_Windows_Devices_Sensors_IGyrometerStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::Gyrometer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IGyrometerStatics2<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerStatics2)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Gyrometer> consume_Windows_Devices_Sensors_IGyrometerStatics2<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Gyrometer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IGyrometerStatics2)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Sensors::InclinometerReading consume_Windows_Devices_Sensors_IInclinometer<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::InclinometerReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IInclinometer<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IInclinometer<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IInclinometer<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IInclinometer<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Inclinometer, Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IInclinometer> consume_Windows_Devices_Sensors_IInclinometer<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Inclinometer, Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IInclinometer>(this, &abi_t<Windows::Devices::Sensors::IInclinometer>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IInclinometer<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_IInclinometer2<D>::ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer2)->put_ReadingTransform(get_abi(value)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Devices_Sensors_IInclinometer2<D>::ReadingTransform() const noexcept
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer2)->get_ReadingTransform(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::SensorReadingType consume_Windows_Devices_Sensors_IInclinometer2<D>::ReadingType() const noexcept
{
    Windows::Devices::Sensors::SensorReadingType type{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer2)->get_ReadingType(put_abi(type)));
    return type;
}

template <typename D> void consume_Windows_Devices_Sensors_IInclinometer3<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer3)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IInclinometer3<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer3)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IInclinometer3<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometer3)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IInclinometerDeviceId<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerDeviceId)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IInclinometerReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_IInclinometerReading<D>::PitchDegrees() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerReading)->get_PitchDegrees(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_IInclinometerReading<D>::RollDegrees() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerReading)->get_RollDegrees(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_IInclinometerReading<D>::YawDegrees() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerReading)->get_YawDegrees(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_IInclinometerReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_IInclinometerReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::InclinometerReading consume_Windows_Devices_Sensors_IInclinometerReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::InclinometerReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::MagnetometerAccuracy consume_Windows_Devices_Sensors_IInclinometerReadingYawAccuracy<D>::YawAccuracy() const noexcept
{
    Windows::Devices::Sensors::MagnetometerAccuracy value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerReadingYawAccuracy)->get_YawAccuracy(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Inclinometer consume_Windows_Devices_Sensors_IInclinometerStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::Inclinometer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::Inclinometer consume_Windows_Devices_Sensors_IInclinometerStatics2<D>::GetDefaultForRelativeReadings() const
{
    Windows::Devices::Sensors::Inclinometer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerStatics2)->GetDefaultForRelativeReadings(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::Inclinometer consume_Windows_Devices_Sensors_IInclinometerStatics3<D>::GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype) const
{
    Windows::Devices::Sensors::Inclinometer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerStatics3)->GetDefaultWithSensorReadingType(get_abi(sensorReadingtype), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IInclinometerStatics4<D>::GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerStatics4)->GetDeviceSelector(get_abi(readingType), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Inclinometer> consume_Windows_Devices_Sensors_IInclinometerStatics4<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Inclinometer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IInclinometerStatics4)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Sensors::LightSensorReading consume_Windows_Devices_Sensors_ILightSensor<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::LightSensorReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_ILightSensor<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_ILightSensor<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_ILightSensor<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_ILightSensor<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::LightSensor, Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::ILightSensor> consume_Windows_Devices_Sensors_ILightSensor<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::LightSensor, Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::ILightSensor>(this, &abi_t<Windows::Devices::Sensors::ILightSensor>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_ILightSensor<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_ILightSensor2<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor2)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_ILightSensor2<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor2)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_ILightSensor2<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensor2)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_ILightSensorDeviceId<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorDeviceId)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_ILightSensorReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ILightSensorReading<D>::IlluminanceInLux() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorReading)->get_IlluminanceInLux(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_ILightSensorReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_ILightSensorReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::LightSensorReading consume_Windows_Devices_Sensors_ILightSensorReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::LightSensorReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::LightSensor consume_Windows_Devices_Sensors_ILightSensorStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::LightSensor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_ILightSensorStatics2<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorStatics2)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::LightSensor> consume_Windows_Devices_Sensors_ILightSensorStatics2<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::LightSensor> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ILightSensorStatics2)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Sensors::MagnetometerReading consume_Windows_Devices_Sensors_IMagnetometer<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::MagnetometerReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IMagnetometer<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IMagnetometer<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IMagnetometer<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IMagnetometer<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Magnetometer, Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IMagnetometer> consume_Windows_Devices_Sensors_IMagnetometer<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Magnetometer, Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IMagnetometer>(this, &abi_t<Windows::Devices::Sensors::IMagnetometer>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IMagnetometer<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_IMagnetometer2<D>::ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer2)->put_ReadingTransform(get_abi(value)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Devices_Sensors_IMagnetometer2<D>::ReadingTransform() const noexcept
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer2)->get_ReadingTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IMagnetometer3<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer3)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IMagnetometer3<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer3)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IMagnetometer3<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometer3)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IMagnetometerDeviceId<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerDeviceId)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IMagnetometerReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_IMagnetometerReading<D>::MagneticFieldX() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerReading)->get_MagneticFieldX(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_IMagnetometerReading<D>::MagneticFieldY() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerReading)->get_MagneticFieldY(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_IMagnetometerReading<D>::MagneticFieldZ() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerReading)->get_MagneticFieldZ(&value));
    return value;
}

template <typename D> Windows::Devices::Sensors::MagnetometerAccuracy consume_Windows_Devices_Sensors_IMagnetometerReading<D>::DirectionalAccuracy() const noexcept
{
    Windows::Devices::Sensors::MagnetometerAccuracy value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerReading)->get_DirectionalAccuracy(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_IMagnetometerReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_IMagnetometerReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::MagnetometerReading consume_Windows_Devices_Sensors_IMagnetometerReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::MagnetometerReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Magnetometer consume_Windows_Devices_Sensors_IMagnetometerStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::Magnetometer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IMagnetometerStatics2<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerStatics2)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Magnetometer> consume_Windows_Devices_Sensors_IMagnetometerStatics2<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Magnetometer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IMagnetometerStatics2)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Sensors::OrientationSensorReading consume_Windows_Devices_Sensors_IOrientationSensor<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::OrientationSensorReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IOrientationSensor<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IOrientationSensor<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IOrientationSensor<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IOrientationSensor<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::OrientationSensor, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IOrientationSensor> consume_Windows_Devices_Sensors_IOrientationSensor<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::OrientationSensor, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IOrientationSensor>(this, &abi_t<Windows::Devices::Sensors::IOrientationSensor>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IOrientationSensor<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_IOrientationSensor2<D>::ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor2)->put_ReadingTransform(get_abi(value)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Devices_Sensors_IOrientationSensor2<D>::ReadingTransform() const noexcept
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor2)->get_ReadingTransform(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::SensorReadingType consume_Windows_Devices_Sensors_IOrientationSensor2<D>::ReadingType() const noexcept
{
    Windows::Devices::Sensors::SensorReadingType type{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor2)->get_ReadingType(put_abi(type)));
    return type;
}

template <typename D> void consume_Windows_Devices_Sensors_IOrientationSensor3<D>::ReportLatency(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor3)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IOrientationSensor3<D>::ReportLatency() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor3)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IOrientationSensor3<D>::MaxBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensor3)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IOrientationSensorDeviceId<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorDeviceId)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IOrientationSensorReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::SensorRotationMatrix consume_Windows_Devices_Sensors_IOrientationSensorReading<D>::RotationMatrix() const noexcept
{
    Windows::Devices::Sensors::SensorRotationMatrix value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorReading)->get_RotationMatrix(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::SensorQuaternion consume_Windows_Devices_Sensors_IOrientationSensorReading<D>::Quaternion() const noexcept
{
    Windows::Devices::Sensors::SensorQuaternion value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorReading)->get_Quaternion(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_IOrientationSensorReading2<D>::PerformanceCount() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_IOrientationSensorReading2<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorReading2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::OrientationSensorReading consume_Windows_Devices_Sensors_IOrientationSensorReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::OrientationSensorReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::MagnetometerAccuracy consume_Windows_Devices_Sensors_IOrientationSensorReadingYawAccuracy<D>::YawAccuracy() const noexcept
{
    Windows::Devices::Sensors::MagnetometerAccuracy value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy)->get_YawAccuracy(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::OrientationSensor consume_Windows_Devices_Sensors_IOrientationSensorStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::OrientationSensor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::OrientationSensor consume_Windows_Devices_Sensors_IOrientationSensorStatics2<D>::GetDefaultForRelativeReadings() const
{
    Windows::Devices::Sensors::OrientationSensor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorStatics2)->GetDefaultForRelativeReadings(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::OrientationSensor consume_Windows_Devices_Sensors_IOrientationSensorStatics3<D>::GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype) const
{
    Windows::Devices::Sensors::OrientationSensor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorStatics3)->GetDefaultWithSensorReadingType(get_abi(sensorReadingtype), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Sensors::OrientationSensor consume_Windows_Devices_Sensors_IOrientationSensorStatics3<D>::GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal) const
{
    Windows::Devices::Sensors::OrientationSensor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorStatics3)->GetDefaultWithSensorReadingTypeAndSensorOptimizationGoal(get_abi(sensorReadingType), get_abi(optimizationGoal), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IOrientationSensorStatics4<D>::GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorStatics4)->GetDeviceSelector(get_abi(readingType), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IOrientationSensorStatics4<D>::GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorStatics4)->GetDeviceSelectorWithSensorReadingTypeAndSensorOptimizationGoal(get_abi(readingType), get_abi(optimizationGoal), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::OrientationSensor> consume_Windows_Devices_Sensors_IOrientationSensorStatics4<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::OrientationSensor> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IOrientationSensorStatics4)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IPedometer<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometer)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Sensors_IPedometer<D>::PowerInMilliwatts() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometer)->get_PowerInMilliwatts(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IPedometer<D>::MinimumReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometer)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_IPedometer<D>::ReportInterval(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometer)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_IPedometer<D>::ReportInterval() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometer)->get_ReportInterval(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IPedometer<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Pedometer, Windows::Devices::Sensors::PedometerReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometer)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IPedometer> consume_Windows_Devices_Sensors_IPedometer<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Pedometer, Windows::Devices::Sensors::PedometerReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IPedometer>(this, &abi_t<Windows::Devices::Sensors::IPedometer>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IPedometer<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometer)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IMapView<Windows::Devices::Sensors::PedometerStepKind, Windows::Devices::Sensors::PedometerReading> consume_Windows_Devices_Sensors_IPedometer2<D>::GetCurrentReadings() const
{
    Windows::Foundation::Collections::IMapView<Windows::Devices::Sensors::PedometerStepKind, Windows::Devices::Sensors::PedometerReading> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometer2)->GetCurrentReadings(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::PedometerDataThreshold consume_Windows_Devices_Sensors_IPedometerDataThresholdFactory<D>::Create(Windows::Devices::Sensors::Pedometer const& sensor, int32_t stepGoal) const
{
    Windows::Devices::Sensors::PedometerDataThreshold threshold{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometerDataThresholdFactory)->Create(get_abi(sensor), stepGoal, put_abi(threshold)));
    return threshold;
}

template <typename D> Windows::Devices::Sensors::PedometerStepKind consume_Windows_Devices_Sensors_IPedometerReading<D>::StepKind() const noexcept
{
    Windows::Devices::Sensors::PedometerStepKind value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometerReading)->get_StepKind(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sensors_IPedometerReading<D>::CumulativeSteps() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometerReading)->get_CumulativeSteps(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IPedometerReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometerReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Sensors_IPedometerReading<D>::CumulativeStepsDuration() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometerReading)->get_CumulativeStepsDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::PedometerReading consume_Windows_Devices_Sensors_IPedometerReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::PedometerReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IPedometerReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> consume_Windows_Devices_Sensors_IPedometerStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometerStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> consume_Windows_Devices_Sensors_IPedometerStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometerStatics)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IPedometerStatics<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometerStatics)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> consume_Windows_Devices_Sensors_IPedometerStatics<D>::GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometerStatics)->GetSystemHistoryAsync(get_abi(fromTime), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> consume_Windows_Devices_Sensors_IPedometerStatics<D>::GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometerStatics)->GetSystemHistoryWithDurationAsync(get_abi(fromTime), get_abi(duration), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading> consume_Windows_Devices_Sensors_IPedometerStatics2<D>::GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IPedometerStatics2)->GetReadingsFromTriggerDetails(get_abi(triggerDetails), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IProximitySensor<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensor)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Devices_Sensors_IProximitySensor<D>::MaxDistanceInMillimeters() const noexcept
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensor)->get_MaxDistanceInMillimeters(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Devices_Sensors_IProximitySensor<D>::MinDistanceInMillimeters() const noexcept
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensor)->get_MinDistanceInMillimeters(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::ProximitySensorReading consume_Windows_Devices_Sensors_IProximitySensor<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::ProximitySensorReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensor)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_IProximitySensor<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ProximitySensor, Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensor)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::IProximitySensor> consume_Windows_Devices_Sensors_IProximitySensor<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ProximitySensor, Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::IProximitySensor>(this, &abi_t<Windows::Devices::Sensors::IProximitySensor>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_IProximitySensor<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensor)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> Windows::Devices::Sensors::ProximitySensorDisplayOnOffController consume_Windows_Devices_Sensors_IProximitySensor<D>::CreateDisplayOnOffController() const
{
    Windows::Devices::Sensors::ProximitySensorDisplayOnOffController controller{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensor)->CreateDisplayOnOffController(put_abi(controller)));
    return controller;
}

template <typename D> Windows::Devices::Sensors::ProximitySensorDataThreshold consume_Windows_Devices_Sensors_IProximitySensorDataThresholdFactory<D>::Create(Windows::Devices::Sensors::ProximitySensor const& sensor) const
{
    Windows::Devices::Sensors::ProximitySensorDataThreshold threshold{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensorDataThresholdFactory)->Create(get_abi(sensor), put_abi(threshold)));
    return threshold;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_IProximitySensorReading<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensorReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Sensors_IProximitySensorReading<D>::IsDetected() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensorReading)->get_IsDetected(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Devices_Sensors_IProximitySensorReading<D>::DistanceInMillimeters() const noexcept
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensorReading)->get_DistanceInMillimeters(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::ProximitySensorReading consume_Windows_Devices_Sensors_IProximitySensorReadingChangedEventArgs<D>::Reading() const noexcept
{
    Windows::Devices::Sensors::ProximitySensorReading value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_IProximitySensorStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensorStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::ProximitySensor consume_Windows_Devices_Sensors_IProximitySensorStatics<D>::FromId(param::hstring const& sensorId) const
{
    Windows::Devices::Sensors::ProximitySensor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensorStatics)->FromId(get_abi(sensorId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ProximitySensorReading> consume_Windows_Devices_Sensors_IProximitySensorStatics2<D>::GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ProximitySensorReading> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::IProximitySensorStatics2)->GetReadingsFromTriggerDetails(get_abi(triggerDetails), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Sensors_ISensorDataThresholdTriggerDetails<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::SensorType consume_Windows_Devices_Sensors_ISensorDataThresholdTriggerDetails<D>::SensorType() const noexcept
{
    Windows::Devices::Sensors::SensorType value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails)->get_SensorType(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorQuaternion<D>::W() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorQuaternion)->get_W(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorQuaternion<D>::X() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorQuaternion)->get_X(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorQuaternion<D>::Y() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorQuaternion)->get_Y(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorQuaternion<D>::Z() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorQuaternion)->get_Z(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M11() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M11(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M12() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M12(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M13() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M13(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M21() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M21(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M22() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M22(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M23() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M23(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M31() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M31(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M32() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M32(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>::M33() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISensorRotationMatrix)->get_M33(&value));
    return value;
}

template <typename D> Windows::Devices::Sensors::SimpleOrientation consume_Windows_Devices_Sensors_ISimpleOrientationSensor<D>::GetCurrentOrientation() const
{
    Windows::Devices::Sensors::SimpleOrientation value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensor)->GetCurrentOrientation(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_ISimpleOrientationSensor<D>::OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::SimpleOrientationSensor, Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensor)->add_OrientationChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::ISimpleOrientationSensor> consume_Windows_Devices_Sensors_ISimpleOrientationSensor<D>::OrientationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::SimpleOrientationSensor, Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::ISimpleOrientationSensor>(this, &abi_t<Windows::Devices::Sensors::ISimpleOrientationSensor>::remove_OrientationChanged, OrientationChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_ISimpleOrientationSensor<D>::OrientationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensor)->remove_OrientationChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_ISimpleOrientationSensor2<D>::ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensor2)->put_ReadingTransform(get_abi(value)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Devices_Sensors_ISimpleOrientationSensor2<D>::ReadingTransform() const noexcept
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensor2)->get_ReadingTransform(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_ISimpleOrientationSensorDeviceId<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_ISimpleOrientationSensorOrientationChangedEventArgs<D>::Timestamp() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::SimpleOrientation consume_Windows_Devices_Sensors_ISimpleOrientationSensorOrientationChangedEventArgs<D>::Orientation() const noexcept
{
    Windows::Devices::Sensors::SimpleOrientation value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::SimpleOrientationSensor consume_Windows_Devices_Sensors_ISimpleOrientationSensorStatics<D>::GetDefault() const
{
    Windows::Devices::Sensors::SimpleOrientationSensor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::ISimpleOrientationSensorStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometer> : produce_base<D, Windows::Devices::Sensors::IAccelerometer>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Shaken(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Shaken(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerShakenEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Shaken(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Shaken(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometer2> : produce_base<D, Windows::Devices::Sensors::IAccelerometer2>
{
    HRESULT __stdcall put_ReadingTransform(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReadingTransform(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ReadingTransform(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadingTransform());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometer3> : produce_base<D, Windows::Devices::Sensors::IAccelerometer3>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometer4> : produce_base<D, Windows::Devices::Sensors::IAccelerometer4>
{
    HRESULT __stdcall get_ReadingType(Windows::Devices::Sensors::AccelerometerReadingType* type) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *type = detach_abi(this->shim().ReadingType());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometerDeviceId> : produce_base<D, Windows::Devices::Sensors::IAccelerometerDeviceId>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometerReading> : produce_base<D, Windows::Devices::Sensors::IAccelerometerReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_AccelerationX(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AccelerationX());
        return S_OK;
    }

    HRESULT __stdcall get_AccelerationY(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AccelerationY());
        return S_OK;
    }

    HRESULT __stdcall get_AccelerationZ(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AccelerationZ());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometerReading2> : produce_base<D, Windows::Devices::Sensors::IAccelerometerReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometerShakenEventArgs> : produce_base<D, Windows::Devices::Sensors::IAccelerometerShakenEventArgs>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAccelerometerStatics> : produce_base<D, Windows::Devices::Sensors::IAccelerometerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::IAccelerometerStatics2> : produce_base<D, Windows::Devices::Sensors::IAccelerometerStatics2>
{
    HRESULT __stdcall GetDefaultWithAccelerometerReadingType(Windows::Devices::Sensors::AccelerometerReadingType readingType, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault(*reinterpret_cast<Windows::Devices::Sensors::AccelerometerReadingType const*>(&readingType)));
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
struct produce<D, Windows::Devices::Sensors::IAccelerometerStatics3> : produce_base<D, Windows::Devices::Sensors::IAccelerometerStatics3>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(Windows::Devices::Sensors::AccelerometerReadingType readingType, HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::Sensors::AccelerometerReadingType const*>(&readingType)));
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
struct produce<D, Windows::Devices::Sensors::IActivitySensor> : produce_base<D, Windows::Devices::Sensors::IActivitySensor>
{
    HRESULT __stdcall GetCurrentReadingAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCurrentReadingAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscribedActivities(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SubscribedActivities());
        return S_OK;
    }

    HRESULT __stdcall get_PowerInMilliwatts(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PowerInMilliwatts());
        return S_OK;
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_SupportedActivities(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SupportedActivities());
        return S_OK;
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ActivitySensor, Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IActivitySensorReading> : produce_base<D, Windows::Devices::Sensors::IActivitySensorReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_Activity(Windows::Devices::Sensors::ActivityType* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Activity());
        return S_OK;
    }

    HRESULT __stdcall get_Confidence(Windows::Devices::Sensors::ActivitySensorReadingConfidence* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Confidence());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IActivitySensorReadingChangeReport> : produce_base<D, Windows::Devices::Sensors::IActivitySensorReadingChangeReport>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IActivitySensorStatics> : produce_base<D, Windows::Devices::Sensors::IActivitySensorStatics>
{
    HRESULT __stdcall GetDefaultAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSystemHistoryAsync(Windows::Foundation::DateTime fromTime, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSystemHistoryAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&fromTime)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSystemHistoryWithDurationAsync(Windows::Foundation::DateTime fromTime, Windows::Foundation::TimeSpan duration, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSystemHistoryAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&fromTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
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
struct produce<D, Windows::Devices::Sensors::IActivitySensorTriggerDetails> : produce_base<D, Windows::Devices::Sensors::IActivitySensorTriggerDetails>
{
    HRESULT __stdcall ReadReports(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadReports());
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
struct produce<D, Windows::Devices::Sensors::IAltimeter> : produce_base<D, Windows::Devices::Sensors::IAltimeter>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Altimeter, Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAltimeter2> : produce_base<D, Windows::Devices::Sensors::IAltimeter2>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAltimeterReading> : produce_base<D, Windows::Devices::Sensors::IAltimeterReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_AltitudeChangeInMeters(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AltitudeChangeInMeters());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAltimeterReading2> : produce_base<D, Windows::Devices::Sensors::IAltimeterReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IAltimeterStatics> : produce_base<D, Windows::Devices::Sensors::IAltimeterStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::IBarometer> : produce_base<D, Windows::Devices::Sensors::IBarometer>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Barometer, Windows::Devices::Sensors::BarometerReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IBarometer2> : produce_base<D, Windows::Devices::Sensors::IBarometer2>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IBarometerReading> : produce_base<D, Windows::Devices::Sensors::IBarometerReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_StationPressureInHectopascals(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().StationPressureInHectopascals());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IBarometerReading2> : produce_base<D, Windows::Devices::Sensors::IBarometerReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IBarometerReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IBarometerStatics> : produce_base<D, Windows::Devices::Sensors::IBarometerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::IBarometerStatics2> : produce_base<D, Windows::Devices::Sensors::IBarometerStatics2>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
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
struct produce<D, Windows::Devices::Sensors::ICompass> : produce_base<D, Windows::Devices::Sensors::ICompass>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Compass, Windows::Devices::Sensors::CompassReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ICompass2> : produce_base<D, Windows::Devices::Sensors::ICompass2>
{
    HRESULT __stdcall put_ReadingTransform(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReadingTransform(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ReadingTransform(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadingTransform());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ICompass3> : produce_base<D, Windows::Devices::Sensors::ICompass3>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ICompassDeviceId> : produce_base<D, Windows::Devices::Sensors::ICompassDeviceId>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ICompassReading> : produce_base<D, Windows::Devices::Sensors::ICompassReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_HeadingMagneticNorth(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HeadingMagneticNorth());
        return S_OK;
    }

    HRESULT __stdcall get_HeadingTrueNorth(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HeadingTrueNorth());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ICompassReading2> : produce_base<D, Windows::Devices::Sensors::ICompassReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ICompassReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::ICompassReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ICompassReadingHeadingAccuracy> : produce_base<D, Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>
{
    HRESULT __stdcall get_HeadingAccuracy(Windows::Devices::Sensors::MagnetometerAccuracy* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HeadingAccuracy());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ICompassStatics> : produce_base<D, Windows::Devices::Sensors::ICompassStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::ICompassStatics2> : produce_base<D, Windows::Devices::Sensors::ICompassStatics2>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
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
struct produce<D, Windows::Devices::Sensors::IGyrometer> : produce_base<D, Windows::Devices::Sensors::IGyrometer>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Gyrometer, Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IGyrometer2> : produce_base<D, Windows::Devices::Sensors::IGyrometer2>
{
    HRESULT __stdcall put_ReadingTransform(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReadingTransform(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ReadingTransform(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadingTransform());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IGyrometer3> : produce_base<D, Windows::Devices::Sensors::IGyrometer3>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IGyrometerDeviceId> : produce_base<D, Windows::Devices::Sensors::IGyrometerDeviceId>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IGyrometerReading> : produce_base<D, Windows::Devices::Sensors::IGyrometerReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_AngularVelocityX(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AngularVelocityX());
        return S_OK;
    }

    HRESULT __stdcall get_AngularVelocityY(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AngularVelocityY());
        return S_OK;
    }

    HRESULT __stdcall get_AngularVelocityZ(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AngularVelocityZ());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IGyrometerReading2> : produce_base<D, Windows::Devices::Sensors::IGyrometerReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IGyrometerStatics> : produce_base<D, Windows::Devices::Sensors::IGyrometerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::IGyrometerStatics2> : produce_base<D, Windows::Devices::Sensors::IGyrometerStatics2>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
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
struct produce<D, Windows::Devices::Sensors::IInclinometer> : produce_base<D, Windows::Devices::Sensors::IInclinometer>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Inclinometer, Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IInclinometer2> : produce_base<D, Windows::Devices::Sensors::IInclinometer2>
{
    HRESULT __stdcall put_ReadingTransform(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReadingTransform(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ReadingTransform(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadingTransform());
        return S_OK;
    }

    HRESULT __stdcall get_ReadingType(Windows::Devices::Sensors::SensorReadingType* type) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *type = detach_abi(this->shim().ReadingType());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IInclinometer3> : produce_base<D, Windows::Devices::Sensors::IInclinometer3>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IInclinometerDeviceId> : produce_base<D, Windows::Devices::Sensors::IInclinometerDeviceId>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IInclinometerReading> : produce_base<D, Windows::Devices::Sensors::IInclinometerReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_PitchDegrees(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PitchDegrees());
        return S_OK;
    }

    HRESULT __stdcall get_RollDegrees(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RollDegrees());
        return S_OK;
    }

    HRESULT __stdcall get_YawDegrees(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().YawDegrees());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IInclinometerReading2> : produce_base<D, Windows::Devices::Sensors::IInclinometerReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IInclinometerReadingYawAccuracy> : produce_base<D, Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>
{
    HRESULT __stdcall get_YawAccuracy(Windows::Devices::Sensors::MagnetometerAccuracy* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().YawAccuracy());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IInclinometerStatics> : produce_base<D, Windows::Devices::Sensors::IInclinometerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::IInclinometerStatics2> : produce_base<D, Windows::Devices::Sensors::IInclinometerStatics2>
{
    HRESULT __stdcall GetDefaultForRelativeReadings(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefaultForRelativeReadings());
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
struct produce<D, Windows::Devices::Sensors::IInclinometerStatics3> : produce_base<D, Windows::Devices::Sensors::IInclinometerStatics3>
{
    HRESULT __stdcall GetDefaultWithSensorReadingType(Windows::Devices::Sensors::SensorReadingType sensorReadingtype, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault(*reinterpret_cast<Windows::Devices::Sensors::SensorReadingType const*>(&sensorReadingtype)));
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
struct produce<D, Windows::Devices::Sensors::IInclinometerStatics4> : produce_base<D, Windows::Devices::Sensors::IInclinometerStatics4>
{
    HRESULT __stdcall GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType readingType, HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::Sensors::SensorReadingType const*>(&readingType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
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
struct produce<D, Windows::Devices::Sensors::ILightSensor> : produce_base<D, Windows::Devices::Sensors::ILightSensor>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::LightSensor, Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ILightSensor2> : produce_base<D, Windows::Devices::Sensors::ILightSensor2>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ILightSensorDeviceId> : produce_base<D, Windows::Devices::Sensors::ILightSensorDeviceId>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ILightSensorReading> : produce_base<D, Windows::Devices::Sensors::ILightSensorReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_IlluminanceInLux(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IlluminanceInLux());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ILightSensorReading2> : produce_base<D, Windows::Devices::Sensors::ILightSensorReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ILightSensorStatics> : produce_base<D, Windows::Devices::Sensors::ILightSensorStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::ILightSensorStatics2> : produce_base<D, Windows::Devices::Sensors::ILightSensorStatics2>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
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
struct produce<D, Windows::Devices::Sensors::IMagnetometer> : produce_base<D, Windows::Devices::Sensors::IMagnetometer>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Magnetometer, Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IMagnetometer2> : produce_base<D, Windows::Devices::Sensors::IMagnetometer2>
{
    HRESULT __stdcall put_ReadingTransform(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReadingTransform(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ReadingTransform(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadingTransform());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IMagnetometer3> : produce_base<D, Windows::Devices::Sensors::IMagnetometer3>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IMagnetometerDeviceId> : produce_base<D, Windows::Devices::Sensors::IMagnetometerDeviceId>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IMagnetometerReading> : produce_base<D, Windows::Devices::Sensors::IMagnetometerReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_MagneticFieldX(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MagneticFieldX());
        return S_OK;
    }

    HRESULT __stdcall get_MagneticFieldY(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MagneticFieldY());
        return S_OK;
    }

    HRESULT __stdcall get_MagneticFieldZ(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MagneticFieldZ());
        return S_OK;
    }

    HRESULT __stdcall get_DirectionalAccuracy(Windows::Devices::Sensors::MagnetometerAccuracy* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DirectionalAccuracy());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IMagnetometerReading2> : produce_base<D, Windows::Devices::Sensors::IMagnetometerReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IMagnetometerStatics> : produce_base<D, Windows::Devices::Sensors::IMagnetometerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::IMagnetometerStatics2> : produce_base<D, Windows::Devices::Sensors::IMagnetometerStatics2>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
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
struct produce<D, Windows::Devices::Sensors::IOrientationSensor> : produce_base<D, Windows::Devices::Sensors::IOrientationSensor>
{
    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::OrientationSensor, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IOrientationSensor2> : produce_base<D, Windows::Devices::Sensors::IOrientationSensor2>
{
    HRESULT __stdcall put_ReadingTransform(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReadingTransform(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ReadingTransform(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadingTransform());
        return S_OK;
    }

    HRESULT __stdcall get_ReadingType(Windows::Devices::Sensors::SensorReadingType* type) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *type = detach_abi(this->shim().ReadingType());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IOrientationSensor3> : produce_base<D, Windows::Devices::Sensors::IOrientationSensor3>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportLatency(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportLatency());
        return S_OK;
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxBatchSize());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IOrientationSensorDeviceId> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorDeviceId>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IOrientationSensorReading> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_RotationMatrix(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RotationMatrix());
        return S_OK;
    }

    HRESULT __stdcall get_Quaternion(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Quaternion());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IOrientationSensorReading2> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorReading2>
{
    HRESULT __stdcall get_PerformanceCount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PerformanceCount());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>
{
    HRESULT __stdcall get_YawAccuracy(Windows::Devices::Sensors::MagnetometerAccuracy* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().YawAccuracy());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IOrientationSensorStatics> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Sensors::IOrientationSensorStatics2> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorStatics2>
{
    HRESULT __stdcall GetDefaultForRelativeReadings(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefaultForRelativeReadings());
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
struct produce<D, Windows::Devices::Sensors::IOrientationSensorStatics3> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorStatics3>
{
    HRESULT __stdcall GetDefaultWithSensorReadingType(Windows::Devices::Sensors::SensorReadingType sensorReadingtype, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault(*reinterpret_cast<Windows::Devices::Sensors::SensorReadingType const*>(&sensorReadingtype)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultWithSensorReadingTypeAndSensorOptimizationGoal(Windows::Devices::Sensors::SensorReadingType sensorReadingType, Windows::Devices::Sensors::SensorOptimizationGoal optimizationGoal, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault(*reinterpret_cast<Windows::Devices::Sensors::SensorReadingType const*>(&sensorReadingType), *reinterpret_cast<Windows::Devices::Sensors::SensorOptimizationGoal const*>(&optimizationGoal)));
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
struct produce<D, Windows::Devices::Sensors::IOrientationSensorStatics4> : produce_base<D, Windows::Devices::Sensors::IOrientationSensorStatics4>
{
    HRESULT __stdcall GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType readingType, HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::Sensors::SensorReadingType const*>(&readingType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorWithSensorReadingTypeAndSensorOptimizationGoal(Windows::Devices::Sensors::SensorReadingType readingType, Windows::Devices::Sensors::SensorOptimizationGoal optimizationGoal, HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::Sensors::SensorReadingType const*>(&readingType), *reinterpret_cast<Windows::Devices::Sensors::SensorOptimizationGoal const*>(&optimizationGoal)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
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
struct produce<D, Windows::Devices::Sensors::IPedometer> : produce_base<D, Windows::Devices::Sensors::IPedometer>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_PowerInMilliwatts(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PowerInMilliwatts());
        return S_OK;
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinimumReportInterval());
        return S_OK;
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReportInterval(value);
        return S_OK;
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReportInterval());
        return S_OK;
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Pedometer, Windows::Devices::Sensors::PedometerReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IPedometer2> : produce_base<D, Windows::Devices::Sensors::IPedometer2>
{
    HRESULT __stdcall GetCurrentReadings(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReadings());
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
struct produce<D, Windows::Devices::Sensors::IPedometerDataThresholdFactory> : produce_base<D, Windows::Devices::Sensors::IPedometerDataThresholdFactory>
{
    HRESULT __stdcall Create(::IUnknown* sensor, int32_t stepGoal, ::IUnknown** threshold) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *threshold = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Sensors::Pedometer const*>(&sensor), stepGoal));
            return S_OK;
        }
        catch (...)
        {
            *threshold = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IPedometerReading> : produce_base<D, Windows::Devices::Sensors::IPedometerReading>
{
    HRESULT __stdcall get_StepKind(Windows::Devices::Sensors::PedometerStepKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().StepKind());
        return S_OK;
    }

    HRESULT __stdcall get_CumulativeSteps(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CumulativeSteps());
        return S_OK;
    }

    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_CumulativeStepsDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CumulativeStepsDuration());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IPedometerReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IPedometerStatics> : produce_base<D, Windows::Devices::Sensors::IPedometerStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSystemHistoryAsync(Windows::Foundation::DateTime fromTime, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetSystemHistoryAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&fromTime)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSystemHistoryWithDurationAsync(Windows::Foundation::DateTime fromTime, Windows::Foundation::TimeSpan duration, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetSystemHistoryAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&fromTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
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
struct produce<D, Windows::Devices::Sensors::IPedometerStatics2> : produce_base<D, Windows::Devices::Sensors::IPedometerStatics2>
{
    HRESULT __stdcall GetReadingsFromTriggerDetails(::IUnknown* triggerDetails, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetReadingsFromTriggerDetails(*reinterpret_cast<Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const*>(&triggerDetails)));
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
struct produce<D, Windows::Devices::Sensors::IProximitySensor> : produce_base<D, Windows::Devices::Sensors::IProximitySensor>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_MaxDistanceInMillimeters(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxDistanceInMillimeters());
        return S_OK;
    }

    HRESULT __stdcall get_MinDistanceInMillimeters(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinDistanceInMillimeters());
        return S_OK;
    }

    HRESULT __stdcall GetCurrentReading(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ProximitySensor, Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDisplayOnOffController(::IUnknown** controller) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *controller = detach_abi(this->shim().CreateDisplayOnOffController());
            return S_OK;
        }
        catch (...)
        {
            *controller = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IProximitySensorDataThresholdFactory> : produce_base<D, Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>
{
    HRESULT __stdcall Create(::IUnknown* sensor, ::IUnknown** threshold) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *threshold = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Sensors::ProximitySensor const*>(&sensor)));
            return S_OK;
        }
        catch (...)
        {
            *threshold = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IProximitySensorReading> : produce_base<D, Windows::Devices::Sensors::IProximitySensorReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_IsDetected(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsDetected());
        return S_OK;
    }

    HRESULT __stdcall get_DistanceInMillimeters(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DistanceInMillimeters());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reading());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::IProximitySensorStatics> : produce_base<D, Windows::Devices::Sensors::IProximitySensorStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromId(HSTRING sensorId, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromId(*reinterpret_cast<hstring const*>(&sensorId)));
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
struct produce<D, Windows::Devices::Sensors::IProximitySensorStatics2> : produce_base<D, Windows::Devices::Sensors::IProximitySensorStatics2>
{
    HRESULT __stdcall GetReadingsFromTriggerDetails(::IUnknown* triggerDetails, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetReadingsFromTriggerDetails(*reinterpret_cast<Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const*>(&triggerDetails)));
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
struct produce<D, Windows::Devices::Sensors::ISensorDataThreshold> : produce_base<D, Windows::Devices::Sensors::ISensorDataThreshold>
{};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails> : produce_base<D, Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_SensorType(Windows::Devices::Sensors::SensorType* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SensorType());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ISensorQuaternion> : produce_base<D, Windows::Devices::Sensors::ISensorQuaternion>
{
    HRESULT __stdcall get_W(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().W());
        return S_OK;
    }

    HRESULT __stdcall get_X(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().X());
        return S_OK;
    }

    HRESULT __stdcall get_Y(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Y());
        return S_OK;
    }

    HRESULT __stdcall get_Z(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Z());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ISensorRotationMatrix> : produce_base<D, Windows::Devices::Sensors::ISensorRotationMatrix>
{
    HRESULT __stdcall get_M11(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M11());
        return S_OK;
    }

    HRESULT __stdcall get_M12(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M12());
        return S_OK;
    }

    HRESULT __stdcall get_M13(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M13());
        return S_OK;
    }

    HRESULT __stdcall get_M21(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M21());
        return S_OK;
    }

    HRESULT __stdcall get_M22(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M22());
        return S_OK;
    }

    HRESULT __stdcall get_M23(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M23());
        return S_OK;
    }

    HRESULT __stdcall get_M31(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M31());
        return S_OK;
    }

    HRESULT __stdcall get_M32(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M32());
        return S_OK;
    }

    HRESULT __stdcall get_M33(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().M33());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ISimpleOrientationSensor> : produce_base<D, Windows::Devices::Sensors::ISimpleOrientationSensor>
{
    HRESULT __stdcall GetCurrentOrientation(Windows::Devices::Sensors::SimpleOrientation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OrientationChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().OrientationChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::SimpleOrientationSensor, Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OrientationChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OrientationChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ISimpleOrientationSensor2> : produce_base<D, Windows::Devices::Sensors::ISimpleOrientationSensor2>
{
    HRESULT __stdcall put_ReadingTransform(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReadingTransform(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ReadingTransform(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadingTransform());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId> : produce_base<D, Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Timestamp());
        return S_OK;
    }

    HRESULT __stdcall get_Orientation(Windows::Devices::Sensors::SimpleOrientation* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Orientation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::ISimpleOrientationSensorStatics> : produce_base<D, Windows::Devices::Sensors::ISimpleOrientationSensorStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors {

inline Windows::Devices::Sensors::Accelerometer Accelerometer::GetDefault()
{
    return get_activation_factory<Accelerometer, Windows::Devices::Sensors::IAccelerometerStatics>().GetDefault();
}

inline Windows::Devices::Sensors::Accelerometer Accelerometer::GetDefault(Windows::Devices::Sensors::AccelerometerReadingType const& readingType)
{
    return get_activation_factory<Accelerometer, Windows::Devices::Sensors::IAccelerometerStatics2>().GetDefault(readingType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Accelerometer> Accelerometer::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Accelerometer, Windows::Devices::Sensors::IAccelerometerStatics3>().FromIdAsync(deviceId);
}

inline hstring Accelerometer::GetDeviceSelector(Windows::Devices::Sensors::AccelerometerReadingType const& readingType)
{
    return get_activation_factory<Accelerometer, Windows::Devices::Sensors::IAccelerometerStatics3>().GetDeviceSelector(readingType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> ActivitySensor::GetDefaultAsync()
{
    return get_activation_factory<ActivitySensor, Windows::Devices::Sensors::IActivitySensorStatics>().GetDefaultAsync();
}

inline hstring ActivitySensor::GetDeviceSelector()
{
    return get_activation_factory<ActivitySensor, Windows::Devices::Sensors::IActivitySensorStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> ActivitySensor::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<ActivitySensor, Windows::Devices::Sensors::IActivitySensorStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> ActivitySensor::GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime)
{
    return get_activation_factory<ActivitySensor, Windows::Devices::Sensors::IActivitySensorStatics>().GetSystemHistoryAsync(fromTime);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> ActivitySensor::GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration)
{
    return get_activation_factory<ActivitySensor, Windows::Devices::Sensors::IActivitySensorStatics>().GetSystemHistoryAsync(fromTime, duration);
}

inline Windows::Devices::Sensors::Altimeter Altimeter::GetDefault()
{
    return get_activation_factory<Altimeter, Windows::Devices::Sensors::IAltimeterStatics>().GetDefault();
}

inline Windows::Devices::Sensors::Barometer Barometer::GetDefault()
{
    return get_activation_factory<Barometer, Windows::Devices::Sensors::IBarometerStatics>().GetDefault();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Barometer> Barometer::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Barometer, Windows::Devices::Sensors::IBarometerStatics2>().FromIdAsync(deviceId);
}

inline hstring Barometer::GetDeviceSelector()
{
    return get_activation_factory<Barometer, Windows::Devices::Sensors::IBarometerStatics2>().GetDeviceSelector();
}

inline Windows::Devices::Sensors::Compass Compass::GetDefault()
{
    return get_activation_factory<Compass, Windows::Devices::Sensors::ICompassStatics>().GetDefault();
}

inline hstring Compass::GetDeviceSelector()
{
    return get_activation_factory<Compass, Windows::Devices::Sensors::ICompassStatics2>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Compass> Compass::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Compass, Windows::Devices::Sensors::ICompassStatics2>().FromIdAsync(deviceId);
}

inline Windows::Devices::Sensors::Gyrometer Gyrometer::GetDefault()
{
    return get_activation_factory<Gyrometer, Windows::Devices::Sensors::IGyrometerStatics>().GetDefault();
}

inline hstring Gyrometer::GetDeviceSelector()
{
    return get_activation_factory<Gyrometer, Windows::Devices::Sensors::IGyrometerStatics2>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Gyrometer> Gyrometer::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Gyrometer, Windows::Devices::Sensors::IGyrometerStatics2>().FromIdAsync(deviceId);
}

inline Windows::Devices::Sensors::Inclinometer Inclinometer::GetDefault()
{
    return get_activation_factory<Inclinometer, Windows::Devices::Sensors::IInclinometerStatics>().GetDefault();
}

inline Windows::Devices::Sensors::Inclinometer Inclinometer::GetDefaultForRelativeReadings()
{
    return get_activation_factory<Inclinometer, Windows::Devices::Sensors::IInclinometerStatics2>().GetDefaultForRelativeReadings();
}

inline Windows::Devices::Sensors::Inclinometer Inclinometer::GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype)
{
    return get_activation_factory<Inclinometer, Windows::Devices::Sensors::IInclinometerStatics3>().GetDefault(sensorReadingtype);
}

inline hstring Inclinometer::GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType)
{
    return get_activation_factory<Inclinometer, Windows::Devices::Sensors::IInclinometerStatics4>().GetDeviceSelector(readingType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Inclinometer> Inclinometer::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Inclinometer, Windows::Devices::Sensors::IInclinometerStatics4>().FromIdAsync(deviceId);
}

inline Windows::Devices::Sensors::LightSensor LightSensor::GetDefault()
{
    return get_activation_factory<LightSensor, Windows::Devices::Sensors::ILightSensorStatics>().GetDefault();
}

inline hstring LightSensor::GetDeviceSelector()
{
    return get_activation_factory<LightSensor, Windows::Devices::Sensors::ILightSensorStatics2>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::LightSensor> LightSensor::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<LightSensor, Windows::Devices::Sensors::ILightSensorStatics2>().FromIdAsync(deviceId);
}

inline Windows::Devices::Sensors::Magnetometer Magnetometer::GetDefault()
{
    return get_activation_factory<Magnetometer, Windows::Devices::Sensors::IMagnetometerStatics>().GetDefault();
}

inline hstring Magnetometer::GetDeviceSelector()
{
    return get_activation_factory<Magnetometer, Windows::Devices::Sensors::IMagnetometerStatics2>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Magnetometer> Magnetometer::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Magnetometer, Windows::Devices::Sensors::IMagnetometerStatics2>().FromIdAsync(deviceId);
}

inline Windows::Devices::Sensors::OrientationSensor OrientationSensor::GetDefault()
{
    return get_activation_factory<OrientationSensor, Windows::Devices::Sensors::IOrientationSensorStatics>().GetDefault();
}

inline Windows::Devices::Sensors::OrientationSensor OrientationSensor::GetDefaultForRelativeReadings()
{
    return get_activation_factory<OrientationSensor, Windows::Devices::Sensors::IOrientationSensorStatics2>().GetDefaultForRelativeReadings();
}

inline Windows::Devices::Sensors::OrientationSensor OrientationSensor::GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype)
{
    return get_activation_factory<OrientationSensor, Windows::Devices::Sensors::IOrientationSensorStatics3>().GetDefault(sensorReadingtype);
}

inline Windows::Devices::Sensors::OrientationSensor OrientationSensor::GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal)
{
    return get_activation_factory<OrientationSensor, Windows::Devices::Sensors::IOrientationSensorStatics3>().GetDefault(sensorReadingType, optimizationGoal);
}

inline hstring OrientationSensor::GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType)
{
    return get_activation_factory<OrientationSensor, Windows::Devices::Sensors::IOrientationSensorStatics4>().GetDeviceSelector(readingType);
}

inline hstring OrientationSensor::GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal)
{
    return get_activation_factory<OrientationSensor, Windows::Devices::Sensors::IOrientationSensorStatics4>().GetDeviceSelector(readingType, optimizationGoal);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::OrientationSensor> OrientationSensor::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<OrientationSensor, Windows::Devices::Sensors::IOrientationSensorStatics4>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> Pedometer::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Pedometer, Windows::Devices::Sensors::IPedometerStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> Pedometer::GetDefaultAsync()
{
    return get_activation_factory<Pedometer, Windows::Devices::Sensors::IPedometerStatics>().GetDefaultAsync();
}

inline hstring Pedometer::GetDeviceSelector()
{
    return get_activation_factory<Pedometer, Windows::Devices::Sensors::IPedometerStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> Pedometer::GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime)
{
    return get_activation_factory<Pedometer, Windows::Devices::Sensors::IPedometerStatics>().GetSystemHistoryAsync(fromTime);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> Pedometer::GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration)
{
    return get_activation_factory<Pedometer, Windows::Devices::Sensors::IPedometerStatics>().GetSystemHistoryAsync(fromTime, duration);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading> Pedometer::GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails)
{
    return get_activation_factory<Pedometer, Windows::Devices::Sensors::IPedometerStatics2>().GetReadingsFromTriggerDetails(triggerDetails);
}

inline PedometerDataThreshold::PedometerDataThreshold(Windows::Devices::Sensors::Pedometer const& sensor, int32_t stepGoal) :
    PedometerDataThreshold(get_activation_factory<PedometerDataThreshold, Windows::Devices::Sensors::IPedometerDataThresholdFactory>().Create(sensor, stepGoal))
{}

inline hstring ProximitySensor::GetDeviceSelector()
{
    return get_activation_factory<ProximitySensor, Windows::Devices::Sensors::IProximitySensorStatics>().GetDeviceSelector();
}

inline Windows::Devices::Sensors::ProximitySensor ProximitySensor::FromId(param::hstring const& sensorId)
{
    return get_activation_factory<ProximitySensor, Windows::Devices::Sensors::IProximitySensorStatics>().FromId(sensorId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ProximitySensorReading> ProximitySensor::GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails)
{
    return get_activation_factory<ProximitySensor, Windows::Devices::Sensors::IProximitySensorStatics2>().GetReadingsFromTriggerDetails(triggerDetails);
}

inline ProximitySensorDataThreshold::ProximitySensorDataThreshold(Windows::Devices::Sensors::ProximitySensor const& sensor) :
    ProximitySensorDataThreshold(get_activation_factory<ProximitySensorDataThreshold, Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>().Create(sensor))
{}

inline Windows::Devices::Sensors::SimpleOrientationSensor SimpleOrientationSensor::GetDefault()
{
    return get_activation_factory<SimpleOrientationSensor, Windows::Devices::Sensors::ISimpleOrientationSensorStatics>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometer2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometer3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometer3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometer4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometer4> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometerDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometerDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometerReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometerReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometerShakenEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometerShakenEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometerStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometerStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAccelerometerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAccelerometerStatics3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IActivitySensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IActivitySensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IActivitySensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IActivitySensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IActivitySensorReadingChangeReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IActivitySensorReadingChangeReport> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IActivitySensorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IActivitySensorStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IActivitySensorTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IActivitySensorTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAltimeter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAltimeter> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAltimeter2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAltimeter2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAltimeterReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAltimeterReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAltimeterReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAltimeterReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IAltimeterStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IAltimeterStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IBarometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IBarometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IBarometer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IBarometer2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IBarometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IBarometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IBarometerReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IBarometerReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IBarometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IBarometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IBarometerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IBarometerStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IBarometerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IBarometerStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompass> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompass> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompass2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompass2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompass3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompass3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompassDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompassDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompassReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompassReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompassReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompassReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompassReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompassReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompassReadingHeadingAccuracy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompassReadingHeadingAccuracy> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompassStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompassStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ICompassStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ICompassStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometer2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometer3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometer3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometerDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometerDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometerReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometerReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometerStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IGyrometerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IGyrometerStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometer2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometer3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometer3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerReadingYawAccuracy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerReadingYawAccuracy> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerStatics3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IInclinometerStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IInclinometerStatics4> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ILightSensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ILightSensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ILightSensor2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ILightSensor2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ILightSensorDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ILightSensorDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ILightSensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ILightSensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ILightSensorReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ILightSensorReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ILightSensorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ILightSensorStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ILightSensorStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ILightSensorStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometer2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometer3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometer3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometerDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometerDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometerReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometerReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometerStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IMagnetometerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IMagnetometerStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensor2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensor2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensor3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensor3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorReading2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorReading2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorStatics3> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IOrientationSensorStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IOrientationSensorStatics4> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IPedometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IPedometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IPedometer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IPedometer2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IPedometerDataThresholdFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IPedometerDataThresholdFactory> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IPedometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IPedometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IPedometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IPedometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IPedometerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IPedometerStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IPedometerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IPedometerStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IProximitySensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IProximitySensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IProximitySensorDataThresholdFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IProximitySensorDataThresholdFactory> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IProximitySensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IProximitySensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IProximitySensorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IProximitySensorStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::IProximitySensorStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::IProximitySensorStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISensorDataThreshold> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISensorDataThreshold> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISensorQuaternion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISensorQuaternion> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISensorRotationMatrix> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISensorRotationMatrix> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISimpleOrientationSensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISimpleOrientationSensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISimpleOrientationSensor2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISimpleOrientationSensor2> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ISimpleOrientationSensorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ISimpleOrientationSensorStatics> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Accelerometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Accelerometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::AccelerometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::AccelerometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::AccelerometerShakenEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::AccelerometerShakenEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ActivitySensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ActivitySensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ActivitySensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ActivitySensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ActivitySensorReadingChangeReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ActivitySensorReadingChangeReport> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ActivitySensorTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ActivitySensorTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Altimeter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Altimeter> {};

template<> struct hash<winrt::Windows::Devices::Sensors::AltimeterReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::AltimeterReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Barometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Barometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::BarometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::BarometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::BarometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::BarometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Compass> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Compass> {};

template<> struct hash<winrt::Windows::Devices::Sensors::CompassReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::CompassReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::CompassReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::CompassReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Gyrometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Gyrometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::GyrometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::GyrometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Inclinometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Inclinometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::InclinometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::InclinometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::LightSensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::LightSensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::LightSensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::LightSensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Magnetometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Magnetometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::MagnetometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::MagnetometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::OrientationSensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::OrientationSensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::OrientationSensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::OrientationSensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::Pedometer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::Pedometer> {};

template<> struct hash<winrt::Windows::Devices::Sensors::PedometerDataThreshold> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::PedometerDataThreshold> {};

template<> struct hash<winrt::Windows::Devices::Sensors::PedometerReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::PedometerReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::PedometerReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::PedometerReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ProximitySensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ProximitySensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ProximitySensorDataThreshold> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ProximitySensorDataThreshold> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ProximitySensorDisplayOnOffController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ProximitySensorDisplayOnOffController> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ProximitySensorReading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ProximitySensorReading> {};

template<> struct hash<winrt::Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sensors::SensorDataThresholdTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::SensorDataThresholdTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Sensors::SensorQuaternion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::SensorQuaternion> {};

template<> struct hash<winrt::Windows::Devices::Sensors::SensorRotationMatrix> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::SensorRotationMatrix> {};

template<> struct hash<winrt::Windows::Devices::Sensors::SimpleOrientationSensor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::SimpleOrientationSensor> {};

template<> struct hash<winrt::Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> {};

}

WINRT_WARNING_POP
