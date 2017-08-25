// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Display.1.h"
#include "winrt/impl/Windows.Devices.Sensors.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors {

struct WINRT_EBO Accelerometer :
    Windows::Devices::Sensors::IAccelerometer,
    impl::require<Accelerometer, Windows::Devices::Sensors::IAccelerometer2, Windows::Devices::Sensors::IAccelerometer3, Windows::Devices::Sensors::IAccelerometer4, Windows::Devices::Sensors::IAccelerometerDeviceId>
{
    Accelerometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Accelerometer GetDefault();
    static Windows::Devices::Sensors::Accelerometer GetDefault(Windows::Devices::Sensors::AccelerometerReadingType const& readingType);
};

struct WINRT_EBO AccelerometerReading :
    Windows::Devices::Sensors::IAccelerometerReading
{
    AccelerometerReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AccelerometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs
{
    AccelerometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AccelerometerShakenEventArgs :
    Windows::Devices::Sensors::IAccelerometerShakenEventArgs
{
    AccelerometerShakenEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ActivitySensor :
    Windows::Devices::Sensors::IActivitySensor
{
    ActivitySensor(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> GetDefaultAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration);
};

struct WINRT_EBO ActivitySensorReading :
    Windows::Devices::Sensors::IActivitySensorReading
{
    ActivitySensorReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ActivitySensorReadingChangeReport :
    Windows::Devices::Sensors::IActivitySensorReadingChangeReport
{
    ActivitySensorReadingChangeReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ActivitySensorReadingChangedEventArgs :
    Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs
{
    ActivitySensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ActivitySensorTriggerDetails :
    Windows::Devices::Sensors::IActivitySensorTriggerDetails
{
    ActivitySensorTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Altimeter :
    Windows::Devices::Sensors::IAltimeter
{
    Altimeter(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Altimeter GetDefault();
};

struct WINRT_EBO AltimeterReading :
    Windows::Devices::Sensors::IAltimeterReading
{
    AltimeterReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AltimeterReadingChangedEventArgs :
    Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs
{
    AltimeterReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Barometer :
    Windows::Devices::Sensors::IBarometer
{
    Barometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Barometer GetDefault();
};

struct WINRT_EBO BarometerReading :
    Windows::Devices::Sensors::IBarometerReading
{
    BarometerReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BarometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IBarometerReadingChangedEventArgs
{
    BarometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Compass :
    Windows::Devices::Sensors::ICompass,
    impl::require<Compass, Windows::Devices::Sensors::ICompass2, Windows::Devices::Sensors::ICompassDeviceId>
{
    Compass(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Compass GetDefault();
};

struct WINRT_EBO CompassReading :
    Windows::Devices::Sensors::ICompassReading,
    impl::require<CompassReading, Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>
{
    CompassReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CompassReadingChangedEventArgs :
    Windows::Devices::Sensors::ICompassReadingChangedEventArgs
{
    CompassReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Gyrometer :
    Windows::Devices::Sensors::IGyrometer,
    impl::require<Gyrometer, Windows::Devices::Sensors::IGyrometer2, Windows::Devices::Sensors::IGyrometerDeviceId>
{
    Gyrometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Gyrometer GetDefault();
};

struct WINRT_EBO GyrometerReading :
    Windows::Devices::Sensors::IGyrometerReading
{
    GyrometerReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GyrometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs
{
    GyrometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Inclinometer :
    Windows::Devices::Sensors::IInclinometer,
    impl::require<Inclinometer, Windows::Devices::Sensors::IInclinometer2, Windows::Devices::Sensors::IInclinometerDeviceId>
{
    Inclinometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Inclinometer GetDefault();
    static Windows::Devices::Sensors::Inclinometer GetDefaultForRelativeReadings();
    static Windows::Devices::Sensors::Inclinometer GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype);
};

struct WINRT_EBO InclinometerReading :
    Windows::Devices::Sensors::IInclinometerReading,
    impl::require<InclinometerReading, Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>
{
    InclinometerReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InclinometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs
{
    InclinometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LightSensor :
    Windows::Devices::Sensors::ILightSensor,
    impl::require<LightSensor, Windows::Devices::Sensors::ILightSensorDeviceId>
{
    LightSensor(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::LightSensor GetDefault();
};

struct WINRT_EBO LightSensorReading :
    Windows::Devices::Sensors::ILightSensorReading
{
    LightSensorReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LightSensorReadingChangedEventArgs :
    Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs
{
    LightSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Magnetometer :
    Windows::Devices::Sensors::IMagnetometer,
    impl::require<Magnetometer, Windows::Devices::Sensors::IMagnetometer2, Windows::Devices::Sensors::IMagnetometerDeviceId>
{
    Magnetometer(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::Magnetometer GetDefault();
};

struct WINRT_EBO MagnetometerReading :
    Windows::Devices::Sensors::IMagnetometerReading
{
    MagnetometerReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MagnetometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs
{
    MagnetometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OrientationSensor :
    Windows::Devices::Sensors::IOrientationSensor,
    impl::require<OrientationSensor, Windows::Devices::Sensors::IOrientationSensor2, Windows::Devices::Sensors::IOrientationSensorDeviceId>
{
    OrientationSensor(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::OrientationSensor GetDefault();
    static Windows::Devices::Sensors::OrientationSensor GetDefaultForRelativeReadings();
    static Windows::Devices::Sensors::OrientationSensor GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype);
    static Windows::Devices::Sensors::OrientationSensor GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal);
};

struct WINRT_EBO OrientationSensorReading :
    Windows::Devices::Sensors::IOrientationSensorReading,
    impl::require<OrientationSensorReading, Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>
{
    OrientationSensorReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OrientationSensorReadingChangedEventArgs :
    Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs
{
    OrientationSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Pedometer :
    Windows::Devices::Sensors::IPedometer,
    impl::require<Pedometer, Windows::Devices::Sensors::IPedometer2>
{
    Pedometer(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> GetDefaultAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration);
    static Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading> GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails);
};

struct WINRT_EBO PedometerDataThreshold :
    Windows::Devices::Sensors::ISensorDataThreshold
{
    PedometerDataThreshold(std::nullptr_t) noexcept {}
    PedometerDataThreshold(Windows::Devices::Sensors::Pedometer const& sensor, int32_t stepGoal);
};

struct WINRT_EBO PedometerReading :
    Windows::Devices::Sensors::IPedometerReading
{
    PedometerReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PedometerReadingChangedEventArgs :
    Windows::Devices::Sensors::IPedometerReadingChangedEventArgs
{
    PedometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProximitySensor :
    Windows::Devices::Sensors::IProximitySensor
{
    ProximitySensor(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Devices::Sensors::ProximitySensor FromId(param::hstring const& sensorId);
    static Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ProximitySensorReading> GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails);
};

struct WINRT_EBO ProximitySensorDataThreshold :
    Windows::Devices::Sensors::ISensorDataThreshold
{
    ProximitySensorDataThreshold(std::nullptr_t) noexcept {}
    ProximitySensorDataThreshold(Windows::Devices::Sensors::ProximitySensor const& sensor);
};

struct WINRT_EBO ProximitySensorDisplayOnOffController :
    Windows::Foundation::IClosable
{
    ProximitySensorDisplayOnOffController(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProximitySensorReading :
    Windows::Devices::Sensors::IProximitySensorReading
{
    ProximitySensorReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProximitySensorReadingChangedEventArgs :
    Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs
{
    ProximitySensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SensorDataThresholdTriggerDetails :
    Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails
{
    SensorDataThresholdTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SensorQuaternion :
    Windows::Devices::Sensors::ISensorQuaternion
{
    SensorQuaternion(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SensorRotationMatrix :
    Windows::Devices::Sensors::ISensorRotationMatrix
{
    SensorRotationMatrix(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SimpleOrientationSensor :
    Windows::Devices::Sensors::ISimpleOrientationSensor,
    impl::require<SimpleOrientationSensor, Windows::Devices::Sensors::ISimpleOrientationSensor2, Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>
{
    SimpleOrientationSensor(std::nullptr_t) noexcept {}
    static Windows::Devices::Sensors::SimpleOrientationSensor GetDefault();
};

struct WINRT_EBO SimpleOrientationSensorOrientationChangedEventArgs :
    Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs
{
    SimpleOrientationSensorOrientationChangedEventArgs(std::nullptr_t) noexcept {}
};

}
